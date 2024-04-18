#ifndef _PSSYSTEM_WAVESCENE_H
#define _PSSYSTEM_WAVESCENE_H

#include "types.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "PSSystem/PSBgmTask.h"

namespace PSSystem {

struct WaveScene : public JKRDisposer {
	enum AreaArg {
		AREA_0     = 0,
		AREA_1     = 1,
		AREA_Count = 2,
	};

	enum WaveSceneID {
		WSCENE0_Sound_Effects          = 0,  // wScene_0.aw (se.bms / boss_m.bms)
		WSCENE1_Unused_Forest          = 1,  // wScene_1.aw (id_test.bms)
		WSCENE2_Awakening_Wood         = 2,  // wScene_2.aw (forest.bms)
		WSCENE3_Perplexing_Pool        = 3,  // wScene_3.aw (yakushima.bms)
		WSCENE4_Wistful_Wild           = 4,  // wScene_4.aw (last.bms)
		WSCENE5_Challenge_KeyGet       = 5,  // wScene_5.aw (keyget.bms)
		WSCENE6_2P_Battle              = 6,  // wScene_6.aw (battle_t.bms)
		WSCENE7_Unused_ff_doped        = 7,  // wScene_7.aw (for unused ff_doped.bms)
		WSCENE8_Unused_ff_keyget       = 8,  // wScene_8.aw (for unused ff_keyget.bms)
		WSCENE9_Unused_ff_playerdown   = 9,  // wScene_9.aw (for unused ff_playdown.bms)
		WSCENE10_CaveMetal_00          = 10, // wScene_10.aw (cavemetal_00_X.cnd)
		WSCENE11_Unused_ff_treasureget = 11, // wScene_11.aw (for unused ff_treasureget.bms)
		WSCENE12_Unused_ff_doping      = 12, // wScene_12.aw (for unused ff_doping.bms)
		WSCENE13_ChallengeResult       = 13, // wScene_13.aw (unused c_result.bms)
		WSCENE14_Unused_ff_annihi      = 14, // wScene_14.aw (for unused ff_annihi.bms)
		WSCENE15_Valley_of_Repose      = 15, // wScene_15.aw (n_tutorial.bms)
		WSCENE16_WorldMap              = 16, // wScene_16.aw (worldmap.bms / worldmap_intro.bms)
		WSCENE17_CaveResult            = 17, // wScene_17.aw (unused u_result.bms)
		WSCENE18_unk                   = 18, // wScene_18.aw
		WSCENE19_Final_Result          = 19, // wScene_19.aw (f_result.bms)
		WSCENE20_ChallengeSelect       = 20, // wScene_20.aw (c_menu.bms)
		WSCENE21_HighScores            = 21, // wScene_21.aw (hiscore.bms)
		WSCENE22_CaveSoil_00           = 22, // wScene_22.aw (cavesoil_00_X.cnd)
		WSCENE23_CaveOutside           = 23, // wScene_23.aw (caveglass_00_X.cnd)
		WSCENE24_CaveTile              = 24, // wScene_24.aw (cavetile_00_X.cnd)
		WSCENE25_CaveToy               = 25, // wScene_25.aw (cavetsumiki_00_X.cnd)
		WSCENE26_CaveConc_00           = 26, // wScene_26.aw (caveconc_00_X.cnd)
		WSCENE27_Unused_Boss           = 27, // wScene_27.aw (probably leftover before boss theme was put in wScene0)
		WSCENE28_CaveRestFloor         = 28, // wScene_28.aw (caverelax.cnd)
		WSCENE29_CaveMetal_05          = 29, // wScene_29.aw (cavemetal_05_X.cnd)
		WSCENE30_CaveMetal_10          = 30, // wScene_30.aw (cavemetal_10_X.cnd)
		WSCENE31_CaveConc_05           = 31, // wScene_31.aw (caveconc_05_X.cnd)
		WSCENE32_CaveConc_10           = 32, // wScene_32.aw (caveconc_10_X.cnd)
		WSCENE33_CaveSoil_05           = 33, // wScene_33.aw (cavesoil_05_X.cnd)
		WSCENE34_CaveSoil_10           = 34, // wScene_34.aw (cavesoil_10_X.cnd)
		WSCENE35_TitanDweevil          = 35, // wScene_35.aw (l_boss.bms)
		WSCENE36_Piklopedia            = 36, // wScene_36.aw (book.bms)
		WSCENE37_EmergenceCave         = 37, // wScene_37.aw (new_00_X.cnd)
		WSCENE38_HoleOfHeroes          = 38, // wScene_38.aw (new_01_X.cnd)
		WSCENE39_Jellyfloat            = 39, // wScene_39.aw (new_02_X.cnd)
		WSCENE40_GiantBreadbug         = 40, // wScene_40.aw (new_03_X.cnd)
		WSCENE41_FireCave              = 41, // wScene_41.aw (new_04_X.cnd)
		WSCENE42_BulblaxKingdom        = 42, // wScene_42.aw (new_05_X.cnd)
		WSCENE43_FrontierCavern        = 43, // wScene_43.aw (new_06_X.cnd)
		WSCENE44_SnagretHole           = 44, // wScene_44.aw (new_07_X.cnd)
		WSCENE45_Railroad              = 45, // wScene_45.aw (new_08_X.cnd)
		WSCENE46_unk                   = 46, // wScene_46.aw
		WSCENE47_unk                   = 47, // wScene_47.aw
		WSCENE48_SubmergedCastle       = 48, // wScene_48.aw (kuro_pre.bms / kuro_post.bms)
	};

	struct WaveArea {
		WaveArea();

		enum WaveType {
			WaveType_Null     = 0,
			WaveType_Loading  = 1,
			WaveType_Standard = 2,
		};

		virtual ~WaveArea() { deleteWave(); } // _08 (weak)

		bool loadWave(u16 bankIdx, u16 arcIdx, TaskChecker* checker);
		void deleteWave();
		static void waveLoadCallback(u32);

		// _00 = VTBL
		TaskChecker* mChecker; // _04
		u16 mBankIdx;          // _08
		u16 mArcIdx;           // _0A
		u8 mIsLoadTail;        // _0C
		int mWaveType;         // _10
	};

	// virtual ~WaveScene() { } // _08 (weak)

	void load(u16, u16, AreaArg, TaskChecker*);

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	WaveArea mAreas[2]; // _18
};

// temp - used in WaveArea::loadWave, need to determine what this actually is
struct WaveAreaLoader {
	inline WaveAreaLoader(u16 bankIdx, u16 arcIdx, WaveScene::WaveArea* wave)
	    : mBankIdx(bankIdx)
	    , mArcIdx(arcIdx)
	    , mWaveArea(wave)
	{
	}

	u16 mBankIdx;                   // _00
	u16 mArcIdx;                    // _02
	WaveScene::WaveArea* mWaveArea; // _04
};

struct WaveLoader {
	WaveLoader(u8 id1, u8 id2);

	virtual void loadWave(TaskChecker* task, WaveScene::AreaArg arg); // _08

	// _00 = VTBL
	u8 mWaveSceneID[2];   // _04
	WaveScene mWaveScene; // _08
};

} // namespace PSSystem

#endif
