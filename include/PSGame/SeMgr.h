#ifndef _PSGAME_SEMGR_H
#define _PSGAME_SEMGR_H

#include "PSSystem/PSCommon.h"

struct JAISound;
struct JAISe;

namespace JAInter {
struct Object;
} // namespace JAInter

namespace PSGame {
struct RandId {
	RandId();
	JAISe* startSound(JAInter::Object*, u32, u32, u32);
	void playSystemSe(u32, JAISound**, u32, u32);

	u32 getRandomId(u32, u32);

	static f32 cNotUsingMasterIdRatio;

	f32 mId; // _00
};

struct SetSe {
	SetSe(const char*, s16, s16);

	JAISound* startSound(JAInter::Object*, u32, u32);
	void exec();
	JAISound* playSystemSe(u32, u32);
	void startCounter(u32);

	u16 mCounter;         // _00
	s16 mMinId;           // _02
	s16 mMaxId;           // _04
	s16 mMaxCount;        // _06
	u32 mStatus;          // _08
	JAISound* mSounds[2]; // _0C
	u8 mCounter2;         // _14
};

struct SeMgr : public PSSystem::SingletonBase<SeMgr> {

	// these enum names are based on translated japanese text and probably arent accurate
	enum SetSeId {
		SETSE_Unk0             = 0,
		SETSE_PikiCarry        = 1,
		SETSE_PikiWorking      = 2,
		SETSE_Enemy            = 3,
		SETSE_PikiInJellyfloat = 4,
		SETSE_ChallengeModeTop = 5,
		SETSE_PikiLanding      = 6,
		SETSE_PikiPanicRun     = 7
	};

	SeMgr();

	virtual ~SeMgr() { } // _08 (weak)

	void playMessageVoice(u32, bool);
	void stopMessageVoice();

	inline void execAllSe()
	{
		for (u8 i = 0; i < 8; i++) {
			mSetSeList[i]->exec();
		}
	}

	// _00 VTBL
	SetSe* mSetSeList[8]; // _04
	RandId mRandid;       // _24
	u8 _28[0x4];          // _28, unknown
	JAISound* mSound;     // _2C

	static void* seHandle; // TODO: need proper type
};

} // namespace PSGame

#endif
