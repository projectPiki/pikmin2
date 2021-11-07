#ifndef _JPAFIELDMAGNET_H
#define _JPAFIELDMAGNET_H

struct JPAFieldMagnet {
	virtual ~JPAFieldMagnet();                                 // _00
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*); // _04
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*,
	                  JPABaseParticle*); // _08

	// _00 VTBL
};

#endif
