.include "overworld_script.s"

.include "std.s"

.global ow_script_0x81a42f
ow_script_0x81a42f:
trainerbattlestd 0x0 0x1c 0x0 str_0x81a447 str_0x81a495
loadpointer 0x0 str_0x81a495
callstd MSG_FACE
end
