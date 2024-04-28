#ifndef _PSAUTOBGM_MELOARR_H
#define _PSAUTOBGM_MELOARR_H

#include "types.h"
#include "JSystem/JAudio/JAD/JADHioNode.h"
#include "JSystem/JSupport/JSUList.h"
#include "PSAutoBgm/Track.h"

namespace PSAutoBgm {

// not sure of size of this, just based off PSAutoBgm_MeloArranger.cpp
struct MeloArrArg {
	MeloArrArg()
	    : mTrackIndex(0xFF)
	    , mCycleNum(0xFF)
	{
	}

	void assertCheck() const;

	u8 mTrackIndex; // _00
	u8 mCycleNum;   // _01
};

// this has some funky inheritance going on I think?
struct MeloArrBase : public JSULink<MeloArrBase>, JADHioNode {
	MeloArrBase(char* name)
	    : JSULink<MeloArrBase>(this)
	    , JADHioNode(name)
	{
		_18        = 1;
		mIsEnabled = false;
	}
	// JADHioNode vtable:
	// virtual void ~MeloArrBase() = 0;     // _08
	// virtual void _0C() = 0;              // _0C - might just be gap
	// _10 is a thunk of ~MeloArrBase()

	// MeloArrBase vtable:
	virtual void directOn(Track*) { mIsEnabled = true; }   // _14 (weak)
	virtual void directOff(Track*) { mIsEnabled = false; } // _18 (weak)
	virtual void pre(MeloArrArg&) { }                      // _1C (weak)
	virtual void post(MeloArrArg&) { }                     // _20 (weak)
	virtual bool avoidChk(MeloArrArg&) = 0;                // _24
	virtual ~MeloArrBase() { }                             // _28 (weak)

	// _00-_10  = JSUPtrLink
	// _10 		= JADHioNode vtable
	// _14      = MeloArrBase vtable
	u8 _18;          // _18
	bool mIsEnabled; // _19
};

/**
 * @size = 0x10
 */
struct MeloArrMgr : public JADHioNode {
	MeloArrMgr()
	    : JADHioNode(nullptr)
	    , mList()
	    , mTrackMaskIds(0)
	    , mIsActive(0)
	{
	}

	virtual ~MeloArrMgr() { } // _08 (weak)

	bool isToAvoid(MeloArrArg&);

	// _00 = VTABLE
	JSUList<MeloArrBase> mList; // _04
	u16 mTrackMaskIds;          // _10
	u8 mIsActive;               // _12
};

/**
 * @size = 0x20
 */
struct MeloArr_RandomAvoid : public MeloArrBase {
	MeloArr_RandomAvoid(char* name)
	    : MeloArrBase(name)
	{
		mChance = 0.6f;
	}
	// JADHioNode vtable:
	// virtual void ~MeloArr_RandomAvoid() = 0; // _08
	// virtual void _0C() = 0;                  // _0C - might just be gap
	// _10 is a thunk of ~MeloArr_RandomAvoid()

	// MeloArrBase vtable:
	virtual bool avoidChk(MeloArrArg&); // _24
	virtual ~MeloArr_RandomAvoid() { }  // _28 (weak)

	f32 mChance; // _1C
};

} // namespace PSAutoBgm

#endif
