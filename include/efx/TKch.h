#ifndef _EFX_TKCH_H
#define _EFX_TKCH_H

#include "efx/TSimple.h"
#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"
#include "efx/TOneEmitter.h"

namespace efx {
struct TKchApSand : public TSimple3 {
	inline TKchApSand()
	    : TSimple3(PID_KchApSand_1, PID_KchApSand_2, PID_KchApSand_3)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_18  = TSimple3
};

struct TKchApWat : public TSimple5 {
	inline TKchApWat()
	    : TSimple5(PID_KchApWat_1, PID_KchApWat_2, PID_KchApWat_3, PID_KchApWat_4, PID_KchApWat_5)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_24  = TSimple5
};

struct TKchCryAB : public TChasePos2 {
	inline TKchCryAB(Vector3f* position)
	    : TChasePos2(position, PID_KchCryAB_1, PID_KchCryAB_2)
	{
	}

	void setGlobalScale(f32);

	// _00      = VTBL
	// _00-_2C  = TChasePos2
};

struct TKchCryInd : public TChaseMtxT {
	inline TKchCryInd()
	    : TChaseMtxT(PID_KchCryInd)
	{
	}

	virtual ~TKchCryInd() { } // _48 (weak)

	void setGlobalScale(f32);

	// _00      = VTBL
	// _00-_14  = TChaseMtxT
};

struct TKchDamage : public TSimple4 {
	inline TKchDamage()
	    : TSimple4(PID_KchDamage_1, PID_KchDamage_2, PID_KchDamage_3, PID_KchDamage_4)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct TKchDeadHana : public TChaseMtx2 {
	inline TKchDeadHana()
	    : TChaseMtx2(nullptr, PID_KchDeadHana_1, PID_KchDeadHana_2)
	{
	}

	void setGlobalScale(f32);

	// _00      = VTBL
	// _00-_2C  = TChaseMtx2
};

struct TKchDiveSand : public TChasePosYRot3 {
	inline TKchDiveSand(Vector3f* position, f32* rotation)
	    : TChasePosYRot3(position, rotation, PID_KchDiveSand_1, PID_KchDiveSand_2, PID_KchDiveSand_3)
	{
	}

	void setGlobalScale(f32);

	// _00      = VTBL
	// _00-_4C  = TChasePosYRot3
};

struct TKchDiveWat : public TChasePosYRot3 {
	inline TKchDiveWat(Vector3f* position, f32* rotation)
	    : TChasePosYRot3(position, rotation, PID_KchDiveWat_1, PID_KchDiveWat_2, PID_KchDiveWat_3)
	{
	}

	void setGlobalScale(f32);

	// _00      = VTBL
	// _00-_4C  = TChasePosYRot3
};

struct TKchDownsmoke : public TSimple1 {
	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

struct TKchFlickSand : public TSimple2 {
	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TKchSmokeHana : public TChaseMtx {
	inline TKchSmokeHana()
	    : TChaseMtx(PID_KchSmokeHana, nullptr)
	{
	}

	virtual ~TKchSmokeHana() { } // _48 (weak)

	void setGlobalScale(f32);

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TKchYodareHitGr : public TOneEmitterSimple {
	inline TKchYodareHitGr()
	    : TOneEmitterSimple(PID_KchYodareHitGr)
	{
	}

	virtual ~TKchYodareHitGr() { } // _3C (weak)

	// _00      = VTBL
	// _00-_1C  = TOneEmitterSimple
};

struct TKchYodareHitWat : public TOneEmitterSimple {
	inline TKchYodareHitWat()
	    : TOneEmitterSimple(PID_KchYodareHitWat)
	{
	}

	virtual ~TKchYodareHitWat() { } // _3C (weak)

	// _00      = VTBL
	// _00-_1C  = TOneEmitterSimple
};

struct TParticleCallBack_KchYodare : public JPAParticleCallBack {
	inline TParticleCallBack_KchYodare() { }

	virtual ~TParticleCallBack_KchYodare() { }               // _08 (weak)
	virtual void execute(JPABaseEmitter*, JPABaseParticle*); // _0C
	virtual void init(JPABaseEmitter*, JPABaseParticle*);    // _14

	// _00 VTBL
	TKchYodareHitGr m_hitGround; // _04
	TKchYodareHitWat m_hitWater; // _30
};

struct TKchYodareBaseChaseMtx : public TChaseMtx {
	inline TKchYodareBaseChaseMtx(Mtx mtx, u16 effectID)
	    : TChaseMtx(effectID, (Matrixf*)mtx)
	{
		m_scale = 0.0f;
	}

	virtual bool create(Arg*); // _08
	virtual void forceKill()   // _0C (weak)
	{
		TChaseMtx::forceKill();
		m_particleCallBack.m_hitGround.forceKill();
		m_particleCallBack.m_hitWater.forceKill();
	}
	virtual void fade();            // _10 (weak)
	virtual void startDemoDrawOff() // _40 (weak)
	{
		m_flags |= 1;
		m_particleCallBack.m_hitGround.startDemoDrawOff();
		m_particleCallBack.m_hitWater.startDemoDrawOff();
	}
	virtual void endDemoDrawOn() // _44 (weak)
	{
		m_flags &= ~1;
		m_particleCallBack.m_hitGround.endDemoDrawOn();
		m_particleCallBack.m_hitWater.endDemoDrawOn();
	}
	virtual ~TKchYodareBaseChaseMtx() { } // _48 (weak)

	void setGlobalScale(f32);

	// _00      = VTBL
	// _00-_14  = TChaseMtx
	TParticleCallBack_KchYodare m_particleCallBack; // _14
	f32 m_scale;                                    // _50
};

struct TKchAttackYodare : public TKchYodareBaseChaseMtx {
	TKchAttackYodare(Mtx mtx);

	virtual ~TKchAttackYodare() { } // _48 (weak)

	// _00      = VTBL
	// _00-_44  = TKchYodareBaseChaseMtx
};

struct TKchDeadYodare : public TKchYodareBaseChaseMtx {
	TKchDeadYodare(Mtx mtx);

	virtual ~TKchDeadYodare() { } // _48 (weak)

	// _00      = VTBL
	// _00-_44  = TKchYodareBaseChaseMtx
};

struct TKchYodare : public TKchYodareBaseChaseMtx {
	TKchYodare(Mtx mtx);

	virtual ~TKchYodare() { } // _48 (weak)

	// _00      = VTBL
	// _00-_44  = TKchYodareBaseChaseMtx
};

} // namespace efx

#endif
