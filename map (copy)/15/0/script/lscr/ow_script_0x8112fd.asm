.include "overworld_script.s"

.include "std.s"

.global ow_script_0x8112fd
ow_script_0x8112fd:
checkflag FRBADGE_1
callif EQUAL ow_script_0x8caf33
end


.global ow_script_0x8caf33
ow_script_0x8caf33:
movesprite2 0x6 0x1c 0x31
spritebehave 0x6 0x2
movesprite2 0x2f 0x25 0x34
spritebehave 0x2f 0x2
movesprite2 0x23 0x23 0x2b
movesprite2 0x24 0x27 0x29
movesprite2 0x25 0x2c 0x26
movesprite2 0x26 0x34 0x29
movesprite2 0x27 0x36 0x2e
movesprite2 0x28 0x35 0x32
movesprite2 0x29 0x38 0x34
movesprite2 0x2a 0x1f 0x2e
return
