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
struct JPAFieldBlock;
struct JPAKeyBlock;

/**
 * @size{0x48}
 */
struct JPAResource {
	JPAResource();

	void init(JKRHeap*);
	bool calc(JPAEmitterWorkData*, struct JPABaseEmitter*);
	void draw(JPAEmitterWorkData*, JPABaseEmitter*);
	void drawP(JPAEmitterWorkData*); // Draw parent
	void drawC(JPAEmitterWorkData*); // Draw child
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

	u16 getTexIdx(u32 idx) const { return mTextureIDList[idx]; }
	u16 getUsrIdx() const { return mUsrIdx; }

	JPAFunctionA** mCalcEmitterFuncList;       // _00
	JPAFunctionA** mDrawEmitterFuncList;       // _04
	JPAFunctionA** mDrawEmitterChildFuncList;  // _08
	JPAFunctionB** mCalcParticleFuncList;      // _0C
	JPAFunctionB** mDrawParticleFuncList;      // _10
	JPAFunctionB** mCalcParticleChildFuncList; // _14
	JPAFunctionB** mDrawParticleChildFuncList; // _18
	JPABaseShape* mBaseShape;                  // _1C
	JPAExtraShape* mExtraShape;                // _20
	JPAChildShape* mChildShape;                // _24
	JPAExTexShape* mExTexShape;                // _28
	JPADynamicsBlock* mDynamicsBlock;          // _2C
	JPAFieldBlock** mFieldBlocks;              // _30
	JPAKeyBlock** mKeyBlocks;                  // _34
	u16* mTextureIDList;                       // _38
	u16 mUsrIdx;                               // _3C
	u8 mFieldBlockNum;                         // _3E
	u8 mKeyBlockNum;                           // _3F
	u8 mTDB1Num;                               // _40
	u8 mCalcEmitterFuncListNum;                // _41
	u8 mDrawEmitterFuncListNum;                // _42
	u8 mDrawEmitterChildFuncListNum;           // _43
	u8 mCalcParticleFuncListNum;               // _44
	u8 mDrawParticleFuncListNum;               // _45
	u8 mCalcParticleChildFuncListNum;          // _46
	u8 mDrawParticleChildFuncListNum;          // _47
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
	// ~JPAResourceLoader();
	void load_jpa(const u8*, JPAResourceManager*, u16);
};

#endif
