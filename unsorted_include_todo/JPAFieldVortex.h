#ifndef _JPAFIELDVORTEX_H
#define _JPAFIELDVORTEX_H

/*
    __vt__14JPAFieldVortex:
    .4byte 0
    .4byte 0
    .4byte __dt__14JPAFieldVortexFv
    .4byte prepare__14JPAFieldVortexFP18JPAEmitterWorkDataP13JPAFieldBlock
    .4byte
   calc__14JPAFieldVortexFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle
*/

struct JPAFieldVortex {
	virtual ~JPAFieldVortex();                                 // _00
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*); // _04
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*,
	                  JPABaseParticle*); // _08

	// _00 VTBL
};

#endif
