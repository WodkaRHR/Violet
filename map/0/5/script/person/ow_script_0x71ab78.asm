.include "overworld_script.s"

.include "std.s"

.global ow_script_0x71ab78
ow_script_0x71ab78:
trainerbattlestd 0x0 0x50 0x0 str_0x71ab90 str_0x71abf9
loadpointer 0x0 str_0x71abf9
callstd MSG_FACE
end
