#ifndef H_CONST_ATTACK_RESULTS
#define H_CONST_ATTACK_RESULTS
enum attack_results {
ATTACK_MISSED = 1,
ATTACK_SUPER_EFFECTIVE = 2,
ATTACK_NOT_EFFECTIVE = 4,
ATTACK_NO_EFFECT = 8,
ATTACK_OHKO = 16,
ATTACK_FAILED = 32,
ATTACK_ENDURED = 64,
ATTACK_ENDURED_BY_FOCUS_SASH = 128,
};
#endif