.include "overworld_script.s"

.include "std.s"

.global ow_script_0x947b53
ow_script_0x947b53:
setvar LASTTALKED 0x1
lockall
loadpointer 0x0 str_0x8d4859
callstd MSG
applymovement 1 mov_2
loadpointer 0x0 str_0x8d4782
callstd MSG
setvar DYN_MULTICHOICE_ITEM_CNT 0x2
loadpointer 0x0 choice
multichoice 0x0 0x0 0x0 1
setvar DYN_MULTICHOICE_ITEM_CNT 0x0
compare LASTRESULT 0x1
gotoif LESS ow_script_0x8d44b9
call ow_script_0x8a1cc9
loadpointer 0x0 str_0x8d46e0
callstd MSG
special 0x7
trainerbattlecont 0x1 0x26 0x0 str_0x8d46bb str_0x8d469f ow_script_0x8d44dd

mov_2:
.byte 2, STOP

.align 4
choice:
    .word str_mill_choice_1, 0
    .word str_mill_choice_0, 0

.global ow_script_0x8d44dd
ow_script_0x8d44dd:
clearflag ROUTE_3_MILL_SAVED_ALTARIA_EGG
setvar 0x8000 0xfff8
special2 0x8000 0xc
loadpointer 0x0 str_0x8d4585
callstd MSG
goto ow_script_0x8d4513


.global ow_script_0x8d4513
ow_script_0x8d4513:
fadescreen 0x1
hidesprite 0x1
pause 0x18
fadescreen 0x0
setvar ROUTE_3_MILL_ALTARIA_EGG 0x1
releaseall
end


.global ow_script_0x8d44b9
ow_script_0x8d44b9:
call ow_script_0x8a1cc9
loadpointer 0x0 str_0x8d4644
callstd MSG
special 0x7
trainerbattlecont 0x1 0x26 0x0 str_0x8d4604 str_0x8d469f ow_script_0x8d44f8


.global ow_script_0x8d44f8
ow_script_0x8d44f8:
setflag ROUTE_3_MILL_SAVED_ALTARIA_EGG
setvar 0x8000 0x7
special2 0x8000 0xc
loadpointer 0x0 str_0x8d4525
callstd MSG
goto ow_script_0x8d4513


