.include "overworld_script.s"

.include "std.s"

.global ow_script_0x8f1dac
ow_script_0x8f1dac:
loadpointer 0x0 str_0x8f1db6
callstd MSG_SIGN
end


.ifdef LANG_GER
.global str_0x8f1db6

str_0x8f1db6:
    .string "Norden: Küstenberg"
        
        
.elseif LANG_EN

.endif
