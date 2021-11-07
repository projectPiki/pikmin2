#ifndef _JPAFIELDGRAVITY_H
#define _JPAFIELDGRAVITY_H

struct JPAFieldGravity {
	virtual ~JPAFieldGravity();                                // _00
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*); // _04
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*,
	                  JPABaseParticle*); // _08
	virtual void _0C() = 0;              // _0C

	// _00 VTBL
};

#endif
