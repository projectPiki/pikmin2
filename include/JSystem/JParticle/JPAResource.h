#ifndef _JSYSTEM_JPA_JPARESOURCE_H
#define _JSYSTEM_JPA_JPARESOURCE_H

#include "types.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JParticle/JPATexture.h"

typedef void JPAFunctionA(struct JPAEmitterWorkData*);
typedef void JPAFunctionB(struct JPAEmitterWorkData*, struct JPABaseParticle*);

struct JPABaseShape;
struct JPAExtraShape;
struct JPAChildShape;
struct JPAExTexShape;
struct JPADynamicsBlock;

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

	JPABaseShape* getBsp() const { return mBaseShape; }
	JPAExtraShape* getEsp() const { return mExtraShape; }
	JPAChildShape* getCsp() const { return mChildShape; }
	JPAExTexShape* getEts() const { return mExTexShape; }
	JPADynamicsBlock* getDyn() const { return mDynamicsBlock; }

	u32 getTexIdx(u32 idx) const { return mTextureIDList[idx]; }
	u16 getUsrIdx() const { return mUsrIdx; }

	JPAFunctionA** _00;                      // _00
	JPAFunctionA** _04;                      // _04
	JPAFunctionA** _08;                      // _08
	JPAFunctionB** _0C;                      // _0C
	JPAFunctionB** _10;                      // _10
	JPAFunctionB** _14;                      // _14
	JPAFunctionB** _18;                      // _18
	struct JPABaseShape* mBaseShape;         // _1C
	struct JPAExtraShape* mExtraShape;       // _20
	struct JPAChildShape* mChildShape;       // _24
	struct JPAExTexShape* mExTexShape;       // _28
	struct JPADynamicsBlock* mDynamicsBlock; // _2C
	struct JPAFieldBlock** mFieldBlocks;     // _30
	struct JPAKeyBlock** mKeyBlocks;         // _34
	u16* mTextureIDList;                     // _38
	u16 mUsrIdx;                             // _3C
	u8 _3E;                                  // _3E
	u8 _3F;                                  // _3F
	u8 _40;                                  // _40
	u8 _41;                                  // _41
	u8 _42;                                  // _42
	u8 _43;                                  // _43
	u8 _44;                                  // _44
	u8 _45;                                  // _45
	u8 _46;                                  // _46
	u8 _47;                                  // _47
};

/**
 * @size{0x14}
 */
struct JPAResourceManager {
	JPAResourceManager(u16, u16, JKRHeap*); // unused/inlined
	JPAResourceManager(const void*, JKRHeap*);

	JPAResource* getResource(u16) const;
	const ResTIMG* swapTexture(const ResTIMG*, const char*);
	void registRes(JPAResource*);
	void registTex(JPATexture*);
	u32 getResUserWork(u16) const;

	// unused/inlined:
	void load(const char*, u16);
	void load(const void*, u16);
	void checkUserIndexDuplication(u16) const;
	void registTexDupCheck(const u8*, JKRHeap*);

	void load(u16 idx, GXTexMapID texMapID) { mTextures[idx]->load(texMapID); }

	JKRHeap* mHeap;                // _00
	JPAResource** mResources;      // _04
	struct JPATexture** mTextures; // _08
	u16 mResourceSlotCount;        // _0C
	u16 mResourceCount;            // _0E
	u16 mTextureSlotCount;         // _10
	u16 mTextureCount;             // _12
};

struct JPAResourceLoader {
	JPAResourceLoader(const u8*, JPAResourceManager*, u16); // unused/inlined
	JPAResourceLoader(const u8*, JPAResourceManager*);

	void load_jpc(const u8*, JPAResourceManager*);

	// unused/inlined:
	~JPAResourceLoader();
	void load_jpa(const u8*, JPAResourceManager*, u16);
};

#endif
