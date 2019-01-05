import agb.types

# Define a model for the basestats

pokemon_type_type = agb.types.ScalarType('u8', constant='pokemon_types')
pokemon_growth_rate_type = agb.types.ScalarType('u8', constant='pokemon_growth_rates')
egg_group_type = agb.types.ScalarType('u8', constant='egg_groups')
item_type = agb.types.ScalarType('u16', constant='items')
ability_type = agb.types.ScalarType('u8', constant='abilities')
pokemon_shape_type = agb.types.ScalarType('u8', constant='pokemon_shapes')
move_type = agb.types.ScalarType('u16', constant='attacks')

color_and_flip_type = agb.types.BitfieldType('u8', [
    ('flip', None, 1),
    ('color', "pokemon_colors", 7)
])

basestat_type = agb.types.Structure([
    ('hp', 'u8'),
    ('attack', 'u8'),
    ('defense', 'u8'),
    ('speed', 'u8'),
    ('special-attack', 'u8'),
    ('special-defense', 'u8')
])

ev_yield_type = agb.types.BitfieldType('u16', [
    ('hp', None, 2),
    ('attack', None, 2),
    ('defense', None, 2),
    ('speed', None, 2),
    ('special-attack', None, 2),
    ('special-defense', None, 2),
    ('Padding', None, 4)
])

stat_type = agb.types.Structure([
    ('basestats', 'basestats.basestats'),
    ('type_0', 'basestats.pokemon_type'),
    ('type_1', 'basestats.pokemon_type'),
    ('capture_rate', 'u8'),
    ('exp_yield', 'u8'),
    ('ev_yield', 'basestats.ev_yield'),
    ('common_item', 'item'),
    ('rare_item', 'item'),
    ('gender_ratio', 'u8'),
    ('egg_cycles', 'u8'),
    ('base_happiness', 'u8'),
    ('growth_rate', 'basestats.pokemon_growth_rate'),
    ('egg_group_0', 'egg_group'),
    ('egg_group_1', 'egg_group'),
    ('ability_0', 'ability'),
    ('ability_1', 'ability'),
    ('safari_rate', 'u8'),
    ('color_and_flip', 'basestats.color_and_flip'),
    ('hidden_ability', 'ability'),
    ('shape', 'pokemon_shape')
])

stats_type = agb.types.FixedSizeArrayType(
    'basestats.stat',
    (lambda project, context: len(project.constants['species']))
)

levelup_move_type = agb.types.BitfieldType('u16', [
    ('move', 'attacks', 9),
    ('level', None, 7)
])

levelup_move_array_type = agb.types.UnboundedArrayType(
    'basestats.levelup_move',
    {'move' : 511, 'level' : 127}
)

levelup_move_array_pointer_type = agb.types.PointerType(
    'basestats.levelup_move_array',
    (lambda project, context, parents: (f'moveset_{context[-1]}', 2, False))
)

levelup_moves_type = agb.types.FixedSizeArrayType(
    'basestats.levelup_move_array_pointer',
    (lambda project, context: len(project.constants['species']))
)

move_array_type = agb.types.UnboundedArrayType(
    'move',
    0xFFFF
)

egg_move_array_pointer_type = agb.types.PointerType(
    'basestats.move_array',
    (lambda project, context, parents: (f'egg_moves_{context[-1]}', 2, False))
)

egg_moves_type = agb.types.FixedSizeArrayType(
    'basestats.egg_move_array_pointer',
    (lambda project, context: len(project.constants['species']))
)

tm_compatibility_type = agb.types.FixedSizeArrayType(
    'u8',
    (lambda project, context, parents: 8)
)

tm_compatibilities_type = agb.types.FixedSizeArrayType(
    'basestats.tm_compatibility',
    (lambda project, context: len(project.constants['species']))
)

tutor_compatibilities_type = agb.types.FixedSizeArrayType(
    'u32',
    (lambda project, context: len(project.constants['species']))
)

accessible_move_array_pointer_type = agb.types.PointerType(
    'basestats.move_array',
    (lambda project, context, parents: (f'accessible_moves_{context[-1]}', 2, False))
)

accessible_moves_type = agb.types.FixedSizeArrayType(
    'basestats.accessible_move_array_pointer',
    (lambda project, context: len(project.constants['species']))
)

pokemon_name_type = agb.types.StringType(fixed_size=11)

pokemon_names_type = agb.types.FixedSizeArrayType(
    'basestats.pokemon_name',
    (lambda project, context: len(project.constants['species']))
)

models_to_export = {
    'basestats.basestats' : basestat_type,
    'basestats.pokemon_type' : pokemon_type_type,
    'basestats.pokemon_growth_rate' : pokemon_growth_rate_type,
    'basestats.ev_yield' : ev_yield_type,
    'item' : item_type,
    'egg_group' : egg_group_type,
    'ability' : ability_type,
    'pokemon_shape' : pokemon_shape_type,
    'basestats.stat' : stat_type,
    'basestats.color_and_flip' : color_and_flip_type,
    'basestats' : stats_type,
    'basestats.levelup_move' : levelup_move_type,
    'basestats.levelup_move_array' : levelup_move_array_type,
    'basestats.levelup_move_array_pointer' : levelup_move_array_pointer_type,
    'levelup_moves' : levelup_moves_type,
    'move' : move_type,
    'basestats.move_array' : move_array_type,
    'basestats.egg_move_array_pointer' : egg_move_array_pointer_type,
    'egg_moves' : egg_moves_type,
    'basestats.tm_compatibility' : tm_compatibility_type,
    'tm_compatibilities' : tm_compatibilities_type,
    'tutor_compatibilities' : tutor_compatibilities_type,
    'basestats.accessible_move_array_pointer' : accessible_move_array_pointer_type,
    'accessible_moves' : accessible_moves_type,
    'basestats.pokemon_name' : pokemon_name_type,
    'pokemon_names' : pokemon_names_type,
}