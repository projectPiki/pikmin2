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
	virtual ~JPAFieldBase();                                   // _08 (weak)
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*); // _0C (weak)
	virtual void _10() = 0;                                    // _10
};

#endif
