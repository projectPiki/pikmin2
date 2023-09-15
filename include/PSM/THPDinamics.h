#ifndef _PSM_THPDINAMICS_H
#define _PSM_THPDINAMICS_H

#include "PSSystem/PSCommon.h"

namespace PSM {
typedef int THP_ID;

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
