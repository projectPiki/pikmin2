#ifndef _JPAFIELDDRAG_H
#define _JPAFIELDDRAG_H

struct JPAFieldBase {
	virtual void _00() = 0;                                    // _00
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*); // _04

	// _00 VTBL
};

struct JPAFieldDrag : public JPAFieldBase {
	virtual ~JPAFieldDrag();                                   // _00
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*); // _04
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*,
	                  JPABaseParticle*); // _08

	// _00 VTBL
};

#endif
