#ifndef _JSYSTEM_J3D_J3DJOINT_H
#define _JSYSTEM_J3D_J3DJOINT_H

#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JMath.h"
#include "types.h"

struct J3DMaterial;
struct J3DMtxCalc;
struct J3DMtxCalcAnmBase;
struct J3DJoint;

typedef bool (*J3DJointCallBack)(J3DJoint*, int);

struct J3DJoint {
	enum J3DJoint_0x16 {
		J3DJ16_Unknown_01 = 1 << 0,
		J3DJ16_Unknown_02 = 1 << 1,
		J3DJ16_Unknown_04 = 1 << 2,
		J3DJ16_Unknown_08 = 1 << 3,
		J3DJ16_Unknown_10 = 1 << 4,
		J3DJ16_Unknown_20 = 1 << 5,
	};
	J3DJoint();

	void appendChild(J3DJoint*);
	void entryIn();
	void recursiveCalc();

	/**
	 * @reifiedAddress{8043EF9C}
	 * @reifiedFile{sysGCU/sysShapeModel.cpp}
	 */
	u16 getJntNo() const { return mJointIdx; }

	/**
	 * @reifiedAddress{8043EFA4}
	 * @reifiedFile{sysGCU/sysShapeModel.cpp}
	 */
	J3DJoint* getYounger() { return mParent; }

	/**
	 * @reifiedAddress{8043EFAC}
	 * @reifiedFile{sysGCU/sysShapeModel.cpp}
	 */
	J3DJoint* getChild() { return mChild; }

	inline void setCurrentMtxCalc(J3DMtxCalc* calc) { mCurrentMtxCalc = calc; }
	inline J3DMaterial* getMesh() { return mMaterial; };

	u32 _00;                         // _00
	J3DJointCallBack mFunction;      // _04
	u32 _08;                         // _08
	J3DJoint* mChild;                // _0C
	J3DJoint* mParent;               // _10
	u16 mJointIdx;                   // _14
	s8 _16;                          // _16
	u8 mIgnoreParentScaling;         // _17
	J3DTransformInfo mTransformInfo; // _18
	f32 _38;                         // _38
	JGeometry::TVec3f mYRotation;    // _3C
	JGeometry::TVec3f _48;           // _48
	J3DMtxCalcAnmBase* mMtxCalc;     // _54
	J3DMaterial* mMaterial;          // _58

	static J3DMtxCalc* mCurrentMtxCalc;
};

#endif
