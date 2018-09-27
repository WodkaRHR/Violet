.include "flags.s"
.include "callstds.s"
.include "species.s"
.include "vars.s"
.include "ordinals.s"
.include "overworld_script.s"


.global ow_script_0x877c66
ow_script_0x877c66:
lock
faceplayer
showmoney 0x0 0x0 0x0
loadpointer 0 str_rick
setvar 0x8000 1
special 0xE
loadpointer 0x0 str_0x8bfba9
callstd MSG_YES_NO
compare LASTRESULT 0x0
gotoif EQUAL ow_script_0x846bee
compare LASTRESULT 0x1
gotoif EQUAL ow_script_0x89bdc5
end


.global ow_script_0x89bdc5
ow_script_0x89bdc5:
checkmoney 150 0x0
compare LASTRESULT 0x0
gotoif EQUAL no_money
paymoney 0x96 0x0
loadpointer 0x0 str_0x812578
callstd MSG_FACE
special 0xF
sound 0x41
updatemoney 0x0 0x0 0x0
loadpointer 0x0 str_0x812509
callstd MSG_KEEPOPEN
closeonkeypress

loadpointer 0 str_rick
setvar 0x8000 1
special 0xE
after_paying:
loadpointer 0x0 str_0x81f8d2
callstd MSG_FACE
special 0xF
cry POKEMON_STARAPTOR 0x0
waitcry
setweather 0
doweather
setflag TRANS_DISABLE
clearflag TRANS_PALETTE_FETCH
setvar 0x8004 0xE
special 0x19
waitstate
setflag MAP_BGN_AUTO_ALIGN_OFF
waitstate

clearflag TRANS_DISABLE
clearflag MAP_BGN_AUTO_ALIGN_OFF
warpmuted 0x3 0x2 0x5 0xa 0x4
waitstate
release
end


.global ow_script_0x846bee
ow_script_0x846bee:
hidemoney 0x0 0x0
loadpointer 0x0 str_0x812597
callstd MSG_FACE
release
end

no_money:
loadpointer 0 str_no_money
callstd MSG_KEEPOPEN
goto after_paying


.ifdef LANG_GER

str_no_money:
	.autostring 36 2 "Oh, wie unglücklich!\pScheint mir, als hättest du nicht genügend GeldDOTS\pIch bin aber kein Unmensch und werde dich trotzdem nach Aktania fliegen!"

str_rick:
	.string "Rick"

.global str_0x8bfba9
str_0x8bfba9:
    .autostring 36 2 "Hallo, junger Trainer!\pMein Bruder Nick und ich betreiben diese Farm hier.\pWir züchten Pokémon aller Art, darunter auch Vogelpokémon.\pWenn du wilslt, bringt dich mein Staraptor von hier nach Aktania.\pKlingt spannend, nicht?\pUnd das ganze kostet dich gerade einmal 150 POKEDOLLAR.\pWas sagst du?\nWillst du den Service in Anspruch nehmen?"


        
.global str_0x812578

str_0x812578:
    .autostring 36 2 "Toll! Also, 150 POKEDOLLAR, bitte!"
        
        
.global str_0x812509

str_0x812509:
    .autostring 36 2 "PLAYER bezahlt\n150 POKEDOLLAR."
        
        
.global str_0x81f8d2

str_0x81f8d2:
    .autostring 36 2 "DankeschönDOTS\pKomm bitte mit, mein Staraptor wird dich jetzt nach Aktania fliegen."
        
.global str_0x812597

str_0x812597:
    .autostring 36 2 "Ganz wie du möchtest!\pSolltest du deine Meinung ändern, zögere nicht zu fragen!"
        
        

.elseif LANG_EN

.endif
