#ifndef _JSYSTEM_JPA_JPARESOURCE_H
#define _JSYSTEM_JPA_JPARESOURCE_H

#include "types.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JPA/JPATexture.h"

typedef void JPAFunctionA(struct JPAEmitterWorkData*);
typedef void JPAFunctionB(struct JPAEmitterWorkData*, struct JPABaseParticle*);

/**
 * @size{0x48}
 */
struct JPAResource {
	JPAResource();

	void init(JKRHeap*);
	void calc(JPAEmitterWorkData*, struct JPABaseEmitter*);
	void draw(JPAEmitterWorkData*, JPABaseEmitter*);
	void drawP(JPAEmitterWorkData*);
	void drawC(JPAEmitterWorkData*);
	void setPTev();
	void setCTev(JPAEmitterWorkData*);
	void calc_p(JPAEmitterWorkData*, JPABaseParticle*);
	void calc_c(JPAEmitterWorkData*, JPABaseParticle*);
	void calcField(JPAEmitterWorkData*, JPABaseParticle*);
	void calcKey(JPAEmitterWorkData*);
	void calcWorkData_c(JPAEmitterWorkData*);
	void calcWorkData_d(JPAEmitterWorkData*);

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
	void* _30;                    // _30
	struct JPAKeyBlock** _34;     // _34
	u16* _38;                     // _38
	u16 _3C;                      // _3C
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

/**
 * @size{0x14}
 */
struct JPAResourceManager {
	JPAResourceManager(unsigned short, unsigned short, JKRHeap*); // unused/inlined
	JPAResourceManager(const void*, JKRHeap*);

	JPAResource* getResource(unsigned short) const;
	ResTIMG* swapTexture(const ResTIMG*, const char*);
	void registRes(JPAResource*);
	void registTex(JPATexture*);
	void* getResUserWork(unsigned short) const;

	// unused/inlined:
	void load(const char*, unsigned short);
	void load(const void*, unsigned short);
	void checkUserIndexDuplication(unsigned short) const;
	void registTexDupCheck(const unsigned char*, JKRHeap*);

	JKRHeap* m_heap;                // _00
	JPAResource** m_resources;      // _04
	struct JPATexture** m_textures; // _08
	s16 _0C;                        // _0C
	u16 m_resourceCount;            // _0E
	s16 _10;                        // _10
	u16 m_textureCount;             // _12
};

struct JPAResourceLoader {
	JPAResourceLoader(const unsigned char*, JPAResourceManager*, unsigned short); // unused/inlined
	JPAResourceLoader(const u8*, JPAResourceManager*);

	void load_jpc(const unsigned char*, JPAResourceManager*);

	// unused/inlined:
	~JPAResourceLoader();
	void load_jpa(const unsigned char*, JPAResourceManager*, unsigned short);
};

#endif
