.include "overworld_script.s"

.include "std.s"

.global ow_script_0x95a683
ow_script_0x95a683:
loadpointer 0x0 str_0x95c65d
callstd MSG_FACE
end

.global str_0x95c65d

str_0x95c65d:
    .string "Die Fossilforschung mag vielen\nsteintrocken erscheinen.\pTatsächlich sind wir aber den\nAnfängen der Mensch-Pokémon\lGeschichte auf der Spur."
        
        