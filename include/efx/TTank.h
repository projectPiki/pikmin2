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
	    : _04(1000.0f)
	    , m_efxHit(nullptr)
	{
	}

	virtual ~TParticleCallBack_TankFire() { }                // _08 (weak)
	virtual void execute(JPABaseEmitter*, JPABaseParticle*); // _0C
	virtual void init(JPABaseEmitter*, JPABaseParticle*);    // _14

	// _00      = VTBL
	f32 _04;                // _04
	TTankFireHit* m_efxHit; // _08
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

	virtual bool create(Arg*);   // _08
	virtual void forceKill() { } // _0C (weak)
	virtual void fade()          // _10 (weak)
	{
		TChaseMtx3::fade();
		if (m_particleCallBack.m_efxHit) {
			m_particleCallBack.m_efxHit->fade();
		}
	}
	virtual void startDemoDrawOff() // _14 (weak)
	{
		TChaseMtx3::startDemoDrawOff();
		m_efxFireHit.startDemoDrawOff();
	}
	virtual void endDemoDrawOn() // _18 (weak)
	{
		TChaseMtx3::endDemoDrawOn();
		m_efxFireHit.endDemoDrawOn();
	}

	// _00      = VTBL
	// _00-_40  = TChaseMtx3
	TParticleCallBack_TankFire m_particleCallBack; // _40
	TTankFireHit m_efxFireHit;                     // _4C
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
	TParticleCallBack_TankFire m_particleCallBack;
};

struct TTankFire : public TBase {
	TTankFire(Mtx mtx)
	    : m_efxABC(mtx)
	    , m_efxIND(mtx)
	{
	}

	virtual bool create(Arg*); // _08
	virtual void forceKill();  // _0C (weak)
	virtual void fade()        // _10 (weak)
	{
		m_efxABC.fade();
		m_efxIND.fade();
	}

	// _00      = VTBL
	TTankFireABC m_efxABC; // _04
	TTankFireIND m_efxIND; // _6C
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
	    : m_efxFire(mtx)
	    , m_efxFireYodare(mtx)
	{
	}

	TTankFire m_efxFire;             // _00
	TTankFireYodare m_efxFireYodare; // _8C
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
	virtual void forceKill();  // _0C (weak)
	virtual void fade()        // _10 (weak)
	{
		TChaseMtx4::fade();
		if (m_particleCallBack.m_efxHit) {
			m_particleCallBack.m_efxHit->fade();
		}
	}
	virtual void startDemoDrawOff() // _14 (weak)
	{
		TChaseMtx4::startDemoDrawOff();
		m_efxHit.startDemoDrawOff();
	}
	virtual void endDemoDrawOn() // _18 (weak)
	{
		TChaseMtx4::endDemoDrawOn();
		m_efxHit.endDemoDrawOn();
	}

	// _00      = VTBL
	// _00-_54  = TChaseMtx4
	TParticleCallBack_TankFire m_particleCallBack; // _54
	TTankWatHit m_efxHit;                          // _60
};

struct TWtankEffect {
	inline TWtankEffect(Mtx mtx)
	    : m_efxWat(mtx)
	    , m_efxWatYodare(mtx)
	{
	}

	TTankWat m_efxWat;             // _00
	TTankWatYodare m_efxWatYodare; // _8C
};

} // namespace efx

#endif
