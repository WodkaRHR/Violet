.include "overworld_script.s"

.include "std.s"

.global ow_script_0x95caaf
ow_script_0x95caaf:
loadpointer 0x0 str_0x95cab9
callstd MSG_FACE
end

.global str_0x95cab9

str_0x95cab9:
    .string "Wusstest du, dass das Pokémon\nLagerunssystem entscheidend durch\ldie Laz.Corp voran gebracht wurde?\pAbteilungsleiter Bill aus Kanto\nist ein Genie!"
        
        