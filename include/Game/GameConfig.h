#ifndef _GAME_GAMECONFIG_H
#define _GAME_GAMECONFIG_H

#include "TagParm.h"

namespace Game {
struct GameConfig {
	struct Parms : public TagParameters {
		Parms()
		    : TagParameters("GameConfig")
		    , m_gamePrint(this, "gamePrint")
		    , m_Print(this, "Print")
		    , m_ogawaPrint(this, "ogawaPrint")
		    , m_shimizuPrint(this, "shimizuPrint")
		    , m_yamashitaPrint(this, "yamashitaPrint")
		    , m_kandoPrint(this, "kandoPrint")
		    , m_nishimuraPrint(this, "nishimuraPrint")
		    , m_ebisawaPrint(this, "ebisawaPrint")
		    , m_morimuraPrint(this, "morimuraPrint")
		    , m_konoPrint(this, "konoPrint")
		    , m_fujinoPrint(this, "fujinoPrint")
		    , m_psoundPrint(this, "psoundPrint")
		    , m_shortCutUp(this, "shortCutUp")
		    , m_shortCutDown(this, "shortCutDown")
		    , m_shortCutLeft(this, "shortCutLeft")
		    , m_shortCutRight(this, "shortCutRight")
		    , m_allocAllEnemy(this, "allocAllEnemy")
		    , m_mapparts_path(this, "mapparts_path")
		    , m_publicity(this, "publicity")
		    , m_pelletMultiLang(this, "pelletMultiLang")
		    , m_AI(this, "AI")
		    , m_timers(this, "timers")
		    , m_vsTest(this, "vsTest")
		    , m_vsDeathType(this, "vsDeathType")
		    , m_vsHiba(this, "vsHiba")
		    , m_vsY(this, "vsY")
		    , m_E3version(this, "E3version")
		    , m_mukki_cherry(this, "mukki_cherry")
		    , m_marioClubDevelop(this, "marioClubDevelop")
		    , m_heapStatusPrint(this, "heapStatusPrint")
		    , m_heapFreeSize(this, "heapFreeSize")
		    , m_baseGameNewCheck(this, "baseGameNewCheck")
		    , m_KFesVersion(this, "KFesVersion")
		    , m_nintendoVersion(this, "nintendoVersion")
		    , m_language(this, "language")
		    , m_autosaveOff(this, "autosaveOff")
		    , m_vsDebugSelectPattern(this, "vsDebugSelectPattern")
		    , m_vsFifo(this, "vsFifo")
		{
		}

		virtual ~Parms() { } // _08 (weak)

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
