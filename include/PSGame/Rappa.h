#ifndef _PSGAME_RAPPA_H
#define _PSGAME_RAPPA_H

#include "types.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JAudio/JAI/JAInter/Object.h"

struct JASTrack;

namespace PSGame {
struct Rappa : public JKRDisposer {
	Rappa();

	virtual ~Rappa(); // _08

	void init(u16);
	void setId(u32);
	bool playRappa(bool, f32, f32, JAInter::Object*);
	u32 syncCpu_WaitChk(JASTrack*);
	u32 syncCpu_TblNo(JASTrack*);

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	u32 mId;    // _18
	u16 mWait;  // _1C
	u16 mTblNo; // _1E

	static Rappa* sRappa[2];
	static const s16 cBaseWaitTime;
};

} // namespace PSGame

#endif
