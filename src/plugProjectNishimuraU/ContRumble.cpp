#include "Dolphin/pad.h"
#include "System.h"
#include "Game/rumble.h"
#include "types.h"
/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80484850
    lbl_80484850:
        .4byte 0x3ECCCCCD
        .4byte 0x3F0CCCCD
        .float 1.0
    .global lbl_8048485C
    lbl_8048485C:
        .4byte 0x3E4CCCCD
        .4byte 0x3EB33333
        .float 0.5

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game10RumbleNode
    __vt__Q24Game10RumbleNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game10RumbleNodeFv
        .4byte getChildCount__5CNodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A968
    lbl_8051A968:
        .4byte 0x00000000
    .global lbl_8051A96C
    lbl_8051A96C:
        .float 1.0
    .global lbl_8051A970
    lbl_8051A970:
        .4byte 0x40400000
    .global lbl_8051A974
    lbl_8051A974:
        .4byte 0x41F00000
*/

namespace Game {

/*
 * --INFO--
 * Address:	80252B20
 * Size:	000158
 */
ContRumble::ContRumble(int p1, int p2)
    : mIsActive(true)
    , mPadChannel(p1)
    , mTotalIntensity(0.0f)
    , mRumbleTimer(0.0f)
    , mRumbleTimeoutTimer(0.0f)
    , mParentNode(new RumbleNode())
    , mActiveNodes(new RumbleNode())
{
	for (int i = 0; i < p2; i++) {
		mActiveNodes->add(new RumbleNode());
	}
	mDataMgr = nullptr;
}

/*
 * --INFO--
 * Address:	80252C78
 * Size:	00008C
 */
void ContRumble::init()
{
	mIsActive           = true;
	mTotalIntensity     = 0.0f;
	mRumbleTimer        = 0.0f;
	mRumbleTimeoutTimer = 0.0f;

	RumbleNode* next;
	for (RumbleNode* current = (RumbleNode*)mParentNode->mChild; current; current = next) {
		next = (RumbleNode*)current->mNext;
		current->del();
		mActiveNodes->add(current);
	}

	PADControlMotor(mPadChannel, 2);
}

/*
 * --INFO--
 * Address:	80252D04
 * Size:	000290
 * TODO
 */
void ContRumble::update()
{
	double maxRumbleIntensity = 0.0;

	for (RumbleNode* currentNode = (RumbleNode*)mParentNode->mChild; currentNode; currentNode = (RumbleNode*)currentNode->mNext) {
		currentNode->mCurrentIntensity = 0.0f;

		RumbleData* rumbleData = currentNode->mRumbleData;
		if (rumbleData) {
			int numRumbleSegments = rumbleData->mCount - 1;

			int currentSegment;
			for (currentSegment = 0; currentSegment < numRumbleSegments; currentSegment++) {
				float* segmentThresholds = &rumbleData->mIntensityThresholds[currentSegment];
				float currentTime        = currentNode->mRumbleTimer;

				if (currentTime < segmentThresholds[currentSegment]) {
					continue;
				}
			}

			if (currentSegment < numRumbleSegments) {
				double t
				    = (currentNode->mRumbleTimer - rumbleData->mIntensityThresholds[4 * currentSegment])
				    / (rumbleData->mIntensityThresholds[4 * (currentSegment + 1)] - rumbleData->mIntensityThresholds[4 * currentSegment]);

				currentNode->mCurrentIntensity = ((1.0 - t) * rumbleData->mIntensityValues[4 * currentSegment])
				                               + (t * rumbleData->mIntensityValues[4 * (currentSegment + 1)]);
			} else {
				currentNode->mCurrentIntensity = rumbleData->mIntensityValues[4 * numRumbleSegments];
			}
		} else {
			currentNode->mCurrentIntensity = currentNode->mDefaultIntensity;
		}

		currentNode->mCurrentIntensity *= currentNode->mDefaultIntensity;
		currentNode->mRumbleTimer += sys->mDeltaTime;

		if (maxRumbleIntensity < currentNode->mCurrentIntensity) {
			maxRumbleIntensity = currentNode->mCurrentIntensity;
		}

		RumbleData* limitData = currentNode->mRumbleData;
		bool shouldAddToActiveNodes;

		if (limitData) {
			if (limitData->mCount > 0 && currentNode->mRumbleTimer < limitData->mIntensityThresholds[limitData->mCount - 1]) {
				shouldAddToActiveNodes = false;
			}
		} else if (currentNode->mRumbleTimer < currentNode->_28) {
			shouldAddToActiveNodes = false;
		} else {
			shouldAddToActiveNodes = true;
		}

		if (shouldAddToActiveNodes) {
			currentNode->del();
			mActiveNodes->add(currentNode);
		}
	}

	if (maxRumbleIntensity > 0.0f) {
		mTotalIntensity += maxRumbleIntensity;
		mRumbleTimer += sys->mDeltaTime;
		mRumbleTimeoutTimer = 0.0f;

		if (mTotalIntensity < 0.0f) {
			if (mIsActive) {
				PADControlMotor(mPadChannel, PAD_MOTOR_STOP);
			} else {
				PADControlMotor(mPadChannel, PAD_MOTOR_RUMBLE);
			}
		}
	} else {
		mTotalIntensity = 0.0f;
		mRumbleTimeoutTimer += sys->mDeltaTime;

		if (mRumbleTimeoutTimer > 3.0f) {
			mRumbleTimer = 0.0f;

			if (mIsActive) {
				PADControlMotor(mPadChannel, PAD_MOTOR_RUMBLE);
			} else {
				PADControlMotor(mPadChannel, PAD_MOTOR_STOP_HARD);
			}
		} else {
			mRumbleTimer = 0.0f;
		}
	}
}

/*
 * --INFO--
 * Address:	80252F94
 * Size:	000058
 */
void ContRumble::setController(bool isActive)
{
	if (!isActive && mIsActive) {
		PADControlMotor(mPadChannel, PAD_MOTOR_STOP_HARD);
	}

	mIsActive = isActive;
}

/*
 * --INFO--
 * Address:	80252FEC
 * Size:	000104
 * TODO
 */
void ContRumble::startRumble(int x, float y)
{
	if (mActiveNodes->mChild && mDataMgr && mRumbleTimer < 30.0f) {
		RumbleData* data = mDataMgr->getRumbleData(x);

		RumbleNode* node = (RumbleNode*)mActiveNodes->mChild;

		node->del();

		if (data) {
			f32 v8                  = y;
			node->_18               = x;
			node->mCurrentIntensity = 0.0;
			node->mDefaultIntensity = v8;
			node->mRumbleTimer      = 0.0;
			node->_28               = 0.0;
			node->mRumbleData       = data;
		} else {
			float z = 0.0;
			getRumbleParameter(x, y, z);
			f32 v9                  = z;
			node->_18               = x;
			node->mCurrentIntensity = 0.0;
			node->mDefaultIntensity = 0.0;
			node->mRumbleTimer      = 0.0;
			node->_28               = v9; // WTF?
			node->mRumbleData       = 0;
		}

		mParentNode->add(node);
	}
}

/*
 * --INFO--
 * Address:	802530F0
 * Size:	000088
 * TODO
 */
void ContRumble::rumbleStop()
{
	RumbleNode* child = (RumbleNode*)mParentNode->mChild;
	for (RumbleNode* i = child; i; i = (RumbleNode*)i->mNext) {
		i->del();
		mActiveNodes->add(i);
	}

	if (child) {
		PADControlMotor(mPadChannel, 2);
	}
}

/*
 * --INFO--
 * Address:	80253178
 * Size:	000090
 */
void ContRumble::rumbleStop(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	lwz      r3, 0x14(r3)
	lwz      r31, 0x10(r3)
	mr       r29, r31
	b        lbl_802531C8

lbl_802531A0:
	lwz      r0, 0x18(r29)
	lwz      r30, 4(r29)
	cmpw     r0, r28
	bne      lbl_802531C4
	mr       r3, r29
	bl       del__5CNodeFv
	lwz      r3, 0x18(r27)
	mr       r4, r29
	bl       add__5CNodeFP5CNode

lbl_802531C4:
	mr       r29, r30

lbl_802531C8:
	cmplwi   r29, 0
	bne      lbl_802531A0
	cmplwi   r31, 0
	beq      lbl_802531F4
	lwz      r3, 0x14(r27)
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	beq      lbl_802531F4
	lwz      r3, 4(r27)
	li       r4, 2
	bl       PADControlMotor

lbl_802531F4:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80253208
 * Size:	00009C
 */
void ContRumble::getRumbleParameter(int, float&, float&)
{
	/*
	stwu     r1, -0x30(r1)
	lis      r3, 0x55555556@ha
	lis      r7, lbl_80484850@ha
	stw      r31, 0x2c(r1)
	addi     r31, r4, -8
	addi     r10, r7, lbl_80484850@l
	addi     r0, r3, 0x55555556@l
	mulhw    r7, r0, r31
	lwz      r9, 0(r10)
	lwz      r12, 4(r10)
	lis      r4, lbl_8048485C@ha
	lwz      r11, 8(r10)
	addi     r3, r1, 8
	addi     r8, r4, lbl_8048485C@l
	srwi     r0, r7, 0x1f
	add      r7, r7, r0
	stw      r9, 0x14(r1)
	mulli    r0, r7, 3
	lwz      r10, 0(r8)
	lwz      r9, 4(r8)
	addi     r4, r1, 0x14
	lwz      r8, 8(r8)
	slwi     r7, r7, 2
	subf     r0, r0, r31
	stw      r12, 0x18(r1)
	lfs      f1, 0(r5)
	slwi     r0, r0, 2
	stw      r11, 0x1c(r1)
	lfsx     f0, r4, r7
	stw      r10, 8(r1)
	fmuls    f0, f1, f0
	stw      r9, 0xc(r1)
	stw      r8, 0x10(r1)
	stfs     f0, 0(r5)
	lfsx     f0, r3, r0
	stfs     f0, 0(r6)
	lwz      r31, 0x2c(r1)
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802532A4
 * Size:	000060
 */
RumbleNode::~RumbleNode()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802532E8
	lis      r5, __vt__Q24Game10RumbleNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q24Game10RumbleNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_802532E8
	mr       r3, r30
	bl       __dl__FPv

lbl_802532E8:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace Game
