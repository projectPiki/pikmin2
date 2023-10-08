#ifndef _PSAUTOBGM_CYCLE_H
#define _PSAUTOBGM_CYCLE_H

#include "JSystem/JAudio/JAD/JADUtility.h"
#include "types.h"
#include "PSAutoBgm/Track.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"

struct JASTrack;

namespace PSAutoBgm {

struct Module;
/**
 * @size = 0x40
 */
struct CycleBase {
	virtual void play(JASTrack*);            // _08
	virtual u32 getCycleType() { return 1; } // _0C (weak)
	virtual u32 avoidCheck() { return 0; }   // _10 (weak)

	u32 cycleTop(JASTrack*);
	u32 checkCloser(JASTrack*);

	// _00  = VTABLE
	Module* mModule;                   // _04
	u8 _08;                            // _08
	JADUtility::PrmSlider<u8> mSlider; // _0C
	u8 _3C;                            // _3C
};

/**
 * @size = 0x68
 */
struct OnCycle : public CycleBase {
	OnCycle(Module*);

	virtual void play(JASTrack*);            // _08
	virtual u32 getCycleType() { return 0; } // _0C (weak)
	virtual u32 avoidCheck();                // _10

	void setTip(JASTrack*);
	void historiesAreSameAll();

	// _00      = VTABLE
	// _04-_3D  = CycleBase
	JSUPtrList _40; // _40
	u8 _4C[0x4];    // _4C - unknown
	JSUPtrList _50; // _50
	u16 _5C;        // _5C
	u8 _5E[0x2];    // _5E - unknown
	u16 _60;        // _60
	u8 _62[0x2];    // _62 - unknown
	u8 _64[0x4];    // _64 - unknown
};

/**
 * @size = 0x40
 */
struct OffCycle : public CycleBase {
	OffCycle(Module*);
};

} // namespace PSAutoBgm

#endif
