.include "overworld_script.s"

.include "std.s"

.global ow_script_0x8f1f07
ow_script_0x8f1f07:
loadpointer 0x0 str_0x8f2194
callstd MSG_FACE
end

.global str_0x8f2194

str_0x8f2194:
    .string "Von einem Untergrundhandel weiß\nich nichts...\pWie, du hast nicht gefragt?"
        
        