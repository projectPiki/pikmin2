#ifndef _EFX_TPARTICLECALLBACK_KCHYODARE_H
#define _EFX_TPARTICLECALLBACK_KCHYODARE_H

struct JPAParticleCallBack {
	virtual void _00() = 0;                               // _00
	virtual void _04() = 0;                               // _04
	virtual void draw(JPABaseEmitter*, JPABaseParticle*); // _08

	// _00 VTBL
};

namespace efx {
struct TParticleCallBack_KchYodare : public JPAParticleCallBack {
	virtual ~TParticleCallBack_KchYodare();                  // _00
	virtual void execute(JPABaseEmitter*, JPABaseParticle*); // _04
	virtual void draw(JPABaseEmitter*, JPABaseParticle*);    // _08
	virtual void init(JPABaseEmitter*, JPABaseParticle*);    // _0C

	// _00 VTBL
};
} // namespace efx

#endif
