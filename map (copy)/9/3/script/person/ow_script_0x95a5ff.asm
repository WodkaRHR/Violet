.include "overworld_script.s"

.include "std.s"

.global ow_script_0x95a5ff
ow_script_0x95a5ff:
loadpointer 0x0 str_0x95aae7
callstd MSG_FACE
end

.global str_0x95aae7

str_0x95aae7:
    .string "Ich bevorzuge den Bankautomaten.\nAuf diese Weise muss ich nicht so\llange anstehen."
        
        