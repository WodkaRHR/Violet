let
  nixpkgs = fetchTarball "https://github.com/NixOS/nixpkgs/tarball/nixos-unstable";
  pkgs = import nixpkgs {
    config = {};
    overlays = [];
    # Support for downloading the NVidia driver
    config.allowUnfree = true;
  };

  nixgl = (
    import (fetchTarball "https://github.com/nix-community/nixGL/tarball/def00794f963f51ccdcf19a512006bd7f9c78970") {
      inherit pkgs;
  });
in

pkgs.mkShellNoCC {
  packages =
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
              pythonCatchConflictsPhase = "true";
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

                pytestCheckPhase = "true";

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
          sed -i \
            -e "s/\(\"\),\?$/\1,/" \
            -e "\$a }" \
            pymap/config/description.py
          rm -rf pymap/gui/deprecated
          '';

        setuptoolsCheckPhase = "true";

        buildInputs =
          with python3.pkgs;
            [
              libGL
              libxkbcommon

              pip
              pyopengl-accelerate
              scipy
              setuptools
              wget
              wheel
        #     ];

        # propagatedBuildInputs =
        #   with python3.pkgs;
        #     [
              numpy
              pyqt5
            ];

        propagatedBuildInputs =
          with python3.pkgs;
            [
              appdirs
              colormath
              deepdiff
              nixgl.nixGLIntel
              numpy
              pypng
              pyqtgraph
              (
                # Use PyQt5 version of pillow in `scikit-image` and its dependencies
                scikit-image.override {
                  inherit pillow;
                  matplotlib = (matplotlib.override { inherit pillow; });
                  imageio = (imageio.override { inherit pillow; });
                })
            ];

        postInstall = ''
          tmpFile="$(mktemp)"
          pymap="$out/bin/$(basename "$tmpFile")"
          rm "$tmpFile"
          mv "$out/bin/pymapgui.py" "$pymap"
          echo "dumping info about nixGL"
          makeWrapper "${nixgl.nixGLIntel}/bin/nixGLIntel" "$out/bin/pymapgui.py" --add-flags "$pymap"
          echo "end dump"
        '';
      };
    in
      [
        python3.pkgs.pip
        python3
        pyagb
        python3.pkgs.pyqt5
        # qt5.full
        # qt5.qtbase
        # libsForQt5.qtwayland
      ] ++
      (with (
          import (fetchTarball "https://github.com/nix-community/nixGL/tarball/def00794f963f51ccdcf19a512006bd7f9c78970") {
            inherit pkgs;
          });
      [
        nixGLIntel
        auto.nixVulkanNvidia
      ]);

    # Dependencies for running `pymapgui`
    nativeBuildInputs =
    with pkgs;
    [
        qt5.wrapQtAppsHook
        makeWrapper
        openssl
    ];

    # Force using Xorg over Wayland (Wayland does not seem to work with nixGL)
    QT_QPA_PLATFORM = "xcb";
    QT_XCB_GL_INTEGRATION = "xcb_glx";

    shellHook = ''
      setQtEnvironment=$(mktemp)
      random=$(openssl rand -base64 20 | sed "s/[^a-zA-Z0-9]//g")
      makeWrapper "$(type -p sh)" "$setQtEnvironment" "''${qtWrapperArgs[@]}" --argv0 "$random"
      sed "/$random/d" -i "$setQtEnvironment"
      source "$setQtEnvironment"
    '';
}
