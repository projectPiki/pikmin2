#ifndef _JSYSTEM_JPA_JPAFIELD_H
#define _JSYSTEM_JPA_JPAFIELD_H

#include "Dolphin/mtx.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JParticle/JPABlock.h"
#include "JSystem/JParticle/JPAResource.h"

struct JPAFieldBase {
	virtual ~JPAFieldBase() { }                                                   // _08 (weak)
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*) { }                 // _0C (weak)
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*) = 0; // _10

	// unused/inlined:
	void calcAffect(JPAFieldBlock*, JPABaseParticle*);
	f32 calcFadeAffect(JPAFieldBlock*, f32) const;

	// _00 = VTBL
	JGeometry::TVec3f _04; // _04
};

struct JPAFieldAir : public JPAFieldBase {
	virtual ~JPAFieldAir() { }                                                // _08 (weak)
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*);                // _0C
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*); // _10

	// _00     = VTBL
	// _00-_10 = JPAFieldBase
};

/**
 * @size{0x34}
 */
struct JPAFieldConvection : public JPAFieldBase {
	virtual ~JPAFieldConvection() { }                                         // _08 (weak)
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*);                // _0C
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*); // _10

	// _00     = VTBL
	// _00-_10 = JPAFieldBase
	JGeometry::TVec3f _10; // _10
	JGeometry::TVec3f _1C; // _1C
	JGeometry::TVec3f _28; // _28
};

struct JPAFieldDrag : public JPAFieldBase {
	virtual ~JPAFieldDrag() { }                                               // _08 (weak)
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*); // _10

	// _00     = VTBL
	// _00-_10 = JPAFieldBase
};

struct JPAFieldGravity : public JPAFieldBase {
	virtual ~JPAFieldGravity() { }                                            // _08 (weak)
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*);                // _0C
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*); // _10

	// _00     = VTBL
	// _00-_10 = JPAFieldBase
};

struct JPAFieldMagnet : public JPAFieldBase {
	virtual ~JPAFieldMagnet() { }                                             // _08 (weak)
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*);                // _0C
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*); // _10

	// _00     = VTBL
	// _00-_10 = JPAFieldBase
	JGeometry::TVec3f _10; // _10
};

struct JPAFieldNewton : public JPAFieldBase {
	virtual ~JPAFieldNewton() { }                                             // _08 (weak)
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*);                // _0C
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*); // _10

	// _00     = VTBL
	// _00-_10 = JPAFieldBase
	JGeometry::TVec3f _10; // _10
	f32 _1C;               // _1C
};

struct JPAFieldRandom : public JPAFieldBase {
	virtual ~JPAFieldRandom() { }                                             // _08 (weak)
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*); // _10

	// _00     = VTBL
	// _00-_10 = JPAFieldBase
};

/**
 * @size{0x34}
 */
struct JPAFieldSpin : public JPAFieldBase {
	virtual ~JPAFieldSpin() { }                                               // _08 (weak)
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*);                // _0C
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*); // _10

	// _00     = VTBL
	// _00-_10 = JPAFieldBase
	JGeometry::TVec3f _10; // _10
	JGeometry::TVec3f _1C; // _1C
	JGeometry::TVec3f _28; // _28
};

/**
 * @size{0x24}
 */
struct JPAFieldVortex : public JPAFieldBase {
	virtual ~JPAFieldVortex() { }                                             // _08 (weak)
	virtual void prepare(JPAEmitterWorkData*, JPAFieldBlock*);                // _0C
	virtual void calc(JPAEmitterWorkData*, JPAFieldBlock*, JPABaseParticle*); // _10

	// _00     = VTBL
	// _00-_10 = JPAFieldBase
	JGeometry::TVec3f _10; // _10
	f32 _1C;               // _1C
	f32 _20;               // _20
};

#endif
