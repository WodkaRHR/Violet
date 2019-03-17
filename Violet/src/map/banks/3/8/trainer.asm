.include "overworld_script.s"
.include "callstds.s"

.global ow_script_route_8_trainer_0
.global ow_script_route_8_trainer_1
.global ow_script_route_8_trainer_2
.global ow_script_route_8_trainer_3
.global ow_script_route_8_trainer_4

ow_script_route_8_trainer_0:
trainerbattlestd 0 0xc5 0 str_trainer0_challange str_trainer0_defeat
loadpointer 0 str_trainer0_defeat
callstd MSG_FACE
end

ow_script_route_8_trainer_1:
trainerbattlestd 0 0xc6 0 str_trainer1_challange str_trainer1_defeat
loadpointer 0 str_trainer1_defeat
callstd MSG_FACE
end

ow_script_route_8_trainer_2:
trainerbattlestd 0 0xc7 0 str_trainer2_challange str_trainer2_defeat
loadpointer 0 str_trainer2_defeat
callstd MSG_FACE
end

ow_script_route_8_trainer_3:
trainerbattlestd 0 0xc8 0 str_trainer3_challange str_trainer3_defeat
loadpointer 0 str_trainer3_defeat
callstd MSG_FACE
end

ow_script_route_8_trainer_4:
trainerbattlestd 0 0xc9 0 str_trainer4_challange str_trainer4_defeat
loadpointer 0 str_trainer4_defeat
callstd MSG_FACE
end

.ifdef LANG_GER
str_trainer0_challange:
	.autostring 34 2 "Starke Arme und Beine sind alles, was man zum Glück im Leben braucht!"
str_trainer0_defeat:
	.autostring 34 2 "Du hast ordentlich Muckis, Kindchen."
str_trainer1_challange:
	.autostring 34 2 "Dieses Kribbeln, wenn es an der Angel zappelt!\pDeshalb liebe ich dieses Hobby."
str_trainer1_defeat:
	.autostring 34 2 "Ah, du hast mich zappeln lassen!"
str_trainer2_challange:
	.autostring 34 2 "Manche Menschen haben Angst vor Käfer-Pokémon.\pDabei sind sie doch die faszinierendsten aller Arten."
str_trainer2_defeat:
	.autostring 34 2 "Du bist zumindest nicht zimperlig, wenn es um Käfer-Pokémon geht."
str_trainer3_challange:
	.autostring 34 2 "Ich habe meine Pokémon in der Pension von Laubdorf aufgezogen.\pMal sehen, ob sie schon bereit für den Kampf sind."
str_trainer3_defeat:
	.autostring 34 2 "Vielleicht sollte ich meinen Pokémon noch etwas Zeit gebenDOTS"
str_trainer4_challange:
	.autostring 34 2 "Nur, wer seinen Geist völlig unter Kontrolle hat, kann zur Höchstform auflaufen!"
str_trainer4_defeat:
	.autostring 34 2 "Verrätst du mir deine Meditationstechnik?"

.elseif LANG_EN
str_trainer0_challange:
	.autostring 34 2 "Strong arms and legs are everything you need for a happy life!"
str_trainer0_defeat:
	.autostring 34 2 "You got some muskles, kid."
str_trainer1_challange:
	.autostring 34 2 "This itching when you got a Pokémon on the hook!\pThats why I love this hobby."
str_trainer1_defeat:
	.autostring 34 2 "You had me on the hook!"
str_trainer2_challange:
	.autostring 34 2 "Some people are afraid of Bug types.\pEven though they are the most fascinating kind."
str_trainer2_defeat:
	.autostring 34 2 "You are not squeamish when it comes to Bug types."
str_trainer3_challange:
	.autostring 34 2 "I raised my Pokémon in Leafvillage's daycare.\pLet's see if they are ready to battle."
str_trainer3_defeat:
	.autostring 34 2 "Maybe I should give my Pokémon a little bit more timeDOTS"
str_trainer4_challange:
	.autostring 34 2 "Only if you have entire control over your mind you can achieve peak performances!"
str_trainer4_defeat:
	.autostring 34 2 "Will you tell me you meditation technique?"

.endif
