#ifndef _PSSYSTEM_WAVESCENE_H
#define _PSSYSTEM_WAVESCENE_H

#include "types.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "PSSystem/PSBgmTask.h"

namespace PSSystem {

struct WaveScene : public JKRDisposer {
	enum AreaArg {

	};

	struct WaveArea {
		WaveArea();

		virtual ~WaveArea(); // _08 (weak)

		void loadWave(u16, u16, TaskChecker*);
		void deleteWave();
		void waveLoadCallback(u32);

		TaskChecker* _04; // _04
		u16 _08;          // _08
		u16 _0A;          // _0A
		u8 _0C;           // _0C
		int _10;          // _10
	};

	virtual ~WaveScene(); // _08 (weak)

	void load(u16, u16, WaveScene::AreaArg, TaskChecker*);

	WaveScene::WaveArea _18[2]; // _18
};

struct WaveLoader {
	virtual void loadWave(TaskChecker*, WaveScene::AreaArg); // _08

	u8 _04;                // _04
	u8 _05;                // _05
	u8 _06[0x2];           // _06 - unknown, could be padding
	WaveScene m_waveScene; // _08
};

} // namespace PSSystem

#endif
