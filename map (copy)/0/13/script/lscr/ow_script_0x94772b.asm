.include "overworld_script.s"

.include "std.s"

.global ow_script_movs_0x94794b
ow_script_movs_0x94794b:
.byte LOOK_LEFT
.byte STOP


.global ow_script_movs_0x947948
ow_script_movs_0x947948:
.byte FACE_DOWN
.byte STOP


.global ow_script_0x94772b
ow_script_0x94772b:
lockall
call ow_script_0x92f097
loadpointer 0x0 str_0x947967
callstd MSG
special 0x7
pause 0x1
applymovement 0xc ow_script_movs_0x94794b
waitmovement 0x0
call ow_script_0x936c1c
loadpointer 0x0 str_0x9479c7
callstd MSG
special 0x7
pause 0x1
setvar 0x8004 0xb
setvar 0x8005 0x11
setvar 0x8006 0x22
special 0x24
applymovement 0xc ow_script_movs_0x947948
call ow_script_0x92f097
loadpointer 0x0 str_0x94794f
callstd MSG
special 0x7
pause 0x20
call ow_script_0x92f097
loadpointer 0x0 str_0x9477c9
callstd MSG
special 0x7
setvar 0x8004 0xc
setvar 0x8005 0x11
setvar 0x8006 0x22
special 0x24
waitmovement 0x0
hidesprite 0xb
hidesprite 0xc
addvar STORY_PROGRESS 0x1
setvar SONG_OVERRIDE 0x0
call ow_script_0x8f6d1b
playsong MUS_KONEX_KLUB 0x0
releaseall
end


.global ow_script_0x8f6d1b
ow_script_0x8f6d1b:
pause 0x40
fadescreen 0x1
fadesong MUS_0
loadpointer 0x0 str_0x8fb998
callstd MSG
warpmuted 0x3 0x4b 0xff 0x2 0x2
end

.global str_0x947967

str_0x947967:
    .string "Die Beben haben\nnachgelassen?\pUnd Groudon...\nist verschwunden?\pWas hat das zu bedeuten?"
        
        
.global str_0x9479c7

str_0x9479c7:
    .string "Offenbar hatten wir Glück\nim Unglück...\pDie Lage hat sich beruhigt, was\nmich in meinen Handlungen\lbestärkt.\pMein Weg scheint mir nun klar, ich\nsehe mein Schicksal..."
        
        
.global str_0x94794f

str_0x94794f:
    .string "Warte, Mistral!"
        
        
.global str_0x9477c9

str_0x9477c9:
    .string "... Ich verstehe\nehrlichgesagt nicht, was hier\lvorgefallen ist...\pAber es scheint so, als wären wir\nmit einem blauen Auge davon\lgekommen.\pPLAYER!\nIch möchte dir für alles danken.\pIch weiß, dass du eigentlich nach\nInferior gekommen bist, um einen\lArenaorden zu erringen.\pAls Arenaleiterin werde ich dir\ndiesen Wunsch nicht länger\lversagen.\pFordere mich in Inferiors Arena\nheraus!"
        
        
.global str_0x8fb998

str_0x8fb998:
    .string "Du hast nun das Ende der\nAlpha-Version von Pokémon Violet\lerreicht. Das Spiel endet\lvorrübergehend an diesem Punkt.\lDu wirst nun in eine Höhle auf\lRoute 2 gebracht, welche aus zwei\lRäumen besteht.\lIn einem der Räume findest du den\lEntwickler des Spiels vor, im\landeren nichts. Um deinen\lSpielstand in die nächste Version\lzu übertragen, musst du das Spiel\lin dem Raum speichern, in welchem\lsich NICHT der Entwickler Wodka\lbefindet."
        
        