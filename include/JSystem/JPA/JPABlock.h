#ifndef _JSYSTEM_JPA_JPABLOCK_H
#define _JSYSTEM_JPA_JPABLOCK_H

#include "JSystem/JGeometry.h"
#include "types.h"

struct JKRHeap;
struct JPAEmitterWorkData;
struct JPAFieldBase;

typedef void JPAVolumeFunc(JPAEmitterWorkData*);

/**
 * @size{0x8}
 */
struct JPADynamicsBlock {
	u8* m_data;                      // _00
	JPAVolumeFunc* m_volumeFunction; // _04
};

/**
 * @size{0x2C}
 */
struct JPAFieldBlock {
	u8* m_data;            // _00
	JPAFieldBase* m_field; // _04
	float _08;             // _08
	float _0C;             // _0C
	JGeometry::TVec3f _10; // _10
	JGeometry::TVec3f _1C; // _1C
	float _28;             // _28
};

/**
 * @size{0x8}
 */
struct JPAKeyBlock {
	JPAKeyBlock(const u8*);

	void calc(float);

	// Unused/inlined:
	void init_jpa(const u8*, JKRHeap*);

	const u8* m_dataStart; // _00
	const float* _04;      // _04
};

#endif
