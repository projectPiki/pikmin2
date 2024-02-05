#ifndef _PSGAME_PSSE_H
#define _PSGAME_PSSE_H

#include "types.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JAudio/JAI/JAInter/Object.h"

struct JASTrack;

namespace PSGame {
struct Rappa : public JKRDisposer {
	Rappa();

	virtual ~Rappa(); // _08

	/**
	 * Initializes the Rappa object with the given ID.
	 *
	 * @param id The ID of the Rappa object.
	 */
	void init(u16 id);

	/**
	 * @brief Sets the ID of the object.
	 *
	 * @param id The ID to set.
	 */
	void setId(u32 id);

	JAISound* playRappa(bool, f32, f32, JAInter::Object*);
	u16 syncCpu_WaitChk(JASTrack*);
	u16 syncCpu_TblNo(JASTrack*);

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	u32 mId;         // _18
	u16 mDelay;      // _1C
	u16 mTableIndex; // _1E

	static inline Rappa* getRappa(u8 id)
	{
		P2ASSERTLINE(28, sRappa[id]);
		return sRappa[id];
	}

	static Rappa* sRappa[2];
	static u16 cBaseWaitTime;
	static f32 cRatio;
};

} // namespace PSGame

#endif
