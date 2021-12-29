#ifndef _JPAFIELDMAGNET_H
#define _JPAFIELDMAGNET_H

/*
    __vt__14JPAFieldMagnet:
    .4byte 0
    .4byte 0
    .4byte __dt__14JPAFieldMagnetFv
    .4byte prepare__14JPAFieldMagnetFP18JPAEmitterWorkDataP13JPAFieldBlock
    .4byte
   calc__14JPAFieldMagnetFP18JPAEmitterWorkDataP13JPAFieldBlockP15JPABaseParticle
*/

struct JPAFieldMagnet {
	virtual ~JPAFieldMagnet();                                 // _00
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*); // _04
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*,
	                  JPABaseParticle*); // _08

	// _00 VTBL
};

#endif
