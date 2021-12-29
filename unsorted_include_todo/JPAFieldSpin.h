#ifndef _JPAFIELDSPIN_H
#define _JPAFIELDSPIN_H

/*
    __vt__12JPAFieldSpin:
    .4byte 0
    .4byte 0
    .4byte __dt__12JPAFieldSpinFv
    .4byte prepare__12JPAFieldSpinFP18JPAEmitterWorkDataP13JPAFieldBlock
    .4byte
   calc__12JPAFieldSpinFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle
*/

struct JPAFieldSpin {
	virtual ~JPAFieldSpin();                                   // _00
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*); // _04
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*,
	                  JPABaseParticle*); // _08

	// _00 VTBL
};

#endif
