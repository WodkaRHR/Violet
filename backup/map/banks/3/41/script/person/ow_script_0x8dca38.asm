.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x8dca38
ow_script_0x8dca38:
loadpointer 0x0 str_0x8de6ea
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x8de6ea

str_0x8de6ea:
    .string "Jeder korrupte Polizist soll\nbezahlen für seine Taten!"
        
        
.elseif LANG_EN

.endif
