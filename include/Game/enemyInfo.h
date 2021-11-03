#ifndef GAME_ENEMYINFO_H
#define GAME_ENEMYINFO_H

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

enum EEnemyTypeID {//ID      Common Name
	Armor          = 15,  // Cloaking Burrow-nit
	Baby           = 31,  // Bulborb Larva
	BigFoot        = 69,  // Raging Long Legs
	BigTreasure    = 73,  // Titan Dweevil
	BlackMan       = 99,  // Waterwraith
	BlackPom       = 6,	  // Violet Candypop Bud
	BlueChappy     = 42,  // Orange Bulborb
	BlueKochappy   = 44,  // Dwarf Orange Bulborb
	BluePom        = 3,	  // Lapis Lazuli Candypop Bud
	Bomb           = 36,  // Bomb-rock
	BombOtakara    = 93,  // Volatile Dweevil
	BombSarai      = 58,  // Careening Dirigibug
	Catfish        = 26,  // Water Dumple
	Chappy         = 2,	  // Red Bulborb
	Chiyogami      = 89,  // Chigoyami paper
	Clover         = 47,  // Clover
	DaiodoGreen    = 86,  // Glowstem (green)
	DaiodoRed      = 85,  // Glowstem (red)
	Damagumo       = 56,  // Beady Long Legs
	DangoMushi     = 94,  // Segmented Crawbster
	Demon          = 32,  // Bumbling Snitchbug
	Egg            = 37,  // Egg
	ElecBug        = 28,  // Anode Beetle
	ElecHiba       = 22,  // Electrical wire
	ElecOtakara    = 62,  // Anode Dweevil
	Fart           = 11,  // Doodlebug
	FireChappy     = 33,  // Fiery Bulblax
	FireOtakara    = 59,  // Fiery Dweevil
	Fkabuto        = 96,  // Armored Cannon Beetle Larva (burrowed)
	FminiHoudai    = 97,  // Gatling Groink (pedestal)
	Frog           = 17,  // Yellow Wollywog
	Fuefuki        = 41,  // Antenna Beetle
	GasHiba        = 21,  // Gas pipe
	GasOtakara     = 61,  // Munge Dweevil
	Hana           = 84,  // Creeping Chrysanthemum
	Hanachirashi   = 55,  // Withering Blowhog
	Hiba           = 20,  // Fire geyser
	HikariKinoko   = 48,  // Common Glowcap
	Houdai         = 66,  // Man-at-Legs
	Imomushi       = 65,  // Ravenous Whiskerpillar
	Jigumo         = 63,  // Hermit Crawmad
	Kabuto         = 75,  // Armored Cannon Beetle Larva
	KareOoinu_l    = 92,  // Figwort (brown large)
	KareOoinu_s    = 91,  // Figwort (brown small)
	KingChappy     = 53,  // Emperor Bulblax
	Kochappy       = 1,	  // Dwarf Red Bulborb
	Kogane         = 9,	  // Iridescent Flint Beetle
	KumaChappy     = 35,  // Spotty Bulbear
	KumaKochappy   = 76,  // Dwarf Bulbear
	Kurage         = 57,  // Lesser Spotted Jellyfloat
	LeafChappy     = 67,  // Bulbmin
	Magaret        = 87,  // Margaret
	Mar            = 29,  // Puffy Blowhog
	MaroFrog       = 18,  // Wollywog
	MiniHoudai     = 78,  // Gatling Groink
	Miulin         = 54,  // Mamuta
	INVALID        = 39,  // Unused ID
	INVALID2       = 64,  // Unused ID
	Nekojarashi    = 88,  // Foxtail
	OniKurage      = 72,  // Greater Spotted Jellyfloat
	OoPanModoki    = 40,  // Giant Breadbug
	Ooinu_l        = 50,  // Figwort (red large)
	Ooinu_s        = 49,  // Figwort (red small)
	PanHouse       = 83,  // Breadbug Nest
	PanModoki      = 38,  // Breadbug
	Pelplant       = 0,	  // Pellet Posy
	Pom            = 82,  // Candypop Bud base (crashes)
	Queen          = 30,  // Empress Bulblax
	Qurione        = 16,  // Honeywisp
	RandPom        = 8,	  // Queen Candypop Bud
	RedPom         = 4,	  // Crimson Candypop Bud
	Rkabuto        = 95,  // Decorated Cannon Beetle
	Rock           = 19,  // Falling boulder
	Sarai          = 23,  // Swooping Snitchbug
	ShijimiChou    = 77,  // Unmarked Spectralids
	SnakeCrow      = 34,  // Burrowing Snagret
	SnakeWhole     = 70,  // Pileated Snagret
	Sokkuri        = 79,  // Skitter Leaf
	Stone          = 74,  // Rock (projectile)
	Tadpole        = 27,  // Wogpole
	TamagoMushi    = 68,  // Mitite
	Tank           = 24,  // Fiery Blowhog
	Tanpopo        = 46,  // Dandelion
	Tobi           = 14,  // Shearwig
	Tukushi        = 80,  // Horsetail
	Tyre           = 98,  // Waterwraith rollers
	UjiA           = 12,  // Female Sheargrub
	UjiB           = 13,  // Male Sheargrub
	UmiMushi       = 71,  // Ranging Bloyster
	UmiMushiBase   = 100, // Bloyster base (crashes)
	UmiMushiBlind  = 101, // Toady Bloyster
	Wakame_l       = 52,  // Shoot (large)
	Wakame_s       = 51,  // Shoot (small)
	Watage         = 81,  // Seeding Dandelion
	WaterOtakara   = 60,  // Caustic Dweevil
	Wealthy        = 10,  // Iridescent Glint Beetle
	WhitePom       = 7,	  // Ivory Candypop Bud
	Wtank          = 25,  // Watery Blowhog
	YellowChappy   = 43,  // Hairy Bulborb
	YellowKochappy = 45,  // Snow Bulborb
	YellowPom      = 5,	  // Golden Candypop Bud
	Zenmai         = 90,  // Fiddlehead
};

// clang-format off
struct EnemyInfo gEnemyInfo[100] = {
// name                   ID              pID           members flags      model           anim            animgr          texture     param       collision       stone           childID      chNum droptype
   {"Pelplant",           Pelplant,       -1,           1,      0x0007,    "Pelplant",     "Pelplant",     "Pelplant",     "Pelplant", "Pelplant", "Pelplant",     "Pelplant",     -1,          0,    4},
   {"Kochappy",           Kochappy,       -1,           1,      0x0117,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    1},
   {"BlueKochappy",       BlueKochappy,   -1,           1,      0x0117,    "Kochappy",     "Kochappy",     "Kochappy",     "",         "",         "Kochappy",     "Kochappy",     -1,          0,    1},
   {"YellowKochappy",     YellowKochappy, -1,           1,      0x0117,    "Kochappy",     "Kochappy",     "Kochappy",     "",         "",         "Kochappy",     "Kochappy",     -1,          0,    1},
   {"KumaKochappy",       KumaKochappy,   -1,           1,      0x0117,    "",             "Kochappy",     "Kochappy",     "",         "",         "Kochappy",     "",             -1,          0,    1},
   {"Chappy",             Chappy,         -1,           1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    2},
   {"BlueChappy",         BlueChappy,     -1,           1,      0x0097,    "Chappy",       "Chappy",       "Chappy",       "",         "",         "Chappy",       "Chappy",       -1,          0,    2},
   {"YellowChappy",       YellowChappy,   -1,           1,      0x0097,    "Chappy",       "Chappy",       "Chappy",       "",         "",         "Chappy",       "Chappy",       -1,          0,    2},
   {"Pom",                Pom,            -1,           1,      0x0001,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,          0,    4},
   {"BluePom",            BluePom,        Pom,          1,      0x0006,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,          0,    4},
   {"RedPom",             RedPom,         Pom,          1,      0x0006,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,          0,    4},
   {"YellowPom",          YellowPom,      Pom,          1,      0x0006,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,          0,    4},
   {"BlackPom",           BlackPom,       Pom,          1,      0x0006,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,          0,    4},
   {"WhitePom",           WhitePom,       Pom,          1,      0x0006,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,          0,    4},
   {"RandPom",            RandPom,        Pom,          1,      0x0006,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,          0,    4},
   {"Kogane",             Kogane,         -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"Wealthy",            Wealthy,        -1,           1,      0x0007,    "Kogane",       "Kogane",       "Kogane",       "",         "",         "Kogane",       "Kogane",       -1,          0,    4},
   {"Fart",               Fart,           -1,           1,      0x0007,    "Kogane",       "Kogane",       "Kogane",       "",         "",         "Kogane",       "Kogane",       -1,          0,    4},
   {"Frog",               Frog,           -1,           1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    2},
   {"MaroFrog",           MaroFrog,       -1,           1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    2},
   {"UjiA",               UjiA,           -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    0},
   {"UjiB",               UjiB,           -1,           1,      0x0117,    "",             "UjiA",         "",             "",         "",         "",             "",             -1,          0,    0},
   {"Armor",              Armor,          -1,           1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    2},
   {"Tobi",               Tobi,           -1,           1,      0x0117,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    0},
   {"Imomushi",           Imomushi,       -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    0},
   {"Qurione",            Qurione,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             Egg,         1,    4},
   {"Rock",               Rock,           -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"Stone",              Stone,          Rock,         1,      0x0206,    "Rock",         "Rock",         "Rock",         "Rock",     "Rock",     "Rock",         "Rock",         -1,          0,    4},
   {"Kabuto",             Kabuto,         -1,           1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             Stone,       5,    1},
   {"Rkabuto",            Rkabuto,        -1,           1,      0x0097,    "Kabuto",       "Kabuto",       "Kabuto",       "",         "",         "Kabuto",       "Kabuto",       Stone,       5,    1},
   {"Fkabuto",            Fkabuto,        -1,           1,      0x0097,    "Kabuto",       "Kabuto",       "Kabuto",       "",         "",         "Kabuto",       "Kabuto",       Stone,       5,    1},
   {"Hiba",               Hiba,           -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"GasHiba",            GasHiba,        -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"ElecHiba",           ElecHiba,       -1,           2,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"Sarai",              Sarai,          -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    2},
   {"Demon",              Demon,          -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    2},
   {"BombSarai",          BombSarai,      -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             Bomb,        2,    2},
   {"Tank",               Tank,           -1,           1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    2},
   {"Wtank",              Wtank,          -1,           1,      0x0097,    "Tank",         "Tank",         "Tank",         "",         "",         "Tank",         "Tank",         -1,          0,    2},
   {"Catfish",            Catfish,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    1},
   {"Tadpole",            Tadpole,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    0},
   {"ElecBug",            ElecBug,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    1},
   {"Mar",                Mar,            -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    2},
   {"Hanachirashi",       Hanachirashi,   -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    2},
   {"Kurage",             Kurage,         -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    1},
   {"OniKurage",          OniKurage,      -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    2},
   {"Queen",              Queen,          -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             Baby,        50,   7},
   {"Baby",               Baby,           -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    0},
   {"FireChappy",         FireChappy,     -1,           1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    2},
   {"Hana",               Hana,           -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    2},
   {"KumaChappy",         KumaChappy,     -1,           1,      0x0097,    "",             "Chappy",       "",             "",         "",         "",             "",             -1,          0,    2},
   {"LeafChappy",         LeafChappy,     -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    2},
   {"SnakeCrow",          SnakeCrow,      -1,           1,      0x0037,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    7},
   {"SnakeWhole",         SnakeWhole,     -1,           1,      0x0037,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    7},
   {"Bomb",               Bomb,           -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"Egg",                Egg,            -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             TamagoMushi, 10,   4},
   {"PanModoki",          PanModoki,      -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             PanHouse,    1,    4},
   {"OoPanModoki",        OoPanModoki,    -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             PanHouse,    1,    4},
   {"PanHouse",           PanHouse,       -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"Fuefuki",            Fuefuki,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    2},
   {"Tanpopo",            Tanpopo,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             ShijimiChou, 5,    4},
   {"Watage",             Watage,         -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"Clover",             Clover,         -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"HikariKinoko",       HikariKinoko,   -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"Ooinu_s",            Ooinu_s,        -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"KareOoinu_s",        KareOoinu_s,    -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"Ooinu_l",            Ooinu_l,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             ShijimiChou, 5,    4},
   {"KareOoinu_l",        KareOoinu_l,    -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"Wakame_s",           Wakame_s,       -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"Wakame_l",           Wakame_l,       -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"Tukushi",            Tukushi,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"DaiodoRed",          DaiodoRed,      -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"DaiodoGreen",        DaiodoGreen,    -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"Magaret",            Magaret,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             ShijimiChou, 5,    4},
   {"Nekojarashi",        Nekojarashi,    -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"Chiyogami",          Chiyogami,      -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"Zenmai",             Zenmai,         -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"KingChappy",         KingChappy,     -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    7},
   {"Miulin",             Miulin,         -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    2},
   {"Damagumo",           Damagumo,       -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    7},
   {"BigFoot",            BigFoot,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             TamagoMushi, 30,   7},
   {"Houdai",             Houdai,         -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    7},
   {"FireOtakara",        FireOtakara,    -1,           1,      0x0007,    "",             "",             "Otakara",      "",         "",         "Otakara",      "Otakara",      -1,          0,    1},
   {"WaterOtakara",       WaterOtakara,   -1,           1,      0x0007,    "FireOtakara",  "FireOtakara",  "Otakara",      "",         "",         "Otakara",      "Otakara",      -1,          0,    1},
   {"GasOtakara",         GasOtakara,     -1,           1,      0x0007,    "FireOtakara",  "FireOtakara",  "Otakara",      "",         "",         "Otakara",      "Otakara",      -1,          0,    1},
   {"ElecOtakara",        ElecOtakara,    -1,           1,      0x0007,    "FireOtakara",  "FireOtakara",  "Otakara",      "",         "",         "Otakara",      "Otakara",      -1,          0,    1},
   {"Jigumo",             Jigumo,         -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             PanHouse,    1,    2},
   {"TamagoMushi",        TamagoMushi,    -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    0},
   {"UmiMushiBase",       UmiMushiBase,   -1,           1,      0x0001,    "UmiMushi",     "UmiMushi",     "UmiMushi",     "UmiMushi", "UmiMushi", "UmiMushi",     "UmiMushi",     -1,          0,    7},
   {"UmiMushi",           UmiMushi,       UmiMushiBase, 1,      0x0006,    "UmiMushi",     "UmiMushi",     "UmiMushi",     "UmiMushi", "UmiMushi", "UmiMushi",     "UmiMushi",     -1,          0,    7},
   {"UmiMushiBlind",      UmiMushiBlind,  UmiMushiBase, 1,      0x0006,    "UmiMushi",     "UmiMushi",     "UmiMushi",     "UmiMushi", "UmiMushi", "UmiMushi",     "UmiMushi",     -1,          0,    2},
   {"BigTreasure",        BigTreasure,    -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    8},
   {"ShijimiChou",        ShijimiChou,    -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"MiniHoudai",         MiniHoudai,     -1,           1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    1},
   {"FminiHoudai",        FminiHoudai,    -1,           1,      0x0097,    "MiniHoudai",   "MiniHoudai",   "MiniHoudai",   "",         "",         "MiniHoudai",   "MiniHoudai",   -1,          0,    1},
   {"Sokkuri",            Sokkuri,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    0},
   {"BombOtakara",        BombOtakara,    -1,           1,      0x0007,    "FireOtakara",  "FireOtakara",  "Otakara",      "",         "",         "Otakara",      "Otakara",      Bomb,        1,    1},
   {"BlackMan",           BlackMan,       -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             Tyre,        1,    7},
   {"Tyre",               Tyre,           -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    4},
   {"DangoMushi",         DangoMushi,     -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    7},
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
