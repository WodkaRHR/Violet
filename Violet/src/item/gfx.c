#include "types.h"
#include "item/item.h"
#include "item/gfx.h" 

static item_gfx_pair item_gfx_pairs[] = {
    [ITEM_NONE] = { .gfx = gfx_item_noneTiles, .pal = gfx_item_nonePal },
    [ITEM_MEISTERBALL] = { .gfx = gfx_item_meisterballTiles, .pal = gfx_item_meisterballPal },
    [ITEM_HYPERBALL] = { .gfx = gfx_item_hyperballTiles, .pal = gfx_item_hyperballPal },
    [ITEM_SUPERBALL] = { .gfx = gfx_item_superballTiles, .pal = gfx_item_superballPal },
    [ITEM_POKEBALL] = { .gfx = gfx_item_pokeballTiles, .pal = gfx_item_pokeballPal },
    [ITEM_SAFARIBALL] = { .gfx = gfx_item_safariballTiles, .pal = gfx_item_safariballPal },
    [ITEM_NETZBALL] = { .gfx = gfx_item_netzballTiles, .pal = gfx_item_netzballPal },
    [ITEM_TAUCHBALL] = { .gfx = gfx_item_tauchballTiles, .pal = gfx_item_tauchballPal },
    [ITEM_NESTBALL] = { .gfx = gfx_item_nestballTiles, .pal = gfx_item_nestballPal },
    [ITEM_WIEDERBALL] = { .gfx = gfx_item_wiederballTiles, .pal = gfx_item_wiederballPal },
    [ITEM_TIMERBALL] = { .gfx = gfx_item_timerballTiles, .pal = gfx_item_timerballPal },
    [ITEM_LUXUSBALL] = { .gfx = gfx_item_luxusballTiles, .pal = gfx_item_luxusballPal },
    [ITEM_PREMIERBALL] = { .gfx = gfx_item_premierballTiles, .pal = gfx_item_premierballPal },
    [ITEM_TRANK] = { .gfx = gfx_item_trankTiles, .pal = gfx_item_trankPal },
    [ITEM_GEGENGIFT] = { .gfx = gfx_item_gegengiftTiles, .pal = gfx_item_gegengiftPal },
    [ITEM_FEUERHEILER] = { .gfx = gfx_item_feuerheilerTiles, .pal = gfx_item_feuerheilerPal },
    [ITEM_EISHEILER] = { .gfx = gfx_item_eisheilerTiles, .pal = gfx_item_eisheilerPal },
    [ITEM_AUFWECKER] = { .gfx = gfx_item_aufweckerTiles, .pal = gfx_item_aufweckerPal },
    [ITEM_PARA_HEILER] = { .gfx = gfx_item_para_heilerTiles, .pal = gfx_item_para_heilerPal },
    [ITEM_TOP_GENESUNG] = { .gfx = gfx_item_top_genesungTiles, .pal = gfx_item_top_genesungPal },
    [ITEM_TOP_TRANK] = { .gfx = gfx_item_top_trankTiles, .pal = gfx_item_top_trankPal },
    [ITEM_HYPERTRANK] = { .gfx = gfx_item_hypertrankTiles, .pal = gfx_item_hypertrankPal },
    [ITEM_SUPERTRANK] = { .gfx = gfx_item_supertrankTiles, .pal = gfx_item_supertrankPal },
    [ITEM_HYPERHEILER] = { .gfx = gfx_item_hyperheilerTiles, .pal = gfx_item_hyperheilerPal },
    [ITEM_BELEBER] = { .gfx = gfx_item_beleberTiles, .pal = gfx_item_beleberPal },
    [ITEM_TOP_BELEBER] = { .gfx = gfx_item_top_beleberTiles, .pal = gfx_item_top_beleberPal },
    [ITEM_CO_MIX] = { .gfx = gfx_item_co_mixTiles, .pal = gfx_item_co_mixPal },
    [ITEM_C_SAFT] = { .gfx = gfx_item_c_saftTiles, .pal = gfx_item_c_saftPal },
    [ITEM_C_SERUM] = { .gfx = gfx_item_c_serumTiles, .pal = gfx_item_c_serumPal },
    [ITEM_KUHMUH_MILCH] = { .gfx = gfx_item_kuhmuh_milchTiles, .pal = gfx_item_kuhmuh_milchPal },
    [ITEM_ENERGIESTAUB] = { .gfx = gfx_item_energiestaubTiles, .pal = gfx_item_energiestaubPal },
    [ITEM_KRAFTWURZEL] = { .gfx = gfx_item_kraftwurzelTiles, .pal = gfx_item_kraftwurzelPal },
    [ITEM_HEILPUDER] = { .gfx = gfx_item_heilpuderTiles, .pal = gfx_item_heilpuderPal },
    [ITEM_VITALKRAUT] = { .gfx = gfx_item_vitalkrautTiles, .pal = gfx_item_vitalkrautPal },
    [ITEM_AETHER] = { .gfx = gfx_item_aetherTiles, .pal = gfx_item_aetherPal },
    [ITEM_TOP_AETHER] = { .gfx = gfx_item_top_aetherTiles, .pal = gfx_item_top_aetherPal },
    [ITEM_ELIXIER] = { .gfx = gfx_item_elixierTiles, .pal = gfx_item_elixierPal },
    [ITEM_TOP_ELIXIER] = { .gfx = gfx_item_top_elixierTiles, .pal = gfx_item_top_elixierPal },
    [ITEM_LAVAKEKS] = { .gfx = gfx_item_lavakeksTiles, .pal = gfx_item_lavakeksPal },
    [ITEM_BLAUE_FLOETE] = { .gfx = gfx_item_blaue_floeteTiles, .pal = gfx_item_blaue_floetePal },
    [ITEM_GELBE_FLOETE] = { .gfx = gfx_item_gelbe_floeteTiles, .pal = gfx_item_gelbe_floetePal },
    [ITEM_ROTE_FLOETE] = { .gfx = gfx_item_rote_floeteTiles, .pal = gfx_item_rote_floetePal },
    [ITEM_SCHW_FLOETE] = { .gfx = gfx_item_schw_floeteTiles, .pal = gfx_item_schw_floetePal },
    [ITEM_WEISSE_FLOETE] = { .gfx = gfx_item_weisse_floeteTiles, .pal = gfx_item_weisse_floetePal },
    [ITEM_BEERENSAFT] = { .gfx = gfx_item_beerensaftTiles, .pal = gfx_item_beerensaftPal },
    [ITEM_ZAUBERASCHE] = { .gfx = gfx_item_zauberascheTiles, .pal = gfx_item_zauberaschePal },
    [ITEM_KUESTENSALZ] = { .gfx = gfx_item_kuestensalzTiles, .pal = gfx_item_kuestensalzPal },
    [ITEM_KUESTENSCHALE] = { .gfx = gfx_item_kuestenschaleTiles, .pal = gfx_item_kuestenschalePal },
    [ITEM_PURPURSTUECK] = { .gfx = gfx_item_purpurstueckTiles, .pal = gfx_item_purpurstueckPal },
    [ITEM_INDIGOSTUECK] = { .gfx = gfx_item_indigostueckTiles, .pal = gfx_item_indigostueckPal },
    [ITEM_GELBSTUECK] = { .gfx = gfx_item_gelbstueckTiles, .pal = gfx_item_gelbstueckPal },
    [ITEM_GRUENSTUECK] = { .gfx = gfx_item_gruenstueckTiles, .pal = gfx_item_gruenstueckPal },
    [ITEM_MAGMAISIERER] = { .gfx = gfx_item_magmaisiererTiles, .pal = gfx_item_magmaisiererPal },
    [ITEM_STROMISIERER] = { .gfx = gfx_item_stromisiererTiles, .pal = gfx_item_stromisiererPal },
    [ITEM_SCHOENSCHUPPE] = { .gfx = gfx_item_schoenschuppeTiles, .pal = gfx_item_schoenschuppePal },
    [ITEM_DUBIOSDISC] = { .gfx = gfx_item_dubiosdiscTiles, .pal = gfx_item_dubiosdiscPal },
    [ITEM_DUESTERUMHANG] = { .gfx = gfx_item_duesterumhangTiles, .pal = gfx_item_duesterumhangPal },
    [ITEM_SCHUETZER] = { .gfx = gfx_item_schuetzerTiles, .pal = gfx_item_schuetzerPal },
    [ITEM_LEBEN_ORB] = { .gfx = gfx_item_leben_orbTiles, .pal = gfx_item_leben_orbPal },
    [ITEM_EVOLITH] = { .gfx = gfx_item_evolithTiles, .pal = gfx_item_evolithPal },
    [ITEM_SCHARFZAHN] = { .gfx = gfx_item_scharfzahnTiles, .pal = gfx_item_scharfzahnPal },
    [ITEM_OVALER_STEIN] = { .gfx = gfx_item_ovaler_steinTiles, .pal = gfx_item_ovaler_steinPal },
    [ITEM_ABRA_PUPPE] = { .gfx = gfx_item_abra_puppeTiles, .pal = gfx_item_abra_puppePal },
    [ITEM_KP_PLUS] = { .gfx = gfx_item_kp_plusTiles, .pal = gfx_item_kp_plusPal },
    [ITEM_PROTEIN] = { .gfx = gfx_item_proteinTiles, .pal = gfx_item_proteinPal },
    [ITEM_EISEN] = { .gfx = gfx_item_eisenTiles, .pal = gfx_item_eisenPal },
    [ITEM_CARBON] = { .gfx = gfx_item_carbonTiles, .pal = gfx_item_carbonPal },
    [ITEM_KALZIUM] = { .gfx = gfx_item_kalziumTiles, .pal = gfx_item_kalziumPal },
    [ITEM_SONDERBONBON] = { .gfx = gfx_item_sonderbonbonTiles, .pal = gfx_item_sonderbonbonPal },
    [ITEM_AP_PLUS] = { .gfx = gfx_item_ap_plusTiles, .pal = gfx_item_ap_plusPal },
    [ITEM_ZINK] = { .gfx = gfx_item_zinkTiles, .pal = gfx_item_zinkPal },
    [ITEM_AP_TOP] = { .gfx = gfx_item_ap_topTiles, .pal = gfx_item_ap_topPal },
    [ITEM_GOLDBONBON] = { .gfx = gfx_item_goldbonbonTiles, .pal = gfx_item_goldbonbonPal },
    [ITEM_MEGABLOCK] = { .gfx = gfx_item_megablockTiles, .pal = gfx_item_megablockPal },
    [ITEM_ANGRIFFPLUS] = { .gfx = gfx_item_angriffplusTiles, .pal = gfx_item_angriffplusPal },
    [ITEM_X_ANGRIFF] = { .gfx = gfx_item_x_angriffTiles, .pal = gfx_item_x_angriffPal },
    [ITEM_X_ABWEHR] = { .gfx = gfx_item_x_abwehrTiles, .pal = gfx_item_x_abwehrPal },
    [ITEM_X_TEMPO] = { .gfx = gfx_item_x_tempoTiles, .pal = gfx_item_x_tempoPal },
    [ITEM_X_TREFFER] = { .gfx = gfx_item_x_trefferTiles, .pal = gfx_item_x_trefferPal },
    [ITEM_X_SPEZIAL] = { .gfx = gfx_item_x_spezialTiles, .pal = gfx_item_x_spezialPal },
    [ITEM_POKEPUPPE] = { .gfx = gfx_item_pokepuppeTiles, .pal = gfx_item_pokepuppePal },
    [ITEM_ENECO_RUTE] = { .gfx = gfx_item_eneco_ruteTiles, .pal = gfx_item_eneco_rutePal },
    [ITEM_SUESSBONBON] = { .gfx = gfx_item_suessbonbonTiles, .pal = gfx_item_suessbonbonPal },
    [ITEM_SUPERSCHUTZ] = { .gfx = gfx_item_superschutzTiles, .pal = gfx_item_superschutzPal },
    [ITEM_TOP_SCHUTZ] = { .gfx = gfx_item_top_schutzTiles, .pal = gfx_item_top_schutzPal },
    [ITEM_FLUCHTSEIL] = { .gfx = gfx_item_fluchtseilTiles, .pal = gfx_item_fluchtseilPal },
    [ITEM_SCHUTZ] = { .gfx = gfx_item_schutzTiles, .pal = gfx_item_schutzPal },
    [ITEM_WUNDERSTAUB] = { .gfx = gfx_item_wunderstaubTiles, .pal = gfx_item_wunderstaubPal },
    [ITEM_NULLSAFT ] = { .gfx = gfx_item_nullsaftTiles, .pal = gfx_item_nullsaftPal },
    [ITEM_APFEL] = {.gfx = gfx_item_apfelTiles, .pal = gfx_item_apfelPal},
    [ITEM_GOLDAPFEL] = {.gfx = gfx_item_goldapfelTiles, .pal = gfx_item_goldapfelPal},
    [ITEM_BITTERKRAUT] = { .gfx = gfx_item_bitterkrautTiles, .pal = gfx_item_bitterkrautPal },
    [ITEM_RIESENAPFEL] = { .gfx = gfx_item_riesenapfelTiles, .pal = gfx_item_riesenapfelPal },
    [ITEM_SONNENSTEIN] = { .gfx = gfx_item_sonnensteinTiles, .pal = gfx_item_sonnensteinPal },
    [ITEM_MONDSTEIN] = { .gfx = gfx_item_mondsteinTiles, .pal = gfx_item_mondsteinPal },
    [ITEM_FEUERSTEIN] = { .gfx = gfx_item_feuersteinTiles, .pal = gfx_item_feuersteinPal },
    [ITEM_DONNERSTEIN] = { .gfx = gfx_item_donnersteinTiles, .pal = gfx_item_donnersteinPal },
    [ITEM_WASSERSTEIN] = { .gfx = gfx_item_wassersteinTiles, .pal = gfx_item_wassersteinPal },
    [ITEM_BLATTSTEIN] = { .gfx = gfx_item_blattsteinTiles, .pal = gfx_item_blattsteinPal },
    [ITEM_LINKKABEL] = { .gfx = gfx_item_linkkabelTiles, .pal = gfx_item_linkkabelPal },
    [ITEM_FINSTERSTEIN] = { .gfx = gfx_item_finstersteinTiles, .pal = gfx_item_finstersteinPal },
    [ITEM_LEUCHTSTEIN] = { .gfx = gfx_item_leuchtsteinTiles, .pal = gfx_item_leuchtsteinPal },
    [ITEM_FUNKELSTEIN] = { .gfx = gfx_item_funkelsteinTiles, .pal = gfx_item_funkelsteinPal },
    [ITEM_MINIPILZ] = { .gfx = gfx_item_minipilzTiles, .pal = gfx_item_minipilzPal },
    [ITEM_RIESENPILZ] = { .gfx = gfx_item_riesenpilzTiles, .pal = gfx_item_riesenpilzPal },
    [ITEM_SPV_ORB_N] = { .gfx = gfx_item_spv_orb_nTiles, .pal = gfx_item_spv_orb_nPal },
    [ITEM_PERLE] = { .gfx = gfx_item_perleTiles, .pal = gfx_item_perlePal },
    [ITEM_RIESENPERLE] = { .gfx = gfx_item_riesenperleTiles, .pal = gfx_item_riesenperlePal },
    [ITEM_STERNENSTAUB] = { .gfx = gfx_item_sternenstaubTiles, .pal = gfx_item_sternenstaubPal },
    [ITEM_STERNENSTUECK] = { .gfx = gfx_item_sternenstueckTiles, .pal = gfx_item_sternenstueckPal },
    [ITEM_NUGGET] = { .gfx = gfx_item_nuggetTiles, .pal = gfx_item_nuggetPal },
    [ITEM_HERZSCHUPPE] = { .gfx = gfx_item_herzschuppeTiles, .pal = gfx_item_herzschuppePal },
    [ITEM_ANGR_ORB_P] = { .gfx = gfx_item_angr_orb_pTiles, .pal = gfx_item_angr_orb_pPal },
    [ITEM_ANGR_ORB_N] = { .gfx = gfx_item_angr_orb_nTiles, .pal = gfx_item_angr_orb_nPal },
    [ITEM_VERT_ORB_P] = { .gfx = gfx_item_vert_orb_pTiles, .pal = gfx_item_vert_orb_pPal },
    [ITEM_VERT_ORB_N] = { .gfx = gfx_item_vert_orb_nTiles, .pal = gfx_item_vert_orb_nPal },
    [ITEM_INIT_ORB_P] = { .gfx = gfx_item_init_orb_pTiles, .pal = gfx_item_init_orb_pPal },
    [ITEM_INIT_ORB_N] = { .gfx = gfx_item_init_orb_nTiles, .pal = gfx_item_init_orb_nPal },
    [ITEM_SPA_ORB_P] = { .gfx = gfx_item_spa_orb_pTiles, .pal = gfx_item_spa_orb_pPal },
    [ITEM_SPA_ORB_N] = { .gfx = gfx_item_spa_orb_nTiles, .pal = gfx_item_spa_orb_nPal },
    [ITEM_SPV_ORB_P] = { .gfx = gfx_item_spv_orb_pTiles, .pal = gfx_item_spv_orb_pPal },
    [ITEM_ZIGZACHSBRIEF] = { .gfx = gfx_item_79Tiles, .pal = gfx_item_79Pal },
    [ITEM_HAFENBRIEF] = { .gfx = gfx_item_hafenbriefTiles, .pal = gfx_item_hafenbriefPal },
    [ITEM_GLITZERBRIEF] = { .gfx = gfx_item_glitzerbriefTiles, .pal = gfx_item_glitzerbriefPal },
    [ITEM_EILBRIEF] = { .gfx = gfx_item_eilbriefTiles, .pal = gfx_item_eilbriefPal },
    [ITEM_WALDBRIEF] = { .gfx = gfx_item_waldbriefTiles, .pal = gfx_item_waldbriefPal },
    [ITEM_WELLENBRIEF] = { .gfx = gfx_item_wellenbriefTiles, .pal = gfx_item_wellenbriefPal },
    [ITEM_PERLENBRIEF] = { .gfx = gfx_item_perlenbriefTiles, .pal = gfx_item_perlenbriefPal },
    [ITEM_DUNKELBRIEF] = { .gfx = gfx_item_dunkelbriefTiles, .pal = gfx_item_dunkelbriefPal },
    [ITEM_TROPENBRIEF] = { .gfx = gfx_item_tropenbriefTiles, .pal = gfx_item_tropenbriefPal },
    [ITEM_TRAUMBRIEF] = { .gfx = gfx_item_traumbriefTiles, .pal = gfx_item_traumbriefPal },
    [ITEM_EDELBRIEF] = { .gfx = gfx_item_edelbriefTiles, .pal = gfx_item_edelbriefPal },
    [ITEM_RETROBRIEF] = { .gfx = gfx_item_retrobriefTiles, .pal = gfx_item_retrobriefPal },
    [ITEM_AMRENABEERE] = { .gfx = gfx_item_amrenabeereTiles, .pal = gfx_item_amrenabeerePal },
    [ITEM_MARONBEERE] = { .gfx = gfx_item_maronbeereTiles, .pal = gfx_item_maronbeerePal },
    [ITEM_PIRSIFBEERE] = { .gfx = gfx_item_pirsifbeereTiles, .pal = gfx_item_pirsifbeerePal },
    [ITEM_FRAGIABEERE] = { .gfx = gfx_item_fragiabeereTiles, .pal = gfx_item_fragiabeerePal },
    [ITEM_WILBIRBEERE] = { .gfx = gfx_item_wilbirbeereTiles, .pal = gfx_item_wilbirbeerePal },
    [ITEM_JONAGOBEERE] = { .gfx = gfx_item_jonagobeereTiles, .pal = gfx_item_jonagobeerePal },
    [ITEM_SINELBEERE] = { .gfx = gfx_item_sinelbeereTiles, .pal = gfx_item_sinelbeerePal },
    [ITEM_PERSIMBEERE] = { .gfx = gfx_item_persimbeereTiles, .pal = gfx_item_persimbeerePal },
    [ITEM_PRUNUSBEERE] = { .gfx = gfx_item_prunusbeereTiles, .pal = gfx_item_prunusbeerePal },
    [ITEM_TSITRUBEERE] = { .gfx = gfx_item_tsitrubeereTiles, .pal = gfx_item_tsitrubeerePal },
    [ITEM_GIEFEBEERE] = { .gfx = gfx_item_giefebeereTiles, .pal = gfx_item_giefebeerePal },
    [ITEM_WIKIBEERE] = { .gfx = gfx_item_wikibeereTiles, .pal = gfx_item_wikibeerePal },
    [ITEM_MAGOBEERE] = { .gfx = gfx_item_magobeereTiles, .pal = gfx_item_magobeerePal },
    [ITEM_GAUVEBEERE] = { .gfx = gfx_item_gauvebeereTiles, .pal = gfx_item_gauvebeerePal },
    [ITEM_YAPABEERE] = { .gfx = gfx_item_yapabeereTiles, .pal = gfx_item_yapabeerePal },
    [ITEM_HIMMIHBEERE] = { .gfx = gfx_item_himmihbeereTiles, .pal = gfx_item_himmihbeerePal },
    [ITEM_MORBBEERE] = { .gfx = gfx_item_morbbeereTiles, .pal = gfx_item_morbbeerePal },
    [ITEM_NANABBEERE] = { .gfx = gfx_item_nanabbeereTiles, .pal = gfx_item_nanabbeerePal },
    [ITEM_NIRBEBEERE] = { .gfx = gfx_item_nirbebeereTiles, .pal = gfx_item_nirbebeerePal },
    [ITEM_SANANABEERE] = { .gfx = gfx_item_sananabeereTiles, .pal = gfx_item_sananabeerePal },
    [ITEM_GRANABEERE] = { .gfx = gfx_item_granabeereTiles, .pal = gfx_item_granabeerePal },
    [ITEM_SETANGBEERE] = { .gfx = gfx_item_setangbeereTiles, .pal = gfx_item_setangbeerePal },
    [ITEM_QUALOTBEERE] = { .gfx = gfx_item_qualotbeereTiles, .pal = gfx_item_qualotbeerePal },
    [ITEM_HONMELBEERE] = { .gfx = gfx_item_honmelbeereTiles, .pal = gfx_item_honmelbeerePal },
    [ITEM_LABRUSBEERE] = { .gfx = gfx_item_labrusbeereTiles, .pal = gfx_item_labrusbeerePal },
    [ITEM_TAMOTBEERE] = { .gfx = gfx_item_tamotbeereTiles, .pal = gfx_item_tamotbeerePal },
    [ITEM_SAIMBEERE] = { .gfx = gfx_item_saimbeereTiles, .pal = gfx_item_saimbeerePal },
    [ITEM_MAGOSTBEERE] = { .gfx = gfx_item_magostbeereTiles, .pal = gfx_item_magostbeerePal },
    [ITEM_RABUTABEERE] = { .gfx = gfx_item_rabutabeereTiles, .pal = gfx_item_rabutabeerePal },
    [ITEM_TRONZIBEERE] = { .gfx = gfx_item_tronzibeereTiles, .pal = gfx_item_tronzibeerePal },
    [ITEM_KIWANBEERE] = { .gfx = gfx_item_kiwanbeereTiles, .pal = gfx_item_kiwanbeerePal },
    [ITEM_PALLMBEERE] = { .gfx = gfx_item_pallmbeereTiles, .pal = gfx_item_pallmbeerePal },
    [ITEM_WASMELBEERE] = { .gfx = gfx_item_wasmelbeereTiles, .pal = gfx_item_wasmelbeerePal },
    [ITEM_DURINBEERE] = { .gfx = gfx_item_durinbeereTiles, .pal = gfx_item_durinbeerePal },
    [ITEM_MYRTILBEERE] = { .gfx = gfx_item_myrtilbeereTiles, .pal = gfx_item_myrtilbeerePal },
    [ITEM_LYDZIBEERE] = { .gfx = gfx_item_lydzibeereTiles, .pal = gfx_item_lydzibeerePal },
    [ITEM_LINGANBEERE] = { .gfx = gfx_item_linganbeereTiles, .pal = gfx_item_linganbeerePal },
    [ITEM_SALKABEERE] = { .gfx = gfx_item_salkabeereTiles, .pal = gfx_item_salkabeerePal },
    [ITEM_TAHAYBEERE] = { .gfx = gfx_item_tahaybeereTiles, .pal = gfx_item_tahaybeerePal },
    [ITEM_APIKOBEERE] = { .gfx = gfx_item_apikobeereTiles, .pal = gfx_item_apikobeerePal },
    [ITEM_LANSATBEERE] = { .gfx = gfx_item_lansatbeereTiles, .pal = gfx_item_lansatbeerePal },
    [ITEM_KRAMBOBEERE] = { .gfx = gfx_item_krambobeereTiles, .pal = gfx_item_krambobeerePal },
    [ITEM_ENIGMABEERE] = { .gfx = gfx_item_enigmabeereTiles, .pal = gfx_item_enigmabeerePal },
    [ITEM_ITEM_B0] = { .gfx = gfx_item_item_b0Tiles, .pal = gfx_item_item_b0Pal },
    [ITEM_WAHLGLAS] = { .gfx = gfx_item_wahlglasTiles, .pal = gfx_item_wahlglasPal },
    [ITEM_WAHLSCHAL] = { .gfx = gfx_item_wahlschalTiles, .pal = gfx_item_wahlschalPal },
    [ITEM_BLENDPUDER] = { .gfx = gfx_item_blendpuderTiles, .pal = gfx_item_blendpuderPal },
    [ITEM_SCHLOHKRAUT] = { .gfx = gfx_item_schlohkrautTiles, .pal = gfx_item_schlohkrautPal },
    [ITEM_MACHOBAND] = { .gfx = gfx_item_machobandTiles, .pal = gfx_item_machobandPal },
    [ITEM_EP_TEILER] = { .gfx = gfx_item_ep_teilerTiles, .pal = gfx_item_ep_teilerPal },
    [ITEM_FLINKKLAUE] = { .gfx = gfx_item_flinkklaueTiles, .pal = gfx_item_flinkklauePal },
    [ITEM_SANFTGLOCKE] = { .gfx = gfx_item_sanftglockeTiles, .pal = gfx_item_sanftglockePal },
    [ITEM_MENTALKRAUT] = { .gfx = gfx_item_mentalkrautTiles, .pal = gfx_item_mentalkrautPal },
    [ITEM_WAHLBAND] = { .gfx = gfx_item_wahlbandTiles, .pal = gfx_item_wahlbandPal },
    [ITEM_KING_STEIN] = { .gfx = gfx_item_king_steinTiles, .pal = gfx_item_king_steinPal },
    [ITEM_SILBERSTAUB] = { .gfx = gfx_item_silberstaubTiles, .pal = gfx_item_silberstaubPal },
    [ITEM_MUENZAMULETT] = { .gfx = gfx_item_muenzamulettTiles, .pal = gfx_item_muenzamulettPal },
    [ITEM_SCHUTZBAND] = { .gfx = gfx_item_schutzbandTiles, .pal = gfx_item_schutzbandPal },
    [ITEM_SEELENTAU] = { .gfx = gfx_item_seelentauTiles, .pal = gfx_item_seelentauPal },
    [ITEM_ABYSSZAHN] = { .gfx = gfx_item_abysszahnTiles, .pal = gfx_item_abysszahnPal },
    [ITEM_ABYSSPLATTE] = { .gfx = gfx_item_abyssplatteTiles, .pal = gfx_item_abyssplattePal },
    [ITEM_RAUCHBALL] = { .gfx = gfx_item_rauchballTiles, .pal = gfx_item_rauchballPal },
    [ITEM_EWIGSTEIN] = { .gfx = gfx_item_ewigsteinTiles, .pal = gfx_item_ewigsteinPal },
    [ITEM_FOKUS_BAND] = { .gfx = gfx_item_fokus_bandTiles, .pal = gfx_item_fokus_bandPal },
    [ITEM_GLUECKS_EI] = { .gfx = gfx_item_gluecks_eiTiles, .pal = gfx_item_gluecks_eiPal },
    [ITEM_SCOPE_LINSE] = { .gfx = gfx_item_scope_linseTiles, .pal = gfx_item_scope_linsePal },
    [ITEM_METALLMANTEL] = { .gfx = gfx_item_metallmantelTiles, .pal = gfx_item_metallmantelPal },
    [ITEM_UEBERRESTE] = { .gfx = gfx_item_ueberresteTiles, .pal = gfx_item_ueberrestePal },
    [ITEM_DRACHENHAUT] = { .gfx = gfx_item_drachenhautTiles, .pal = gfx_item_drachenhautPal },
    [ITEM_KUGELBLITZ] = { .gfx = gfx_item_kugelblitzTiles, .pal = gfx_item_kugelblitzPal },
    [ITEM_PUDERSAND] = { .gfx = gfx_item_pudersandTiles, .pal = gfx_item_pudersandPal },
    [ITEM_GRANITSTEIN] = { .gfx = gfx_item_granitsteinTiles, .pal = gfx_item_granitsteinPal },
    [ITEM_WUNDERSAAT] = { .gfx = gfx_item_wundersaatTiles, .pal = gfx_item_wundersaatPal },
    [ITEM_SCHATTENGLAS] = { .gfx = gfx_item_schattenglasTiles, .pal = gfx_item_schattenglasPal },
    [ITEM_SCHWARZGURT] = { .gfx = gfx_item_schwarzgurtTiles, .pal = gfx_item_schwarzgurtPal },
    [ITEM_MAGNET] = { .gfx = gfx_item_magnetTiles, .pal = gfx_item_magnetPal },
    [ITEM_ZAUBERWASSER] = { .gfx = gfx_item_zauberwasserTiles, .pal = gfx_item_zauberwasserPal },
    [ITEM_HACKATTACK] = { .gfx = gfx_item_hackattackTiles, .pal = gfx_item_hackattackPal },
    [ITEM_GIFTSTICH] = { .gfx = gfx_item_giftstichTiles, .pal = gfx_item_giftstichPal },
    [ITEM_EWIGES_EIS] = { .gfx = gfx_item_ewiges_eisTiles, .pal = gfx_item_ewiges_eisPal },
    [ITEM_BANNSTICKER] = { .gfx = gfx_item_bannstickerTiles, .pal = gfx_item_bannstickerPal },
    [ITEM_KRUEMMLOEFFEL] = { .gfx = gfx_item_kruemmloeffelTiles, .pal = gfx_item_kruemmloeffelPal },
    [ITEM_HOLZKOHLE] = { .gfx = gfx_item_holzkohleTiles, .pal = gfx_item_holzkohlePal },
    [ITEM_DRACHENZAHN] = { .gfx = gfx_item_drachenzahnTiles, .pal = gfx_item_drachenzahnPal },
    [ITEM_SEIDENSCHAL] = { .gfx = gfx_item_seidenschalTiles, .pal = gfx_item_seidenschalPal },
    [ITEM_UP_GRADE] = { .gfx = gfx_item_up_gradeTiles, .pal = gfx_item_up_gradePal },
    [ITEM_SEEGESANG] = { .gfx = gfx_item_seegesangTiles, .pal = gfx_item_seegesangPal },
    [ITEM_SEERAUCH] = { .gfx = gfx_item_seerauchTiles, .pal = gfx_item_seerauchPal },
    [ITEM_LAXRAUCH] = { .gfx = gfx_item_laxrauchTiles, .pal = gfx_item_laxrauchPal },
    [ITEM_LUCKY_PUNCH] = { .gfx = gfx_item_lucky_punchTiles, .pal = gfx_item_lucky_punchPal },
    [ITEM_METALLSTAUB] = { .gfx = gfx_item_metallstaubTiles, .pal = gfx_item_metallstaubPal },
    [ITEM_KAMPFKNOCHEN] = { .gfx = gfx_item_kampfknochenTiles, .pal = gfx_item_kampfknochenPal },
    [ITEM_LAUCHSTANGE] = { .gfx = gfx_item_lauchstangeTiles, .pal = gfx_item_lauchstangePal },
    [ITEM_BISAFLORNIT] = { .gfx = gfx_item_bisaflornitTiles, .pal = gfx_item_bisaflornitPal },
    [ITEM_GLURAKNIT] = { .gfx = gfx_item_gluraknitTiles, .pal = gfx_item_gluraknitPal },
    [ITEM_TURTOKNIT] = { .gfx = gfx_item_turtoknitTiles, .pal = gfx_item_turtoknitPal },
    [ITEM_TERRASORNIT] = { .gfx = gfx_item_terrasornitTiles, .pal = gfx_item_terrasornitPal },
    [ITEM_ZERBERNIT] = { .gfx = gfx_item_zerbernitTiles, .pal = gfx_item_zerbernitPal },
    [ITEM_SKULLYDRANIT] = { .gfx = gfx_item_skullydranitTiles, .pal = gfx_item_skullydranitPal },
    [ITEM_AQUANANIT] = { .gfx = gfx_item_aquananitTiles, .pal = gfx_item_aquananitPal },
    [ITEM_FLAMARANIT] = { .gfx = gfx_item_flamaranitTiles, .pal = gfx_item_flamaranitPal },
    [ITEM_ALTARIANIT] = { .gfx = gfx_item_altarianitTiles, .pal = gfx_item_altarianitPal },
    [ITEM_AMPHAROSNIT] = { .gfx = gfx_item_ampharosnitTiles, .pal = gfx_item_ampharosnitPal },
    [ITEM_BANETTENIT] = { .gfx = gfx_item_banettenitTiles, .pal = gfx_item_banettenitPal },
    [ITEM_BIBORNIT] = { .gfx = gfx_item_bibornitTiles, .pal = gfx_item_bibornitPal },
    [ITEM_MAGMAHERZ] = { .gfx = gfx_item_magmaherzTiles, .pal = gfx_item_magmaherzPal },
    [ITEM_GEOWAZNIT] = { .gfx = gfx_item_geowaznitTiles, .pal = gfx_item_geowaznitPal },
    [ITEM_TROPIUSNIT] = { .gfx = gfx_item_tropiusnitTiles, .pal = gfx_item_tropiusnitPal },
    [ITEM_OCTILLERYNIT] = { .gfx = gfx_item_octillerynitTiles, .pal = gfx_item_octillerynitPal },
    [ITEM_RASAFFNIT] = { .gfx = gfx_item_rasaffnitTiles, .pal = gfx_item_rasaffnitPal },
    [ITEM_SANDAMERNIT] = { .gfx = gfx_item_sandamernitTiles, .pal = gfx_item_sandamernitPal },
    [ITEM_LAHMUSNIT] = { .gfx = gfx_item_lahmusnitTiles, .pal = gfx_item_lahmusnitPal },
    [ITEM_MASKEREGENIT] = { .gfx = gfx_item_maskeregenitTiles, .pal = gfx_item_maskeregenitPal },
    [ITEM_ARIADOSNIT] = { .gfx = gfx_item_ariadosnitTiles, .pal = gfx_item_ariadosnitPal },
    [ITEM_ITEM_F7] = { .gfx = gfx_item_item_f7Tiles, .pal = gfx_item_item_f7Pal },
    [ITEM_LAHMRAUCH] = { .gfx = gfx_item_lahmrauchTiles, .pal = gfx_item_lahmrauchPal },
    [ITEM_EISBROCKEN] = { .gfx = gfx_item_eisbrockenTiles, .pal = gfx_item_eisbrockenPal },
    [ITEM_NASSBROCKEN] = { .gfx = gfx_item_nassbrockenTiles, .pal = gfx_item_nassbrockenPal },
    [ITEM_GLATTBROCKEN] = { .gfx = gfx_item_glattbrockenTiles, .pal = gfx_item_glattbrockenPal },
    [ITEM_HEISSBROCKEN] = { .gfx = gfx_item_heissbrockenTiles, .pal = gfx_item_heissbrockenPal },
    [ITEM_LICHTLEHM] = { .gfx = gfx_item_lichtlehmTiles, .pal = gfx_item_lichtlehmPal },
    [ITEM_STEINRAUCH] = { .gfx = gfx_item_steinrauchTiles, .pal = gfx_item_steinrauchPal },
    [ITEM_SCHEUCHRAUCH] = { .gfx = gfx_item_scheuchrauchTiles, .pal = gfx_item_scheuchrauchPal },
    [ITEM_GLUECKSRAUCH] = { .gfx = gfx_item_gluecksrauchTiles, .pal = gfx_item_gluecksrauchPal },
    [ITEM_KOEDER] = { .gfx = gfx_item_koederTiles, .pal = gfx_item_koederPal },
    [ITEM_GOLDKOEDER] = { .gfx = gfx_item_goldkoederTiles, .pal = gfx_item_goldkoederPal },
    [ITEM_LEUCHTKOEDER] = { .gfx = gfx_item_leuchtkoederTiles, .pal = gfx_item_leuchtkoederPal },
    [ITEM_MUENZKORB] = { .gfx = gfx_item_muenzkorbTiles, .pal = gfx_item_muenzkorbPal },
    [ITEM_DETEKTOR] = { .gfx = gfx_item_detektorTiles, .pal = gfx_item_detektorPal },
    [ITEM_ANGEL] = { .gfx = gfx_item_angelTiles, .pal = gfx_item_angelPal },
    [ITEM_PROFIANGEL] = { .gfx = gfx_item_profiangelTiles, .pal = gfx_item_profiangelPal },
    [ITEM_SUPERANGEL] = { .gfx = gfx_item_superangelTiles, .pal = gfx_item_superangelPal },
    [ITEM_BOOTSTICKET] = { .gfx = gfx_item_bootsticketTiles, .pal = gfx_item_bootsticketPal },
    [ITEM_WETTB_KARTE] = { .gfx = gfx_item_wettb_karteTiles, .pal = gfx_item_wettb_kartePal },
    [ITEM_WOLKENGARN] = { .gfx = gfx_item_wolkengarnTiles, .pal = gfx_item_wolkengarnPal },
    [ITEM_WAILMERKANNE] = { .gfx = gfx_item_wailmerkanneTiles, .pal = gfx_item_wailmerkannePal },
    [ITEM_GLUECKSMUENZE] = { .gfx = gfx_item_gluecksmuenzeTiles, .pal = gfx_item_gluecksmuenzePal },
    [ITEM_ASCHETASCHE] = { .gfx = gfx_item_aschetascheTiles, .pal = gfx_item_aschetaschePal },
    [ITEM_GEISTERSCHLUESSEL] = { .gfx = gfx_item_geisterschluesselTiles, .pal = gfx_item_geisterschluesselPal },
    [ITEM_KUNSTRAD] = { .gfx = gfx_item_kunstradTiles, .pal = gfx_item_kunstradPal },
    [ITEM_BOX] = { .gfx = gfx_item_boxTiles, .pal = gfx_item_boxPal },
    [ITEM_BRIEF] = { .gfx = gfx_item_briefTiles, .pal = gfx_item_briefPal },
    [ITEM_AEON_TICKET] = { .gfx = gfx_item_aeon_ticketTiles, .pal = gfx_item_aeon_ticketPal },
    [ITEM_SPIRITKERN] = { .gfx = gfx_item_spiritkernTiles, .pal = gfx_item_spiritkernPal },
    [ITEM_ROTES_ZAHNRAD] = { .gfx = gfx_item_rotes_zahnradTiles, .pal = gfx_item_rotes_zahnradPal }, 
    [ITEM_BLAUES_ZAHNRAD] = { .gfx = gfx_item_blaues_zahnradTiles, .pal = gfx_item_blaues_zahnradPal },
    [ITEM_GELBES_ZAHNRAD] = { .gfx = gfx_item_gelbes_zahnradTiles, .pal = gfx_item_gelbes_zahnradPal },
    [ITEM_GRUENES_ZAHNRAD] = { .gfx = gfx_item_gruenes_zahnradTiles, .pal = gfx_item_gruenes_zahnradPal },
    [ITEM_GOLDSCHLUESSEL] = { .gfx = gfx_item_goldschluesselTiles, .pal = gfx_item_goldschluesselPal },
    [ITEM_ZELLENSCHLUESSEL] = { .gfx = gfx_item_zellenschluesselTiles, .pal = gfx_item_zellenschluesselPal },
    [ITEM_K4_SCHLUESSEL] = { .gfx = gfx_item_k4_schluesselTiles, .pal = gfx_item_k4_schluesselPal },
    [ITEM_K6_SCHLUESSEL] = { .gfx = gfx_item_k6_schluesselTiles, .pal = gfx_item_k6_schluesselPal },
    [ITEM_L_SCHLUESSEL] = { .gfx = gfx_item_l_schluesselTiles, .pal = gfx_item_l_schluesselPal },
    [ITEM_WURZELFOSSIL] = { .gfx = gfx_item_wurzelfossilTiles, .pal = gfx_item_wurzelfossilPal },
    [ITEM_KLAUENFOSSIL] = { .gfx = gfx_item_klauenfossilTiles, .pal = gfx_item_klauenfossilPal },
    [ITEM_DEVON_SCOPE] = { .gfx = gfx_item_devon_scopeTiles, .pal = gfx_item_devon_scopePal },
    [ITEM_TM01] = { .gfx = gfx_item_tm01Tiles, .pal = gfx_item_tm01Pal },
    [ITEM_TM02] = { .gfx = gfx_item_tm02Tiles, .pal = gfx_item_tm02Pal },
    [ITEM_TM03] = { .gfx = gfx_item_tm03Tiles, .pal = gfx_item_tm03Pal },
    [ITEM_TM04] = { .gfx = gfx_item_tm04Tiles, .pal = gfx_item_tm04Pal },
    [ITEM_TM05] = { .gfx = gfx_item_tm05Tiles, .pal = gfx_item_tm05Pal },
    [ITEM_TM06] = { .gfx = gfx_item_tm06Tiles, .pal = gfx_item_tm06Pal },
    [ITEM_TM07] = { .gfx = gfx_item_tm07Tiles, .pal = gfx_item_tm07Pal },
    [ITEM_TM08] = { .gfx = gfx_item_tm08Tiles, .pal = gfx_item_tm08Pal },
    [ITEM_TM09] = { .gfx = gfx_item_tm09Tiles, .pal = gfx_item_tm09Pal },
    [ITEM_TM10] = { .gfx = gfx_item_tm10Tiles, .pal = gfx_item_tm10Pal },
    [ITEM_TM11] = { .gfx = gfx_item_tm11Tiles, .pal = gfx_item_tm11Pal },
    [ITEM_TM12] = { .gfx = gfx_item_tm12Tiles, .pal = gfx_item_tm12Pal },
    [ITEM_TM13] = { .gfx = gfx_item_tm13Tiles, .pal = gfx_item_tm13Pal },
    [ITEM_TM14] = { .gfx = gfx_item_tm14Tiles, .pal = gfx_item_tm14Pal },
    [ITEM_TM15] = { .gfx = gfx_item_tm15Tiles, .pal = gfx_item_tm15Pal },
    [ITEM_TM16] = { .gfx = gfx_item_tm16Tiles, .pal = gfx_item_tm16Pal },
    [ITEM_TM17] = { .gfx = gfx_item_tm17Tiles, .pal = gfx_item_tm17Pal },
    [ITEM_TM18] = { .gfx = gfx_item_tm18Tiles, .pal = gfx_item_tm18Pal },
    [ITEM_TM19] = { .gfx = gfx_item_tm19Tiles, .pal = gfx_item_tm19Pal },
    [ITEM_TM20] = { .gfx = gfx_item_tm20Tiles, .pal = gfx_item_tm20Pal },
    [ITEM_TM21] = { .gfx = gfx_item_tm21Tiles, .pal = gfx_item_tm21Pal },
    [ITEM_TM22] = { .gfx = gfx_item_tm22Tiles, .pal = gfx_item_tm22Pal },
    [ITEM_TM23] = { .gfx = gfx_item_tm23Tiles, .pal = gfx_item_tm23Pal },
    [ITEM_TM24] = { .gfx = gfx_item_tm24Tiles, .pal = gfx_item_tm24Pal },
    [ITEM_TM25] = { .gfx = gfx_item_tm25Tiles, .pal = gfx_item_tm25Pal },
    [ITEM_TM26] = { .gfx = gfx_item_tm26Tiles, .pal = gfx_item_tm26Pal },
    [ITEM_TM27] = { .gfx = gfx_item_tm27Tiles, .pal = gfx_item_tm27Pal },
    [ITEM_TM28] = { .gfx = gfx_item_tm28Tiles, .pal = gfx_item_tm28Pal },
    [ITEM_TM29] = { .gfx = gfx_item_tm29Tiles, .pal = gfx_item_tm29Pal },
    [ITEM_TM30] = { .gfx = gfx_item_tm30Tiles, .pal = gfx_item_tm30Pal },
    [ITEM_TM31] = { .gfx = gfx_item_tm31Tiles, .pal = gfx_item_tm31Pal },
    [ITEM_TM32] = { .gfx = gfx_item_tm32Tiles, .pal = gfx_item_tm32Pal },
    [ITEM_TM33] = { .gfx = gfx_item_tm33Tiles, .pal = gfx_item_tm33Pal },
    [ITEM_TM34] = { .gfx = gfx_item_tm34Tiles, .pal = gfx_item_tm34Pal },
    [ITEM_TM35] = { .gfx = gfx_item_tm35Tiles, .pal = gfx_item_tm35Pal },
    [ITEM_TM36] = { .gfx = gfx_item_tm36Tiles, .pal = gfx_item_tm36Pal },
    [ITEM_TM37] = { .gfx = gfx_item_tm37Tiles, .pal = gfx_item_tm37Pal },
    [ITEM_TM38] = { .gfx = gfx_item_tm38Tiles, .pal = gfx_item_tm38Pal },
    [ITEM_TM39] = { .gfx = gfx_item_tm39Tiles, .pal = gfx_item_tm39Pal },
    [ITEM_TM40] = { .gfx = gfx_item_tm40Tiles, .pal = gfx_item_tm40Pal },
    [ITEM_TM41] = { .gfx = gfx_item_tm41Tiles, .pal = gfx_item_tm41Pal },
    [ITEM_TM42] = { .gfx = gfx_item_tm42Tiles, .pal = gfx_item_tm42Pal },
    [ITEM_TM43] = { .gfx = gfx_item_tm43Tiles, .pal = gfx_item_tm43Pal },
    [ITEM_TM44] = { .gfx = gfx_item_tm44Tiles, .pal = gfx_item_tm44Pal },
    [ITEM_TM45] = { .gfx = gfx_item_tm45Tiles, .pal = gfx_item_tm45Pal },
    [ITEM_TM46] = { .gfx = gfx_item_tm46Tiles, .pal = gfx_item_tm46Pal },
    [ITEM_TM47] = { .gfx = gfx_item_tm47Tiles, .pal = gfx_item_tm47Pal },
    [ITEM_TM48] = { .gfx = gfx_item_tm48Tiles, .pal = gfx_item_tm48Pal },
    [ITEM_TM49] = { .gfx = gfx_item_tm49Tiles, .pal = gfx_item_tm49Pal },
    [ITEM_TM50] = { .gfx = gfx_item_tm50Tiles, .pal = gfx_item_tm50Pal },
    [ITEM_VM01] = { .gfx = gfx_item_vm01Tiles, .pal = gfx_item_vm01Pal },
    [ITEM_VM02] = { .gfx = gfx_item_vm02Tiles, .pal = gfx_item_vm02Pal },
    [ITEM_VM03] = { .gfx = gfx_item_vm03Tiles, .pal = gfx_item_vm03Pal },
    [ITEM_VM04] = { .gfx = gfx_item_vm04Tiles, .pal = gfx_item_vm04Pal },
    [ITEM_VM05] = { .gfx = gfx_item_vm05Tiles, .pal = gfx_item_vm05Pal },
    [ITEM_VM06] = { .gfx = gfx_item_vm06Tiles, .pal = gfx_item_vm06Pal },
    [ITEM_VM07] = { .gfx = gfx_item_vm07Tiles, .pal = gfx_item_vm07Pal },
    [ITEM_VM08] = { .gfx = gfx_item_vm08Tiles, .pal = gfx_item_vm08Pal },
    [ITEM_SCHWARZPULVER] = { .gfx = gfx_item_schwarzpulverTiles, .pal = gfx_item_schwarzpulverPal },
    [ITEM_VIERBLATT] = { .gfx = gfx_item_vierblattTiles, .pal = gfx_item_vierblattPal },
    [ITEM_ZUGANGSKARTE] = { .gfx = gfx_item_zugangskarteTiles, .pal = gfx_item_zugangskartePal },
    [ITEM_POKEFLOETE] = { .gfx = gfx_item_pokefloeteTiles, .pal = gfx_item_pokefloetePal },
    [ITEM__OEFFNER] = { .gfx = gfx_item__oeffnerTiles, .pal = gfx_item__oeffnerPal },
    [ITEM_ALTE_KARTE] = { .gfx = gfx_item_alte_karteTiles, .pal = gfx_item_alte_kartePal },
    [ITEM_PKMCORDER] = { .gfx = gfx_item_pkmcorderTiles, .pal = gfx_item_pkmcorderPal },
    [ITEM_ALTBERNSTEIN] = { .gfx = gfx_item_altbernsteinTiles, .pal = gfx_item_altbernsteinPal },
    [ITEM_TUEROEFFNER] = { .gfx = gfx_item_tueroeffnerTiles, .pal = gfx_item_tueroeffnerPal },
    [ITEM_LIFTOEFFNER] = { .gfx = gfx_item_liftoeffnerTiles, .pal = gfx_item_liftoeffnerPal },
    [ITEM_HELIXFOSSIL] = { .gfx = gfx_item_helixfossilTiles, .pal = gfx_item_helixfossilPal },
    [ITEM_DOMFOSSIL] = { .gfx = gfx_item_domfossilTiles, .pal = gfx_item_domfossilPal },
    [ITEM_SILPH_SCOPE] = { .gfx = gfx_item_silph_scopeTiles, .pal = gfx_item_silph_scopePal },
    [ITEM_FAHRRAD] = { .gfx = gfx_item_fahrradTiles, .pal = gfx_item_fahrradPal },
    [ITEM_KARTE] = { .gfx = gfx_item_karteTiles, .pal = gfx_item_kartePal },
    [ITEM_KAMPFFAHNDER] = { .gfx = gfx_item_kampffahnderTiles, .pal = gfx_item_kampffahnderPal },
    [ITEM_RUHMESDATEI] = { .gfx = gfx_item_ruhmesdateiTiles, .pal = gfx_item_ruhmesdateiPal },
    [ITEM_VMTM_BOX] = { .gfx = gfx_item_vmtm_boxTiles, .pal = gfx_item_vmtm_boxPal },
    [ITEM_BEERENTUETE] = { .gfx = gfx_item_beerentueteTiles, .pal = gfx_item_beerentuetePal },
    [ITEM_LEHRKANAL] = { .gfx = gfx_item_lehrkanalTiles, .pal = gfx_item_lehrkanalPal },
    [ITEM_TRI_PASS] = { .gfx = gfx_item_tri_passTiles, .pal = gfx_item_tri_passPal },
    [ITEM_BUNT_PASS] = { .gfx = gfx_item_bunt_passTiles, .pal = gfx_item_bunt_passPal },
    [ITEM_MEGA_AMULETT] = { .gfx = gfx_item_mega_amulettTiles, .pal = gfx_item_mega_amulettPal },
    [ITEM_GEHEIMTICKET] = { .gfx = gfx_item_geheimticketTiles, .pal = gfx_item_geheimticketPal },
    [ITEM_AURORATICKET] = { .gfx = gfx_item_auroraticketTiles, .pal = gfx_item_auroraticketPal },
    [ITEM_PUDERDOESCHEN] = { .gfx = gfx_item_puderdoeschenTiles, .pal = gfx_item_puderdoeschenPal },
    [ITEM_RUBIN] = { .gfx = gfx_item_rubinTiles, .pal = gfx_item_rubinPal },
    [ITEM_SAPHIR] = { .gfx = gfx_item_saphirTiles, .pal = gfx_item_saphirPal },
    [ITEM_NA] = { .gfx = gfx_item_naTiles, .pal = gfx_item_naPal },
    [ITEM_NORMALJUWEL] = { .gfx = gfx_item_normaljuwelTiles, .pal = gfx_item_normaljuwelPal },
    [ITEM_KAMPFJUWEL] = { .gfx = gfx_item_kampfjuwelTiles, .pal = gfx_item_kampfjuwelPal },
    [ITEM_FLUGJUWEL] = { .gfx = gfx_item_flugjuwelTiles, .pal = gfx_item_flugjuwelPal },
    [ITEM_GIFTJUWEL] = { .gfx = gfx_item_giftjuwelTiles, .pal = gfx_item_giftjuwelPal },
    [ITEM_BODENJUWEL] = { .gfx = gfx_item_bodenjuwelTiles, .pal = gfx_item_bodenjuwelPal },
    [ITEM_GESTEINJUWEL] = { .gfx = gfx_item_gesteinjuwelTiles, .pal = gfx_item_gesteinjuwelPal },
    [ITEM_KAEFERJUWEL] = { .gfx = gfx_item_kaeferjuwelTiles, .pal = gfx_item_kaeferjuwelPal },
    [ITEM_GEISTJUWEL] = { .gfx = gfx_item_geisterjuwelTiles, .pal = gfx_item_geisterjuwelPal },
    [ITEM_STAHLJUWEL] = { .gfx = gfx_item_stahljuwelTiles, .pal = gfx_item_stahljuwelPal },
    [ITEM_FEEJUWEL] = { .gfx = gfx_item_feejuwelTiles, .pal = gfx_item_feejuwelPal },
    [ITEM_FEUERJUWEL] = { .gfx = gfx_item_feuerjuwelTiles, .pal = gfx_item_feuerjuwelPal },
    [ITEM_WASSERJUWEL] = { .gfx = gfx_item_wasserjuwelTiles, .pal = gfx_item_wasserjuwelPal },
    [ITEM_PFLANZEJUWEL] = { .gfx = gfx_item_pflanzejuwelTiles, .pal = gfx_item_pflanzejuwelPal },
    [ITEM_ELEKTROJUWEL] = { .gfx = gfx_item_elektrojuwelTiles, .pal = gfx_item_elektrojuwelPal },
    [ITEM_PSYCHOJUWEL] = { .gfx = gfx_item_pyschojuwelTiles, .pal = gfx_item_pyschojuwelPal },
    [ITEM_EISJUWEL] = { .gfx = gfx_item_eisjuwelTiles, .pal = gfx_item_eisjuwelPal },
    [ITEM_DRACOJUWEL] = { .gfx = gfx_item_dracojuwelTiles, .pal = gfx_item_dracojuwelPal },
    [ITEM_UNLICHTJUWEL] = { .gfx = gfx_item_unlichtjuwelTiles, .pal = gfx_item_unlichtjuwelPal },
    [ITEM_SOLARSTUECK] = {.gfx = gfx_item_solarstueckTiles, .pal = gfx_item_solarstueckPal},
    [ITEM_LUNARSTUECK] = {.gfx = gfx_item_lunarstueckTiles, .pal = gfx_item_lunarstueckPal},
    [ITEM_DUESTERSTUECK] = {.gfx = gfx_item_duesterstueckTiles, .pal = gfx_item_duesterstueckPal},
    [ITEM_GLITZERSTUECK] = {.gfx = gfx_item_glitzerstueckTiles, .pal = gfx_item_glitzerstueckPal},
    [ITEM_LICHTSTUECK] = {.gfx = gfx_item_lichtstueckTiles, .pal = gfx_item_lichtstueckPal},
    [ITEM_MININUGGET] = {.gfx = gfx_item_mininuggetTiles, .pal = gfx_item_mininuggetPal},
    [ITEM_QUARZSTAUB] = { .gfx = gfx_item_quarzstaubTiles, .pal = gfx_item_quarzstaubPal },
    [ITEM_ENERGIEQUARZ] = { .gfx = gfx_item_energiequarzTiles, .pal = gfx_item_energiequarzPal },
    [ITEM_MULCH] = {.gfx = gfx_item_mulchTiles, .pal = gfx_item_mulchPal},
    [ITEM_WUESTEN_EI] = {.gfx = gfx_item_wuesten_eiTiles, .pal = gfx_item_wuesten_eiPal},
    [ITEM_TUNDRA_EI] = {.gfx = gfx_item_tundra_eiTiles, .pal = gfx_item_tundra_eiPal},
    [ITEM_GEWITTER_EI] = {.gfx = gfx_item_gewitter_eiTiles, .pal = gfx_item_gewitter_eiPal},
    [ITEM_SONNEN_EI] = {.gfx = gfx_item_sonnen_eiTiles, .pal = gfx_item_sonnen_eiPal},
    [ITEM_ENERGIEDISK] = {.gfx = gfx_item_energiediskTiles, .pal = gfx_item_energiediskPal},
};

const u8 *item_get_resource(u16 item_idx, u8 get_palette) {
    if (item_idx >= ITEM_CNT) 
        item_idx = 0;
    if (get_palette)
        return item_gfx_pairs[item_idx].pal;
    else
        return item_gfx_pairs[item_idx].gfx;

}