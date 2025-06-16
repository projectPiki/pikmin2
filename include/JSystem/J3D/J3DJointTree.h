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

	virtual void calc(J3DMtxBuffer*, const Vec&, const Mtx&); // _08
	/**
	 * @reifiedAddress{80083874}
	 * @reifiedFile{JSystem/J3D/J3DModelData.cpp}
	 */
	virtual ~J3DJointTree() {}; // _0C (weak)

	void findImportantMtxIndex();
	void makeHierarchy(J3DJoint*, const J3DModelHierarchy**, J3DMaterialTable*, J3DShapeTable*);

	// unused/inlined:
	void clear();

	J3DJoint* getJointNodePointer(u32 idx) const { return mJoints[idx]; }
	u32 getWEvlpMtxNum() const { return mEnvelopeCnt; }
	u8 getWEvlpMixMtxNum(u16 idx) const { return mEnvelopeMixCnt[idx]; }
	u16* getWEvlpMixIndex() const { return mEnvelopeMixIdx; }
	f32* getWEvlpMixWeight() const { return mEnvelopeMixWeight; }
	u16* getWEvlpImportantMtxIndex() const { return mEnvelopeImptIdx; }
	u32 getDrawFullWgtMtxNum() const { return mMtxData.mDrawMtxCount; }
	u32 getJointNum() const { return mJointCnt; }
	u16 getDrawMtxNum() const { return mMtxData.mCount; }
	u8 getDrawMtxFlag(u16 idx) const { return mMtxData.mDrawMtxFlag[idx]; }
	u32 getDrawMtxIndex(u16 idx) const { return mMtxData.mDrawMtxIdx[idx]; }
	JUTNameTab* getJointName() const { return mNametab; }
	J3DJoint* getRootNode() { return mRootNode; }
	J3DMtxCalc* getBasicMtxCalc() const { return mTransformCalc; }
	Mtx& getInvJointMtx(int idx) const { return mInvJointMtx[idx]; }
	u32 getModelDataType() const { return mModelDataType; }
	const J3DModelHierarchy* getHierarchy() const { return mHierarchy; }

	// VTBL _00
	J3DModelHierarchy* mHierarchy; // _04
	u32 mFlags;                    // _08
	u32 mModelDataType;            // _0C
	J3DJoint* mRootNode;           // _10
	J3DMtxCalc* mTransformCalc;    // _14
	J3DJoint** mJoints;            // _18
	u16 mJointCnt;                 // _1C
	u16 mEnvelopeCnt;              // _1E
	u8* mEnvelopeMixCnt;           // _20
	u16* mEnvelopeMixIdx;          // _24
	f32* mEnvelopeMixWeight;       // _28
	Mtx* mInvJointMtx;             // _2C
	u16* mEnvelopeImptIdx;         // _30
	J3DDrawMtxData mMtxData;       // _34
	u32 _40;                       // _40
	JUTNameTab* mNametab;          // _44
};

#endif
