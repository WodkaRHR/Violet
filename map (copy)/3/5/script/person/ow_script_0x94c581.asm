.include "overworld_script.s"

.include "std.s"

.global ow_script_0x94c581
ow_script_0x94c581:
loadpointer 0x0 str_0x94e0de
callstd MSG
end

.global str_0x94e0de

str_0x94e0de:
    .string "Mit deinem Flug-Pokémon hast du\nkeine Chance!\lVoltilamm, Donnerschock!"
        
        