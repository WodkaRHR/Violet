#ifndef H_ABILITIES
#define H_ABILITIES

#include "pokemon.h"

#define FLAG_AP_SPARER_TRIGGERED 0x918

#define ABILITY_CNT 0x71

#define ABILITY_NONE 0x0
#define DUFTNOTE 0x1
#define NIESEL 0x2
#define TEMPOSCHUB 0x3
#define KAMPFPANZER 0x4
#define ROBUSTHEIT 0x5
#define FEUCHTIGKEIT 0x6
#define FLEXIBILITAET 0x7
#define SANDSCHLEIER 0x8
#define STATIK 0x9
#define VOLTABSORBER 0xa
#define H2O_ABSORBER 0xb
#define DOESIGKEIT 0xc
#define WOLKE_SIEBEN 0xd
#define FACETTENAUGE 0xe
#define INSOMNIA 0xf
#define FARBWECHSEL 0x10
#define IMMUNITAET 0x11
#define FEUERFAENGER 0x12
#define PUDERABWEHR 0x13
#define TEMPOMACHER 0x14
#define SAUGNAPF 0x15
#define BEDROHER 0x16
#define WEGSPERRE 0x17
#define RAUHAUT 0x18
#define WUNDERWACHE 0x19
#define SCHWEBE 0x1a
#define SPORENWIRT 0x1b
#define SYNCHRO 0x1c
#define NEUTRALTORSO 0x1d
#define INNERE_KRAFT 0x1e
#define BLITZFAENGER 0x1f
#define EDELMUT 0x20
#define WASSERTEMPO 0x21
#define CHLOROPHYLL 0x22
#define ERLEUCHTUNG 0x23
#define FAEHRTE 0x24
#define KRAFTKOLOSS 0x25
#define GIFTDORN 0x26
#define KONZENTRATOR 0x27
#define MAGMAPANZER 0x28
#define AQUAHUELLE 0x29
#define MAGNETFALLE 0x2a
#define LAERMSCHUTZ 0x2b
#define REGENGENUSS 0x2c
#define SANDSTURM 0x2d
#define ERZWINGER 0x2e
#define SPECKSCHICHT 0x2f
#define FRUEHWECKER 0x30
#define FLAMMKOERPER 0x31
#define ANGSTHASE 0x32
#define ADLERAUGE 0x33
#define SCHERENMACHT 0x34
#define MITNAHME 0x35
#define SCHNARCHNASE 0x36
#define UEBEREIFER 0x37
#define CHARMEBOLZEN 0x38
#define PLUS 0x39
#define MINUS 0x3a
#define PROGNOSE 0x3b
#define WERTEHALTER 0x3c
#define EXPIDERMIS 0x3d
#define ADRENALIN 0x3e
#define NOTSCHUTZ 0x3f
#define KLOAKENSOSSE 0x40
#define NOTDUENGER 0x41
#define GROSSBRAND 0x42
#define STURZBACH 0x43
#define HEXAPLAGA 0x44
#define STEINHAUPT 0x45
#define DUERRE 0x46
#define AUSWEGSLOS 0x47
#define MUNTERKEIT 0x48
#define PULVERRAUCH 0x49
#define MENTALKRAFT 0x4a
#define PANZERHAUT 0x4b
#define KAKOPHONY 0x4c
#define KLIMASCHUTZ 0x4d
#define FROSTSCHICHT 0x4e
#define ZENITHAUT 0x4f
#define DONNERAURA 0x50
#define MULTISCHUPPE 0x51
#define KAEMPFERHERZ 0x52
#define TECHNIKER 0x53
#define SOLARKRAFT 0x54
#define REGENMUT 0x55
#define KAELTEWAHN 0x56
#define SANDHERZ 0x57
#define WANDLUNGSK 0x58
#define TOLLWUT 0x59
#define ZEITSPIEL 0x5a
#define STROLCH 0x5b
#define ORKANSCHW 0x5c
#define DUNKLE_MAGIE 0x5d
#define LERNFAEHIG 0x5e
#define HAGELALARM 0x5f
#define HOCHMUT 0x60
#define AP_SPARER 0x61
#define TAKTIKWECHS 0x62
#define LUZID 0x63
#define UNGEBROCHEN 0x64
#define LEBENSRAEUBER 0x65
#define FILTER 0x66
#define FELSENKERN 0x67
#define BARRIERE 0x68
#define ANPASSUNG 0x69
#define AUFWERTUNG 0x6a
#define ALLROUNDER 0x6b
#define HITZEWAHN 0x6c
#define GIFTWAHN 0x6d
#define R_KAISERAURA 0x6E
#define B_KAISERAURA 0x6F
#define G_KAISERAURA 0x70
#define PHOTOGENESE 0x71
#define EXTRADORN 0x72
#define CURATOR 0x73


void stance_change_change_species(u8 target, u16 species);

extern u8 ability_names[ABILITY_CNT][0xD];
u8 *ability_descriptions[ABILITY_CNT];


extern u8 str_ability_description_r_kaiseraura[];
extern u8 str_ability_description_b_kaiseraura[];
extern u8 str_ability_description_g_kaiseraura[];

extern u8 bsc_flinch_aura[];
extern u8 bsc_flinch_raura[];
extern u8 bsc_flinch_baura[];
extern u8 bsc_flinch_gaura[];

#endif
