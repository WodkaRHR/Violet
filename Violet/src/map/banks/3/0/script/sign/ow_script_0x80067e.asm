.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x80067e
ow_script_0x80067e:
loadpointer 0x0 str_0x800688
callstd MSG_SIGN
end


.ifdef LANG_GER
.global str_0x800688

str_0x800688:
    .string "PLAYERs Hausツ"
        
        
.elseif LANG_EN

.endif
