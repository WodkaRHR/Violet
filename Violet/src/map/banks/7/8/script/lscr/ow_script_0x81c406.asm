.include "flags.s"
.include "movements.s"
.include "items.s"
.include "callstds.s"
.include "vars.s"
.include "ordinals.s"
.include "overworld_script.s"
.include "mugshot.s"


.global ow_script_movs_0x8eca2a
ow_script_movs_0x8eca2a:
.byte FACE_DOWN
.byte SAY_EXCLAM
.byte STOP


.global ow_script_movs_0x8eca0e
ow_script_movs_0x8eca0e:
.byte STEP_UP
.byte STOP


.global ow_script_movs_0x8ec91e
ow_script_movs_0x8ec91e:
.byte SAY_QUESTION
.byte STOP


.global ow_script_0x81c406
ow_script_0x81c406:
checkflag SILVANIA_FOREST_FLASHBACK_DONE
gotoif EQUAL ow_script_0x8f7200
loadpointer 0x0 str_0x8eca2e
show_mugshot MUGSHOT_FAUN MUGSHOT_LEFT
sound 0x15
applymovement 0x2 ow_script_movs_0x8eca2a
applymovement 0x1 ow_script_movs_0x8eca2a
waitmovement 0x0
loadpointer 0x0 str_0x8eca11
show_mugshot MUGSHOT_FAUN MUGSHOT_LEFT
applymovement 0xff ow_script_movs_0x8eca0e
waitmovement 0x0
loadpointer 0x0 str_0x8ec9d0
show_mugshot MUGSHOT_FAUN MUGSHOT_LEFT

loadpointer 0 str_mia
setvar 0x8000 1
special 0xE
loadpointer 0x0 str_0x8ec921
callstd MSG
special 0xF

sound 0x15
applymovement 0xff ow_script_movs_0x8ec91e
waitmovement 0x0
loadpointer 0x0 str_0x8ec8fc
show_mugshot MUGSHOT_PLAYER MUGSHOT_LEFT
loadpointer 0x0 str_0x8ec8ab
show_mugshot MUGSHOT_FAUN MUGSHOT_LEFT

loadpointer 0 str_mia
setvar 0x8000 1
special 0xE
loadpointer 0x0 str_0x8ec84d
callstd MSG
special 0xF

loadpointer 0x0 str_0x8ec7d7
show_mugshot MUGSHOT_FAUN MUGSHOT_LEFT

loadpointer 0 str_mia
setvar 0x8000 1
special 0xE
loadpointer 0x0 str_0x8ec6df
callstd MSG
special 0xF

loadpointer 0x0 str_0x87e807
show_mugshot MUGSHOT_FAUN MUGSHOT_LEFT
goto ow_script_0x8ecac3


.global ow_script_0x8ecac3
ow_script_0x8ecac3:
goto ow_script_0x8fbc6c


.global ow_script_0x8fbc6c
ow_script_0x8fbc6c:
writebytetooffset 0x2 0x2036e28
warpmuted 0x1 0x0 0x8 0x0 0x0
addvar STORY_PROGRESS 0x1
waitstate
end


.global ow_script_movs_0x8f28b5
ow_script_movs_0x8f28b5:
.byte LOOK_LEFT
.byte SAY_EXCLAM
.byte STOP


.global ow_script_movs_0x8f28b2
ow_script_movs_0x8f28b2:
.byte LOOK_RIGHT
.byte STOP


.global ow_script_movs_0x8f27c8
ow_script_movs_0x8f27c8:
.byte FACE_DOWN
.byte STOP


.global ow_script_movs_0x8f26b0
ow_script_movs_0x8f26b0:
.byte LOOK_LEFT
.byte STOP


.global ow_script_movs_0x8f0a0b
ow_script_movs_0x8f0a0b:
.byte STEP_DOWN
.byte STEP_DOWN
.byte STEP_RIGHT
.byte FACE_DOWN
.byte STOP


.global ow_script_movs_0x8f0981
ow_script_movs_0x8f0981:
.byte LOOK_UP
.byte STOP


.global ow_script_0x8f7200
ow_script_0x8f7200:
loadpointer 0x0 str_0x8f28b9
show_mugshot MUGSHOT_FAUN MUGSHOT_LEFT
applymovement 0x2 ow_script_movs_0x8f28b5
waitmovement 0x0

loadpointer 0 str_mia
setvar 0x8000 1
special 0xE
loadpointer 0x0 str_0x8f3668
callstd MSG
special 0xF

applymovement 0x1 ow_script_movs_0x8f28b2
waitmovement 0x0
loadpointer 0x0 str_0x8f27cb
show_mugshot MUGSHOT_FAUN MUGSHOT_LEFT
applymovement 0x1 ow_script_movs_0x8f27c8
applymovement 0x2 ow_script_movs_0x8f27c8
waitmovement 0x0
loadpointer 0x0 str_0x8f276d
show_mugshot MUGSHOT_PLAYER MUGSHOT_LEFT
loadpointer 0x0 str_0x8f26b3
show_mugshot MUGSHOT_FAUN MUGSHOT_LEFT
applymovement 0x2 ow_script_movs_0x8f26b0
waitmovement 0x0

loadpointer 0 str_mia
setvar 0x8000 1
special 0xE
loadpointer 0x0 str_0x8f2607
callstd MSG
special 0xF

sound 0x63
showsprite 0x3
checksound
sound 0x15
applymovement 0x1 ow_script_movs_0x8eca2a
applymovement 0x2 ow_script_movs_0x8eca2a
applymovement 0xff ow_script_movs_0x8eca2a
waitmovement 0x0

loadpointer 0x0 str_0x8f257b
show_mugshot MUGSHOT_HARRENFELD MUGSHOT_RIGHT

loadpointer 0x0 str_0x8f0b3b
show_mugshot MUGSHOT_FAUN MUGSHOT_LEFT
applymovement 0x1 ow_script_movs_0x8f28b2
waitmovement 0x0
loadpointer 0x0 str_0x8f0ad6
show_mugshot MUGSHOT_FAUN MUGSHOT_LEFT
applymovement 0x1 ow_script_movs_0x8f27c8
waitmovement 0x0
loadpointer 0x0 str_0x8f0a28
show_mugshot MUGSHOT_FAUN MUGSHOT_LEFT

loadpointer 0 str_police
setvar 0x8000 0
special 0xE
loadpointer 0x0 str_0x8f0a11
callstd MSG
special 0xF

applymovement 0x3 ow_script_movs_0x8f27c8
waitmovement 0x0
sound 0x9
hidesprite 0x3
checksound
applymovement 0x1 ow_script_movs_0x8f0a0b
waitmovement 0x0
sound 0x9
hidesprite 0x1
checksound
applymovement 0xff ow_script_movs_0x8f0981
waitmovement 0x0
goto ow_script_0x8c7d62


.global ow_script_0x8c7d62
ow_script_0x8c7d62:
loadpointer 0 str_mia
setvar 0x8000 1
special 0xE
loadpointer 0x0 str_0x8f0984
callstd MSG_KEEPOPEN
special 0xF

fanfare 0x13e
loadpointer 0x0 str_0x8c7f7a
callstd MSG_KEEPOPEN
waitfanfare
closeonkeypress
additem ITEM_VM01 0x1
loadpointer 0 str_mia
setvar 0x8000 1
special 0xE
loadpointer 0x0 str_0x8c7f9a
callstd MSG
special 0xF

fadescreen 0x1
hidesprite 0x2
fadescreen 0x0
addvar STORY_PROGRESS 0x2
releaseall
end


.ifdef LANG_GER

str_mia:
	.string "Mia"

str_police:
	.string "Polizist"

.global str_0x8eca2e

str_0x8eca2e:
	.autostring 35 2 "Team Violet und die Revolutionsarmee gleichzeitig zu bekämpfen kann auch ich nicht bewerkstelligen DOTS"

        
.global str_0x8eca11

str_0x8eca11:
    .autostring 35 2 "Oh, PLAYER!\nDa bist du ja!"
        
        
.global str_0x8ec9d0

str_0x8ec9d0:
	.autostring 35 2 "Das ist Mia, die Arenaleiterin von Silvania."
        
        
.global str_0x8ec921

str_0x8ec921:
	.autostring 35 2 "Freut mich!\nIch danke dir, dass du uns im Kampf gegen Team Violet unterstützen willst.\pDOTS DOTS DOTS\pIch muss ehrlich sagen, als ich erfahren habe, dass uns Faun von den Top Vier unterstützt, ist mir ein Stein vom Herzen gefallen DOTS"
        
.global str_0x8ec8fc

str_0x8ec8fc:
    .autostring 35 2 "Herr Faun, Sie sind ein Mitglied der Top Vier?"
        
        
.global str_0x8ec8ab

str_0x8ec8ab:
	.autostring 35 2 "Ja, das bin ich!\pDenkst du, ich würde mir anmaßen, euch Rotzlöffeln etwas beizubringen, wenn ich nicht selbst etwas vorzuweisen hätte?"
        
        
.global str_0x8ec84d

str_0x8ec84d:
    .autostring 35 2 "Faun ist einer der Begründer der Top Vier.\pViele haben sich ihn sogar als Champion gewünscht!"
        
        
.global str_0x8ec7d7

str_0x8ec7d7:
    .autostring 35 2 "Ach, der Posten des Champions wäre nichts für mich gewesen.\pWir alle standen schon immer im Schatten von Lucius DOTS\pAber das tut jetzt nichts zur Sache.\pWir haben einige gewaltige Probleme, die die es zu lösen gilt!"
        
        
.global str_0x8ec6df
str_0x8ec6df:
	.autostring 35 2 "Augenzeugen berichten, dass Team Violet den renomierten Physiker Professor Primus als Geisel genommen hat.\pSollte das zutreffen, wird die ganze Sache weitaus heikler DOTS"

        
.global str_0x87e807

str_0x87e807:
	.autostring 35 2 "Ist Primus nicht für seine Forschung bezüglich der Raumzeit bekannt?\pDOTS DOTS DOTS\pDas würde zumindest einen Sinn ergeben.\pIm Silvania-Wald lebt ein Pokémon, das in der Lage ist, die Zeit zu manipulieren DOTS\pIch bin ihm in meinen jungen Tagen selbst einmal begegnet DOTS"
        
.global str_0x8f28b9

str_0x8f28b9:
	.autostring 35 2 "Wenn ich an meine Begegnung mit Celebi zurückdenke DOTS\pIch erinnere mich! DOTS\pEs hat mich vor einer Bedrohung gewarnt, die Thetos Zukunft gefährden würde.\pWenn es sich dabei auf Team Violet bezogen hat, stehen wir vor womöglich gravierenden Schwierigkeiten."
        
.global str_0x8f3668

str_0x8f3668:
    .autostring 35 2 "Sie meinen doch nicht etwa, dass Team Violet dem Pokémon Celebi Schaden zufügen will, Lord Faun?"
        
        
.global str_0x8f27cb

str_0x8f27cb:
    .autostring 35 2 "Schlimmer noch.\pCelebi hat ein Gespür für die Zukunft.\pWomöglich ist es die Organisation Team Violet selbst, die das Fortbestehen der Region gefährdet."
        
.global str_0x8f276d

str_0x8f276d:
    .autostring 35 2 "Ich habe einige Team Violet Rüpel über einen seltsamen Zeistein reden hören.\pSie haben Professor Tann in Bredouille gebracht, dass er ihnen etwas über diesen Stein verrät DOTS"
        
        
.global str_0x8f26b3

str_0x8f26b3:
	.autostring 35 2 "Der Zeitstein ist ein legendäres Artefakt, in dem laut der Erzählung das Herz der Zeit selbst schlagen soll.\pDOTS DOTS DOTS\pWenn Team Violet es auf dieses Objekt abgesehen hat, würde es auch Sinn ergeben, warum sie Professor Primus als Geisel genommen haben."

        
.global str_0x8f2607

str_0x8f2607:
    .autostring 35 2 "Sind diese Legenden denn wahr?\pDOTS DOTS DOTS\pIch bin wirklich froh, dass ein Mitglied der Top Vier sich darum kümmert DOTS DOTS DOTS"
        
.global str_0x8f257b

str_0x8f257b:
	.autostring 35 2 "Lord Faun!\pEntschuldigen Sie die Störung, aber der Anführer der Revolutionsbewegung wurde in Kaskada gewichtet!"
        
        
.global str_0x8f0b3b

str_0x8f0b3b:
    .autostring 35 2 "In Kaskada?\pVielleicht hole ich ihn noch ein.\pWenn ich Albus überzeugen kann, von seiner irrsinnigen Idee abzulassen DOTS\pDOTS DOTS DOTS"
        
        
.global str_0x8f0ad6

str_0x8f0ad6:
    .autostring 35 2 "Es tut mir leid, Mia DOTS\pAber um den Revolutionsanführer aufzuhalten, bedarf es eines Top Vier Mitglieds.\pUnd ich hoffe, die Sache friedlich lösen zu können.\pIch vertraue dir und PLAYER die Lage an."
        
        
.global str_0x8f0a28

str_0x8f0a28:
    .autostring 35 2 "Ich habe vertrauen, dass ihr die Sache in den Griff kriegt.\pImmerhin habe ich euch beide ausgebildet!"


.global str_0x8f0a11

str_0x8f0a11:
    .autostring 35 2 "Machen wir uns auf den Weg, Lord Faun!"
        
        
.global str_0x8f0984

str_0x8f0984:
	.autostring 35 2 "Das ist gar nicht gut.\pEin Kommandant von Team Violet DOTS\pDas sind gefährliche Leute!\pDOTS DOTS DOTS\pAber wir haben wohl keine Wahl, was?\pWenn du im Silvania-Wald zurecht kommen willst, wirst du das hier benötigen."

.global str_0x8c7f7a

str_0x8c7f7a:
    .autostring 35 2 "Mia übergibt PLAYER\nZerschneider!"
        
        
.global str_0x8c7f9a

str_0x8c7f9a:
	.autostring 35 2 "Leider kannst du diese Versteckte Maschine erst benutzen, wenn du den Waldorden im Kampf gegen mich errungen hast.\pWir sollten diese Formalität also schnell über die Bühne bringen.\pAußerdem kann ich mir so ein Bild von deinen Fähigkeiten machen.\pWir werden jedes Bisschen Glück brauchen, dass wir kriegen können.\pIch werde in die Arena zurückkehren.\pWir sollten keine Zeit verlieren DOTS"
        
.elseif LANG_EN

.endif
