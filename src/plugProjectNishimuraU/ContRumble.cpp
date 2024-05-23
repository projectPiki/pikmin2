#include "Dolphin/pad.h"
#include "System.h"
#include "Game/rumble.h"

namespace Game {

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
RumbleNode::RumbleNode()
    : mNodeIdx(-1)
    , mCurrentIntensity(0.0f)
    , mDefaultIntensity(0.0f)
    , mRumbleTimer(0.0f)
    , mRumbleTimeLimit(0.0f)
    , mRumbleData(nullptr)
{
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
void RumbleNode::update()
{
	mCurrentIntensity = 0.0f;

	if (mRumbleData) {
		// Find the current segment
		for (int i = 0; i < mRumbleData->mCount - 1; i++) {
			int nextIdx = i + 1;
			if (mRumbleTimer >= mRumbleData->mTimes[i] && mRumbleTimer < mRumbleData->mTimes[nextIdx]) {
				f32 t = (mRumbleTimer - mRumbleData->mTimes[i]) / (mRumbleData->mTimes[nextIdx] - mRumbleData->mTimes[i]);

				f32 intensityStart = mRumbleData->mIntensities[i];
				f32 intensityEnd   = mRumbleData->mIntensities[nextIdx];

				mCurrentIntensity = ((1.0f - t) * intensityStart) + (t * intensityEnd);
				break;
			}
		}
		mCurrentIntensity *= mDefaultIntensity;

	} else {
		mCurrentIntensity = mDefaultIntensity;
	}

	mRumbleTimer += sys->getDeltaTime();
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void RumbleNode::startRumble(int, f32, RumbleData*, f32)
{
	// UNUSED/INLINED
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
bool RumbleNode::isSameLabel(int)
{
	// UNUSED/INLINED
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
bool RumbleNode::isRumbleEnd()
{
	if (mRumbleData) {
		if (mRumbleData->mCount > 0 && mRumbleTimer < mRumbleData->mTimes[mRumbleData->mCount - 1]) {
			return false;
		}
	} else if (mRumbleTimer < mRumbleTimeLimit) {
		return false;
	}
	return true;
}

/**
 * @note Address: 0x80252B20
 * @note Size: 0x158
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

/**
 * @note Address: 0x80252C78
 * @note Size: 0x8C
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

/**
 * @note Address: 0x80252D04
 * @note Size: 0x290
 */
void ContRumble::update()
{
	f32 maxRumbleIntensity = 0.0f;

	CNode* node = mParentNode->mChild;
	while (node) {
		CNode* next             = node->mNext;
		RumbleNode* currentNode = static_cast<RumbleNode*>(node);
		currentNode->update();

		if (maxRumbleIntensity < currentNode->mCurrentIntensity) {
			maxRumbleIntensity = currentNode->mCurrentIntensity;
		}

		if (currentNode->isRumbleEnd()) {
			currentNode->del();
			mActiveNodes->add(currentNode);
		}
		node = next;
	}

	if (maxRumbleIntensity > 0.0f) {
		mTotalIntensity += maxRumbleIntensity;
		mRumbleTimer += sys->mDeltaTime;
		mRumbleTimeoutTimer = 0.0f;

		if (mTotalIntensity < 1.0f) {
			if (mIsActive) {
				PADControlMotor(mPadChannel, PAD_MOTOR_STOP);
			}
			return;
		} else {
			mTotalIntensity -= 1.0f;
		}

		if (mIsActive) {
			PADControlMotor(mPadChannel, PAD_MOTOR_RUMBLE);
			return;
		}

	} else {
		mTotalIntensity = 0.0f;
		mRumbleTimeoutTimer += sys->getDeltaTime();

		if (mRumbleTimeoutTimer > 3.0f) {
			mRumbleTimer = 0.0f;
		}

		if (mIsActive) {
			PADControlMotor(mPadChannel, PAD_MOTOR_STOP_HARD);
		}
	}
}

/**
 * @note Address: 0x80252F94
 * @note Size: 0x58
 */
void ContRumble::setController(bool isActive)
{
	if (!isActive && mIsActive) {
		PADControlMotor(mPadChannel, PAD_MOTOR_STOP_HARD);
	}

	mIsActive = isActive;
}

/**
 * @note Address: 0x80252FEC
 * @note Size: 0x104
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
			f32 timeLimit = 0.0f;
			getRumbleParameter(idx, intensity, timeLimit);
			node->setParameters(idx, 0.0f, intensity, 0.0f, timeLimit, data);
		}

		mParentNode->add(node);
	}
}

/**
 * @note Address: 0x802530F0
 * @note Size: 0x88
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

/**
 * @note Address: 0x80253178
 * @note Size: 0x90
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

/**
 * @note Address: 0x80253208
 * @note Size: 0x9C
 */
void ContRumble::getRumbleParameter(int index, f32& intensity, f32& timeLimit)
{
	f32 intensityFactors[3] = { 0.4f, 0.55f, 1.0f };
	f32 durations[3]        = { 0.2f, 0.35f, 0.5f };

	int offsetIndex = index - 8;

	intensity *= intensityFactors[offsetIndex / 3];
	timeLimit = durations[offsetIndex % 3];
}
} // namespace Game
