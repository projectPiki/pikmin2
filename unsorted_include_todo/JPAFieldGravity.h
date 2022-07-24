#ifndef _JPAFIELDGRAVITY_H
#define _JPAFIELDGRAVITY_H

/*
    __vt__15JPAFieldGravity:
    .4byte 0
    .4byte 0
    .4byte __dt__15JPAFieldGravityFv
    .4byte prepare__15JPAFieldGravityFP18JPAEmitterWorkDataP13JPAFieldBlock
    .4byte calc__15JPAFieldGravityFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle
*/

struct JPAFieldGravity {
	virtual ~JPAFieldGravity();                                               // _08 (inline)
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*);                // _0C
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*); // _10
};

#endif
