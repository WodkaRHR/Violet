.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x8c1260
ow_script_0x8c1260:
loadpointer 0x0 str_0x8c1aac
callstd MSG_SIGN
end


.ifdef LANG_GER
.global str_0x8c1aac

str_0x8c1aac:
    .string "Tempel der Wächter"
        
        
.elseif LANG_EN

.endif
