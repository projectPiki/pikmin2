#ifndef _PSGAME_RAPPA_H
#define _PSGAME_RAPPA_H

#include "types.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JAI/JAInter/Object.h"

struct JASTrack;

namespace PSGame {
struct Rappa : public JKRDisposer {
	Rappa();

	virtual ~Rappa(); // _08

	void init(u16);
	void setId(u32);
	void playRappa(bool, f32, f32, JAInter::Object*);
	void syncCpu_WaitChk(JASTrack*);
	void syncCpu_TblNo(JASTrack*);

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	u32 m_id; // _18
	s16 _1C;  // _1C
	u16 _1E;  // _1E
};
} // namespace PSGame

#endif
