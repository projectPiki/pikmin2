#ifndef _JSYSTEM_J3D_J3DMTXCALC_H
#define _JSYSTEM_J3D_J3DMTXCALC_H

#include "Dolphin/mtx.h"
#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/J3D/J3DSys.h"
#include "JSystem/J3D/J3DTypes.h"
#include "types.h"
#include "JSystem/J3D/J3DAnmTransform.h"
#include "Dolphin/vec.h"

struct J3DMtxBuffer;

struct J3DMtxCalc {
	virtual ~J3DMtxCalc() { }                                        // _08
	virtual void setAnmTransform(J3DAnmTransform*) { }               // _0C
	virtual J3DAnmTransform* getAnmTransform() { return nullptr; }   // _10
	virtual void setAnmTransform(u8, J3DAnmTransform*) { }           // _14
	virtual J3DAnmTransform* getAnmTransform(u8) { return nullptr; } // _18
	virtual void setWeight(u8 index, f32 weight) { }                 // _1C
	virtual f32 getWeight(u8) const { return 0.0f; }                 // _20
	virtual void init(const Vec&, const Mtx&) = 0;                   // _24
	virtual void calc()                       = 0;                   // _28

	static void setMtxBuffer(J3DMtxBuffer* buffer)
	{
		// this needs to not inline - BY FORCE IF NECESSARY
		// clang-format off
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
		// clang-format on
		mMtxBuffer = buffer;
	}

	static J3DMtxBuffer* getMtxBuffer() { return mMtxBuffer; }
	static J3DJoint* getJoint() { return mJoint; }
	static void setJoint(J3DJoint* joint) { mJoint = joint; }

	static J3DMtxBuffer* mMtxBuffer;
	static struct J3DJoint* mJoint;

	// _00 = VTBL
};

struct J3DMtxCalcNoAnmBase : public J3DMtxCalc {
	virtual ~J3DMtxCalcNoAnmBase() { } // _08 (weak)

	// _00 = VTBL
};

template <typename Calc, typename Init>
struct J3DMtxCalcNoAnm : public J3DMtxCalcNoAnmBase {
	virtual ~J3DMtxCalcNoAnm() { }                                                  // _08
	virtual void init(const Vec& p1, const f32 (&p2)[3][4]) { Init::init(p1, p2); } // _24
	virtual void calc() { Calc::calcTransform(mJoint->mTransformInfo); }            // _28

	// _00 = VTBL
};

struct J3DMtxCalcAnmBase : public J3DMtxCalc {
	/** @fabricated */
	inline J3DMtxCalcAnmBase(J3DAnmTransform* animation)
	    : mBaseAnim(animation)
	{
	}

	inline J3DMtxCalcAnmBase() { }

	virtual ~J3DMtxCalcAnmBase();                                             // _08
	virtual void setAnmTransform(J3DAnmTransform* anim) { mBaseAnim = anim; } // _0C
	virtual J3DAnmTransform* getAnmTransform() { return mBaseAnim; }          // _10

	// _00 = VTBL
	J3DAnmTransform* mBaseAnim; // _04
};

template <typename Adaptor, typename Init>
struct J3DMtxCalcAnimation : public J3DMtxCalcAnmBase {
	/** @fabricated */
	inline J3DMtxCalcAnimation(J3DAnmTransform* animation)
	    : J3DMtxCalcAnmBase(animation)
	{
	}

	virtual ~J3DMtxCalcAnimation() {};                                              // _08
	virtual void setAnmTransform(J3DAnmTransform* p1) { mBaseAnim = p1; }           // _0C
	virtual void init(const Vec& p1, const f32 (&p2)[3][4]) { Init::init(p1, p2); } // _24
	virtual void calc()                                                             // _28
	{
		Adaptor::calc(this);
		// J3DTransformInfo* pInfo;
		// if (getAnmTransform() == nullptr) {
		// 	pInfo = &mJoint->mTransformInfo;
		// } else {
		// 	J3DTransformInfo v1;
		// 	getAnmTransform()->getTransform(mJoint->getJntNo(), &v1);
		// 	pInfo = &v1;
		// }
		// Calc::calcTransform(pInfo);
	}

	// _00 = VTBL
	// _04 = J3DAnmTransform*
	u8 _08[4]; // _08
};

template <typename Calc>
struct J3DMtxCalcAnimationAdaptorDefault {
	/** @fabricated */
	static void calc(J3DMtxCalcAnmBase* p1)
	{
		J3DTransformInfo* pInfo;
		if (p1->getAnmTransform() != nullptr) {
			J3DTransformInfo v1;
			p1->getAnmTransform()->getTransform(J3DMtxCalc::mJoint->getJntNo(), &v1);
			pInfo = &v1;
		} else {
			pInfo = &J3DMtxCalc::mJoint->mTransformInfo;
		}
		Calc::calcTransform(*pInfo);
	}
};

struct J3DMtxCalcBlendAnmBase : public J3DMtxCalc {
	inline J3DMtxCalcBlendAnmBase()
	{
		for (int i = 0; i < 4; i++) {
			mAnims[i]   = nullptr;
			mWeights[i] = 0.0f;
		}
	}

	virtual ~J3DMtxCalcBlendAnmBase() { }                                               // _08 (weak)
	virtual void setAnmTransform(J3DAnmTransform* anim) { mAnims[0] = anim; }           // _0C (weak)
	virtual J3DAnmTransform* getAnmTransform() { return mAnims[0]; }                    // _10 (weak)
	virtual void setAnmTransform(u8 idx, J3DAnmTransform* anim) { mAnims[idx] = anim; } // _14 (weak)
	virtual J3DAnmTransform* getAnmTransform(u8 idx) { return mAnims[idx]; }            // _18 (weak)
	virtual void setWeight(u8 idx, f32 weight) { mWeights[idx] = weight; }              // _1C (weak)
	virtual f32 getWeight(u8 idx) const { return mWeights[idx]; }                       // _20 (weak)

	// _00 = VTBL
	J3DAnmTransform* mAnims[4]; // _04
	f32 mWeights[4];            // _14
};

// not sure how these structs are used or if they inherit anything
struct J3DMtxCalcBlend {
	static void calcBlend(Vec*, Vec*, J3DAnmTransform**, f32*);
};

struct J3DMtxCalcBlendSharedMotionT {
	static void calcBlend(Vec*, Vec*, J3DAnmTransform**, f32*);
};

struct J3DMtxCalcScaleBlendBasic {
	static void calcBlend(Vec*, Vec*, J3DAnmTransform**, f32*);
	static void calcScaleBlend(const Vec&, const Vec&);
};

struct J3DMtxCalcScaleBlendMaya {
	static void calcBlend(const Vec&, const Vec&);
	static void calcScaleBlend(const Vec&, const Vec&);
};

struct J3DMtxCalcScaleBlendSoftimage {
	static void calcBlend(const Vec&, const Vec&);
	static void calcScaleBlend(const Vec&, const Vec&);
};

struct J3DMtxCalcCalcTransformBasic {
	static void calcTransform(const J3DTransformInfo&);
};
struct J3DMtxCalcCalcTransformSoftimage {
	static void calcTransform(const J3DTransformInfo&);
};
struct J3DMtxCalcCalcTransformMaya {
	static void calcTransform(const J3DTransformInfo&);
};
struct J3DMtxCalcJ3DSysInitBasic {
	static void init(const Vec& s, const Mtx& mtx);
};
struct J3DMtxCalcJ3DSysInitSoftimage {
	static void init(const Vec& s, const Mtx& mtx)
	{
		J3DSys::mCurrentS = s;
		PSMTXCopy(mtx, J3DSys::mCurrentMtx);
	}
};
struct J3DMtxCalcJ3DSysInitMaya {
	static void init(const Vec& s, const Mtx& mtx);
};

template <typename Adaptor, typename Init>
struct J3DMtxCalcBlendAnm : public J3DMtxCalcBlendAnmBase {
	inline J3DMtxCalcBlendAnm(J3DAnmTransform* anm, f32 weight)
	{
		mAnims[0]   = anm;
		mWeights[0] = weight;
	}

	virtual ~J3DMtxCalcBlendAnm() { }                                                   // _08 (weak)
	virtual void init(const Vec& vec, const Mtx& mtx) { Init::init(vec, mtx); }         // _24 (weak)
	virtual void setWeight(u8 idx, f32 weight) { mWeights[idx] = weight; }              // _1C (weak)
	virtual void setAnmTransform(u8 idx, J3DAnmTransform* anim) { mAnims[idx] = anim; } // _14 (weak)
	virtual void calc() { Adaptor::calc(this); }                                        // _28 (weak)

	// _00     = VTBL
	// _00-_24 = J3DMtxCalcBlendAnmBase
	u32 _24; // _24, unknown
};

template <typename Blend, typename Scale>
struct J3DMtxCalcBlendAdaptorDefault {

	static void calc(J3DMtxCalcBlendAnmBase* mtxCalc)
	{
		j3dSys.mMtxCalc = mtxCalc;
		Vec scale;
		Vec pos;
		Blend::calcBlend(&scale, &pos, mtxCalc->mAnims, mtxCalc->mWeights);
		Scale::calcScaleBlend(scale, pos);
	}
};

#endif
