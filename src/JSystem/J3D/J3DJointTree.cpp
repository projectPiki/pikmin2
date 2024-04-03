#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DJointTree.h"
#include "JSystem/J3D/J3DMtxCalc.h"

/**
 * @note Address: 0x8008828C
 * @note Size: 0x84
 */
J3DJointTree::J3DJointTree()
    : mHierarchy(nullptr)
    , mFlags(0)
    , mModelDataType(0)
    , mRootNode(nullptr)
    , mTransformCalc(nullptr)
    , mJoints(nullptr)
    , mJointCnt(0)
    , mEnvelopeCnt(0)
    , mEnvelopeMixCnt(nullptr)
    , mEnvelopeMixIdx(0)
    , mEnvelopeMixWeight(nullptr)
    , mInvJointMtx(nullptr)
    , mEnvelopeImptIdx(nullptr)
    , mMtxData()
    , _40(0)
    , mNametab(nullptr)
{
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
void J3DJointTree::clear()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80088310
 * @note Size: 0x15C
 */
void J3DJointTree::makeHierarchy(J3DJoint* joint, const J3DModelHierarchy** hierarchies, J3DMaterialTable* matTable,
                                 J3DShapeTable* shapeTable)
{

	J3DJoint* curJoint = joint;

	while (true) {
		J3DJoint* newJoint           = nullptr;
		J3DMaterial* newMaterial     = nullptr;
		J3DShape* newShape           = nullptr;
		const J3DModelHierarchy* inf = *hierarchies;
		u16 val;

		switch (inf->mType) {
		case 1:
			*hierarchies = inf + 1;
			makeHierarchy(curJoint, hierarchies, matTable, shapeTable);
			break;
		case 2:
			*hierarchies = inf + 1;
			return;
		case 0:
			return;
		case 0x10: {
			J3DJoint** jointNodePointer = mJoints;
			*hierarchies                = inf + 1;
			newJoint                    = jointNodePointer[inf->mValue];
		} break;
		case 0x11:
			*hierarchies = inf + 1;
			val          = inf->mValue;
			newMaterial  = matTable->getMaterialNodePointer(val);
			break;
		case 0x12:
			*hierarchies = inf + 1;
			val          = inf->mValue;
			newShape     = shapeTable->getItem(val);
			break;
		}

		if (newJoint) {
			curJoint = newJoint;
			if (!joint) {
				mRootNode = newJoint;
			} else {
				joint->appendChild(newJoint);
			}
		} else if (newMaterial) {
			if (joint->getMesh())
				newMaterial->mNext = joint->getMesh();
			joint->mMaterial    = newMaterial;
			newMaterial->mJoint = joint;
		} else if (newShape) {
			newMaterial         = joint->getMesh();
			newMaterial->mShape = newShape;
			newShape->mMaterial = newMaterial;
		}
	}
}

/**
 * @note Address: 0x8008846C
 * @note Size: 0x174
 */
void J3DJointTree::findImportantMtxIndex()
{
	const s32 wEvlpMtxNum       = getWEvlpMtxNum();
	u32 tableIdx                = 0;
	const u32 drawFullWgtMtxNum = getDrawFullWgtMtxNum();
	u16* wEvlpMixIndex          = getWEvlpMixIndex();
	const f32* wEvlpMixWeight   = getWEvlpMixWeight();
	u16* wEvlpImportantMtxIdx   = getWEvlpImportantMtxIndex();

	// Rigid matrices are easy.
	for (u16 i = 0; i < (u16)drawFullWgtMtxNum; i++)
		wEvlpImportantMtxIdx[i] = mMtxData.mDrawMtxIdx[i];

	// For envelope matrices, we need to find the matrix with the most contribution.
	for (s32 i = 0; i < wEvlpMtxNum; i++) {
		s32 mixNum     = getWEvlpMixMtxNum(i);
		u16 bestIdx    = 0;
		f32 bestWeight = -0.1f;

		for (s32 j = 0; j < mixNum; j++) {
			if (bestWeight < wEvlpMixWeight[tableIdx]) {
				bestWeight = wEvlpMixWeight[tableIdx];
				bestIdx    = wEvlpMixIndex[tableIdx];
			}

			tableIdx++;
		}

		wEvlpImportantMtxIdx[i + mMtxData.mDrawMtxCount] = bestIdx;
	}
}

/**
 * @note Address: 0x800885E0
 * @note Size: 0x70
 */
void J3DJointTree::calc(J3DMtxBuffer* buffer, const Vec& vec, const Mtx& mtx)
{
	mTransformCalc->init(vec, mtx);
	J3DMtxCalc::setMtxBuffer(
	    buffer); // this is a weak function thats supposed to not inline here, somehow. it's currently being manhandled.
	J3DJoint* root = mRootNode;
	if (root) {
		J3DJoint::mCurrentMtxCalc = mTransformCalc;
		root->recursiveCalc();
	}
}
