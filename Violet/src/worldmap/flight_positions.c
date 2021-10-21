#include "constants/map_namespaces.h"
#include "map/healing_place.h"
#include "types.h"
#include "worldmap.h"

flight_position_association_t flight_position_associations[MAP_NAMESPACE_NONE - MAP_AMONIA] = {
    [MAP_AMONIA - MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = HEALINGPLACE_AMONIA},
    [MAP_MERIANA_CITY -
        MAP_AMONIA] = {.bank = 3, .map_idx = 1, .healing_place_idx = HEALINGPLACE_MERIANA_CITY},
    [MAP_AKTANIA -
        MAP_AMONIA] = {.bank = 3, .map_idx = 2, .healing_place_idx = HEALINGPLACE_AKTANIA},
    [MAP_SILVANIA -
        MAP_AMONIA] = {.bank = 3, .map_idx = 3, .healing_place_idx = HEALINGPLACE_SILVANIA_CITY},
    [MAP_KASKADA -
        MAP_AMONIA] = {.bank = 3, .map_idx = 4, .healing_place_idx = HEALINGPLACE_KASKADA},
    [MAP_ORINA_CITY -
        MAP_AMONIA] = {.bank = 3, .map_idx = 5, .healing_place_idx = HEALINGPLACE_ORINA_CITY},
    [MAP_INFERIOR -
        MAP_AMONIA] = {.bank = 3, .map_idx = 6, .healing_place_idx = HEALINGPLACE_INFERIOR},
    [MAP_CEOMETRIA -
        MAP_AMONIA] = {.bank = 3, .map_idx = 7, .healing_place_idx = HEALINGPLACE_CEOMETRIA},
    [MAP_LAUBDORF -
        MAP_AMONIA] = {.bank = 3, .map_idx = 8, .healing_place_idx = HEALINGPLACE_LAUBDORF},
    [MAP_INDIGO_PLATEAU -
        MAP_AMONIA] = {.bank = 3, .map_idx = 9, .healing_place_idx = 0},
    [MAP_HAWEILAND -
        MAP_AMONIA] = {.bank = 3, .map_idx = 10, .healing_place_idx = HEALINGPLACE_HAWEILAND},
    [MAP_DESERT_VILLAGE -
        MAP_AMONIA] = {.bank = 3, .map_idx = 26, .healing_place_idx = HEALINGPLACE_DESERT},
    [MAP_NAMESPACE_100 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 28, .healing_place_idx = 0},
    [MAP_ROUTE_1 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 19, .healing_place_idx = 0},
    [MAP_ROUTE_3 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 20, .healing_place_idx = 0},
    [MAP_FELSIGE_OEDNIS -
        MAP_AMONIA] = {.bank = 3, .map_idx = 21, .healing_place_idx = 0},
    [MAP_ROUTE_4 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 22, .healing_place_idx = 0},
    [MAP_ROUTE_5 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 23, .healing_place_idx = 0},
    [MAP_ROUTE_6 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 24, .healing_place_idx = 0},
    [MAP_ROUTE_7 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 25, .healing_place_idx = 0},
    [MAP_ROUTE_8 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 26, .healing_place_idx = 0},
    [MAP_ROUTE_9 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 27, .healing_place_idx = 0},
    [MAP_ROUTE_10 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 28, .healing_place_idx = 0},
    [MAP_ROUTE_11 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 29, .healing_place_idx = 0},
    [MAP_ROUTE_12 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 30, .healing_place_idx = 0},
    [MAP_ROUTE_13 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 31, .healing_place_idx = 0},
    [MAP_ROUTE_14 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 32, .healing_place_idx = 0},
    [MAP_ROUTE_15 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 33, .healing_place_idx = 0},
    [MAP_ROUTE_16 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 34, .healing_place_idx = 0},
    [MAP_ROUTE_17 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 35, .healing_place_idx = 0},
    [MAP_ROUTE_18 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 36, .healing_place_idx = 0},
    [MAP_ROUTE_19 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 37, .healing_place_idx = 0},
    [MAP_ROUTE_20 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 38, .healing_place_idx = 0},
    [MAP_ROUTE_21 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 39, .healing_place_idx = 0},
    [MAP_ROUTE_2 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 41, .healing_place_idx = 0},
    [MAP_ROUTE_23 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 42, .healing_place_idx = 0},
    [MAP_LAUBPFAD -
        MAP_AMONIA] = {.bank = 3, .map_idx = 43, .healing_place_idx = 0},
    [MAP_KAKTUSLABYRINTH -
        MAP_AMONIA] = {.bank = 3, .map_idx = 44, .healing_place_idx = 0},
    [MAP_SILVANIA_WALD -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_WALDFRIEDHOF -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_ARDEAL -
        MAP_AMONIA] = {.bank = 31, .map_idx = 0, .healing_place_idx = 0},
    [MAP_ASCHHAIN -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_ANTIKE_RUINE -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_TANNS_LABOR -
        MAP_AMONIA] = {.bank = 3, .map_idx = 25, .healing_place_idx = HEALINGPLACE_TANNS_LAB},
    [MAP_SIEGESSTRASSE -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_ROCKET_HQ -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_NAMESPACE_134 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_KUESTENBERG -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_SAFARI_ZONE -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_POKEMON_LIGA -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_VULCANO -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_SEESCHAUMINSELN -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_POKEMON_TURM -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_AZURIA_HOEHLE -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_KRAFTWERK -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_EILAND_EINS -
        MAP_AMONIA] = {.bank = 3, .map_idx = 12, .healing_place_idx = 14},
    [MAP_EILAND_ZWEI -
        MAP_AMONIA] = {.bank = 3, .map_idx = 13, .healing_place_idx = 15},
    [MAP_EILAND_DREI -
        MAP_AMONIA] = {.bank = 3, .map_idx = 14, .healing_place_idx = 16},
    [MAP_EILAND_VIER -
        MAP_AMONIA] = {.bank = 3, .map_idx = 15, .healing_place_idx = 17},
    [MAP_EILAND_FUENF -
        MAP_AMONIA] = {.bank = 3, .map_idx = 16, .healing_place_idx = 18},
    [MAP_EILAND_SIEBEN -
        MAP_AMONIA] = {.bank = 3, .map_idx = 17, .healing_place_idx = 19},
    [MAP_EILAND_SECHS -
        MAP_AMONIA] = {.bank = 3, .map_idx = 18, .healing_place_idx = 20},
    [MAP_GLUEHWEG -
        MAP_AMONIA] = {.bank = 3, .map_idx = 45, .healing_place_idx = 0},
    [MAP_SCHATZGESTADE -
        MAP_AMONIA] = {.bank = 3, .map_idx = 46, .healing_place_idx = 0},
    [MAP_KAP_KANTE -
        MAP_AMONIA] = {.bank = 3, .map_idx = 47, .healing_place_idx = 0},
    [MAP_BUNDBRUECKE -
        MAP_AMONIA] = {.bank = 3, .map_idx = 48, .healing_place_idx = 0},
    [MAP_TRI_EILAND_HAFEN -
        MAP_AMONIA] = {.bank = 3, .map_idx = 49, .healing_place_idx = 0},
    [MAP_SEVII_EILAND_6 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 50, .healing_place_idx = 0},
    [MAP_SEVII_EILAND_7 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 51, .healing_place_idx = 0},
    [MAP_SEVII_EILAND_8 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 52, .healing_place_idx = 0},
    [MAP_SEVII_EILAND_9 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 53, .healing_place_idx = 0},
    [MAP_DUNKLER_TURM -
        MAP_AMONIA] = {.bank = 3, .map_idx = 54, .healing_place_idx = 0},
    [MAP_SCHATTENFLUT -
        MAP_AMONIA] = {.bank = 3, .map_idx = 55, .healing_place_idx = 0},
    [MAP_EILAND_5_WEIDE -
        MAP_AMONIA] = {.bank = 3, .map_idx = 56, .healing_place_idx = 0},
    [MAP_TRAINERSCHULE -
        MAP_AMONIA] = {.bank = 3, .map_idx = 57, .healing_place_idx = 0},
    [MAP_FERN_EILAND -
        MAP_AMONIA] = {.bank = 3, .map_idx = 58, .healing_place_idx = 0},
    [MAP_GRUENER_PFAD -
        MAP_AMONIA] = {.bank = 3, .map_idx = 59, .healing_place_idx = 0},
    [MAP_WASSERWEG -
        MAP_AMONIA] = {.bank = 3, .map_idx = 60, .healing_place_idx = 0},
    [MAP_RUINENTAL -
        MAP_AMONIA] = {.bank = 3, .map_idx = 61, .healing_place_idx = 0},
    [MAP_NAMESPACE_167 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 62, .healing_place_idx = 0},
    [MAP_SCHLUCHTEINGANG -
        MAP_AMONIA] = {.bank = 3, .map_idx = 63, .healing_place_idx = 0},
    [MAP_7_SCHATZSCHLUCHT -
        MAP_AMONIA] = {.bank = 3, .map_idx = 64, .healing_place_idx = 0},
    [MAP_TANIBO_RUINEN -
        MAP_AMONIA] = {.bank = 3, .map_idx = 65, .healing_place_idx = 0},
    [MAP_SEVII_EILAND_22 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_SEVII_EILAND_23 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_SEVII_EILAND_24 -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_NABELFELS -
        MAP_AMONIA] = {.bank = 2, .map_idx = 0, .healing_place_idx = 0},
    [MAP_GLUTBERG -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_BEERENFORST -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_EISKASKADENHOEHLE -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_ROCKET_LAGER -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_TRAINERTURM -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_PUNKTLOCH -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_VERLORENE_HOEHLE -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_MUSTERBUSCHWALD -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_WANDELHOEHLE -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_TANIBO_KAMMER -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_TRI_EILAND_PFAD -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_TANIBO_SCHLUESSEL -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_ENTSTEHUNGSINSEL -
        MAP_AMONIA] = {.bank = 2, .map_idx = 56, .healing_place_idx = 0},
    [MAP_WUESTENKAMMER -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_PEZWULP_KAMMER -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_DREICKE_KAMMER -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_VIERZISSE_KAMMER -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_FUENIBISKU_KAMMER -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_LILECHS_KAMMER -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_ARC_SCRIM -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
    [MAP_GLUTTHERME -
        MAP_AMONIA] = {.bank = 3, .map_idx = 0, .healing_place_idx = 0},
};

int map_get_flightposition(u8 bank, u8 map) {
    for (int i = 0; flight_positions[i].bank != 0xFF || flight_positions[i].map != 0xFF; i++) {
        if (flight_positions[i].bank == bank && flight_positions[i].map == map)
            return i + 1;
    }
    return 0;
}

stru_flight_position *flightposition_by_id(int id) {
    if (!id)
        return 0;
    return &flight_positions[id - 1];
}
