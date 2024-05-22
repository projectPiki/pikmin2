#include "Dolphin/pad.h"
#include "System.h"
#include "Game/rumble.h"

namespace Game {

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
 * TODO
 */
void ContRumble::update()
{
	f32 maxRumbleIntensity = 0.0f;

	FOREACH_NODE_CHILD(RumbleNode, mParentNode->mChild, currentNode)
	{
		RumbleData* rumbleData = ((RumbleNode*)currentNode->mNext)->mRumbleData;

		if (rumbleData) {
			int numRumbleSegments = rumbleData->mCount - 1;

			// Find the current segment
			int currentSegment;
			for (currentSegment = 0; currentSegment < numRumbleSegments; currentSegment++) {
				if (currentNode->mRumbleTimer < rumbleData->mTimes[currentSegment]) {
					break;
				}
			}

			// Calculate the current intensity
			if (currentSegment >= numRumbleSegments) {
				f32 timeStart = rumbleData->mTimes[4 * currentSegment];
				f32 timeEnd   = rumbleData->mTimes[4 * (currentSegment + 1)];
				f32 t         = (currentNode->mRumbleTimer - timeStart) / (timeEnd - timeStart);

				f32 intensityStart = rumbleData->mIntensities[4 * currentSegment];
				f32 intensityEnd   = rumbleData->mIntensities[4 * (currentSegment + 1)];

				currentNode->mCurrentIntensity = ((1.0 - t) * intensityStart) + (t * intensityEnd);
			} else {
			}
		} else {
			currentNode->mCurrentIntensity = currentNode->mDefaultIntensity;
		}

		currentNode->mCurrentIntensity *= currentNode->mDefaultIntensity;
		currentNode->mRumbleTimer += sys->getDeltaTime();

		if (maxRumbleIntensity < currentNode->mCurrentIntensity) {
			maxRumbleIntensity = currentNode->mCurrentIntensity;
		}

		RumbleData* limitData = currentNode->mRumbleData;
		bool shouldAddToActiveNodes;

		if (limitData && limitData->mCount > 0 && currentNode->mRumbleTimer < limitData->mTimes[limitData->mCount - 1]) {
			shouldAddToActiveNodes = false;
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

		if (mTotalIntensity < 1.0f) {
			if (mIsActive) {
				PADControlMotor(mPadChannel, PAD_MOTOR_STOP);
			} else {
				mTotalIntensity -= 1.0f;
			}
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

/**
 * @note Address: 0x802530F0
 * @note Size: 0x88
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
void ContRumble::getRumbleParameter(int index, f32& x, f32& y)
{
	f32 xRumbles[3] = { 0.4f, 0.55f, 1.0f };
	f32 yRumbles[3] = { 0.2f, 0.35f, 0.5f };

	int offsetIndex = index - 8;

	x *= xRumbles[offsetIndex / 3];
	y = yRumbles[offsetIndex % 3];
}
} // namespace Game
