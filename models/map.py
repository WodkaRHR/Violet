import agb.types

# Define pymap model classes specific for Pokémon Violet

person_behaviour_type = agb.types.ScalarType('u8', constant='person_behaviours')
flag_type = agb.types.ScalarType('u16', constant='flags')
var_type = agb.types.ScalarType('u16', constant='vars')
connection_direction_type = agb.types.ScalarType('u32', constant='map_connections')
song_type = agb.types.ScalarType('u16', constant='songs')
namespace_type = agb.types.ScalarType('u8', constant='map_namespaces')
flash_type_type = agb.types.ScalarType('u8', constant='map_flash_types')
weather_type = agb.types.ScalarType('u8', constant='map_weathers')
types_type = agb.types.ScalarType('u8', constant='map_types')
show_name_type = agb.types.ScalarType('u8', constant='map_show_name_types')
battle_style_type = agb.types.ScalarType('u8', constant='map_battle_styles')

# Events
person_type = agb.types.Structure([
    ('target_index', 'u8', 0),
    ('picture', 'u8', 0),
    ('field_2', 'u8', 0),
    ('field_3', 'u8', 0),
    ('x', 's16', 0),
    ('y', 's16', 0),
    ('level', 'u8', 0),
    ('behaviour', 'person_behaviour', 0),
    ('behaviour_range', 'u8', 0),
    ('field_B', 'u8', 0),
    ('is_trainer', 'u8', 0),
    ('field_D', 'u8', 0),
    ('alert_radius', 'u16', 0),
    ('script', 'ow_script_pointer', 0),
    ('flag', 'flag', 0),
    ('field_16', 'u16', 0)
])


trigger_type = agb.types.Structure([
    ('x', 's16', 0),
    ('y', 's16', 0),
    ('level', 'u8', 0),
    ('field_5', 'u8', 0),
    ('var', 'var', 0),
    ('value', 'u16', 0),
    ('field_A', 'u8', 0),
    ('field_B', 'u8', 0),
    ('script', 'ow_script_pointer', 0)
])

signpost_item_type = agb.types.BitfieldType('u32', [
    ('item', 'items', 16),
    ('flag', None, 8),
    ('amount', None, 5),
    ('chunk', None, 3)
])

# Behaviour for map tilesets

tileset_behaviour_type = agb.types.BitfieldType('u32', [
    ('behaviour', None, 9),
    ('hm_usage', 'block_hm_usage', 5),
    ('field_2', None, 4),
    ('field_3', None, 6),
    ('encounter_type', None, 3),
    ('field_5', None, 2),
    ('field_6', None, 2),
    ('field_7', None, 1)
])

# Map connections

connection_type = agb.types.Structure([
    ('direction', 'connection.direction', 0),
    ('displacement', 's32', 0),
    ('bank', 'u8', 0),
    ('map_idx', 'u8', 0),
    ('field_A', 'u8', 0),
    ('field_B', 'u8', 0)
])

# Map header

header_type = agb.types.Structure([
    ('footer', 'footer_pointer', 0),
    ('events', 'header.event_header_pointer', 0),
    ('levelscripts', 'levelscript_header_pointer', 0),
    ('connections', 'header.connection_header_pointer', 0),
    ('music', 'song', 0),
    ('footer_idx', 'u16', 0),
    ('namespace', 'map_namespace', 0),
    ('flash_type', 'map_flash_type', 0),
    ('weather', 'map_weather', 0),
    ('type', 'map_type', 0),
    ('field_18', 'u8', 0),
    ('show_name', 'map_show_name', 0),
    ('field_1A', 'u8', 0),
    ('battle_style', 'map_battle_style', 0)
], hidden_members=set([
    'events', 'connections'
]))

# Export new models

models_to_export = {
    'person_behaviour' : person_behaviour_type,
    'flag' : flag_type,
    'var' : var_type,
    'song' : song_type,
    'tileset.behaviour' : tileset_behaviour_type,
    'map_namespace' : namespace_type,
    'map_flash_type' : flash_type_type,
    'map_weather' : weather_type,
    'map_type' : types_type,
    'map_show_name' : show_name_type,
    'map_battle_style' : battle_style_type,
    'event.person' : person_type,
    'event.trigger' : trigger_type,
    'event.signpost_item' : signpost_item_type,
    'connection.direction' : connection_direction_type,
    'connection.connection' : connection_type,
    'header' : header_type
}
