.include "overworld_script.s"

.include "std.s"

.global ow_script_0x93c1d1
ow_script_0x93c1d1:
loadpointer 0x0 str_0x93c923
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x93c923

str_0x93c923:
    .string "Das letzte Zeichen ist ein Kanji-\nZeichen.\lEs wird mit dem Wort Sprache\lübersetzt."
        
        
.elseif LANG_EN

.endif
