#ifndef _JPAPARTICLECALLBACK_H
#define _JPAPARTICLECALLBACK_H

struct JPAParticleCallBack {
	virtual void _00() = 0;                                  // _00
	virtual void execute(JPABaseEmitter*, JPABaseParticle*); // _04
	virtual void draw(JPABaseEmitter*, JPABaseParticle*);    // _08
	virtual void _0C() = 0;                                  // _0C
	virtual void _10() = 0;                                  // _10
	virtual void _14() = 0;                                  // _14
	virtual void _18() = 0;                                  // _18
	virtual void _1C() = 0;                                  // _1C

	// _00 VTBL
};

#endif
