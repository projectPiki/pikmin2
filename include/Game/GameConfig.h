#ifndef _GAME_GAMECONFIG_H
#define _GAME_GAMECONFIG_H

#include "TagParm.h"

namespace Game {
struct GameConfig {
	struct Parms : public TagParameters {
		Parms();

		virtual ~Parms(); // _00

		PrimTagParm<int> m_gamePrint;          // _01C
		PrimTagParm<int> m_Print;              // _02C
		PrimTagParm<int> m_ogawaPrint;         // _03C
		PrimTagParm<int> m_shimizuPrint;       // _04C
		PrimTagParm<int> m_yamashitaPrint;     // _05C
		PrimTagParm<int> m_kandoPrint;         // _06C
		PrimTagParm<int> m_nishimuraPrint;     // _07C
		PrimTagParm<int> m_ebisawaPrint;       // _08C
		PrimTagParm<int> m_morimuraPrint;      // _09C
		PrimTagParm<int> m_konoPrint;          // _0AC
		PrimTagParm<int> m_fujinoPrint;        // _0BC
		PrimTagParm<int> m_psoundPrint;        // _0CC
		PrimTagParm<int> m_shortCutUp;         // _0DC
		PrimTagParm<int> m_shortCutDown;       // _0EC
		PrimTagParm<int> m_shortCutLeft;       // _0FC
		PrimTagParm<int> m_shortCutRight;      // _10C
		PrimTagParm<int> m_allocAllEnemy;      // _11C
		StringTagParm mapparts_path;           // _12C
		PrimTagParm<int> publicity;            // _13C
		PrimTagParm<int> pelletMultiLang;      // _14C
		PrimTagParm<int> AI;                   // _15C
		PrimTagParm<int> timers;               // _16C
		PrimTagParm<int> vsTest;               // _17C
		PrimTagParm<int> vsDeathType;          // _18C
		PrimTagParm<int> vsHiba;               // _19C
		PrimTagParm<int> vsY;                  // _1AC
		PrimTagParm<int> E3version;            // _1BC
		PrimTagParm<int> mukki_cherry;         // _1CC
		PrimTagParm<int> marioClubDevelop;     // _1DC
		PrimTagParm<int> heapStatusPrint;      // _1EC
		PrimTagParm<int> heapFreeSize;         // _1FC
		PrimTagParm<int> baseGameNewCheck;     // _20C
		PrimTagParm<int> KFesVersion;          // _21C
		PrimTagParm<int> nintendoVersion;      // _22C
		StringTagParm language;                // _23C
		PrimTagParm<int> autosaveOff;          // _24C
		PrimTagParm<int> vsDebugSelectPattern; // _25C
		PrimTagParm<int> vsFifo;               // _26C
	};

	GameConfig();
	~GameConfig();

	static void load(char*);

	Parms m_parms; // _00
};

extern GameConfig gGameConfig;
} // namespace Game

#endif
