.include "overworld_script.s"

.include "std.s"

.global ow_script_0x95eeb7
ow_script_0x95eeb7:
loadpointer 0x0 str_0x95eec1
callstd MSG_FACE
end

.global str_0x95eec1

str_0x95eec1:
    .string "Einer Legende nach lebt im Volcano\nein gruseliges Dämonenpokémon.\pEs spuckt Feuer und sein Atem\nentzündet Wälder."
        
        