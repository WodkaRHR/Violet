.include "overworld_script.s"

.include "std.s"

.global ow_script_0x83913b
ow_script_0x83913b:
loadpointer 0x0 str_0x87fa5c
callstd MSG_FACE
end

.global str_0x87fa5c

str_0x87fa5c:
    .string "Die Fernsehberichte orientieren\nsich immer an den aktuellen\lEreignissen in der Region."
        
        