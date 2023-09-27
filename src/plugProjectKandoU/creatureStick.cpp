#include "Game/Stickers.h"
#include "CollInfo.h"

static const char className[] = "creatureStick";

namespace Game {

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
		if (!isStickToMouth()) {
			if (part->isMouth()) {
				return false;
			}
			endStick();
		}
	}
	mSticker       = obj;
	mStuckCollPart = part;
	if (mStuckCollPart && mStuckCollPart->isMouth()) {
		static_cast<MouthCollPart*>(mStuckCollPart)->mStuckCreature = this;
	}

	Creature* stick = mSticked;
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
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r5
	stw      r30, 0x28(r1)
	mr       r30, r4
	stw      r29, 0x24(r1)
	mr       r29, r3
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019EF64
	mr       r3, r29
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019EF5C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019EF5C
	mr       r3, r29
	bl       endStick__Q24Game8CreatureFv
	b        lbl_8019EF64

lbl_8019EF5C:
	li       r3, 0
	b        lbl_8019F04C

lbl_8019EF64:
	stw      r30, 0xf4(r29)
	stw      r31, 0xf8(r29)
	lwz      r3, 0xf8(r29)
	cmplwi   r3, 0
	beq      lbl_8019EF98
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019EF98
	lwz      r3, 0xf8(r29)
	stw      r29, 0x64(r3)

lbl_8019EF98:
	lwz      r3, 0xf0(r30)
	cmplwi   r3, 0
	bne      lbl_8019EFB8
	stw      r29, 0xf0(r30)
	li       r0, 0
	stw      r0, 0x100(r29)
	stw      r0, 0xfc(r29)
	b        lbl_8019EFCC

lbl_8019EFB8:
	stw      r29, 0xf0(r30)
	li       r0, 0
	stw      r0, 0x100(r29)
	stw      r3, 0xfc(r29)
	stw      r29, 0x100(r3)

lbl_8019EFCC:
	lwz      r0, 0xf8(r29)
	cmplwi   r0, 0
	beq      lbl_8019F018
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r4, r1, 0x14
	lfs      f1, 0xc(r1)
	addi     r5, r29, 0x104
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 0xf8(r29)
	bl       "calcStickLocal__8CollPartFR10Vector3<f>R10Vector3<f>"

lbl_8019F018:
	lwz      r3, 0xf4(r29)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 0x158(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	lwz      r4, 0xf4(r29)
	lwz      r12, 0(r29)
	lwz      r12, 0x160(r12)
	mtctr    r12
	bctrl
	li       r3, 1

lbl_8019F04C:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019F068
 * Size:	0001B0
 */
bool Creature::startStickMouth(Creature* obj, CollPart* part)
{
	P2ASSERTLINE(202, part->isMouth());

	if (isStickTo()) {
		if (!isStickToMouth()) {
			if (part->isMouth()) {
				return false;
			}
			endStick();
		}
	}
	mSticker       = obj;
	mStuckCollPart = part;
	if (mStuckCollPart && mStuckCollPart->isMouth()) {
		static_cast<MouthCollPart*>(mStuckCollPart)->mStuckCreature = this;
	}

	Creature* stick = mSticked;
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

	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	mr       r30, r5
	mr       r3, r30
	stw      r29, 0x24(r1)
	mr       r29, r4
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019F0C4
	lis      r3, lbl_8047F228@ha
	lis      r5, lbl_8047F23C@ha
	addi     r3, r3, lbl_8047F228@l
	li       r4, 0xca
	addi     r5, r5, lbl_8047F23C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019F0C4:
	mr       r3, r31
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F114
	mr       r3, r31
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019F10C
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F10C
	mr       r3, r31
	bl       endStick__Q24Game8CreatureFv
	b        lbl_8019F114

lbl_8019F10C:
	li       r3, 0
	b        lbl_8019F1FC

lbl_8019F114:
	stw      r29, 0xf4(r31)
	stw      r30, 0xf8(r31)
	lwz      r3, 0xf8(r31)
	cmplwi   r3, 0
	beq      lbl_8019F148
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F148
	lwz      r3, 0xf8(r31)
	stw      r31, 0x64(r3)

lbl_8019F148:
	lwz      r3, 0xf0(r29)
	cmplwi   r3, 0
	bne      lbl_8019F168
	stw      r31, 0xf0(r29)
	li       r0, 0
	stw      r0, 0x100(r31)
	stw      r0, 0xfc(r31)
	b        lbl_8019F17C

lbl_8019F168:
	stw      r31, 0xf0(r29)
	li       r0, 0
	stw      r0, 0x100(r31)
	stw      r3, 0xfc(r31)
	stw      r31, 0x100(r3)

lbl_8019F17C:
	lwz      r0, 0xf8(r31)
	cmplwi   r0, 0
	beq      lbl_8019F1C8
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	addi     r4, r1, 8
	lfs      f1, 0x18(r1)
	addi     r5, r31, 0x104
	lfs      f0, 0x1c(r1)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	lwz      r3, 0xf8(r31)
	bl       "calcStickLocal__8CollPartFR10Vector3<f>R10Vector3<f>"

lbl_8019F1C8:
	lwz      r3, 0xf4(r31)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x158(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r4, 0xf4(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x160(r12)
	mtctr    r12
	bctrl
	li       r3, 1

lbl_8019F1FC:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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

	if (isStickTo()) {
		if (!isStickToMouth()) {
			MouthCollPart* part = nullptr; // HUH???
			if (part->isMouth()) {
				endStick();
				return false;
			}
		}
	}

	mSticker       = obj;
	mStuckCollPart = nullptr;
	if (mStuckCollPart && mStuckCollPart->isMouth()) {
		static_cast<MouthCollPart*>(mStuckCollPart)->mStuckCreature = this;
	}

	Creature* stick = mSticked;
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

	bool ret = true;
	if (ret) {
		if (obj->isSlotFree(id)) {
			obj->onSlotStickStart(this, id);
			mStickSlot = id;
			onStickStartSelf(obj);
			return true;
		} else {
			endStick();
		}
	}
	return false;

	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r5
	stw      r30, 0x28(r1)
	mr       r30, r4
	stw      r29, 0x24(r1)
	mr       r29, r3
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F250
	li       r3, 0
	b        lbl_8019F408

lbl_8019F250:
	mr       r3, r29
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F2A0
	mr       r3, r29
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019F298
	li       r3, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F298
	mr       r3, r29
	bl       endStick__Q24Game8CreatureFv
	b        lbl_8019F2A0

lbl_8019F298:
	li       r0, 0
	b        lbl_8019F38C

lbl_8019F2A0:
	stw      r30, 0xf4(r29)
	li       r0, 0
	stw      r0, 0xf8(r29)
	lwz      r3, 0xf8(r29)
	cmplwi   r3, 0
	beq      lbl_8019F2D8
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F2D8
	lwz      r3, 0xf8(r29)
	stw      r29, 0x64(r3)

lbl_8019F2D8:
	lwz      r3, 0xf0(r30)
	cmplwi   r3, 0
	bne      lbl_8019F2F8
	stw      r29, 0xf0(r30)
	li       r0, 0
	stw      r0, 0x100(r29)
	stw      r0, 0xfc(r29)
	b        lbl_8019F30C

lbl_8019F2F8:
	stw      r29, 0xf0(r30)
	li       r0, 0
	stw      r0, 0x100(r29)
	stw      r3, 0xfc(r29)
	stw      r29, 0x100(r3)

lbl_8019F30C:
	lwz      r0, 0xf8(r29)
	cmplwi   r0, 0
	beq      lbl_8019F358
	mr       r4, r29
	addi     r3, r1, 0x14
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	addi     r4, r1, 8
	lfs      f1, 0x18(r1)
	addi     r5, r29, 0x104
	lfs      f0, 0x1c(r1)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	lwz      r3, 0xf8(r29)
	bl       "calcStickLocal__8CollPartFR10Vector3<f>R10Vector3<f>"

lbl_8019F358:
	lwz      r3, 0xf4(r29)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 0x158(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	lwz      r4, 0xf4(r29)
	lwz      r12, 0(r29)
	lwz      r12, 0x160(r12)
	mtctr    r12
	bctrl
	li       r0, 1

lbl_8019F38C:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8019F404
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x168(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F3F4
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	mr       r5, r31
	lwz      r12, 0x178(r12)
	mtctr    r12
	bctrl
	sth      r31, 0x110(r29)
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x160(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_8019F408

lbl_8019F3F4:
	mr       r3, r29
	bl       endStick__Q24Game8CreatureFv
	li       r3, 0
	b        lbl_8019F408

lbl_8019F404:
	li       r3, 0

lbl_8019F408:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
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
		MouthCollPart* part = static_cast<MouthCollPart*>(mStuckCollPart);
		Matrixf mtx, mtx2;
		part->copyMatrixTo(mtx);
		f32 scale = 1.0f;
		if (part->mStuckCreature) {
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
			Vector3f rotate(0.0f);
			mtx2.makeSR(scalevec, rotate);
		}
		PSMTXConcat(mtx.mMatrix.mtxView, mtx2.mMatrix.mtxView, mObjMatrix.mMatrix.mtxView);
		Vector3f pos;
		pos.x = mObjMatrix.mMatrix.structView.tx;
		pos.y = mObjMatrix.mMatrix.structView.ty;
		pos.z = mObjMatrix.mMatrix.structView.tz;

		setPosition(pos, false);
	} else {
		if (mStuckCollPart) {
			Vector3f pos = getPosition();
			mStuckCollPart->calcStickGlobal(mClimbingPosition, pos);
			if (mStuckCollPart->mPartType == COLLTYPE_TUBETREE) {
				Vector3f rotate(mClimbingPosition.x, getFaceDir(), mClimbingPosition.z);
				mStuckCollPart->calcPoseMatrix(rotate, mObjMatrix);
				if (isNavi()) {
					scaleMatrix(&mObjMatrix, mScale.x);
				}
			} else {
				mStuckCollPart->calcPoseMatrix(pos, mObjMatrix);
				if (isNavi()) {
					scaleMatrix(&mObjMatrix, mScale.x);
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
				Vector3f pos = mSticker->getPosition();
				f32 x        = pos.x - slotpos.x;
				f32 z        = pos.z - slotpos.z;
				f32 dist     = pos.distance(slotpos);
				if (dist > 0.0f) {
					x *= (1.0f / dist);
					z *= (1.0f / dist);
				}
				f32 dir = JMath::atanTable_.atan2_(x, z);
				setPosition(slotpos, true);
				Vector3f rotate(0.0f, dir, 0.0f);
				mObjMatrix.makeTR(slotpos, rotate);
			}
		}
	}

	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stfd     f31, 0x100(r1)
	psq_st   f31, 264(r1), 0, qr0
	stw      r31, 0xfc(r1)
	mr       r31, r3
	lwz      r0, 0xf4(r3)
	cmplwi   r0, 0
	bne      lbl_8019F62C
	lis      r3, lbl_8047F228@ha
	lis      r5, lbl_8047F23C@ha
	addi     r3, r3, lbl_8047F228@l
	li       r4, 0x127
	addi     r5, r5, lbl_8047F23C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019F62C:
	lwz      r12, 0(r31)
	lis      r4, "zero__10Vector3<f>"@ha
	mr       r3, r31
	lwz      r12, 0x68(r12)
	addi     r4, r4, "zero__10Vector3<f>"@l
	mtctr    r12
	bctrl
	lwz      r3, 0xf8(r31)
	cmplwi   r3, 0
	beq      lbl_8019F774
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F774
	lwz      r3, 0xf8(r31)
	addi     r4, r1, 0xbc
	bl       copyMatrixTo__13MouthCollPartFR7Matrixf
	lwz      r3, 0xf8(r31)
	lfs      f31, lbl_80519040@sda21(r2)
	lbz      r0, 0x6c(r3)
	cmplwi   r0, 0
	beq      lbl_8019F708
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F6D0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1ac(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_8019F6CC
	lfs      f31, lbl_80519044@sda21(r2)
	b        lbl_8019F6D0

lbl_8019F6CC:
	lfs      f31, lbl_80519048@sda21(r2)

lbl_8019F6D0:
	lfs      f0, lbl_8051904C@sda21(r2)
	addi     r3, r1, 0x8c
	stfs     f31, 0x80(r1)
	addi     r4, r1, 0x80
	addi     r5, r1, 0x74
	stfs     f31, 0x84(r1)
	stfs     f31, 0x88(r1)
	stfs     f0, 0x74(r1)
	stfs     f0, 0x78(r1)
	stfs     f0, 0x7c(r1)
	lwz      r6, 0xf8(r31)
	addi     r6, r6, 0x20
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	b        lbl_8019F738

lbl_8019F708:
	lfs      f1, lbl_8051904C@sda21(r2)
	addi     r3, r1, 0x8c
	lfs      f0, lbl_80519050@sda21(r2)
	addi     r4, r1, 0x68
	stfs     f31, 0x68(r1)
	addi     r5, r1, 0x5c
	stfs     f31, 0x6c(r1)
	stfs     f31, 0x70(r1)
	stfs     f1, 0x5c(r1)
	stfs     f1, 0x60(r1)
	stfs     f0, 0x64(r1)
	bl       "makeSR__7MatrixfFR10Vector3<f>R10Vector3<f>"

lbl_8019F738:
	addi     r3, r1, 0xbc
	addi     r4, r1, 0x8c
	addi     r5, r31, 0x138
	bl       PSMTXConcat
	lfs      f0, 0x144(r31)
	mr       r3, r31
	addi     r4, r1, 0x50
	li       r5, 1
	stfs     f0, 0x50(r1)
	lfs      f0, 0x154(r31)
	stfs     f0, 0x54(r1)
	lfs      f0, 0x164(r31)
	stfs     f0, 0x58(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	b        lbl_8019FA80

lbl_8019F774:
	lwz      r0, 0xf8(r31)
	cmplwi   r0, 0
	beq      lbl_8019F994
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	addi     r4, r31, 0x104
	lfs      f1, 0x18(r1)
	addi     r5, r1, 0x44
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)
	lwz      r3, 0xf8(r31)
	bl       "calcStickGlobal__8CollPartFR10Vector3<f>R10Vector3<f>"
	lwz      r3, 0xf8(r31)
	lbz      r0, 0x58(r3)
	cmplwi   r0, 2
	bne      lbl_8019F8B0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x38(r1)
	addi     r4, r1, 0x38
	addi     r5, r31, 0x138
	lfs      f0, 0x108(r31)
	stfs     f0, 0x3c(r1)
	lwz      r3, 0xf8(r31)
	bl       "calcPoseMatrix__8CollPartFR10Vector3<f>R7Matrixf"
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F968
	lfs      f1, 0x138(r31)
	lfs      f0, 0x168(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x138(r31)
	lfs      f1, 0x148(r31)
	lfs      f0, 0x168(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x148(r31)
	lfs      f1, 0x158(r31)
	lfs      f0, 0x168(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x158(r31)
	lfs      f1, 0x13c(r31)
	lfs      f0, 0x16c(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x13c(r31)
	lfs      f1, 0x14c(r31)
	lfs      f0, 0x16c(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x14c(r31)
	lfs      f1, 0x15c(r31)
	lfs      f0, 0x16c(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x15c(r31)
	lfs      f1, 0x140(r31)
	lfs      f0, 0x170(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x140(r31)
	lfs      f1, 0x150(r31)
	lfs      f0, 0x170(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x150(r31)
	lfs      f1, 0x160(r31)
	lfs      f0, 0x170(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x160(r31)
	b        lbl_8019F968

lbl_8019F8B0:
	addi     r4, r1, 0x44
	addi     r5, r31, 0x138
	bl       "calcPoseMatrix__8CollPartFR10Vector3<f>R7Matrixf"
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F968
	lfs      f1, 0x138(r31)
	lfs      f0, 0x168(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x138(r31)
	lfs      f1, 0x148(r31)
	lfs      f0, 0x168(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x148(r31)
	lfs      f1, 0x158(r31)
	lfs      f0, 0x168(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x158(r31)
	lfs      f1, 0x13c(r31)
	lfs      f0, 0x16c(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x13c(r31)
	lfs      f1, 0x14c(r31)
	lfs      f0, 0x16c(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x14c(r31)
	lfs      f1, 0x15c(r31)
	lfs      f0, 0x16c(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x15c(r31)
	lfs      f1, 0x140(r31)
	lfs      f0, 0x170(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x140(r31)
	lfs      f1, 0x150(r31)
	lfs      f0, 0x170(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x150(r31)
	lfs      f1, 0x160(r31)
	lfs      f0, 0x170(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x160(r31)

lbl_8019F968:
	mr       r3, r31
	addi     r4, r1, 0x44
	li       r5, 1
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lfs      f0, 0x44(r1)
	stfs     f0, 0x144(r31)
	lfs      f0, 0x48(r1)
	stfs     f0, 0x154(r31)
	lfs      f0, 0x4c(r1)
	stfs     f0, 0x164(r31)
	b        lbl_8019FA80

lbl_8019F994:
	lha      r4, 0x110(r31)
	cmpwi    r4, -1
	beq      lbl_8019FA80
	lwz      r3, 0xf4(r31)
	addi     r5, r1, 0x2c
	lwz      r12, 0(r3)
	lwz      r12, 0x180(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xf4(r31)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 0x30(r1)
	lfs      f2, 0x10(r1)
	fsubs    f3, f1, f0
	lfs      f0, 0x34(r1)
	lfs      f1, 8(r1)
	fsubs    f2, f2, f0
	lfs      f0, 0x2c(r1)
	fmuls    f3, f3, f3
	fsubs    f1, f1, f0
	lfs      f0, lbl_8051904C@sda21(r2)
	fmuls    f4, f2, f2
	fmadds   f3, f1, f1, f3
	fadds    f3, f4, f3
	fcmpo    cr0, f3, f0
	ble      lbl_8019FA20
	ble      lbl_8019FA24
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8019FA24

lbl_8019FA20:
	fmr      f3, f0

lbl_8019FA24:
	lfs      f0, lbl_8051904C@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8019FA40
	lfs      f0, lbl_80519040@sda21(r2)
	fdivs    f0, f0, f3
	fmuls    f1, f1, f0
	fmuls    f2, f2, f0

lbl_8019FA40:
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f31, f1
	mr       r3, r31
	addi     r4, r1, 0x2c
	li       r5, 1
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lfs      f0, lbl_8051904C@sda21(r2)
	addi     r3, r31, 0x138
	stfs     f31, 0x24(r1)
	addi     r4, r1, 0x2c
	addi     r5, r1, 0x20
	stfs     f0, 0x20(r1)
	stfs     f0, 0x28(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"

lbl_8019FA80:
	psq_l    f31, 264(r1), 0, qr0
	lwz      r0, 0x114(r1)
	lfd      f31, 0x100(r1)
	lwz      r31, 0xfc(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
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
