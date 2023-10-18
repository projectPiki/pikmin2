#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DJointTree.h"
#include "JSystem/J3D/J3DMtxCalc.h"

/*
 * --INFO--
 * Address:	8008828C
 * Size:	000084
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

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void J3DJointTree::clear()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80088310
 * Size:	00015C
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

/*
 * --INFO--
 * Address:	8008846C
 * Size:	000174
 */
void J3DJointTree::findImportantMtxIndex()
{
	const int wEvlpMtxNum       = getWEvlpMtxNum();
	u32 tableIdx                = 0;
	const u32 drawFullWgtMtxNum = getDrawFullWgtMtxNum();
	const u16* wEvlpMixIndex    = getWEvlpMixIndex();
	const f32* wEvlpMixWeight   = getWEvlpMixWeight();
	u16* wEvlpImportantMtxIdx   = getWEvlpImportantMtxIndex();

	// Rigid matrices are easy.
	for (u16 i = 0; i < (u16)drawFullWgtMtxNum; i++)
		wEvlpImportantMtxIdx[i] = mMtxData.mDrawMtxIdx[i];

	// For envelope matrices, we need to find the matrix with the most contribution.
	for (int i = 0; i < wEvlpMtxNum; i++) {
		int mixNum     = getWEvlpMixMtxNum(i);
		u16 bestIdx    = 0;
		f32 bestWeight = -0.1f;

		for (int j = 0; j < mixNum; j++) {
			if (bestWeight < wEvlpMixWeight[tableIdx]) {
				bestWeight = wEvlpMixWeight[tableIdx];
				bestIdx    = wEvlpMixIndex[tableIdx];
			}

			tableIdx++;
		}

		wEvlpImportantMtxIdx[i + mMtxData.mDrawMtxCount] = bestIdx;
	}
	/*
	stwu     r1, -0x30(r1)
	li       r9, 0
	stmw     r25, 0x14(r1)
	lhz      r4, 0x36(r3)
	lhz      r0, 0x1e(r3)
	cmplwi   r4, 0
	lwz      r7, 0x24(r3)
	lwz      r6, 0x28(r3)
	lwz      r5, 0x30(r3)
	ble      lbl_80088560
	cmplwi   r4, 8
	addi     r8, r4, -8
	ble      lbl_80088554
	clrlwi   r10, r8, 0x10
	b        lbl_80088530

lbl_800884A8:
	lwz      r8, 0x3c(r3)
	rlwinm   r25, r9, 1, 0xf, 0x1e
	addi     r27, r25, 2
	addi     r9, r9, 8
	lhzx     r11, r8, r25
	add      r8, r5, r25
	addi     r28, r25, 4
	addi     r29, r25, 6
	sth      r11, 0(r8)
	addi     r30, r25, 8
	addi     r31, r25, 0xa
	addi     r12, r25, 0xc
	lwz      r26, 0x3c(r3)
	addi     r11, r25, 0xe
	lhzx     r27, r26, r27
	sth      r27, 2(r8)
	lwz      r27, 0x3c(r3)
	lhzx     r28, r27, r28
	sth      r28, 4(r8)
	lwz      r28, 0x3c(r3)
	lhzx     r29, r28, r29
	sth      r29, 6(r8)
	lwz      r29, 0x3c(r3)
	lhzx     r30, r29, r30
	sth      r30, 8(r8)
	lwz      r30, 0x3c(r3)
	lhzx     r31, r30, r31
	sth      r31, 0xa(r8)
	lwz      r31, 0x3c(r3)
	lhzx     r12, r31, r12
	sth      r12, 0xc(r8)
	lwz      r12, 0x3c(r3)
	lhzx     r11, r12, r11
	sth      r11, 0xe(r8)

lbl_80088530:
	clrlwi   r8, r9, 0x10
	cmplw    r8, r10
	blt      lbl_800884A8
	b        lbl_80088554

lbl_80088540:
	lwz      r8, 0x3c(r3)
	rlwinm   r10, r9, 1, 0xf, 0x1e
	addi     r9, r9, 1
	lhzx     r8, r8, r10
	sthx     r8, r5, r10

lbl_80088554:
	clrlwi   r8, r9, 0x10
	cmplw    r8, r4
	blt      lbl_80088540

lbl_80088560:
	li       r11, 0
	b        lbl_800885CC

lbl_80088568:
	lwz      r8, 0x20(r3)
	clrlwi   r4, r11, 0x10
	mr       r9, r6
	mr       r10, r7
	lbzx     r4, r8, r4
	li       r8, 0
	lfs      f1, lbl_80516AF0@sda21(r2)
	mtctr    r4
	cmpwi    r4, 0
	ble      lbl_800885B8

lbl_80088590:
	lfs      f0, 0(r9)
	fcmpo    cr0, f1, f0
	bge      lbl_800885A4
	fmr      f1, f0
	lhz      r8, 0(r10)

lbl_800885A4:
	addi     r9, r9, 4
	addi     r10, r10, 2
	addi     r6, r6, 4
	addi     r7, r7, 2
	bdnz     lbl_80088590

lbl_800885B8:
	lhz      r4, 0x36(r3)
	add      r4, r11, r4
	addi     r11, r11, 1
	slwi     r4, r4, 1
	sthx     r8, r5, r4

lbl_800885CC:
	cmpw     r11, r0
	blt      lbl_80088568
	lmw      r25, 0x14(r1)
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	800885E0
 * Size:	000070
 */
void J3DJointTree::calc(J3DMtxBuffer* buffer, const Vec& vec, const Mtx& mtx)
{
	mTransformCalc->init(vec, mtx);
	J3DMtxCalc::setMtxBuffer(buffer);
	J3DJoint* root = mRootNode;
	if (root) {
		J3DJoint::mCurrentMtxCalc = mTransformCalc;
		root->recursiveCalc();
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r4, r5
	mr       r5, r6
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x14(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       setMtxBuffer__10J3DMtxCalcFP12J3DMtxBuffer
	lwz      r3, 0x10(r30)
	cmplwi   r3, 0
	beq      lbl_80088638
	lwz      r0, 0x14(r30)
	stw      r0, mCurrentMtxCalc__8J3DJoint@sda21(r13)
	bl       recursiveCalc__8J3DJointFv

lbl_80088638:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
