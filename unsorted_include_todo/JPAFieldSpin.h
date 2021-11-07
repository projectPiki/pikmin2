#ifndef _JPAFIELDSPIN_H
#define _JPAFIELDSPIN_H

struct JPAFieldSpin {
	virtual ~JPAFieldSpin();                                   // _00
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*); // _04
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*,
	                  JPABaseParticle*); // _08

	// _00 VTBL
};

#endif
