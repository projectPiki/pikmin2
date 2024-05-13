#include "Dolphin/os.h"
#include "Game/CPlate.h"
#include "Game/Piki.h"
#include "Game/Navi.h"
#include "P2Macros.h"

namespace Game {

/**
 * @note Address: 0x80194FF4
 * @note Size: 0x14
 */
Creature* CPlate::get(void* index) { return mSlots[(int)index].mCreature; }

/**
 * @note Address: 0x80195008
 * @note Size: 0x3C
 */
void* CPlate::getNext(void* index)
{
	getEnd();
	return (void*)((int)index + 1); // the void* pointer cast stuff is for Container compatibility.
}

/**
 * @note Address: 0x80195044
 * @note Size: 0x8
 */
void* CPlate::getStart() { return nullptr; }

/**
 * @note Address: 0x8019504C
 * @note Size: 0x8
 */
void* CPlate::getEnd() { return (void*)mSlotCount; }

/**
 * @note Address: 0x80195054
 * @note Size: 0xC
 */
void CPlate::shrink() { mShrinkTimer = 10; }

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
void CPlate::updateShrink()
{
	// UNUSED FUNCTION
}

/**
 * ct__
 * @note Address: 0x80195060
 * @note Size: 0x1F0
 */
CPlate::CPlate(int slotLimit)
    : Container<Creature>()
    , mParms()
    , mSlotLimit(slotLimit)
{
	mMoveStickRadius = 10.0f;
	mBaseRadius      = 10.0f;
	mPosition        = Vector3f(0.0f);
	mAngle           = 0.0f;
	mSlots           = new Slot[mSlotLimit];
	mActiveGroupSize = 0;
	mSlotCount       = 0;
	_110             = 0;
	mIsPositionUnset = 1;
	mUnused          = Vector3f(0.0f);
	for (int i = 0; i < ARRAY_SIZE(mHappaStageCounts); i++) {
		mHappaStageCounts[i] = 0;
	}
	mVelocity           = Vector3f(0.0f);
	mBasePositionOffset = Vector3f(0.0f);
	mShrinkTimer        = 0;
}

/**
 * Sets the position, angle, velocity, and scale of the CPlate object.
 *
 * @param position The position vector of the CPlate object.
 * @param angle The angle of rotation for the CPlate object.
 * @param velocity The velocity vector of the CPlate object.
 * @param scale The scale factor for the CPlate object.
 *
 * @note Address: 0x801952EC
 * @note Size: 0x210
 */
void CPlate::setPos(Vector3f& position, f32 angle, Vector3f& velocity, f32 scale)
{
	f32 offset = mParms.mStartingOffset();
	offset *= scale;

	// Cap the offset if the velocity is too high
	if (mVelocity.length2D() > 5.0f) {
		offset = 0.0f;
	}

	f32 currentRadius = mBaseRadius + offset;

	mAngle    = angle;
	mPosition = position;

	Vector3f dir        = Vector3f(currentRadius * sinf(angle), 0.0f, currentRadius * cosf(angle));
	mBasePositionOffset = mPosition + dir;
	mVelocity           = velocity;

	Vector3f secondDir = Vector3f(mMaxRadius * sinf(angle), 0.0f, mMaxRadius * cosf(angle));
	mMaxPositionOffset = position + secondDir;

	mIsPositionUnset = 0;
}

/**
 * @note Address: 0x801954FC
 * @note Size: 0x20C
 */
void CPlate::setPosGray(Vector3f& position, f32 angle, Vector3f& velocity, f32 scale)
{
	f32 offset = mParms.mStartingOffset();
	offset *= scale;

	if (mVelocity.length2D() > 5.0f) {
		offset = 0.0f;
	}

	f32 baseRadius = mBaseRadius + offset;

	mPosition = position;

	Vector3f baseDirection = Vector3f(baseRadius * sinf(angle), 0.0f, baseRadius * cosf(angle));
	mBasePositionOffset    = mPosition + baseDirection;
	mVelocity              = velocity;

	Vector3f maxDirection = Vector3f(mMaxRadius * sinf(angle), 0.0f, mMaxRadius * cosf(angle));
	mMaxPositionOffset    = position + maxDirection;
	mIsPositionUnset      = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void CPlate::setPosNeutral(Vector3f& p1, f32 p2, Vector3f& p3, f32 p4)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80195708
 * @note Size: 0xA8
 */
int CPlate::getSlot(Creature* piki, SlotChangeListener* listener, bool doCheckValid)
{
	if (!doCheckValid) {
		static_cast<Piki*>(piki)->mNavi->getOlimarData();
		if (mSlotCount >= 100) {
			return -1;
		}
	}

	mHappaStageCounts[static_cast<Piki*>(piki)->mHappaKind]++;
	int slot               = mSlotCount;
	mSlots[slot].mCreature = piki;
	mSlots[slot].mListener = listener;
	mSlotCount++;

	return slot;
}

/**
 * @note Address: 0x801957B0
 * @note Size: 0xB8
 */
void CPlate::changeFlower(Creature* creature)
{
	P2ASSERTLINE(312, creature->isPiki());

	// What's the current flower state?
	int currentKind = static_cast<Piki*>(creature)->mHappaKind;

	// What's the previous flower state?
	int previousKind = (currentKind + (PikiGrowthStageCount - 1)) % PikiGrowthStageCount;

	// Update it (Priority is given to the flower over the bud, and bud over the leaf)
	mHappaStageCounts[currentKind]++;
	mHappaStageCounts[previousKind]--;
}

/**
 * @note Address: 0x80195868
 * @note Size: 0x128
 */
void CPlate::releaseSlot(Creature* creature, int idx)
{
	Slot& slot = mSlots[idx];
	JUT_ASSERTLINE(331, slot.mCreature == creature, " sorry ...\n"); // LOL

	mHappaStageCounts[static_cast<Piki*>(creature)->mHappaKind]--;
	slot.mCreature = nullptr;

	mSlotCount--;
	mActiveGroupSize--;
	if (mSlotCount < 0) {
		// Stripped debug code
		creature->getTypeName();
	}

	for (int i = idx; i < mSlotCount; i++) {
		mSlots[i].mCreature = nullptr;
		mSlots[i].mCreature = mSlots[i + 1].mCreature;
		mSlots[i].mListener = mSlots[i + 1].mListener;
		mSlots[i].mListener->inform(i);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xB0
 */
void CPlate::swapSlot(int i, int j)
{
	Slot* slot     = &mSlots[i];
	Slot* prevSlot = &mSlots[j];

	Creature* iCreature           = slot->mCreature;
	SlotChangeListener* iListener = slot->mListener;
	Creature* jCreature           = prevSlot->mCreature;
	SlotChangeListener* jListener = prevSlot->mListener;

	slot->mCreature = nullptr;
	slot->mCreature = jCreature;
	slot->mListener = jListener;
	slot->mListener->inform(i);

	prevSlot->mCreature = nullptr;
	prevSlot->mCreature = iCreature;
	prevSlot->mListener = iListener;
	prevSlot->mListener->inform(j);
}

/**
 * @note Address: 0x80195990
 * @note Size: 0x24
 */
bool CPlate::validSlot(int index)
{
	if (index < 0 || index >= mSlotCount) {
		return false;
	}

	return true;
}
} // namespace Game

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
int getPriority(int* pikiCounts, int color)
{
	for (int i = 0; i < Game::PikiColorCount; i++) {
		if (color == pikiCounts[i]) {
			return i;
		}
	}

	JUT_PANICLINE(405, "col %d : sort failed !\n", color);
	return 128;
}

namespace Game {

/**
 * @note Address: 0x801959B4
 * @note Size: 0x4A0
 */
void CPlate::sortByColor(Creature* piki, int happaType)
{
	int kind  = static_cast<Piki*>(piki)->getKind();
	int happa = static_cast<Piki*>(piki)->getHappa();

	int pikiCounts[PikiColorCount];
	for (int i = 0; i < PikiColorCount; i++) {
		pikiCounts[i] = (kind + i) % PikiColorCount;
	}

	int happaSlots[PikiGrowthStageCount];
	if (happaType != -1) {
		happaSlots[happaType]                              = Leaf;
		happaSlots[(happaType + 1) % PikiGrowthStageCount] = Bud;
		happaSlots[(happaType + 2) % PikiGrowthStageCount] = Flower;
	}

	for (int i = 0; i < mSlotCount; i++) {     // r25, r26
		for (int j = 0; j < mSlotCount; j++) { // r24, r27
			Piki* iPiki = static_cast<Piki*>(mSlots[i].mCreature);
			Piki* jPiki = static_cast<Piki*>(mSlots[j].mCreature);
			int iKind   = iPiki->getKind();
			int jKind   = jPiki->getKind();

			if (iKind != jKind) {
				int iPrio = getPriority(pikiCounts, iKind);
				int jPrio = getPriority(pikiCounts, jKind);

				if (j > i && jPrio < iPrio) {
					swapSlot(j, i);
				}
				continue;
			}

			// Remove the additional mr r6, r4 by making this an INLINE!!
			int iPrio;
			int jPrio;
			if (happaType == -1) {
				jPrio = happa != jPiki->getHappa();
				iPrio = happa != iPiki->getHappa();
			} else {
				jPrio = happaSlots[jPiki->getHappa()];
				iPrio = happaSlots[iPiki->getHappa()];
			}

			if (j > i && jPrio < iPrio) {
				swapSlot(j, i);
			}
		}
	}
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r6, 0x92492493@ha
	stw      r0, 0x64(r1)
	addi     r10, r6, 0x92492493@l
	stmw     r22, 0x38(r1)
	mr       r30, r5
	mr       r29, r3
	cmpwi    r30, -1
	lbz      r11, 0x2b8(r4)
	lbz      r31, 0x2b9(r4)
	mulhw    r7, r10, r11
	addi     r8, r11, 1
	addi     r0, r11, 4
	addi     r6, r11, 2
	addi     r4, r11, 3
	addi     r27, r11, 5
	mulhw    r5, r10, r8
	add      r7, r7, r11
	addi     r24, r11, 6
	srawi    r9, r7, 2
	srwi     r12, r9, 0x1f
	add      r5, r5, r8
	srawi    r25, r5, 2
	add      r9, r9, r12
	mulhw    r7, r10, r6
	srwi     r26, r25, 0x1f
	add      r12, r7, r6
	add      r7, r25, r26
	srawi    r25, r12, 2
	mulhw    r5, r10, r4
	srwi     r26, r25, 0x1f
	add      r12, r5, r4
	add      r5, r25, r26
	srawi    r26, r12, 2
	mulhw    r3, r10, r0
	srwi     r28, r26, 0x1f
	mulhw    r12, r10, r27
	add      r25, r3, r0
	add      r3, r26, r28
	srawi    r25, r25, 2
	mulhw    r10, r10, r24
	srwi     r26, r25, 0x1f
	add      r12, r12, r27
	add      r28, r25, r26
	srawi    r25, r12, 2
	mulli    r5, r5, 7
	add      r10, r10, r24
	srwi     r26, r25, 0x1f
	subf     r5, r5, r6
	srawi    r10, r10, 2
	mulli    r3, r3, 7
	stw      r5, 0x1c(r1)
	srwi     r12, r10, 0x1f
	add      r25, r25, r26
	mulli    r5, r28, 7
	add      r10, r10, r12
	subf     r3, r3, r4
	stw      r3, 0x20(r1)
	subf     r0, r5, r0
	mulli    r9, r9, 7
	stw      r0, 0x24(r1)
	mulli    r7, r7, 7
	subf     r9, r9, r11
	stw      r9, 0x14(r1)
	mulli    r3, r25, 7
	subf     r7, r7, r8
	stw      r7, 0x18(r1)
	mulli    r0, r10, 7
	subf     r3, r3, r27
	stw      r3, 0x28(r1)
	subf     r0, r0, r24
	stw      r0, 0x2c(r1)
	beq      lbl_80195B3C
	lis      r3, 0x55555556@ha
	addi     r7, r30, 1
	addi     r0, r3, 0x55555556@l
	addi     r4, r30, 2
	mulhw    r6, r0, r7
	slwi     r3, r30, 2
	addi     r9, r1, 8
	li       r5, 0
	stwx     r5, r9, r3
	li       r8, 1
	mulhw    r3, r0, r4
	srwi     r0, r6, 0x1f
	li       r5, 2
	add      r0, r6, r0
	mulli    r6, r0, 3
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	mulli    r0, r0, 3
	subf     r3, r6, r7
	slwi     r3, r3, 2
	subf     r0, r0, r4
	stwx     r8, r9, r3
	slwi     r0, r0, 2
	stwx     r5, r9, r0

lbl_80195B3C:
	li       r25, 0
	li       r26, 0
	b        lbl_80195E34

lbl_80195B48:
	li       r24, 0
	li       r27, 0
	b        lbl_80195E20

lbl_80195B54:
	lwz      r3, 0xc0(r29)
	addi     r0, r3, 0x18
	add      r5, r3, r27
	lwzx     r4, r26, r0
	lwz      r7, 0x18(r5)
	lbz      r6, 0x2b8(r4)
	lbz      r28, 0x2b8(r7)
	cmpw     r6, r28
	beq      lbl_80195D54
	lwz      r0, 0x14(r1)
	cmpw     r6, r0
	bne      lbl_80195B8C
	li       r23, 0
	b        lbl_80195C24

lbl_80195B8C:
	lwz      r0, 0x18(r1)
	cmpw     r6, r0
	bne      lbl_80195BA0
	li       r23, 1
	b        lbl_80195C24

lbl_80195BA0:
	lwz      r0, 0x1c(r1)
	cmpw     r6, r0
	bne      lbl_80195BB4
	li       r23, 2
	b        lbl_80195C24

lbl_80195BB4:
	lwz      r0, 0x20(r1)
	cmpw     r6, r0
	bne      lbl_80195BC8
	li       r23, 3
	b        lbl_80195C24

lbl_80195BC8:
	lwz      r0, 0x24(r1)
	cmpw     r6, r0
	bne      lbl_80195BDC
	li       r23, 4
	b        lbl_80195C24

lbl_80195BDC:
	lwz      r0, 0x28(r1)
	cmpw     r6, r0
	bne      lbl_80195BF0
	li       r23, 5
	b        lbl_80195C24

lbl_80195BF0:
	lwz      r0, 0x2c(r1)
	cmpw     r6, r0
	bne      lbl_80195C04
	li       r23, 6
	b        lbl_80195C24

lbl_80195C04:
	lis      r3, lbl_8047EFF0@ha
	lis      r4, lbl_8047F018@ha
	addi     r5, r4, lbl_8047F018@l
	addi     r3, r3, lbl_8047EFF0@l
	li       r4, 0x195
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r23, 0x80

lbl_80195C24:
	lwz      r0, 0x14(r1)
	cmpw     r28, r0
	bne      lbl_80195C38
	li       r0, 0
	b        lbl_80195CD4

lbl_80195C38:
	lwz      r0, 0x18(r1)
	cmpw     r28, r0
	bne      lbl_80195C4C
	li       r0, 1
	b        lbl_80195CD4

lbl_80195C4C:
	lwz      r0, 0x1c(r1)
	cmpw     r28, r0
	bne      lbl_80195C60
	li       r0, 2
	b        lbl_80195CD4

lbl_80195C60:
	lwz      r0, 0x20(r1)
	cmpw     r28, r0
	bne      lbl_80195C74
	li       r0, 3
	b        lbl_80195CD4

lbl_80195C74:
	lwz      r0, 0x24(r1)
	cmpw     r28, r0
	bne      lbl_80195C88
	li       r0, 4
	b        lbl_80195CD4

lbl_80195C88:
	lwz      r0, 0x28(r1)
	cmpw     r28, r0
	bne      lbl_80195C9C
	li       r0, 5
	b        lbl_80195CD4

lbl_80195C9C:
	lwz      r0, 0x2c(r1)
	cmpw     r28, r0
	bne      lbl_80195CB0
	li       r0, 6
	b        lbl_80195CD4

lbl_80195CB0:
	lis      r3, lbl_8047EFF0@ha
	lis      r4, lbl_8047F018@ha
	addi     r5, r4, lbl_8047F018@l
	mr       r6, r28
	addi     r3, r3, lbl_8047EFF0@l
	li       r4, 0x195
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r0, 0x80

lbl_80195CD4:
	cmpw     r24, r25
	ble      lbl_80195E18
	cmpw     r0, r23
	bge      lbl_80195E18
	lwz      r3, 0xc0(r29)
	li       r0, 0
	mr       r4, r24
	add      r6, r3, r27
	add      r22, r3, r26
	lwz      r28, 0x18(r6)
	lwz      r23, 0x1c(r6)
	lwz      r5, 0x18(r22)
	lwz      r3, 0x1c(r22)
	stw      r0, 0x18(r6)
	stw      r5, 0x18(r6)
	stw      r3, 0x1c(r6)
	lwz      r3, 0x1c(r6)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	mr       r4, r25
	stw      r0, 0x18(r22)
	stw      r28, 0x18(r22)
	stw      r23, 0x1c(r22)
	lwz      r3, 0x1c(r22)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80195E18

lbl_80195D54:
	cmpwi    r30, -1
	bne      lbl_80195D88
	lbz      r4, 0x2b9(r4)
	lbz      r0, 0x2b9(r7)
	subf     r6, r31, r4
	subf     r4, r4, r31
	or       r6, r6, r4
	subf     r4, r31, r0
	subf     r0, r0, r31
	or       r0, r4, r0
	srwi     r4, r6, 0x1f
	srwi     r0, r0, 0x1f
	b        lbl_80195DA4

lbl_80195D88:
	lbz      r4, 0x2b9(r4)
	addi     r6, r1, 8
	lbz      r0, 0x2b9(r7)
	slwi     r4, r4, 2
	slwi     r0, r0, 2
	lwzx     r4, r6, r4
	lwzx     r0, r6, r0

lbl_80195DA4:
	cmpw     r24, r25
	ble      lbl_80195E18
	cmpw     r0, r4
	bge      lbl_80195E18
	add      r28, r3, r26
	lwz      r23, 0x18(r5)
	lwz      r22, 0x1c(r5)
	li       r0, 0
	lwz      r6, 0x18(r28)
	mr       r4, r24
	lwz      r3, 0x1c(r28)
	stw      r0, 0x18(r5)
	stw      r6, 0x18(r5)
	stw      r3, 0x1c(r5)
	lwz      r3, 0x1c(r5)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	mr       r4, r25
	stw      r0, 0x18(r28)
	stw      r23, 0x18(r28)
	stw      r22, 0x1c(r28)
	lwz      r3, 0x1c(r28)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80195E18:
	addi     r27, r27, 0x20
	addi     r24, r24, 1

lbl_80195E20:
	lwz      r0, 0xc8(r29)
	cmpw     r24, r0
	blt      lbl_80195B54
	addi     r26, r26, 0x20
	addi     r25, r25, 1

lbl_80195E34:
	lwz      r0, 0xc8(r29)
	cmpw     r25, r0
	blt      lbl_80195B48
	lmw      r22, 0x38(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/**
 * @note Address: 0x80195E54
 * @note Size: 0x1E0
 */
void CPlate::rearrangeSlot(Vector3f& target, f32 direction, Vector3f& velocity)
{
	for (int i = mSlotCount - 1; i >= 1; i--) {
		for (int j = i; j >= 1; j--) {
			Vector3f currPikiPos      = mSlots[j].mCreature->getPosition();
			Vector3f fromPikiToTarget = target - currPikiPos;
			f32 distance              = fromPikiToTarget.length();

			Vector3f prevPikiPos = mSlots[j - 1].mCreature->getPosition();

			// If the Pikmin is closer than the previous, swap them
			if (distance < target.distance(prevPikiPos)) {
				swapSlot(j, j - 1);
			}
		}
	}
}

/**
 * @note Address: 0x80196034
 * @note Size: 0xC4
 */
void CPlate::getSlotPosition(int idx, Vector3f& outPosition)
{
	JUT_ASSERTLINE(627, validSlot(idx), "invalid slot idx %d\n", idx);
	outPosition = mSlots[idx].mPosition + mBasePositionOffset;
}

#define RADIUS_VARIANCE 0.1f

/**
 * @note Address: 0x801960F8
 * @note Size: 0x1B8
 */
void CPlate::refresh(int formationSize, f32 moveStrength)
{
	if (moveStrength > 1.0f) {
		moveStrength = 1.0f;
	} else if (moveStrength < 0.0f) {
		moveStrength = 0.0f;
	}

	if (formationSize < mActiveGroupSize) {
		mSlotCount -= (mActiveGroupSize - formationSize);
	}

	mActiveGroupSize = formationSize;

	f32 maxPositionSize  = mParms.mMaxPositionSize();
	f32 effectiveMaxSize = maxPositionSize * (mShrinkTimer ? 0.5f : 1.0f);

	f32 radiusFactor = (f32)formationSize / PI;
	radiusFactor     = _sqrtf(radiusFactor);

	mMaxRadius        = ((2.0f + RADIUS_VARIANCE) * effectiveMaxSize) * radiusFactor;
	f32 smallerRadius = (2.0f - RADIUS_VARIANCE) * effectiveMaxSize;

	f32 largerRadius = mMaxRadius;
	if (smallerRadius > largerRadius) {
		radiusFactor = smallerRadius;
	} else {
		radiusFactor = largerRadius;
		largerRadius = smallerRadius;
	}

	mMoveStickRadius = (moveStrength * -(radiusFactor - largerRadius)) + radiusFactor;
	if (mMoveStickRadius == 0.0f) {
		mBaseRadius = 10.0f;
	} else {
		mBaseRadius = (effectiveMaxSize * ((4.0f * (f32)formationSize) * effectiveMaxSize)) / (PI * mMoveStickRadius);
	}

	f32 lengthLimit = mParms.mLengthLimit();
	if (mBaseRadius > lengthLimit) {
		mBaseRadius      = lengthLimit;
		mMoveStickRadius = (effectiveMaxSize * ((4.0f * (f32)formationSize) * effectiveMaxSize)) / (PI * mBaseRadius);
	}

	refreshSlot(moveStrength);
}

/**
 * @note Address: 0x801962B0
 * @note Size: 0x2EC
 */
void CPlate::refreshSlot(f32 p1)
{
	int slotCount = 0;            // r31
	f32 radius    = -mBaseRadius; // f26

	Matrixf rotationMtx;
	Vector3f rotation(0.0f, mAngle, 0.0f);
	Vector3f scale(1.0f);
	rotationMtx.makeSR(scale, rotation);

	f32 maxPositionSize = mParms.mMaxPositionSize();

	// This is probably an INLINE!!!
	f32 maxSize = maxPositionSize * (mShrinkTimer ? 0.5f : 1.0f); // f25

	Vector3f vec(0.0f);
	mUnused = rotationMtx.mtxMult(vec);

	int direction = 1;              // r30
	int row       = 0;              // r26
	f32 x         = 2.0f * maxSize; // f27

	while (slotCount < mActiveGroupSize) {
		f32 sqrBase  = mBaseRadius * mBaseRadius;
		f32 sqrRad   = radius * radius;
		f32 rootDiff = _sqrtf(sqrBase - sqrRad);
		int val      = (mMoveStickRadius * rootDiff) / radius / x;
		if (val < 0) {
			val = 0;
		}

		if (p1 < 0.1f && val == 0 && mActiveGroupSize - slotCount > 1) {
			val = 1;
		}

		f32 fVal = (f32)val * maxSize;
		fVal *= 2.0f;

		f32 step = ((f32)direction * maxSize); // f23
		step *= 2.0f;

		f32 fCounter = (f32)direction * fVal; // f22

		for (int i = val * 2 + 1; i > 0; i--, fCounter -= step) {
			if (slotCount < mActiveGroupSize) {
				mSlots[row].mRelativePosition = Vector3f(fCounter, 0.0f, radius);
				mSlots[row].mPosition         = rotationMtx.mtxMult(mSlots[row].mRelativePosition);
				row++;
				slotCount++;
			}
		}

		radius += x;
		direction *= -1;
	}
	/*
	stwu     r1, -0x150(r1)
	mflr     r0
	stw      r0, 0x154(r1)
	stfd     f31, 0x140(r1)
	psq_st   f31, 328(r1), 0, qr0
	stfd     f30, 0x130(r1)
	psq_st   f30, 312(r1), 0, qr0
	stfd     f29, 0x120(r1)
	psq_st   f29, 296(r1), 0, qr0
	stfd     f28, 0x110(r1)
	psq_st   f28, 280(r1), 0, qr0
	stfd     f27, 0x100(r1)
	psq_st   f27, 264(r1), 0, qr0
	stfd     f26, 0xf0(r1)
	psq_st   f26, 248(r1), 0, qr0
	stfd     f25, 0xe0(r1)
	psq_st   f25, 232(r1), 0, qr0
	stfd     f24, 0xd0(r1)
	psq_st   f24, 216(r1), 0, qr0
	stfd     f23, 0xc0(r1)
	psq_st   f23, 200(r1), 0, qr0
	stfd     f22, 0xb0(r1)
	psq_st   f22, 184(r1), 0, qr0
	stmw     r25, 0x94(r1)
	mr       r29, r3
	lfs      f2, lbl_80518EF4@sda21(r2)
	lfs      f3, 0xb0(r3)
	fmr      f24, f1
	lfs      f1, 0xf0(r3)
	addi     r3, r1, 0x44
	lfs      f0, lbl_80518F0C@sda21(r2)
	fneg     f26, f3
	stfs     f2, 0x38(r1)
	addi     r4, r1, 0x2c
	addi     r5, r1, 0x38
	stfs     f1, 0x3c(r1)
	li       r31, 0
	stfs     f2, 0x40(r1)
	stfs     f0, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stfs     f0, 0x34(r1)
	bl       "makeSR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	lbz      r0, 0x100(r29)
	lfs      f2, 0x90(r29)
	cmplwi   r0, 0
	beq      lbl_80196370
	lfs      f1, lbl_80518F20@sda21(r2)
	b        lbl_80196374

lbl_80196370:
	lfs      f1, lbl_80518F0C@sda21(r2)

lbl_80196374:
	lfs      f0, lbl_80518EF4@sda21(r2)
	fmuls    f25, f2, f1
	addi     r3, r1, 0x44
	addi     r4, r1, 0x20
	stfs     f0, 0x20(r1)
	addi     r5, r1, 0x14
	stfs     f0, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       PSMTXMultVec
	lfs      f1, 0x18(r1)
	li       r30, 1
	lfs      f2, 0x1c(r1)
	li       r26, 0
	lfs      f0, 0x14(r1)
	lis      r28, 0x4330
	lfs      f28, lbl_80518F40@sda21(r2)
	stfs     f0, 0xf4(r29)
	fmuls    f27, f28, f25
	lfs      f29, lbl_80518EF4@sda21(r2)
	stfs     f1, 0xf8(r29)
	lfs      f30, lbl_80518F44@sda21(r2)
	stfs     f2, 0xfc(r29)
	lfd      f31, lbl_80518F38@sda21(r2)
	b        lbl_8019652C

lbl_801963D4:
	lfs      f2, 0xb0(r29)
	fmuls    f1, f26, f26
	fmuls    f0, f2, f2
	fsubs    f0, f0, f1
	fcmpo    cr0, f0, f29
	ble      lbl_80196404
	fmsubs   f1, f2, f2, f1
	fcmpo    cr0, f1, f29
	ble      lbl_80196408
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80196408

lbl_80196404:
	fmr      f1, f29

lbl_80196408:
	lfs      f0, 0xb4(r29)
	fmuls    f0, f0, f1
	fdivs    f0, f0, f2
	fdivs    f0, f0, f27
	fctiwz   f0, f0
	stfd     f0, 0x78(r1)
	lwz      r3, 0x7c(r1)
	cmpwi    r3, 0
	bge      lbl_80196430
	li       r3, 0

lbl_80196430:
	fcmpo    cr0, f24, f30
	bge      lbl_80196450
	cmpwi    r3, 0
	bne      lbl_80196450
	subf     r0, r31, r0
	cmpwi    r0, 1
	ble      lbl_80196450
	li       r3, 1

lbl_80196450:
	xoris    r0, r3, 0x8000
	xoris    r4, r30, 0x8000
	stw      r0, 0x84(r1)
	slwi     r3, r3, 1
	mr       r27, r26
	stw      r28, 0x80(r1)
	addi     r25, r3, 1
	lfd      f0, 0x80(r1)
	stw      r4, 0x8c(r1)
	fsubs    f1, f0, f31
	stw      r28, 0x88(r1)
	lfd      f0, 0x88(r1)
	fmuls    f1, f1, f25
	stw      r4, 0x7c(r1)
	fsubs    f0, f0, f31
	stw      r28, 0x78(r1)
	fmuls    f1, f28, f1
	lfd      f2, 0x78(r1)
	fmuls    f0, f0, f25
	fsubs    f2, f2, f31
	fmuls    f23, f28, f0
	fmuls    f22, f2, f1
	b        lbl_8019651C

lbl_801964AC:
	lwz      r0, 0xbc(r29)
	cmpw     r31, r0
	bge      lbl_80196514
	lwz      r0, 0xc0(r29)
	addi     r3, r1, 0x44
	lfs      f0, lbl_80518EF4@sda21(r2)
	addi     r5, r1, 8
	add      r4, r0, r27
	stfs     f22, 0(r4)
	stfs     f0, 4(r4)
	stfs     f26, 8(r4)
	lwz      r0, 0xc0(r29)
	add      r4, r0, r27
	bl       PSMTXMultVec
	lwz      r0, 0xc0(r29)
	addi     r3, r27, 0xc
	lfs      f1, 0xc(r1)
	addi     r26, r26, 0x20
	lfs      f2, 0x10(r1)
	add      r3, r0, r3
	lfs      f0, 8(r1)
	addi     r27, r27, 0x20
	addi     r31, r31, 1
	stfs     f0, 0(r3)
	stfs     f1, 4(r3)
	stfs     f2, 8(r3)

lbl_80196514:
	fsubs    f22, f22, f23
	addi     r25, r25, -1

lbl_8019651C:
	cmpwi    r25, 0
	bgt      lbl_801964AC
	fadds    f26, f26, f27
	mulli    r30, r30, -1

lbl_8019652C:
	lwz      r0, 0xbc(r29)
	cmpw     r31, r0
	blt      lbl_801963D4
	psq_l    f31, 328(r1), 0, qr0
	lfd      f31, 0x140(r1)
	psq_l    f30, 312(r1), 0, qr0
	lfd      f30, 0x130(r1)
	psq_l    f29, 296(r1), 0, qr0
	lfd      f29, 0x120(r1)
	psq_l    f28, 280(r1), 0, qr0
	lfd      f28, 0x110(r1)
	psq_l    f27, 264(r1), 0, qr0
	lfd      f27, 0x100(r1)
	psq_l    f26, 248(r1), 0, qr0
	lfd      f26, 0xf0(r1)
	psq_l    f25, 232(r1), 0, qr0
	lfd      f25, 0xe0(r1)
	psq_l    f24, 216(r1), 0, qr0
	lfd      f24, 0xd0(r1)
	psq_l    f23, 200(r1), 0, qr0
	lfd      f23, 0xc0(r1)
	psq_l    f22, 184(r1), 0, qr0
	lfd      f22, 0xb0(r1)
	lmw      r25, 0x94(r1)
	lwz      r0, 0x154(r1)
	mtlr     r0
	addi     r1, r1, 0x150
	blr
	*/
}

/**
 * update__Q24Game6CPlateFv
 *
 * @note Address: 0x8019659C
 * @note Size: 0x18
 */
void CPlate::update()
{
	if (mShrinkTimer == 0) {
		return;
	}

	mShrinkTimer--;
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void CPlate::directDraw(Graphics&)
{
	// UNUSED FUNCTION
}

} // namespace Game
