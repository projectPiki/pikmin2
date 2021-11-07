#ifndef _JPAFIELDBASE_H
#define _JPAFIELDBASE_H

struct JPAFieldBase {
	virtual ~JPAFieldBase();                                   // _00
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*); // _04
	virtual void _08() = 0;                                    // _08

	// _00 VTBL
};

#endif
