#ifndef _EFX_TPARTICLECALLBACK_TANKFIRE_H
#define _EFX_TPARTICLECALLBACK_TANKFIRE_H

/*
    __vt__Q23efx26TParticleCallBack_TankFire:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23efx26TParticleCallBack_TankFireFv
    .4byte execute__Q23efx26TParticleCallBack_TankFireFP14JPABaseEmitterP15JPABaseParticle
    .4byte draw__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle
    .4byte init__Q23efx26TParticleCallBack_TankFireFP14JPABaseEmitterP15JPABaseParticle
*/

struct JPAParticleCallBack {
	virtual ~JPAParticleCallBack();                          // _08 (weak)
	virtual void execute(JPABaseEmitter*, JPABaseParticle*); // _0C
	virtual void draw(JPABaseEmitter*, JPABaseParticle*);    // _10 (weak)
};

namespace efx {
struct TParticleCallBack_TankFire : public JPAParticleCallBack {
	virtual ~TParticleCallBack_TankFire();                   // _08 (weak)
	virtual void execute(JPABaseEmitter*, JPABaseParticle*); // _0C
	virtual void init(JPABaseEmitter*, JPABaseParticle*);    // _14
};
} // namespace efx

#endif
