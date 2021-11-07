#ifndef _JPAFIELDVORTEX_H
#define _JPAFIELDVORTEX_H

struct JPAFieldVortex {
	virtual ~JPAFieldVortex();                                 // _00
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*); // _04
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*,
	                  JPABaseParticle*); // _08

	// _00 VTBL
};

#endif
