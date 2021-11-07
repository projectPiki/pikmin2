#ifndef _JPAFIELDAIR_H
#define _JPAFIELDAIR_H

struct JPAFieldAir {
	virtual ~JPAFieldAir();                                    // _00
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*); // _04
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*,
	                  JPABaseParticle*); // _08

	// _00 VTBL
};

#endif
