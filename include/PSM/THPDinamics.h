#ifndef _PSM_THPDINAMICS_H
#define _PSM_THPDINAMICS_H

#include "PSSystem/PSCommon.h"

namespace PSM {
enum THP_ID {
	OPENING_GameStart     = 0,
	OPENING_PostDebtStart = 1,
	ENDING_PayDebt        = 2,
	ENDING_AllTreasures   = 3,
	STAFF_ROLL            = 4,
	PLAY_1                = 5,
	PLAY_2                = 6,
	PLAY_3                = 7,
	PLAY_4                = 8,
	PLAY_5                = 9,
	PLAY_6                = 10,
	CRIME                 = 11,
};

struct THPDemoDinamics {
};

struct THPDinamicsProc {
	THPDinamicsProc(); // inlined/unused

	void setSetting(THP_ID);
	void setSetting(THPDemoDinamics*);
	f32 dinamics(f32);

	void complessor(f32);

	inline f32 doAudioDinamics(u16 vol, int val) { return 32768.0f * dinamics((vol * val >> 15) / 32768.0f); }
};

extern THPDinamicsProc sTHPDinamicsProc;
} // namespace PSM

#endif
