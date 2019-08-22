#include "types.h"
#include "stdbool.h"
#include "constants/trainerclasses.h"
#include "constants/trainer_ai_flags.h"
#include "constants/items.h"
#include "trainer/trainer.h"
#include "trainer/party.h"
#include "language.h"
#include "save.h"

trainer_pokemon_custom_item_custom_attacks maike_test[2];
trainer trainers[TRAINER_CNT] = {
  {
    //Trainer 0x0
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      false
    }, //Encounter and gender
    0x6d, // sprite
    LANGDEP(PSTRING("Rüpel"), PSTRING("Rüpel")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_STRATEGY_NONE,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x0
  },
  {
    //Trainer 0x1
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_STREBER,
    {
      0x3,
      false
    }, //Encounter and gender
    0x1d, // sprite
    LANGDEP(PSTRING("Andreas"), PSTRING("Andreas")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x1
  },
  {
    //Trainer 0x2
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEENAGER2,
    {
      0x6,
      false
    }, //Encounter and gender
    0x24, // sprite
    LANGDEP(PSTRING("Maximilian"), PSTRING("Maximilian")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x2
  },
  {
    //Trainer 0x3
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_SCHNOESEL,
    {
      0x6,
      false
    }, //Encounter and gender
    0xd, // sprite
    LANGDEP(PSTRING("Holger"), PSTRING("Holger")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x3
  },
  {
    //Trainer 0x4
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x3,
      false
    }, //Encounter and gender
    0x6d, // sprite
    LANGDEP(PSTRING("Rüpel H."), PSTRING("Rüpel H.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x4
  },
  {
    //Trainer 0x5
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEENAGER,
    {
      0xd,
      false
    }, //Encounter and gender
    0x24, // sprite
    LANGDEP(PSTRING("Peter"), PSTRING("Peter")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x5
  },
  {
    //Trainer 0x6
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x3,
      true
    }, //Encounter and gender
    0x4e, // sprite
    LANGDEP(PSTRING("Rüpel B."), PSTRING("Rüpel B.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x6
  },
  {
    //Trainer 0x7
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_AROMALADY,
    {
      0x2,
      true
    }, //Encounter and gender
    0x3, // sprite
    LANGDEP(PSTRING("Marleene"), PSTRING("Marleene")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    4, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x7
  },
  {
    //Trainer 0x8
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      false
    }, //Encounter and gender
    0x6d, // sprite
    LANGDEP(PSTRING("Rüpel R."), PSTRING("Rüpel R.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x8
  },
  {
    //Trainer 0x9
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_AROMALADY,
    {
      0x5,
      false
    }, //Encounter and gender
    0x3, // sprite
    LANGDEP(PSTRING("Ysabell"), PSTRING("Ysabell")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x9
  },
  {
    //Trainer 0xa
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_MECHANIKER,
    {
      0x5,
      false
    }, //Encounter and gender
    0x5d, // sprite
    LANGDEP(PSTRING("Xaver"), PSTRING("Xaver")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xa
  },
  {
    //Trainer 0xb
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_GENTLEMAN,
    {
      0x3,
      false
    }, //Encounter and gender
    0x17, // sprite
    LANGDEP(PSTRING("Henrick"), PSTRING("Henrick")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xb
  },
  {
    //Trainer 0xc
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_PICKNICKER,
    {
      0x1,
      false
    }, //Encounter and gender
    0x13, // sprite
    LANGDEP(PSTRING("Tristayne"), PSTRING("Tristayne")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xc
  },
  {
    //Trainer 0xd
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_SCHOENHEIT,
    {
      0x1,
      false
    }, //Encounter and gender
    0xc, // sprite
    LANGDEP(PSTRING("Rosana"), PSTRING("Rosana")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xd
  },
  {
    //Trainer 0xe
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_SCHWARZGURT,
    {
      0xd,
      false
    }, //Encounter and gender
    0x10, // sprite
    LANGDEP(PSTRING("Rick"), PSTRING("Rick")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xe
  },
  {
    //Trainer 0xf
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_PKMN_RANGER,
    {
      0x3,
      false
    }, //Encounter and gender
    0x3d, // sprite
    LANGDEP(PSTRING("Jane"), PSTRING("Jane")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xf
  },
  {
    //Trainer 0x10
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_AROMALADY,
    {
      0x1,
      false
    }, //Encounter and gender
    0x3, // sprite
    LANGDEP(PSTRING("Johanne"), PSTRING("Johanne")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x10
  },
  {
    //Trainer 0x11
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_SCHWARZGURT,
    {
      0x4,
      false
    }, //Encounter and gender
    0x10, // sprite
    LANGDEP(PSTRING("Luca"), PSTRING("Luca")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x11
  },
  {
    //Trainer 0x12
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_WANDERER,
    {
      0x4,
      false
    }, //Encounter and gender
    0x43, // sprite
    LANGDEP(PSTRING("Willas"), PSTRING("Willas")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x12
  },
  {
    //Trainer 0x13
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_KAEFERSAMMLER,
    {
      0xb,
      false
    }, //Encounter and gender
    0x42, // sprite
    LANGDEP(PSTRING("John"), PSTRING("John")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x13
  },
  {
    //Trainer 0x14
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_LADY,
    {
      0x0,
      false
    }, //Encounter and gender
    0xb, // sprite
    LANGDEP(PSTRING("Emily"), PSTRING("Emily")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x14
  },
  {
    //Trainer 0x15
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_GOERE,
    {
      0x3,
      false
    }, //Encounter and gender
    0x41, // sprite
    LANGDEP(PSTRING("Sabrina"), PSTRING("Sabrina")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x15
  },
  {
    //Trainer 0x16
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_VOGELFAENGER,
    {
      0x4,
      false
    }, //Encounter and gender
    0x2e, // sprite
    LANGDEP(PSTRING("Alen"), PSTRING("Alen")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x16
  },
  {
    //Trainer 0x17
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_PSYCHO,
    {
      0x4,
      false
    }, //Encounter and gender
    0x16, // sprite
    LANGDEP(PSTRING("Cassandra"), PSTRING("Cassandra")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x17
  },
  {
    //Trainer 0x18
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_VOGELFAENGER,
    {
      0xd,
      false
    }, //Encounter and gender
    0x2e, // sprite
    LANGDEP(PSTRING("Valentin"), PSTRING("Valentin")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x18
  },
  {
    //Trainer 0x19
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_POLIZIST,
    {
      0xa,
      false
    }, //Encounter and gender
    0x0, // sprite
    LANGDEP(PSTRING("Harrenfeld"), PSTRING("Harrenfeld")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x19
  },
  {
    //Trainer 0x1a
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_POKEMANIAC,
    {
      0xa,
      false
    }, //Encounter and gender
    0x20, // sprite
    LANGDEP(PSTRING("Anton"), PSTRING("Anton")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x1a
  },
  {
    //Trainer 0x1b
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_AROMALADY,
    {
      0x1,
      false
    }, //Encounter and gender
    0x3, // sprite
    LANGDEP(PSTRING("Felizia"), PSTRING("Felizia")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x1b
  },
  {
    //Trainer 0x1c
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_ANGLER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x26, // sprite
    LANGDEP(PSTRING("Kamille"), PSTRING("Kamille")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x1c
  },
  {
    //Trainer 0x1d
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_ANGLER,
    {
      0x1,
      false
    }, //Encounter and gender
    0x26, // sprite
    LANGDEP(PSTRING("Ben"), PSTRING("Ben")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x1d
  },
  {
    //Trainer 0x1e
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_EXPERTE,
    {
      0x0,
      true
    }, //Encounter and gender
    0x23, // sprite
    LANGDEP(PSTRING("Martha"), PSTRING("Martha")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x1e
  },
  {
    //Trainer 0x1f
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_SCHULKIND,
    {
      0x0,
      false
    }, //Encounter and gender
    0x1e, // sprite
    LANGDEP(PSTRING("Chantal"), PSTRING("Chantal")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x1f
  },
  {
    //Trainer 0x20
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_ANGLER,
    {
      0x9,
      false
    }, //Encounter and gender
    0x26, // sprite
    LANGDEP(PSTRING("Marius"), PSTRING("Marius")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x20
  },
  {
    //Trainer 0x21
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_ANGLER,
    {
      0x9,
      false
    }, //Encounter and gender
    0x26, // sprite
    LANGDEP(PSTRING("Nils"), PSTRING("Nils")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x21
  },
  {
    //Trainer 0x22
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_NINJAJUNGE,
    {
      0x9,
      false
    }, //Encounter and gender
    0x2f, // sprite
    LANGDEP(PSTRING("Kevin"), PSTRING("Kevin")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    4, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x22
  },
  {
    //Trainer 0x23
    true, // Custom moves
    true, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_ASS_TRAINER,
    {
      0x4,
      false
    }, //Encounter and gender
    0x9, // sprite
    LANGDEP(PSTRING("Serena"), PSTRING("Serena")),
    {
      ITEM_TOP_GENESUNG,
      ITEM_TOP_GENESUNG,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
    0x0, // field_1E
    4, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x23
  },
  {
    //Trainer 0x24
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TRIATHLET,
    {
      0x4,
      false
    }, //Encounter and gender
    0x2a, // sprite
    LANGDEP(PSTRING("Nyomsa"), PSTRING("Nyomsa")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x24
  },
  {
    //Trainer 0x25
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEENAGER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x24, // sprite
    LANGDEP(PSTRING("Tino"), PSTRING("Tino")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x25
  },
  {
    //Trainer 0x26
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_DIEB,
    {
      0x0,
      false
    }, //Encounter and gender
    0x5c, // sprite
    LANGDEP(PSTRING("Steffen"), PSTRING("Steffen")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x26
  },
  {
    //Trainer 0x27
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_VOGELFAENGER,
    {
      0xb,
      false
    }, //Encounter and gender
    0x2e, // sprite
    LANGDEP(PSTRING("Ernest"), PSTRING("Ernest")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x27
  },
  {
    //Trainer 0x28
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      false
    }, //Encounter and gender
    0x6d, // sprite
    LANGDEP(PSTRING("Rüpel Y."), PSTRING("Rüpel Y.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x28
  },
  {
    //Trainer 0x29
    false, // Custom moves
    true, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_PKMN_TRAINER,
    {
      0x0,
      true
    }, //Encounter and gender
    0x39, // sprite
    LANGDEP(PSTRING("Maike"), PSTRING("Maike")),
    {
      ITEM_TRANK,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x29
  },
  {
    //Trainer 0x2a
    false, // Custom moves
    true, // Custom items
    0x0, // field_0_filler
	TRAINERCLASS_PKMN_TRAINER,
    {
      0x1,
      true
    }, //Encounter and gender
    0x39, // sprite
    LANGDEP(PSTRING("Maike"), PSTRING("Maike")),
    {
      ITEM_TRANK,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x2a
  },
  {
    //Trainer 0x2b
    false, // Custom moves
    true, // Custom items
    0x0, // field_0_filler
	TRAINERCLASS_PKMN_TRAINER,
    {
      0x1,
      true
    }, //Encounter and gender
    0x39, // sprite
    LANGDEP(PSTRING("Maike"), PSTRING("Maike")),
    {
      ITEM_TRANK,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x2b
  },
  {
    //Trainer 0x2c
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_POLIZIST,
    {
      0x1,
      false
    }, //Encounter and gender
    0x0, // sprite
    LANGDEP(PSTRING("Marq"), PSTRING("Marq")),
    {
      ITEM_TRANK,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x2c
  },
  {
    //Trainer 0x2d
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_ROCKER,
    {
      0x1,
      false
    }, //Encounter and gender
    0x11, // sprite
    LANGDEP(PSTRING("Udo"), PSTRING("Udo")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    4, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x2d
  },
  {
    //Trainer 0x2e
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_AROMALADY,
    {
      0x4,
      true
    }, //Encounter and gender
    0x3, // sprite
    LANGDEP(PSTRING("Annie"), PSTRING("Annie")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x2e
  },
  {
    //Trainer 0x2f
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_GENTLEMAN,
    {
      0x2,
      true
    }, //Encounter and gender
    0x17, // sprite
    LANGDEP(PSTRING("Joachim"), PSTRING("Joachim")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x2f
  },
  {
    //Trainer 0x30
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_PICKNICKER,
    {
      0x2,
      false
    }, //Encounter and gender
    0x33, // sprite
    LANGDEP(PSTRING("Lobin"), PSTRING("Lobin")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    4, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x30
  },
  {
    //Trainer 0x31
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_KAEMPFERIN,
    {
      0x4,
      false
    }, //Encounter and gender
    0x30, // sprite
    LANGDEP(PSTRING("Ran"), PSTRING("Ran")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x31
  },
  {
    //Trainer 0x32
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_WANDERER,
    {
      0x1,
      false
    }, //Encounter and gender
    0x5a, // sprite
    LANGDEP(PSTRING("Alois"), PSTRING("Alois")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x32
  },
  {
    //Trainer 0x33
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TRIATHLET,
    {
      0x1,
      false
    }, //Encounter and gender
    0x29, // sprite
    LANGDEP(PSTRING("Seymour"), PSTRING("Seymour")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x33
  },
  {
    //Trainer 0x34
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEENAGER2,
    {
      0x1,
      false
    }, //Encounter and gender
    0x52, // sprite
    LANGDEP(PSTRING("Nedd"), PSTRING("Nedd")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x34
  },
  {
    //Trainer 0x35
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_SCHOENHEIT,
    {
      0x1,
      false
    }, //Encounter and gender
    0x62, // sprite
    LANGDEP(PSTRING("Andrea"), PSTRING("Andrea")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x35
  },
  {
    //Trainer 0x36
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_AROMALADY,
    {
      0x0,
      false
    }, //Encounter and gender
    0x3, // sprite
    LANGDEP(PSTRING("Jeyne"), PSTRING("Jeyne")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x36
  },
  {
    //Trainer 0x37
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEENAGER2,
    {
      0x0,
      false
    }, //Encounter and gender
    0x24, // sprite
    LANGDEP(PSTRING("Phyllip"), PSTRING("Phyllip")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x37
  },
  {
    //Trainer 0x38
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_PKMN_ZUECHTER,
    {
      0x0,
      true
    }, //Encounter and gender
    0x3b, // sprite
    LANGDEP(PSTRING("Maraa"), PSTRING("Maraa")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    5, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x38
  },
  {
    //Trainer 0x39
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_PICKNICKER,
    {
      0x3,
      true
    }, //Encounter and gender
    0x33, // sprite
    LANGDEP(PSTRING("Eliot"), PSTRING("Eliot")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x39
  },
  {
    //Trainer 0x3a
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_GOERE2,
    {
      0x0,
      false
    }, //Encounter and gender
    0x54, // sprite
    LANGDEP(PSTRING("Charlie"), PSTRING("Charlie")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x3a
  },
  {
    //Trainer 0x3b
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_ASS_TRAINER,
    {
      0x1,
      false
    }, //Encounter and gender
    0x8, // sprite
    LANGDEP(PSTRING("Leon"), PSTRING("Leon")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_STRATEGY_NONE,
    0x0, // field_1E
    4, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x3b
  },
  {
    //Trainer 0x3c
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TRIATHLET,
    {
      0x0,
      false
    }, //Encounter and gender
    0x2a, // sprite
    LANGDEP(PSTRING("Gerda"), PSTRING("Gerda")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x3c
  },
  {
    //Trainer 0x3d
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_PICKNICKER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x33, // sprite
    LANGDEP(PSTRING("Lore"), PSTRING("Lore")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x3d
  },
  {
    //Trainer 0x3e
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEENAGER2,
    {
      0x1,
      false
    }, //Encounter and gender
    0x24, // sprite
    LANGDEP(PSTRING("Jeff"), PSTRING("Jeff")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x3e
  },
  {
    //Trainer 0x3f
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_PICKNICKER3,
    {
      0x1,
      false
    }, //Encounter and gender
    0x13, // sprite
    LANGDEP(PSTRING("Miguel"), PSTRING("Miguel")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x3f
  },
  {
    //Trainer 0x40
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_PKMN_ZUECHTER,
    {
      0x1,
      true
    }, //Encounter and gender
    0x3b, // sprite
    LANGDEP(PSTRING("Ismeralda"), PSTRING("Ismeralda")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    5, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x40
  },
  {
    //Trainer 0x41
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEENAGER2,
    {
      0x0,
      false
    }, //Encounter and gender
    0x24, // sprite
    LANGDEP(PSTRING("Robert"), PSTRING("Robert")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x41
  },
  {
    //Trainer 0x42
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_ANGLER,
    {
      0x1,
      true
    }, //Encounter and gender
    0x5e, // sprite
    LANGDEP(PSTRING("Alen"), PSTRING("Alen")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x42
  },
  {
    //Trainer 0x43
    false, // Custom moves
    true, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_KAEFERSAMMLER,
    {
      0x5,
      true
    }, //Encounter and gender
    0x14, // sprite
    LANGDEP(PSTRING("Merrik"), PSTRING("Merrik")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x43
  },
  {
    //Trainer 0x44
    false, // Custom moves
    true, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x5,
      true
    }, //Encounter and gender
    0x4e, // sprite
    LANGDEP(PSTRING("Rüpel N."), PSTRING("Rüpel N.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x44
  },
  {
    //Trainer 0x45
    false, // Custom moves
    true, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_PKMN_RANGER,
    {
      0x7,
      true
    }, //Encounter and gender
    0x3c, // sprite
    LANGDEP(PSTRING("Remus"), PSTRING("Remus")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x45
  },
  {
    //Trainer 0x46
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x7,
      false
    }, //Encounter and gender
    0x6d, // sprite
    LANGDEP(PSTRING("Rüpel M."), PSTRING("Rüpel M.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x46
  },
  {
    //Trainer 0x47
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_CAMPER,
    {
      0x7,
      true
    }, //Encounter and gender
    0x57, // sprite
    LANGDEP(PSTRING("Erna"), PSTRING("Erna")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x47
  },
  {
    //Trainer 0x48
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x1,
      false
    }, //Encounter and gender
    0x4e, // sprite
    LANGDEP(PSTRING("Rüpel I."), PSTRING("Rüpel I.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x48
  },
  {
    //Trainer 0x49
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      false
    }, //Encounter and gender
    0x6d, // sprite
    LANGDEP(PSTRING("Rüpel P."), PSTRING("Rüpel P.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x49
  },
  {
    //Trainer 0x4a
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0xb,
      false
    }, //Encounter and gender
    0x6d, // sprite
    LANGDEP(PSTRING("Rüpel N."), PSTRING("Rüpel N.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x4a
  },
  {
    //Trainer 0x4b
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x2,
      false
    }, //Encounter and gender
    0x4e, // sprite
    LANGDEP(PSTRING("Rüpel D."), PSTRING("Rüpel D.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x4b
  },
  {
    //Trainer 0x4c
    true, // Custom moves
    true, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_VIOLET_VORS,
    {
      0x4,
      true
    }, //Encounter and gender
    0x1b, // sprite
    LANGDEP(PSTRING("Rin"), PSTRING("Rin")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x4c
  },
  {
    //Trainer 0x4d
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_WANDERER,
    {
      0x8,
      false
    }, //Encounter and gender
    0x43, // sprite
    LANGDEP(PSTRING("Barneby"), PSTRING("Barneby")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x4d
  },
  {
    //Trainer 0x4e
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEENAGER,
    {
      0x6,
      false
    }, //Encounter and gender
    0x24, // sprite
    LANGDEP(PSTRING("Wolffie"), PSTRING("Wolffie")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x4e
  },
  {
    //Trainer 0x4f
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_CAMPER,
    {
      0x6,
      true
    }, //Encounter and gender
    0x57, // sprite
    LANGDEP(PSTRING("Korinna"), PSTRING("Korinna")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x4f
  },
  {
    //Trainer 0x50
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_WANDERER,
    {
      0x7,
      false
    }, //Encounter and gender
    0x5a, // sprite
    LANGDEP(PSTRING("Kalleh"), PSTRING("Kalleh")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x50
  },
  {
    //Trainer 0x51
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_GOERE,
    {
      0x7,
      false
    }, //Encounter and gender
    0x54, // sprite
    LANGDEP(PSTRING("Karmina"), PSTRING("Karmina")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x51
  },
  {
    //Trainer 0x52
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_WANDERER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x43, // sprite
    LANGDEP(PSTRING("Walltyr"), PSTRING("Walltyr")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x52
  },
  {
    //Trainer 0x53
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_SCHULKIND,
    {
      0x1,
      false
    }, //Encounter and gender
    0x54, // sprite
    LANGDEP(PSTRING("Sophie"), PSTRING("Sophie")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x53
  },
  {
    //Trainer 0x54
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_KAEMPFERIN,
    {
      0x0,
      false
    }, //Encounter and gender
    0x30, // sprite
    LANGDEP(PSTRING("Maya"), PSTRING("Maya")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x54
  },
  {
    //Trainer 0x55
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_AROMALADY,
    {
      0x1,
      true
    }, //Encounter and gender
    0x3, // sprite
    LANGDEP(PSTRING("Silkye"), PSTRING("Silkye")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x55
  },
  {
    //Trainer 0x56
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_STREBER,
    {
      0x7a,
      false
    }, //Encounter and gender
    0x59, // sprite
    LANGDEP(PSTRING("Waynis"), PSTRING("Waynis")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x56
  },
  {
    //Trainer 0x57
    false, // Custom moves
    true, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_EXPERTE,
    {
      0xa,
      true
    }, //Encounter and gender
    0x23, // sprite
    LANGDEP(PSTRING("Franziska"), PSTRING("Franziska")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x57
  },
  {
    //Trainer 0x58
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_RUINENMANIAC,
    {
      0xa,
      false
    }, //Encounter and gender
    0x4, // sprite
    LANGDEP(PSTRING("Drago"), PSTRING("Drago")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    4, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x58
  },
  {
    //Trainer 0x59
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_WANDERER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x5a, // sprite
    LANGDEP(PSTRING("Rudolf"), PSTRING("Rudolf")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x59
  },
  {
    //Trainer 0x5a
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_DIEB,
    {
      0x0,
      false
    }, //Encounter and gender
    0x5c, // sprite
    LANGDEP(PSTRING("Merreck"), PSTRING("Merreck")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x5a
  },
  {
    //Trainer 0x5b
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEENAGER2,
    {
      0x0,
      false
    }, //Encounter and gender
    0x52, // sprite
    LANGDEP(PSTRING("Thyma"), PSTRING("Thyma")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x5b
  },
  {
    //Trainer 0x5c
    true, // Custom moves
    true, // Custom items
    0x0, // field_0_filler
	TRAINERCLASS_PKMN_TRAINER,
    {
      0x0,
      true
    }, //Encounter and gender
    0x39, // sprite
    LANGDEP(PSTRING("Maike"), PSTRING("Maike")),
    {
      ITEM_SUPERTRANK,
      ITEM_SUPERTRANK,
      ITEM_HYPERHEILER,
      ITEM_HYPERHEILER
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE | TRAINER_AI_PREFER_CERTAIN_MOVES,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x5c
  },
  {
    //Trainer 0x5d
    true, // Custom moves
    true, // Custom items
    0x0, // field_0_filler
	TRAINERCLASS_PKMN_TRAINER,
    {
      0x0,
      true
    }, //Encounter and gender
    0x39, // sprite
    LANGDEP(PSTRING("Maike"), PSTRING("Maike")),
    {
      ITEM_SUPERTRANK,
      ITEM_SUPERTRANK,
      ITEM_HYPERHEILER,
      ITEM_HYPERHEILER
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE | TRAINER_AI_PREFER_CERTAIN_MOVES,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x5d
  },
  {
    //Trainer 0x5e
    true, // Custom moves
    true, // Custom items
    0x0, // field_0_filler
	TRAINERCLASS_PKMN_TRAINER,
    {
      0x0,
      true
    }, //Encounter and gender
    0x39, // sprite
    LANGDEP(PSTRING("Maike"), PSTRING("Maike")),
    {
      ITEM_SUPERTRANK,
      ITEM_SUPERTRANK,
      ITEM_HYPERHEILER,
      ITEM_HYPERHEILER
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE | TRAINER_AI_PREFER_CERTAIN_MOVES,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x5e
  },
  {
    //Trainer 0x5f
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_GOERE,
    {
      0x0,
      true
    }, //Encounter and gender
    0x54, // sprite
    LANGDEP(PSTRING("Janina"), PSTRING("Janina")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x5f
  },
  {
    //Trainer 0x60
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_WANDERER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x5a, // sprite
    LANGDEP(PSTRING("Gunnward"), PSTRING("Gunnward")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x60
  },
  {
    //Trainer 0x61
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_PKMN_ZUECHTER,
    {
      0x28,
      true
    }, //Encounter and gender
    0x3b, // sprite
    LANGDEP(PSTRING("Henrietta"), PSTRING("Henrietta")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    5, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x61
  },
  {
    //Trainer 0x62
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_PICKNICKER3,
    {
      0x0,
      false
    }, //Encounter and gender
    0x56, // sprite
    LANGDEP(PSTRING("Sonnwald"), PSTRING("Sonnwald")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x62
  },
  {
    //Trainer 0x63
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_POKEMANIAC,
    {
      0x0,
      false
    }, //Encounter and gender
    0x36, // sprite
    LANGDEP(PSTRING("Valeyntyn"), PSTRING("Valeyntyn")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x63
  },
  {
    //Trainer 0x64
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      true
    }, //Encounter and gender
    0x4e, // sprite
    LANGDEP(PSTRING("Rüpel M."), PSTRING("Rüpel M.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x64
  },
  {
    //Trainer 0x65
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_PICKNICKER,
    {
      0x0,
      true
    }, //Encounter and gender
    0x33, // sprite
    LANGDEP(PSTRING("Janie"), PSTRING("Janie")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x65
  },
  {
    //Trainer 0x66
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_PKMN_RANGER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x3d, // sprite
    LANGDEP(PSTRING("Ismera"), PSTRING("Ismera")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x66
  },
  {
    //Trainer 0x67
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_KAEFERSAMMLER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x53, // sprite
    LANGDEP(PSTRING("Eusjean"), PSTRING("Eusjean")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x67
  },
  {
    //Trainer 0x68
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_SCHNOESEL,
    {
      0x0,
      false
    }, //Encounter and gender
    0xd, // sprite
    LANGDEP(PSTRING("Rudderich"), PSTRING("Rudderich")),
    {
      ITEM_TOP_GENESUNG,
      ITEM_TOP_GENESUNG,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x68
  },
  {
    //Trainer 0x69
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_PSYCHO,
    {
      0x0,
      false
    }, //Encounter and gender
    0x16, // sprite
    LANGDEP(PSTRING("Attilia"), PSTRING("Attilia")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x69
  },
  {
    //Trainer 0x6a
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_WANDERER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x5a, // sprite
    LANGDEP(PSTRING("Gangolf"), PSTRING("Gangolf")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    4, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x6a
  },
  {
    //Trainer 0x6b
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_VOGELFAENGER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x2e, // sprite
    LANGDEP(PSTRING("Abduhl"), PSTRING("Abduhl")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x6b
  },
  {
    //Trainer 0x6c
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_REVOLUTIONAER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x1, // sprite
    LANGDEP(PSTRING("Gerrie"), PSTRING("Gerrie")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x6c
  },
  {
    //Trainer 0x6d
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_REVOLUTIONAER,
    {
      0x0,
      true
    }, //Encounter and gender
    0x2, // sprite
    LANGDEP(PSTRING("Marja"), PSTRING("Marja")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x6d
  },
  {
    //Trainer 0x6e
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_REVOLUTIONAER,
    {
      0x0,
      true
    }, //Encounter and gender
    0x2, // sprite
    LANGDEP(PSTRING("Balla"), PSTRING("Balla")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    4, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x6e
  },
  {
    //Trainer 0x6f
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_AROMALADY,
    {
      0x0,
      true
    }, //Encounter and gender
    0x3, // sprite
    LANGDEP(PSTRING("Ruanna"), PSTRING("Ruanna")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x6f
  },
  {
    //Trainer 0x70
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_MECHANIKER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x5d, // sprite
    LANGDEP(PSTRING("Tommas"), PSTRING("Tommas")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x70
  },
  {
    //Trainer 0x71
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      false
    }, //Encounter and gender
    0x4e, // sprite
    LANGDEP(PSTRING("Rüpel S."), PSTRING("Rüpel S.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x71
  },
  {
    //Trainer 0x72
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_REVOLUTIONAER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x2, // sprite
    LANGDEP(PSTRING("Sophy"), PSTRING("Sophy")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x72
  },
  {
    //Trainer 0x73
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_REVOLUTIONAER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x1, // sprite
    LANGDEP(PSTRING("Rell"), PSTRING("Rell")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x73
  },
  {
    //Trainer 0x74
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_KAEMPFERIN,
    {
      0x0,
      true
    }, //Encounter and gender
    0x30, // sprite
    LANGDEP(PSTRING("Maggy"), PSTRING("Maggy")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x74
  },
  {
    //Trainer 0x75
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_VOGELFAENGER,
    {
      0x1,
      false
    }, //Encounter and gender
    0x68, // sprite
    LANGDEP(PSTRING("Kriss"), PSTRING("Kriss")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x75
  },
  {
    //Trainer 0x76
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_PSYCHO,
    {
      0x1,
      false
    }, //Encounter and gender
    0x64, // sprite
    LANGDEP(PSTRING("Coal"), PSTRING("Coal")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x76
  },
  {
    //Trainer 0x77
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_GENTLEMAN,
    {
      0x1,
      false
    }, //Encounter and gender
    0x7b, // sprite
    LANGDEP(PSTRING("Fraunk"), PSTRING("Fraunk")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x77
  },
  {
    //Trainer 0x78
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_ANGLER,
    {
      0x1,
      false
    }, //Encounter and gender
    0x5e, // sprite
    LANGDEP(PSTRING("Sheldon"), PSTRING("Sheldon")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x78
  },
  {
    //Trainer 0x79
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_SCHWARZGURT,
    {
      0x1,
      false
    }, //Encounter and gender
    0x69, // sprite
    LANGDEP(PSTRING("Rashi"), PSTRING("Rashi")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x79
  },
  {
    //Trainer 0x7a
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_KAEMPFERIN,
    {
      0x1,
      true
    }, //Encounter and gender
    0x30, // sprite
    LANGDEP(PSTRING("Mayama"), PSTRING("Mayama")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x7a
  },
  {
    //Trainer 0x7b
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_ANGLER,
    {
      0x1,
      true
    }, //Encounter and gender
    0x5e, // sprite
    LANGDEP(PSTRING("Doran"), PSTRING("Doran")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x7b
  },
  {
    //Trainer 0x7c
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_SCHWARZGURT,
    {
      0x1,
      true
    }, //Encounter and gender
    0x69, // sprite
    LANGDEP(PSTRING("Richard"), PSTRING("Richard")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x7c
  },
  {
    //Trainer 0x7d
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_REVOLUTIONAER,
    {
      0x1,
      true
    }, //Encounter and gender
    0x2, // sprite
    LANGDEP(PSTRING("Elsa"), PSTRING("Elsa")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x7d
  },
  {
    //Trainer 0x7e
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_WANDERER,
    {
      0x1,
      false
    }, //Encounter and gender
    0x5a, // sprite
    LANGDEP(PSTRING("Gerrad"), PSTRING("Gerrad")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x7e
  },
  {
    //Trainer 0x7f
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_GOERE2,
    {
      0x1,
      true
    }, //Encounter and gender
    0x54, // sprite
    LANGDEP(PSTRING("Livia"), PSTRING("Livia")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x7f
  },
  {
    //Trainer 0x80
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_KAEMPFERIN,
    {
      0x1,
      false
    }, //Encounter and gender
    0x30, // sprite
    LANGDEP(PSTRING("Loretta"), PSTRING("Loretta")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x80
  },
  {
    //Trainer 0x81
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_SCHWARZGURT,
    {
      0x1,
      false
    }, //Encounter and gender
    0x69, // sprite
    LANGDEP(PSTRING("Tobish"), PSTRING("Tobish")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x81
  },
  {
    //Trainer 0x82
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_KAEMPFERIN,
    {
      0x1,
      true
    }, //Encounter and gender
    0x30, // sprite
    LANGDEP(PSTRING("Christina"), PSTRING("Christina")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x82
  },
  {
    //Trainer 0x83
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_SCHWARZGURT,
    {
      0x1,
      true
    }, //Encounter and gender
    0x69, // sprite
    LANGDEP(PSTRING("Gerd"), PSTRING("Gerd")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x83
  },
  {
    //Trainer 0x84
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_FORSCHERIN,
    {
      0x1,
      true
    }, //Encounter and gender
    0x5, // sprite
    LANGDEP(PSTRING("Elise"), PSTRING("Elise")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    6, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x84
  },
  {
    //Trainer 0x85
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_RUINENMANIAC,
    {
      0x1,
      true
    }, //Encounter and gender
    0x4, // sprite
    LANGDEP(PSTRING("Fellicho"), PSTRING("Fellicho")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x85
  },
  {
    //Trainer 0x86
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_GENTLEMAN,
    {
      0x0,
      false
    }, //Encounter and gender
    0x17, // sprite
    LANGDEP(PSTRING("Nikolas"), PSTRING("Nikolas")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x86
  },
  {
    //Trainer 0x87
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_ASS_TRAINER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x6e, // sprite
    LANGDEP(PSTRING("Lorenz"), PSTRING("Lorenz")),
    {
      ITEM_TOP_GENESUNG,
      ITEM_TOP_GENESUNG,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x87
  },
  {
    //Trainer 0x88
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_KAEFERSAMMLER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x42, // sprite
    LANGDEP(PSTRING("Richardo"), PSTRING("Richardo")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x88
  },
  {
    //Trainer 0x89
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_WOLKENREITER,
    {
      0x0,
      true
    }, //Encounter and gender
    0x47, // sprite
    LANGDEP(PSTRING("Alyssa"), PSTRING("Alyssa")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x89
  },
  {
    //Trainer 0x8a
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_WOLKENREITER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x48, // sprite
    LANGDEP(PSTRING("Alesion"), PSTRING("Alesion")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x8a
  },
  {
    //Trainer 0x8b
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_STREBER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x59, // sprite
    LANGDEP(PSTRING("Jesse"), PSTRING("Jesse")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x8b
  },
  {
    //Trainer 0x8c
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_WOLKENREITER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x47, // sprite
    LANGDEP(PSTRING("Elya"), PSTRING("Elya")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x8c
  },
  {
    //Trainer 0x8d
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      false
    }, //Encounter and gender
    0x6d, // sprite
    LANGDEP(PSTRING("Rüpel M."), PSTRING("Rüpel M.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x8d
  },
  {
    //Trainer 0x8e
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      false
    }, //Encounter and gender
    0x4e, // sprite
    LANGDEP(PSTRING("Rüpel J."), PSTRING("Rüpel J.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x8e
  },
  {
    //Trainer 0x8f
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      true
    }, //Encounter and gender
    0x6d, // sprite
    LANGDEP(PSTRING("Rüpel G."), PSTRING("Rüpel G.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x8f
  },
  {
    //Trainer 0x90
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      false
    }, //Encounter and gender
    0x4e, // sprite
    LANGDEP(PSTRING("Rüpel S."), PSTRING("Rüpel S.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x90
  },
  {
    //Trainer 0x91
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      false
    }, //Encounter and gender
    0x49, // sprite
    LANGDEP(PSTRING("Elite V."), PSTRING("Elite V.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x91
  },
  {
    //Trainer 0x92
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_HITZKOPF,
    {
      0x0,
      false
    }, //Encounter and gender
    0x12, // sprite
    LANGDEP(PSTRING("Raphael"), PSTRING("Raphael")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x92
  },
  {
    //Trainer 0x93
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_CAMPER2,
    {
      0x0,
      false
    }, //Encounter and gender
    0x56, // sprite
    LANGDEP(PSTRING("Tasso"), PSTRING("Tasso")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x93
  },
  {
    //Trainer 0x94
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_SCHOENHEIT,
    {
      0x0,
      false
    }, //Encounter and gender
    0x62, // sprite
    LANGDEP(PSTRING("Cyarla"), PSTRING("Cyarla")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x94
  },
  {
    //Trainer 0x95
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_CAMPER,
    {
      0x0,
      true
    }, //Encounter and gender
    0x57, // sprite
    LANGDEP(PSTRING("Issilde"), PSTRING("Issilde")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    4, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x95
  },
  {
    //Trainer 0x96
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_GENTLEMAN,
    {
      0x2,
      false
    }, //Encounter and gender
    0x17, // sprite
    LANGDEP(PSTRING("Gewert"), PSTRING("Gewert")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x96
  },
  {
    //Trainer 0x97
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_STREBER,
    {
      0x2,
      true
    }, //Encounter and gender
    0x59, // sprite
    LANGDEP(PSTRING("Crissilas"), PSTRING("Crissilas")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x97
  },
  {
    //Trainer 0x98
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_PKMN_RANGER,
    {
      0x2,
      true
    }, //Encounter and gender
	0x3d, // sprite
    LANGDEP(PSTRING("Hedwig"), PSTRING("Hedwig")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x98
  },
  {
    //Trainer 0x99
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_GOERE,
    {
      0x2,
      true
    }, //Encounter and gender
    0x54, // sprite
    LANGDEP(PSTRING("Ruth"), PSTRING("Ruth")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x99
  },
  {
    //Trainer 0x9a
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_WANDERER,
    {
      0x2,
      false
    }, //Encounter and gender
    0x5a, // sprite
    LANGDEP(PSTRING("Ingo"), PSTRING("Ingo")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    4, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x9a
  },
  {
    //Trainer 0x9b
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_SCHULKIND,
    {
      0x2,
      true
    }, //Encounter and gender
    0x1e, // sprite
    LANGDEP(PSTRING("Marija"), PSTRING("Marija")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x9b
  },
  {
    //Trainer 0x9c
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_ASS_TRAINER,
    {
      0x2,
      true
    }, //Encounter and gender
    0x6f, // sprite
    LANGDEP(PSTRING("Jana"), PSTRING("Jana")),
    {
      ITEM_TOP_GENESUNG,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x9c
  },
  {
    //Trainer 0x9d
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_LADY2,
    {
      0x2,
      true
    }, //Encounter and gender
    0x92, // sprite
    LANGDEP(PSTRING("Nathalie"), PSTRING("Nathalie")),
    {
      ITEM_TOP_GENESUNG,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x9d
  },
  {
    //Trainer 0x9e
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_DIEB,
    {
      0x0,
      true
    }, //Encounter and gender
    0x5c, // sprite
    LANGDEP(PSTRING("Rüdigar"), PSTRING("Rüdigar")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_STRATEGY_NONE,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x9e
  },
  {
    //Trainer 0x9f
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_PKMN_ZUECHTER,
    {
      0x0,
      true
    }, //Encounter and gender
    0x3b, // sprite
    LANGDEP(PSTRING("Hannya"), PSTRING("Hannya")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_STRATEGY_NONE,
    0x0, // field_1E
    6, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_x9f
  },
  {
    //Trainer 0xa0
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_WANDERER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x5a, // sprite
    LANGDEP(PSTRING("Haggron"), PSTRING("Haggron")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_STRATEGY_NONE,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xa0
  },
  {
    //Trainer 0xa1
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_PICKNICKER,
    {
      0x0,
      false
    }, //Encounter and gender
    0x56, // sprite
    LANGDEP(PSTRING("Joseppo"), PSTRING("Joseppo")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_STRATEGY_NONE,
    0x0, // field_1E
    4, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xa1
  },
  {
    //Trainer 0xa2
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_HITZKOPF,
    {
      0x0,
      false
    }, //Encounter and gender
    0x12, // sprite
    LANGDEP(PSTRING("Taryuk"), PSTRING("Taryuk")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_STRATEGY_NONE,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xa2
  },
  {
    //Trainer 0xa3
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      false
    }, //Encounter and gender
    0x6d, // sprite
    LANGDEP(PSTRING("Rüpel M."), PSTRING("Rüpel M.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_STRATEGY_NONE,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xa3
  },
  {
    //Trainer 0xa4
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      true
    }, //Encounter and gender
    0x4e, // sprite
    LANGDEP(PSTRING("Rüpel R."), PSTRING("Rüpel R.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_STRATEGY_NONE,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xa4
  },
  {
    //Trainer 0xa5
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      false
    }, //Encounter and gender
    0x6d, // sprite
    LANGDEP(PSTRING("Rüpel L."), PSTRING("Rüpel L.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_STRATEGY_NONE,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xa5
  },
  {
    //Trainer 0xa6
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      true
    }, //Encounter and gender
    0x4e, // sprite
    LANGDEP(PSTRING("Rüpel Y."), PSTRING("Rüpel Y.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_STRATEGY_NONE,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xa6
  },
  {
    //Trainer 0xa7
    true, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      true
    }, //Encounter and gender
    0x4e, // sprite
    LANGDEP(PSTRING("Rüpel D."), PSTRING("Rüpel D.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_STRATEGY_NONE,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xa7
  },
  {
    //Trainer 0xa8
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      false
    }, //Encounter and gender
    0x6d, // sprite
    LANGDEP(PSTRING("Rüpel L."), PSTRING("Rüpel L.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_STRATEGY_NONE,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xa8
  },
  {
    //Trainer 0xa9
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_ASS_TRAINER,
    {
      0x0,
      true
    }, //Encounter and gender
    0x6f, // sprite
    LANGDEP(PSTRING("Curris"), PSTRING("Curris")),
    {
      ITEM_TOP_GENESUNG,
      ITEM_TOP_GENESUNG,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_STRATEGY_NONE,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xa9
  },
  {
    //Trainer 0xaa
    true, // Custom moves
    true, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_VIOLET_VORS,
    {
      0x3,
      false
    }, //Encounter and gender
    0x60, // sprite
    LANGDEP(PSTRING("Mistral"), PSTRING("Mistral")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE | TRAINER_AI_CONSIDER_PERECNTUAL_HP,
    0x0, // field_1E
    1, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xaa
  },
  {
    //Trainer 0xab
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEENAGER,
    {
      0x3,
      false
    }, //Encounter and gender
    0x52, // sprite
    LANGDEP(PSTRING("Dario"), PSTRING("Dario")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    4, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xab
  },
  {
    //Trainer 0xac
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_HITZKOPF,
    {
      0x3,
      false
    }, //Encounter and gender
    0x12, // sprite
    LANGDEP(PSTRING("Gerrit"), PSTRING("Gerrit")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xac
  },
  {
    //Trainer 0xad
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x3,
      false
    }, //Encounter and gender
    0x6d, // sprite
    LANGDEP(PSTRING("Rüpel"), PSTRING("Rüpel")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xad
  },
  {
    //Trainer 0xae
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      false
    }, //Encounter and gender
    0x49, // sprite
    LANGDEP(PSTRING("Elite H."), PSTRING("Elite H.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xae
  },
  {
    //Trainer 0xaf
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      false
    }, //Encounter and gender
    0x4a, // sprite
    LANGDEP(PSTRING("Elite M."), PSTRING("Elite M.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xaf
  },
  {
    //Trainer 0xb0
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      true
    }, //Encounter and gender
    0x4e, // sprite
    LANGDEP(PSTRING("Rüpel K."), PSTRING("Rüpel K.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    2, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xb0
  },
  {
    //Trainer 0xb1
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x0,
      false
    }, //Encounter and gender
    0x6d, // sprite
    LANGDEP(PSTRING("Rüpel G."), PSTRING("Rüpel G.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    3, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xb1
  },
  {
    //Trainer 0xb2
    false, // Custom moves
    false, // Custom items
    0x0, // field_0_filler
    TRAINERCLASS_TEAM_VIOLET,
    {
      0x3,
      true
    }, //Encounter and gender
    0x49, // sprite
    LANGDEP(PSTRING("Elite N."), PSTRING("Elite N.")),
    {
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE,
      ITEM_NONE
    },
    false, //Dual battle
    TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
    0x0, // field_1E
    4, // Pokemon Count
    0x0, // field_21
    0x0, // field_22
    0x0, // field_23
    (trainer_pokemon * ) trainer_party_xb2
  },
  {
    //Trainer 0xb3
    false, false, 0,
	TRAINERCLASS_RIVALE,
	{},
	106,
	LANGDEP(PSTRING("Björn"), PSTRING("Björn")),
	{ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
	0, // no dual battle
	TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_SUPER_EFFECTIVE,
	0,
	2, // pkmn cnt
	0, 0, 0,
	(trainer_pokemon*) trainer_party_xb3
  },
  {
    //Trainer 0xb4
    false, false, 0,
	TRAINERCLASS_RIVALE,
	{},
	106,
	LANGDEP(PSTRING("Björn"), PSTRING("Björn")),
	{ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
	0, // no dual battle
	TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_SUPER_EFFECTIVE,
	0,
	2, // pkmn cnt
	0, 0, 0,
	(trainer_pokemon*) trainer_party_xb4
  },
  {
    //Trainer 0xb5
    false, false, 0,
	TRAINERCLASS_RIVALE,
	{},
	106,
	LANGDEP(PSTRING("Björn"), PSTRING("Björn")),
	{ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
	0, // no dual battle
	TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_SUPER_EFFECTIVE,
	0,
	2, // pkmn cnt
	0, 0, 0,
	(trainer_pokemon*) trainer_party_xb5
  },{
		//Trainer 0xb6
		true,// Custom moves
		true,// Custom items
		0x0,// field_0_filler
		TRAINERCLASS_ARENALEITER,
		{0x0, false},//Encounter and gender
		0x74,// sprite
		LANGDEP(PSTRING("Lester"), PSTRING("Lester")),
		{ITEM_SUPERTRANK, ITEM_SUPERTRANK, ITEM_NONE, ITEM_NONE},
		false,//Dual battle
		TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
		0x0,// field_1E
		3,// Pokemon Count
		0x0,// field_21
		0x0,// field_22
		0x0,// field_23
		(trainer_pokemon*) trainer_party_xb6
	},{
		//Trainer 0xb7
		true,// Custom moves
		true,// Custom items
		0x0,// field_0_filler
		TRAINERCLASS_ARENALEITER,
		{0x1, true},//Encounter and gender
		0x75,// sprite
		LANGDEP(PSTRING("Mia"), PSTRING("Mia")),
		{ITEM_SUPERTRANK, ITEM_SUPERTRANK, ITEM_HYPERTRANK, ITEM_HYPERHEILER},
		false,//Dual battle
		TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
		0x0,// field_1E
		4,// Pokemon Count
		0x0,// field_21
		0x0,// field_22
		0x0,// field_23
		(trainer_pokemon*) trainer_party_xb7
	},{
		//Trainer 0xb8
		true,// Custom moves
		true,// Custom items
		0x0,// field_0_filler
		TRAINERCLASS_ARENALEITER,
		{0x0, false},//Encounter and gender
		0x76,// sprite
		LANGDEP(PSTRING("Manus"), PSTRING("Manus")),
		{ITEM_HYPERTRANK, ITEM_HYPERHEILER, ITEM_HYPERTRANK, ITEM_HYPERTRANK},
		false,//Dual battle
		TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
		0x0,// field_1E
		4,// Pokemon Count
		0x0,// field_21
		0x0,// field_22
		0x0,// field_23
		(trainer_pokemon*) trainer_party_xb8
	},{
		//Trainer 0xb9
		true,// Custom moves
		true,// Custom items
		0x0,// field_0_filler
		TRAINERCLASS_RIVALE,
		{0x0, false},//Encounter and gender
		0x6a,// sprite
		LANGDEP(PSTRING("Björn"), PSTRING("Björn")),
		{ITEM_SUPERTRANK, ITEM_SUPERTRANK, ITEM_HYPERHEILER, ITEM_NONE},
		false,//Dual battle
		TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
		0x0,// field_1E
		3,// Pokemon Count
		0x0,// field_21
		0x0,// field_22
		0x0,// field_23
		(trainer_pokemon*) trainer_party_xb9
	},{
		//Trainer 0xba
		true,// Custom moves
		true,// Custom items
		0x0,// field_0_filler
		TRAINERCLASS_RIVALE,
		{0x0, false},//Encounter and gender
		0x6a,// sprite
		LANGDEP(PSTRING("Björn"), PSTRING("Björn")),
		{ITEM_SUPERTRANK, ITEM_SUPERTRANK, ITEM_HYPERHEILER, ITEM_NONE},
		false,//Dual battle
		TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
		0x0,// field_1E
		3,// Pokemon Count
		0x0,// field_21
		0x0,// field_22
		0x0,// field_23
		(trainer_pokemon*) trainer_party_xba
	},{
		//Trainer 0xbb
		true,// Custom moves
		true,// Custom items
		0x0,// field_0_filler
		TRAINERCLASS_RIVALE,
		{0x0, false},//Encounter and gender
		0x6a,// sprite
		LANGDEP(PSTRING("Björn"), PSTRING("Björn")),
		{ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
		false,//Dual battle
		TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
		0x0,// field_1E
		3,// Pokemon Count
		0x0,// field_21
		0x0,// field_22
		0x0,// field_23
		(trainer_pokemon*) trainer_party_xbb
	},{
			//Trainer 0xbc
			true,// Custom moves
			true,// Custom items
			0x0,// field_0_filler
			TRAINERCLASS_RIVALE,
			{0x0, false},//Encounter and gender
			0x6a,// sprite
			LANGDEP(PSTRING("Björn"), PSTRING("Björn")),
			{ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
			false,//Dual battle
			TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
			0x0,// field_1E
			4,// Pokemon Count
			0x0,// field_21
			0x0,// field_22
			0x0,// field_23
			(trainer_pokemon*) trainer_party_xbc
		},{
			//Trainer 0xbd
			true,// Custom moves
			true,// Custom items
			0x0,// field_0_filler
			TRAINERCLASS_RIVALE,
			{0x0, false},//Encounter and gender
			0x6a,// sprite
			LANGDEP(PSTRING("Björn"), PSTRING("Björn")),
			{ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
			false,//Dual battle
			TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
			0x0,// field_1E
			4,// Pokemon Count
			0x0,// field_21
			0x0,// field_22
			0x0,// field_23
			(trainer_pokemon*) trainer_party_xbd
		},{
			//Trainer 0xbe
			true,// Custom moves
			true,// Custom items
			0x0,// field_0_filler
			TRAINERCLASS_RIVALE,
			{0x0, false},//Encounter and gender
			0x6a,// sprite
			LANGDEP(PSTRING("Björn"), PSTRING("Björn")),
			{ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
			false,//Dual battle
			TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
			0x0,// field_1E
			4,// Pokemon Count
			0x0,// field_21
			0x0,// field_22
			0x0,// field_23
			(trainer_pokemon*) trainer_party_xbe
		},
		[0xbf] = {
				.trainerclass = TRAINERCLASS_HITZKOPF, .sprite = 0x12,
				.encounter_and_gender = {0, 0}, .name = LANGDEP(PSTRING("Frenzis"),
						PSTRING("Frencis")), .pokemon_cnt = 3,
				.ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
				.party = (trainer_pokemon*) trainer_party_xbf_inferior_gym
		},
		[0xc0] = {
				.trainerclass = TRAINERCLASS_SCHOENHEIT, .sprite = 0xC,
				.encounter_and_gender = {1, 1}, .name = LANGDEP(PSTRING("Iylsa"),
						PSTRING("Iylsa")), .pokemon_cnt = 1,
				.ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
				.party = (trainer_pokemon*) trainer_party_xc0_inferior_gym
		},
		[0xc1] = {
				.trainerclass = TRAINERCLASS_PICKNICKER3, .sprite = 0x56,
				.encounter_and_gender = {0, 0}, .name = LANGDEP(PSTRING("Ferrys"),
						PSTRING("Ferrys")), .pokemon_cnt = 2,
				.ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
				.party = (trainer_pokemon*) trainer_party_xc1_inferior_gym
		},
		[0xc2] = {
				.trainerclass = TRAINERCLASS_GENTLEMAN, .sprite = 0x17,
				.encounter_and_gender = {1, 0}, .name = LANGDEP(PSTRING("Olaver"),
						PSTRING("Olaver")), .pokemon_cnt = 3,
				.ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
				.party = (trainer_pokemon*) trainer_party_xc2_inferior_gym
		},
		[0xc3] = {
				.trainerclass = TRAINERCLASS_DRACHENPROFI, .sprite = 45,
				.encounter_and_gender = {1, 0}, .name = LANGDEP(PSTRING("Vismayr"),
						PSTRING("Vismayr")), .pokemon_cnt = 1,
				.ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
				.party = (trainer_pokemon*) trainer_party_xc3_inferior_gym
		},
		[0xc4] = {
				.trainerclass = TRAINERCLASS_ARENALEITER, .sprite = 121,
				.encounter_and_gender = {0, 1}, .name = LANGDEP(PSTRING("Igva"),
						PSTRING("Igva")), .pokemon_cnt = 4,
				.ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS |  TRAINER_AI_VARIABILITY |
				TRAINER_AI_SUPER_EFFECTIVE,
				.items = {ITEM_HYPERTRANK, ITEM_HYPERTRANK, ITEM_SUPERTRANK, ITEM_NONE},
				.party = (trainer_pokemon*) trainer_party_xc4_inferior_gymleader,
				.uses_custom_items = true, .uses_custom_moves = true
		},
		[0xc5] = {
		    .trainerclass = TRAINERCLASS_SCHWARZGURT, .sprite = 16,
        .encounter_and_gender = {2, 0}, .name = LANGDEP(PSTRING("Puk"),
            PSTRING("Puc")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xc5_route_8_trainer_0
		},
    [0xc6] = {
        .trainerclass = TRAINERCLASS_ANGLER, .sprite = 0x26,
        .encounter_and_gender = {0, 0}, .name = LANGDEP(PSTRING("Lanzelod"),
            PSTRING("Lancelod")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xc6_route_8_trainer_1
    },
    [0xc7] = {
        .trainerclass = TRAINERCLASS_KAEFERSAMMLER, .sprite = 0x43,
        .encounter_and_gender = {1, 0}, .name = LANGDEP(PSTRING("Myrko"),
            PSTRING("Myrco")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xc7_route_8_trainer_2
    },
    [0xc8] = {
        .trainerclass = TRAINERCLASS_PKMN_ZUECHTER, .sprite = 59,
        .encounter_and_gender = {1, 0}, .name = LANGDEP(PSTRING("Kathy"),
            PSTRING("Kathy")), .pokemon_cnt = 5,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xc8_route_8_trainer_3
    },
    [0xc9] = {
        .trainerclass = TRAINERCLASS_TRIATHLET, .sprite = 42,
        .encounter_and_gender = {4, 1}, .name = LANGDEP(PSTRING("Nyna"),
            PSTRING("Nyna")), .pokemon_cnt = 1,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xc9_route_8_trainer_4
    },
    [0xCA] = {
        .trainerclass = TRAINERCLASS_SCHWIMMERIN, .sprite = 50,
        .encounter_and_gender = {2, 1}, .name = LANGDEP(PSTRING("Thereza"),
            PSTRING("Thereza")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xcA_route_9_trainer_0
    },
    [0xCB] = {
        .trainerclass = TRAINERCLASS_PLANSCHER, .sprite = 7,
        .encounter_and_gender = {2, 0}, .name = LANGDEP(PSTRING("Weyrner"),
            PSTRING("Weyrner")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xcb_route_9_trainer_1
    },
    [0xCC] = {
        .trainerclass = TRAINERCLASS_SCHWIMMER, .sprite = 15,
        .encounter_and_gender = {2, 0}, .name = LANGDEP(PSTRING("Kylian"),
            PSTRING("Kylian")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xcc_route_9_trainer_2
    },
    [0xCD] = {
        .trainerclass = TRAINERCLASS_SCHWIMMERIN, .sprite = 50,
        .encounter_and_gender = {2, 1}, .name = LANGDEP(PSTRING("Selena"),
            PSTRING("Selena")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xcd_route_9_trainer_3
    },
    [0xCE] = {
        .trainerclass = TRAINERCLASS_SCHWIMMER, .sprite = 15,
        .encounter_and_gender = {2, 0}, .name = LANGDEP(PSTRING("Doug"),
            PSTRING("Doug")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xce_route_9_trainer_4
    },
    [0xCF] = {
        .trainerclass = TRAINERCLASS_TRIATHLET, .sprite = 41,
        .encounter_and_gender = {2, 0}, .name = LANGDEP(PSTRING("Jeyns"),
            PSTRING("Jeyns")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xcf_route_9_trainer_5
    },
    [0xD0] = {
        .trainerclass = TRAINERCLASS_SCHWIMMERIN, .sprite = 50,
        .encounter_and_gender = {2, 1}, .name = LANGDEP(PSTRING("Maara"),
            PSTRING("Maara")), .pokemon_cnt = 1,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xd0_route_9_trainer_6
    },
    [0xD1] = {
        .trainerclass = TRAINERCLASS_SCHWIMMERIN, .sprite = 50,
        .encounter_and_gender = {2, 1}, .name = LANGDEP(PSTRING("Olyvia"),
            PSTRING("Olyvia")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xd1_route_9_trainer_7
    },
    [0xD2] = {
        .trainerclass = TRAINERCLASS_ANGLER, .sprite = 0x26,
        .encounter_and_gender = {0, 0}, .name = LANGDEP(PSTRING("Meysut"),
            PSTRING("Meysut")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xd2_route_9_trainer_8
    },
    [0xD3] = {
        .trainerclass = TRAINERCLASS_SCHWIMMER, .sprite = 15,
        .encounter_and_gender = {2, 0}, .name = LANGDEP(PSTRING("Kyarl"),
            PSTRING("Kyarl")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xd3_route_9_trainer_9
    },
    [0xD4] = {
        .trainerclass = TRAINERCLASS_SCHWIMMER, .sprite = 15,
        .encounter_and_gender = {2, 0}, .name = LANGDEP(PSTRING("Ozlav"),
            PSTRING("Ozlav")), .pokemon_cnt = 1,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xd4_route_9_trainer_10
    },
    [0xD5] = {
        .trainerclass = TRAINERCLASS_SCHWIMMERIN, .sprite = 50,
        .encounter_and_gender = {2, 1}, .name = LANGDEP(PSTRING("Kreanita"),
            PSTRING("Creanita")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xd5_route_9_trainer_11
    },
    [0xD6] = {
        .trainerclass = TRAINERCLASS_SCHWIMMERIN, .sprite = 50,
        .encounter_and_gender = {2, 1}, .name = LANGDEP(PSTRING("Nimba"),
            PSTRING("Nimba")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xd6_route_9_trainer_12
    },
    [0xD7] = {
        .trainerclass = TRAINERCLASS_SCHWIMMER, .sprite = 15,
        .encounter_and_gender = {2, 0}, .name = LANGDEP(PSTRING("Myatt"),
            PSTRING("Myatt")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xd7_route_9_trainer_13
    },
    [0xD8] = {
        .trainerclass = TRAINERCLASS_SCHWIMMERIN, .sprite = 50,
        .encounter_and_gender = {2, 1}, .name = LANGDEP(PSTRING("Joyanna"),
            PSTRING("Joyanna")), .pokemon_cnt = 1,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xd8_route_10_trainer_0
    },
    [0xD9] = {
        .trainerclass = TRAINERCLASS_ANGLER, .sprite = 0x26,
        .encounter_and_gender = {0, 0}, .name = LANGDEP(PSTRING("Mats"),
            PSTRING("Mats")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xd9_route_10_trainer_1
    },
    [0xDA] = {
        .trainerclass = TRAINERCLASS_SCHWIMMER, .sprite = 15,
        .encounter_and_gender = {2, 0}, .name = LANGDEP(PSTRING("Jaycob"),
            PSTRING("Jaycob")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xda_route_10_trainer_2
    },
    [0xDB] = {
        .trainerclass = TRAINERCLASS_SCHWIMMER, .sprite = 15,
        .encounter_and_gender = {2, 0}, .name = LANGDEP(PSTRING("Jesper"),
            PSTRING("Jesper")), .pokemon_cnt = 1,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xdb_route_10_trainer_3
    },
    [0xDC] = {
        .trainerclass = TRAINERCLASS_TRIATHLET, .sprite = 44,
        .encounter_and_gender = {2, 1}, .name = LANGDEP(PSTRING("Irma"),
            PSTRING("Irma")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xdc_route_10_trainer_4
    },
    [0xDD] = {
        .trainerclass = TRAINERCLASS_SCHWIMMERIN, .sprite = 50,
        .encounter_and_gender = {2, 1}, .name = LANGDEP(PSTRING("Heleyna"),
            PSTRING("Heleyna")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xdd_route_10_trainer_5
    },
    [0xDE] = {
        .trainerclass = TRAINERCLASS_TRIATHLET, .sprite = 43,
        .encounter_and_gender = {2, 0}, .name = LANGDEP(PSTRING("Herybert"),
            PSTRING("Herybert")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xde_route_10_trainer_6
    },
    [0xDF] = {
        .trainerclass = TRAINERCLASS_SCHWARZGURT, .sprite = 16,
        .encounter_and_gender = {2, 0}, .name = LANGDEP(PSTRING("Wazzly"),
            PSTRING("Wazzly")), .pokemon_cnt = 1,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xdf_route_10_trainer_7
    },
    [0xE0] = {
        .trainerclass = TRAINERCLASS_WOLKENREITER, .sprite = 71,
        .encounter_and_gender = {1, 1}, .name = LANGDEP(PSTRING("Namira"),
            PSTRING("Namira")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xe0_route_10_trainer_8
    },
    [0xE1] = {
        .trainerclass = TRAINERCLASS_SCHWIMMER, .sprite = 15,
        .encounter_and_gender = {2, 0}, .name = LANGDEP(PSTRING("Shev"),
            PSTRING("Shev")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xe1_route_11_trainer_0
    },
    [0xE2] = {
        .trainerclass = TRAINERCLASS_TRIATHLET, .sprite = 41,
        .encounter_and_gender = {2, 0}, .name = LANGDEP(PSTRING("Claus"),
            PSTRING("Claus")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xe2_route_11_trainer_1
    },
    [0xE3] = {
        .trainerclass = TRAINERCLASS_SCHWIMMERIN, .sprite = 50,
        .encounter_and_gender = {2, 1}, .name = LANGDEP(PSTRING("Herra"),
            PSTRING("Herra")), .pokemon_cnt = 1,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xe3_route_11_trainer_2
    },
    [0xE4] = {
        .trainerclass = TRAINERCLASS_SCHWIMMER, .sprite = 15,
        .encounter_and_gender = {2, 0}, .name = LANGDEP(PSTRING("Antonin"),
            PSTRING("Antonin")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xe4_route_11_trainer_3
    },
    [0xE5] = {
        .trainerclass = TRAINERCLASS_HEXE, .sprite = 10,
        .encounter_and_gender = {1, 0}, .name = LANGDEP(PSTRING("Myrra"),
            PSTRING("Myrra")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xe5_route_11_trainer_4
    },
    [0xE6] = {
        .trainerclass = TRAINERCLASS_PSYCHO, .sprite = 21,
        .encounter_and_gender = {1, 0}, .name = LANGDEP(PSTRING("Petrim"),
            PSTRING("Petrim")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xe6_route_11_trainer_5
    },
    [0xE7] = {
        .trainerclass = TRAINERCLASS_TRIATHLET, .sprite = 44,
        .encounter_and_gender = {2, 1}, .name = LANGDEP(PSTRING("Cory"),
            PSTRING("Cory")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xe7_route_11_trainer_6
    },
    [0xE8] = {
        .trainerclass = TRAINERCLASS_SCHWIMMERIN, .sprite = 50,
        .encounter_and_gender = {2, 1}, .name = LANGDEP(PSTRING("Voyja"),
            PSTRING("Voyja")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xe8_route_11_trainer_7
    },
    [0xE9] = {
        .trainerclass = TRAINERCLASS_ANGLER, .sprite = 0x26,
        .encounter_and_gender = {0, 0}, .name = LANGDEP(PSTRING("Luccini"),
            PSTRING("Luccini")), .pokemon_cnt = 4,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xe9_route_11_trainer_8
    },
    [0xEA] = {
        .trainerclass = TRAINERCLASS_HEXE, .sprite = 10,
        .encounter_and_gender = {1, 1}, .name = LANGDEP(PSTRING("Elsa"),
            PSTRING("Elsa")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xea_forest_cemetery_trainer_0
    },
    [0xEB] = {
        .trainerclass = TRAINERCLASS_KAEFERSAMMLER, .sprite = 66,
        .encounter_and_gender = {1, 0}, .name = LANGDEP(PSTRING("Distas"),
            PSTRING("Distas")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xeb_forest_cemetery_trainer_1
    },
    [0xEC] = {
        .trainerclass = TRAINERCLASS_EXORZISTIN, .sprite = 126,
        .encounter_and_gender = {1, 1}, .name = LANGDEP(PSTRING("Ureia"),
            PSTRING("Ureya")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xec_forest_cemetery_trainer_2
    },
    [0xED] = {
        .trainerclass = TRAINERCLASS_ASS_TRAINER, .sprite = 8,
        .encounter_and_gender = {2, 0}, .name = LANGDEP(PSTRING("Deiter"),
            PSTRING("Deiter")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_SUPER_EFFECTIVE | TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xed_forest_cemetery_trainer_3,
        .items = {ITEM_TOP_GENESUNG, ITEM_TOP_GENESUNG, ITEM_NONE, ITEM_NONE}
    },
    [0xEE] = {
        .trainerclass = TRAINERCLASS_HEXE, .sprite = 10,
        .encounter_and_gender = {0, 1}, .name = LANGDEP(PSTRING("Erica"),
            PSTRING("Erica")), .pokemon_cnt = 1,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xee_forest_cemetery_trainer_4
    },
    [0xEF] = {
        .trainerclass = TRAINERCLASS_PSYCHO, .sprite = 21,
        .encounter_and_gender = {0, 0}, .name = LANGDEP(PSTRING("Nepumuk"),
            PSTRING("Nepumuk")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xef_forest_cemetery_trainer_5
    },
    [0xF0] = {
        .trainerclass = TRAINERCLASS_EXORZISTIN, .sprite = 126,
        .encounter_and_gender = {0, 0}, .name = LANGDEP(PSTRING("Aurelia"),
            PSTRING("Aurelia")), .pokemon_cnt = 1,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xf0_forest_cemetery_trainer_6
    },
    [0xF1] = {
        .trainerclass = TRAINERCLASS_TEAM_VIOLET, .sprite = 78,
        .encounter_and_gender = {0, 1}, .name = LANGDEP(PSTRING("Rüpel H."),
            PSTRING("Grunt H.")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xf1_forest_cemetery_trainer_7
    },
    [0xF2] = {
        .trainerclass = TRAINERCLASS_TEAM_VIOLET, .sprite = 109,
        .encounter_and_gender = {0, 0}, .name = LANGDEP(PSTRING("Rüpel F."),
            PSTRING("Grunt F.")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xf2_forest_cemetery_trainer_8
    },
    [0xF3] = {
        .trainerclass = TRAINERCLASS_PSYCHO, .sprite = 21,
        .encounter_and_gender = {0, 0}, .name = LANGDEP(PSTRING("Nemo"),
            PSTRING("Nemo")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) &fmem.dynamic_trainer_party
    },
    [0xF4] = {
        .trainerclass = TRAINERCLASS_PSYCHO, .sprite = 21,
        .encounter_and_gender = {0, 0}, .name = LANGDEP(PSTRING("Myrko"),
            PSTRING("Myrko")), .pokemon_cnt = 1,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) &fmem.dynamic_trainer_party
    },
    [0xF5] = {
        .trainerclass = TRAINERCLASS_PSYCHO, .sprite = 21,
        .encounter_and_gender = {0, 0}, .name = LANGDEP(PSTRING("Obrast"),
            PSTRING("Obrast")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) &fmem.dynamic_trainer_party
    },
    [0xF6] = {
        .trainerclass = TRAINERCLASS_PSYCHO, .sprite = 21,
        .encounter_and_gender = {0, 0}, .name = LANGDEP(PSTRING("Johayn"),
            PSTRING("Johayn")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) &fmem.dynamic_trainer_party
    },
    [0xF7] = {
        .trainerclass = TRAINERCLASS_HEXE, .sprite = 10,
        .encounter_and_gender = {0, 1}, .name = LANGDEP(PSTRING("Gulyra"),
            PSTRING("Gulyra")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) &fmem.dynamic_trainer_party
    },
    [0xF8] = {
        .trainerclass = TRAINERCLASS_HEXE, .sprite = 10,
        .encounter_and_gender = {0, 1}, .name = LANGDEP(PSTRING("Cassna"),
            PSTRING("Cassna")), .pokemon_cnt = 1,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) &fmem.dynamic_trainer_party
    },
    [0xF9] = {
        .trainerclass = TRAINERCLASS_HEXE, .sprite = 10,
        .encounter_and_gender = {0, 1}, .name = LANGDEP(PSTRING("Ana"),
            PSTRING("Ana")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) &fmem.dynamic_trainer_party
    },
    [0xFA] = {
        .trainerclass = TRAINERCLASS_HEXE, .sprite = 10,
        .encounter_and_gender = {0, 1}, .name = LANGDEP(PSTRING("Andreaza"),
            PSTRING("Andreaza")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) &fmem.dynamic_trainer_party
    },
    [0xFB] = {
        .trainerclass = TRAINERCLASS_GENTLEMAN, .sprite = 23,
        .encounter_and_gender = {0, 0}, .name = LANGDEP(PSTRING("Sergej"),
            PSTRING("Sergej")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) &fmem.dynamic_trainer_party
    },
    [0xFC] = {
        .trainerclass = TRAINERCLASS_HEXE, .sprite = 10,
        .encounter_and_gender = {0, 1}, .name = LANGDEP(PSTRING("Debora"),
            PSTRING("Debora")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xfc_route_12_trainer_0
    },
    [0xFD] = {
        .trainerclass = TRAINERCLASS_SCHWIMMER, .sprite = 15,
        .encounter_and_gender = {2, 0}, .name = LANGDEP(PSTRING("Eron"),
            PSTRING("Eron")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xfd_route_12_trainer_1
    },
    [0xFE] = {
        .trainerclass = TRAINERCLASS_SCHWIMMERIN, .sprite = 50,
        .encounter_and_gender = {2, 1}, .name = LANGDEP(PSTRING("Garciala"),
            PSTRING("Garciala")), .pokemon_cnt = 1,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_xfe_route_12_trainer_2
    },
    [0xFF] = {
        .trainerclass = TRAINERCLASS_SCHWIMMERIN, .sprite = 0x6F,
        .encounter_and_gender = {2, 1}, .name = LANGDEP(PSTRING("Obola"),
            PSTRING("Obola")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS | TRAINER_AI_VARIABILITY | TRAINER_AI_SUPER_EFFECTIVE,
        .party = (trainer_pokemon*) trainer_party_xfe_route_12_trainer_2,
        .items = {ITEM_TOP_GENESUNG, ITEM_TOP_GENESUNG, ITEM_NONE, ITEM_NONE}
    },
    [0x100] = {
        .trainerclass = TRAINERCLASS_ANGLER, .sprite = 0x26,
        .encounter_and_gender = {0, 0}, .name = LANGDEP(PSTRING("Opeter"),
            PSTRING("Opeter")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_x100_route_12_trainer_4
    },
    [0x101] = {
        .trainerclass = TRAINERCLASS_SCHWIMMERIN, .sprite = 0x6F,
        .encounter_and_gender = {2, 1}, .name = LANGDEP(PSTRING("Nadyine"),
            PSTRING("Nadyine")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS
        .party = (trainer_pokemon*) trainer_party_x101_route_12_trainer_5,
    },
    [0x102] = {
        .trainerclass = TRAINERCLASS_SCHWIMMER, .sprite = 15,
        .encounter_and_gender = {2, 0}, .name = LANGDEP(PSTRING("Kid"),
            PSTRING("Kid")), .pokemon_cnt = 3,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_x102_route_12_trainer_6,
    },
    [0x103] = {
        .trainerclass = TRAINERCLASS_SCHWIMMERIN, .sprite = 0x6F,
        .encounter_and_gender = {2, 1}, .name = LANGDEP(PSTRING("Cordula"),
            PSTRING("Cordula")), .pokemon_cnt = 1,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS
        .party = (trainer_pokemon*) trainer_party_x103_route_12_trainer_7,
    },
    [0x104] = {
        .trainerclass = TRAINERCLASS_ANGLER, .sprite = 0x26,
        .encounter_and_gender = {0, 0}, .name = LANGDEP(PSTRING("Joshhua"),
            PSTRING("Joshhua")), .pokemon_cnt = 4,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_x104_route_12_trainer_8
    },
    [0x105] = {
        .trainerclass = TRAINERCLASS_ANGLER, .sprite = 0x68,
        .encounter_and_gender = {0, 0}, .name = LANGDEP(PSTRING("Royman"),
            PSTRING("Royman")), .pokemon_cnt = 2,
        .ai = TRAINER_AI_NO_EFFECTLESS_OR_NEGATIVE_EFFECTS,
        .party = (trainer_pokemon*) trainer_party_x105_route_12_trainer_9
    },
};

