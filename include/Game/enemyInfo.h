#ifndef GAME_ENEMYINFO_H
#define GAME_ENEMYINFO_H

namespace Game {

// Epoch's Structs
// size 0x34, alignment 0x1
struct EnemyInfo {
	char* name;
	char ID;
	char parentID;
	char members;
	short flags;
	char* model_name;
	char* anim_name;
	char* animmgr_name;
	char* texture_name;
	char* param_name;
	char* collision_name;
	char* stone_name;
	int childID;
	int childNum;
	char bitter_drops;
};

typedef enum EEnemyTypeID {
	Armor          = 15,
	Baby           = 31,
	BigFoot        = 69,
	BigTreasure    = 73,
	BlackMan       = 99,
	BlackPom       = 6,
	BlueChappy     = 42,
	BlueKochappy   = 44,
	BluePom        = 3,
	Bomb           = 36,
	BombOtakara    = 93,
	BombSarai      = 58,
	Catfish        = 26,
	Chappy         = 2,
	Chiyogami      = 89,
	Clover         = 47,
	DaiodoGreen    = 86,
	DaiodoRed      = 85,
	Damagumo       = 56,
	DangoMushi     = 94,
	Demon          = 32,
	Egg            = 37,
	ElecBug        = 28,
	ElecHiba       = 22,
	ElecOtakara    = 62,
	Fart           = 11,
	FireChappy     = 33,
	FireOtakara    = 59,
	Fkabuto        = 96,
	FminiHoudai    = 97,
	Frog           = 17,
	Fuefuki        = 41,
	GasHiba        = 21,
	GasOtakara     = 61,
	Hana           = 84,
	Hanachirashi   = 55,
	Hiba           = 20,
	HikariKinoko   = 48,
	Houdai         = 66,
	Imomushi       = 65,
	Jigumo         = 63,
	Kabuto         = 75,
	KareOoinu_l    = 92,
	KareOoinu_s    = 91,
	KingChappy     = 53,
	Kochappy       = 1,
	Kogane         = 9,
	KumaChappy     = 35,
	KumaKochappy   = 76,
	Kurage         = 57,
	LeafChappy     = 67,
	Magaret        = 87,
	Mar            = 29,
	MaroFrog       = 18,
	MiniHoudai     = 78,
	Miulin         = 54,
	NULL           = 39,
	NULL2          = 64,
	Nekojarashi    = 88,
	OniKurage      = 72,
	OoPanModoki    = 40,
	Ooinu_l        = 50,
	Ooinu_s        = 49,
	PanHouse       = 83,
	PanModoki      = 38,
	Pelplant       = 0,
	Pom            = 82,
	Queen          = 30,
	Qurione        = 16,
	RandPom        = 8,
	RedPom         = 4,
	Rkabuto        = 95,
	Rock           = 19,
	Sarai          = 23,
	ShijimiChou    = 77,
	SnakeCrow      = 34,
	SnakeWhole     = 70,
	Sokkuri        = 79,
	Stone          = 74,
	Tadpole        = 27,
	TamagoMushi    = 68,
	Tank           = 24,
	Tanpopo        = 46,
	Tobi           = 14,
	Tukushi        = 80,
	Tyre           = 98,
	UjiA           = 12,
	UjiB           = 13,
	UmiMushi       = 71,
	UmiMushiBase   = 100,
	UmiMushiBlind  = 101,
	Wakame_l       = 52,
	Wakame_s       = 51,
	Watage         = 81,
	WaterOtakara   = 60,
	Wealthy        = 10,
	WhitePom       = 7,
	Wtank          = 25,
	YellowChappy   = 43,
	YellowKochappy = 45,
	YellowPom      = 5,
	Zenmai         = 90
} EEnemyTypeID;

namespace EnemyInfoFunc {
	EnemyInfo* getEnemyInfo(int, int);
	char* getEnemyName(int, int);
	char* getEnemyResName(int, int);
	char getEnemyMember(int, int);
	int getEnemyID(char*, int);

} // namespace EnemyInfoFunc
} // namespace Game
#endif
