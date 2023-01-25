#ifndef _JSYSTEM_J3D_J3DJOINTTREE_H
#define _JSYSTEM_J3D_J3DJOINTTREE_H

#include "JSystem/J3D/J3DDrawMtxData.h"
#include "JSystem/J3D/J3DJoint.h"
#include "types.h"

struct J3DJoint;
struct J3DJointBlock;
struct J3DMaterialTable;
struct J3DModelHierarchy;
struct J3DMtxBuffer;
struct J3DMtxCalc;
struct J3DShapeTable;
struct JUTNameTab;
struct Vec;

struct J3DJointTree {
	J3DJointTree();

	virtual void calc(J3DMtxBuffer*, const Vec&, const f32 (&)[3][4]); // _08
	/**
	 * @reifiedAddress{80083874}
	 * @reifiedFile{JSystem/J3D/J3DModelData.cpp}
	 */
	virtual ~J3DJointTree() {}; // _0C (weak)

	void findImportantMtxIndex();
	void makeHierarchy(J3DJoint*, const J3DModelHierarchy**, J3DMaterialTable*, J3DShapeTable*);

	// unused/inlined:
	void clear();

	inline J3DJoint* getJointNodePointer(u16 idx) const { return mJoints[idx]; }

	// VTBL _00
	J3DModelHierarchy* mHierarchy; // _04
	s32 m_08;                      // _08 previously s8* TODO: rename
	u32 mFlags;                    // _0C
	J3DJoint* _10;                 // _10
	J3DMtxCalc* mTransformCalc;    // _14

	// PikDecomp calls this "J3DJointBlock* jointBlock"
	J3DJoint** mJoints;      // _18
	u16 mJointCnt;           // _1C
	u16 mEnvelopeCnt;        // _1E
	u8* _20;                 // _20
	u16* mMaxBillBoardCnt;   // _24
	f32* _28;                // _28
	Mtx* _2C;                // _2C
	u16* _30;                // _30
	J3DDrawMtxData mMtxData; // _34
	u32 _40;                 // _40
	JUTNameTab* mNametab;    // _44
};

#endif
