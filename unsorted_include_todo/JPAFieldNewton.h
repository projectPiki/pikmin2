#ifndef _JPAFIELDNEWTON_H
#define _JPAFIELDNEWTON_H

/*
    __vt__14JPAFieldNewton:
    .4byte 0
    .4byte 0
    .4byte __dt__14JPAFieldNewtonFv
    .4byte prepare__14JPAFieldNewtonFP18JPAEmitterWorkDataP13JPAFieldBlock
    .4byte
   calc__14JPAFieldNewtonFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle
*/

struct JPAFieldNewton {
	virtual ~JPAFieldNewton();                                 // _00
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*); // _04
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*,
	                  JPABaseParticle*); // _08

	// _00 VTBL
};

#endif
