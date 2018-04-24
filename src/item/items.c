	
#include "types.h"
#include "item/item.h"
#include "item/description.h"
#include "constants/item_pockets.h"
#include "romfuncs.h"
#include "language.h"

item items[] = {
	{
		//ITEM_NONE
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x0_item_none,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_MEISTERBALL
		LANGDEP(PSTRING("Meisterball"), PSTRING("MASTER BALL")),
		0x1, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x1_item_meisterball,
		0, //field_18
		POCKET_POKEBALLS, //pocket
		0, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a1f09, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_HYPERBALL
		LANGDEP(PSTRING("Hyperball"), PSTRING("ULTRA BALL")),
		0x2, //index
		1200, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x2_item_hyperball,
		0, //field_18
		POCKET_POKEBALLS, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a1f09, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SUPERBALL
		LANGDEP(PSTRING("Superball"), PSTRING("GREAT BALL")),
		0x3, //index
		600, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x3_item_superball,
		0, //field_18
		POCKET_POKEBALLS, //pocket
		2, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a1f09, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_POKEBALL
		LANGDEP(PSTRING("Pokéball"), PSTRING("POKé BALL")),
		0x4, //index
		200, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x4_item_pokeball,
		0, //field_18
		POCKET_POKEBALLS, //pocket
		3, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a1f09, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SAFARIBALL
		LANGDEP(PSTRING("Safariball"), PSTRING("SAFARI BALL")),
		0x5, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x5_item_safariball,
		0, //field_18
		POCKET_POKEBALLS, //pocket
		4, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a1f09, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_NETZBALL
		LANGDEP(PSTRING("Netzball"), PSTRING("NET BALL")),
		0x6, //index
		1000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x6_item_netzball,
		0, //field_18
		POCKET_POKEBALLS, //pocket
		5, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a1f09, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TAUCHBALL
		LANGDEP(PSTRING("Tauchball"), PSTRING("DIVE BALL")),
		0x7, //index
		1000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x7_item_tauchball,
		0, //field_18
		POCKET_POKEBALLS, //pocket
		6, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a1f09, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_NESTBALL
		LANGDEP(PSTRING("Nestball"), PSTRING("NEST BALL")),
		0x8, //index
		1000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x8_item_nestball,
		0, //field_18
		POCKET_POKEBALLS, //pocket
		7, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a1f09, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_WIEDERBALL
		LANGDEP(PSTRING("Wiederball"), PSTRING("REPEAT BALL")),
		0x9, //index
		1000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x9_item_wiederball,
		0, //field_18
		POCKET_POKEBALLS, //pocket
		8, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a1f09, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TIMERBALL
		LANGDEP(PSTRING("Timerball"), PSTRING("TIMER BALL")),
		0xa, //index
		1000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xa_item_timerball,
		0, //field_18
		POCKET_POKEBALLS, //pocket
		9, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a1f09, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_LUXUSBALL
		LANGDEP(PSTRING("Luxusball"), PSTRING("LUXURY BALL")),
		0xb, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xb_item_luxusball,
		0, //field_18
		POCKET_POKEBALLS, //pocket
		10, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a1f09, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_PREMIERBALL
		LANGDEP(PSTRING("Premierball"), PSTRING("PREMIER BALL")),
		0xc, //index
		200, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xc_item_premierball,
		0, //field_18
		POCKET_POKEBALLS, //pocket
		11, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a1f09, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TRANK
		LANGDEP(PSTRING("Trank"), PSTRING("POTION")),
		0xd, //index
		300, //price
		0, //holding_effect_id
		20, //holding_effect_param
		str_item_desc_xd_item_trank,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_GEGENGIFT
		LANGDEP(PSTRING("Gegengift"), PSTRING("ANTIDOTE")),
		0xe, //index
		250, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xe_item_gegengift,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_FEUERHEILER
		LANGDEP(PSTRING("Feuerheiler"), PSTRING("BURN HEAL")),
		0xf, //index
		250, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xf_item_feuerheiler,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_EISHEILER
		LANGDEP(PSTRING("Eisheiler"), PSTRING("ICE HEAL")),
		0x10, //index
		250, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x10_item_eisheiler,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_AUFWECKER
		LANGDEP(PSTRING("Aufwecker"), PSTRING("AWAKENING")),
		0x11, //index
		250, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x11_item_aufwecker,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_PARA_HEILER
		LANGDEP(PSTRING("Para-Heiler"), PSTRING("PARLYZ HEAL")),
		0x12, //index
		200, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x12_item_para_heiler,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TOP_GENESUNG
		LANGDEP(PSTRING("Top-Genesung"), PSTRING("FULL RESTORE")),
		0x13, //index
		3000, //price
		0, //holding_effect_id
		255, //holding_effect_param
		str_item_desc_x13_item_top_genesung,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TOP_TRANK
		LANGDEP(PSTRING("Top-Trank"), PSTRING("MAX POTION")),
		0x14, //index
		2500, //price
		0, //holding_effect_id
		255, //holding_effect_param
		str_item_desc_x14_item_top_trank,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_HYPERTRANK
		LANGDEP(PSTRING("Hypertrank"), PSTRING("HYPER POTION")),
		0x15, //index
		1200, //price
		0, //holding_effect_id
		200, //holding_effect_param
		str_item_desc_x15_item_hypertrank,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SUPERTRANK
		LANGDEP(PSTRING("Supertrank"), PSTRING("SUPER POTION")),
		0x16, //index
		700, //price
		0, //holding_effect_id
		50, //holding_effect_param
		str_item_desc_x16_item_supertrank,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_HYPERHEILER
		LANGDEP(PSTRING("Hyperheiler"), PSTRING("FULL HEAL")),
		0x17, //index
		600, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x17_item_hyperheiler,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_BELEBER
		LANGDEP(PSTRING("Beleber"), PSTRING("REVIVE")),
		0x18, //index
		1500, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x18_item_beleber,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TOP_BELEBER
		LANGDEP(PSTRING("Top-Beleber"), PSTRING("MAX REVIVE")),
		0x19, //index
		4000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x19_item_top_beleber,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TAFELWASSER
		LANGDEP(PSTRING("Tafelwasser"), PSTRING("FRESH WATER")),
		0x1a, //index
		200, //price
		0, //holding_effect_id
		50, //holding_effect_param
		str_item_desc_x1a_item_tafelwasser,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SPRUDEL
		LANGDEP(PSTRING("Sprudel"), PSTRING("SODA POP")),
		0x1b, //index
		300, //price
		0, //holding_effect_id
		60, //holding_effect_param
		str_item_desc_x1b_item_sprudel,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_LIMONADE
		LANGDEP(PSTRING("Limonade"), PSTRING("LEMONADE")),
		0x1c, //index
		350, //price
		0, //holding_effect_id
		80, //holding_effect_param
		str_item_desc_x1c_item_limonade,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_KUHMUH_MILCH
		LANGDEP(PSTRING("Kuhmuh-Milch"), PSTRING("MOOMOO MILK")),
		0x1d, //index
		500, //price
		0, //holding_effect_id
		100, //holding_effect_param
		str_item_desc_x1d_item_kuhmuh_milch,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ENERGIESTAUB
		LANGDEP(PSTRING("Energiestaub"), PSTRING("ENERGYPOWDER")),
		0x1e, //index
		500, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x1e_item_energiestaub,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_KRAFTWURZEL
		LANGDEP(PSTRING("Kraftwurzel"), PSTRING("ENERGY ROOT")),
		0x1f, //index
		800, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x1f_item_kraftwurzel,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_HEILPUDER
		LANGDEP(PSTRING("Heilpuder"), PSTRING("HEAL POWDER")),
		0x20, //index
		450, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x20_item_heilpuder,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_VITALKRAUT
		LANGDEP(PSTRING("Vitalkraut"), PSTRING("REVIVAL HERB")),
		0x21, //index
		2800, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x21_item_vitalkraut,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_AETHER
		LANGDEP(PSTRING("Äther"), PSTRING("ETHER")),
		0x22, //index
		1200, //price
		0, //holding_effect_id
		10, //holding_effect_param
		str_item_desc_x22_item_aether,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17e9, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20e1, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TOP_AETHER
		LANGDEP(PSTRING("Top-äther"), PSTRING("MAX ETHER")),
		0x23, //index
		2000, //price
		0, //holding_effect_id
		255, //holding_effect_param
		str_item_desc_x23_item_top_aether,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17e9, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20e1, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ELIXIER
		LANGDEP(PSTRING("Elixier"), PSTRING("ELIXIR")),
		0x24, //index
		3000, //price
		0, //holding_effect_id
		10, //holding_effect_param
		str_item_desc_x24_item_elixier,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17e9, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20e1, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TOP_ELIXIER
		LANGDEP(PSTRING("Top-Elixier"), PSTRING("MAX ELIXIR")),
		0x25, //index
		4500, //price
		0, //holding_effect_id
		255, //holding_effect_param
		str_item_desc_x25_item_top_elixier,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17e9, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20e1, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_LAVAKEKS
		LANGDEP(PSTRING("Lavakeks"), PSTRING("LAVA COOKIE")),
		0x26, //index
		200, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x26_item_lavakeks,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_BLAUE_FLOETE
		LANGDEP(PSTRING("Blaue Flöte"), PSTRING("BLUE FLUTE")),
		0x27, //index
		100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x27_item_blaue_floete,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_GELBE_FLOETE
		LANGDEP(PSTRING("Gelbe Flöte"), PSTRING("YELLOW FLUTE")),
		0x28, //index
		200, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x28_item_gelbe_floete,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ROTE_FLOETE
		LANGDEP(PSTRING("Rote Flöte"), PSTRING("RED FLUTE")),
		0x29, //index
		300, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x29_item_rote_floete,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SCHW_FLOETE
		LANGDEP(PSTRING("Schw. Flöte"), PSTRING("BLACK FLUTE")),
		0x2a, //index
		400, //price
		0, //holding_effect_id
		50, //holding_effect_param
		str_item_desc_x2a_item_schw_floete,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a1b81, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_WEISSE_FLOETE
		LANGDEP(PSTRING("Weisse Flöte"), PSTRING("WHITE FLUTE")),
		0x2b, //index
		500, //price
		0, //holding_effect_id
		150, //holding_effect_param
		str_item_desc_x2b_item_weisse_floete,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a1b81, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_BEERENSAFT
		LANGDEP(PSTRING("Beerensaft"), PSTRING("BERRY JUICE")),
		0x2c, //index
		100, //price
		1, //holding_effect_id
		20, //holding_effect_param
		str_item_desc_x2c_item_beerensaft,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ZAUBERASCHE
		LANGDEP(PSTRING("Zauberasche"), PSTRING("SACRED ASH")),
		0x2d, //index
		200, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x2d_item_zauberasche,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a1859, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_KUESTENSALZ
		LANGDEP(PSTRING("Küstensalz"), PSTRING("SHOAL SALT")),
		0x2e, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x2e_item_kuestensalz,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_KUESTENSCHALE
		LANGDEP(PSTRING("Küstenschale"), PSTRING("SHOAL SHELL")),
		0x2f, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x2f_item_kuestenschale,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_PURPURSTUECK
		LANGDEP(PSTRING("Purpurstück"), PSTRING("RED SHARD")),
		0x30, //index
		200, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x30_item_purpurstueck,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_INDIGOSTUECK
		LANGDEP(PSTRING("Indigostück"), PSTRING("BLUE SHARD")),
		0x31, //index
		200, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x31_item_indigostueck,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_GELBSTUECK
		LANGDEP(PSTRING("Gelbstück"), PSTRING("YELLOW SHARD")),
		0x32, //index
		200, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x32_item_gelbstueck,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_GRUENSTUECK
		LANGDEP(PSTRING("Grünstück"), PSTRING("GREEN SHARD")),
		0x33, //index
		200, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x33_item_gruenstueck,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_MAGMAISIERER
		LANGDEP(PSTRING("Magmaisierer"), PSTRING("????????")),
		0x34, //index
		2100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x34_item_magmaisierer,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_STROMISIERER
		LANGDEP(PSTRING("Stromisierer"), PSTRING("????????")),
		0x35, //index
		2100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x35_item_stromisierer,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SCHOENSCHUPPE
		LANGDEP(PSTRING("Schönschuppe"), PSTRING("????????")),
		0x36, //index
		500, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x36_item_schoenschuppe,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_DUBIOSDISK
		LANGDEP(PSTRING("Dubiosdisk"), PSTRING("????????")),
		0x37, //index
		2100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x37_item_dubiosdisk,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_DUESTERUMHANG
		LANGDEP(PSTRING("Düsterumhang"), PSTRING("????????")),
		0x38, //index
		2100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x38_item_duesterumhang,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SCHUETZER
		LANGDEP(PSTRING("Schützer"), PSTRING("????????")),
		0x39, //index
		2100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x39_item_schuetzer,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_LEBEN_ORB
		LANGDEP(PSTRING("Leben-Orb"), PSTRING("????????")),
		0x3a, //index
		200, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x3a_item_leben_orb,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_EVOLITH
		LANGDEP(PSTRING("Evolith"), PSTRING("????????")),
		0x3b, //index
		200, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x3b_item_evolith,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SCHARFZAHN
		LANGDEP(PSTRING("Scharfzahn"), PSTRING("????????")),
		0x0, //index
		0, //price
		30, //holding_effect_id
		10, //holding_effect_param
		str_item_desc_x3c_item_scharfzahn,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_3D
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x3d_item_item_3d,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_3E
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x3e_item_item_3e,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_KP_PLUS
		LANGDEP(PSTRING("Kp-Plus"), PSTRING("HP UP")),
		0x3f, //index
		9800, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x3f_item_kp_plus,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_PROTEIN
		LANGDEP(PSTRING("Protein"), PSTRING("PROTEIN")),
		0x40, //index
		9800, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x40_item_protein,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_EISEN
		LANGDEP(PSTRING("Eisen"), PSTRING("IRON")),
		0x41, //index
		9800, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x41_item_eisen,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_CARBON
		LANGDEP(PSTRING("Carbon"), PSTRING("CARBOS")),
		0x42, //index
		9800, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x42_item_carbon,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_KALZIUM
		LANGDEP(PSTRING("Kalzium"), PSTRING("CALCIUM")),
		0x43, //index
		9800, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x43_item_kalzium,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SONDERBONBON
		LANGDEP(PSTRING("Sonderbonbon"), PSTRING("RARE CANDY")),
		0x44, //index
		4800, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x44_item_sonderbonbon,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a1821, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_AP_PLUS
		LANGDEP(PSTRING("Ap-Plus"), PSTRING("PP UP")),
		0x45, //index
		9800, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x45_item_ap_plus,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a1805, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ZINK
		LANGDEP(PSTRING("Zink"), PSTRING("ZINC")),
		0x46, //index
		9800, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x46_item_zink,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_AP_TOP
		LANGDEP(PSTRING("Ap-Top"), PSTRING("PP MAX")),
		0x47, //index
		9800, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x47_item_ap_top,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a1805, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_48
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x48_item_item_48,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_MEGABLOCK
		LANGDEP(PSTRING("Megablock"), PSTRING("GUARD SPEC.")),
		0x49, //index
		700, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x49_item_megablock,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a1f69, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ANGRIFFPLUS
		LANGDEP(PSTRING("Angriffplus"), PSTRING("DIRE HIT")),
		0x4a, //index
		650, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x4a_item_angriffplus,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a1f69, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_X_ANGRIFF
		LANGDEP(PSTRING("X-Angriff"), PSTRING("X ATTACK")),
		0x4b, //index
		500, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x4b_item_x_angriff,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a1f69, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_X_ABWEHR
		LANGDEP(PSTRING("X-Abwehr"), PSTRING("X DEFEND")),
		0x4c, //index
		550, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x4c_item_x_abwehr,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a1f69, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_X_TEMPO
		LANGDEP(PSTRING("X-Tempo"), PSTRING("X SPEED")),
		0x4d, //index
		350, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x4d_item_x_tempo,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a1f69, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_X_TREFFER
		LANGDEP(PSTRING("X-Treffer"), PSTRING("X ACCURACY")),
		0x4e, //index
		950, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x4e_item_x_treffer,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a1f69, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_X_SPEZIAL
		LANGDEP(PSTRING("X-Spezial"), PSTRING("X SPECIAL")),
		0x4f, //index
		350, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x4f_item_x_spezial,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a1f69, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_POKEPUPPE
		LANGDEP(PSTRING("Poképuppe"), PSTRING("POKé DOLL")),
		0x50, //index
		1000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x50_item_pokepuppe,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a20fd, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ENECO_RUTE
		LANGDEP(PSTRING("Eneco-Rute"), PSTRING("FLUFFY TAIL")),
		0x51, //index
		1000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x51_item_eneco_rute,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a20fd, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_52
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x52_item_item_52,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SUPERSCHUTZ
		LANGDEP(PSTRING("Superschutz"), PSTRING("SUPER REPEL")),
		0x53, //index
		500, //price
		0, //holding_effect_id
		200, //holding_effect_param
		str_item_desc_x53_item_superschutz,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a1a85, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TOP_SCHUTZ
		LANGDEP(PSTRING("Top-Schutz"), PSTRING("MAX REPEL")),
		0x54, //index
		700, //price
		0, //holding_effect_id
		250, //holding_effect_param
		str_item_desc_x54_item_top_schutz,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a1a85, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_FLUCHTSEIL
		LANGDEP(PSTRING("Fluchtseil"), PSTRING("ESCAPE ROPE")),
		0x55, //index
		550, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x55_item_fluchtseil,
		0, //field_18
		POCKET_ITEMS, //pocket
		2, //type
		(void(*)(u8))0x80a1c99, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SCHUTZ
		LANGDEP(PSTRING("Schutz"), PSTRING("REPEL")),
		0x56, //index
		350, //price
		0, //holding_effect_id
		100, //holding_effect_param
		str_item_desc_x56_item_schutz,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a1a85, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_57
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x57_item_item_57,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_58
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x58_item_item_58,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_59
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x59_item_item_59,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_5A
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x5a_item_item_5a,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_5B
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x5b_item_item_5b,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_5C
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x5c_item_item_5c,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SONNENSTEIN
		LANGDEP(PSTRING("Sonnenstein"), PSTRING("SUN STONE")),
		0x5d, //index
		2100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x5d_item_sonnenstein,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a183d, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_MONDSTEIN
		LANGDEP(PSTRING("Mondstein"), PSTRING("MOON STONE")),
		0x5e, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x5e_item_mondstein,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a183d, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_FEUERSTEIN
		LANGDEP(PSTRING("Feuerstein"), PSTRING("FIRE STONE")),
		0x5f, //index
		2100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x5f_item_feuerstein,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a183d, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_DONNERSTEIN
		LANGDEP(PSTRING("Donnerstein"), PSTRING("THUNDERSTONE")),
		0x60, //index
		2100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x60_item_donnerstein,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a183d, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_WASSERSTEIN
		LANGDEP(PSTRING("Wasserstein"), PSTRING("WATER STONE")),
		0x61, //index
		2100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x61_item_wasserstein,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a183d, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_BLATTSTEIN
		LANGDEP(PSTRING("Blattstein"), PSTRING("LEAF STONE")),
		0x62, //index
		2100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x62_item_blattstein,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a183d, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_LINKKABEL
		LANGDEP(PSTRING("Linkkabel"), PSTRING("????????")),
		0x63, //index
		2100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x63_item_linkkabel,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a183d, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_FINSTERSTEIN
		LANGDEP(PSTRING("Finsterstein"), PSTRING("????????")),
		0x64, //index
		2100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x64_item_finsterstein,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a183d, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_LEUCHTSTEIN
		LANGDEP(PSTRING("Leuchtstein"), PSTRING("????????")),
		0x65, //index
		2100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x65_item_leuchtstein,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a183d, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_FUNKELSTEIN
		LANGDEP(PSTRING("Funkelstein"), PSTRING("????????")),
		0x66, //index
		2100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x66_item_funkelstein,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x80a183d, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_MINIPILZ
		LANGDEP(PSTRING("Minipilz"), PSTRING("TINYMUSHROOM")),
		0x67, //index
		500, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x67_item_minipilz,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_RIESENPILZ
		LANGDEP(PSTRING("Riesenpilz"), PSTRING("BIG MUSHROOM")),
		0x68, //index
		5000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x68_item_riesenpilz,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SPV_ORB_N
		LANGDEP(PSTRING("Spv Orb (n)"), PSTRING("????????")),
		0x69, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x69_item_spv_orb_n,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x9008d01, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_PERLE
		LANGDEP(PSTRING("Perle"), PSTRING("PEARL")),
		0x6a, //index
		1400, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x6a_item_perle,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_RIESENPERLE
		LANGDEP(PSTRING("Riesenperle"), PSTRING("BIG PEARL")),
		0x6b, //index
		7500, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x6b_item_riesenperle,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_STERNENSTAUB
		LANGDEP(PSTRING("Sternenstaub"), PSTRING("STARDUST")),
		0x6c, //index
		2000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x6c_item_sternenstaub,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_STERNENSTUECK
		LANGDEP(PSTRING("Sternenstück"), PSTRING("STAR PIECE")),
		0x6d, //index
		9800, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x6d_item_sternenstueck,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_NUGGET
		LANGDEP(PSTRING("Nugget"), PSTRING("NUGGET")),
		0x6e, //index
		10000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x6e_item_nugget,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_HERZSCHUPPE
		LANGDEP(PSTRING("Herzschuppe"), PSTRING("HEART SCALE")),
		0x6f, //index
		100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x6f_item_herzschuppe,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ANGR_ORB_P
		LANGDEP(PSTRING("Angr. Orb (p)"), PSTRING("????????")),
		0x70, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x70_item_angr_orb_p,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x9008d01, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ANGR_ORB_N
		LANGDEP(PSTRING("Angr. Orb (n)"), PSTRING("????????")),
		0x71, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x71_item_angr_orb_n,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x9008d01, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_VERT_ORB_P
		LANGDEP(PSTRING("Vert. Orb (p)"), PSTRING("????????")),
		0x72, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x72_item_vert_orb_p,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x9008d01, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_VERT_ORB_N
		LANGDEP(PSTRING("Vert. Orb (n)"), PSTRING("????????")),
		0x73, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x73_item_vert_orb_n,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x9008d01, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_INIT_ORB_P
		LANGDEP(PSTRING("Init. Orb (p)"), PSTRING("????????")),
		0x74, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x74_item_init_orb_p,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x9008d01, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_INIT_ORB_N
		LANGDEP(PSTRING("Init. Orb (n)"), PSTRING("????????")),
		0x75, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x75_item_init_orb_n,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x9008d01, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SPA_ORB_P
		LANGDEP(PSTRING("Spa. Orb (p)"), PSTRING("????????")),
		0x76, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x76_item_spa_orb_p,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x9008d01, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SPA_ORB_N
		LANGDEP(PSTRING("Spa. Orb (n)"), PSTRING("????????")),
		0x77, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x77_item_spa_orb_n,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x9008d01, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SPV_ORB_P
		LANGDEP(PSTRING("Spv Orb (p)"), PSTRING("????????")),
		0x78, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x78_item_spv_orb_p,
		0, //field_18
		POCKET_ITEMS, //pocket
		1, //type
		(void(*)(u8))0x9008d01, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_79
		LANGDEP(PSTRING("Zigzachsbrief"), PSTRING("ORANGE MAIL")),
		0x79, //index
		50, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x79_item_79,
		0, //field_18
		POCKET_ITEMS, //pocket
		0, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_HAFENBRIEF
		LANGDEP(PSTRING("Hafenbrief"), PSTRING("HARBOR MAIL")),
		0x7a, //index
		50, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x7a_item_hafenbrief,
		0, //field_18
		POCKET_ITEMS, //pocket
		0, //type
		(void(*)(u8))0x80a12d5, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_GLITZERBRIEF
		LANGDEP(PSTRING("Glitzerbrief"), PSTRING("GLITTER MAIL")),
		0x7b, //index
		50, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x7b_item_glitzerbrief,
		0, //field_18
		POCKET_ITEMS, //pocket
		0, //type
		(void(*)(u8))0x80a12d5, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_EILBRIEF
		LANGDEP(PSTRING("Eilbrief"), PSTRING("MECH MAIL")),
		0x7c, //index
		50, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x7c_item_eilbrief,
		0, //field_18
		POCKET_ITEMS, //pocket
		0, //type
		(void(*)(u8))0x80a12d5, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_WALDBRIEF
		LANGDEP(PSTRING("Waldbrief"), PSTRING("WOOD MAIL")),
		0x7d, //index
		50, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x7d_item_waldbrief,
		0, //field_18
		POCKET_ITEMS, //pocket
		0, //type
		(void(*)(u8))0x80a12d5, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_WELLENBRIEF
		LANGDEP(PSTRING("Wellenbrief"), PSTRING("WAVE MAIL")),
		0x7e, //index
		50, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x7e_item_wellenbrief,
		0, //field_18
		POCKET_ITEMS, //pocket
		0, //type
		(void(*)(u8))0x80a12d5, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_PERLENBRIEF
		LANGDEP(PSTRING("Perlenbrief"), PSTRING("BEAD MAIL")),
		0x7f, //index
		50, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x7f_item_perlenbrief,
		0, //field_18
		POCKET_ITEMS, //pocket
		0, //type
		(void(*)(u8))0x80a12d5, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_DUNKELBRIEF
		LANGDEP(PSTRING("Dunkelbrief"), PSTRING("SHADOW MAIL")),
		0x80, //index
		50, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x80_item_dunkelbrief,
		0, //field_18
		POCKET_ITEMS, //pocket
		0, //type
		(void(*)(u8))0x80a12d5, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TROPENBRIEF
		LANGDEP(PSTRING("Tropenbrief"), PSTRING("TROPIC MAIL")),
		0x81, //index
		50, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x81_item_tropenbrief,
		0, //field_18
		POCKET_ITEMS, //pocket
		0, //type
		(void(*)(u8))0x80a12d5, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TRAUMBRIEF
		LANGDEP(PSTRING("Traumbrief"), PSTRING("DREAM MAIL")),
		0x82, //index
		50, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x82_item_traumbrief,
		0, //field_18
		POCKET_ITEMS, //pocket
		0, //type
		(void(*)(u8))0x80a12d5, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_EDELBRIEF
		LANGDEP(PSTRING("Edelbrief"), PSTRING("FAB MAIL")),
		0x83, //index
		50, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x83_item_edelbrief,
		0, //field_18
		POCKET_ITEMS, //pocket
		0, //type
		(void(*)(u8))0x80a12d5, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_RETROBRIEF
		LANGDEP(PSTRING("Retrobrief"), PSTRING("RETRO MAIL")),
		0x84, //index
		50, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x84_item_retrobrief,
		0, //field_18
		POCKET_ITEMS, //pocket
		0, //type
		(void(*)(u8))0x80a12d5, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_AMRENABEERE
		LANGDEP(PSTRING("Amrenabeere"), PSTRING("CHERI BERRY")),
		0x85, //index
		20, //price
		2, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x85_item_amrenabeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_MARONBEERE
		LANGDEP(PSTRING("Maronbeere"), PSTRING("CHESTO BERRY")),
		0x86, //index
		20, //price
		3, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x86_item_maronbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_PIRSIFBEERE
		LANGDEP(PSTRING("Pirsifbeere"), PSTRING("PECHA BERRY")),
		0x87, //index
		20, //price
		4, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x87_item_pirsifbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_FRAGIABEERE
		LANGDEP(PSTRING("Fragiabeere"), PSTRING("RAWST BERRY")),
		0x88, //index
		20, //price
		5, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x88_item_fragiabeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_WILBIRBEERE
		LANGDEP(PSTRING("Wilbirbeere"), PSTRING("ASPEAR BERRY")),
		0x89, //index
		20, //price
		6, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x89_item_wilbirbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_JONAGOBEERE
		LANGDEP(PSTRING("Jonagobeere"), PSTRING("LEPPA BERRY")),
		0x8a, //index
		20, //price
		7, //holding_effect_id
		10, //holding_effect_param
		str_item_desc_x8a_item_jonagobeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		1, //type
		(void(*)(u8))0x80a17e9, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20e1, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SINELBEERE
		LANGDEP(PSTRING("Sinelbeere"), PSTRING("ORAN BERRY")),
		0x8b, //index
		20, //price
		1, //holding_effect_id
		10, //holding_effect_param
		str_item_desc_x8b_item_sinelbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_PERSIMBEERE
		LANGDEP(PSTRING("Persimbeere"), PSTRING("PERSIM BERRY")),
		0x8c, //index
		20, //price
		8, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x8c_item_persimbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_PRUNUSBEERE
		LANGDEP(PSTRING("Prunusbeere"), PSTRING("LUM BERRY")),
		0x8d, //index
		20, //price
		9, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x8d_item_prunusbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TSITRUBEERE
		LANGDEP(PSTRING("Tsitrubeere"), PSTRING("SITRUS BERRY")),
		0x8e, //index
		20, //price
		1, //holding_effect_id
		30, //holding_effect_param
		str_item_desc_x8e_item_tsitrubeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		1, //type
		(void(*)(u8))0x80a17cd, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a20a9, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_GIEFEBEERE
		LANGDEP(PSTRING("Giefebeere"), PSTRING("FIGY BERRY")),
		0x8f, //index
		20, //price
		10, //holding_effect_id
		8, //holding_effect_param
		str_item_desc_x8f_item_giefebeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_WIKIBEERE
		LANGDEP(PSTRING("Wikibeere"), PSTRING("WIKI BERRY")),
		0x90, //index
		20, //price
		11, //holding_effect_id
		8, //holding_effect_param
		str_item_desc_x90_item_wikibeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_MAGOBEERE
		LANGDEP(PSTRING("Magobeere"), PSTRING("MAGO BERRY")),
		0x91, //index
		20, //price
		12, //holding_effect_id
		8, //holding_effect_param
		str_item_desc_x91_item_magobeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_GAUVEBEERE
		LANGDEP(PSTRING("Gauvebeere"), PSTRING("AGUAV BERRY")),
		0x92, //index
		20, //price
		13, //holding_effect_id
		8, //holding_effect_param
		str_item_desc_x92_item_gauvebeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_YAPABEERE
		LANGDEP(PSTRING("Yapabeere"), PSTRING("IAPAPA BERRY")),
		0x93, //index
		20, //price
		14, //holding_effect_id
		8, //holding_effect_param
		str_item_desc_x93_item_yapabeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_HIMMIHBEERE
		LANGDEP(PSTRING("Himmihbeere"), PSTRING("RAZZ BERRY")),
		0x94, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x94_item_himmihbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_MORBBEERE
		LANGDEP(PSTRING("Morbbeere"), PSTRING("BLUK BERRY")),
		0x95, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x95_item_morbbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_NANABBEERE
		LANGDEP(PSTRING("Nanabbeere"), PSTRING("NANAB BERRY")),
		0x96, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x96_item_nanabbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_NIRBEBEERE
		LANGDEP(PSTRING("Nirbebeere"), PSTRING("WEPEAR BERRY")),
		0x97, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x97_item_nirbebeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SANANABEERE
		LANGDEP(PSTRING("Sananabeere"), PSTRING("PINAP BERRY")),
		0x98, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x98_item_sananabeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_GRANABEERE
		LANGDEP(PSTRING("Granabeere"), PSTRING("POMEG BERRY")),
		0x99, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x99_item_granabeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SETANGBEERE
		LANGDEP(PSTRING("Setangbeere"), PSTRING("KELPSY BERRY")),
		0x9a, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x9a_item_setangbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_QUALOTBEERE
		LANGDEP(PSTRING("Qualotbeere"), PSTRING("QUALOT BERRY")),
		0x9b, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x9b_item_qualotbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_HONMELBEERE
		LANGDEP(PSTRING("Honmelbeere"), PSTRING("HONDEW BERRY")),
		0x9c, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x9c_item_honmelbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_LABRUSBEERE
		LANGDEP(PSTRING("Labrusbeere"), PSTRING("GREPA BERRY")),
		0x9d, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x9d_item_labrusbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TAMOTBEERE
		LANGDEP(PSTRING("Tamotbeere"), PSTRING("TAMATO BERRY")),
		0x9e, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x9e_item_tamotbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SAIMBEERE
		LANGDEP(PSTRING("Saimbeere"), PSTRING("CORNN BERRY")),
		0x9f, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x9f_item_saimbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_MAGOSTBEERE
		LANGDEP(PSTRING("Magostbeere"), PSTRING("MAGOST BERRY")),
		0xa0, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xa0_item_magostbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_RABUTABEERE
		LANGDEP(PSTRING("Rabutabeere"), PSTRING("RABUTA BERRY")),
		0xa1, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xa1_item_rabutabeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TRONZIBEERE
		LANGDEP(PSTRING("Tronzibeere"), PSTRING("NOMEL BERRY")),
		0xa2, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xa2_item_tronzibeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_KIWANBEERE
		LANGDEP(PSTRING("Kiwanbeere"), PSTRING("SPELON BERRY")),
		0xa3, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xa3_item_kiwanbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_PALLMBEERE
		LANGDEP(PSTRING("Pallmbeere"), PSTRING("PAMTRE BERRY")),
		0xa4, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xa4_item_pallmbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_WASMELBEERE
		LANGDEP(PSTRING("Wasmelbeere"), PSTRING("WATMEL BERRY")),
		0xa5, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xa5_item_wasmelbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_DURINBEERE
		LANGDEP(PSTRING("Durinbeere"), PSTRING("DURIN BERRY")),
		0xa6, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xa6_item_durinbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_MYRTILBEERE
		LANGDEP(PSTRING("Myrtilbeere"), PSTRING("BELUE BERRY")),
		0xa7, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xa7_item_myrtilbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_LYDZIBEERE
		LANGDEP(PSTRING("Lydzibeere"), PSTRING("LIECHI BERRY")),
		0xa8, //index
		20, //price
		15, //holding_effect_id
		4, //holding_effect_param
		str_item_desc_xa8_item_lydzibeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_LINGANBEERE
		LANGDEP(PSTRING("Linganbeere"), PSTRING("GANLON BERRY")),
		0xa9, //index
		20, //price
		16, //holding_effect_id
		4, //holding_effect_param
		str_item_desc_xa9_item_linganbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SALKABEERE
		LANGDEP(PSTRING("Salkabeere"), PSTRING("SALAC BERRY")),
		0xaa, //index
		20, //price
		17, //holding_effect_id
		4, //holding_effect_param
		str_item_desc_xaa_item_salkabeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TAHAYBEERE
		LANGDEP(PSTRING("Tahaybeere"), PSTRING("PETAYA BERRY")),
		0xab, //index
		20, //price
		18, //holding_effect_id
		4, //holding_effect_param
		str_item_desc_xab_item_tahaybeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_APIKOBEERE
		LANGDEP(PSTRING("Apikobeere"), PSTRING("APICOT BERRY")),
		0xac, //index
		20, //price
		19, //holding_effect_id
		4, //holding_effect_param
		str_item_desc_xac_item_apikobeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_LANSATBEERE
		LANGDEP(PSTRING("Lansatbeere"), PSTRING("LANSAT BERRY")),
		0xad, //index
		20, //price
		20, //holding_effect_id
		4, //holding_effect_param
		str_item_desc_xad_item_lansatbeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_KRAMBOBEERE
		LANGDEP(PSTRING("Krambobeere"), PSTRING("STARF BERRY")),
		0xae, //index
		20, //price
		21, //holding_effect_id
		4, //holding_effect_param
		str_item_desc_xae_item_krambobeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ENIGMABEERE
		LANGDEP(PSTRING("Enigmabeere"), PSTRING("ENIGMA BERRY")),
		0xaf, //index
		20, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xaf_item_enigmabeere,
		0, //field_18
		POCKET_BERRIES, //pocket
		4, //type
		(void(*)(u8))0x80a2155, //field_usage
		(void(*)(u8))0x1, //battle_usage1
		(void(*)(u8))0x80a2281, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_B0
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xb0_item_item_b0,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_WAHLGLAS
		LANGDEP(PSTRING("Wahlglas"), PSTRING("????????")),
		0xb1, //index
		100, //price
		29, //holding_effect_id
		2, //holding_effect_param
		str_item_desc_xb1_item_wahlglas,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_WAHLSCHAL
		LANGDEP(PSTRING("Wahlschal"), PSTRING("????????")),
		0xb2, //index
		100, //price
		29, //holding_effect_id
		1, //holding_effect_param
		str_item_desc_xb2_item_wahlschal,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_BLENDPUDER
		LANGDEP(PSTRING("Blendpuder"), PSTRING("BRIGHTPOWDER")),
		0xb3, //index
		10, //price
		22, //holding_effect_id
		10, //holding_effect_param
		str_item_desc_xb3_item_blendpuder,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SCHLOHKRAUT
		LANGDEP(PSTRING("Schlohkraut"), PSTRING("WHITE HERB")),
		0xb4, //index
		100, //price
		23, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xb4_item_schlohkraut,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_MACHOBAND
		LANGDEP(PSTRING("Machoband"), PSTRING("MACHO BRACE")),
		0xb5, //index
		3000, //price
		24, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xb5_item_machoband,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_EP_TEILER
		LANGDEP(PSTRING("Ep-Teiler"), PSTRING("EXP. SHARE")),
		0xb6, //index
		3000, //price
		25, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xb6_item_ep_teiler,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_FLINKKLAUE
		LANGDEP(PSTRING("Flinkklaue"), PSTRING("QUICK CLAW")),
		0xb7, //index
		100, //price
		26, //holding_effect_id
		20, //holding_effect_param
		str_item_desc_xb7_item_flinkklaue,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SANFTGLOCKE
		LANGDEP(PSTRING("Sanftglocke"), PSTRING("SOOTHE BELL")),
		0xb8, //index
		100, //price
		27, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xb8_item_sanftglocke,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_MENTALKRAUT
		LANGDEP(PSTRING("Mentalkraut"), PSTRING("MENTAL HERB")),
		0xb9, //index
		100, //price
		28, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xb9_item_mentalkraut,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_WAHLBAND
		LANGDEP(PSTRING("Wahlband"), PSTRING("CHOICE BAND")),
		0xba, //index
		100, //price
		29, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xba_item_wahlband,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_KING_STEIN
		LANGDEP(PSTRING("King-Stein"), PSTRING("KING\S ROCK")),
		0xbb, //index
		100, //price
		30, //holding_effect_id
		10, //holding_effect_param
		str_item_desc_xbb_item_king_stein,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SILBERSTAUB
		LANGDEP(PSTRING("Silberstaub"), PSTRING("SILVERPOWDER")),
		0xbc, //index
		100, //price
		31, //holding_effect_id
		10, //holding_effect_param
		str_item_desc_xbc_item_silberstaub,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_MUENZAMULETT
		LANGDEP(PSTRING("Münzamulett"), PSTRING("AMULET COIN")),
		0xbd, //index
		100, //price
		32, //holding_effect_id
		10, //holding_effect_param
		str_item_desc_xbd_item_muenzamulett,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SCHUTZBAND
		LANGDEP(PSTRING("Schutzband"), PSTRING("CLEANSE TAG")),
		0xbe, //index
		200, //price
		33, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xbe_item_schutzband,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SEELENTAU
		LANGDEP(PSTRING("Seelentau"), PSTRING("SOUL DEW")),
		0xbf, //index
		200, //price
		34, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xbf_item_seelentau,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ABYSSZAHN
		LANGDEP(PSTRING("Abysszahn"), PSTRING("DEEPSEATOOTH")),
		0xc0, //index
		200, //price
		35, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xc0_item_abysszahn,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ABYSSPLATTE
		LANGDEP(PSTRING("Abyssplatte"), PSTRING("DEEPSEASCALE")),
		0xc1, //index
		200, //price
		36, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xc1_item_abyssplatte,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_RAUCHBALL
		LANGDEP(PSTRING("Rauchball"), PSTRING("SMOKE BALL")),
		0xc2, //index
		200, //price
		37, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xc2_item_rauchball,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_EWIGSTEIN
		LANGDEP(PSTRING("Ewigstein"), PSTRING("EVERSTONE")),
		0xc3, //index
		200, //price
		38, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xc3_item_ewigstein,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_FOKUS_BAND
		LANGDEP(PSTRING("Fokus-Band"), PSTRING("FOCUS BAND")),
		0xc4, //index
		200, //price
		39, //holding_effect_id
		10, //holding_effect_param
		str_item_desc_xc4_item_fokus_band,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_GLUECKS_EI
		LANGDEP(PSTRING("Glücks-Ei"), PSTRING("LUCKY EGG")),
		0xc5, //index
		200, //price
		40, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xc5_item_gluecks_ei,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SCOPE_LINSE
		LANGDEP(PSTRING("Scope-Linse"), PSTRING("SCOPE LENS")),
		0xc6, //index
		200, //price
		41, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xc6_item_scope_linse,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_METALLMANTEL
		LANGDEP(PSTRING("Metallmantel"), PSTRING("METAL COAT")),
		0xc7, //index
		100, //price
		42, //holding_effect_id
		10, //holding_effect_param
		str_item_desc_xc7_item_metallmantel,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_UEBERRESTE
		LANGDEP(PSTRING("Überreste"), PSTRING("LEFTOVERS")),
		0xc8, //index
		200, //price
		43, //holding_effect_id
		10, //holding_effect_param
		str_item_desc_xc8_item_ueberreste,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_DRACHENHAUT
		LANGDEP(PSTRING("Drachenhaut"), PSTRING("DRAGON SCALE")),
		0xc9, //index
		2100, //price
		44, //holding_effect_id
		20, //holding_effect_param
		str_item_desc_xc9_item_drachenhaut,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_KUGELBLITZ
		LANGDEP(PSTRING("Kugelblitz"), PSTRING("LIGHT BALL")),
		0xca, //index
		100, //price
		45, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xca_item_kugelblitz,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_PUDERSAND
		LANGDEP(PSTRING("Pudersand"), PSTRING("SOFT SAND")),
		0xcb, //index
		100, //price
		46, //holding_effect_id
		20, //holding_effect_param
		str_item_desc_xcb_item_pudersand,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_GRANITSTEIN
		LANGDEP(PSTRING("Granitstein"), PSTRING("HARD STONE")),
		0xcc, //index
		100, //price
		47, //holding_effect_id
		20, //holding_effect_param
		str_item_desc_xcc_item_granitstein,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_WUNDERSAAT
		LANGDEP(PSTRING("Wundersaat"), PSTRING("MIRACLE SEED")),
		0xcd, //index
		100, //price
		48, //holding_effect_id
		20, //holding_effect_param
		str_item_desc_xcd_item_wundersaat,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SCHATTENGLAS
		LANGDEP(PSTRING("Schattenglas"), PSTRING("BLACKGLASSES")),
		0xce, //index
		100, //price
		49, //holding_effect_id
		20, //holding_effect_param
		str_item_desc_xce_item_schattenglas,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SCHWARZGURT
		LANGDEP(PSTRING("Schwarzgurt"), PSTRING("BLACK BELT")),
		0xcf, //index
		100, //price
		50, //holding_effect_id
		20, //holding_effect_param
		str_item_desc_xcf_item_schwarzgurt,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_MAGNET
		LANGDEP(PSTRING("Magnet"), PSTRING("MAGNET")),
		0xd0, //index
		100, //price
		51, //holding_effect_id
		20, //holding_effect_param
		str_item_desc_xd0_item_magnet,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ZAUBERWASSER
		LANGDEP(PSTRING("Zauberwasser"), PSTRING("MYSTIC WATER")),
		0xd1, //index
		100, //price
		52, //holding_effect_id
		20, //holding_effect_param
		str_item_desc_xd1_item_zauberwasser,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_HACKATTACK
		LANGDEP(PSTRING("Hackattack"), PSTRING("SHARP BEAK")),
		0xd2, //index
		100, //price
		53, //holding_effect_id
		20, //holding_effect_param
		str_item_desc_xd2_item_hackattack,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_GIFTSTICH
		LANGDEP(PSTRING("Giftstich"), PSTRING("POISON BARB")),
		0xd3, //index
		100, //price
		54, //holding_effect_id
		20, //holding_effect_param
		str_item_desc_xd3_item_giftstich,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_EWIGES_EIS
		LANGDEP(PSTRING("Ewiges Eis"), PSTRING("NEVERMELTICE")),
		0xd4, //index
		100, //price
		55, //holding_effect_id
		20, //holding_effect_param
		str_item_desc_xd4_item_ewiges_eis,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_BANNSTICKER
		LANGDEP(PSTRING("Bannsticker"), PSTRING("SPELL TAG")),
		0xd5, //index
		100, //price
		56, //holding_effect_id
		20, //holding_effect_param
		str_item_desc_xd5_item_bannsticker,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_KRUEMMLOEFFEL
		LANGDEP(PSTRING("Krümmlöffel"), PSTRING("TWISTEDSPOON")),
		0xd6, //index
		100, //price
		57, //holding_effect_id
		20, //holding_effect_param
		str_item_desc_xd6_item_kruemmloeffel,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_HOLZKOHLE
		LANGDEP(PSTRING("Holzkohle"), PSTRING("CHARCOAL")),
		0xd7, //index
		9800, //price
		58, //holding_effect_id
		20, //holding_effect_param
		str_item_desc_xd7_item_holzkohle,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_DRACHENZAHN
		LANGDEP(PSTRING("Drachenzahn"), PSTRING("DRAGON FANG")),
		0xd8, //index
		100, //price
		59, //holding_effect_id
		20, //holding_effect_param
		str_item_desc_xd8_item_drachenzahn,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SEIDENSCHAL
		LANGDEP(PSTRING("Seidenschal"), PSTRING("SILK SCARF")),
		0xd9, //index
		100, //price
		60, //holding_effect_id
		20, //holding_effect_param
		str_item_desc_xd9_item_seidenschal,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_UP_GRADE
		LANGDEP(PSTRING("Up-Grade"), PSTRING("UP-GRADE")),
		0xda, //index
		2100, //price
		61, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xda_item_up_grade,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SEEGESANG
		LANGDEP(PSTRING("Seegesang"), PSTRING("SHELL BELL")),
		0xdb, //index
		200, //price
		62, //holding_effect_id
		8, //holding_effect_param
		str_item_desc_xdb_item_seegesang,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SEERAUCH
		LANGDEP(PSTRING("Seerauch"), PSTRING("SEA INCENSE")),
		0xdc, //index
		9600, //price
		52, //holding_effect_id
		5, //holding_effect_param
		str_item_desc_xdc_item_seerauch,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_LAXRAUCH
		LANGDEP(PSTRING("Laxrauch"), PSTRING("LAX INCENSE")),
		0xdd, //index
		9600, //price
		22, //holding_effect_id
		5, //holding_effect_param
		str_item_desc_xdd_item_laxrauch,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_LUCKY_PUNCH
		LANGDEP(PSTRING("Lucky Punch"), PSTRING("LUCKY PUNCH")),
		0xde, //index
		10, //price
		63, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xde_item_lucky_punch,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_METALLSTAUB
		LANGDEP(PSTRING("Metallstaub"), PSTRING("METAL POWDER")),
		0xdf, //index
		10, //price
		64, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xdf_item_metallstaub,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_KAMPFKNOCHEN
		LANGDEP(PSTRING("Kampfknochen"), PSTRING("THICK CLUB")),
		0xe0, //index
		500, //price
		65, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xe0_item_kampfknochen,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_LAUCHSTANGE
		LANGDEP(PSTRING("Lauchstange"), PSTRING("STICK")),
		0xe1, //index
		200, //price
		66, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xe1_item_lauchstange,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_BISAFLORNIT
		LANGDEP(PSTRING("Bisaflornit"), PSTRING("????????")),
		0xe2, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xe2_item_bisaflornit,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_GLURAKNIT
		LANGDEP(PSTRING("Gluraknit"), PSTRING("????????")),
		0xe3, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xe3_item_gluraknit,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TURTOKNIT
		LANGDEP(PSTRING("Turtoknit"), PSTRING("????????")),
		0xe4, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xe4_item_turtoknit,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TERRASORNIT
		LANGDEP(PSTRING("Terrasornit"), PSTRING("????????")),
		0xe5, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xe5_item_terrasornit,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ZERBERNIT
		LANGDEP(PSTRING("Zerbernit"), PSTRING("????????")),
		0xe6, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xe6_item_zerbernit,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SKULLYDRANIT
		LANGDEP(PSTRING("Skullydranit"), PSTRING("????????")),
		0xe7, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xe7_item_skullydranit,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_AQUANANIT
		LANGDEP(PSTRING("Aquananit"), PSTRING("????????")),
		0xe8, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xe8_item_aquananit,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_FLAMARANIT
		LANGDEP(PSTRING("Flamaranit"), PSTRING("????????")),
		0xe9, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xe9_item_flamaranit,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_BLITZANIT
		LANGDEP(PSTRING("Blitzanit"), PSTRING("????????")),
		0xea, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xea_item_blitzanit,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_AMPHAROSNIT
		LANGDEP(PSTRING("Ampharosnit"), PSTRING("????????")),
		0xeb, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xeb_item_ampharosnit,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_GENGARNIT
		LANGDEP(PSTRING("Gengarnit"), PSTRING("????????")),
		0xec, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xec_item_gengarnit,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_BIBORNIT
		LANGDEP(PSTRING("Bibornit"), PSTRING("????????")),
		0xed, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xed_item_bibornit,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_EE
		LANGDEP(PSTRING("Magmaherz"), PSTRING("????????")),
		0xee, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xee_item_item_ee,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_EF
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xef_item_item_ef,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_F0
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xf0_item_item_f0,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_F1
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xf1_item_item_f1,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_F2
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xf2_item_item_f2,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_F3
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xf3_item_item_f3,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_F4
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xf4_item_item_f4,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_F5
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xf5_item_item_f5,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_F6
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xf6_item_item_f6,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_F7
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xf7_item_item_f7,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_F8
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xf8_item_item_f8,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_F9
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xf9_item_item_f9,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_FA
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xfa_item_item_fa,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_FB
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xfb_item_item_fb,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_FC
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xfc_item_item_fc,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_FD
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xfd_item_item_fd,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ROTER_SCHAL
		LANGDEP(PSTRING("Roter Schal"), PSTRING("RED SCARF")),
		0xfe, //index
		100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xfe_item_roter_schal,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_BLAUER_SCHAL
		LANGDEP(PSTRING("Blauer Schal"), PSTRING("BLUE SCARF")),
		0xff, //index
		100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_xff_item_blauer_schal,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ROSA_SCHAL
		LANGDEP(PSTRING("Rosa Schal"), PSTRING("PINK SCARF")),
		0x100, //index
		100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x100_item_rosa_schal,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_GRUENER_SCHAL
		LANGDEP(PSTRING("Grüner Schal"), PSTRING("GREEN SCARF")),
		0x101, //index
		100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x101_item_gruener_schal,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_GELBER_SCHAL
		LANGDEP(PSTRING("Gelber Schal"), PSTRING("YELLOW SCARF")),
		0x102, //index
		100, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x102_item_gelber_schal,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_EILRAD
		LANGDEP(PSTRING("Eilrad"), PSTRING("MACH BIKE")),
		0x103, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x103_item_eilrad,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		2, //type
		(void(*)(u8))0x80a1319, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_MUENZKORB
		LANGDEP(PSTRING("Münzkorb"), PSTRING("COIN CASE")),
		0x104, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x104_item_muenzkorb,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a154d, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_DETEKTOR
		LANGDEP(PSTRING("Detektor"), PSTRING("ITEMFINDER")),
		0x105, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x105_item_detektor,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		2, //type
		(void(*)(u8))0x80a1525, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ANGEL
		LANGDEP(PSTRING("Angel"), PSTRING("OLD ROD")),
		0x106, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x106_item_angel,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		2, //type
		(void(*)(u8))0x80a1425, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_PROFIANGEL
		LANGDEP(PSTRING("Profiangel"), PSTRING("GOOD ROD")),
		0x107, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x107_item_profiangel,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		2, //type
		(void(*)(u8))0x80a1425, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SUPERANGEL
		LANGDEP(PSTRING("Superangel"), PSTRING("SUPER ROD")),
		0x108, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x108_item_superangel,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		2, //type
		(void(*)(u8))0x80a1425, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_BOOTSTICKET
		LANGDEP(PSTRING("Bootsticket"), PSTRING("S.S. TICKET")),
		0x109, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x109_item_bootsticket,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_WETTB_KARTE
		LANGDEP(PSTRING("Wettb.-Karte"), PSTRING("CONTEST PASS")),
		0x10a, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x10a_item_wettb_karte,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_10B
		LANGDEP(PSTRING("Wolkenherz"), PSTRING("????????")),
		0x10b, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x10b_item_item_10b,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_WAILMERKANNE
		LANGDEP(PSTRING("Wailmerkanne"), PSTRING("WAILMER PAIL")),
		0x10c, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x10c_item_wailmerkanne,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_DEVON_WAREN
		LANGDEP(PSTRING("Devon-Waren"), PSTRING("DEVON GOODS")),
		0x10d, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x10d_item_devon_waren,
		2, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ASCHETASCHE
		LANGDEP(PSTRING("Aschetasche"), PSTRING("SOOT SACK")),
		0x10e, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x10e_item_aschetasche,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x9008ad5, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_KELLEROEFFNER
		LANGDEP(PSTRING("Kelleröffner"), PSTRING("BASEMENT KEY")),
		0x10f, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x10f_item_kelleroeffner,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_KUNSTRAD
		LANGDEP(PSTRING("Kunstrad"), PSTRING("ACRO BIKE")),
		0x110, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x110_item_kunstrad,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		2, //type
		(void(*)(u8))0x80a1319, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_BOX
		LANGDEP(PSTRING("Box"), PSTRING("POKEBLOCK CASE")),
		0x111, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x111_item_box,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_BRIEF
		LANGDEP(PSTRING("Brief"), PSTRING("LETTER")),
		0x112, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x112_item_brief,
		2, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_AEON_TICKET
		LANGDEP(PSTRING("äon-Ticket"), PSTRING("EON TICKET")),
		0x113, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x113_item_aeon_ticket,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SPIRITKERN
		LANGDEP(PSTRING("Spiritkern"), PSTRING("RED ORB")),
		0x114, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x114_item_spiritkern,
		2, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_BLAUE_KUGEL
		LANGDEP(PSTRING("Blaue Kugel"), PSTRING("BLUE ORB")),
		0x115, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x115_item_blaue_kugel,
		2, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SCANNER
		LANGDEP(PSTRING("Scanner"), PSTRING("SCANNER")),
		0x116, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x116_item_scanner,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_WUESTENGLAS
		LANGDEP(PSTRING("Wüstenglas"), PSTRING("GO-GOGGLES")),
		0x117, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x117_item_wuestenglas,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_METEORIT
		LANGDEP(PSTRING("Meteorit"), PSTRING("METEORITE")),
		0x118, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x118_item_meteorit,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_K1_SCHLUESSEL
		LANGDEP(PSTRING("K1-Schlüssel"), PSTRING("RM. 1 KEY")),
		0x119, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x119_item_k1_schluessel,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_K2_SCHLUESSEL
		LANGDEP(PSTRING("K2-Schlüssel"), PSTRING("RM. 2 KEY")),
		0x11a, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x11a_item_k2_schluessel,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_K4_SCHLUESSEL
		LANGDEP(PSTRING("K4-Schlüssel"), PSTRING("RM. 4 KEY")),
		0x11b, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x11b_item_k4_schluessel,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_K6_SCHLUESSEL
		LANGDEP(PSTRING("K6-Schlüssel"), PSTRING("RM. 6 KEY")),
		0x11c, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x11c_item_k6_schluessel,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_L_SCHLUESSEL
		LANGDEP(PSTRING("L.-Schlüssel"), PSTRING("STORAGE KEY")),
		0x11d, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x11d_item_l_schluessel,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_WURZELFOSSIL
		LANGDEP(PSTRING("Wurzelfossil"), PSTRING("ROOT FOSSIL")),
		0x11e, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x11e_item_wurzelfossil,
		0, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_KLAUENFOSSIL
		LANGDEP(PSTRING("Klauenfossil"), PSTRING("CLAW FOSSIL")),
		0x11f, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x11f_item_klauenfossil,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_DEVON_SCOPE
		LANGDEP(PSTRING("Devon-Scope"), PSTRING("DEVON SCOPE")),
		0x120, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x120_item_devon_scope,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM01
		LANGDEP(PSTRING("Tm01"), PSTRING("TM01")),
		0x121, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x121_item_tm01,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM02
		LANGDEP(PSTRING("Tm02"), PSTRING("TM02")),
		0x122, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x122_item_tm02,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM03
		LANGDEP(PSTRING("Tm03"), PSTRING("TM03")),
		0x123, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x123_item_tm03,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM04
		LANGDEP(PSTRING("Tm04"), PSTRING("TM04")),
		0x124, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x124_item_tm04,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM05
		LANGDEP(PSTRING("Tm05"), PSTRING("TM05")),
		0x125, //index
		1000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x125_item_tm05,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM06
		LANGDEP(PSTRING("Tm06"), PSTRING("TM06")),
		0x126, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x126_item_tm06,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM07
		LANGDEP(PSTRING("Tm07"), PSTRING("TM07")),
		0x127, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x127_item_tm07,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM08
		LANGDEP(PSTRING("Tm08"), PSTRING("TM08")),
		0x128, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x128_item_tm08,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM09
		LANGDEP(PSTRING("Tm09"), PSTRING("TM09")),
		0x129, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x129_item_tm09,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM10
		LANGDEP(PSTRING("Tm10"), PSTRING("TM10")),
		0x12a, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x12a_item_tm10,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM11
		LANGDEP(PSTRING("Tm11"), PSTRING("TM11")),
		0x12b, //index
		2000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x12b_item_tm11,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM12
		LANGDEP(PSTRING("Tm12"), PSTRING("TM12")),
		0x12c, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x12c_item_tm12,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM13
		LANGDEP(PSTRING("Tm13"), PSTRING("TM13")),
		0x12d, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x12d_item_tm13,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM14
		LANGDEP(PSTRING("Tm14"), PSTRING("TM14")),
		0x12e, //index
		5500, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x12e_item_tm14,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM15
		LANGDEP(PSTRING("Tm15"), PSTRING("TM15")),
		0x12f, //index
		7500, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x12f_item_tm15,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM16
		LANGDEP(PSTRING("Tm16"), PSTRING("TM16")),
		0x130, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x130_item_tm16,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM17
		LANGDEP(PSTRING("Tm17"), PSTRING("TM17")),
		0x131, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x131_item_tm17,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM18
		LANGDEP(PSTRING("Tm18"), PSTRING("TM18")),
		0x132, //index
		2000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x132_item_tm18,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM19
		LANGDEP(PSTRING("Tm19"), PSTRING("TM19")),
		0x133, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x133_item_tm19,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM20
		LANGDEP(PSTRING("Tm20"), PSTRING("TM20")),
		0x134, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x134_item_tm20,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM21
		LANGDEP(PSTRING("Tm21"), PSTRING("TM21")),
		0x135, //index
		1000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x135_item_tm21,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM22
		LANGDEP(PSTRING("Tm22"), PSTRING("TM22")),
		0x136, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x136_item_tm22,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM23
		LANGDEP(PSTRING("Tm23"), PSTRING("TM23")),
		0x137, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x137_item_tm23,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM24
		LANGDEP(PSTRING("Tm24"), PSTRING("TM24")),
		0x138, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x138_item_tm24,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM25
		LANGDEP(PSTRING("Tm25"), PSTRING("TM25")),
		0x139, //index
		5500, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x139_item_tm25,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM26
		LANGDEP(PSTRING("Tm26"), PSTRING("TM26")),
		0x13a, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x13a_item_tm26,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM27
		LANGDEP(PSTRING("Tm27"), PSTRING("TM27")),
		0x13b, //index
		1000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x13b_item_tm27,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM28
		LANGDEP(PSTRING("Tm28"), PSTRING("TM28")),
		0x13c, //index
		2000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x13c_item_tm28,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM29
		LANGDEP(PSTRING("Tm29"), PSTRING("TM29")),
		0x13d, //index
		2000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x13d_item_tm29,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM30
		LANGDEP(PSTRING("Tm30"), PSTRING("TM30")),
		0x13e, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x13e_item_tm30,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM31
		LANGDEP(PSTRING("Tm31"), PSTRING("TM31")),
		0x13f, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x13f_item_tm31,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM32
		LANGDEP(PSTRING("Tm32"), PSTRING("TM32")),
		0x140, //index
		2000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x140_item_tm32,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM33
		LANGDEP(PSTRING("Tm33"), PSTRING("TM33")),
		0x141, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x141_item_tm33,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM34
		LANGDEP(PSTRING("Tm34"), PSTRING("TM34")),
		0x142, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x142_item_tm34,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM35
		LANGDEP(PSTRING("Tm35"), PSTRING("TM35")),
		0x143, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x143_item_tm35,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM36
		LANGDEP(PSTRING("Tm36"), PSTRING("TM36")),
		0x144, //index
		1000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x144_item_tm36,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM37
		LANGDEP(PSTRING("Tm37"), PSTRING("TM37")),
		0x145, //index
		2000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x145_item_tm37,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM38
		LANGDEP(PSTRING("Tm38"), PSTRING("TM38")),
		0x146, //index
		5500, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x146_item_tm38,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM39
		LANGDEP(PSTRING("Tm39"), PSTRING("TM39")),
		0x147, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x147_item_tm39,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM40
		LANGDEP(PSTRING("Tm40"), PSTRING("TM40")),
		0x148, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x148_item_tm40,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM41
		LANGDEP(PSTRING("Tm41"), PSTRING("TM41")),
		0x149, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x149_item_tm41,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM42
		LANGDEP(PSTRING("Tm42"), PSTRING("TM42")),
		0x14a, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x14a_item_tm42,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM43
		LANGDEP(PSTRING("Tm43"), PSTRING("TM43")),
		0x14b, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x14b_item_tm43,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM44
		LANGDEP(PSTRING("Tm44"), PSTRING("TM44")),
		0x14c, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x14c_item_tm44,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM45
		LANGDEP(PSTRING("Tm45"), PSTRING("TM45")),
		0x14d, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x14d_item_tm45,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM46
		LANGDEP(PSTRING("Tm46"), PSTRING("TM46")),
		0x14e, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x14e_item_tm46,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM47
		LANGDEP(PSTRING("Tm47"), PSTRING("TM47")),
		0x14f, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x14f_item_tm47,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM48
		LANGDEP(PSTRING("Tm48"), PSTRING("TM48")),
		0x150, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x150_item_tm48,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM49
		LANGDEP(PSTRING("Tm49"), PSTRING("TM49")),
		0x151, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x151_item_tm49,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TM50
		LANGDEP(PSTRING("Tm50"), PSTRING("TM50")),
		0x152, //index
		3000, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x152_item_tm50,
		0, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_VM01
		LANGDEP(PSTRING("Vm01"), PSTRING("HM01")),
		0x153, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x153_item_vm01,
		1, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_VM02
		LANGDEP(PSTRING("Vm02"), PSTRING("HM02")),
		0x154, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x154_item_vm02,
		1, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_VM03
		LANGDEP(PSTRING("Vm03"), PSTRING("HM03")),
		0x155, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x155_item_vm03,
		1, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_VM04
		LANGDEP(PSTRING("Vm04"), PSTRING("HM04")),
		0x156, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x156_item_vm04,
		1, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_VM05
		LANGDEP(PSTRING("Vm05"), PSTRING("HM05")),
		0x157, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x157_item_vm05,
		1, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_VM06
		LANGDEP(PSTRING("Vm06"), PSTRING("HM06")),
		0x158, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x158_item_vm06,
		1, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_VM07
		LANGDEP(PSTRING("Vm07"), PSTRING("HM07")),
		0x159, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x159_item_vm07,
		1, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_VM08
		LANGDEP(PSTRING("Vm08"), PSTRING("HM08")),
		0x15a, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x15a_item_vm08,
		1, //field_18
		POCKET_TM_HM, //pocket
		1, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_15B
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x15b_item_item_15b,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ITEM_15C
		LANGDEP(PSTRING("????????"), PSTRING("????????")),
		0x0, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x15c_item_item_15c,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_EICHS_PAKET
		LANGDEP(PSTRING("Zugangskarte"), PSTRING("OAK\S PARCEL")),
		0x15d, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x15d_item_eichs_paket,
		2, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_POKEFLOETE
		LANGDEP(PSTRING("Pok▶löte"), PSTRING("POKé FLUTE")),
		0x15e, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x15e_item_pokefloete,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a1659, //field_usage
		(void(*)(u8))0x2, //battle_usage1
		(void(*)(u8))0x80a1f51, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM__OEFFNER
		LANGDEP(PSTRING("?-öffner"), PSTRING("SECRET KEY")),
		0x15f, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x15f_item__oeffner,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_RAD_COUPON
		LANGDEP(PSTRING("Rad-Coupon"), PSTRING("BIKE VOUCHER")),
		0x160, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x160_item_rad_coupon,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_PKMCORDER
		LANGDEP(PSTRING("Pkmcorder"), PSTRING("GOLD TEETH")),
		0x161, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x161_item_pkmcorder,
		2, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x0, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_ALTBERNSTEIN
		LANGDEP(PSTRING("Altbernstein"), PSTRING("OLD AMBER")),
		0x162, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x162_item_altbernstein,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TUEROEFFNER
		LANGDEP(PSTRING("Türöffner"), PSTRING("CARD KEY")),
		0x163, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x163_item_tueroeffner,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_LIFTOEFFNER
		LANGDEP(PSTRING("Liftöffner"), PSTRING("LIFT KEY")),
		0x164, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x164_item_liftoeffner,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_HELIXFOSSIL
		LANGDEP(PSTRING("Helixfossil"), PSTRING("HELIX FOSSIL")),
		0x165, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x165_item_helixfossil,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_DOMFOSSIL
		LANGDEP(PSTRING("Domfossil"), PSTRING("DOME FOSSIL")),
		0x166, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x166_item_domfossil,
		0, //field_18
		POCKET_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SILPH_SCOPE
		LANGDEP(PSTRING("Silph Scope"), PSTRING("SILPH SCOPE")),
		0x167, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x167_item_silph_scope,
		1, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_FAHRRAD
		LANGDEP(PSTRING("Wolke"), PSTRING("BICYCLE")),
		0x1ff, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x168_item_fahrrad,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		2, //type
		(void(*)(u8))0x80a1319, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_KARTE
		LANGDEP(PSTRING("Karte"), PSTRING("TOWN MAP")),
		0x169, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x169_item_karte,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a1d4d, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_KAMPFFAHNDER
		LANGDEP(PSTRING("Kampffahnder"), PSTRING("VS SEEKER")),
		0x16a, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x16a_item_kampffahnder,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		2, //type
		(void(*)(u8))0x80a1e89, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_RUHMESDATEI
		LANGDEP(PSTRING("Ruhmesdatei"), PSTRING("FAME CHECKER")),
		0x16b, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x16b_item_ruhmesdatei,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a1de5, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_VMTM_BOX
		LANGDEP(PSTRING("Vm/tm-Box"), PSTRING("TM CASE")),
		0x16c, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x16c_item_vmtm_box,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a1875, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_BEERENTUETE
		LANGDEP(PSTRING("Beerentüte"), PSTRING("BERRY POUCH")),
		0x16d, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x16d_item_beerentuete,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a190d, //field_usage
		(void(*)(u8))0x3, //battle_usage1
		(void(*)(u8))0x80a19a5, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_LEHRKANAL
		LANGDEP(PSTRING("Lehrkanal"), PSTRING("TEACHY TV")),
		0x16e, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x16e_item_lehrkanal,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		2, //type
		(void(*)(u8))0x80a19d9, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_TRI_PASS
		LANGDEP(PSTRING("Tri-Pass"), PSTRING("TRI-PASS")),
		0x16f, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x16f_item_tri_pass,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_BUNT_PASS
		LANGDEP(PSTRING("Bunt-Pass"), PSTRING("RAINBOW PASS")),
		0x170, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x170_item_bunt_pass,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_MEGA_AMULETT
		LANGDEP(PSTRING("Mega-Amulett"), PSTRING("TEA")),
		0x171, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x171_item_mega_amulett,
		513, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0xe, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_GEHEIMTICKET
		LANGDEP(PSTRING("Geheimticket"), PSTRING("MYSTICTICKET")),
		0x172, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x172_item_geheimticket,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_AURORATICKET
		LANGDEP(PSTRING("Auroraticket"), PSTRING("AURORATICKET")),
		0x173, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x173_item_auroraticket,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_PUDERDOESCHEN
		LANGDEP(PSTRING("Puderdöschen"), PSTRING("POWDER JAR")),
		0x174, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x174_item_puderdoeschen,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a15d5, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_RUBIN
		LANGDEP(PSTRING("Rubin"), PSTRING("RUBY")),
		0x175, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x175_item_rubin,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},{
		//ITEM_SAPHIR
		LANGDEP(PSTRING("Saphir"), PSTRING("SAPPHIRE")),
		0x176, //index
		0, //price
		0, //holding_effect_id
		0, //holding_effect_param
		str_item_desc_x176_item_saphir,
		257, //field_18
		POCKET_KEY_ITEMS, //pocket
		4, //type
		(void(*)(u8))0x80a2325, //field_usage
		(void(*)(u8))0x0, //battle_usage1
		(void(*)(u8))0x0, //battle_usage2
		(void(*)(u8))0x0, //field_28
	},
};
