.include "overworld_script.s"

.include "std.s"

.global ow_script_0x95e114
ow_script_0x95e114:
loadpointer 0x0 str_0x95e11e
callstd MSG_FACE
end

.global str_0x95e11e

str_0x95e11e:
    .string "Weiter westwärts kommst du zum Fuß\ndes Volcanos, einem aktiven\lVulkan.\pDass jemand dort eine Stadt\nerrichtet hat, erscheint mir sehr\lfragwürdig..."
        
        