#ifndef _EFX_TKCH_H
#define _EFX_TKCH_H

#include "efx/TSimple.h"
#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"
#include "efx/TOneEmitter.h"

namespace efx {
struct TParticleCallBack_KchYodare : public JPAParticleCallBack {
	virtual ~TParticleCallBack_KchYodare();                  // _08 (weak)
	virtual void execute(JPABaseEmitter*, JPABaseParticle*); // _0C
	virtual void init(JPABaseEmitter*, JPABaseParticle*);    // _14

	// _00 VTBL
};

struct TKchApSand : public TSimple3 {
	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_18  = TSimple3
};

struct TKchApWat : public TSimple5 {
	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_24  = TSimple5
};

struct TKchCryAB : public TChasePos2 {
	void setGlobalScale(f32);

	// _00      = VTBL
	// _00-_2C  = TChasePos2
};

struct TKchCryInd : public TChasePos2 {
	virtual ~TKchCryInd(); // _48 (weak)

	void setGlobalScale(f32);

	// _00      = VTBL
	// _00-_14  = TChaseMtxT
};

struct TKchDamage : public TSimple4 {
	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_1C  = TSimple4
};

struct TKchDeadHana : public TChaseMtx2 {
	void setGlobalScale(f32);

	// _00      = VTBL
	// _00-_2C  = TChaseMtx2
};

struct TKchDiveSand : public TChasePosYRot3 {
	void setGlobalScale(f32);

	// _00      = VTBL
	// _00-_4C  = TChasePosYRot3
};

struct TKchDiveWat : public TChasePosYRot3 {
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
	virtual ~TKchSmokeHana(); // _48 (weak)

	void setGlobalScale(f32);

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TKchYodareBaseChaseMtx : public TChaseMtx {
	virtual bool create(Arg*);         // _08
	virtual void forceKill();          // _0C (weak)
	virtual void fade();               // _10 (weak)
	virtual void startDemoDrawOff();   // _40 (weak)
	virtual void endDemoDrawOn();      // _44 (weak)
	virtual ~TKchYodareBaseChaseMtx(); // _48 (weak)

	void setGlobalScale(f32);

	// _00      = VTBL
	// _00-_14  = TChaseMtx
};

struct TKchAttackYodare : public TKchYodareBaseChaseMtx {
	TKchAttackYodare(f32 (*)[4]);

	virtual ~TKchAttackYodare(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TKchYodareBaseChaseMtx
};

struct TKchDeadYodare : public TKchYodareBaseChaseMtx {
	TKchDeadYodare(f32 (*)[4]);

	virtual ~TKchDeadYodare(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TKchYodareBaseChaseMtx
};

struct TKchYodare : public TKchYodareBaseChaseMtx {
	TKchYodare(f32 (*)[4]);

	virtual ~TKchYodare(); // _48 (weak)

	// _00      = VTBL
	// _00-_14  = TKchYodareBaseChaseMtx
};

struct TKchYodareHitGr : public TOneEmitterSimple {
	virtual ~TKchYodareHitGr(); // _3C (weak)

	// _00      = VTBL
	// _00-_18  = TOneEmitterSimple
};

struct TKchYodareHitWat : public TOneEmitterSimple {
	virtual ~TKchYodareHitWat(); // _3C (weak)

	// _00      = VTBL
	// _00-_18  = TOneEmitterSimple
};
} // namespace efx

#endif
