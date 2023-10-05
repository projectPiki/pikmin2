#ifndef _PSSYSTEM_WAVESCENE_H
#define _PSSYSTEM_WAVESCENE_H

#include "types.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "PSSystem/PSBgmTask.h"

namespace PSSystem {

struct WaveScene : public JKRDisposer {
	enum AreaArg {
		AREA_0,
		AREA_1,
	};

	struct WaveArea {
		WaveArea();

		virtual ~WaveArea() { deleteWave(); } // _08 (weak)

		bool loadWave(u16 bankIdx, u16 arcIdx, TaskChecker* checker);
		void deleteWave();
		static void waveLoadCallback(u32);

		// _00 = VTBL
		TaskChecker* mChecker; // _04
		u16 mBankIdx;          // _08
		u16 mArcIdx;           // _0A
		u8 _0C;                // _0C
		int _10;               // _10
	};

	virtual ~WaveScene() { } // _08 (weak)

	void load(u16, u16, AreaArg, TaskChecker*);

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	WaveArea _18[2]; // _18
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
	WaveLoader(u8 id1, u8 id2)
	{
		mWaveSceneID[0] = id1;
		mWaveSceneID[1] = id2;
	}
	virtual void loadWave(TaskChecker* task, WaveScene::AreaArg arg); // _08

	// _00 = VTBL
	u8 mWaveSceneID[2];   // _04
	WaveScene mWaveScene; // _08
};

} // namespace PSSystem

#endif
