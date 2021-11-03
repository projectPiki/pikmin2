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

enum EDropType { // ID
	Weak      = 0,
	Normal    = 1,
	Strong    = 2,
	Triple    = 3,
	Empty     = 4,
	EmptyTwo  = 5,
	MiniBoss  = 6,
	Boss      = 7,
	FinalBoss = 8,
};
// clang-format off
enum EEnemyTypeID {//ID      Common Name
    Pelplant       = 0,	  // Pellet Posy
    Kochappy       = 1,	  // Dwarf Red Bulborb
    Chappy         = 2,	  // Red Bulborb
    BluePom        = 3,	  // Lapis Lazuli Candypop Bud
    RedPom         = 4,	  // Crimson Candypop Bud
    YellowPom      = 5,	  // Golden Candypop Bud
    BlackPom       = 6,	  // Violet Candypop Bud
    WhitePom       = 7,	  // Ivory Candypop Bud
    RandPom        = 8,	  // Queen Candypop Bud
    Kogane         = 9,	  // Iridescent Flint Beetle
    Wealthy        = 10,  // Iridescent Glint Beetle
    Fart           = 11,  // Doodlebug
    UjiA           = 12,  // Female Sheargrub
    UjiB           = 13,  // Male Sheargrub
    Tobi           = 14,  // Shearwig
    Armor          = 15,  // Cloaking Burrow-nit
    Qurione        = 16,  // Honeywisp
    Frog           = 17,  // Yellow Wollywog
    MaroFrog       = 18,  // Wollywog
    Rock           = 19,  // Falling boulder
    Hiba           = 20,  // Fire geyser
    GasHiba        = 21,  // Gas pipe
    ElecHiba       = 22,  // Electrical wire
    Sarai          = 23,  // Swooping Snitchbug
    Tank           = 24,  // Fiery Blowhog
    Wtank          = 25,  // Watery Blowhog
    Catfish        = 26,  // Water Dumple
    Tadpole        = 27,  // Wogpole
    ElecBug        = 28,  // Anode Beetle
    Mar            = 29,  // Puffy Blowhog
    Queen          = 30,  // Empress Bulblax
    Baby           = 31,  // Bulborb Larva
    Demon          = 32,  // Bumbling Snitchbug
    FireChappy     = 33,  // Fiery Bulblax
    SnakeCrow      = 34,  // Burrowing Snagret
    KumaChappy     = 35,  // Spotty Bulbear
    Bomb           = 36,  // Bomb-rock
    Egg            = 37,  // Egg
    PanModoki      = 38,  // Breadbug
    INVALID        = 39,  // Unused ID
    OoPanModoki    = 40,  // Giant Breadbug
    Fuefuki        = 41,  // Antenna Beetle
    BlueChappy     = 42,  // Orange Bulborb
    YellowChappy   = 43,  // Hairy Bulborb
    BlueKochappy   = 44,  // Dwarf Orange Bulborb
    YellowKochappy = 45,  // Snow Bulborb
    Tanpopo        = 46,  // Dandelion
    Clover         = 47,  // Clover
    HikariKinoko   = 48,  // Common Glowcap
    Ooinu_s        = 49,  // Figwort (red small)
    Ooinu_l        = 50,  // Figwort (red large)
    Wakame_s       = 51,  // Shoot (small)
    Wakame_l       = 52,  // Shoot (large)
    KingChappy     = 53,  // Emperor Bulblax
    Miulin         = 54,  // Mamuta
    Hanachirashi   = 55,  // Withering Blowhog
    Damagumo       = 56,  // Beady Long Legs
    Kurage         = 57,  // Lesser Spotted Jellyfloat
    BombSarai      = 58,  // Careening Dirigibug
    FireOtakara    = 59,  // Fiery Dweevil
    WaterOtakara   = 60,  // Caustic Dweevil
    GasOtakara     = 61,  // Munge Dweevil
    ElecOtakara    = 62,  // Anode Dweevil
    Jigumo         = 63,  // Hermit Crawmad
    INVALID2       = 64,  // Unused ID
    Imomushi       = 65,  // Ravenous Whiskerpillar
    Houdai         = 66,  // Man-at-Legs
    LeafChappy     = 67,  // Bulbmin
    TamagoMushi    = 68,  // Mitite
    BigFoot        = 69,  // Raging Long Legs
    SnakeWhole     = 70,  // Pileated Snagret
    UmiMushi       = 71,  // Ranging Bloyster
    OniKurage      = 72,  // Greater Spotted Jellyfloat
    BigTreasure    = 73,  // Titan Dweevil
    Stone          = 74,  // Rock (projectile)
    Kabuto         = 75,  // Armored Cannon Beetle Larva
    KumaKochappy   = 76,  // Dwarf Bulbear
    ShijimiChou    = 77,  // Unmarked Spectralids
    MiniHoudai     = 78,  // Gatling Groink
    Sokkuri        = 79,  // Skitter Leaf
    Tukushi        = 80,  // Horsetail
    Watage         = 81,  // Seeding Dandelion
    Pom            = 82,  // Candypop Bud base (crashes)
    PanHouse       = 83,  // Breadbug Nest
    Hana           = 84,  // Creeping Chrysanthemum
    DaiodoRed      = 85,  // Glowstem (red)
    DaiodoGreen    = 86,  // Glowstem (green)
    Magaret        = 87,  // Margaret
    Nekojarashi    = 88,  // Foxtail
    Chiyogami      = 89,  // Chigoyami paper
    Zenmai         = 90,  // Fiddlehead
    KareOoinu_s    = 91,  // Figwort (brown small)
    KareOoinu_l    = 92,  // Figwort (brown large)
    BombOtakara    = 93,  // Volatile Dweevil
    DangoMushi     = 94,  // Segmented Crawbster
    Rkabuto        = 95,  // Decorated Cannon Beetle
    Fkabuto        = 96,  // Armored Cannon Beetle Larva (burrowed)
    FminiHoudai    = 97,  // Gatling Groink (pedestal)
    Tyre           = 98,  // Waterwraith rollers
    BlackMan       = 99,  // Waterwraith
    UmiMushiBase   = 100, // Bloyster base (crashes)
    UmiMushiBlind  = 101, // Toady Bloyster
};

struct EnemyInfo gEnemyInfo[100] = {
// name                   ID              pID           members flags      model           anim            animgr          texture     param       collision       stone           childID      chNum droptype
   {"Pelplant",           Pelplant,       -1,           1,      0x0007,    "Pelplant",     "Pelplant",     "Pelplant",     "Pelplant", "Pelplant", "Pelplant",     "Pelplant",     -1,          0,    Empty},
   {"Kochappy",           Kochappy,       -1,           1,      0x0117,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Normal},
   {"BlueKochappy",       BlueKochappy,   -1,           1,      0x0117,    "Kochappy",     "Kochappy",     "Kochappy",     "",         "",         "Kochappy",     "Kochappy",     -1,          0,    Normal},
   {"YellowKochappy",     YellowKochappy, -1,           1,      0x0117,    "Kochappy",     "Kochappy",     "Kochappy",     "",         "",         "Kochappy",     "Kochappy",     -1,          0,    Normal},
   {"KumaKochappy",       KumaKochappy,   -1,           1,      0x0117,    "",             "Kochappy",     "Kochappy",     "",         "",         "Kochappy",     "",             -1,          0,    Normal},
   {"Chappy",             Chappy,         -1,           1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Strong},
   {"BlueChappy",         BlueChappy,     -1,           1,      0x0097,    "Chappy",       "Chappy",       "Chappy",       "",         "",         "Chappy",       "Chappy",       -1,          0,    Strong},
   {"YellowChappy",       YellowChappy,   -1,           1,      0x0097,    "Chappy",       "Chappy",       "Chappy",       "",         "",         "Chappy",       "Chappy",       -1,          0,    Strong},
   {"Pom",                Pom,            -1,           1,      0x0001,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,          0,    Empty},
   {"BluePom",            BluePom,        Pom,          1,      0x0006,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,          0,    Empty},
   {"RedPom",             RedPom,         Pom,          1,      0x0006,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,          0,    Empty},
   {"YellowPom",          YellowPom,      Pom,          1,      0x0006,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,          0,    Empty},
   {"BlackPom",           BlackPom,       Pom,          1,      0x0006,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,          0,    Empty},
   {"WhitePom",           WhitePom,       Pom,          1,      0x0006,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,          0,    Empty},
   {"RandPom",            RandPom,        Pom,          1,      0x0006,    "Pom",          "Pom",          "Pom",          "Pom",      "Pom",      "Pom",          "Pom",          -1,          0,    Empty},
   {"Kogane",             Kogane,         -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"Wealthy",            Wealthy,        -1,           1,      0x0007,    "Kogane",       "Kogane",       "Kogane",       "",         "",         "Kogane",       "Kogane",       -1,          0,    Empty},
   {"Fart",               Fart,           -1,           1,      0x0007,    "Kogane",       "Kogane",       "Kogane",       "",         "",         "Kogane",       "Kogane",       -1,          0,    Empty},
   {"Frog",               Frog,           -1,           1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Strong},
   {"MaroFrog",           MaroFrog,       -1,           1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Strong},
   {"UjiA",               UjiA,           -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Weak},
   {"UjiB",               UjiB,           -1,           1,      0x0117,    "",             "UjiA",         "",             "",         "",         "",             "",             -1,          0,    Weak},
   {"Armor",              Armor,          -1,           1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Strong},
   {"Tobi",               Tobi,           -1,           1,      0x0117,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Weak},
   {"Imomushi",           Imomushi,       -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Weak},
   {"Qurione",            Qurione,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             Egg,         1,    Empty},
   {"Rock",               Rock,           -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"Stone",              Stone,          Rock,         1,      0x0206,    "Rock",         "Rock",         "Rock",         "Rock",     "Rock",     "Rock",         "Rock",         -1,          0,    Empty},
   {"Kabuto",             Kabuto,         -1,           1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             Stone,       5,    Normal},
   {"Rkabuto",            Rkabuto,        -1,           1,      0x0097,    "Kabuto",       "Kabuto",       "Kabuto",       "",         "",         "Kabuto",       "Kabuto",       Stone,       5,    Normal},
   {"Fkabuto",            Fkabuto,        -1,           1,      0x0097,    "Kabuto",       "Kabuto",       "Kabuto",       "",         "",         "Kabuto",       "Kabuto",       Stone,       5,    Normal},
   {"Hiba",               Hiba,           -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"GasHiba",            GasHiba,        -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"ElecHiba",           ElecHiba,       -1,           2,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"Sarai",              Sarai,          -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Strong},
   {"Demon",              Demon,          -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Strong},
   {"BombSarai",          BombSarai,      -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             Bomb,        2,    Strong},
   {"Tank",               Tank,           -1,           1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Strong},
   {"Wtank",              Wtank,          -1,           1,      0x0097,    "Tank",         "Tank",         "Tank",         "",         "",         "Tank",         "Tank",         -1,          0,    Strong},
   {"Catfish",            Catfish,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Normal},
   {"Tadpole",            Tadpole,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Weak},
   {"ElecBug",            ElecBug,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Normal},
   {"Mar",                Mar,            -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Strong},
   {"Hanachirashi",       Hanachirashi,   -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Strong},
   {"Kurage",             Kurage,         -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Normal},
   {"OniKurage",          OniKurage,      -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Strong},
   {"Queen",              Queen,          -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             Baby,        50,   Boss},
   {"Baby",               Baby,           -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Weak},
   {"FireChappy",         FireChappy,     -1,           1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Strong},
   {"Hana",               Hana,           -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Strong},
   {"KumaChappy",         KumaChappy,     -1,           1,      0x0097,    "",             "Chappy",       "",             "",         "",         "",             "",             -1,          0,    Strong},
   {"LeafChappy",         LeafChappy,     -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Strong},
   {"SnakeCrow",          SnakeCrow,      -1,           1,      0x0037,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Boss},
   {"SnakeWhole",         SnakeWhole,     -1,           1,      0x0037,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Boss},
   {"Bomb",               Bomb,           -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"Egg",                Egg,            -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             TamagoMushi, 10,   Empty},
   {"PanModoki",          PanModoki,      -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             PanHouse,    1,    Empty},
   {"OoPanModoki",        OoPanModoki,    -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             PanHouse,    1,    Empty},
   {"PanHouse",           PanHouse,       -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"Fuefuki",            Fuefuki,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Strong},
   {"Tanpopo",            Tanpopo,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             ShijimiChou, 5,    Empty},
   {"Watage",             Watage,         -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"Clover",             Clover,         -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"HikariKinoko",       HikariKinoko,   -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"Ooinu_s",            Ooinu_s,        -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"KareOoinu_s",        KareOoinu_s,    -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"Ooinu_l",            Ooinu_l,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             ShijimiChou, 5,    Empty},
   {"KareOoinu_l",        KareOoinu_l,    -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"Wakame_s",           Wakame_s,       -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"Wakame_l",           Wakame_l,       -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"Tukushi",            Tukushi,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"DaiodoRed",          DaiodoRed,      -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"DaiodoGreen",        DaiodoGreen,    -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"Magaret",            Magaret,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             ShijimiChou, 5,    Empty},
   {"Nekojarashi",        Nekojarashi,    -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"Chiyogami",          Chiyogami,      -1,           1,      0x0207,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"Zenmai",             Zenmai,         -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"KingChappy",         KingChappy,     -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Boss},
   {"Miulin",             Miulin,         -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Strong},
   {"Damagumo",           Damagumo,       -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Boss},
   {"BigFoot",            BigFoot,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             TamagoMushi, 30,   Boss},
   {"Houdai",             Houdai,         -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Boss},
   {"FireOtakara",        FireOtakara,    -1,           1,      0x0007,    "",             "",             "Otakara",      "",         "",         "Otakara",      "Otakara",      -1,          0,    Normal},
   {"WaterOtakara",       WaterOtakara,   -1,           1,      0x0007,    "FireOtakara",  "FireOtakara",  "Otakara",      "",         "",         "Otakara",      "Otakara",      -1,          0,    Normal},
   {"GasOtakara",         GasOtakara,     -1,           1,      0x0007,    "FireOtakara",  "FireOtakara",  "Otakara",      "",         "",         "Otakara",      "Otakara",      -1,          0,    Normal},
   {"ElecOtakara",        ElecOtakara,    -1,           1,      0x0007,    "FireOtakara",  "FireOtakara",  "Otakara",      "",         "",         "Otakara",      "Otakara",      -1,          0,    Normal},
   {"Jigumo",             Jigumo,         -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             PanHouse,    1,    Strong},
   {"TamagoMushi",        TamagoMushi,    -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Weak},
   {"UmiMushiBase",       UmiMushiBase,   -1,           1,      0x0001,    "UmiMushi",     "UmiMushi",     "UmiMushi",     "UmiMushi", "UmiMushi", "UmiMushi",     "UmiMushi",     -1,          0,    Boss},
   {"UmiMushi",           UmiMushi,       UmiMushiBase, 1,      0x0006,    "UmiMushi",     "UmiMushi",     "UmiMushi",     "UmiMushi", "UmiMushi", "UmiMushi",     "UmiMushi",     -1,          0,    Boss},
   {"UmiMushiBlind",      UmiMushiBlind,  UmiMushiBase, 1,      0x0006,    "UmiMushi",     "UmiMushi",     "UmiMushi",     "UmiMushi", "UmiMushi", "UmiMushi",     "UmiMushi",     -1,          0,    Strong},
   {"BigTreasure",        BigTreasure,    -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    FinalBoss},
   {"ShijimiChou",        ShijimiChou,    -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"MiniHoudai",         MiniHoudai,     -1,           1,      0x0097,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Normal},
   {"FminiHoudai",        FminiHoudai,    -1,           1,      0x0097,    "MiniHoudai",   "MiniHoudai",   "MiniHoudai",   "",         "",         "MiniHoudai",   "MiniHoudai",   -1,          0,    Normal},
   {"Sokkuri",            Sokkuri,        -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Weak},
   {"BombOtakara",        BombOtakara,    -1,           1,      0x0007,    "FireOtakara",  "FireOtakara",  "Otakara",      "",         "",         "Otakara",      "Otakara",      Bomb,        1,    Normal},
   {"BlackMan",           BlackMan,       -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             Tyre,        1,    Boss},
   {"Tyre",               Tyre,           -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Empty},
   {"DangoMushi",         DangoMushi,     -1,           1,      0x0007,    "",             "",             "",             "",         "",         "",             "",             -1,          0,    Boss},
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
