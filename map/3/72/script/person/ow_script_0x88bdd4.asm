.include "overworld_script.s"

.include "std.s"

.global ow_script_0x88bdd4
ow_script_0x88bdd4:
loadpointer 0x0 str_0x8a068a
callstd MSG_FACE
end


.ifdef LANG_GER
.global str_0x8a068a

str_0x8a068a:
    .string "Sind die KP eines Pokémon niedrig,\nsollte man ein Heilitem benutzen.\lEinen Trank zum Beispiel!"
        
        
.elseif LANG_EN

.endif
