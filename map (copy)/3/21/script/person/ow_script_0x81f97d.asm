.include "overworld_script.s"

.include "std.s"

.global ow_script_0x81f97d
ow_script_0x81f97d:
loadpointer 0x0 str_0x81fc05
callstd MSG_FACE
end

.global str_0x81fc05

str_0x81fc05:
    .string "Diese Wüste ist nichts für mein\nHerz. Die ständigen Täuschungen\lder Fata Morganas belasten mich zu\lsehr..."
        
        