.include "overworld_script.s"

.include "std.s"

.global ow_script_0x961d09
ow_script_0x961d09:
trainerbattlestd 0x0 0xa1 0x0 str_0x963252 str_0x9632aa
loadpointer 0x0 str_0x9632aa
callstd MSG_FACE
end

.global str_0x963252

str_0x963252:
    .string "Manche würden behaupten, dass es\nnicht klug ist, im Aschegras ein\lPicknick zu halten."
        
        
.global str_0x9632aa

str_0x9632aa:
    .string "Ich aber sage nur...\nHust, hust..."
        
        