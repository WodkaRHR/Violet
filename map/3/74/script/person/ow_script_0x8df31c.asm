.include "overworld_script.s"

.include "std.s"

.global ow_script_0x8df31c
ow_script_0x8df31c:
copyvarifnotzero 0x8000 ITEM_FLUCHTSEIL
copyvarifnotzero 0x8001 ITEM_MEISTERBALL
callstd ITEM_FIND
end
