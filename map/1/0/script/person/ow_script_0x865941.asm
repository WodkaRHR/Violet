.include "overworld_script.s"

.include "std.s"

.global ow_script_0x865941
ow_script_0x865941:
copyvarifnotzero 0x8000 ITEM_SUPERSCHUTZ
copyvarifnotzero 0x8001 ITEM_MEISTERBALL
callstd ITEM_FIND
end
