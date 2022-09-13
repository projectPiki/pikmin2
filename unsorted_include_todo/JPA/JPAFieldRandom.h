#ifndef _JPAFIELDRANDOM_H
#define _JPAFIELDRANDOM_H

/*
    __vt__14JPAFieldRandom:
    .4byte 0
    .4byte 0
    .4byte __dt__14JPAFieldRandomFv
    .4byte prepare__12JPAFieldBaseFP18JPAEmitterWorkDataP13JPAFieldBlock
    .4byte calc__14JPAFieldRandomFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle
*/

struct JPAFieldBase {
	virtual ~JPAFieldBase();                                   // _08 (weak)
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*); // _0C (weak)
};

struct JPAFieldRandom : public JPAFieldBase {
	virtual ~JPAFieldRandom();                                                // _08 (weak)
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*); // _10
};

#endif
