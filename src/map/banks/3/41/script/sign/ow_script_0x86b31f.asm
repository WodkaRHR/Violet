.include "callstds.s"
.include "overworld_script.s"


.global ow_script_0x86b31f
ow_script_0x86b31f:
loadpointer 0x0 str_0x87aba7
callstd MSG_SIGN
end


.ifdef LANG_GER
.global str_0x87aba7

str_0x87aba7:
    .autostring 36 2 "Achtung!\pWilde Bibor!\nBei Stichen sofort Gegengift auftragen!"
        
        
.elseif LANG_EN

.endif
