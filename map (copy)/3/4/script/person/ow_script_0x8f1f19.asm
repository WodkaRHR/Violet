.include "overworld_script.s"

.include "std.s"

.global ow_script_0x8f1f19
ow_script_0x8f1f19:
loadpointer 0x0 str_0x926d6c
callstd MSG_FACE
end

.global str_0x926d6c

str_0x926d6c:
    .string "Die Parole? Warum sollte ich die\nParole kennen?"
        
        