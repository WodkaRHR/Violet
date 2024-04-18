let
  nixpkgs = fetchTarball "https://github.com/NixOS/nixpkgs/tarball/nixos-unstable";
  pkgs = import nixpkgs {
    overlays = [];
    config = {
      permittedInsecurePackages = [
        "freeimage-unstable-2021-11-01"
      ];
    };
  };

  nixgl = (
    import (fetchTarball "https://github.com/nix-community/nixGL/tarball/def00794f963f51ccdcf19a512006bd7f9c78970") {
      inherit pkgs;
  });
in

pkgs.mkShellNoCC (
  with pkgs;
  let
    # PyQt5 build version of pillow
    pillow = (
      python3.pkgs.pillow.overrideAttrs
        (
          final: previous:
          rec {
            inherit (previous) pname;
            version = "9.5.0";

            src = fetchPypi {
              pname = "Pillow";
              inherit version;
              sha256 = "v1SEedM2cm16Ds6252fhefveN4M65CeUYCYxoHDWMPE=";
            };

            patches = [
              (fetchpatch {
                # Fixed type handling for include and lib directories; Remove with 10.0.0
                url = "https://github.com/python-pillow/Pillow/commit/0ec0a89ead648793812e11739e2a5d70738c6be5.patch";
                hash = "sha256-m5R5fLflnbJXbRxFlTjT2X3nKdC05tippMoJUDsJmy0=";
              })
            ];

            pytestCheckPhase = "true";
          }));

    # Remove unnecessary (and conflicting) dependencies from `pyqtgraph`
    pyqtgraph = (
      python3.pkgs.pyqtgraph.overrideAttrs
        (
          final: previous:
            rec {
              inherit (previous) pname version;

              src = fetchPypi {
                inherit pname version;
                sha256 = "Z7DTcUBcT9XzWv7P6zfUtzvBGPGHxSqWXtaNYvWbZ7M=";
              };

              buildInputs =
                with python3.pkgs;
                [
                  pyqt5
                ];

              propagatedBuildInputs =
                with python3.pkgs;
                [
                  numpy
                ];
            }));

    # Build most recent supported version of `pyagb`
    pyagb = python3.pkgs.buildPythonPackage rec {
      pname = "pyagb";
      version = "153d282646f90b91ec079bb8151e3f662bf73baa";

      src = fetchFromGitHub {
        owner = "dfuchsgruber";
        repo = pname;
        rev = version;

        sha256 = "ZVzgXde2zbxKj3eEQLzHIzF2rS9Fe1oqVN6Hp81FdHI=";
      };

      preBuild = ''
        export HOME=$(pwd)
        # Fix syntax error in `pyagb`
        sed -i \
          -e "s/\(\"\),\?$/\1,/" \
          -e "\$a }" \
          pymap/config/description.py

        # Remove broken files
        rm -rf pymap/gui/deprecated
        '';

      nativeBuildInputs =
        with python3.pkgs;
        [
          pip
        ];

      propagatedBuildInputs =
        with python3.pkgs;
          [
            appdirs
            colormath
            deepdiff
            numpy
            pillow
            pypng
            pyqt5
            pyqtgraph
            scipy
            (
              # Use PyQt5 version of pillow in `scikit-image` and its dependencies
              scikit-image.override {
                inherit pillow;
                matplotlib = (matplotlib.override { inherit pillow; });
                imageio = (imageio.override { inherit pillow; });
              })
          ];

      postInstall = ''
        binName="pymapgui.py"
        pymap="$(mktemp -d --tmpdir="$out")/$binName"
        mv "$out/bin/$binName" "$pymap"
        makeWrapper "${nixgl.nixGLIntel}/bin/nixGLIntel" "$out/bin/$binName" --add-flags "$pymap"
      '';
    };

    # Build `grit`
    grit = stdenv.mkDerivation rec {
      pname = "grit";
      version = "0.8.17";

      src = fetchFromGitHub {
        owner = "devKitPro";
        repo = pname;
        rev = "v${version}";
        sha256 = "dIF59akcVaRH5/y7ZQ2FlGIOD8q3RS4bt1k5cEVqtUw=";
      };

      buildInputs = [
        autoreconfHook
        freeimage
      ];
    };

    # Build `wav2agb`
    wav2agb = stdenv.mkDerivation rec {
      pname = "wav2agb";
      version = "b461c20e1da68a95b4084456bf5fe651eb10a17f";

      src = fetchFromGitHub {
        owner = "ipatix";
        repo = pname;
        rev = version;
        sha256 = "fHK/pgZLj1sMhS+JZ5gi2lP+Jn47h0Au1dPXWfqDZ6M=";
      };

      nativeBuildInputs = [
        gcc12
      ];

      installPhase = ''
        runHook preInstall
        mkdir -p "$out/bin"
        cp wav2agb "$out/bin"
        runHook postInstall
      '';
    };

    # Build `midi2agb`
    midi2agb = stdenv.mkDerivation rec {
      pname = "midi2agb";
      version = "ff820bf5453a0e2b6a4612da2cd1d5fc8c220b20";

      src = fetchFromGitHub {
        owner = "ipatix";
        repo = pname;
        rev = version;
        fetchSubmodules = true;
        sha256 = "6MO4LLVP4SACEbY/rNmZOIAs896jVSKUr6wFtr1cFE4=";
      };

      installPhase = ''
        runHook preInstall
        mkdir -p "$out/bin"
        cp midi2agb "$out/bin"
        runHook postInstall
      '';
    };

    # Build `armips`
    armips = stdenv.mkDerivation rec {
      pname = "armips";
      version = "a8d71f0f279eb0d30ecf6af51473b66ae0cf8e8d";

      src = fetchFromGitHub {
        owner = "Kingcom";
        repo = pname;
        rev = version;
        fetchSubmodules = true;
        sha256 = "+W9SwlM6CqK8bz07U3yFgZNydo2mI4TvMvepPiqtIS4=";
      };

      buildInputs = [
        cmake
      ];

      installPhase = ''
        runHook preInstall
        mkdir -p "$out/bin"
        cp armips "$out/bin"
        runHook postInstall
      '';
    };

    # Build `gba-mus-ripper`
    gba-mus-ripper = stdenv.mkDerivation rec {
      pname = "gba-mus-ripper";
      version = "1211a9b8426fa79d2e29e394fa900c8ad56865b5";

      src = fetchFromGitHub {
        owner = "dfuchsgruber";
        repo = pname;
        rev = version;
        sha256 = "DMAHsiYurMufqQGdllhh2Yk2Qm8jOxAiwx56y8mhp08=";
      };

      preBuild = ''
        sed -i -e  "s/^FLAGS=/\0 -Wno-format-security /" Makefile
      '';

      installPhase = ''
        runHook preInstall
        mkdir -p "$out/bin"
        cp out/* "$out/bin"
        cp {goldensun_synth,psg_data}.raw "$out"
        runHook postInstall
      '';

      nativeBuildInputs = [
        glibc.static
        gcc12
      ];
    };

    # Patch `mgba` to work with nixGL
    mgba = runCommand "mgba" {
      buildInputs = [
        pkgs.makeWrapper
      ];
    } ''
      mkdir "$out"

      # Link all files from original `mgba`
      ln -s "${pkgs.mgba}"/* "$out"

      # Create `bin` folder with symlinks to the contents of `mgba`s `bin` folder
      rm "$out/bin"
      mkdir "$out/bin"
      ln -s "${pkgs.mgba}"/bin/* "$out/bin"

      # Replace `mgba` and `mgba-qt` with `nixGL` call
      for file in mgba mgba-qt
      do
        rm "$out/bin/$file";
        makeWrapper "${nixgl.nixGLIntel}/bin/nixGLIntel" "$out/bin/$file" --add-flags "${pkgs.mgba}/bin/$file"
      done
    '';
  in
  {
    packages = [
      armips
      bc
      gba-mus-ripper
      gcc-arm-embedded
      grit
      mgba
      midi2agb
      nixgl.nixGLIntel
      python3
      python3.pkgs.pyaml
      pyagb
      wav2agb
    ];

    # Dependencies for running `pymapgui`
    nativeBuildInputs =
    with pkgs;
    [
        qt5.wrapQtAppsHook
        makeWrapper
        openssl
    ];

    # Propagate location of Golden Sun synth using environment variables
    PSG_DATA = "${gba-mus-ripper}/psg_data.raw";
    GOLDENSUN_SYNTH = "${gba-mus-ripper}/goldensun_synth.raw";

    # Force using Xorg over Wayland (Wayland does not seem to work with nixGL)
    QT_QPA_PLATFORM = "xcb";
    QT_XCB_GL_INTEGRATION = "xcb_glx";

    # Allow using Qt5 in nix shell
    shellHook = ''
      setQtEnvironment=$(mktemp)
      random=$(openssl rand -base64 20 | sed "s/[^a-zA-Z0-9]//g")
      makeWrapper "$(type -p sh)" "$setQtEnvironment" "''${qtWrapperArgs[@]}" --argv0 "$random"
      sed "/$random/d" -i "$setQtEnvironment"
      source "$setQtEnvironment"
    '';
  })
