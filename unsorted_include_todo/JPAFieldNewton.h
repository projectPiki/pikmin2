#ifndef _JPAFIELDNEWTON_H
#define _JPAFIELDNEWTON_H

struct JPAFieldNewton {
	virtual ~JPAFieldNewton();                                 // _00
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*); // _04
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*,
	                  JPABaseParticle*); // _08

	// _00 VTBL
};

#endif
