#ifndef _GAME_ENEMYINFO_H
#define _GAME_ENEMYINFO_H

#include "types.h"

namespace Game {

struct EnemyInfo {
	char* m_name;        // _00
	char m_id;           // _04
	char m_parentID;     // _05
	char m_members;      // _06
	u16 m_flags;         // _08
	char* m_modelName;   // _0C
	char* m_animName;    // _10
	char* m_animMgrName; // _14
	char* m_textureName; // _18
	char* m_paramName;   // _1C
	char* m_collName;    // _20
	char* m_stoneName;   // _24
	int m_childID;       // _28
	int m_childNum;      // _2C
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
    EnemyID_NULL           = -1,  // ID not set
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
EEnemyTypeID m_enemyID; // _00
u8 m_count;    // _04
};
// clang-format on

extern EnemyInfo gEnemyInfo[];

extern int gEnemyInfoNum;

namespace EnemyInfoFunc {
EnemyInfo* getEnemyInfo(int id, int flags);
char* getEnemyName(int id, int flags);
char* getEnemyResName(int id, int flags);
char getEnemyMember(int id, int flags);
int getEnemyID(char* name, int flags);
} // namespace EnemyInfoFunc

inline int getEnemyMgrID(int enemyID)
{
	int idx = -1;
	for (int i = 0; i < gEnemyInfoNum; i++) {
		char id = gEnemyInfo[i].m_id;
		if (id == enemyID) {
			idx = (gEnemyInfo[i].m_flags & 1) ? enemyID : gEnemyInfo[i].m_parentID;
		}
	}
	return idx;
}
} // namespace Game
#endif
