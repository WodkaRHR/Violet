.include "overworld_script.s"

.include "std.s"

.global ow_script_0x813040
ow_script_0x813040:
loadpointer 0x0 str_0x81a262
callstd MSG_FACE
end

.global str_0x81a262

str_0x81a262:
    .string "Von Silvania kommt man in den\nZeitwald. Wieso er Zeitwald heißt?\lKeine Ahnung."
        
        