#ifndef _JPAFIELDCONVECTION_H
#define _JPAFIELDCONVECTION_H

struct JPAFieldConvection {
	virtual ~JPAFieldConvection();                             // _00
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*); // _04
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*,
	                  JPABaseParticle*); // _08

	// _00 VTBL
};

#endif
