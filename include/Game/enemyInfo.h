#ifndef _GAME_ENEMYINFO_H
#define _GAME_ENEMYINFO_H

#include "types.h"

namespace Game {

struct EnemyInfo {
	char* m_name;        // _00
	char m_id;           // _04
	char m_parentID;     // _05
	char m_members;      // _06
	u16 m_flags;         // _07
	char* m_modelName;   // _0C
	char* m_animName;    // _10
	char* m_animMgrName; // _14
	char* m_textureName; // _18
	char* m_paramName;   // _1C
	char* m_collName;    // _20
	char* m_stoneName;   // _24
	s32 m_childID;       // _28
	s32 m_childNum;      // _2C
	char m_bitterDrops;  // _30
};

enum EBitterDropType { // ID
	BDT_Weak      = 0,
	BDT_Normal    = 1,
	BDT_Strong    = 2,
	BDT_Triple    = 3,
	BDT_Empty     = 4,
	BDT_EmptyTwo  = 5,
	BDT_MiniBoss  = 6,
	BDT_Boss      = 7,
	BDT_FinalBoss = 8,
};

struct EnemyTypeID {
	// clang-format off
enum EEnemyTypeID {//ID      Common Name
    EnemyID_Pelplant       = 0,	  // Pellet Posy
    EnemyID_Kochappy       = 1,	  // Dwarf Red Bulborb
    EnemyID_Chappy         = 2,	  // Red Bulborb
    EnemyID_BluePom        = 3,	  // Lapis Lazuli Candypop Bud
    EnemyID_RedPom         = 4,	  // Crimson Candypop Bud
    EnemyID_YellowPom      = 5,	  // Golden Candypop Bud
    EnemyID_BlackPom       = 6,	  // Violet Candypop Bud
    EnemyID_WhitePom       = 7,	  // Ivory Candypop Bud
    EnemyID_RandPom        = 8,	  // Queen Candypop Bud
    EnemyID_Kogane         = 9,	  // Iridescent Flint Beetle
    EnemyID_Wealthy        = 10,  // Iridescent Glint Beetle
    EnemyID_Fart           = 11,  // Doodlebug
    EnemyID_UjiA           = 12,  // Female Sheargrub
    EnemyID_UjiB           = 13,  // Male Sheargrub
    EnemyID_Tobi           = 14,  // Shearwig
    EnemyID_Armor          = 15,  // Cloaking Burrow-nit
    EnemyID_Qurione        = 16,  // Honeywisp
    EnemyID_Frog           = 17,  // Yellow Wollywog
    EnemyID_MaroFrog       = 18,  // Wollywog
    EnemyID_Rock           = 19,  // Falling boulder
    EnemyID_Hiba           = 20,  // Fire geyser
    EnemyID_GasHiba        = 21,  // Gas pipe
    EnemyID_ElecHiba       = 22,  // Electrical wire
    EnemyID_Sarai          = 23,  // Swooping Snitchbug
    EnemyID_Tank           = 24,  // Fiery Blowhog
    EnemyID_Wtank          = 25,  // Watery Blowhog
    EnemyID_Catfish        = 26,  // Water Dumple
    EnemyID_Tadpole        = 27,  // Wogpole
    EnemyID_ElecBug        = 28,  // Anode Beetle
    EnemyID_Mar            = 29,  // Puffy Blowhog
    EnemyID_Queen          = 30,  // Empress Bulblax
    EnemyID_Baby           = 31,  // Bulborb Larva
    EnemyID_Demon          = 32,  // Bumbling Snitchbug
    EnemyID_FireChappy     = 33,  // Fiery Bulblax
    EnemyID_SnakeCrow      = 34,  // Burrowing Snagret
    EnemyID_KumaChappy     = 35,  // Spotty Bulbear
    EnemyID_Bomb           = 36,  // Bomb-rock
    EnemyID_Egg            = 37,  // Egg
    EnemyID_PanModoki      = 38,  // Breadbug
    EnemyID_INVALID        = 39,  // Unused ID
    EnemyID_OoPanModoki    = 40,  // Giant Breadbug
    EnemyID_Fuefuki        = 41,  // Antenna Beetle
    EnemyID_BlueChappy     = 42,  // Orange Bulborb
    EnemyID_YellowChappy   = 43,  // Hairy Bulborb
    EnemyID_BlueKochappy   = 44,  // Dwarf Orange Bulborb
    EnemyID_YellowKochappy = 45,  // Snow Bulborb
    EnemyID_Tanpopo        = 46,  // Dandelion
    EnemyID_Clover         = 47,  // Clover
    EnemyID_HikariKinoko   = 48,  // Common Glowcap
    EnemyID_Ooinu_s        = 49,  // Figwort (red small)
    EnemyID_Ooinu_l        = 50,  // Figwort (red large)
    EnemyID_Wakame_s       = 51,  // Shoot (small)
    EnemyID_Wakame_l       = 52,  // Shoot (large)
    EnemyID_KingChappy     = 53,  // Emperor Bulblax
    EnemyID_Miulin         = 54,  // Mamuta
    EnemyID_Hanachirashi   = 55,  // Withering Blowhog
    EnemyID_Damagumo       = 56,  // Beady Long Legs
    EnemyID_Kurage         = 57,  // Lesser Spotted Jellyfloat
    EnemyID_BombSarai      = 58,  // Careening Dirigibug
    EnemyID_FireOtakara    = 59,  // Fiery Dweevil
    EnemyID_WaterOtakara   = 60,  // Caustic Dweevil
    EnemyID_GasOtakara     = 61,  // Munge Dweevil
    EnemyID_ElecOtakara    = 62,  // Anode Dweevil
    EnemyID_Jigumo         = 63,  // Hermit Crawmad
    EnemyID_INVALID2       = 64,  // Unused ID
    EnemyID_Imomushi       = 65,  // Ravenous Whiskerpillar
    EnemyID_Houdai         = 66,  // Man-at-Legs
    EnemyID_LeafChappy     = 67,  // Bulbmin
    EnemyID_TamagoMushi    = 68,  // Mitite
    EnemyID_BigFoot        = 69,  // Raging Long Legs
    EnemyID_SnakeWhole     = 70,  // Pileated Snagret
    EnemyID_UmiMushi       = 71,  // Ranging Bloyster
    EnemyID_OniKurage      = 72,  // Greater Spotted Jellyfloat
    EnemyID_BigTreasure    = 73,  // Titan Dweevil
    EnemyID_Stone          = 74,  // Rock (projectile)
    EnemyID_Kabuto         = 75,  // Armored Cannon Beetle Larva
    EnemyID_KumaKochappy   = 76,  // Dwarf Bulbear
    EnemyID_ShijimiChou    = 77,  // Unmarked Spectralids
    EnemyID_MiniHoudai     = 78,  // Gatling Groink
    EnemyID_Sokkuri        = 79,  // Skitter Leaf
    EnemyID_Tukushi        = 80,  // Horsetail
    EnemyID_Watage         = 81,  // Seeding Dandelion
    EnemyID_Pom            = 82,  // Candypop Bud base (crashes)
    EnemyID_PanHouse       = 83,  // Breadbug Nest
    EnemyID_Hana           = 84,  // Creeping Chrysanthemum
    EnemyID_DaiodoRed      = 85,  // Glowstem (red)
    EnemyID_DaiodoGreen    = 86,  // Glowstem (green)
    EnemyID_Magaret        = 87,  // Margaret
    EnemyID_Nekojarashi    = 88,  // Foxtail
    EnemyID_Chiyogami      = 89,  // Chigoyami paper
    EnemyID_Zenmai         = 90,  // Fiddlehead
    EnemyID_KareOoinu_s    = 91,  // Figwort (brown small)
    EnemyID_KareOoinu_l    = 92,  // Figwort (brown large)
    EnemyID_BombOtakara    = 93,  // Volatile Dweevil
    EnemyID_DangoMushi     = 94,  // Segmented Crawbster
    EnemyID_Rkabuto        = 95,  // Decorated Cannon Beetle
    EnemyID_Fkabuto        = 96,  // Armored Cannon Beetle Larva (burrowed)
    EnemyID_FminiHoudai    = 97,  // Gatling Groink (pedestal)
    EnemyID_Tyre           = 98,  // Waterwraith rollers
    EnemyID_BlackMan       = 99,  // Waterwraith
    EnemyID_UmiMushiBase   = 100, // Bloyster base (crashes)
    EnemyID_UmiMushiBlind  = 101, // Toady Bloyster
};
};

struct EnemyInfo gEnemyInfo[100] = {
// name                   ID                      pID                   members flags      model           anim            animgr          texture     param       collision       stone           childID              chNum droptype
   {"Pelplant",           EnemyTypeID::EnemyID_Pelplant,       -1,                   1,      0x0007,    "Pelplant",     "Pelplant",     "Pelplant",     "Pelplant", "Pelplant", "Pelplant",     "Pelplant",     -1,                  0,    BDT_Empty},
   {"Kochappy",           EnemyTypeID::EnemyID_Kochappy,       -1,                   1,      0x0117,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Normal},
   {"BlueKochappy",       EnemyTypeID::EnemyID_BlueKochappy,   -1,                   1,      0x0117,    "Kochappy",     "Kochappy",     "Kochappy",     "",         "",         "Kochappy",     "Kochappy",     -1,                  0,    BDT_Normal},
   {"YellowKochappy",     EnemyTypeID::EnemyID_YellowKochappy, -1,                   1,      0x0117,    "Kochappy",     "Kochappy",     "Kochappy",     "",         "",         "Kochappy",     "Kochappy",     -1,                  0,    BDT_Normal},
   {"KumaKochappy",       EnemyTypeID::EnemyID_KumaKochappy,   -1,                   1,      0x0117,    "",             "Kochappy",     "Kochappy",     "",         "",         "Kochappy",     "",             -1,                  0,    BDT_Normal},
   {"Chappy",             EnemyTypeID::EnemyID_Chappy,         -1,                   1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Strong},
   {"BlueChappy",         EnemyTypeID::EnemyID_BlueChappy,     -1,                   1,      0x0097,    "Chappy",       "Chappy",       "Chappy",       "",         "",         "Chappy",       "Chappy",       -1,                  0,    BDT_Strong},
   {"YellowChappy",       EnemyTypeID::EnemyID_YellowChappy,   -1,                   1,      0x0097,    "Chappy",       "Chappy",       "Chappy",       "",         "",         "Chappy",       "Chappy",       -1,                  0,    BDT_Strong},
   {"Pom",                EnemyTypeID::EnemyID_Pom,            -1,                   1,      0x0001,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,                  0,    BDT_Empty},
   {"BluePom",            EnemyTypeID::EnemyID_BluePom,        EnemyTypeID::EnemyID_Pom,          1,      0x0006,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,                  0,    BDT_Empty},
   {"RedPom",             EnemyTypeID::EnemyID_RedPom,         EnemyTypeID::EnemyID_Pom,          1,      0x0006,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,                  0,    BDT_Empty},
   {"YellowPom",          EnemyTypeID::EnemyID_YellowPom,      EnemyTypeID::EnemyID_Pom,          1,      0x0006,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,                  0,    BDT_Empty},
   {"BlackPom",           EnemyTypeID::EnemyID_BlackPom,       EnemyTypeID::EnemyID_Pom,          1,      0x0006,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,                  0,    BDT_Empty},
   {"WhitePom",           EnemyTypeID::EnemyID_WhitePom,       EnemyTypeID::EnemyID_Pom,          1,      0x0006,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,                  0,    BDT_Empty},
   {"RandPom",            EnemyTypeID::EnemyID_RandPom,        EnemyTypeID::EnemyID_Pom,          1,      0x0006,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,                  0,    BDT_Empty},
   {"Kogane",             EnemyTypeID::EnemyID_Kogane,         -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"Wealthy",            EnemyTypeID::EnemyID_Wealthy,        -1,                   1,      0x0007,    "Kogane",       "Kogane",       "Kogane",       "",         "",         "Kogane",       "Kogane",       -1,                  0,    BDT_Empty},
   {"Fart",               EnemyTypeID::EnemyID_Fart,           -1,                   1,      0x0007,    "Kogane",       "Kogane",       "Kogane",       "",         "",         "Kogane",       "Kogane",       -1,                  0,    BDT_Empty},
   {"Frog",               EnemyTypeID::EnemyID_Frog,           -1,                   1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Strong},
   {"MaroFrog",           EnemyTypeID::EnemyID_MaroFrog,       -1,                   1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Strong},
   {"UjiA",               EnemyTypeID::EnemyID_UjiA,           -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Weak},
   {"UjiB",               EnemyTypeID::EnemyID_UjiB,           -1,                   1,      0x0117,    "",             "UjiA",         "",             "",         "",         "",             "",             -1,                  0,    BDT_Weak},
   {"Armor",              EnemyTypeID::EnemyID_Armor,          -1,                   1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Strong},
   {"Tobi",               EnemyTypeID::EnemyID_Tobi,           -1,                   1,      0x0117,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Weak},
   {"Imomushi",           EnemyTypeID::EnemyID_Imomushi,       -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Weak},
   {"Qurione",            EnemyTypeID::EnemyID_Qurione,        -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             EnemyTypeID::EnemyID_Egg,         1,    BDT_Empty},
   {"Rock",               EnemyTypeID::EnemyID_Rock,           -1,                   1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"Stone",              EnemyTypeID::EnemyID_Stone,          EnemyTypeID::EnemyID_Rock,         1,      0x0206,    "Rock",         "Rock",         "Rock",         "Rock",     "Rock",     "Rock",         "Rock",         -1,                  0,    BDT_Empty},
   {"Kabuto",             EnemyTypeID::EnemyID_Kabuto,         -1,                   1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             EnemyTypeID::EnemyID_Stone,       5,    BDT_Normal},
   {"Rkabuto",            EnemyTypeID::EnemyID_Rkabuto,        -1,                   1,      0x0097,    "Kabuto",       "Kabuto",       "Kabuto",       "",         "",         "Kabuto",       "Kabuto",       EnemyTypeID::EnemyID_Stone,       5,    BDT_Normal},
   {"Fkabuto",            EnemyTypeID::EnemyID_Fkabuto,        -1,                   1,      0x0097,    "Kabuto",       "Kabuto",       "Kabuto",       "",         "",         "Kabuto",       "Kabuto",       EnemyTypeID::EnemyID_Stone,       5,    BDT_Normal},
   {"Hiba",               EnemyTypeID::EnemyID_Hiba,           -1,                   1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"GasHiba",            EnemyTypeID::EnemyID_GasHiba,        -1,                   1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"ElecHiba",           EnemyTypeID::EnemyID_ElecHiba,       -1,                   2,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"Sarai",              EnemyTypeID::EnemyID_Sarai,          -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Strong},
   {"Demon",              EnemyTypeID::EnemyID_Demon,          -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Strong},
   {"BombSarai",          EnemyTypeID::EnemyID_BombSarai,      -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             EnemyTypeID::EnemyID_Bomb,        2,    BDT_Strong},
   {"Tank",               EnemyTypeID::EnemyID_Tank,           -1,                   1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Strong},
   {"Wtank",              EnemyTypeID::EnemyID_Wtank,          -1,                   1,      0x0097,    "Tank",         "Tank",         "Tank",         "",         "",         "Tank",         "Tank",         -1,                  0,    BDT_Strong},
   {"Catfish",            EnemyTypeID::EnemyID_Catfish,        -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Normal},
   {"Tadpole",            EnemyTypeID::EnemyID_Tadpole,        -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Weak},
   {"ElecBug",            EnemyTypeID::EnemyID_ElecBug,        -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Normal},
   {"Mar",                EnemyTypeID::EnemyID_Mar,            -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Strong},
   {"Hanachirashi",       EnemyTypeID::EnemyID_Hanachirashi,   -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Strong},
   {"Kurage",             EnemyTypeID::EnemyID_Kurage,         -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Normal},
   {"OniKurage",          EnemyTypeID::EnemyID_OniKurage,      -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Strong},
   {"Queen",              EnemyTypeID::EnemyID_Queen,          -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             EnemyTypeID::EnemyID_Baby,        50,   BDT_Boss},
   {"Baby",               EnemyTypeID::EnemyID_Baby,           -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Weak},
   {"FireChappy",         EnemyTypeID::EnemyID_FireChappy,     -1,                   1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Strong},
   {"Hana",               EnemyTypeID::EnemyID_Hana,           -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Strong},
   {"KumaChappy",         EnemyTypeID::EnemyID_KumaChappy,     -1,                   1,      0x0097,    "",             "Chappy",       "",             "",         "",         "",             "",             -1,                  0,    BDT_Strong},
   {"LeafChappy",         EnemyTypeID::EnemyID_LeafChappy,     -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Strong},
   {"SnakeCrow",          EnemyTypeID::EnemyID_SnakeCrow,      -1,                   1,      0x0037,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Boss},
   {"SnakeWhole",         EnemyTypeID::EnemyID_SnakeWhole,     -1,                   1,      0x0037,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Boss},
   {"Bomb",               EnemyTypeID::EnemyID_Bomb,           -1,                   1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"Egg",                EnemyTypeID::EnemyID_Egg,            -1,                   1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             EnemyTypeID::EnemyID_TamagoMushi, 10,   BDT_Empty},
   {"PanModoki",          EnemyTypeID::EnemyID_PanModoki,      -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             EnemyTypeID::EnemyID_PanHouse,    1,    BDT_Empty},
   {"OoPanModoki",        EnemyTypeID::EnemyID_OoPanModoki,    -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             EnemyTypeID::EnemyID_PanHouse,    1,    BDT_Empty},
   {"PanHouse",           EnemyTypeID::EnemyID_PanHouse,       -1,                   1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"Fuefuki",            EnemyTypeID::EnemyID_Fuefuki,        -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Strong},
   {"Tanpopo",            EnemyTypeID::EnemyID_Tanpopo,        -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             EnemyTypeID::EnemyID_ShijimiChou, 5,    BDT_Empty},
   {"Watage",             EnemyTypeID::EnemyID_Watage,         -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"Clover",             EnemyTypeID::EnemyID_Clover,         -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"HikariKinoko",       EnemyTypeID::EnemyID_HikariKinoko,   -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"Ooinu_s",            EnemyTypeID::EnemyID_Ooinu_s,        -1,                   1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"KareOoinu_s",        EnemyTypeID::EnemyID_KareOoinu_s,    -1,                   1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"Ooinu_l",            EnemyTypeID::EnemyID_Ooinu_l,        -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             EnemyTypeID::EnemyID_ShijimiChou, 5,    BDT_Empty},
   {"KareOoinu_l",        EnemyTypeID::EnemyID_KareOoinu_l,    -1,                   1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"Wakame_s",           EnemyTypeID::EnemyID_Wakame_s,       -1,                   1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"Wakame_l",           EnemyTypeID::EnemyID_Wakame_l,       -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"Tukushi",            EnemyTypeID::EnemyID_Tukushi,        -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"DaiodoRed",          EnemyTypeID::EnemyID_DaiodoRed,      -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"DaiodoGreen",        EnemyTypeID::EnemyID_DaiodoGreen,    -1,                   1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"Magaret",            EnemyTypeID::EnemyID_Magaret,        -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             EnemyTypeID::EnemyID_ShijimiChou, 5,    BDT_Empty},
   {"Nekojarashi",        EnemyTypeID::EnemyID_Nekojarashi,    -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"Chiyogami",          EnemyTypeID::EnemyID_Chiyogami,      -1,                   1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"Zenmai",             EnemyTypeID::EnemyID_Zenmai,         -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"KingChappy",         EnemyTypeID::EnemyID_KingChappy,     -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Boss},
   {"Miulin",             EnemyTypeID::EnemyID_Miulin,         -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Strong},
   {"Damagumo",           EnemyTypeID::EnemyID_Damagumo,       -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Boss},
   {"BigFoot",            EnemyTypeID::EnemyID_BigFoot,        -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             EnemyTypeID::EnemyID_TamagoMushi, 30,   BDT_Boss},
   {"Houdai",             EnemyTypeID::EnemyID_Houdai,         -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Boss},
   {"FireOtakara",        EnemyTypeID::EnemyID_FireOtakara,    -1,                   1,      0x0007,    "",             "",             "Otakara",      "",         "",         "Otakara",      "Otakara",      -1,                  0,    BDT_Normal},
   {"WaterOtakara",       EnemyTypeID::EnemyID_WaterOtakara,   -1,                   1,      0x0007,    "FireOtakara",  "FireOtakara",  "Otakara",      "",         "",         "Otakara",      "Otakara",      -1,                  0,    BDT_Normal},
   {"GasOtakara",         EnemyTypeID::EnemyID_GasOtakara,     -1,                   1,      0x0007,    "FireOtakara",  "FireOtakara",  "Otakara",      "",         "",         "Otakara",      "Otakara",      -1,                  0,    BDT_Normal},
   {"ElecOtakara",        EnemyTypeID::EnemyID_ElecOtakara,    -1,                   1,      0x0007,    "FireOtakara",  "FireOtakara",  "Otakara",      "",         "",         "Otakara",      "Otakara",      -1,                  0,    BDT_Normal},
   {"Jigumo",             EnemyTypeID::EnemyID_Jigumo,         -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             EnemyTypeID::EnemyID_PanHouse,    1,    BDT_Strong},
   {"TamagoMushi",        EnemyTypeID::EnemyID_TamagoMushi,    -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Weak},
   {"UmiMushiBase",       EnemyTypeID::EnemyID_UmiMushiBase,   -1,                   1,      0x0001,    "UmiMushi",     "UmiMushi",     "UmiMushi",     "UmiMushi", "UmiMushi", "UmiMushi",     "UmiMushi",     -1,                  0,    BDT_Boss},
   {"UmiMushi",           EnemyTypeID::EnemyID_UmiMushi,       EnemyTypeID::EnemyID_UmiMushiBase, 1,      0x0006,    "UmiMushi",     "UmiMushi",     "UmiMushi",     "UmiMushi", "UmiMushi", "UmiMushi",     "UmiMushi",     -1,                  0,    BDT_Boss},
   {"UmiMushiBlind",      EnemyTypeID::EnemyID_UmiMushiBlind,  EnemyTypeID::EnemyID_UmiMushiBase, 1,      0x0006,    "UmiMushi",     "UmiMushi",     "UmiMushi",     "UmiMushi", "UmiMushi", "UmiMushi",     "UmiMushi",     -1,                  0,    BDT_Strong},
   {"BigTreasure",        EnemyTypeID::EnemyID_BigTreasure,    -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_FinalBoss},
   {"ShijimiChou",        EnemyTypeID::EnemyID_ShijimiChou,    -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"MiniHoudai",         EnemyTypeID::EnemyID_MiniHoudai,     -1,                   1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Normal},
   {"FminiHoudai",        EnemyTypeID::EnemyID_FminiHoudai,    -1,                   1,      0x0097,    "MiniHoudai",   "MiniHoudai",   "MiniHoudai",   "",         "",         "MiniHoudai",   "MiniHoudai",   -1,                  0,    BDT_Normal},
   {"Sokkuri",            EnemyTypeID::EnemyID_Sokkuri,        -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Weak},
   {"BombOtakara",        EnemyTypeID::EnemyID_BombOtakara,    -1,                   1,      0x0007,    "FireOtakara",  "FireOtakara",  "Otakara",      "",         "",         "Otakara",      "Otakara",      EnemyTypeID::EnemyID_Bomb,        1,    BDT_Normal},
   {"BlackMan",           EnemyTypeID::EnemyID_BlackMan,       -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             EnemyTypeID::EnemyID_Tyre,        1,    BDT_Boss},
   {"Tyre",               EnemyTypeID::EnemyID_Tyre,           -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Empty},
   {"DangoMushi",         EnemyTypeID::EnemyID_DangoMushi,     -1,                   1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,                  0,    BDT_Boss},
};
// clang-format on

s32 gEnemyInfoNum = sizeof(gEnemyInfo) / sizeof(gEnemyInfo[0]);

namespace EnemyInfoFunc {
	EnemyInfo* getEnemyInfo(s32, s32);
	char* getEnemyName(s32, s32);
	char* getEnemyResName(s32, s32);
	char getEnemyMember(s32, s32);
	s32 getEnemyID(char*, s32);
} // namespace EnemyInfoFunc
} // namespace Game
#endif
