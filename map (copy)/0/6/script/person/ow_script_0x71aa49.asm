.include "overworld_script.s"

.include "std.s"

.global ow_script_0x71aa49
ow_script_0x71aa49:
trainerbattlestd 0x0 0x59 0x0 str_0x71acf5 str_0x71ad42
loadpointer 0x0 str_0x71ad42
callstd MSG_FACE
end

.global str_0x71acf5

str_0x71acf5:
    .string "Wo ist denn bloß dieser Ausgang!\nOhne Blitz komme ich nicht voran!"
        
        
.global str_0x71ad42

str_0x71ad42:
    .string "Ich brauche Blitz..."
        
        