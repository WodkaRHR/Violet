.include "callstds.s"
.include "overworld_script.s"
.include "vars.s"
.include "mugshot.s"

.global ow_script_map_3_23_trigger_0
.global ow_script_0x94c3f4

ow_script_map_3_23_trigger_0:
lockall
fadesong 0
draw_mugshot MUGSHOT_PLAYER MUGSHOT_LEFT
loadpointer 0x0 str_0x94d460
callstd MSG
fadescreen 0x1
sound 0x64
checksound
callasm cmdx2D_force_pals_to_black
addvar STORY_PROGRESS 0x1
goto ow_script_0x94c3f4


ow_script_0x94c3f4:
getplayerpos 0x8008 0x8009
special2 0x800a 0x1aa
warpmuted 0x11 0x3 0x0 0x0 0x0
waitstate
end


.ifdef LANG_GER

str_0x94d460:
	.autostring 35 2 "DOTS DOTS DOTS\nDOTS DOTS DOTS\pDieses Gefühl DOTS DOTS DOTS\pEs ist wie auf Route 3 DOTS DOTS DOTS\pNicht schon wieder DOTS DOTS DOTS!"


.elseif LANG_EN

.endif