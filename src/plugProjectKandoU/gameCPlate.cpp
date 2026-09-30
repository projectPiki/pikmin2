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
Creature* CPlate::get(void* index)
{
	return mSlots[(int)index].mCreature;
}

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
void* CPlate::getStart()
{
	return nullptr;
}

/**
 * @note Address: 0x8019504C
 * @note Size: 0x8
 */
void* CPlate::getEnd()
{
	return (void*)mSlotCount;
}

/**
 * @note Address: 0x80195054
 * @note Size: 0xC
 */
void CPlate::shrink()
{
	mShrinkTimer = 10;
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
void CPlate::updateShrink()
{
	if (mShrinkTimer == 0) {
		return;
	}

	mShrinkTimer--;
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

	for (int i = 0; i < mSlotCount; i++) {
		for (int j = 0; j < mSlotCount; j++) {
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

			int iPrio;
			int jPrio;
			if (happaType == -1) {
				iPrio = happa != iPiki->getHappa();
				jPrio = happa != jPiki->getHappa();
			} else {
				iPrio = getHappaPriority(happaSlots, iPiki);
				jPrio = getHappaPriority(happaSlots, jPiki);
			}

			if (j > i && jPrio < iPrio) {
				swapSlot(j, i);
			}
		}
	}
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
	if (radiusFactor > 0.0f) {
		sqrtfInPlace(radiusFactor);
	} else {
		radiusFactor = 0.0f;
	}

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
	int group;
	int slotCount = 0;
	f32 radius    = -mBaseRadius;

	Matrixf rotationMtx;
	Vector3f rotation(0.0f, mAngle, 0.0f);
	Vector3f scale(1.0f);
	rotationMtx.makeSR(scale, rotation);

	f32 maxPositionSize = mParms.mMaxPositionSize;

	f32 shrinkModifier = mShrinkTimer ? 0.5f : 1.0f;
	f32 maxSize        = maxPositionSize * shrinkModifier;

	Vector3f vec(0.0f);
	mUnused = rotationMtx.mtxMult(vec);

	int i;
	int direction = 1;
	int row       = 0;

	while (slotCount < mActiveGroupSize) {
		f32 radiusDifference;

		Vector2f radii(mBaseRadius, radius);
		f32 radiusSquared = radius * radius;
		f32 baseSquared   = mBaseRadius * mBaseRadius;
		if (baseSquared - radiusSquared > 0.0f) {
			radiusDifference = sqrtf(radii.x * radii.x - radii.y * radii.y);
		} else {
			radiusDifference = 0.0f;
		}

		f32 movestickScaled = mMoveStickRadius * radiusDifference;
		int val             = static_cast<int>(movestickScaled / mBaseRadius / (2.0f * maxSize));
		if (val < 0) {
			val = 0;
		}

		if (p1 < 0.1f && val == 0) {
			group = mActiveGroupSize;
			group -= slotCount;

			if (group > 1) {
				val = 1;
			}
		}

		f32 maxSizeScaled = val * maxSize * 2.0f;
		f32 stepDistance, fCounter;
		fCounter     = (f32)direction * maxSizeScaled;
		stepDistance = direction * maxSize * 2.0f;

		i = val * 2 + 1;
		while (i > 0) {
			if (slotCount < mActiveGroupSize) {
				mSlots[row].mRelativePosition = Vector3f(fCounter, 0.0f, radius);
				mSlots[row].mPosition         = rotationMtx.mtxMult(mSlots[row].mRelativePosition);

				row++;
				slotCount++;
			}

			fCounter -= stepDistance;
			i--;
		}

		radius += maxSize * 2.0f;
		direction *= -1;
	}
}

/**
 * update__Q24Game6CPlateFv
 *
 * @note Address: 0x8019659C
 * @note Size: 0x18
 */
void CPlate::update()
{
	updateShrink();
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
