.include "overworld_script.s"

.include "std.s"

.global ow_script_0x8f08a1
ow_script_0x8f08a1:
goto ow_script_0x8f08aa


.global ow_script_0x8f08aa
ow_script_0x8f08aa:
loadpointer 0x0 str_0x8f4688
callstd MSG_KEEPOPEN
callasm 0x91a44c1
pause 0x1
end
