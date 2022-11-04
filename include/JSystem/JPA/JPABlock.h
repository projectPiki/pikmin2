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
	/**
	 * @fabricated
	 */
	struct Data {
		u8 _00[0x8];  // _00
		u32 _08;      // _08
		u8 _0C[0x48]; // _0C
		float _54;    // _54
		u8 _58[0x18]; // _58
		s16 _70;      // _70
	};

	JPADynamicsBlock(const unsigned char*);
	void init();
	void create(JPAEmitterWorkData*);

	/**
	 * @fabricated
	 */
	inline const Data* castData() const { return reinterpret_cast<const Data*>(m_data); }

	// unused/inlined:
	void init_jpa(const unsigned char*, JKRHeap*);

	u8* m_data;                      // _00
	JPAVolumeFunc* m_volumeFunction; // _04
};

/**
 * @size{0x2C}
 */
struct JPAFieldBlock {
	/** @fabricated */
	struct Data {
		u8 _00[4];    // _00
		u32 _04;      // _04
		u32 _08;      // _08
		u8 _0C[0x1C]; // _0C
		f32 _28;      // _28
		f32 _2C;      // _2C
		f32 _30;      // _30
		f32 _34;      // _34
		f32 _38;      // _38
		f32 _3C;      // _3C
	};

	JPAFieldBlock(const unsigned char*, JKRHeap*);

	void init(JKRHeap*);

	// unused/inlined:
	void init_jpa(const unsigned char*, JKRHeap*);

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
