.include "overworld_script.s"

.include "std.s"

.global ow_script_0x8f1c87
ow_script_0x8f1c87:
loadpointer 0x0 str_0x8f1c91
callstd MSG_SIGN
end


.ifdef LANG_GER
.global str_0x8f1c91

str_0x8f1c91:
    .string "Kaskada, die Stadt der Wasserfälle"
        
        
.elseif LANG_EN

.endif
