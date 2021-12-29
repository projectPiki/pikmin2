#ifndef _JPAFIELDGRAVITY_H
#define _JPAFIELDGRAVITY_H

/*
    __vt__15JPAFieldGravity:
    .4byte 0
    .4byte 0
    .4byte __dt__15JPAFieldGravityFv
    .4byte prepare__15JPAFieldGravityFP18JPAEmitterWorkDataP13JPAFieldBlock
    .4byte
   calc__15JPAFieldGravityFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle
    .4byte 0
*/

struct JPAFieldGravity {
	virtual ~JPAFieldGravity();                                // _00
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*); // _04
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*,
	                  JPABaseParticle*); // _08
	virtual void _0C() = 0;              // _0C

	// _00 VTBL
};

#endif
