.include "overworld_script.s"

.include "std.s"

.global ow_script_0x85b3b7
ow_script_0x85b3b7:
copyvarifnotzero 0x8000 ITEM_FEUERSTEIN
copyvarifnotzero 0x8001 1
callstd ITEM_FIND
end
