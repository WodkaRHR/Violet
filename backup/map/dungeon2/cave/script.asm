.include "vars.s"
.include "overworld_script.s"
.include "flags.s"
.include "callstds.s"
.include "ordinals.s"
.include "attacks.s"

.equ DTYPE_CAVE, 2


.global ow_script_dungeon_cave_collapsing

ow_script_dungeon_cave_collapsing:
	lockall
	fadesong 0
	loadpointer 0x0 str_dungeon_cave_collapsing
	callstd MSG
    setvar DUNGEON_TYPE 0
	callasm dungeon2_exit
	waitstate
	end

.ifdef LANG_GER
str_dungeon_cave_collapsing:
	.autostring 35 2 "Die Höhle scheint nicht stabil zu sein...\pSchnell zum Ausgang, bevor sie einstürtzt!"
.endif

.ifdef LANG_EN
str_dungeon_cave_collapsing:
	.autostring 35 2 "The cave does not seem to be stable...\pBetter find the exit before it collapses!"
.endif


.global ow_script_dungeon2_enter_cave
.global ow_script_dungeon2_enter_cave_field

ow_script_dungeon2_enter_cave:
	@ Check levelscript state ??
	special 0x187
	compare LASTRESULT 0x2
	gotoif EQUAL ow_script_dungeon2_cave_none

	loadpointer 0x0 str_dungeon_enter_cave_0
	callstd MSG_KEEPOPEN

	@ Check if the player has secret power

	checkflag PLAYER_CAN_ENTER_DUNGEONS
	gotoif 0 ow_script_dungeon2_dont_enter_cave

	checkattack ATTACK_GEHEIMPOWER
	compare LASTRESULT 0x6
	gotoif EQUAL ow_script_dungeon2_dont_enter_cave

	setanimation 0x0 LASTRESULT
	bufferpartypokemon 0x0 LASTRESULT
	bufferattack 0x1 ATTACK_GEHEIMPOWER

	@ Ask if the dungeon is to be entered

	loadpointer 0x0 str_dungeon_enter_cave_1
	callstd MSG_YES_NO
	compare LASTRESULT 0
	gotoif 1 ow_script_dungeon2_dont_enter_cave
ow_script_dungeon2_enter_cave_field:
	@ Display animation
	doanimation 0x2
	nop
	waitstate

    callasm dungeon2_seed_init
    setvar DUNGEON_TYPE DTYPE_CAVE
    setvar DUNGEON_STEPS 0
    callasm dungeon_map_entrance_set_flag
    callasm dungeon2_enter_cave
    waitstate
    end

ow_script_dungeon2_dont_enter_cave:
	closeonkeypress
ow_script_dungeon2_cave_none:
	end

.ifdef LANG_GER
str_dungeon_enter_cave_0:
	.autostring 35 2 "Eine Höhle scheint sich hinter dieser Felswand zu verbergen..."

str_dungeon_enter_cave_1:
	.autostring 35 2 "Möchtest du Geheimpower nutzen, um die Felswand aufzubrechen?"
.endif

.ifdef LANG_EN
str_dungeon_enter_cave_0:
	.autostring 35 2 "There seems to be some kind of cave behind this rock face..."

str_dungeon_enter_cave_1:
	.autostring 35 2 "Do you want to use Secret Power to break the rock face open?"
.endif


