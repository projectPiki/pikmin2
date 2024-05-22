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
	THP_COUNT             = 12,
};

struct THPDemoDinamics {
	f32 mBaseVolumeModifier;
	f32 _04;
	f32 _08;
	bool mEnableDyn;
	char* mName;

	inline f32 calcDinamic(f32& input)
	{
		f32 volume;
		BOOL isNegative = (input < 0.0f) ? TRUE : FALSE;

		// f32 calc = input;
		if (isNegative) {
			input *= -1.0f;
		}

		if (input < _04) {
			// f32 val = mDemoInfo->_08;
			volume = input * (_08 / _04);
			if (volume > _08) {
				volume = _08;
			} else if (volume < 0.0f) {
				volume = 0.0f;
			}
		} else {
			volume = (input - 1.0f) * ((1.0f - _08) / (1.0f - _04)) + 1.0f;
			if (volume < _08) {
				volume = _08;
			} else if (volume > 1.0f) {
				volume = 1.0f;
			}
		}

		if (isNegative) {
			volume *= -1.0f;
		}
		return volume;
	}
};

struct THPDinamicsProc {
	THPDinamicsProc() { mDemoInfo = nullptr; }

	void setSetting(THP_ID id);
	void setSetting(THPDemoDinamics* dyn);
	f32 dinamics(f32 input);

	void complessor(f32);

	inline f32 doAudioDinamics(u16 vol, int val) { return SHORT_FLOAT_MAX * dinamics((vol * val >> 15) / SHORT_FLOAT_MAX); }

	THPDemoDinamics* mDemoInfo; // _00
};

extern THPDinamicsProc sTHPDinamicsProc;
} // namespace PSM

#endif
