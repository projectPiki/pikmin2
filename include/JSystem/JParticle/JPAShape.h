#ifndef _JSYSTEM_JPA_JPASHAPE_H
#define _JSYSTEM_JPA_JPASHAPE_H

#include "Dolphin/gx.h"
#include "types.h"

struct JKRHeap;
struct JPAEmitterWorkData;
struct JPABaseParticle;

// not sure where this belongs
static inline u32 COLOR_MULTI(u32 a, u32 b) {
    return ((a * (b + 1)) * 0x10000) >> 24;
}

/**
 * @fabricated
 */
struct JPABaseShapeData {
	u8 _00[8];    // _00
	u32 _08;      // _08
	u8 _0C[0x10]; // _0C
	u8 _1C;       // _1C
	u8 _1D;       // _1D
	u8 _1E;       // _1E
	u8 _1F;       // _1F
	u8 _20;       // _20
};

/**
 * @size{0x14}
 */
struct JPABaseShape {
	JPABaseShape(const u8*, JKRHeap*);

	void setGX(JPAEmitterWorkData*) const;

	// Unused/inlined:
	void init_jpa(const u8*, JKRHeap*);

	const JPABaseShapeData* mData; // _00
	u8 _04[4];                     // _04
	u8* _08;                       // _08
	GXColor _0C;                   // _0C
	GXColor _10;                   // _10
};

struct JPAChildShapeData {
	u8 mMagic[4];      // _00
	u32 mSize;         // _04
	u32 mFlags;        // _08
	f32 mPosRndm;      // _0C
	f32 mBaseVel;      // _10
	f32 mBaseVelRndm;  // _14
	f32 mVelInfRate;   // _18
	f32 mGravity;      // _1C
	f32 mScaleX;       // _20
	f32 mScaleY;       // _24
	f32 mInheritScale; // _28
	f32 mInheritAlpha; // _2C
	f32 mInheritRGB;   // _30
	GXColor mPrmClr;   // _34
	GXColor mEnvClr;   // _38
	f32 mTiming;       // _3C
	s16 mLife;         // _40
	s16 mRate;         // _44
	u8 mStep;          // _48
	u8 mTexIdx;        // _4C
	s16 mRotSpeed;     // _50
};

/**
 * @size{0x4}
 */
struct JPAChildShape {
	JPAChildShape(const u8*);

	// Unused/inlined:
	void init_jpa(const u8*, JKRHeap*);

	void getPrmClr(GXColor* dst) { *dst = mData->mPrmClr; }
	void getEnvClr(GXColor* dst) { *dst = mData->mEnvClr; }

	const JPAChildShapeData* mData; // _00
};

/**
 * @size{0x4}
 */
struct JPAExTexShape {
	JPAExTexShape(const u8*);

	// Unused/inlined:
	void init_jpa(const u8*, JKRHeap*);

	const u8* mData; // _00
};

/**
 * @size{0x1C}
 */
struct JPAExtraShape {
	// /**
	//  * @fabricated
	//  */
	struct Data {
		u8 _00[0xC];
		f32 _0C;
		f32 _10;
		f32 _14;
		f32 _18;
		f32 _1C;
		f32 _20;
		u8 _24[4];
		s16 _28;
		s16 _2A;
		f32 _2C;
		f32 _30;
		f32 _34;
		f32 _38;
		f32 _3C;
		f32 _40;
		u8 _44[4];
		f32 _48;
	};

	JPAExtraShape(const u8*);

	void init();

	// Unused/inlined:
	void init_jpa(const u8*, JKRHeap*);

	/**
	 * @fabricated
	 */
	inline const Data* castData() const { return reinterpret_cast<const Data*>(mData); }

	const u8* mData; // _00
	f32 _04;         // _04
	f32 _08;         // _08
	f32 _0C;         // _0C
	f32 _10;         // _10
	f32 _14;         // _14
	f32 _18;         // _18
};

// In JPABaseShape.cpp:
void JPASetPointSize(JPAEmitterWorkData*);
void JPASetLineWidth(JPAEmitterWorkData*);
void JPASetPointSize(JPAEmitterWorkData*, JPABaseParticle*);
void JPASetLineWidth(JPAEmitterWorkData*, JPABaseParticle*);
void JPARegistPrm(JPAEmitterWorkData*);
void JPARegistEnv(JPAEmitterWorkData*);
void JPARegistPrmEnv(JPAEmitterWorkData*);
void JPARegistAlpha(JPAEmitterWorkData*, JPABaseParticle*);
void JPARegistPrmAlpha(JPAEmitterWorkData*, JPABaseParticle*);
void JPARegistPrmAlphaEnv(JPAEmitterWorkData*, JPABaseParticle*);
void JPARegistAlphaEnv(JPAEmitterWorkData*, JPABaseParticle*);
void JPARegistEnv(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcClrIdxNormal(JPAEmitterWorkData*);
void JPACalcClrIdxNormal(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcClrIdxRepeat(JPAEmitterWorkData*);
void JPACalcClrIdxRepeat(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcClrIdxReverse(JPAEmitterWorkData*);
void JPACalcClrIdxReverse(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcClrIdxMerge(JPAEmitterWorkData*);
void JPACalcClrIdxMerge(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcClrIdxRandom(JPAEmitterWorkData*);
void JPACalcClrIdxRandom(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcPrm(JPAEmitterWorkData*);
void JPACalcPrm(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcEnv(JPAEmitterWorkData*);
void JPACalcEnv(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcColorCopy(JPAEmitterWorkData*, JPABaseParticle*);
void JPAGenTexCrdMtxIdt(JPAEmitterWorkData*);
void JPAGenTexCrdMtxAnm(JPAEmitterWorkData*);
void JPAGenTexCrdMtxPrj(JPAEmitterWorkData*);
void JPAGenCalcTexCrdMtxAnm(JPAEmitterWorkData*);
void JPALoadCalcTexCrdMtxAnm(JPAEmitterWorkData*, JPABaseParticle*);
void JPALoadTex(JPAEmitterWorkData*);
void JPALoadTexAnm(JPAEmitterWorkData*);
void JPALoadTexAnm(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcTexIdxNormal(JPAEmitterWorkData*);
void JPACalcTexIdxNormal(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcTexIdxRepeat(JPAEmitterWorkData*);
void JPACalcTexIdxRepeat(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcTexIdxReverse(JPAEmitterWorkData*);
void JPACalcTexIdxReverse(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcTexIdxMerge(JPAEmitterWorkData*);
void JPACalcTexIdxMerge(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcTexIdxRandom(JPAEmitterWorkData*);
void JPACalcTexIdxRandom(JPAEmitterWorkData*, JPABaseParticle*);
void JPALoadPosMtxCam(JPAEmitterWorkData*);
void JPADrawBillboard(JPAEmitterWorkData*, JPABaseParticle*);
void JPADrawRotBillboard(JPAEmitterWorkData*, JPABaseParticle*);
void JPADrawYBillboard(JPAEmitterWorkData*, JPABaseParticle*);
void JPADrawRotYBillboard(JPAEmitterWorkData*, JPABaseParticle*);
void JPADrawDirection(JPAEmitterWorkData*, JPABaseParticle*);
void JPADrawRotDirection(JPAEmitterWorkData*, JPABaseParticle*);
void JPADrawDBillboard(JPAEmitterWorkData*, JPABaseParticle*);
void JPADrawRotation(JPAEmitterWorkData*, JPABaseParticle*);
void JPADrawPoint(JPAEmitterWorkData*, JPABaseParticle*);
void JPADrawLine(JPAEmitterWorkData*, JPABaseParticle*);
void JPADrawStripe(JPAEmitterWorkData*);
void JPADrawStripeX(JPAEmitterWorkData*);
void JPADrawEmitterCallBackB(JPAEmitterWorkData*);
void JPADrawParticleCallBack(JPAEmitterWorkData*, JPABaseParticle*);

// In JPAChildShape.cpp:
void JPARegistChildPrmEnv(JPAEmitterWorkData*);
void JPACalcChildAlphaOut(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcChildScaleOut(JPAEmitterWorkData*, JPABaseParticle*);

// In JPAExtraShape.cpp:
void JPACalcScaleX(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcScaleY(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcScaleCopy(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcScaleAnmNormal(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcScaleAnmRepeatX(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcScaleAnmRepeatY(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcScaleAnmReverseX(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcScaleAnmReverseY(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcAlphaAnm(JPAEmitterWorkData*, JPABaseParticle*);
void JPACalcAlphaFlickAnm(JPAEmitterWorkData*, JPABaseParticle*);

// In JPAExTexShape.cpp:
void JPALoadExTex(JPAEmitterWorkData*);

#endif
