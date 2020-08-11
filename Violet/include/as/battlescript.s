/****************************************************************************
 * Copyright (C) 2015-2016 by KDS                                           *
 *                                                                          *
 * This file is part of Sovereign of the Skies.                             *
 *                                                                          *
 *   Sovereign of the Skies is free software: you can redistribute it       *
 *   and/or modify it                                                       *
 *   under the terms of the GNU Lesser General Public License as published  *
 *   by the Free Software Foundation, either version 3 of the License, or   *
 *   (at your option) any later version provided you include a copy of the  *
 *   licence and this header.                                               *
 *                                                                          *
 *   Sovereign of the Skies is distributed in the hope that it will be      *
 *   useful, but WITHOUT ANY WARRANTY; without even the implied warranty of *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *   GNU Lesser General Public License for more details.                    *
 *                                                                          *
 *   You should have received a copy of the GNU Lesser General Public       *
 *   License along with Sovereign of the Skies.                             *
 *   If not, see <http://www.gnu.org/licenses/>.                            *
 ****************************************************************************/

/**
 * @file battle_script.h
 * @author KDS
 * @date 15 dec 2016
 * @brief Preprocessor Macros for writing PKMN Battle Scripts
 */


#include <attack_names.h>

@@ Banks
.equ BANK_TARGET, 0
.equ BANK_USER, 1
.equ BANK_EFFECT_TARGET, 2
.equ BANK_FAINTED, 3
.equ BANK_SCRIPTING, 0xA
.equ BANK_PLAYER_1, 0xB
.equ BANK_OPPONENT_1, 0xC
.equ BANK_PLAYER_2, 0xD
.equ BANK_OPPONENT_2, 0xE


@@ Delay

#define DELAY_HALFSECOND	0x20
#define DELAY_1SECOND		0x40

#define STRING_LOADER		0x0203C020

@@ Compare operands
.equ EQUAL, 0x0
.equ NOT_EQUAL, 0x1
.equ GREATER_THAN, 0x2
.equ LESS_THAN, 0x3
.equ COMMON_BITS, 0x4
.equ NO_COMMON_BITS, 0x5

@@@@@@@@@@@@@@@@@ Macro

@@ Super commands
.macro calculatedamage
.byte 7, 6, 5, 4
.endm


@@ Index commands
.macro attackcanceler
.byte 0
.endm

.macro accuracycheck accuracycheck_address accuracycheck_parameter1
.byte 1
.word \accuracycheck_address
.hword \accuracycheck_parameter1
.endm

.macro attackstring
.byte 2
.endm

.macro ppreduce
.byte 3
.endm

.macro critcalc
.byte 4
.endm

.macro damagecalc
.byte 5
.endm

.macro typecalc
.byte 6
.endm

.macro adjustnormaldamage
.byte 7
.endm

.macro adjustnormaldamage2
.byte 8
.endm

.macro attackanimation
.byte 9
.endm

.macro waitanimation
.byte 0xA
.endm

.macro graphicalhpupdate graphicalhpupdate_bank
.byte 0xB
.byte \graphicalhpupdate_bank
.endm

.macro datahpupdate datahpupdate_bank
.byte 0xC
.byte \datahpupdate_bank
.endm

.macro critmessage
.byte 0xD
.endm

.macro missmessage
.byte 0xE
.endm

.macro resultmessage
.byte 0xF
.endm

.macro printstring printstring_string
.byte 0x10
.hword \printstring_string
.endm

.macro printstring2 printstring2_string
.byte 0x11
.hword \printstring2_string
.endm

.macro waitmessage waitmessage_delay
.byte 0x12
.hword \waitmessage_delay
.endm

.macro printfromtable printfromtable_table
.byte 0x13
.word \printfromtable_table
.endm

.macro printfromtable2 printfromtable2_table
.byte 0x14
.word \printfromtable2_table
.endm

.equ MOVE_EFFECT_AFFECTS_USER, 0x40

.macro seteffectwithchancetarget
.byte 0x15
.endm

// old: seteffecttarget
.macro seteffectprimary
.byte 0x16
.endm

// old: seteffectuser
.macro seteffectsecondary
.byte 0x17
.endm

.macro clearstatus clearstatus_bank
.byte 0x18
.byte \clearstatus_bank
.endm

.macro faintpokemon faintpokemon_parameter1 faintpokemon_parameter2 faintpokemon_parameter3
.byte 0x19
.byte \faintpokemon_parameter1
.byte \faintpokemon_parameter2
.word \faintpokemon_parameter3
.endm

.macro cmd1a cmd1a_parameter1
.byte 0x1A
.byte cmd1a_parameter1
.endm

.macro cmd1b cmd1b_bank
.byte 0x1B
.byte \cmd1b_bank
.endm

.macro jumpifstatus jumpifstatus_bank jumpifstatus_status jumpifstatus_address
.byte 0x1C
.byte \jumpifstatus_bank
.word \jumpifstatus_status
.word \jumpifstatus_address
.endm

.macro jumpifsecondarystatus jumpifsecondarystatus_bank jumpifsecondarystatus_status jumpifsecondarystatus_address
.byte 0x1D
.byte \jumpifsecondarystatus_bank
.word \jumpifsecondarystatus_status
.word \jumpifsecondarystatus_address
.endm

.macro jumpifability jumpifability_bank jumpifability_ability jumpifability_address
.byte 0x1E
.byte \jumpifability_bank
.byte \jumpifability_ability
.word \jumpifability_address
.endm

.macro jumpifhalverset jumpifhalverset_bank jumpifhalverset_status jumpifhalverset_address
.byte 0x1F
.byte \jumpifhalverset_bank
.hword \jumpifhalverset_status
.word \jumpifhalverset_address
.endm

.macro jumpifstat jumpifstat_bank jumpifstat_flag jumpifstat_quantity jumpifstat_statid jumpifstat_address
.byte 0x20
.byte \jumpifstat_bank
.byte \jumpifstat_flag
.byte \jumpifstat_quantity
.byte \jumpifstat_statid
.word \jumpifstat_address
.endm

.macro jumpifstatus3 jumpifspecialstatusflag_bank status3 jumpifspecialstatusflag_statut jumpifspecialstatusflag_address
.byte 0x21
.byte \jumpifspecialstatusflag_bank
.word \status3
.byte \jumpifspecialstatusflag_statut
.word \jumpifspecialstatusflag_address
.endm

.macro jumpiftype jumpiftype_bank jumpiftype_type jumpiftype_address
.byte 0x22
.byte \jumpiftype_bank
.byte \jumpiftype_type
.word \jumpiftype_address
.endm

.macro cmd23 cmd23_side_or_bank
.byte 0x23
.byte \cmd23_side_or_bank
.endm

.macro atk24 address:req
.byte 0x24
.word \address
.endm

.macro movevaluescleanup
.byte 0x25
.endm

.macro cmd26 cmd26_param1
.byte 0x26
.byte \cmd26_param1
.endm

.macro cmd27 cmd27_address
.byte 0x27
.word \cmd27_address
.endm

.macro goto goto_address
.byte 0x28
.word \goto_address
.endm

.macro jumpifbyte jumpifbyte_ifflag jumpifbyte_checkaddr jumpifbyte_compare jumpifbyte_address
.byte 0x29
.byte \jumpifbyte_ifflag
.word \jumpifbyte_checkaddr
.byte \jumpifbyte_compare
.word \jumpifbyte_address
.endm

.macro jumpifhalfword jumpifhalfword_ifflag jumpifhalfword_checkaddr jumpifhalfword_compare jumpifhalfword_address
.byte 0x2A
.byte \jumpifhalfword_ifflag
.word \jumpifhalfword_checkaddr
.hword \jumpifhalfword_compare
.word \jumpifhalfword_address
.endm

.macro jumpifword jumpifword_ifflag jumpifword_checkaddr jumpifword_compare jumpifword_address
.byte 0x2B
.byte \jumpifword_ifflag
.word \jumpifword_checkaddr
.word \jumpifword_compare
.word \jumpifword_address
.endm

.macro jumpifarrayequal jumpifarrayequal_mem1 jumpifarrayequal_mem2 jumpifarrayequal_size jumpifarrayequal_address
.byte 0x2C
.word \jumpifarrayequal_mem1
.word \jumpifarrayequal_mem2
.byte \jumpifarrayequal_size
.word \jumpifarrayequal_address
.endm

.macro jumpifarraynotequal jumpifarraynotequal_mem1 jumpifarraynotequal_mem2 jumpifarraynotequal_size jumpifarraynotequal_address
.byte 0x2D
.word \jumpifarraynotequal_mem1
.word \jumpifarraynotequal_mem2
.byte \jumpifarraynotequal_size
.word \jumpifarraynotequal_address
.endm

.macro setbyte setbyte_pointer setbyte_value
.byte 0x2E
.word \setbyte_pointer
.byte \setbyte_value
.endm

.macro addbyte addbyte_pointer addbyte_value
.byte 0x2F
.word \addbyte_pointer
.byte \addbyte_value
.endm

.macro subtractbyte subtractbyte_pointer subtractbyte_value
.byte 0x30
.word \subtractbyte_pointer
.byte \subtractbyte_value
.endm

.macro copyarray copyarray_destination copyarray_source copyarray_size
.byte 0x31
.word \copyarray_destination
.word \copyarray_source
.byte \copyarray_size
.endm

.macro cmd32 cmd32_param1 cmd32_param2 cmd32_param3 cmd32_byte
.byte 0x32
.word \cmd32_param1
.word \cmd32_param2
.word \cmd32_param3
.byte \cmd32_byte
.endm

.macro orbyte orbyte_pointer orbyte_value
.byte 0x33
.word \orbyte_pointer
.byte \orbyte_value
.endm

.macro orhalfword orhalfword_pointer orhalfword_value
.byte 0x34
.word \orhalfword_pointer
.hword \orhalfword_value
.endm

.macro orword orword_pointer orword_value
.byte 0x35
.word \orword_pointer
.word \orword_value
.endm

.macro bicbyte bicbyte_pointer bicbyte_value
.byte 0x36
.word \bicbyte_pointer
.byte \bicbyte_value
.endm

.macro bichalfword bichalfword_pointer bichalfword_value
.byte 0x37
.word \bichalfword_pointer
.hword \bichalfword_value
.endm

.macro bicword bicword_pointer bicword_value
.byte 0x38
.word \bicword_pointer
.word \bicword_value
.endm

.macro pause pause_duration
.byte 0x39
.hword \pause_duration
.endm

.macro waitstate
.byte 0x3A
.endm

.macro somethinghealcmd3b somethinghealcmd3b_bank
.byte 0x3B
.byte \somethinghealcmd3b_bank
.endm

.macro return
.byte 0x3C
.endm

.macro end
.byte 0x3D
.endm

.macro end2
.byte 0x3E
.endm

.macro end3
.byte 0x3F
.endm

.macro cmd40 cmd40_address
.byte 0x40
.word \cmd40_address
.endm

.macro call call_address
.byte 0x41
.word \call_address
.endm

.macro jumpiftype2 jumpiftype2_bank jumpiftype2_type jumpiftype2_address
.byte 0x42
.byte \jumpiftype2_bank
.byte \jumpiftype2_type
.word \jumpiftype2_address
.endm

.macro jumpifabilitypresent jumpifabilitypresent_ability jumpifabilitypresent_address
.byte 0x43
.byte \jumpifabilitypresent_ability
.word \jumpifabilitypresent_address
.endm

.macro cmd44
.byte 0x44
.endm

.equ ANIMATION_STAT_CHANGE, 1
.equ ANIMATION_ARG_0, (battle_scripting + 0x10)
.equ ANIMATION_ARG_1, (battle_scripting + 0x11)

.macro playanimation playanimation_bank playanimation_animation playanimation_word
.byte 0x45
.byte \playanimation_bank
.byte \playanimation_animation
.word \playanimation_word
.endm

.macro cmd46 cmd46_bank cmd46_address cmd46_address2
.byte 0x46
.byte \cmd46_bank
.word \cmd46_address
.word \cmd46_address2
.endm

.macro setgraphicalstatchangevalues
.byte 0x47
.endm

.macro playstatchangeanimation playstatchangeanimation_bank playstatchangeanimation_colour playstatchangeanimation_byte
.byte 0x48
.byte \playstatchangeanimation_bank
.byte \playstatchangeanimation_colour
.byte \playstatchangeanimation_byte
.endm

// Contrived macro: 
// Executes certain effects after an attack
// Either all are excecuted, or just one is or all up to some case (inclusive)
.equ ATTACK_END_MODE_ALL, 0
.equ ATTACK_END_MODE_ONE_CASE, 1
.equ ATTACK_END_MODE_UP_TO, 2

.macro attack_end mode:req last_case=0 first_case=255
.if \first_case != 255
    setbyte battle_scripting + 20, \first_case
.endif
.byte 0x49
.byte \mode
.byte \last_case
.endm

.macro damagecalc2
.byte 0x4A
.endm

.macro cmd4b
.byte 0x4B
.endm

.macro getswitchedmondata battler:req
.byte 0x4C
.byte \battler
.endm

.macro switchindataupdate battler:req
.byte 0x4D
.byte \battler
.endm

.macro switchinanim battler:req dontclearsubstituebit:req
.byte 0x4E
.byte \battler
.byte \dontclearsubstituebit
.endm

.macro jumpifcannotswitch jumpifcannotswitch_bank jumpifcannotswitch_address
.byte 0x4F
.byte \jumpifcannotswitch_bank
.word \jumpifcannotswitch_address
.endm

.macro openpartyscreen openpartyscreen_bank openpartyscreen_address
.byte 0x50
.byte \openpartyscreen_bank
.word \openpartyscreen_address
.endm

.macro cmd51 cmd51_bank cmd51_param2
.byte 0x51
.byte \cmd51_bank
.byte \cmd51_param2
.endm

.macro switchineffects battler:req
.byte 0x52
.byte \battler
.endm

.macro trainerslidein bank:req
.byte 0x53
.byte \bank
.endm

.macro cmd54 cmd54_hword
.byte 0x54
.hword \cmd54_hword
.endm

.macro cmd55 cmd55_word
.byte 0x55
.word \cmd55_word
.endm

.macro cmd56 cmd56_bank_or_side
.byte 0x56
.byte \cmd56_bank_or_side
.endm

.macro cmd57
.byte 0x57
.endm

.macro returntoball battler:req
.byte 0x58
.byte \battler
.endm

.macro checkiflearnmoveinbattle checkiflearnmoveinbattle_param1 checkiflearnmoveinbattle_param2 checkiflearnmoveinbattle_bank_maybe
.byte 0x59
.word \checkiflearnmoveinbattle_param1
.word \checkiflearnmoveinbattle_param2
.byte \checkiflearnmoveinbattle_bank_maybe
.endm

.macro cmd5a cmd5a_address
.byte 0x5A
.word \cmd5a_address
.endm

.macro cmd5b cmd5b_address
.byte 0x5B
.word \cmd5b_address
.endm

.macro hitanimation cmd5c_bank
.byte 0x5C
.byte \cmd5c_bank
.endm

.macro pricemoney failure_address:req
.byte 0x5D
.word \failure_address
.endm

.macro cmd5e cmd5e_bank
.byte 0x5E
.byte \cmd5e_bank
.endm

.macro cmd5f
.byte 0x5F
.endm

.macro cmd60 cmd60_byte
.byte 0x60
.byte \cmd60_byte
.endm

.macro cmd61 cmd61_bank_or_side
.byte 0x61
.byte \cmd61_bank_or_side
.endm

.macro cmd62 cmd62_bank_or_side
.byte 0x62
.byte \cmd62_bank_or_side
.endm

.macro jumptoattack jumptoattack_bank
.byte 0x63
.byte \jumptoattack_bank
.endm

.macro statusanimation statusanimation_bank
.byte 0x64
.byte \statusanimation_bank
.endm

.macro cmd65 cmd65_bank_or_side cmd65_address
.byte 0x65
.byte \cmd65_bank_or_side
.word \cmd65_address
.endm

.macro cmd66 cmd66_bank_or_side cmd66_bank_or_side2 cmd66_address
.byte 0x66
.byte \cmd66_bank_or_side
.byte \cmd66_bank_or_side2
.word \cmd66_address
.endm

.macro cmd67
.byte 0x67
.endm

.macro cmd68
.byte 0x68
.endm

.macro cmd69
.byte 0x69
.endm

.macro removeitem removeitem_bank
.byte 0x6A
.byte \removeitem_bank
.endm

.macro cmd6b
.byte 0x6B
.endm

.macro cmd6c
.byte 0x6C
.endm

.macro cmd6d
.byte 0x6D
.endm

.macro cmd6e
.byte 0x6E
.endm

.macro cmd6f cmd6f_bank
.byte 0x6F
.byte \cmd6f_bank
.endm

.macro cmd70 cmd70_bank
.byte 0x70
.byte \cmd70_bank
.endm

.macro cmd71
.byte 0x71
.endm

.macro cmd72 cmd72_address
.byte 0x72
.word \cmd72_address
.endm

.macro cmd73 cmd73_bank
.byte 0x73
.byte \cmd73_bank
.endm

.macro cmd74 cmd74_bank
.byte 0x74
.byte \cmd74_bank
.endm

.macro cmd75
.byte 0x75
.endm

.macro various battler:req case:req
.byte 0x76
.byte \battler
.byte \case
.endm

.macro getifcantrunfrombattle battler:req
various \battler, 2
.endm

.macro setprotect
.byte 0x77
.endm

.macro faintifabilitynotdamp
.byte 0x78
.endm

.macro setuserhptozero
.byte 0x79
.endm

.macro jumpwhiletargetvalid jumpwhiletargetvalid_address
.byte 0x7A
.word \jumpwhiletargetvalid_address
.endm

.macro setdamageasrestorehalfmaxhp setdamageasrestorehalfmaxhp_address setdamageasrestorehalfmaxhp_byte
.byte 0x7B
.word \setdamageasrestorehalfmaxhp_address
.byte \setdamageasrestorehalfmaxhp_byte
.endm

.macro jumptolastusedattack
.byte 0x7C
.endm

.macro setrain
.byte 0x7D
.endm

.macro setreflect
.byte 0x7E
.endm

.macro setleechseed
.byte 0x7F
.endm

.macro manipulatedamage
.byte 0x80
.endm

.macro setrest setrest_address
.byte 0x81
.word \setrest_address
.endm

.macro jumpifnotfirstturn jumpifnotfirstturn_address
.byte 0x82
.word \jumpifnotfirstturn_address
.endm

.macro nop3
.byte 0x83
.endm

.macro jumpifcannotsleep jumpifcannotsleep_address
.byte 0x84
.word \jumpifcannotsleep_address
.endm

.macro stockpile
.byte 0x85
.endm

.macro stockpiletobasedamage stockpiletobasedamage_address
.byte 0x86
.word \stockpiletobasedamage_address
.endm

.macro stockpiletohprecovery stockpiletohprecovery_address
.byte 0x87
.word \stockpiletohprecovery_address
.endm

.macro negativedamage
.byte 0x88
.endm

.equ STAT_BUF_IGNORE_PROTECT, 0x20
.equ STAT_BUF_CHANGE_FAILURE_CONTINUATION, 1


.macro statbuffchange target:req failure_continuation:req
.byte 0x89
.byte \target
.word \failure_continuation
.endm

.macro normalisebuffs
.byte 0x8A
.endm

.macro setbide
.byte 0x8B
.endm

.macro confuseifrepeatingattackends
.byte 0x8C
.endm

.macro setloopcounter setloopcounter_number_of_loop
.byte 0x8D
.byte \setloopcounter_number_of_loop
.endm

.macro cmd8e
.byte 0x8E
.endm

.macro forcerandomswitch forcerandomswitch_address
.byte 0x8F
.word \forcerandomswitch_address
.endm

.macro changetypestoenemyattacktype changetypestoenemyattacktype_address
.byte 0x90
.word \changetypestoenemyattacktype_address
.endm

.macro givemoney
.byte 0x91
.endm

.macro setlightscreen
.byte 0x92
.endm

.macro koplussomethings koplussomethings_address
.byte 0x93
.word \koplussomethings_address
.endm

.macro gethalfcurrentenemyhp
.byte 0x94
.endm

.macro setsandstorm
.byte 0x95
.endm

.macro weatherdamage
.byte 0x96
.endm

.macro tryinfatuatetarget tryinfatuatetarget_address
.byte 0x97
.word \tryinfatuatetarget_address
.endm

.macro cmd98 cmd98_byte
.byte 0x98
.byte \cmd98_byte
.endm

.macro setmisteffect
.byte 0x99
.endm

.macro setincreasedcriticalchance
.byte 0x9A
.endm

.macro transformdataexecution
.byte 0x9B
.endm

.macro setsubstituteeffect
.byte 0x9C
.endm

.macro copyattack copyattack_address
.byte 0x9D
.word \copyattack_address
.endm

.macro metronomeeffect
.byte 0x9E
.endm

.macro nightshadedamageeffect
.byte 0x9F
.endm

.macro psywavedamageeffect
.byte 0xA0
.endm

.macro counterdamagecalculator counterdamagecalculator_address
.byte 0xA1
.word \counterdamagecalculator_address
.endm

.macro mirrorcoatdamagecalculator mirrorcoatdamagecalculator_address
.byte 0xA2
.word \mirrorcoatdamagecalculator_address
.endm

.macro disablelastusedattack disablelastusedattack_address
.byte 0xA3
.word \disablelastusedattack_address
.endm

.macro setencore setencore_address
.byte 0xA4
.word \setencore_address
.endm

.macro painsplitdamagecalculator painsplitdamagecalculator_address
.byte 0xA5
.word \painsplitdamagecalculator_address
.endm

.macro settypetorandomresistance settypetorandomresistance_address
.byte 0xA6
.word \settypetorandomresistance_address
.endm

.macro setalwayshitflag
.byte 0xA7
.endm

.macro copymovepermanently copymovepermanently_address
.byte 0xA8
.word \copymovepermanently_address
.endm

.macro selectrandommovefromusermoves selectrandommovefromusermoves_address
.byte 0xA9
.word \selectrandommovefromusermoves_address
.endm

.macro destinybondeffect
.byte 0xAA
.endm

.macro cmdab
.byte 0xAB
.endm

.macro remaininghptopower
.byte 0xAC
.endm

.macro reducepprandom reducepprandom_address
.byte 0xAD
.word \reducepprandom_address
.endm

.macro clearstatusifnotsoundproofed
.byte 0xAE
.endm

.macro cursetarget cursetarget_address
.byte 0xAF
.word \cursetarget_address
.endm

.macro setspikes setspikes_address
.byte 0xB0
.word \setspikes_address
.endm

.macro setforesight
.byte 0xB1
.endm

.macro setperishsong setperishsong_address
.byte 0xB2
.word \setperishsong_address
.endm

.macro rolloutdamagecalculation
.byte 0xB3
.endm

.macro jumpifconfusedandattackmaxed jumpifconfusedandattackmaxed_bank jumpifconfusedandattackmaxed_address
.byte 0xB4
.byte \jumpifconfusedandattackmaxed_bank
.word \jumpifconfusedandattackmaxed_address
.endm

.macro furycutterdamagecalculation
.byte 0xB5
.endm

.macro happinesstodamagecalculation
.byte 0xB6
.endm

.macro presentdamagecalculation
.byte 0xB7
.endm

.macro setsafeguard
.byte 0xB8
.endm

.macro magnitudedamagecalculation
.byte 0xB9
.endm

.macro cmdba cmdba_address
.byte 0xBA
.word \cmdba_address
.endm

.macro setsunny
.byte 0xBB
.endm

.macro maxattackhalvehp maxattackhalvehp_address
.byte 0xBC
.word \maxattackhalvehp_address
.endm

.macro copyfoestats copyfoestats_address
.byte 0xBD
.word \copyfoestats_address
.endm

.macro breakfree
.byte 0xBE
.endm

.macro setcurled
.byte 0xBF
.endm

.macro recoverbasedonsunlight
.byte 0xC0
.endm

.macro hiddenpowerdamagecalculation
.byte 0xC1
.endm

.macro selectnexttarget
.byte 0xC2
.endm

.macro setfutureattack setfutureattack_address
.byte 0xC3
.word \setfutureattack_address
.endm

.macro beatupcalculation beatupcalculation_address1 beatupcalculation_address2
.byte 0xC4
.word \beatupcalculation_address1
.word \beatupcalculation_address2
.endm

.macro hidepreattack
.byte 0xC5
.endm

.macro unhidepostattack
.byte 0xC6
.endm

.macro setminimize
.byte 0xC7
.endm

.macro sethail
.byte 0xC8
.endm

.macro jumpifattackandspecialattackcannotfall jumpifattackandspecialattackcannotfall_address
.byte 0xC9
.word \jumpifattackandspecialattackcannotfall_address
.endm

.macro setforcedtarget
.byte 0xCA
.endm

.macro setcharge
.byte 0xCB
.endm

.macro callterrainattack
.byte 0xCC
.endm

.macro cureifburnedparalysedorpoisoned cureifburnedparalysedorpoisoned_address
.byte 0xCD
.word \cureifburnedparalysedorpoisoned_address
.endm

.macro settorment settorment_address
.byte 0xCE
.word \settorment_address
.endm

.macro jumpifnodamage jumpifnodamage_address
.byte 0xCF
.word \jumpifnodamage_address
.endm

.macro settaunt settaunt_address
.byte 0xD0
.word \settaunt_address
.endm

.macro sethelpinghand sethelpinghand_address
.byte 0xD1
.word \sethelpinghand_address
.endm

.macro itemswap itemswap_address
.byte 0xD2
.word \itemswap_address
.endm

.macro copyability copyability_address
.byte 0xD3
.word \copyability_address
.endm

.macro cmdd4 cmdd4_byte cmdd4_address
.byte 0xD4
.byte \cmdd4_byte
.word \cmdd4_address
.endm

.macro setroots setroots_address
.byte 0xD5
.word \setroots_address
.endm

.macro doubledamagedealtifdamaged
.byte 0xD6
.endm

.macro setyawn setyawn_address
.byte 0xD7
.word \setyawn_address
.endm

.macro setdamagetohealthdifference setdamagetohealthdifference_address
.byte 0xD8
.word \setdamagetohealthdifference_address
.endm

.macro scaledamagebyhealthratio
.byte 0xD9
.endm

.macro abilityswap abilityswap_address
.byte 0xDA
.word \abilityswap_address
.endm

.macro imprisoneffect imprisoneffect_address
.byte 0xDB
.word \imprisoneffect_address
.endm

.macro setgrudge setgrudge_address
.byte 0xDC
.word \setgrudge_address
.endm

.macro weightdamagecalculation
.byte 0xDD
.endm

.macro assistattackselect assistattackselect_address
.byte 0xDE
.word \assistattackselect_address
.endm

.macro setmagiccoat setmagiccoat_address
.byte 0xDF
.word \setmagiccoat_address
.endm

.macro setstealstatchange setstealstatchange_address
.byte 0xE0
.word \setstealstatchange_address
.endm

.macro intimidate_try_get_target failure_continuation:req
.byte 0xE1
.word \failure_continuation
.endm

.macro switchoutabilities battler:req
.byte 0xE2
.byte \battler
.endm

.macro jumpiffainted jumpiffainted_bank jumpiffainted_address
.byte 0xE3
.byte \jumpiffainted_bank
.word \jumpiffainted_address
.endm

.macro naturepowereffect
.byte 0xE4
.endm

.macro pickupitemcalculation
.byte 0xE5
.endm

.macro actualcastformswitch
.byte 0xE6
.endm

.macro castformswitch
.byte 0xE7
.endm

.macro settypebasedhalvers settypebasedhalvers_address
.byte 0xE8
.word \settypebasedhalvers_address
.endm

.macro seteffectbyweather
.byte 0xE9
.endm

.macro recycleitem fail_contiuation
.byte 0xEA
.word \fail_contiuation
.endm

.macro settypetoterrain settypetoterrain_address
.byte 0xEB
.word \settypetoterrain_address
.endm

.macro pursuitwhenswitched pursuitwhenswitched_address
.byte 0xEC
.word \pursuitwhenswitched_address
.endm

.macro snatchmove
.byte 0xED
.endm

.macro removereflectlightscreen
.byte 0xEE
.endm

.macro pokemoncatchfunction
.byte 0xEF
.endm

.macro catchpoke
.byte 0xF0
.endm

.macro capturesomethingf1 capturesomethingf1_address
.byte 0xF1
.word \capturesomethingf1_address
.endm

.macro capturesomethingf2
.byte 0xF2
.endm

.macro capturesomethingf3 capturesomethingf3_address
.byte 0xF3
.word \capturesomethingf3_address
.endm

.macro removehp
.byte 0xF4
.endm

.macro curestatutfirstword
.byte 0xF5
.endm

.macro finishaction
.byte 0xF6
.endm

.macro activesidesomething
.byte 0xF7
.endm

@// for slots: 1 translates to the slot of attacking battler, 0 of the defender
.macro battleanimation slot_user slot_target anim
.byte 0xF8
.byte \slot_user
.byte \slot_target
.word \anim
.endm

.macro callasm function
.byte 0xF9
.word \function
.endm

.macro waitbattleanimation
.byte 0xFA
.endm

.macro trainerslideout bank:req
.byte 0xFB
.byte \bank
.endm

.macro beforeattack
.byte 0xFC
.endm

.macro itemdrop
    .byte 0xFD
.endm

@// Meta macros
.macro setstatchange stat:req amount:req decrease:req
setbyte bsc_status_effect_to_apply \stat | \amount << 4 | \decrease << 7
.endm
