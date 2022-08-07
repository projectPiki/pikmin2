#ifndef _PSAUTOBGM_MELOARR_H
#define _PSAUTOBGM_MELOARR_H

#include "types.h"
#include "JSystem/JAD/JADHioNode.h"
#include "JSystem/JSupport/JSUList.h"
#include "PSAutoBgm/Track.h"

namespace PSAutoBgm {

// not sure of size of this, just based off PSAutoBgm_MeloArranger.cpp
struct MeloArrArg {
	u8 _00; // _00
	u8 _01; // _01
};

// this has some funky inheritance going on I think?
struct MeloArrBase : public JADHioNode, JSUPtrLink {
	// JADHioNode vtable:
	// virtual void ~MeloArrBase() = 0;     // _08
	// virtual void _0C() = 0;              // _0C - might just be gap
	// _10 is a thunk of ~MeloArrBase()

	// MeloArrBase vtable:
	virtual void directOn(Track*);          // _14 (weak)
	virtual void directOff(Track*);         // _18 (weak)
	virtual void pre(MeloArrArg&);          // _1C (weak)
	virtual void post(MeloArrArg&);         // _20 (weak)
	virtual void avoidChk(MeloArrArg&) = 0; // _24
	virtual ~MeloArrBase();                 // _28 (weak)

	// _00-_10  = JSUPtrLink
	// _10      = JADHioNode vtable
	// _14      = MeloArrBase vtable
};

/**
 * @size = 0x10
 */
struct MeloArrMgr : public JADHioNode {
	virtual ~MeloArrBase(); // _08 (weak)

	void isToAvoid(MeloArrArg&);

	// _00 = VTABLE
	JSUPtrList _04; // _04
};

/**
 * @size = 0x20
 */
struct MeloArr_RandomAvoid : public MeloArrBase {
	// JADHioNode vtable:
	// virtual void ~MeloArr_RandomAvoid() = 0; // _08
	// virtual void _0C() = 0;                  // _0C - might just be gap
	// _10 is a thunk of ~MeloArr_RandomAvoid()

	// MeloArrBase vtable:
	virtual void avoidChk(MeloArrArg&); // _24
	virtual ~MeloArr_RandomAvoid();     // _28 (weak)

	u8 _18;      // _18
	u8 _19;      // _19
	u8 _1A[0x2]; // _1A - possibly padding
	float _1C;   // _1C
};

} // namespace PSAutoBgm

#endif
