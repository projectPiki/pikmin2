#ifndef _GAME_GAMECONFIG_H
#define _GAME_GAMECONFIG_H

#include "TagParm.h"

namespace Game {
struct GameConfig {
	struct Parms : public TagParameters {
		Parms();

		virtual ~Parms(); // _00

		PrimTagParm<int> m_gamePrint;            // _01C
		PrimTagParm<int> m_Print;                // _02C
		PrimTagParm<int> m_ogawaPrint;           // _03C
		PrimTagParm<int> m_shimizuPrint;         // _04C
		PrimTagParm<int> m_yamashitaPrint;       // _05C
		PrimTagParm<int> m_kandoPrint;           // _06C
		PrimTagParm<int> m_nishimuraPrint;       // _07C
		PrimTagParm<int> m_ebisawaPrint;         // _08C
		PrimTagParm<int> m_morimuraPrint;        // _09C
		PrimTagParm<int> m_konoPrint;            // _0AC
		PrimTagParm<int> m_fujinoPrint;          // _0BC
		PrimTagParm<int> m_psoundPrint;          // _0CC
		PrimTagParm<int> m_shortCutUp;           // _0DC
		PrimTagParm<int> m_shortCutDown;         // _0EC
		PrimTagParm<int> m_shortCutLeft;         // _0FC
		PrimTagParm<int> m_shortCutRight;        // _10C
		PrimTagParm<int> m_allocAllEnemy;        // _11C
		StringTagParm m_mapparts_path;           // _12C
		PrimTagParm<int> m_publicity;            // _13C
		PrimTagParm<int> m_pelletMultiLang;      // _14C
		PrimTagParm<int> m_AI;                   // _15C
		PrimTagParm<int> m_timers;               // _16C
		PrimTagParm<int> m_vsTest;               // _17C
		PrimTagParm<int> m_vsDeathType;          // _18C
		PrimTagParm<int> m_vsHiba;               // _19C
		PrimTagParm<int> m_vsY;                  // _1AC
		PrimTagParm<int> m_E3version;            // _1BC
		PrimTagParm<int> m_mukki_cherry;         // _1CC
		PrimTagParm<int> m_marioClubDevelop;     // _1DC
		PrimTagParm<int> m_heapStatusPrint;      // _1EC
		PrimTagParm<int> m_heapFreeSize;         // _1FC
		PrimTagParm<int> m_baseGameNewCheck;     // _20C
		PrimTagParm<int> m_KFesVersion;          // _21C
		PrimTagParm<int> m_nintendoVersion;      // _22C
		StringTagParm m_language;                // _23C
		PrimTagParm<int> m_autosaveOff;          // _24C
		PrimTagParm<int> m_vsDebugSelectPattern; // _25C
		PrimTagParm<int> m_vsFifo;               // _26C
	};

	GameConfig();
	~GameConfig() {};

	bool load(char*);

	// Unused/inlined:
	void setConstSetting();

	Parms m_parms; // _00
};

extern GameConfig gGameConfig;
} // namespace Game

#endif
