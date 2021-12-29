#ifndef _JPAFIELDBASE_H
#define _JPAFIELDBASE_H

/*
    __vt__12JPAFieldBase:
    .4byte 0
    .4byte 0
    .4byte __dt__12JPAFieldBaseFv
    .4byte prepare__12JPAFieldBaseFP18JPAEmitterWorkDataP13JPAFieldBlock
    .4byte 0
*/

struct JPAFieldBase {
	virtual ~JPAFieldBase();                                   // _00
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*); // _04
	virtual void _08() = 0;                                    // _08

	// _00 VTBL
};

#endif
