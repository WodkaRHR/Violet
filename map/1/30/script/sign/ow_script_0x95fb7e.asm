.include "overworld_script.s"

.include "std.s"

.global ow_script_0x95fb7e
ow_script_0x95fb7e:
loadpointer 0x0 str_0x95ffcf
callstd MSG_SIGN
end


.ifdef LANG_GER
.global str_0x95ffcf

str_0x95ffcf:
    .string "Haus des Glasbläsers"
        
        
.elseif LANG_EN

.endif
