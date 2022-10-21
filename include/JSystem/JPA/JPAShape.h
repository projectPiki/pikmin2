#ifndef _JSYSTEM_JPA_JPASHAPE_H
#define _JSYSTEM_JPA_JPASHAPE_H

#include "Dolphin/gx.h"
#include "types.h"

struct JKRHeap;
struct JPAEmitterWorkData;
struct JPABaseParticle;

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

	const JPABaseShapeData* m_data; // _00
	u8 _04[4];                      // _04
	u8* _08;                        // _08
	GXColor _0C;                    // _0C
	GXColor _10;                    // _10
};

/**
 * @size{0x4}
 */
struct JPAChildShape {
	JPAChildShape(const u8*);

	// Unused/inlined:
	void init_jpa(const u8*, JKRHeap*);

	const u8* m_data; // _00
};

/**
 * @size{0x4}
 */
struct JPAExTexShape {
	JPAExTexShape(const u8*);

	// Unused/inlined:
	void init_jpa(const u8*, JKRHeap*);

	const u8* m_data; // _00
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
		float _0C;
		float _10;
		float _14;
		float _18;
		float _1C;
		float _20;
		u8 _24[4];
		s16 _28;
		s16 _2A;
		float _2C;
		float _30;
		float _34;
		float _38;
		float _3C;
		float _40;
		u8 _44[4];
		float _48;
	};

	JPAExtraShape(const u8*);

	void init();

	// Unused/inlined:
	void init_jpa(const u8*, JKRHeap*);

	/**
	 * @fabricated
	 */
	inline const Data* castData() const { return reinterpret_cast<const Data*>(m_data); }

	const u8* m_data; // _00
	float _04;        // _04
	float _08;        // _08
	float _0C;        // _0C
	float _10;        // _10
	float _14;        // _14
	float _18;        // _18
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
