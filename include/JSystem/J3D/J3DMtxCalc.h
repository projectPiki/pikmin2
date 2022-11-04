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
	virtual ~J3DMtxCalc() {};                                      // _08
	virtual void setAnmTransform(J3DAnmTransform*);                // _0C
	virtual J3DAnmTransform* getAnmTransform();                    // _10
	virtual void setAnmTransform(unsigned char, J3DAnmTransform*); // _14
	virtual void getAnmTransform(unsigned char);                   // _18
	virtual void setWeight(unsigned char, float);                  // _1C
	virtual void getWeight(unsigned char) const;                   // _20
	virtual void init(const Vec&, const float (&)[3][4]) = 0;      // _24
	virtual void calc()                                  = 0;      // _28

	/**
	 * @reifiedAddress{80088650}
	 * @reifiedFile{JSystem/J3D/J3DJointTree.cpp}
	 */
	static void setMtxBuffer(J3DMtxBuffer* buffer) { mMtxBuffer = buffer; }

	// _00 VTBL

	static J3DMtxBuffer* mMtxBuffer;
	static J3DJoint* mJoint;
};

struct J3DMtxCalcNoAnmBase : public J3DMtxCalc {
	/**
	 * @reifiedAddress{80070510}
	 * @reifiedFile{JSystem/J3D/J3DModelLoader.cpp}
	 */
	virtual ~J3DMtxCalcNoAnmBase() { } // _08 (weak)
};

template <typename Calc, typename Init>
struct J3DMtxCalcNoAnm : public J3DMtxCalcNoAnmBase {
	virtual ~J3DMtxCalcNoAnm() { }                                                    // _08
	virtual void init(const Vec& p1, const float (&p2)[3][4]) { Init::init(p1, p2); } // _24
	virtual void calc() { Calc::calcTransform(mJoint->m_transformInfo); }             // _28
};

struct J3DMtxCalcAnmBase : public J3DMtxCalc {
	/** @fabricated */
	inline J3DMtxCalcAnmBase(J3DAnmTransform* animation)
	    : _04(animation)
	{
	}

	virtual ~J3DMtxCalcAnmBase();                   // _08
	virtual void setAnmTransform(J3DAnmTransform*); // _0C
	virtual J3DAnmTransform* getAnmTransform();     // _10

	J3DAnmTransform* _04; // _04
};

template <typename Adaptor, typename Init>
struct J3DMtxCalcAnimation : public J3DMtxCalcAnmBase {
	/** @fabricated */
	inline J3DMtxCalcAnimation(J3DAnmTransform* animation)
	    : J3DMtxCalcAnmBase(animation)
	{
	}

	virtual ~J3DMtxCalcAnimation() {};                                                // _08
	virtual void setAnmTransform(J3DAnmTransform* p1) { _04 = p1; }                   // _0C
	virtual void init(const Vec& p1, const float (&p2)[3][4]) { Init::init(p1, p2); } // _24
	virtual void calc()                                                               // _28
	{
		Adaptor::calc(this);
		// J3DTransformInfo* pInfo;
		// if (getAnmTransform() == nullptr) {
		// 	pInfo = &mJoint->m_transformInfo;
		// } else {
		// 	J3DTransformInfo v1;
		// 	getAnmTransform()->getTransform(mJoint->getJntNo(), &v1);
		// 	pInfo = &v1;
		// }
		// Calc::calcTransform(pInfo);
	}

	u8 _08[4]; // _08
};

struct J3DMtxCalcBlendAnmBase : public J3DMtxCalcAnmBase {
	virtual ~J3DMtxCalcBlendAnmBase();                             // _08 (weak)
	virtual void setAnmTransform(J3DAnmTransform*);                // _0C (weak)
	virtual J3DAnmTransform* getAnmTransform();                    // _10 (weak)
	virtual void setAnmTransform(unsigned char, J3DAnmTransform*); // _14 (weak)
	virtual void getAnmTransform(unsigned char);                   // _18 (weak)
	virtual void setWeight(unsigned char, float);                  // _1C (weak)
	virtual void getWeight(unsigned char) const;                   // _20 (weak)

	J3DAnmTransform* _08; // _08
	J3DAnmTransform* _0C; // _0C
	J3DAnmTransform* _10; // _10
	float _14;            // _14
	float _18;            // _18
	float _1C;            // _1C
	float _20;            // _20
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
			pInfo = &J3DMtxCalc::mJoint->m_transformInfo;
		}
		Calc::calcTransform(*pInfo);
	}
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
	static void init(const Vec& p1, const float (&p2)[3][4]);
};
struct J3DMtxCalcJ3DSysInitSoftimage {
	static void init(const Vec& p1, const float (&p2)[3][4])
	{
		J3DSys::mCurrentS.x = p1.x;
		J3DSys::mCurrentS.y = p1.y;
		J3DSys::mCurrentS.z = p1.z;
	}
};
struct J3DMtxCalcJ3DSysInitMaya {
	static void init(const Vec& p1, const float (&p2)[3][4]);
};

#endif
