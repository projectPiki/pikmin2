#ifndef _EFX_TFUEACT_H
#define _EFX_TFUEACT_H

#include "efx/TSync.h"

namespace efx {
struct TFueactBiriBase : public TSync {
	inline TFueactBiriBase(u16 effectID)
	    : TSync(effectID)
	{
	}

	virtual void doExecuteEmitterOperation(JPABaseEmitter*); // _38
	virtual ~TFueactBiriBase() { }                           // _48 (weak)

	// _00      = VTBL
	// _00-_10  = TSync
	Matrixf* mMtx;           // _10
	JGeometry::TVec3f* mPos; // _14
};

struct TFueactBiri1 : public TFueactBiriBase {
	inline TFueactBiri1()
	    : TFueactBiriBase(PID_FueActBiri_1)
	{
	}

	virtual ~TFueactBiri1() { } // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TFueactBiriBase
};

struct TFueactBiri2 : public TFueactBiriBase {
	inline TFueactBiri2()
	    : TFueactBiriBase(PID_FueActBiri_2)
	{
	}

	virtual ~TFueactBiri2() { } // _48 (weak)

	// _00      = VTBL
	// _00-_18  = TFueactBiriBase
};

struct TFueactCircle : public TBase, public JPAEmitterCallBack, public JPAParticleCallBack {
	inline TFueactCircle()
	    : mEmitter(nullptr)
	{
	}

	virtual bool create(Arg*); // _08
	virtual void forceKill()
	{
		particleMgr->forceKill(mEmitter);
		mEmitter = nullptr;
	} // _0C (weak)
	virtual void fade()
	{
		particleMgr->fade(mEmitter);
		mEmitter = nullptr;
	}                                                        // _10 (weak)
	virtual void execute(JPABaseEmitter*);                   // _44 (weak)
	virtual void execute(JPABaseEmitter*, JPABaseParticle*); // _48 (weak)
	virtual void executeAfter(JPABaseEmitter*);              // _4C (weak)
	virtual ~TFueactCircle() { }                             // _50 (weak)

	// _00 VTBL
	// _04 = JPAEmitterCallBack
	// _08 = JPAParticleCallBack
	Matrixf* mMtx;            // _0C
	Vector3f* mPos;           // _10
	JPABaseEmitter* mEmitter; // _14
};

struct TFueact : public TBase {
	virtual bool create(Arg*)
	{
		bool ret = false;
		if (mCircle.create(nullptr)) {
			if (mBiri1.create(nullptr)) {
				if (mBiri2.create(nullptr)) {
					ret = true;
				}
			}
		}
		return ret;
	} // _08 (weak)
	virtual void forceKill()
	{
		mCircle.forceKill();
		mBiri1.forceKill();
		mBiri2.forceKill();
	} // _0C (weak)
	virtual void fade()
	{
		mCircle.fade();
		mBiri1.fade();
		mBiri2.fade();
	} // _10 (weak)

	// _00      = VTBL
	TFueactCircle mCircle; // _04
	TFueactBiri1 mBiri1;   // _1C
	TFueactBiri2 mBiri2;   // _34
};
} // namespace efx

#endif
