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
	if (isStickTo()) {
		if (!isStickToMouth() && part->isMouth()) {
			endStick();
		} else {
			return false;
		}
	}
	mSticker       = obj;
	mStuckCollPart = part;
	if (mStuckCollPart && mStuckCollPart->isMouth()) {
		static_cast<MouthCollPart*>(mStuckCollPart)->mStuckCreature = this;
	}

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

	if (mStuckCollPart) {
		Vector3f pos = getPosition();
		mStuckCollPart->calcStickLocal(pos, mClimbingPosition);
	}

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
	if (isStickTo()) {
		return false;
	}

	if (startStick(obj, (CollPart*)nullptr)) { // sure.
		if (obj->isSlotFree(id)) {
			obj->onSlotStickStart(this, id);
			mStickSlot = id;
			onStickStartSelf(obj);
			return true;
		} else {
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
	if (isStickTo()) {
		onStickEndSelf(mSticker);
		if (mStickSlot != -1) {
			mSticker->onSlotStickEnd(this, mStickSlot);
			mStickSlot = -1;
		} else {
			mSticker->onStickEnd(this);
		}

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
bool Creature::isStickToMouth()
{
	bool ret = false;
	if (mSticker && mStuckCollPart && mStuckCollPart->isMouth()) {
		ret = true;
	}
	return ret;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
bool Creature::isStickLeader()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8019F5E8
 * Size:	0004B4
 */
void Creature::updateStick(Vector3f& pos)
{

	P2ASSERTLINE(295, mSticker);
	setVelocity(Vector3f::zero);

	if (mStuckCollPart && mStuckCollPart->isMouth()) {
		// MouthCollPart* part = static_cast<MouthCollPart*>(mStuckCollPart);
		Matrixf mtx, mtx2;
		static_cast<MouthCollPart*>(mStuckCollPart)->copyMatrixTo(mtx);
		f32 scale = 1.0f;
		if (static_cast<MouthCollPart*>(mStuckCollPart)->_6C) {
			if (isNavi()) {
				if (getCreatureID() == 0) {
					scale = 1.3f;
				} else {
					scale = 1.5f;
				}
			}
			Vector3f scalevec(scale);
			Vector3f rotate(0.0f);
			mtx2.makeSRT(scalevec, rotate, mStuckCollPart->mOffset);
		} else {
			Vector3f scalevec(scale);
			Vector3f rotate(0.0f, 0.0f, HALF_PI);
			mtx2.makeSR(scalevec, rotate);
		}
		PSMTXConcat(mtx.mMatrix.mtxView, mtx2.mMatrix.mtxView, mObjMatrix.mMatrix.mtxView);
		Vector3f pos;
		pos.x = mObjMatrix.mMatrix.structView.tx;
		pos.y = mObjMatrix.mMatrix.structView.ty;
		pos.z = mObjMatrix.mMatrix.structView.tz;

		setPosition(pos, true);
	} else {
		if (mStuckCollPart) {
			Vector3f pos = getPosition();
			mStuckCollPart->calcStickGlobal(mClimbingPosition, pos);
			if (mStuckCollPart->mPartType == COLLTYPE_TUBETREE) {
				Vector3f rotate;
				rotate.x = getFaceDir();
				rotate.y = mClimbingPosition.y;
				mStuckCollPart->calcPoseMatrix(rotate, mObjMatrix);
				if (isPiki()) {
					mObjMatrix.mMatrix.structView.xx *= mScale.x;
					mObjMatrix.mMatrix.structView.xy *= mScale.x;
					mObjMatrix.mMatrix.structView.xz *= mScale.x;

					mObjMatrix.mMatrix.structView.yx *= mScale.y;
					mObjMatrix.mMatrix.structView.yy *= mScale.y;
					mObjMatrix.mMatrix.structView.yz *= mScale.y;

					mObjMatrix.mMatrix.structView.zx *= mScale.z;
					mObjMatrix.mMatrix.structView.zy *= mScale.z;
					mObjMatrix.mMatrix.structView.zz *= mScale.z;
				}
			} else {
				mStuckCollPart->calcPoseMatrix(pos, mObjMatrix);
				if (isPiki()) {
					mObjMatrix.mMatrix.structView.xx *= mScale.x;
					mObjMatrix.mMatrix.structView.xy *= mScale.x;
					mObjMatrix.mMatrix.structView.xz *= mScale.x;

					mObjMatrix.mMatrix.structView.yx *= mScale.y;
					mObjMatrix.mMatrix.structView.yy *= mScale.y;
					mObjMatrix.mMatrix.structView.yz *= mScale.y;

					mObjMatrix.mMatrix.structView.zx *= mScale.z;
					mObjMatrix.mMatrix.structView.zy *= mScale.z;
					mObjMatrix.mMatrix.structView.zz *= mScale.z;
				}
			}
			setPosition(pos, true);
			mObjMatrix.mMatrix.structView.tx = pos.x;
			mObjMatrix.mMatrix.structView.ty = pos.y;
			mObjMatrix.mMatrix.structView.tz = pos.z;
		} else {
			if (mStickSlot != -1) {
				Vector3f slotpos;
				mSticker->calcStickSlotGlobal(mStickSlot, slotpos);
				Vector3f pos  = mSticker->getPosition();
				Vector3f diff = pos - slotpos;
				_normaliseXZ(diff);
				f32 dir = JMath::atanTable_.atan2_(diff.x, diff.z);
				setPosition(slotpos, true);
				Vector3f rotate(0.0f, dir, 0.0f);
				mObjMatrix.makeTR(slotpos, rotate);
			}
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
		PSMTXConcat(mCaptureMatrix->mMatrix.mtxView, mtx.mMatrix.mtxView, mObjMatrix.mMatrix.mtxView);
		Mtx newmtx;
		PSMTXCopy(mObjMatrix.mMatrix.mtxView, newmtx);

		Vector3f pos;
		pos.x = mObjMatrix.mMatrix.structView.tx;
		pos.y = mObjMatrix.mMatrix.structView.ty;
		pos.z = mObjMatrix.mMatrix.structView.tz;

		setPosition(pos, false);
		PSMTXCopy(newmtx, mObjMatrix.mMatrix.mtxView);
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
