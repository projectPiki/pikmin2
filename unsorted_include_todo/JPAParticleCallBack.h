#ifndef _JPAPARTICLECALLBACK_H
#define _JPAPARTICLECALLBACK_H

/*
    __vt__19JPAParticleCallBack:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte execute__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle
    .4byte draw__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle
*/

struct JPAParticleCallBack {
	virtual void _08() = 0;                                  // _08
	virtual void execute(JPABaseEmitter*, JPABaseParticle*); // _0C (weak)
	virtual void draw(JPABaseEmitter*, JPABaseParticle*);    // _10 (weak)

	~JPAParticleCallBack();
};

#endif
