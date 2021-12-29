#ifndef _JPAFIELDAIR_H
#define _JPAFIELDAIR_H

/*
    __vt__11JPAFieldAir:
    .4byte 0
    .4byte 0
    .4byte __dt__11JPAFieldAirFv
    .4byte prepare__11JPAFieldAirFP18JPAEmitterWorkDataP13JPAFieldBlock
    .4byte
   calc__11JPAFieldAirFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle
*/

struct JPAFieldAir {
	virtual ~JPAFieldAir();                                    // _00
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*); // _04
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*,
	                  JPABaseParticle*); // _08

	// _00 VTBL
};

#endif
