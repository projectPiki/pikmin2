#include "Game/Stickers.h"
#include "CollInfo.h"

static const char className[] = "creatureStick";

namespace Game {

int Stickers::numBuffer     = 0;
bool Stickers::mutex        = false;
Creature** Stickers::buffer = nullptr;

int Stickers::maxBuffer = 110;

/*
 * --INFO--
 * Address:	8019EE94
 * Size:	000024
 */
void Creature::clearStick()
{
	mCapture       = nullptr;
	mCaptured      = nullptr;
	mSticker       = nullptr;
	mSticked       = nullptr;
	mStuckCollPart = nullptr;
	mStickSlot     = -1;
}

/*
 * --INFO--
 * Address:	8019EEB8
 * Size:	00003C
 */
void Creature::releaseAllStickers()
{
	while (mSticked) {
		mSticked->endStick();
	}
}

/*
 * --INFO--
 * Address:	8019EEF4
 * Size:	000174
 */
bool Creature::startStick(Creature* obj, CollPart* part)
{
	// If already sticking
	if (isStickTo()) {
		// If isn't stuck to mouth and part is a mouth
		if (!isStickToMouth() && part->isMouth()) {
			// End current stick so we can start a new one (mouth is higher priority)
			endStick();
		} else {
			// Stick couldn't happen again
			return false;
		}
	}

	// Set the creature and part we're sticking to
	mSticker       = obj;
	mStuckCollPart = part;

	// If sticking to a mouth part, update stuck creature
	if (mStuckCollPart && mStuckCollPart->isMouth()) {
		static_cast<MouthCollPart*>(mStuckCollPart)->mStuckCreature = this;
	}

	// Update the creature this object is sticking to, and handle any previously stuck creature
	Creature* stick = obj->mSticked;
	if (!stick) {
		obj->mSticked = this;
		mCapture      = nullptr;
		mCaptured     = nullptr;
	} else {
		obj->mSticked   = this;
		mCapture        = nullptr;
		mCaptured       = stick;
		stick->mCapture = this;
	}

	// If sticking to a part, calculate the local position for the creature to stick to
	if (mStuckCollPart) {
		Vector3f pos = getPosition();
		mStuckCollPart->calcStickLocal(pos, mClimbingPosition);
	}

	// Notify the creature and the object about the start of the sticking process
	mSticker->onStickStart(this);
	onStickStartSelf(mSticker);

	return true;
}

/*
 * --INFO--
 * Address:	8019F068
 * Size:	0001B0
 */
bool Creature::startStickMouth(Creature* obj, CollPart* part)
{
	P2ASSERTLINE(202, part->isMouth());
	return startStick(obj, part);
}

/*
 * --INFO--
 * Address:	8019F218
 * Size:	00020C
 */
bool Creature::startStick(Creature* obj, s16 id)
{
	// Ignore if already sticking
	if (isStickTo()) {
		return false;
	}

	// If we can start sticking
	if (startStick(obj, (CollPart*)nullptr)) {
		// Check if the stick slot is free
		if (obj->isSlotFree(id)) {
			// Take the stick slot and activate
			obj->onSlotStickStart(this, id);
			mStickSlot = id;
			onStickStartSelf(obj);

			return true;
		} else {
			// Not free, stop trying to stick
			endStick();
			return false;
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	8019F424
 * Size:	000150
 */
void Creature::endStick()
{
	if (!isStickTo()) {
		return;
	}

	onStickEndSelf(mSticker);

	// Reset stick slot
	if (mStickSlot != -1) {
		mSticker->onSlotStickEnd(this, mStickSlot);
		mStickSlot = -1;
	} else {
		mSticker->onStickEnd(this);
	}

	// Reset stuck creature
	if (mStuckCollPart && mStuckCollPart->isMouth()) {
		static_cast<MouthCollPart*>(mStuckCollPart)->mStuckCreature = nullptr;
	}

	if (!mCapture && !mCaptured) {
		mSticker->mSticked = nullptr;
		mSticker           = nullptr;
		mStuckCollPart     = nullptr;
	} else if (!mCapture) {
		mSticker->mSticked  = mCaptured;
		mCaptured->mCapture = nullptr;
		mSticker            = nullptr;
		mStuckCollPart      = nullptr;
		mCapture            = nullptr;
		mCaptured           = nullptr;
	} else {
		mSticker            = nullptr;
		mCapture->mCaptured = mCaptured;
		if (mCaptured) {
			mCaptured->mCapture = mCapture;
		}
	}
}

/*
 * --INFO--
 * Address:	8019F574
 * Size:	000014
 * Returns whether the creature is stuck to anything
 */
bool Creature::isStickTo() { return mSticker != nullptr; }

/*
 * --INFO--
 * Address:	8019F588
 * Size:	000060
 */
bool Creature::isStickToMouth() { return mSticker && mStuckCollPart && mStuckCollPart->isMouth(); }

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
bool Creature::isStickLeader()
{
	// UNUSED FUNCTION
}

#include "Game/enemyInfo.h"

/*
 * --INFO--
 * Address:	8019F5E8
 * Size:	0004B4
 */
void Creature::updateStick(Vector3f& pos)
{
	P2ASSERTLINE(295, mSticker);

	setVelocity(Vector3f::zero);

	// If stuck to a mouth part
	if (mStuckCollPart && mStuckCollPart->isMouth()) {
		Matrixf stuckMtx, resultMtx;

		static_cast<MouthCollPart*>(mStuckCollPart)->copyMatrixTo(stuckMtx);

		// Set the scale factor if the creature is a Navi
		f32 scale = 1.0f;
		if (static_cast<MouthCollPart*>(mStuckCollPart)->_6C) {
			if (isNavi()) {
				if (getCreatureID() == Game::EnemyTypeID::EnemyID_Pelplant) {
					scale = 1.3f;
				} else {
					scale = 1.5f;
				}
			}

			Vector3f scalevec(scale);
			Vector3f rotate(0.0f);
			resultMtx.makeSRT(scalevec, rotate, mStuckCollPart->mOffset);
		} else {
			Vector3f scalevec(scale);
			Vector3f rotate(0.0f, 0.0f, HALF_PI);
			resultMtx.makeSR(scalevec, rotate);
		}

		PSMTXConcat(stuckMtx.mMatrix.mtxView, resultMtx.mMatrix.mtxView, mBaseTrMatrix.mMatrix.mtxView);

		Vector3f pos;
		mBaseTrMatrix.getTranslation(pos);
		setPosition(pos, true);
	} else { // If the creature is sticking to a non-mouth part
		if (mStuckCollPart) {
			// Calculate the global sticking position of the creature
			Vector3f pos = getPosition();
			mStuckCollPart->calcStickGlobal(mClimbingPosition, pos);

			// Calculate the pose matrix based on part type (tubetree == climbing)
			if (mStuckCollPart->mPartType == COLLTYPE_TUBETREE) {
				Vector3f rotate;
				rotate.x = getFaceDir();
				rotate.y = mClimbingPosition.y;
				mStuckCollPart->calcPoseMatrix(rotate, mBaseTrMatrix);

				if (isPiki()) {
					scaleMatrix2(mBaseTrMatrix, mScale);
				}
			} else {
				mStuckCollPart->calcPoseMatrix(pos, mBaseTrMatrix);
				if (isPiki()) {
					scaleMatrix2(mBaseTrMatrix, mScale);
				}
			}

			setPosition(pos, true);
			mBaseTrMatrix.setTranslation(pos);
		} else if (mStickSlot != -1) { // If the creature isn't stuck to any part, but stuck in a slot
			Vector3f position;
			mSticker->calcStickSlotGlobal(mStickSlot, position);

			// Get direction from creature to slot, then calculate the angle on the Y axis
			Vector3f direction = mSticker->getPosition() - position;
			_normaliseXZ(direction);
			f32 angleBetween = JMath::atanTable_.atan2_(direction.x, direction.z);

			setPosition(position, true);

			Vector3f rotation(0.0f, angleBetween, 0.0f);

			// Rotate towards the slot position, and maintain positioning
			mBaseTrMatrix.makeTR(position, rotation);
		}
	}
}

/*
 * --INFO--
 * Address:	8019FA9C
 * Size:	00000C
 */
void Creature::clearCapture() { mCaptureMatrix = nullptr; }

/*
 * --INFO--
 * Address:	8019FAA8
 * Size:	000054
 */
void Creature::startCapture(Matrixf* mtx)
{
	mCaptureMatrix = mtx;
	setAtari(false);
	onStartCapture();
}

/*
 * --INFO--
 * Address:	8019FAFC
 * Size:	0000A0
 */
void Creature::updateCapture(Matrixf& mtx)
{
	if (mCaptureMatrix) {
		PSMTXConcat(mCaptureMatrix->mMatrix.mtxView, mtx.mMatrix.mtxView, mBaseTrMatrix.mMatrix.mtxView);

		Mtx newmtx;
		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, newmtx);

		Vector3f pos;
		mBaseTrMatrix.getTranslation(pos);

		setPosition(pos, false);
		PSMTXCopy(newmtx, mBaseTrMatrix.mMatrix.mtxView);
		onUpdateCapture(mtx);
	}
}

/*
 * --INFO--
 * Address:	8019FB9C
 * Size:	000058
 */
void Creature::endCapture()
{
	mCaptureMatrix = nullptr;
	setAtari(true);
	onEndCapture();
}

/*
 * --INFO--
 * Address:	8019FBF4
 * Size:	000068
 */
void Stickers::initialise()
{
	mutex     = false;
	maxBuffer = MAX_STICKERS;
	numBuffer = 0;
	buffer    = new Creature*[MAX_STICKERS];
	for (int i = 0; i < maxBuffer; i++) {
		buffer[i] = nullptr;
	}
}

/*
 * --INFO--
 * Address:	8019FC5C
 * Size:	000108
 */
Stickers::Stickers(Creature* obj)
{
	P2ASSERTLINE(512, !mutex);
	mutex       = true;
	Creature* c = obj->mSticked;
	numBuffer   = 0;
	for (; c; c = c->mCaptured) {
		JUT_ASSERTLINE(519, numBuffer < maxBuffer, "too many stickers !\n");
		buffer[numBuffer++] = c;
	}
}

/*
 * --INFO--
 * Address:	8019FD64
 * Size:	00008C
 */
Stickers::~Stickers()
{
	mutex     = false;
	numBuffer = 0;
}

/*
 * --INFO--
 * Address:	8019FDF0
 * Size:	000070
 */
Creature* Stickers::get(void* id)
{
	P2ASSERTBOUNDSLINE(535, 0, (int)id, (int)numBuffer);
	return buffer[(int)id];
}

/*
 * --INFO--
 * Address:	8019FE60
 * Size:	000008
 */
void* Stickers::getNext(void* in) { return (void*)((int)in + 1); }

/*
 * --INFO--
 * Address:	8019FE68
 * Size:	000008
 */
void* Stickers::getStart() { return nullptr; }

/*
 * --INFO--
 * Address:	8019FE70
 * Size:	000008
 */
void* Stickers::getEnd() { return (void*)numBuffer; }

} // namespace Game
