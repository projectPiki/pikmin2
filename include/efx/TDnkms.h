#ifndef _EFX_TDNKMS_H
#define _EFX_TDNKMS_H

#include "efx/TSync.h"
#include "efx/TChasePos.h"

namespace efx {
struct TDnkmsHoudenA : public TChasePos {
	inline TDnkmsHoudenA()
	    : TChasePos(PID_DnkmsHoudenA)
	{
	}

	virtual ~TDnkmsHoudenA() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TDnkmsHoudenB : public TChasePos {
	inline TDnkmsHoudenB()
	    : TChasePos(PID_DnkmsHoudenB)
	{
	}

	virtual ~TDnkmsHoudenB() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChasePos
};

struct TDnkmsThunderA : public TSync {
	inline TDnkmsThunderA()
	    : TSync(PID_DnkmsThunderA)
	{
	}

	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TDnkmsThunderA() { }                            // _48 (weak)

	inline void setupEffect(Vector3f* pos, Vector3f* partnerPos)
	{
		mPosition        = pos;
		mPartnerPosition = partnerPos;
	}

	// _00      = VTBL
	// _00-_10  = TSync
	Vector3f* mPosition;        // _10
	Vector3f* mPartnerPosition; // _14
};

struct TDnkmsThunderB : public TSync {
	inline TDnkmsThunderB()
	    : TSync(PID_DnkmsThunderB)
	{
		// mEffectID = PID_DnkmsThunderB;
	}

	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TDnkmsThunderB() { }                            // _48 (weak)

	inline void setupEffect(Vector3f* pos, Vector3f* partnerPos)
	{
		mPosition        = pos;
		mPartnerPosition = partnerPos;
	}

	// _00      = VTBL
	// _00-_10  = TSync
	Vector3f* mPosition;        // _10
	Vector3f* mPartnerPosition; // _14
};

struct TDnkmsEffect {
	TDnkmsEffect()
	    : mHoudenA1()
	    , mHoudenA2()
	    , mHoudenB()
	    , mThunderA()
	    , mThunderB()
	{
	}

	inline void startCharge()
	{
		mHoudenB.mPosition = mPosition;
		mHoudenB.create(nullptr);
	}

	inline void startDischarge(Vector3f* partnerPos)
	{
		mPartnerPosition = partnerPos;

		mHoudenA1.mPosition = mPosition;
		mHoudenA1.create(nullptr);
		mHoudenA2.mPosition = mPartnerPosition;
		mHoudenA2.create(nullptr);

		mThunderA.setupEffect(mPosition, mPartnerPosition);
		mThunderB.setupEffect(mPosition, mPartnerPosition);

		mThunderA.create(nullptr);
		mThunderB.create(nullptr);
	}

	inline void fade()
	{
		mHoudenA1.fade();
		mHoudenA2.fade();
		mHoudenB.fade();
		mThunderA.fade();
		mThunderB.fade();
	}

	inline void effectDrawOn()
	{
		mHoudenA1.endDemoDrawOn();
		mHoudenA2.endDemoDrawOn();
		mHoudenB.endDemoDrawOn();
		mThunderA.endDemoDrawOn();
		mThunderB.endDemoDrawOn();
	}

	inline void effectDrawOff()
	{
		mHoudenA1.startDemoDrawOff();
		mHoudenA2.startDemoDrawOff();
		mHoudenB.startDemoDrawOff();
		mThunderA.startDemoDrawOff();
		mThunderB.startDemoDrawOff();
	}

	Vector3f* mPosition;        // _00
	Vector3f* mPartnerPosition; // _04
	TDnkmsHoudenA mHoudenA1;    // _08, discharge effect (self)
	TDnkmsHoudenA mHoudenA2;    // _1C, discharge effect (partner)
	TDnkmsHoudenB mHoudenB;     // _30, charge effect
	TDnkmsThunderA mThunderA;   // _44
	TDnkmsThunderB mThunderB;   // _5C
};
} // namespace efx

#endif
