#ifndef _PSAUTOBGM_CYCLE_H
#define _PSAUTOBGM_CYCLE_H

#include "types.h"
#include "PSAutoBgm/Track.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"

struct JASTrack;

namespace PSAutoBgm {

struct Module;
/**
 * @size = 0x3D
 */
struct CycleBase {
	virtual void play(JASTrack*); // _08
	virtual void getCycleType();  // _0C (weak)
	virtual void avoidCheck();    // _10 (weak)

	void cycleTop(JASTrack*);
	void checkCloser(JASTrack*);

	// _00  = VTABLE
	Module* _04;     // _04
	u8 _08;          // _08
	u8 _09[0x3];     // _09 - possibly padding
	JKRDisposer _0C; // _0C
	u8 _24;          // _24
	u8 _25[0x3];     // _25 - possibly padding
	JSUPtrLink _28;  // _28
	u8 _38;          // _38
	u8 _39[0x3];     // _39 - possibly padding? unsure
	u8 _3C;          // _3C
};

/**
 * @size = 0x68
 */
struct OnCycle : public CycleBase {
	OnCycle(Module*);

	virtual void play(JASTrack*); // _08
	virtual void getCycleType();  // _0C (weak)
	virtual void avoidCheck();    // _10

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
