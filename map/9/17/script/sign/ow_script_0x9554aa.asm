.include "overworld_script.s"

.include "std.s"

.global ow_script_0x9554aa
ow_script_0x9554aa:
loadpointer 0x0 str_0x9553a2
callstd MSG_KEEPOPEN
special 0x2e
waitstate
compare LASTRESULT 0x7f
gotoif EQUAL ow_script_0x9554d7
special 0x2f
compare LASTRESULT 0x0
gotoif EQUAL ow_script_0x955420
closeonkeypress
special 0x111
waitstate
releaseall
end


.global ow_script_0x955420
ow_script_0x955420:
loadpointer 0x0 str_0x95544f
callstd MSG
end


.global ow_script_0x9554d7
ow_script_0x9554d7:
closeonkeypress
releaseall
end
