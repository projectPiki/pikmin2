#ifndef _JPAFIELDCONVECTION_H
#define _JPAFIELDCONVECTION_H

/*
    __vt__18JPAFieldConvection:
    .4byte 0
    .4byte 0
    .4byte __dt__18JPAFieldConvectionFv
    .4byte prepare__18JPAFieldConvectionFP18JPAEmitterWorkDataP13JPAFieldBlock
    .4byte calc__18JPAFieldConvectionFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle
*/

struct JPAFieldConvection {
	virtual ~JPAFieldConvection();                                            // _08 (inline)
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*);                // _0C
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*); // _10
};

#endif
