#include "Dolphin/pad.h"
#include "System.h"
#include "Game/rumble.h"

namespace Game {

/*
 * --INFO--
 * Address:	80252B20
 * Size:	000158
 */
ContRumble::ContRumble(int padChannel, int nodeCount)
    : mIsActive(true)
    , mPadChannel(padChannel)
    , mTotalIntensity(0.0f)
    , mRumbleTimer(0.0f)
    , mRumbleTimeoutTimer(0.0f)
    , mParentNode(new RumbleNode())
    , mActiveNodes(new RumbleNode())
{
	for (int i = 0; i < nodeCount; i++) {
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
				f32* segmentThresholds = &rumbleData->mTimes[currentSegment];
				f32 currentTime        = currentNode->mRumbleTimer;

				if (currentTime < segmentThresholds[currentSegment]) {
					continue;
				}
			}

			if (currentSegment < numRumbleSegments) {
				double t = (currentNode->mRumbleTimer - rumbleData->mTimes[4 * currentSegment])
				         / (rumbleData->mTimes[4 * (currentSegment + 1)] - rumbleData->mTimes[4 * currentSegment]);

				currentNode->mCurrentIntensity
				    = ((1.0 - t) * rumbleData->mIntensities[4 * currentSegment]) + (t * rumbleData->mIntensities[4 * (currentSegment + 1)]);
			} else {
				currentNode->mCurrentIntensity = rumbleData->mIntensities[4 * numRumbleSegments];
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
			if (limitData->mCount > 0 && currentNode->mRumbleTimer < limitData->mTimes[limitData->mCount - 1]) {
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
void ContRumble::startRumble(int idx, f32 intensity)
{
	if (mActiveNodes->mChild && mDataMgr && mRumbleTimer < 30.0f) {
		RumbleData* data = mDataMgr->getRumbleData(idx);

		RumbleNode* node = (RumbleNode*)mActiveNodes->mChild;

		node->del();

		if (data) {
			node->setParameters(idx, 0.0f, intensity, 0.0f, 0.0f, data);
		} else {
			f32 z = 0.0f;
			getRumbleParameter(idx, intensity, z);
			node->setParameters(idx, 0.0f, intensity, 0.0f, z, data);
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
	RumbleNode* child = static_cast<RumbleNode*>(mParentNode->mChild);
	RumbleNode* next;
	RumbleNode* node = child;

	while (node) {
		next = static_cast<RumbleNode*>(node->mNext);
		node->del();
		mActiveNodes->add(node);
		node = next;
	}

	if (child) {
		PADControlMotor(mPadChannel, PAD_MOTOR_STOP_HARD);
	}
}

/*
 * --INFO--
 * Address:	80253178
 * Size:	000090
 */
void ContRumble::rumbleStop(int idx)
{
	RumbleNode* child = static_cast<RumbleNode*>(mParentNode->mChild);
	RumbleNode* next;
	RumbleNode* node = child;

	while (node) {
		next = static_cast<RumbleNode*>(node->mNext);
		if (node->mNodeIdx == idx) {
			node->del();
			mActiveNodes->add(node);
		}
		node = next;
	}

	if (child) {
		if (mParentNode->mChild) { // why. WHY.
			PADControlMotor(mPadChannel, PAD_MOTOR_STOP_HARD);
		}
	}
}

/*
 * --INFO--
 * Address:	80253208
 * Size:	00009C
 */
void ContRumble::getRumbleParameter(int idx, f32& x, f32& y)
{
	f32 parm1[3] = { 0.4f, 0.55f, 1.0f };
	f32 parm2[3] = { 0.2f, 0.35f, 0.5f };

	x = parm1[idx % 3] * x;
	y = parm2[idx % 3];
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
} // namespace Game
