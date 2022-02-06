#ifndef _JSYSTEM_JPA_JPARESOURCE_H
#define _JSYSTEM_JPA_JPARESOURCE_H

#include "types.h"

typedef void JPAFunctionA(struct JPAEmitterWorkData*);
typedef void JPAFunctionB(struct JPAEmitterWorkData*, struct JPABaseParticle*);

/**
 * @size{0x48}
 */
struct JPAResource {
	JPAFunctionA** _00;           // _00
	JPAFunctionA** _04;           // _04
	JPAFunctionA** _08;           // _08
	JPAFunctionB** _0C;           // _0C
	JPAFunctionB** _10;           // _10
	JPAFunctionB** _14;           // _14
	JPAFunctionB** _18;           // _18
	struct JPABaseShape* _1C;     // _1C
	struct JPAExtraShape* _20;    // _20
	struct JPAChildShape* _24;    // _24
	struct JPAExTexShape* _28;    // _28
	struct JPADynamicsBlock* _2C; // _2C
	unkptr _30;                   // _30
	struct JPAKeyBlock** _34;     // _34
	u8 _38[4];                    // _38
	short _3C;                    // _3C
	u8 _3E;                       // _3E
	u8 _3F;                       // _3F
	u8 _40;                       // _40
	u8 _41;                       // _41
	u8 _42;                       // _42
	u8 _43;                       // _43
	u8 _44;                       // _44
	u8 _45;                       // _45
	u8 _46;                       // _46
	u8 _47;                       // _47
	u8 _48;                       // _48
};

struct JPAResourceLoader {
};

/**
 * @size{0x14}
 */
struct JPAResourceManager {
	struct JKRHeap* m_heap;         // _00
	JPAResource** m_resources;      // _04
	struct JPATexture** m_textures; // _08
	s16 _0C;                        // _0C
	u16 m_resourceCount;            // _0E
	s16 _10;                        // _10
	u16 m_textureCount;             // _12
};

#endif
