#ifndef _EFX_TTANK_H
#define _EFX_TTANK_H

#include "efx/TChaseMtx.h"
#include "efx/TOneEmitter.h"

namespace efx {
struct TTankFireHit;
struct TTankWatHit;
struct TTankWat;

struct TParticleCallBack_TankFire : public JPAParticleCallBack {
	TParticleCallBack_TankFire()
	    : mMaxDistance(1000.0f)
	    , mEfxHit(nullptr)
	{
	}

	virtual ~TParticleCallBack_TankFire() { }                // _08 (weak)
	virtual void execute(JPABaseEmitter*, JPABaseParticle*); // _0C
	virtual void init(JPABaseEmitter*, JPABaseParticle*);    // _14

	// _00      = VTBL
	f32 mMaxDistance;      // _04
	TTankFireHit* mEfxHit; // _08
};

struct TTankFireHit : public TOneEmitterSimple {
	TTankFireHit()
	    : TOneEmitterSimple(PID_TankFireHit)
	{
	}

	virtual ~TTankFireHit() { } // _3C (weak)

	// _00      = VTBL
	// _00-_18  = TOneEmitterSimple
};

struct TTankFireABC : public TChaseMtx3 {
	inline TTankFireABC(Mtx mtx)
	    : TChaseMtx3(mtx, PID_TankFireABC_1, PID_TankFireABC_2, PID_TankFireABC_3)
	{
	}

	virtual bool create(Arg*); // _08
	virtual void forceKill()   // _0C (weak)
	{
		TChaseMtx3::forceKill();
		if (mParticleCallBack.mEfxHit != nullptr) {
			mParticleCallBack.mEfxHit->forceKill();
		}
	}
	virtual void fade() // _10 (weak)
	{
		TChaseMtx3::fade();
		if (mParticleCallBack.mEfxHit) {
			mParticleCallBack.mEfxHit->fade();
		}
	}
	virtual void startDemoDrawOff() // _14 (weak)
	{
		TChaseMtx3::startDemoDrawOff();
		mEfxFireHit.startDemoDrawOff();
	}
	virtual void endDemoDrawOn() // _18 (weak)
	{
		TChaseMtx3::endDemoDrawOn();
		mEfxFireHit.endDemoDrawOn();
	}

	// _00      = VTBL
	// _00-_40  = TChaseMtx3
	TParticleCallBack_TankFire mParticleCallBack; // _40
	TTankFireHit mEfxFireHit;                     // _4C
};

struct TTankFireIND : public TChaseMtx {
	TTankFireIND(Mtx mtx)
	    : TChaseMtx(PID_TankFireIND, (Matrixf*)mtx)
	{
	}

	virtual bool create(Arg*);  // _08
	virtual ~TTankFireIND() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
	TParticleCallBack_TankFire mParticleCallBack;
};

struct TTankFire : public TBase {
	TTankFire(Mtx mtx)
	    : mEfxABC(mtx)
	    , mEfxIND(mtx)
	{
	}

	virtual bool create(Arg*); // _08
	virtual void forceKill()
	{
		mEfxABC.forceKill();
		mEfxIND.forceKill();
	}                   // _0C (weak)
	virtual void fade() // _10 (weak)
	{
		mEfxABC.fade();
		mEfxIND.fade();
	}

	// _00      = VTBL
	TTankFireABC mEfxABC; // _04
	TTankFireIND mEfxIND; // _6C
};

struct TTankFireYodare : public TChaseMtx {
	TTankFireYodare(Mtx mtx)
	    : TChaseMtx(PID_TankFireYodare, (Matrixf*)mtx)
	{
	}

	virtual ~TTankFireYodare() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TTankEffect {
	TTankEffect(Mtx mtx)
	    : mEfxFire(mtx)
	    , mEfxFireYodare(mtx)
	{
	}

	TTankFire mEfxFire;             // _00
	TTankFireYodare mEfxFireYodare; // _8C
};

struct TTankWatHit : public TOneEmitterSimple {
	TTankWatHit()
	    : TOneEmitterSimple(PID_TankWatHit)
	{
	}

	virtual ~TTankWatHit() { } // _3C (weak)

	// _00      = VTBL
	// _00-_18  = TOneEmitterSimple
};

struct TTankWatYodare : public TChaseMtx {
	TTankWatYodare(Mtx mtx)
	    : TChaseMtx(PID_TankWatYodare, (Matrixf*)mtx)
	{
	}

	virtual ~TTankWatYodare() { } // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TTankWat : public TChaseMtx4 {
	inline TTankWat(Mtx mtx)
	    : TChaseMtx4(mtx, PID_TankWat_1, PID_TankWat_2, PID_TankWat_3, PID_TankWat_4)
	{
	}

	virtual bool create(Arg*); // _08
	virtual void forceKill()
	{
		TSyncGroup4::forceKill();
		if (mParticleCallBack.mEfxHit != nullptr) {
			mParticleCallBack.mEfxHit->forceKill();
		}
	}                   // _0C (weak)
	virtual void fade() // _10 (weak)
	{
		TChaseMtx4::fade();
		if (mParticleCallBack.mEfxHit) {
			mParticleCallBack.mEfxHit->fade();
		}
	}
	virtual void startDemoDrawOff() // _14 (weak)
	{
		TChaseMtx4::startDemoDrawOff();
		mEfxHit.startDemoDrawOff();
	}
	virtual void endDemoDrawOn() // _18 (weak)
	{
		TChaseMtx4::endDemoDrawOn();
		mEfxHit.endDemoDrawOn();
	}

	// _00      = VTBL
	// _00-_54  = TChaseMtx4
	TParticleCallBack_TankFire mParticleCallBack; // _54
	TTankWatHit mEfxHit;                          // _60
};

struct TWtankEffect {
	inline TWtankEffect(Mtx mtx)
	    : mEfxWat(mtx)
	    , mEfxWatYodare(mtx)
	{
	}

	TTankWat mEfxWat;             // _00
	TTankWatYodare mEfxWatYodare; // _8C
};

} // namespace efx

#endif
