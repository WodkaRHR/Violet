.include "ordinals.s"
.include "vars.s"
.include "movements.s"
.include "callstds.s"
.include "mugshot.s"
.include "flags.s"
.include "overworld_script.s"
.include "species.s"
.include "items.s"

.global ow_script_map_3_2_person_0
.global ow_script_0x8127f3
.global ow_script_map_3_2_person_8
.global ow_script_0x8cee77
.global ow_script_map_3_2_person_10
.global ow_script_map_3_2_person_7
.global ow_script_map_3_2_person_12
.global ow_script_0x8bfdcb
.global ow_script_map_3_2_person_14
.global ow_script_map_3_2_person_6
.global ow_script_map_3_2_person_3
.global ow_script_map_3_2_person_11
.global ow_script_map_3_2_person_2
.global ow_script_map_3_2_person_1
.global ow_script_map_3_2_person_5
.global ow_script_map_3_2_person_13
.global ow_script_0x8c1233
.global ow_script_map_3_2_person_9
.global ow_script_0x89bda0
.global ow_script_map_3_2_person_4
.global ow_script_map_3_2_person_20

ow_script_map_3_2_person_20:
    loadpointer 0x0 str_20
    callstd MSG_FACE
    end

.ifdef LANG_GER
str_20:
    .autostring 34 2 "Es ist wirklich ein JammerDOTS\pLester hätte diese Stadt sicherlich wieder aufbauen könnenDOTS\pAber seit er seinen Vater verloren hat, tut er rein gar nichts mehr.\pEr ist immerzu verdrossen und melancholisch.\pEr weigert sich, darüber hinwegzukommen und dieser Stadt zu einem Neuanfang zu verhelfen."
    .autostring 34 2 "Als ich einmal in einer Muschel nach einer Perle gesucht habe, hat mich ganz plötzlich ein Pokémon angegriffen.\pDas hat mich ganz schön erschreckt!"
.elseif LANG_EN
.endif

ow_script_map_3_2_person_6:
loadpointer 0x0 str_0x8cb3d6
callstd MSG_FACE
end


.ifdef LANG_GER

str_0x8cb3d6:
    .autostring 34 2 "Als ich einmal in einer Muschel nach einer Perle gesucht habe, hat mich ganz plötzlich ein Pokémon angegriffen.\pDas hat mich ganz schön erschreckt!"


.elseif LANG_EN

.endif


ow_script_map_3_2_person_0:
lock
faceplayer
loadpointer 0 str_rick
setvar 0x8000 1
special 0xE
loadpointer 0x0 str_0x8127cb
callstd MSG_YES_NO
compare LASTRESULT 0x0
gotoif EQUAL ow_script_0x8127f3
compare LASTRESULT 0x1
gotoif EQUAL ow_script_0x89bda0
end


ow_script_0x89bda0:
loadpointer 0x0 str_0x8dc0e4
callstd MSG_KEEPOPEN
setweather 0
doweather
cry POKEMON_STARAPTOR 0x0
waitcry
setflag TRANS_DISABLE
clearflag TRANS_PALETTE_FETCH
setvar 0x8004 0xf
special 0x19
waitstate
setflag MAP_BGN_AUTO_ALIGN_OFF
waitstate

clearflag TRANS_DISABLE
clearflag MAP_BGN_AUTO_ALIGN_OFF
warpmuted 0xf 0x1 0x1 0x6 0x4
end


ow_script_0x8127f3:
loadpointer 0x0 str_0x8127fe
callstd MSG_FACE
special 0xF
release
end


.ifdef LANG_GER



str_0x8127cb:
    .autostring 35 2 "Willst du wieder zurück nach Route 3?"

str_0x8dc0e4:
    .autostring 35 2 "Mein Staraptor wird dich jetzt zurückbringen."
str_rick:
	.string "Rick"
str_0x8127fe:
    .autostring 35 2 "Solltest du deine Meinung ändern, weißt du ja, wo du mich findest."
.elseif LANG_EN

.endif


ow_script_map_3_2_person_13:
goto ow_script_0x8cee77


ow_script_0x8cee77:
pause 0x10
callasm 0x919c301
end


ow_script_map_3_2_person_1:
loadpointer 0x0 str_0x847089
callstd MSG_FACE
end


.ifdef LANG_GER

str_0x847089:
    .autostring 34 2 "Wer könnte heute noch glauben, dass Bruchfels einmal ein Ferienparadies gewesen ist?\pSonnenschein und viele glückliche Menschen und Pokémon.\pDiese Tage sind längst vorüberDOTS"
.elseif LANG_EN
.endif


ow_script_map_3_2_person_4:
loadpointer 0x0 str_0x8470f4
callstd MSG_FACE
end


.ifdef LANG_GER

str_0x8470f4:
    .autostring 34 2 "Früher habe ich hier zusammen mit meiner Familie gelebt.\pSeit dem Meteoriteneinschlag allerdings sind meine Kinder und Enkel nach Kaskada gezogen."

.elseif LANG_EN

.endif


ow_script_map_3_2_person_3:
loadpointer 0x0 str_0x8c0c34
callstd MSG_FACE
end


.ifdef LANG_GER

str_0x8c0c34:
    .autostring 34 2 "Ein Freund hat mir gesagt, dass Bruchfels ein sehr beliebter Nistplatz für Wingull ist.\pAber außer dunklen Regenwolken kann ich weit und breit nichts sehenDOTS"
.elseif LANG_EN

.endif


ow_script_map_3_2_person_8:
loadpointer 0x0 str_0x8c0eba
callstd MSG_FACE
end


.ifdef LANG_GER
str_0x8c0eba:
    .autostring 34 2 "Die Einwohner von Bruchfels sind unserem ehemaligen Bürgermeister Harald auf ewig dankbar.\pImmerhin hat er sich selbstlos aufgeopfert, um diese Insel vor der totalen Zerstörung zu bewahren."
.elseif LANG_EN
.endif


ow_script_map_3_2_person_11:
loadpointer 0x0 str_0x88034f
callstd MSG_FACE
end


.ifdef LANG_GER

str_0x88034f:
    .autostring 34 2 "Bevor Bruchfels zu einem beliebten Freizeitparadies wurde, haben die Menschen hier nach seltenem Gestein gegraben.\pIch frage mich, ob man wohl in diesen Felswänden noch etwas davon finden kannDOTS"
.elseif LANG_EN

.endif


ow_script_map_3_2_person_10:
loadpointer 0x0 str_0x8cb5ae
callstd MSG_FACE
end


.ifdef LANG_GER

str_0x8cb5ae:
    .autostring 34 2 "Dass ich bei diesem Wetter keinen Regenschrim mitgenommen habeDOTS\pNa gut, es regnet hier fast jeden Tag seit dem großen UnglückDOTS"


.elseif LANG_EN

.endif


ow_script_map_3_2_person_9:
loadpointer 0x0 str_0x8c0f86
callstd MSG_FACE
end


.ifdef LANG_GER

str_0x8c0f86:
    .autostring 34 2 "Wenn eines meiner Pokémon Surfer beherrschen würde, könnte ich von hier aus auf den Wellen bis nach Laubdorf reiten!"


.elseif LANG_EN

.endif


ow_script_map_3_2_person_5:
loadpointer 0x0 str_0x8c0ff2
callstd MSG_FACE
end


.ifdef LANG_GER

str_0x8c0ff2:
    .autostring 34 2 "Bruchfels, die Stadt, die in der Sonne badet!\pKaum zu glauben, dass das einmal der Leitsruch dieser Insel gewesen sein soll, was?"


.elseif LANG_EN

.endif


ow_script_map_3_2_person_2:
loadpointer 0x0 str_0x8c105d
callstd MSG_FACE
end


.ifdef LANG_GER

str_0x8c105d:
    .autostring 34 2 "Die Vogelzüchter von Route 3 sind hart im Nehmen.\pIhre Staraptor fliegen Trainer sogar durch die Gewitterstürme hierher."

.elseif LANG_EN

.endif


ow_script_map_3_2_person_7:
checkflag AKTANIA_ROD
gotoif EQUAL ow_script_0x8bfdcb
lock
faceplayer
loadpointer 0x0 str_0x8c16a7
callstd MSG_YES_NO
compare LASTRESULT 0x0
gotoif EQUAL ow_script_0x8c1233
loadpointer 0x0 str_0x8c1201
callstd MSG
copyvarifnotzero 0x8000 ITEM_ANGEL
copyvarifnotzero 0x8001 1
callstd ITEM_OBTAIN
setflag AKTANIA_ROD
loadpointer 0x0 str_0x8c1179
callstd MSG
release
end


ow_script_0x8c1233:
loadpointer 0x0 str_0x8c1638
callstd MSG
release
end


ow_script_0x8bfdcb:
loadpointer 0x0 str_0x8c1179
callstd MSG_FACE
end


.ifdef LANG_GER

str_0x8c16a7:
    .autostring 34 2 "Der Angelsport ist allen anderen Sportarten überlegen.\pDa stimmst du mir doch zu, oder?"

str_0x8c1201:
    .autostring 34 2 "Du weißt, worauf es im ankommt!\nHier, nimm das."

str_0x8c1179:
    .autostring 34 2 "Einfach einen Köder ins Wasser werfen und hoffen, dass etwas anbeißt!\pUnd die Leidenschaft nicht vergessen, darauf kommt es an beim Angeln!"

str_0x8c1638:
    .autostring 34 2 "Du hast doch keinen blassen Schimmer!\pGeh mir aus den Augen, wenn du den Angelsport nicht zu würdigen weißt!"

.elseif LANG_EN

.endif


ow_script_movs_0x8ca7be:
.byte STEP_UP
.byte STEP_UP
.byte STEP_UP
.byte STOP


ow_script_map_3_2_person_12:
    checkflag FRBADGE_1
    gotoif 1 badge_done
    loadpointer 0x0 str_may_1
    show_mugshot MUGSHOT_MAY MUGSHOT_LEFT MSG_FACE
    end

badge_done:
    loadpointer 0 str_may_2
    show_mugshot MUGSHOT_MAY MUGSHOT_LEFT MSG_FACE
    end

.ifdef LANG_GER

str_may_1:
	.autostring 34 2 "Hey PLAYER!\nDu hast also auch hergefunden!\pDiese Stadt ist doch etwas sehr trostlos, findest du nicht?\pIch frage mich, was hier passiert ist, dass alles so verwüstet aussiehtDOTS\pWarum uns Larissa wohl hergeschickt hat?"
str_may_2:
    .autostring 34 2 "Du hast einen Arenakampf gewonnen, PLAYER?\pDas ist fantastischDOTS\pDeswegen sollten wir also herkommenDOTS\pIch weiß aber nicht, ob ich mich so einer Herausfoderung gewachsen fühleDOTS"

.elseif LANG_EN

.endif


ow_script_map_3_2_person_14:
setflag TRANS_DISABLE
loadpointer 0x0 str_0x8cb5e0
callstd MSG_FACE
end


.ifdef LANG_GER

str_0x8cb5e0:
    .string "Bonus"


.elseif LANG_EN

.endif