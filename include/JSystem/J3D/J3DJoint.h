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
	enum J3DJointKind {
		JOINTKIND_Unk1 = 0x1,
		JOINTKIND_Unk2 = 0x2,
		JOINTKIND_Unk3 = 0x4,
		JOINTKIND_Unk4 = 0x8,
		JOINTKIND_Unk5 = 0x10,
		JOINTKIND_Unk6 = 0x20,
	};

	J3DJoint();

	void appendChild(J3DJoint*);
	void entryIn();
	void recursiveCalc();

	const u16 getJntNo() const { return mJointIdx; }
	J3DMaterial* getMesh() { return mMaterial; }
	JGeometry::TVec3f* getMax() { return &mMax; }
	JGeometry::TVec3f* getMin() { return &mMin; }

	void setYounger(J3DJoint* parent) { mYounger = parent; }
	void setCallBack(J3DJointCallBack callback) { mFunction = callback; }
	void setMtxCalc(J3DMtxCalc* i_mtxCalc) { mMtxCalc = i_mtxCalc; }
	void setCurrentMtxCalc(J3DMtxCalc* calc) { mCurrentMtxCalc = calc; }

	u8 getScaleCompensate() const { return mScaleCompensate; }
	J3DJoint* getYounger() { return mYounger; }
	J3DTransformInfo& getTransformInfo() { return mTransformInfo; }
	J3DJointCallBack getCallBack() { return mFunction; }
	J3DMtxCalc* getMtxCalc() { return mMtxCalc; }
	J3DMtxCalc* getCurrentMtxCalc() { return mCurrentMtxCalc; };
	J3DJoint* getChild() { return mChild; }
	u8 getMtxType() const { return (u8)mKind >> 4; }

	void setMtxType(u8 type) { mKind = (mKind & ~0xF0) | (type << 4); }
	void resetMtxType() { mKind &= 0x0F; }

	static J3DMtxCalc* mCurrentMtxCalc;

	u32 mCallBackUserData;           // _00
	J3DJointCallBack mFunction;      // _04
	u32 _08;                         // _08
	J3DJoint* mChild;                // _0C
	J3DJoint* mYounger;              // _10
	u16 mJointIdx;                   // _14
	s8 mKind;                        // _16
	u8 mScaleCompensate;             // _17
	J3DTransformInfo mTransformInfo; // _18
	f32 mBoundingSphereRadius;       // _38, bounding sphere radius
	JGeometry::TVec3f mMin;          // _3C
	JGeometry::TVec3f mMax;          // _48
	J3DMtxCalc* mMtxCalc;            // _54
	J3DMaterial* mMaterial;          // _58
};

#endif
