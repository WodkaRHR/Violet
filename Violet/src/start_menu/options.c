#include "types.h"
#include "bg.h"
#include "superstate.h"
#include "save.h"
#include "text.h"
#include "language.h"
#include "io.h"
#include "list_menu.h"
#include "oam.h"
#include "overworld/map_control.h"
#include "overworld/start_menu.h"
#include "fading.h"
#include "options.h"
#include "agbmemory.h"
#include "bios.h"
#include "transparency.h"
#include "dma.h"
#include "callbacks.h"
#include "item/item.h"
#include "vars.h"
#include "constants/difficulties.h"
#include "debug.h"
#include "overworld/map_control.h"
#include "music.h"
#include "menu_indicators.h"
#include "flags.h"

EWRAM options_state_t *options_state = NULL;

TWO_OPTIONS_STRINGS(
    dns_colors,
    LANGDEP(PSTRING("DNS-Farben"), PSTRING("DNS-Colors")),
    LANGDEP(PSTRING("Ein"), PSTRING("On")),
    LANGDEP(PSTRING("Farben werden von der Tageszeit\nbeeinflusst."), PSTRING("Colors are affected by the daytime.")),
    LANGDEP(PSTRING("Aus"), PSTRING("Off")),
    LANGDEP(PSTRING("Farben werden nicht von der\nTageszeit beeinflusst."), PSTRING("Colors are unaffected by the\ndaytime."))
);
static int option_dns_colors_getter() { return csave.settings.dns_disabled ? OPTION_OFF : OPTION_ON; }
static void option_dns_color_setter(int is_off) { csave.settings.dns_disabled = (u8)(is_off & 1); }

TWO_OPTIONS_STRINGS(
    automatic_hm_usage,
    LANGDEP(PSTRING("VM-Benutzung"), PSTRING("HM-Usage")),
    LANGDEP(PSTRING("Automatisch"), PSTRING("Automatic")),
    LANGDEP(PSTRING("VMs werden automatisch benutzt, wenn sie\neinsetzbar sind."), PSTRING("HMs are used automatically if they\nare usable.")),
    LANGDEP(PSTRING("Manuell"), PSTRING("Manual")),
    LANGDEP(PSTRING("VMs werden nicht automatisch benutzt."), PSTRING("HMs are not used automatically."))
);
static int option_automatic_hm_usage_getter() { return csave.settings.manual_hm_usage ? OPTION_OFF : OPTION_ON; }
static void option_automatic_hm_usage_setter(int is_off) { csave.settings.manual_hm_usage = (u8)(is_off & 1); }

THREE_OPTIONS_STRINGS(
    text_tempo,
    LANGDEP(PSTRING("Text-Tempo"), PSTRING("Text-Speed")),
    LANGDEP(PSTRING("Langsam"), PSTRING("Slow")),
    LANGDEP(PSTRING("Texte werden langsam abgespielt."), PSTRING("Texts are displayed slowly.")),
    LANGDEP(PSTRING("Normal"), PSTRING("Normal")),
    LANGDEP(PSTRING("Texte werden im normalen Tempo\nabgespielt."), PSTRING("Texts are displayed normally\nfast.")),
    LANGDEP(PSTRING("Schnell"), PSTRING("Fast")),
    LANGDEP(PSTRING("Texte werden schnell abgespielt."), PSTRING("Texts are displayed fastly."))
);

static int option_text_tempo_getter() { return save2->text_speed; }
static void option_text_tempo_setter(int speed) { save2->text_speed = (u8)(speed & 3); }

TWO_OPTIONS_STRINGS(
    battle_animations,
    LANGDEP(PSTRING("Kampf-Animationen"), PSTRING("Battle Effects")),
    LANGDEP(PSTRING("Ein"), PSTRING("On")),
    LANGDEP(PSTRING("Kampf-Animationen werden gezeigt."), PSTRING("Battle animations are shown.")),
    LANGDEP(PSTRING("Aus"), PSTRING("Off")),
    LANGDEP(PSTRING("Kampf-Animationen werden nicht\ngezeigt."), PSTRING("Battle animations are not\nshown."))
);
static int option_battle_animations_getter() { return save2->battle_animations_off ? OPTION_OFF : OPTION_ON; }
static void option_battle_animations_setter(int is_off) { save2->battle_animations_off = (u8)(is_off & 1); }

TWO_OPTIONS_STRINGS(
    battle_style,
    LANGDEP(PSTRING("Kampfstil"), PSTRING("Battle Style")),
    LANGDEP(PSTRING("Wechsel"), PSTRING("Shift")),
    LANGDEP(PSTRING("Pokémon können gewechselt werden,\nwenn ein Pokémon besiegt wird."), PSTRING("Pokémon can be switched when a\nPokémon is defeated.")),
    LANGDEP(PSTRING("Folge"), PSTRING("Set")),
    LANGDEP(PSTRING("Pokémon können nicht gewechselt\nwerden, wenn ein Pokémon besiegt wird."), PSTRING("Pokémon can not be switched when a\nPokémon is defeated."))
);
static int option_battle_style_getter() { return save2->battle_style; }
static void option_battle_style_setter(int style) { save2->battle_style = (u8)(style & 1); }
static bool option_battle_style_available() { return *var_access(DIFFICULTY) != DIFFICULTY_HARD; }

TWO_OPTIONS_STRINGS(
    sound,
    LANGDEP(PSTRING("Sound"), PSTRING("Sound")),
    LANGDEP(PSTRING("Stereo"), PSTRING("Stereo")),
    LANGDEP(PSTRING("Sounds benutzen den linken und\nrechten Lautsprecher."), PSTRING("Sounds use both right and left\nspeakers.")),
    LANGDEP(PSTRING("Mono"), PSTRING("Mono")),
    LANGDEP(PSTRING("Sounds werden gleichmäßig auf alle\nLautsprecher aufgeteilt."), PSTRING("Sounds are using only one\nchannel."))
);
static int option_sound_getter() { return save2->sound_is_mono; }
static void option_sound_setter(int is_mono) { save2->sound_is_mono = (u8)(is_mono & 1); }

TWO_OPTIONS_STRINGS(
    detector,
    LANGDEP(PSTRING("Detektor"), PSTRING("Item Finder")),
    LANGDEP(PSTRING("An"), PSTRING("On")),
    LANGDEP(PSTRING("Detektor zeigt versteckte\nItems an."), PSTRING("Hidden items are indicated\nby the item finder.")),
    LANGDEP(PSTRING("Aus"), PSTRING("Off")),
    LANGDEP(PSTRING("Versteckte Items werden\nnicht angezeigt."), PSTRING("Hidden items are not\nindicated."))
);

static int option_detector_getter() { return csave.settings.detector_notifications; }
static void option_detector_setter(int value) { csave.settings.detector_notifications = (u8)(value & 3); }

static const u8 str_option_frame_style_name[] = LANGDEP(PSTRING("Rahmen"), PSTRING("Frame"));
static int option_frame_style_getter() { return save2->tbox_style; }
static void option_frame_style_setter(int style) { save2->tbox_style = (u8)(style & 31); } 
static const u8 str_option_frame_options_description[] = LANGDEP(PSTRING("Dargestellte Textrahmen entsprechen\nMotiv BUFFER_1."), PSTRING("Text frames are displayed in\nmotive BUFFER_1."));

TWO_OPTIONS_STRINGS(
    wonderdust,
    LANGDEP(PSTRING("Wunderstaub"), PSTRING("Wonderdust")),
    LANGDEP(PSTRING("Alle"), PSTRING("All")),
    LANGDEP(PSTRING("Beeren werden mit maximaler\nAnzahl an Wunderstaub bestreut."), PSTRING("The maximal number of Wonderdust\nis used on berry trees.")),
    LANGDEP(PSTRING("Eins"), PSTRING("One")),
    LANGDEP(PSTRING("Wunderstaub wird nur ein Mal\nbei Beeren benutzt."), PSTRING("Wonderdust is used only once\non berry trees."))
);
static int option_wonderdust_getter() { return csave.settings.wonder_dust_automatic_quantity_disabled ? OPTION_OFF : OPTION_ON; }
static void option_wonderdust_setter(int is_off) { csave.settings.wonder_dust_automatic_quantity_disabled = (u8)(is_off & 1); }

TWO_OPTIONS_STRINGS(
    item_obtain_descriptions,
    LANGDEP(PSTRING("Item Beschreibung"), PSTRING("Item Description")),
    LANGDEP(PSTRING("An"), PSTRING("On")),
    LANGDEP(PSTRING("Beschreibungen werden beim\nItem Erhalt dargestellt."), PSTRING("Descriptions are displayed when\nobtaining items.")),
    LANGDEP(PSTRING("Aus"), PSTRING("Off")),
    LANGDEP(PSTRING("Beschreibungen werden beim\nItem Erhalt nicht dargestellt."), PSTRING("Descriptions are not displayed\nwhen obtaining items."))
);
static int option_item_obtain_descriptions_getter() { return csave.settings.item_obtaining_descriptions_disabled ? OPTION_OFF : OPTION_ON; }
static void option_item_obtain_descriptions_setter(int is_off) { csave.settings.item_obtaining_descriptions_disabled = (u8)(is_off & 1); }


TWO_OPTIONS_STRINGS(
    start_menu_scanner,
    LANGDEP(PSTRING("Scanner im KEY_STARTMenü"), PSTRING("Scanner in KEY_STARTMenu")),
    LANGDEP(PSTRING("An"), PSTRING("On")),
    LANGDEP(PSTRING("Pokémon in der Nähe werden im\nKEY_START Menü angezeigt."), PSTRING("Pokémon nearby are displayed in\nthe KEY_START menu.")),
    LANGDEP(PSTRING("Aus"), PSTRING("Off")),
    LANGDEP(PSTRING("Pokémon in der Nähe werden im\nKEY_START Menü nicht angezeigt."), PSTRING("Pokémon nearby are not displayed\nin the KEY_START menu."))
);
static int option_start_menu_scanner_getter() { return csave.settings.start_menu_scanner_disabled ? OPTION_OFF : OPTION_ON; }
static void option_start_menu_scanner_setter(int is_off) { csave.settings.start_menu_scanner_disabled = (u8)(is_off & 1); }
static bool option_start_menu_scanner_available() {return checkflag(FLAG_POKEDEX_SCANNER);}

const option_t options[NUM_OPTIONS] = {
    [OPTION_FRAME_STYLE] = {
        .name = str_option_frame_style_name,
        .getter = option_frame_style_getter,
        .setter = option_frame_style_setter,
        .num_options = 10,
    },
    [OPTION_DNS_COLORS] = {
        .name = str_option_dns_colors_name,
        .getter = option_dns_colors_getter,
        .setter = option_dns_color_setter,
        .num_options = ARRAY_COUNT(option_dns_colors_names),
        .options = option_dns_colors_names,
        .option_descriptions = option_dns_colors_descriptions,
    },
    [OPTION_AUTOMATIC_HM_USAGE] = {
        .name = str_option_automatic_hm_usage_name,
        .getter = option_automatic_hm_usage_getter,
        .setter = option_automatic_hm_usage_setter,
        .num_options = ARRAY_COUNT(option_automatic_hm_usage_names),
        .options = option_automatic_hm_usage_names,
        .option_descriptions = option_automatic_hm_usage_descriptions,
    },
    [OPTION_TEXT_SPEED] = {
        .name = str_option_text_tempo_name,
        .getter = option_text_tempo_getter,
        .setter = option_text_tempo_setter,
        .num_options = ARRAY_COUNT(option_text_tempo_names),
        .options = option_text_tempo_names,
        .option_descriptions = option_text_tempo_descriptions,
    },
    [OPTION_BATTLE_ANIMATIONS] = {
        .name = str_option_battle_animations_name,
        .getter = option_battle_animations_getter,
        .setter = option_battle_animations_setter,
        .num_options = ARRAY_COUNT(option_battle_animations_names),
        .options = option_battle_animations_names,
        .option_descriptions = option_battle_animations_descriptions,
    },
    [OPTION_BATTLE_STYLE] = {
        .name = str_option_battle_style_name,
        .getter = option_battle_style_getter,
        .setter = option_battle_style_setter,
        .available = option_battle_style_available,
        .num_options = ARRAY_COUNT(option_battle_style_names),
        .options = option_battle_style_names,
        .option_descriptions = option_battle_style_descriptions,
    },
    [OPTION_SOUND_STATE] = {
        .name = str_option_sound_name,
        .getter = option_sound_getter,
        .setter = option_sound_setter,
        .num_options = ARRAY_COUNT(option_sound_names),
        .options = option_sound_names,
        .option_descriptions = option_sound_descriptions,
    },
    [OPTION_DETECTOR] = {
        .name = str_option_detector_name,
        .getter = option_detector_getter,
        .setter = option_detector_setter,
        .num_options = ARRAY_COUNT(option_detector_names),
        .options = option_detector_names,
        .option_descriptions = option_detector_descriptions,
    },
    [OPTION_WONDER_DUST_AUTOMATIC_USAGE] = {
        .name = str_option_wonderdust_name,
        .getter = option_wonderdust_getter,
        .setter = option_wonderdust_setter,
        .num_options = ARRAY_COUNT(option_wonderdust_names),
        .options = option_wonderdust_names,
        .option_descriptions = option_wonderdust_descriptions,
    },
    [OPTION_ITEM_OBTAIN_DESCRIPTION] = {
        .name = str_option_item_obtain_descriptions_name,
        .getter = option_item_obtain_descriptions_getter,
        .setter = option_item_obtain_descriptions_setter,
        .num_options = ARRAY_COUNT(option_item_obtain_descriptions_names),
        .options = option_item_obtain_descriptions_names,
        .option_descriptions = option_item_obtain_descriptions_descriptions,
    },
    [OPTION_START_MENU_SCANNER] = {
        .name = str_option_start_menu_scanner_name,
        .getter = option_start_menu_scanner_getter,
        .setter = option_start_menu_scanner_setter,
        .num_options = ARRAY_COUNT(option_start_menu_scanner_names),
        .options = option_start_menu_scanner_names,
        .option_descriptions = option_start_menu_scanner_descriptions,
        .available = option_start_menu_scanner_available,
    },
};

enum {
    RESET,
    BG_SETUP,
    GFX_LOAD,
    TBOX_SETUP,
    LIST_SETUP,
    PAL_SETUP,
    BG_COPY,
    FADE_TO_IDLE,
};

static const bg_config bg_configs[] = {
    {.bg_id = 0, .char_base = 2, .map_base = 31, .size = 0, .color_mode = 0, .priority = 0},
    {.bg_id = 1, .char_base = 0, .map_base = 29, .size = 0, .color_mode = 0, .priority = 1},
};

enum {
    TBOX_TITLE = 0,
    TBOX_DESCRIPTION,
    TBOX_LIST,
    NUM_TBOXES,
};

static const tboxdata options_tboxes[] = {
    [TBOX_TITLE] = {
        .bg_id = 0, .x = 10, .y = 0, .w = 10, .h = 2, .pal = 15, .start_tile = 33,
    },
    [TBOX_DESCRIPTION] = {
        .bg_id = 0, .x = 2, .y = 15, .w = 26, .h = 5, .pal = 15, .start_tile = 33 + 10 * 2,
    },
    [TBOX_LIST] = {
        .bg_id = 0, .x = 2, .y = 4, .w = 26, .h = 10, .pal = 14, .start_tile = 33 + 10 * 2 + 26 * 5,
    },
    [NUM_TBOXES] = {
        .bg_id = 0xFF,
    }
};

static const tbox_font_colormap title_fontcolmap = {
    .background = 0, .body = 2, .edge = 1,
};

static const tbox_font_colormap setting_fontcolmap = {
    .background = 0, .body = 4, .edge = 5,
};


static void options_callback_exit(u8 self) {
    if (fading_is_active())
        return;
    map_reload_continuation = map_reload_continuation_exit_warp;
    callback1_set(super.saved_callback);
    tbox_free_all();
    sound_set_pokemon_cries_stereo(save2->sound_is_mono);
    free(options_state);
    big_callback_delete(self);
}

static void options_print_description(int idx) {
    const option_t *opt = options + idx;
    const u8 *description;
    if (idx == OPTION_FRAME_STYLE) {
        itoa(buffer0, opt->getter() + 1, ITOA_NO_PADDING, 2);
        string_decrypt(strbuf, str_option_frame_options_description);
        description = strbuf;
    } else {
        description = opt->option_descriptions[opt->getter()];
    }
    tbox_flush_set(TBOX_DESCRIPTION, 0);
    tbox_print_string(TBOX_DESCRIPTION, 2, 0, 8, 0, 0, &title_fontcolmap, 0, description);
}

static void options_callback_idle(u8 self) {
    if (fading_is_active() || dma3_busy(-1))
        return;
    
    list_menu_get_scroll_and_row(options_state->list_menu_callback_idx, &(options_state->cursor_position), &(options_state->cursor_above));
    int d = 0;
    if (super.keys_new.keys.left)
        d = -1;
    else if (super.keys_new.keys.right)
        d = 1;
    if (d != 0) {
        int idx = options_state->cursor_position + options_state->cursor_above;
        const option_t *opt = options + idx;
        int value = opt->getter() + d;
        if (value >= 0 && value < opt->num_options) {
            opt->setter(value);
            list_menu_print(options_state->list_menu_callback_idx);
            options_print_description(idx);
            if (idx == OPTION_FRAME_STYLE)
                tbox_init_frame_set_style(TBOX_LIST, 1, 13 * 16);
        }
    } else {
        int input = list_menu_process_input(options_state->list_menu_callback_idx);
        if (input == LIST_MENU_B_PRESSED) {
            fadescreen(0xFFFFFFFF, 0, 0, 16, 0);
            big_callbacks[self].function = options_callback_exit;
        }
    }
}

static void list_menu_print_callback_null(u8 tbox_idx, int idx, u8 y) {
    const option_t *opt = options + idx - 1;
    const u8 *setting;
    if (idx - 1 == OPTION_FRAME_STYLE) {
        itoa(buffer0, opt->getter() + 1, ITOA_NO_PADDING, 2);
        u8 str_motive[] = LANGDEP(PSTRING("Motiv BUFFER_1"), PSTRING("Motiv BUFFER_1"));
        string_decrypt(strbuf, str_motive);
        setting = strbuf;
    } else {
        setting = opt->options[opt->getter()];
    }
    tbox_print_string(tbox_idx, 2, 128, y, 0, 0, &setting_fontcolmap, 0xFF, setting);
}


static void list_menu_cursor_moved_callback(int idx, u8 is_on_initialization, list_menu *list) {
    list_menu_generic_cursor_callback(idx, is_on_initialization, list);
    options_print_description(idx - 1);
}

static const list_menu_template list_template = {
    .items = NULL,
    .cursor_moved_callback = list_menu_cursor_moved_callback,
    .item_print_callback = list_menu_print_callback_null,
    .item_cnt = 0, .max_items_showed = 5, .tbox_idx = TBOX_LIST,
    .header_x = 0, .item_x = 10, .cursor_x = 2, .up_text_y = 1, .cursor_pal = 2, .fill_value = 0,
    .cursor_shadow_color = 3, .letter_spacing = 1, .item_vertical_padding = 2, .scroll_multiple = 0,
    .font = 2
};

static void options_initialize() {
    switch(options_state->initialization_state) {
        case RESET: {
            dma0_reset_callback();
            oam_reset();
            big_callback_delete_all();
            fading_cntrl_reset();
            oam_palette_allocation_reset();
            vblank_handler_set(NULL);
            bg_reset(0);
            bg_setup(0, bg_configs, ARRAY_COUNT(bg_configs));
            ++(options_state->initialization_state);
            break;
        }
        case BG_SETUP: {
            bg_set_tilemap(0, malloc_and_clear(0x800));
            bg_set_tilemap(1, malloc_and_clear(0x800));
            bg_sync_display_and_show(0);
            bg_sync_display_and_show(1);
            bg_display_sync();
            bg_virtual_map_displace(0, 0, 0);
            bg_virtual_set_displace(0, 0, 0);
            bg_virtual_map_displace(1, 0, 0);
            bg_virtual_set_displace(1, 0, 0);
            ++(options_state->initialization_state);
            break;
        }
        case GFX_LOAD: {
            int zero = 0;
            cpuset(&zero, CHARBASE(bg_configs[0].char_base), CPUSET_HALFWORD | CPUSET_HALFWORD_SIZE(32) | CPUSET_FILL);
            lz77uncompvram(gfx_options_uiTiles, CHARBASE(bg_configs[1].char_base));
            lz77uncompwram(gfx_options_uiMap, bg_get_tilemap(1));
            ++(options_state->initialization_state);
            break;
        }
        case LIST_SETUP: {
            gp_list_menu_template = list_template;
            gp_list_menu_template.items = options_state->list_menu_items;
            for (u8 i = 0; i < NUM_OPTIONS; i++) {
                if (options[i].available == NULL || options[i].available()) {
                    options_state->list_menu_items[gp_list_menu_template.item_cnt].idx = i + 1;
                    options_state->list_menu_items[gp_list_menu_template.item_cnt].text = options[i].name;
                    gp_list_menu_template.item_cnt++;
                }
            }
            options_state->list_menu_callback_idx = list_menu_new(&gp_list_menu_template, 0, 0);
            scroll_indicator_template crafting_ui_scroll_indicator_template_up_down = {
                .arrow0_type = SCROLL_ARROW_UP, .arrow0_x = 120, .arrow0_y = 32,
                .arrow1_type = SCROLL_ARROW_DOWN, .arrow1_x = 120, .arrow1_y = 112,
                .arrow0_threshold = 0, 
                .arrow1_threshold = (u16) MAX(0, (gp_list_menu_template.item_cnt - gp_list_menu_template.max_items_showed)),
                .tiles_tag = 111,
                .pal_tag = 111,
            };
            u8 scroll_indicator_oam_idx = scroll_indicator_new(&crafting_ui_scroll_indicator_template_up_down, &(options_state->cursor_position));
            scroll_indicator_set_oam_priority(scroll_indicator_oam_idx, 0, 0);
            ++(options_state->initialization_state);
            break;
        }
        case PAL_SETUP: {
            pal_decompress(gfx_options_uiPal, 0, 16 * sizeof(color_t));
            pal_copy(tbox_palette_transparent, 15 * 16, 16 * sizeof(color_t));
            pal_set_all_to_black();
            ++(options_state->initialization_state);
            break;
        }
        case TBOX_SETUP: {

            tbox_sync_with_virtual_bg_and_init_all(options_tboxes);
            tbox_flush_set(TBOX_DESCRIPTION, 0);
            tbox_flush_set(TBOX_TITLE, 0);
            tbox_flush_set(TBOX_LIST, 0);
            tbox_init_frame_set_style(TBOX_LIST, 1, 13 * 16);

            tbox_tilemap_draw(TBOX_DESCRIPTION);
            tbox_tilemap_draw(TBOX_TITLE);
            tbox_tilemap_draw(TBOX_LIST);
            tbox_frame_draw_outer(TBOX_LIST, 1, 13);
            u8 str_title[] = LANGDEP(
                PSTRING("Optionen"),
                PSTRING("Options")
            );
            int str_width = string_get_width(2, str_title, 0);
            tbox_print_string(TBOX_TITLE, 2, (u16)((options_tboxes[TBOX_TITLE].w * 8 - str_width) / 2), 0, 0, 0, &title_fontcolmap, 0, str_title);
            ++(options_state->initialization_state);
            break;
        }
        case BG_COPY: {
            bg_virtual_sync(0);
            bg_virtual_sync(1);
            bg_virtual_sync(2);
            ++(options_state->initialization_state);
            break;
        }
        case FADE_TO_IDLE: {
            callback1_set(generic_callback1);
            vblank_handler_set(generic_vblank_handler);
            fadescreen(0xFFFFFFFF, 0, 16, 0, 0);
            options_state->callback_idx = big_callback_new(options_callback_idle, 0);
            ++(options_state->initialization_state);
            break;
        }
    }
}

static void options_callback_initalize() {
    options_state = malloc_and_clear(sizeof(options_state_t));
    options_state->initialization_state = 0;
    callback1_set(options_initialize);
    io_bic(0, 0x6000);
}

bool start_menu_options_initialize() {
    if (!fading_is_active()) {
        start_menu_delete_safari();
        overworld_rain_sound_fade_out();
        overworld_free();
        callback1_set(options_callback_initalize);
        super.saved_callback = map_reload_and_open_start_menu;
        return true;
    }
    return false;
}

bool automatic_hm_usage_active() {
    return options[OPTION_AUTOMATIC_HM_USAGE].getter() == OPTION_ON;
}

bool item_obtain_should_show_description() {
    return options[OPTION_ITEM_OBTAIN_DESCRIPTION].getter() == OPTION_ON;
}