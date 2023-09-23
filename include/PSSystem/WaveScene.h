#ifndef _PSSYSTEM_WAVESCENE_H
#define _PSSYSTEM_WAVESCENE_H

#include "types.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "PSSystem/PSBgmTask.h"

namespace PSSystem {

struct WaveScene : public JKRDisposer {
	enum AreaArg {

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

	virtual ~WaveScene(); // _08 (weak)

	void load(u16, u16, WaveScene::AreaArg, TaskChecker*);

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	WaveScene::WaveArea _18[2]; // _18
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
	virtual void loadWave(TaskChecker*, WaveScene::AreaArg); // _08

	// _00 = VTBL
	u8 _04;               // _04
	u8 _05;               // _05
	u8 _06[0x2];          // _06 - unknown, could be padding
	WaveScene mWaveScene; // _08
};

} // namespace PSSystem

#endif
