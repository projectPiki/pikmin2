#include "Game/Entities/ItemPlant.h"
#include "Game/Farm.h"
#include "Game/Stickers.h"

#include "efx/TTsuyuGrow.h"
#include "efx/TFruitsDown.h"

#include "PSM/EventBase.h"
#include "PSM/Tsuyukusa.h"

#include "JSystem/J3D/J3DAnmLoader.h"

#include "Dolphin/rand.h"

namespace Game {
namespace ItemPlant {

static const char unusedName[] = "itemPlant";

/// @brief Global ItemPlant mgr instance.
Mgr* mgr;

/***************************************
 * ITEMPLANT STATE MACHINE DEFINITIONS *
 ***************************************/

/**
 * Initializes all (4) ItemPlant states, namely
 * Normal (default),
 * Damaged (when being attacked by Pikmin),
 * GrowUp (when maturing), and
 * Kareru (when covered by mold/ItemRock).
 *
 * @param item Unused.
 *
 * @note Address: 0x801DCE28
 * @note Size: 0x18C
 */
void FSM::init(Item* item)
{
	create(ITEMPLANT_StateCount);
	registerState(new NormalState);
	registerState(new DamagedState);
	registerState(new GrowUpState);
	registerState(new KareruState);
}

/**
 * Starts Normal (default) state. Plays normal animation (based on current growth size).
 *
 * @param item Item acted on by state machine.
 * @param stateArg Unused.
 *
 * @note Address: 0x801DCFB4
 * @note Size: 0x34
 */
void NormalState::init(Item* item, StateArg* stateArg) { item->startMotion(PLANTMOTION_Normal); }

/**
 * Normal (default) state loop. Advances grow timer and executes behaviour based on current growth size.
 * Will transition to GrowUp from small or medium size if growth timer hits threshold.
 * Will restock berries and reset timer if large and growth timer hits restock threshold.
 * Will lock timer to 0 if under mold.
 *
 * @param item Item acted on by state machine.
 *
 * @note Address: 0x801DCFEC
 * @note Size: 0x128
 */
void NormalState::exec(Item* item)
{
	item->mGrowTimer += sys->mDeltaTime;
	switch (item->mGrowState) {
	case PLANTGROW_Small:
		if (item->mGrowTimer > item->mRandGrowTimeOffset + mgr->mParms->mPlantParms.mGrowTimeToMedium.mValue) {
			transit(item, ITEMPLANT_GrowUp, nullptr);
		}
		break;

	case PLANTGROW_Medium:
		if (item->mGrowTimer > item->mRandGrowTimeOffset + mgr->mParms->mPlantParms.mGrowTimeToLarge.mValue) {
			transit(item, ITEMPLANT_GrowUp, nullptr);
		}
		break;

	case PLANTGROW_Large:
		if (item->mGrowTimer > item->mRandGrowTimeOffset + mgr->mParms->mPlantParms.mBearFruitTime.mValue) {
			item->bearFruits();
			item->mGrowTimer = 0.0f;
		}
		break;

	case PLANTGROW_Mold:
		item->mGrowTimer = 0.0f;
		break;
	}
}

/**
 * Post-default state. Trivial.
 *
 * @param item Unused.
 *
 * @note Address: 0x801DD148
 * @note Size: 0x4
 */
void NormalState::cleanup(Item* item) { }

/**
 * Triggered on mold growth. Transitions to Kareru (under mold) state (without waiting).
 *
 * @param item Item acted on by state machine.
 *
 * @note Address: 0x801DD14C
 * @note Size: 0x34
 */
void NormalState::eventKarero(Item* item) { transit(item, ITEMPLANT_Kareru, nullptr); }

/**
 * Triggered on damage. Adds damage and transitions to Damaged state.
 *
 * @param item Item acted on by state machine.
 * @param damage Damage to add.
 *
 * @note Address: 0x801DD180
 * @note Size: 0x5C
 */
void NormalState::onDamage(Item* item, f32 damage)
{
	item->addDamage(damage);
	transit(item, ITEMPLANT_Damaged, nullptr);
}

/**
 * Starts Damaged state. Plays damage animation based on growth size and resets mold state trigger.
 *
 * @param item Item acted on by state machine.
 * @param stateArg Unused.
 *
 * @note Address: 0x801DD1DC
 * @note Size: 0x48
 */
void DamagedState::init(Item* item, StateArg* stateArg)
{
	item->startMotion(PLANTMOTION_Damage);
	mHasMold = false;
}

/**
 * Damaged state loop. Trivial.
 *
 * @param item Unused.
 *
 * @note Address: 0x801DD224
 * @note Size: 0x4
 */
void DamagedState::exec(Item* item) { }

/**
 * Post-Damaged state. Trivial.
 *
 * @param item Unused.
 *
 * @note Address: 0x801DD228
 * @note Size: 0x4
 */
void DamagedState::cleanup(Item* item) { }

/**
 * Triggered on mold growth. Sets trigger for mold state transition.
 *
 * @param item Unused.
 *
 * @note Address: 0x801DD22C
 * @note Size: 0xC
 */
void DamagedState::eventKarero(Item* item) { mHasMold = true; }

/**
 * On animation trigger. Transitions to Kareru (under mold) state if trigger is primed.
 * Transitions to Normal (default) state if not.
 *
 * @param item Item acted on by state machine.
 * @param event Key event (triggered by animation).
 *
 * @note Address: 0x801DD238
 * @note Size: 0x5C
 */
void DamagedState::onKeyEvent(Item* item, const SysShape::KeyEvent& event)
{
	if (mHasMold) {
		transit(item, ITEMPLANT_Kareru, nullptr);
	} else {
		transit(item, ITEMPLANT_Normal, nullptr);
	}
}

/**
 * Triggered on damage. Adds damage.
 *
 * @param item Item acted on by state machine.
 * @param damage Damage to add.
 *
 *
 * @note Address: 0x801DD294
 * @note Size: 0x24
 */
void DamagedState::onDamage(Item* item, f32 damage) { item->addDamage(damage); }

/**
 * Starts GrowUp state. Plays growing animation and efx based on growth size.
 * Resets growth timer and mold state trigger, and plays growth sound.
 *
 * @param item Item acted on by state machine.
 * @param stateArg Unused.
 *
 * @note Address: 0x801DD2B8
 * @note Size: 0x74
 */
void GrowUpState::init(Item* item, StateArg* stateArg)
{
	item->startMotion(PLANTMOTION_Grow);
	item->mGrowTimer = 0.0f;
	mHasMold         = false;
	item->startSound(PSSE_EV_TSUYUKUSA_GROW);
}

/**
 * GrowUp state loop. Trivial.
 *
 * @param item Unused.
 *
 * @note Address: 0x801DD32C
 * @note Size: 0x4
 */
void GrowUpState::exec(Item* item) { }

/**
 * Post-GrowUp state. Trivial.
 *
 * @param item Unused.
 *
 * @note Address: 0x801DD330
 * @note Size: 0x4
 */
void GrowUpState::cleanup(Item* item) { }

/**
 * Triggered on mold growth. Sets trigger for mold state transition.
 *
 * @param item Unused.
 *
 * @note Address: 0x801DD334
 * @note Size: 0xC
 */
void GrowUpState::eventKarero(Item*) { mHasMold = true; }

/**
 * On animation trigger. Advance growth state.
 * If now largest size, recalc model and update ProcAnimator.
 * If mold state trigger is primed, transition to Kareru (under mold) state.
 * If now largest size (and no mold), grow berries.
 * Transition back to normal state.
 *
 * @param item Item acted on by state machine. Need to be castable to `Plant`.
 * @param event Key event (triggered by animation).
 *
 * @throws Panic if growth state ends up more than 'large' (2).
 *
 * @note Address: 0x801DD340
 * @note Size: 0x120
 */
void GrowUpState::onKeyEvent(Item* item, const SysShape::KeyEvent& event)
{
	Plant* plant = static_cast<Plant*>(item);
	plant->mGrowState++;

	if (plant->mGrowState == PLANTGROW_Large) {
		PSMTXCopy(plant->mBaseTrMatrix.mMatrix.mtxView, plant->mModel->mJ3dModel->mPosMtx);
		plant->mModel->mJ3dModel->calc();
		plant->mProcAnimator.update(plant->mFaceDir, 0.0f);
	}

	P2ASSERTLINE(381, plant->mGrowState <= PLANTGROW_Large);

	if (mHasMold) {
		transit(plant, ITEMPLANT_Kareru, nullptr);
		return;
	}

	if (plant->mGrowState == PLANTGROW_Large) {
		plant->bearFruits();
	}

	transit(plant, ITEMPLANT_Normal, nullptr);
}

/**
 * Triggered on damage. Adds damage.
 *
 * @param item Item acted on by state machine.
 * @param damage Damage to add.
 *
 * @note Address: 0x801DD460
 * @note Size: 0x24
 */
void GrowUpState::onDamage(Item* item, f32 damage) { item->addDamage(damage); }

/**
 * Starts Kareru (under mold) state. Plays (blended) withering animation and withering sound effect.
 * Resets damage, destroys any berries, and resets mold state and escape trigger.
 *
 * @param item Item acted on by state machine.
 * @param stateArg Unused.
 *
 * @note Address: 0x801DD484
 * @note Size: 0x7C
 */
void KareruState::init(Item* item, StateArg* stateArg)
{
	item->startMotion(PLANTMOTION_Disappear);
	item->mDamage    = 0.0f;
	item->mGrowState = PLANTGROW_Mold;
	item->killFruits();
	mMoldState = KARERU_Begin;
	mIsFreed   = false;
}

/**
 * Kareru (under mold) state loop. If in waiting state and escape trigger is primed, set plant as alive, play regrowth animation and trigger
 * end of state.
 *
 * @param item Item acted on by state machine.
 *
 * @note Address: 0x801DD504
 * @note Size: 0x8C
 */
void KareruState::exec(Item* item)
{
	if (mMoldState == KARERU_Wait && mIsFreed) {
		item->setAlive(true);
		item->startMotion(PLANTMOTION_Reappear);
		mIsFreed   = false;
		mMoldState = KARERU_End;
	}
}

/**
 * Post-Kareru (under mold) state. Trivial.
 *
 * @param item Unused.
 *
 * @note Address: 0x801DD590
 * @note Size: 0x4
 */
void KareruState::cleanup(Item* item) { }

/**
 * Triggered on mold destruction. If not already proceeding to end of state, prime escape trigger.
 *
 * @param item Unused.
 *
 * @note Address: 0x801DD594
 * @note Size: 0x18
 */
void KareruState::eventHaero(Item* item)
{
	if (mMoldState != KARERU_End) {
		mIsFreed = true;
	}
}

/**
 * On animation trigger. Only proceed if animation is complete.
 * If starting mold state, proceed to wait substate and set plant as dead.
 * Loop on waiting substate.
 * If end of state is triggered, set growth size as small and transition to Normal (default) state.
 *
 * @param item Item acted on by state machine.
 * @param event Key event (triggered by animation).
 *
 * @note Address: 0x801DD5AC
 * @note Size: 0xA4
 */
void KareruState::onKeyEvent(Item* item, const SysShape::KeyEvent& event)
{
	if (event.mType == KEYEVENT_END || event.mType == KEYEVENT_END_BLEND) {
		switch (mMoldState) {
		case KARERU_Begin:
			mMoldState = KARERU_Wait;
			item->setAlive(false);
			break;

		case KARERU_Wait:
			break;

		case KARERU_End:
			item->mGrowState = PLANTGROW_Small;
			transit(item, ITEMPLANT_Normal, nullptr);
			break;
		}
	}
}

/**
 * Triggered on damage. Trivial.
 *
 * @param item Item acted on by state machine.
 * @param damage Unused.
 *
 * @note Address: 0x801DD650
 * @note Size: 0x4
 */
void KareruState::onDamage(Item* item, f32 damage) { }

/*********************************
 * BASE CLASS (ITEM) DEFINITIONS *
 *********************************/

/**
 * Sets up (dedicated) sound object.
 *
 * @note Address: 0x801DD654
 * @note Size: 0x48
 */
void Item::constructor() { mSoundObj = new PSM::Tsuyukusa(this); }

/**
 * Constructor for base Item class. Resets growth timer and damage, and starts as small size.
 * Unused outside this file, but auto-inlined in other functions.
 *
 * @param objType Object type ID (as per `ObjTypes` enum) - should be `OBJTYPE_Plant`.
 *
 * @note Address:	........
 * @note Size: 0xD0 (should be 0xD4 but inlines correctly).
 */
Item::Item(int objType)
    : FSMItem(objType)
{
	mGrowTimer = 0.0f;
	mDamage    = 0.0f;
	mGrowState = PLANTGROW_Small;
}

/**
 * Initializes base Item class. Sets to alive, resets growth timer, damage, face direction and sticker count.
 * Starts as small size.
 *
 * @param initArg Unused.
 *
 * @note Address: 0x801DD69C
 * @note Size: 0x58
 */
void Item::onInit(CreatureInitArg* initArg)
{
	setAlive(true);
	mGrowTimer  = 0.0f;
	mDamage     = 0.0f;
	mFaceDir    = 0.0f;
	mStuckCount = 0;
	mGrowState  = PLANTGROW_Small;
}

/**
 * If a creature is stuck to a spherical collision part (i.e. berry spawn part), increment sticker counter.
 *
 * @param stuck Creature now stuck to item.
 *
 * @note Address: 0x801DD6F4
 * @note Size: 0x28
 */
void Item::onStickStart(Creature* stuck)
{
	if (stuck && stuck->mStuckCollPart->mPartType == COLLTYPE_SPHERE) {
		mStuckCount++;
	}
}

/**
 * If a creature is no longer stuck to a spherical collision part (i.e. berry spawn part), decrement sticker counter.
 * Makes sure counter doesn't go below 0.
 *
 * @param stuck Creature (formerly) stuck to item.
 *
 * @note Address: 0x801DD71C
 * @note Size: 0x3C
 */
void Item::onStickEnd(Creature* stuck)
{
	if (stuck && stuck->mStuckCollPart->mPartType == COLLTYPE_SPHERE) {
		mStuckCount--;
		if (mStuckCount < 0) {
			mStuckCount = 0;
		}
	}
}

/**
 * Adds item to global farm manager.
 *
 * @note Address: 0x801DD758
 * @note Size: 0x28
 */
void Item::onSetPosition() { Farm::farmMgr->addPlant(this); }

/**
 * Reconstructs main object matrix using current position and face direction (about Y axis).
 *
 * Address:	801DD780
 * Size:	000044
 */
void Item::updateTrMatrix()
{
	Vector3f rot(0.0f, mFaceDir, 0.0f);
	mBaseTrMatrix.makeTR(mPosition, rot);
}

/**
 * Sets color motion state and 'resets' blend ratios (1 if disappearing, 0 if reappearing).
 * Seems like these should be set opposite based on `updateColorMotion()` though.
 * Color motion machinery seems unused however, so this doesn't really do anything.
 *
 * @param state Color motion state to set (as per `MotionStateID` enum).
 *
 * @note Address: 0x801DD7C4
 * @note Size: 0x28
 */
void Item::startColorMotion(int state)
{
	mColorMotionState = state;
	if (mColorMotionState == PLANTCOLOR_Disappear) {
		mColorBlendRatio = 1.0f;
	} else {
		mColorBlendRatio = 0.0f;
	}
}

/**
 * Adjusts color blend ratios linearly over time and caps at 1 or 0.
 * Seems unused, only non-stripped because it's virtual.
 *
 * @param rate Rate at which to increment/decrement color blend ratio per frame.
 *
 * @note Address: 0x801DD7EC
 * @note Size: 0x90
 */
void Item::updateColorMotion(f32 rate)
{
	switch (mColorMotionState) {
	case PLANTCOLOR_Disappear: {
		rate *= sys->mDeltaTime;
		mColorBlendRatio += rate;
		if (mColorBlendRatio >= 1.0f) {
			mColorBlendRatio  = 1.0f;
			mColorMotionState = PLANTCOLOR_NoBlend;
		}
		break;
	}

	case PLANTCOLOR_Reappear: {
		rate *= sys->mDeltaTime;
		mColorBlendRatio -= rate;
		if (mColorBlendRatio <= 0.0f) {
			mColorBlendRatio  = 0.0f;
			mColorMotionState = PLANTCOLOR_NoBlend;
		}
		break;
	}
	}
}

/**
 * Item AI call. Executes current state machine loop.
 *
 * @note Address: 0x801DD87C
 * @note Size: 0x34
 */
void Item::doAI() { mFsm->exec(this); }

/**
 * Passes damage from attack to current state machine state damage handler function.
 *
 * @param attack Attack interaction.
 *
 * @returns True always.
 *
 * @note Address: 0x801DD8B0
 * @note Size: 0x44
 */
bool Item::interactAttack(InteractAttack& attack)
{
	mCurrentState->onDamage(this, attack.mDamage);
	return true;
}

/**
 * Triggers current state machine state Karero (start mold) event.
 *
 * @param karero Mold creation interaction.
 *
 * @returns True always.
 *
 * @note Address: 0x801DD8F8
 * @note Size: 0x38
 */
bool Item::interactFarmKarero(InteractFarmKarero& karero)
{
	mCurrentState->eventKarero(this);
	return true;
}

/**
 * Triggers current state machine state Haero (free from mold) event.
 *
 * @param haero Mold destruction interaction.
 *
 * @returns True always.
 *
 * @note Address: 0x801DD934
 * @note Size: 0x38
 */
bool Item::interactFarmHaero(InteractFarmHaero& haero)
{
	mCurrentState->eventHaero(this);
	return true;
}

/**
 * Displays debug information above plant. Debug information to display is current state machine state ID.
 *
 * @param gfx Graphics handler.
 *
 * @note Address: 0x801DD970
 * @note Size: 0x120
 */
void Item::doDirectDraw(Graphics& gfx)
{
	PerspPrintfInfo printInfo;
	gfx.initPerspPrintf(gfx.mCurrentViewport);
	printInfo.mColorA = Color4(200, 0, 0, 255);
	printInfo.mColorB = Color4(200, 200, 200, 255);
	printInfo.mScale  = 1.5f;

	Vector3f pos = getPosition();
	pos.y += 110.0f;
	gfx.perspPrintf(printInfo, pos, "%d", getStateID());
}

/**
 * Adds damage. If damage hits threshold to drop a berry, reset damage and drop one berry.
 * Also drops all enemies stuck to plant (namely whiskerpillars) on damage application.
 *
 * @param damage Damage to apply.
 *
 * @note Address: 0x801DDA90
 * @note Size: 0x294
 */
void Item::addDamage(f32 damage)
{
	mDamage += damage;
	if (mDamage > mgr->mParms->mPlantParms.mDamageToDrop.mValue) {
		mDamage = 0.0f;
		dropFruit(1);
	}

	// when damaged, drop all whiskerpillars
	Stickers stickers(this);
	Iterator<Creature> iter(&stickers);
	CI_LOOP(iter)
	{
		Creature* stuck = *iter;
		if (stuck->isTeki()) {
			InteractDrop drop(this);
			stuck->stimulate(drop);
		}
	}
}

/*****************************
 * PROC ANIMATOR DEFINITIONS *
 *****************************/

/**
 * Constructor for ProcAnimator. Stripped, but auto-inlined in `Plant` constructor.
 * Resets main used values.
 *
 * @note Address:	........
 * @note Size: 0x1C
 */
ProcAnimator::ProcAnimator()
{
	mMaxCount = 0;
	mMatrices = nullptr;
	_24       = 0.0f;
	_28       = 0.0f;
}

/**
 * Sets up ProcAnimator. Creates arrays of size `count` and initializes values to 0.
 * Stripped but used in `Plant::onInit()`.
 *
 * @param count Array sizes to create.
 *
 * @note Address:	........
 * @note Size: 0xD8
 */
void ProcAnimator::create(int count)
{
	mMaxCount = count;
	mMatrices = new Matrixf*[count];
	_10       = new Matrixf[count];
	mAngle    = new f32[count];
	mXRot     = new f32[count];
	mYDist    = new f32[count];

	for (int i = 0; i < count; i++) {
		mMatrices[i] = nullptr;
		mAngle[i]    = 0.0f;
		mXRot[i]     = 0.0f;
		mYDist[i]    = 0.0f;
		PSMTXIdentity(_10[i].mMatrix.mtxView);
	}
}

/**
 * Sets matrix (ptr) of given index. Stripped but used in `Plant::onInit()` based on assert line numbering.
 *
 * @param idx Index of matrix to set, between 0 and (`mMaxCount` - 1).
 * @param mtx Matrix (ptr) to set.
 *
 * @throws Panics if index provided is >= `mMaxCount` (outside array size).
 *
 * @note Address: N/A
 * @note Size: 0x74 (should be 0x88 but matches when inlined)
 */
void ProcAnimator::setMatrix(int idx, Matrixf* mtx)
{
	P2ASSERTLINE(663, mMaxCount > idx);
	mMatrices[idx] = mtx;
}

/**
 * Educated guess based on `setMatrix` - unused.
 *
 * @param idx Index of angle to set, between 0 and (`mMaxCount` - 1).
 * @param angle Angle value to set.
 *
 * @throws Panics if index provided is >= `mMaxCount` (outside array size).
 *
 * @note UNUSED
 * @note Address: N/A
 * @note Size: 0x74 (should be 0x88)
 */
void ProcAnimator::setAngle(int idx, f32 angle)
{
	P2ASSERTLINE(670, mMaxCount > idx); // line number is a guess
	mAngle[idx] = angle;
}

/**
 * Educated guess based on `setAngle` - unused.
 *
 * @param idx Index of angle to get, between 0 and (`mMaxCount` - 1).
 *
 * @returns Angle of given index.
 *
 * @throws Panics if index provided is >= `mMaxCount` (outside array size).
 *
 * @note UNUSED
 * @note Address: N/A
 * @note Size: 0x68 (should be 0x7C)
 */
f32 ProcAnimator::getAngle(int idx)
{
	P2ASSERTLINE(680, mMaxCount > idx);
	return mAngle[idx];
}

/**
 * Calcs each x-rotation and angle based on current matrices.
 * Also sets `mPosition` to translation of base matrix (index 0).
 * `mAngle` is calculated based on vertical separation from current index to next.
 * `mXRot` is calculated based on y-component of x-rotation basis vector (possibly needs better name).
 *
 * @note Address: 0x801DDD28
 * @note Size: 0x318
 */
void ProcAnimator::calcAngles()
{
	Vector3f lastPos;
	mMatrices[0]->getTranslation(lastPos);
	mPosition = lastPos;

	for (int i = 1; i < mMaxCount; i++) {
		Matrixf* currMat = mMatrices[i];
		Vector3f thisPos;
		currMat->getTranslation(thisPos);
		Vector3f sep = thisPos - lastPos;
		f32 dist     = sep.length();
		if (dist > 0.0f) {
			sep.y *= 1.0f / dist;
		}

		lastPos = thisPos;

		if (sep.y < -1.0f) {
			sep.y = -1.0f;
		} else if (sep.y > 1.0f) {
			sep.y = 1.0f;
		}

		f32 aCosY = acosf(sep.y);
		mAngle[i] = aCosY;
		mXRot[i]  = aCosY;

		Vector3f posX = currMat->getColumn(0);
		f32 xLen      = posX.length();
		if (xLen > 0.0f) {
			posX.y *= 1.0f / xLen;
		}

		if (posX.y < -1.0f) {
			posX.y = -1.0f;
		} else if (posX.y > 1.0f) {
			posX.y = 1.0f;
		}

		mAngle[i] = acosf(posX.y);
	}

	mAngle[0] = 0.0f;
}

/**
 * Updates `mYDist` based on current matrices (probably needs better name).
 * Stripped, but educated guess says it's used in `update` and `Plant::onInit`.
 * Has regswaps currently.
 *
 * @note NON-MATCHING
 * @note Address: N/A
 * @note Size: 0x9C
 */
void ProcAnimator::calcDists()
{
	Vector3f lastPos;
	Matrixf* mat0 = mMatrices[0];
	lastPos.x     = mat0->mMatrix.structView.tx;
	lastPos.y     = mat0->mMatrix.structView.ty;
	lastPos.z     = mat0->mMatrix.structView.tz;

	for (int i = 1; i < mMaxCount; i++) {
		Matrixf* mat = mMatrices[i];
		Vector3f newPos;
		newPos.x = mat->mMatrix.structView.tx;
		newPos.y = mat->mMatrix.structView.ty;
		newPos.z = mat->mMatrix.structView.tz;

		Vector3f sep = newPos - lastPos;
		lastPos      = newPos;
		mYDist[i]    = sep.length();
	}
}

/**
 * Stripped. Unknown if used or not.
 *
 * @note Address: N/A
 * @note Size: 0x30
 */
void ProcAnimator::force(f32) { }

/**
 * Updates angle variables (`_24` and `_28`) and each matrix (aside from base matrix at index 0).
 * Matrices are reconstructed based on current angle and some calculated offset.
 *
 * @param faceDir Direction parent plant is facing.
 * @param p2 Unknown, seems to increase rate at which angles advance.
 *
 * @note NON-MATCHING
 * @note Address: 0x801DE040
 * @note Size: 0x4E4
 */
void ProcAnimator::update(f32 faceDir, f32 p2)
{
	f32 x         = 80.0f;
	f32 factor    = 1.0f * x; // this has gotta be part of an inline to actually multiply by 1.0f
	factor        = -factor;
	f32 p3        = x * p2;
	f32 frameRate = sys->mDeltaTime;
	_28 += ((_24 * factor - _28 * 1.6f) + p3) * frameRate;
	_24 += frameRate * _28;

	if (_24 > TORADIANS(40.0f)) {
		_24 = TORADIANS(40.0f);
	} else if (_24 < TORADIANS(-30.0f)) {
		_24 = TORADIANS(-30.0f);
	}

	Matrixf originMat;                  // 0xBC
	Vector3f rot1(0.0f, faceDir, 0.0f); // 0x80
	originMat.makeTR(Vector3f::zero, rot1);

	calcAngles();
	calcDists(); // regswaps here

	Vector3f pos = mPosition; // 0x74

	for (int i = 1; i < mMaxCount; i++) {
		Matrixf* currMat = mMatrices[i];
		f32 angleFactor;
		if (i == 1) {
			angleFactor = 0.1f;
		} else if (i == 2) {
			angleFactor = 0.5f;
		} else {
			angleFactor = 1.0f;
		}
		f32 angleOffset = _24 * angleFactor;

		Matrixf mat;                         // 0x8C
		f32 theta = mAngle[i] + angleOffset; // f29

		Vector3f newPos; // 0x68
		newPos.x = 0.0f;
		newPos.y = mYDist[i];
		newPos.z = 0.0f;

		Vector3f rot; // 0x5C
		rot.x = mXRot[i] + angleOffset;
		rot.y = faceDir;
		rot.z = 0.0f;

		mat.makeTR(pos, rot); // 0x8C, 0x74, 0x5C

		newPos = mat.mtxMult(newPos); // 0x8C, 0x68, (0x2C) -> 0x68
		pos    = newPos;              // 0x68 -> 0x74

		currMat->setTranslation(newPos); // 0x68 -> 0x74

		Vector3f posX = currMat->getColumn(0);
		f32 scale     = posX.length(); // f2

		Vector3f xVec = Vector3f(0.0f, scale * cosf(theta), scale * sinf(theta));  // 0x50
		Vector3f yVec = Vector3f(0.0f, scale * -sinf(theta), scale * cosf(theta)); // 0x44
		Vector3f zVec = Vector3f(scale, 0.0f, 0.0f);                               // 0x38

		xVec = originMat.mtxMult(xVec); // 0xBC, 0x50, (0x20) -> (0x50)
		yVec = originMat.mtxMult(yVec); // 0xBC, 0x44, (0x14) -> (0x44)
		zVec = originMat.mtxMult(zVec); // 0xBC, 0x38, (0x8)  -> (0x38)

		currMat->setColumn(0, xVec); // 0x50
		currMat->setColumn(1, yVec); // 0x44
		currMat->setColumn(2, zVec); // 0x38
	}
	/*
	stwu     r1, -0x180(r1)
	mflr     r0
	stw      r0, 0x184(r1)
	stfd     f31, 0x170(r1)
	psq_st   f31, 376(r1), 0, qr0
	stfd     f30, 0x160(r1)
	psq_st   f30, 360(r1), 0, qr0
	stfd     f29, 0x150(r1)
	psq_st   f29, 344(r1), 0, qr0
	stfd     f28, 0x140(r1)
	psq_st   f28, 328(r1), 0, qr0
	stmw     r27, 0x12c(r1)
	lfs      f0, lbl_80519824@sda21(r2)
	mr       r27, r3
	lfs      f4, lbl_80519804@sda21(r2)
	fmr      f28, f1
	lwz      r3, sys@sda21(r13)
	fmuls    f5, f2, f0
	fmuls    f4, f4, f0
	lfs      f0, lbl_80519828@sda21(r2)
	lfs      f2, 0x28(r27)
	lfs      f3, 0x24(r27)
	fneg     f4, f4
	lfs      f6, 0x54(r3)
	fmuls    f1, f0, f2
	lfs      f0, lbl_8051982C@sda21(r2)
	fmsubs   f1, f4, f3, f1
	fadds    f1, f5, f1
	fmadds   f1, f6, f1, f2
	stfs     f1, 0x28(r27)
	lfs      f2, 0x28(r27)
	lfs      f1, 0x24(r27)
	fmadds   f1, f6, f2, f1
	stfs     f1, 0x24(r27)
	lfs      f1, 0x24(r27)
	fcmpo    cr0, f1, f0
	ble      lbl_801DE0DC
	stfs     f0, 0x24(r27)
	b        lbl_801DE0EC

lbl_801DE0DC:
	lfs      f0, lbl_80519830@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_801DE0EC
	stfs     f0, 0x24(r27)

lbl_801DE0EC:
	lfs      f0, lbl_80519800@sda21(r2)
	lis      r3, "zero__10Vector3<f>"@ha
	addi     r4, r3, "zero__10Vector3<f>"@l
	stfs     f28, 0x84(r1)
	addi     r3, r1, 0xbc
	addi     r5, r1, 0x80
	stfs     f0, 0x80(r1)
	stfs     f0, 0x88(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	mr       r3, r27
	bl       calcAngles__Q34Game9ItemPlant12ProcAnimatorFv
	lwz      r3, 0xc(r27)
	li       r4, 1
	lfs      f0, lbl_80519800@sda21(r2)
	li       r5, 4
	lwz      r3, 0(r3)
	lfs      f3, 0xc(r3)
	lfs      f4, 0x1c(r3)
	lfs      f5, 0x2c(r3)
	b        lbl_801DE1A4

lbl_801DE13C:
	lwz      r3, 0xc(r27)
	lwzx     r3, r3, r5
	lfs      f2, 0x1c(r3)
	lfs      f1, 0xc(r3)
	fsubs    f7, f2, f4
	lfs      f6, 0x2c(r3)
	fsubs    f4, f1, f3
	fsubs    f5, f6, f5
	fmuls    f7, f7, f7
	fmr      f3, f1
	fmuls    f8, f5, f5
	fmadds   f1, f4, f4, f7
	fmr      f4, f2
	fmr      f5, f6
	fadds    f1, f8, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801DE190
	ble      lbl_801DE194
	frsqrte  f2, f1
	fmuls    f1, f2, f1
	b        lbl_801DE194

lbl_801DE190:
	fmr      f1, f0

lbl_801DE194:
	lwz      r3, 0x1c(r27)
	addi     r4, r4, 1
	stfsx    f1, r3, r5
	addi     r5, r5, 4

lbl_801DE1A4:
	lwz      r0, 0x20(r27)
	cmpw     r4, r0
	blt      lbl_801DE13C
	lfs      f0, 0(r27)
	lis      r3, sincosTable___5JMath@ha
	lfs      f30, lbl_80519800@sda21(r2)
	addi     r31, r3, sincosTable___5JMath@l
	stfs     f0, 0x74(r1)
	li       r29, 1
	lfs      f31, lbl_80519840@sda21(r2)
	li       r30, 4
	lfs      f0, 4(r27)
	stfs     f0, 0x78(r1)
	lfs      f0, 8(r27)
	stfs     f0, 0x7c(r1)
	b        lbl_801DE4E4

lbl_801DE1E4:
	lwz      r3, 0xc(r27)
	cmpwi    r29, 1
	lwzx     r28, r3, r30
	bne      lbl_801DE1FC
	lfs      f1, lbl_80519834@sda21(r2)
	b        lbl_801DE210

lbl_801DE1FC:
	cmpwi    r29, 2
	bne      lbl_801DE20C
	lfs      f1, lbl_80519838@sda21(r2)
	b        lbl_801DE210

lbl_801DE20C:
	lfs      f1, lbl_80519804@sda21(r2)

lbl_801DE210:
	lfs      f0, 0x24(r27)
	addi     r3, r1, 0x8c
	lwz      r5, 0x18(r27)
	addi     r4, r1, 0x74
	fmuls    f3, f1, f0
	lwz      r7, 0x14(r27)
	lfsx     f0, r5, r30
	addi     r5, r1, 0x5c
	lwz      r6, 0x1c(r27)
	lfsx     f1, r7, r30
	lfsx     f2, r6, r30
	fadds    f0, f0, f3
	fadds    f29, f1, f3
	stfs     f30, 0x68(r1)
	stfs     f2, 0x6c(r1)
	stfs     f30, 0x70(r1)
	stfs     f0, 0x5c(r1)
	stfs     f28, 0x60(r1)
	stfs     f30, 0x64(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	addi     r3, r1, 0x8c
	addi     r4, r1, 0x68
	addi     r5, r1, 0x2c
	bl       PSMTXMultVec
	lfs      f2, 0x2c(r1)
	lfs      f1, 0x30(r1)
	lfs      f0, 0x34(r1)
	stfs     f2, 0x68(r1)
	stfs     f1, 0x6c(r1)
	stfs     f0, 0x70(r1)
	stfs     f2, 0x74(r1)
	stfs     f1, 0x78(r1)
	stfs     f0, 0x7c(r1)
	stfs     f2, 0xc(r28)
	lfs      f0, 0x6c(r1)
	stfs     f0, 0x1c(r28)
	lfs      f0, 0x70(r1)
	stfs     f0, 0x2c(r28)
	lfs      f0, 0x10(r28)
	lfs      f1, 0x20(r28)
	fmuls    f2, f0, f0
	lfs      f0, 0(r28)
	fmuls    f1, f1, f1
	fmadds   f0, f0, f0, f2
	fadds    f2, f1, f0
	fcmpo    cr0, f2, f30
	ble      lbl_801DE2DC
	ble      lbl_801DE2E0
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_801DE2E0

lbl_801DE2DC:
	fmr      f2, f30

lbl_801DE2E0:
	fcmpo    cr0, f29, f30
	bge      lbl_801DE314
	lfs      f0, lbl_8051983C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0xf0(r1)
	lwz      r0, 0xf4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_801DE338

lbl_801DE314:
	lfs      f0, lbl_80519840@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0xf8(r1)
	lwz      r0, 0xfc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_801DE338:
	fmr      f3, f29
	fcmpo    cr0, f29, f30
	fmuls    f1, f2, f0
	bge      lbl_801DE34C
	fneg     f3, f29

lbl_801DE34C:
	fmuls    f0, f3, f31
	stfs     f30, 0x50(r1)
	fmr      f3, f29
	fcmpo    cr0, f29, f30
	stfs     f1, 0x58(r1)
	fctiwz   f0, f0
	stfd     f0, 0x100(r1)
	lwz      r0, 0x104(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r31, r0
	lfs      f0, 4(r3)
	fmuls    f0, f2, f0
	stfs     f0, 0x54(r1)
	bge      lbl_801DE388
	fneg     f3, f29

lbl_801DE388:
	fmuls    f0, f3, f31
	fcmpo    cr0, f29, f30
	fctiwz   f0, f0
	stfd     f0, 0x108(r1)
	lwz      r0, 0x10c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r31, r0
	lfs      f0, 4(r3)
	fmuls    f1, f2, f0
	bge      lbl_801DE3DC
	lfs      f0, lbl_8051983C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f29, f0
	fctiwz   f0, f0
	stfd     f0, 0x110(r1)
	lwz      r0, 0x114(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_801DE3FC

lbl_801DE3DC:
	fmuls    f0, f29, f31
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x118(r1)
	lwz      r0, 0x11c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_801DE3FC:
	fneg     f0, f0
	stfs     f30, 0x44(r1)
	addi     r3, r1, 0xbc
	addi     r4, r1, 0x50
	stfs     f1, 0x4c(r1)
	addi     r5, r1, 0x20
	fmuls    f0, f2, f0
	stfs     f2, 0x38(r1)
	stfs     f30, 0x3c(r1)
	stfs     f0, 0x48(r1)
	stfs     f30, 0x40(r1)
	bl       PSMTXMultVec
	lfs      f2, 0x20(r1)
	addi     r3, r1, 0xbc
	lfs      f1, 0x24(r1)
	addi     r4, r1, 0x44
	lfs      f0, 0x28(r1)
	addi     r5, r1, 0x14
	stfs     f2, 0x50(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x58(r1)
	bl       PSMTXMultVec
	lfs      f2, 0x14(r1)
	addi     r3, r1, 0xbc
	lfs      f1, 0x18(r1)
	addi     r4, r1, 0x38
	lfs      f0, 0x1c(r1)
	addi     r5, r1, 8
	stfs     f2, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)
	bl       PSMTXMultVec
	lfs      f0, 8(r1)
	addi     r30, r30, 4
	lfs      f2, 0xc(r1)
	addi     r29, r29, 1
	lfs      f1, 0x10(r1)
	stfs     f0, 0x38(r1)
	lfs      f0, 0x50(r1)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0(r28)
	lfs      f0, 0x54(r1)
	stfs     f0, 0x10(r28)
	lfs      f0, 0x58(r1)
	stfs     f0, 0x20(r28)
	lfs      f0, 0x44(r1)
	stfs     f0, 4(r28)
	lfs      f0, 0x48(r1)
	stfs     f0, 0x14(r28)
	lfs      f0, 0x4c(r1)
	stfs     f0, 0x24(r28)
	lfs      f0, 0x38(r1)
	stfs     f0, 8(r28)
	lfs      f0, 0x3c(r1)
	stfs     f0, 0x18(r28)
	lfs      f0, 0x40(r1)
	stfs     f0, 0x28(r28)

lbl_801DE4E4:
	lwz      r0, 0x20(r27)
	cmpw     r29, r0
	blt      lbl_801DE1E4
	psq_l    f31, 376(r1), 0, qr0
	lfd      f31, 0x170(r1)
	psq_l    f30, 360(r1), 0, qr0
	lfd      f30, 0x160(r1)
	psq_l    f29, 344(r1), 0, qr0
	lfd      f29, 0x150(r1)
	psq_l    f28, 328(r1), 0, qr0
	lfd      f28, 0x140(r1)
	lmw      r27, 0x12c(r1)
	lwz      r0, 0x184(r1)
	mtlr     r0
	addi     r1, r1, 0x180
	blr
	*/
}

/**
 * Unused. Needed to put 20.0f into sdata2 in the right spot though.
 *
 * @note UNUSED
 * @note Address:	........
 * @note Size:	0xC (should be 0x7C)
 */
void ProcAnimator::draw(Graphics& gfx)
{
	_24 = 20.0f; // need to use this float value somewhere before updateBoundSphere
}

/****************************
 * PLANT OBJECT DEFINITIONS *
 ****************************/

/**
 * Constructor for (actual) Plant class. Instantiates base class and sets mass to 0.
 * Stripped, but used later in file.
 *
 * @note Address: N/A
 * @note Size: 0x10C
 */
Plant::Plant()
    : Item(OBJTYPE_Plant)
{
	mMass = 0.0f;
}

/**
 * Kill handler. Also kills instance in global manager.
 *
 * @param killArg Unused.
 *
 * @note Address: 0x801DE524
 * @note Size: 0x34
 */
void Plant::onKill(CreatureKillArg* killArg) { mgr->kill(this); }

/**
 * Finds fruit (pellet) nearest given position.
 *
 * @param pos Position to find fruit closest to.
 *
 * @returns Pellet of nearest fruit if found, or nullptr if not.
 *
 * @note Address: 0x801DE558
 * @note Size: 0x38
 */
Pellet* Plant::getNearestFruit(Vector3f& pos)
{
	FruitSlot* slot = mFruits->getFruit(pos);
	if (slot) {
		return slot->mFruit;
	}

	return nullptr;
}

/**
 * Updates bounding sphere. Sets center of sphere to current position, and radius to 400.
 *
 * @note Address: 0x801DE590
 * @note Size: 0x24
 */
void Plant::updateBoundSphere()
{
	mBoundingSphere.mPosition = mPosition;
	mBoundingSphere.mRadius   = 400.0f;
}

/**
 * Displays debug information above plant. Debug information to display is the ratio used in updating ProcAnimator,
 * which combines stuck Pikmin count and number of berries. Also displays angle-updating values of ProcAnimator.
 *
 * Address:	801DE5B4
 * Size:	0001E0
 */
void Plant::doDirectDraw(Graphics& gfx)
{
	PerspPrintfInfo printInfo;
	gfx.initPerspPrintf(gfx.mCurrentViewport);
	printInfo.mColorA = Color4(200, 0, 0, 255);
	printInfo.mColorB = Color4(200, 200, 200, 255);
	printInfo.mScale  = 1.5f;

	Vector3f pos = getPosition();
	pos.y += 110.0f;

	f32 ratios = ((f32)mStuckCount / 10.0f) + ((f32)getFruitsNum() / 20.0f);
	gfx.perspPrintf(printInfo, pos, "m %.1f (%d/%d)", ratios, getFruitsNum(), mStuckCount);
	pos.y += 30.0f;
	gfx.perspPrintf(printInfo, pos, "%.1f %.1f", mProcAnimator._24, mProcAnimator._28);
}

/**
 * Initializes actual Plant class. Sets to alive, resets growth timer, damage, face direction and sticker count.
 * Starts as small size. Sets up model and collision tube tree. Sets up blend animations, initially from random
 * growth stage to wither. Also sets up the ProcAnimator and berries, and starts in Normal (default) state.
 *
 * @param initArg Unused.
 *
 * @throws Panics if first non-root collision part is not tube-like (tube or tube tree).
 *
 * @note NON-MATCHING
 * @note Address: 0x801DE794
 * @note Size: 0x778
 */
void Plant::onInit(CreatureInitArg* initArg)
{
	Item::onInit(initArg);
	mModel = new SysShape::Model(mgr->getModelData(0), 0, 2);
	setAlive(true);

	CollPart* root    = new CollPart(mModel); // r29
	root->mJointIndex = 0;
	root->mRadius     = 160.0f;

	CollPart* part1    = new CollPart(mModel); // r28
	part1->mJointIndex = mModel->getJointIndex("kuki_jnt1");
	part1->mRadius     = 12.0f;

	CollPart* part2    = new CollPart(mModel); // r27
	part2->mJointIndex = mModel->getJointIndex("kuki_jnt2");
	part2->mRadius     = 12.0f;

	CollPart* part3    = new CollPart(mModel); // r26
	part3->mJointIndex = mModel->getJointIndex("kuki_jnt3");
	part3->mRadius     = 12.0f;

	CollPart* part4    = new CollPart(mModel); // r25
	part4->mJointIndex = mModel->getJointIndex("kuki_jnt4");
	part4->mRadius     = 12.0f;

	CollPart* tops    = new CollPart(mModel); // r24
	tops->mJointIndex = mModel->getJointIndex("kuki_jnt4");
	tops->mOffset     = Vector3f(24.0f, 0.0f, 0.0f);
	tops->mRadius     = 8.0f;
	tops->mCurrentID.setID('tops');

	mCollTree->mPart = root;
	root->add(part1);
	root->add(tops);
	part1->add(part2);
	part2->add(part3);
	part3->add(part4);

	part1->makeTubeTree();

	P2ASSERTLINE(982, part1->isTubeLike());

	mgr->mAnimMgr->mModel = mModel;
	mBlendAnimator.setAnimMgr(mgr->mAnimMgr);

	// initially, blend from (random) default/grown animation to a withering animation
	mBlendAnimator.mAnimators[0].startAnim(randFloat() * 3.0f, nullptr); // 0 = NormalSmall, 1 = NormalMedium, 2 = NormalLarge
	mBlendAnimator.mAnimators[1].startAnim(PLANTANIM_Wither, nullptr);   // 5 = wither
	mBlendAnimator.endBlend();
	mAnimSpeed = 30.0f;

	mGrowTimer     = 10.0f;
	_254           = 0;
	mBlendStepTime = 0.0f;

	mBlendAnimator.setModelCalc(mModel, 0);

	Matrixf mtx;
	PSMTXIdentity(mtx.mMatrix.mtxView);
	PSMTXCopy(mtx.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
	mModel->mJ3dModel->calc();

	mFruits = new Fruits(this);

	mFruits->init(5, mModel->getJoint("kuki_jnt4")->getWorldMatrix());
	mProcAnimator.create(4);
	mProcAnimator.setMatrix(0, mModel->getJoint("kuki_jnt1")->getWorldMatrix());
	mProcAnimator.setMatrix(1, mModel->getJoint("kuki_jnt2")->getWorldMatrix());
	mProcAnimator.setMatrix(2, mModel->getJoint("kuki_jnt3")->getWorldMatrix());
	mProcAnimator.setMatrix(3, mModel->getJoint("kuki_jnt4")->getWorldMatrix());

	mProcAnimator.calcAngles();
	mProcAnimator.calcDists(); // regswaps in this inline :(

	J3DModelData* data = mModel->mJ3dModel->mModelData;
	mgr->mAnmColor->searchUpdateMaterialID(data);

	for (u16 i = 0; i < data->getMaterialNum(); i++) {
		J3DMaterialAnm* anm = new J3DMaterialAnm();
		J3DMaterial* mat    = data->getMaterialNodePointer(i);
		mat->change();
		mat->mMaterialAnm = anm;
	}

	data->mMaterialTable.entryMatColorAnimator(mgr->mAnmColor);
	startColorMotion(PLANTCOLOR_Reappear);
	mFsm->start(this, ITEMPLANT_Normal, nullptr);
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stmw     r24, 0x50(r1)
	lwz      r12, 0(r3)
	lis      r5, lbl_804808F0@ha
	mr       r31, r3
	li       r4, 1
	lwz      r12, 0xac(r12)
	addi     r30, r5, lbl_804808F0@l
	mtctr    r12
	bctrl
	lfs      f0, lbl_80519800@sda21(r2)
	li       r0, 0
	li       r3, 0x14
	stfs     f0, 0x1f8(r31)
	stfs     f0, 0x1f0(r31)
	stfs     f0, 0x200(r31)
	stw      r0, 0x1ec(r31)
	stw      r0, 0x1f4(r31)
	stfs     f0, 0x1fc(r31)
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_801DE820
	lwz      r3, mgr__Q24Game9ItemPlant@sda21(r13)
	li       r4, 0
	bl       getModelData__Q24Game11BaseItemMgrFi
	mr       r4, r3
	mr       r3, r28
	li       r5, 0
	li       r6, 2
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r28, r3

lbl_801DE820:
	stw      r28, 0x174(r31)
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	li       r3, 0x64
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_801DE858
	lwz      r4, 0x174(r31)
	bl       __ct__8CollPartFPQ28SysShape9MtxObject
	mr       r29, r3

lbl_801DE858:
	li       r0, 0
	lfs      f0, lbl_80519860@sda21(r2)
	stw      r0, 0x2c(r29)
	li       r3, 0x64
	stfs     f0, 0x1c(r29)
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_801DE884
	lwz      r4, 0x174(r31)
	bl       __ct__8CollPartFPQ28SysShape9MtxObject
	mr       r28, r3

lbl_801DE884:
	lwz      r3, 0x174(r31)
	addi     r4, r30, 0x44
	bl       getJointIndex__Q28SysShape5ModelFPc
	clrlwi   r0, r3, 0x10
	lfs      f0, lbl_80519864@sda21(r2)
	stw      r0, 0x2c(r28)
	li       r3, 0x64
	stfs     f0, 0x1c(r28)
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_801DE8BC
	lwz      r4, 0x174(r31)
	bl       __ct__8CollPartFPQ28SysShape9MtxObject
	mr       r27, r3

lbl_801DE8BC:
	lwz      r3, 0x174(r31)
	addi     r4, r30, 0x50
	bl       getJointIndex__Q28SysShape5ModelFPc
	clrlwi   r0, r3, 0x10
	lfs      f0, lbl_80519864@sda21(r2)
	stw      r0, 0x2c(r27)
	li       r3, 0x64
	stfs     f0, 0x1c(r27)
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_801DE8F4
	lwz      r4, 0x174(r31)
	bl       __ct__8CollPartFPQ28SysShape9MtxObject
	mr       r26, r3

lbl_801DE8F4:
	lwz      r3, 0x174(r31)
	addi     r4, r30, 0x5c
	bl       getJointIndex__Q28SysShape5ModelFPc
	clrlwi   r0, r3, 0x10
	lfs      f0, lbl_80519864@sda21(r2)
	stw      r0, 0x2c(r26)
	li       r3, 0x64
	stfs     f0, 0x1c(r26)
	bl       __nw__FUl
	or.      r25, r3, r3
	beq      lbl_801DE92C
	lwz      r4, 0x174(r31)
	bl       __ct__8CollPartFPQ28SysShape9MtxObject
	mr       r25, r3

lbl_801DE92C:
	lwz      r3, 0x174(r31)
	addi     r4, r30, 0x68
	bl       getJointIndex__Q28SysShape5ModelFPc
	clrlwi   r0, r3, 0x10
	lfs      f0, lbl_80519864@sda21(r2)
	stw      r0, 0x2c(r25)
	li       r3, 0x64
	stfs     f0, 0x1c(r25)
	bl       __nw__FUl
	or.      r24, r3, r3
	beq      lbl_801DE964
	lwz      r4, 0x174(r31)
	bl       __ct__8CollPartFPQ28SysShape9MtxObject
	mr       r24, r3

lbl_801DE964:
	lwz      r3, 0x174(r31)
	addi     r4, r30, 0x68
	bl       getJointIndex__Q28SysShape5ModelFPc
	clrlwi   r0, r3, 0x10
	lis      r4, 0x746F7073@ha
	stw      r0, 0x2c(r24)
	addi     r3, r24, 0x30
	lfs      f0, lbl_80519868@sda21(r2)
	addi     r4, r4, 0x746F7073@l
	lfs      f1, lbl_80519800@sda21(r2)
	stfs     f0, 0x20(r24)
	lfs      f0, lbl_8051986C@sda21(r2)
	stfs     f1, 0x24(r24)
	stfs     f1, 0x28(r24)
	stfs     f0, 0x1c(r24)
	bl       setID__4ID32FUl
	lwz      r5, 0x114(r31)
	mr       r3, r29
	mr       r4, r28
	stw      r29, 0(r5)
	bl       add__5CNodeFP5CNode
	mr       r3, r29
	mr       r4, r24
	bl       add__5CNodeFP5CNode
	mr       r3, r28
	mr       r4, r27
	bl       add__5CNodeFP5CNode
	mr       r3, r27
	mr       r4, r26
	bl       add__5CNodeFP5CNode
	mr       r3, r26
	mr       r4, r25
	bl       add__5CNodeFP5CNode
	mr       r3, r28
	bl       makeTubeTree__8CollPartFv
	lbz      r3, 0x58(r28)
	li       r0, 0
	cmplwi   r3, 1
	beq      lbl_801DEA08
	cmplwi   r3, 2
	bne      lbl_801DEA0C

lbl_801DEA08:
	li       r0, 1

lbl_801DEA0C:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801DEA28
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x3d6
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801DEA28:
	lwz      r4, mgr__Q24Game9ItemPlant@sda21(r13)
	addi     r3, r31, 0x204
	lwz      r0, 0x174(r31)
	lwz      r4, 0x20(r4)
	stw      r0, 0x18(r4)
	lwz      r4, mgr__Q24Game9ItemPlant@sda21(r13)
	lwz      r4, 0x20(r4)
	bl       setAnimMgr__Q28SysShape13BlendAnimatorFPQ28SysShape7AnimMgr
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	addi     r3, r31, 0x208
	lfd      f3, lbl_80519858@sda21(r2)
	li       r5, 0
	stw      r0, 0x38(r1)
	lfs      f1, lbl_80519870@sda21(r2)
	lfd      f2, 0x38(r1)
	lfs      f0, lbl_80519874@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r4, 0x44(r1)
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	addi     r3, r31, 0x224
	li       r4, 5
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	addi     r3, r31, 0x204
	bl       endBlend__Q28SysShape13BlendAnimatorFv
	lfs      f0, lbl_80519850@sda21(r2)
	li       r0, 0
	lfs      f1, lbl_8051984C@sda21(r2)
	addi     r3, r31, 0x204
	stfs     f0, 0x1d4(r31)
	lfs      f0, lbl_80519800@sda21(r2)
	stfs     f1, 0x1f8(r31)
	stb      r0, 0x254(r31)
	stfs     f0, 0x258(r31)
	lwz      r12, 0x204(r31)
	lwz      r28, 0x174(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 8(r28)
	lwz      r4, 4(r4)
	lwz      r4, 0x28(r4)
	lwz      r4, 0(r4)
	stw      r3, 0x54(r4)
	addi     r3, r1, 8
	bl       PSMTXIdentity
	lwz      r4, 0x174(r31)
	addi     r3, r1, 8
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x174(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r3, 0x10
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_801DEB3C
	stw      r31, 0xc(r3)

lbl_801DEB3C:
	stw      r3, 0x288(r31)
	addi     r4, r30, 0x68
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r5, r3
	lwz      r3, 0x288(r31)
	li       r4, 5
	bl       init__Q34Game9ItemPlant6FruitsFiP7Matrixf
	li       r0, 4
	li       r3, 0x10
	stw      r0, 0x27c(r31)
	bl       __nwa__FUl
	stw      r3, 0x268(r31)
	li       r3, 0xc0
	bl       __nwa__FUl
	stw      r3, 0x26c(r31)
	li       r3, 0x10
	bl       __nwa__FUl
	stw      r3, 0x270(r31)
	li       r3, 0x10
	bl       __nwa__FUl
	stw      r3, 0x274(r31)
	li       r3, 0x10
	bl       __nwa__FUl
	li       r29, 0
	stw      r3, 0x278(r31)
	lfs      f31, lbl_80519800@sda21(r2)
	mr       r24, r29
	mr       r25, r29
	mr       r28, r29

lbl_801DEBB8:
	lwz      r3, 0x268(r31)
	stwx     r28, r3, r24
	lwz      r3, 0x270(r31)
	stfsx    f31, r3, r24
	lwz      r3, 0x274(r31)
	stfsx    f31, r3, r24
	lwz      r3, 0x278(r31)
	stfsx    f31, r3, r24
	lwz      r0, 0x26c(r31)
	add      r3, r0, r25
	bl       PSMTXIdentity
	addi     r29, r29, 1
	addi     r25, r25, 0x30
	cmpwi    r29, 4
	addi     r24, r24, 4
	blt      lbl_801DEBB8
	lwz      r3, 0x174(r31)
	addi     r4, r30, 0x44
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r0, 0x27c(r31)
	mr       r28, r3
	cmpwi    r0, 0
	bgt      lbl_801DEC2C
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x297
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801DEC2C:
	lwz      r3, 0x268(r31)
	addi     r4, r30, 0x50
	stw      r28, 0(r3)
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r0, 0x27c(r31)
	mr       r28, r3
	cmpwi    r0, 1
	bgt      lbl_801DEC68
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x297
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801DEC68:
	lwz      r3, 0x268(r31)
	addi     r4, r30, 0x5c
	stw      r28, 4(r3)
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r0, 0x27c(r31)
	mr       r28, r3
	cmpwi    r0, 2
	bgt      lbl_801DECA4
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x297
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801DECA4:
	lwz      r3, 0x268(r31)
	addi     r4, r30, 0x68
	stw      r28, 8(r3)
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r0, 0x27c(r31)
	mr       r28, r3
	cmpwi    r0, 3
	bgt      lbl_801DECE0
	addi     r3, r30, 0xc
	addi     r5, r30, 0x1c
	li       r4, 0x297
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801DECE0:
	lwz      r4, 0x268(r31)
	addi     r3, r31, 0x25c
	stw      r28, 0xc(r4)
	bl       calcAngles__Q34Game9ItemPlant12ProcAnimatorFv
	lwz      r3, 0x268(r31)
	li       r4, 1
	lfs      f0, lbl_80519800@sda21(r2)
	li       r5, 4
	lwz      r3, 0(r3)
	lfs      f3, 0xc(r3)
	lfs      f4, 0x1c(r3)
	lfs      f5, 0x2c(r3)
	b        lbl_801DED7C

lbl_801DED14:
	lwz      r3, 0x268(r31)
	lwzx     r3, r3, r5
	lfs      f2, 0x1c(r3)
	lfs      f1, 0xc(r3)
	fsubs    f7, f2, f4
	lfs      f6, 0x2c(r3)
	fsubs    f4, f1, f3
	fsubs    f5, f6, f5
	fmuls    f7, f7, f7
	fmr      f3, f1
	fmuls    f8, f5, f5
	fmadds   f1, f4, f4, f7
	fmr      f4, f2
	fmr      f5, f6
	fadds    f1, f8, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801DED68
	ble      lbl_801DED6C
	frsqrte  f2, f1
	fmuls    f1, f2, f1
	b        lbl_801DED6C

lbl_801DED68:
	fmr      f1, f0

lbl_801DED6C:
	lwz      r3, 0x278(r31)
	addi     r4, r4, 1
	stfsx    f1, r3, r5
	addi     r5, r5, 4

lbl_801DED7C:
	lwz      r0, 0x27c(r31)
	cmpw     r4, r0
	blt      lbl_801DED14
	lwz      r4, 0x174(r31)
	lwz      r3, mgr__Q24Game9ItemPlant@sda21(r13)
	lwz      r4, 8(r4)
	lwz      r3, 0x88(r3)
	lwz      r28, 4(r4)
	mr       r4, r28
	bl       searchUpdateMaterialID__11J3DAnmColorFP12J3DModelData
	li       r29, 0
	b        lbl_801DEE98

lbl_801DEDAC:
	li       r3, 0xf4
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_801DEE70
	lis      r3, __vt__14J3DMaterialAnm@ha
	lis      r4, __ct__14J3DMatColorAnmFv@ha
	addi     r0, r3, __vt__14J3DMaterialAnm@l
	li       r6, 8
	lis      r3, __dt__14J3DMatColorAnmFv@ha
	stw      r0, 0(r30)
	addi     r5, r3, __dt__14J3DMatColorAnmFv@l
	addi     r4, r4, __ct__14J3DMatColorAnmFv@l
	addi     r3, r30, 4
	li       r7, 2
	bl       __construct_array
	lis      r3, __ct__12J3DTexMtxAnmFv@ha
	lis      r5, __dt__12J3DTexMtxAnmFv@ha
	addi     r4, r3, __ct__12J3DTexMtxAnmFv@l
	li       r6, 8
	addi     r3, r30, 0x14
	addi     r5, r5, __dt__12J3DTexMtxAnmFv@l
	li       r7, 8
	bl       __construct_array
	lis      r3, __ct__11J3DTexNoAnmFv@ha
	lis      r5, __dt__11J3DTexNoAnmFv@ha
	addi     r4, r3, __ct__11J3DTexNoAnmFv@l
	li       r6, 0xc
	addi     r3, r30, 0x54
	addi     r5, r5, __dt__11J3DTexNoAnmFv@l
	li       r7, 8
	bl       __construct_array
	lis      r3, __ct__14J3DTevColorAnmFv@ha
	lis      r5, __dt__14J3DTevColorAnmFv@ha
	addi     r4, r3, __ct__14J3DTevColorAnmFv@l
	li       r6, 8
	addi     r3, r30, 0xb4
	addi     r5, r5, __dt__14J3DTevColorAnmFv@l
	li       r7, 4
	bl       __construct_array
	lis      r3, __ct__15J3DTevKColorAnmFv@ha
	lis      r5, __dt__15J3DTevKColorAnmFv@ha
	addi     r4, r3, __ct__15J3DTevKColorAnmFv@l
	li       r6, 8
	addi     r3, r30, 0xd4
	addi     r5, r5, __dt__15J3DTevKColorAnmFv@l
	li       r7, 4
	bl       __construct_array
	mr       r3, r30
	bl       initialize__14J3DMaterialAnmFv

lbl_801DEE70:
	lwz      r3, 0x60(r28)
	rlwinm   r0, r29, 2, 0xe, 0x1d
	lwzx     r24, r3, r0
	lwz      r12, 0(r24)
	mr       r3, r24
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	stw      r30, 0x3c(r24)
	addi     r29, r29, 1

lbl_801DEE98:
	lhz      r0, 0x5c(r28)
	clrlwi   r3, r29, 0x10
	cmplw    r3, r0
	blt      lbl_801DEDAC
	lwz      r4, mgr__Q24Game9ItemPlant@sda21(r13)
	addi     r3, r28, 0x58
	lwz      r4, 0x88(r4)
	bl       entryMatColorAnimator__16J3DMaterialTableFP11J3DAnmColor
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0(r31)
	lwz      r12, 0x240(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1d8(r31)
	mr       r4, r31
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	lmw      r24, 0x50(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/**
 * Plant AI call. Executes current state machine loop and sets up "near spiderwort" sound mix if there's no mold.
 *
 * @note Address: 0x801DEF40
 * @note Size: 0x80
 */
void Plant::doAI()
{
	mFsm->exec(this);

	if (gameSystem->isFlag(GAMESYS_IsPlaying) && gameSystem->isFlag(GAMESYS_IsSoundFXActive)) {
		if (mGrowState != PLANTGROW_Mold) {
			// if no mold, add "near spiderwort" sound mix
			static_cast<PSM::Tsuyukusa*>(mSoundObj)->noukouFrameWork(true);
		} else {
			// if mold, remove "near spiderwort" sound mix
			static_cast<PSM::Tsuyukusa*>(mSoundObj)->noukouFrameWork(false);
		}
	}
}

/**
 * Coordinates animations and efx based on current `MotionStateID`.
 * If normal, do normal animation based on growth size.
 * If growing, do growth animation and efx based on size.
 * If being damaged, do damage animation based on growth size.
 * If mold appears, blend to wither and play withering sound.
 * If mold removed, set to alive and do reappear animation and efx.
 * Also sets random grow time offset between 0s and 3s.
 *
 * @param motionState Current `MotionStateID` to trigger efx for.
 *
 * @throws Panics if trying to do grow efx from a size that isn't 'Small' or 'Medium'.
 *
 * @note Address: 0x801DEFC0
 * @note Size: 0x370
 */
void Plant::startMotion(int motionState)
{
	mBlendAnimator.endBlend();
	mRandGrowTimeOffset = randFloat() * 3.0f;

	switch (motionState) {
	case PLANTMOTION_Normal:                                         // normal animation based on growth state
		mBlendAnimator.mAnimators[0].startAnim(mGrowState, nullptr); // 0 = NormalSmall, 1 = NormalMedium, 2 = NormalLarge
		break;

	case PLANTMOTION_Grow: // animation to grow between stages (small->med and med->large)
		// this shouldn't trigger if plant is fully grown or under mold
		P2ASSERTLINE(1084, mGrowState <= PLANTGROW_Medium);
		mBlendAnimator.mAnimators[0].startAnim(mGrowState + 3, this); // 3 = GrowSmallMed, 4 = GrowMedLarge

		// trigger correct growth efx based on stage size
		if (mGrowState == PLANTGROW_Small) { // small -> medium
			efx::TTsuyuGrow1 grow1(&mBaseTrMatrix);
			grow1.create(nullptr);

		} else if (mGrowState == PLANTGROW_Medium) { // medium -> large
			efx::TTsuyuGrow2 grow2(&mBaseTrMatrix);
			grow2.create(nullptr);
		}
		break;

	case PLANTMOTION_Damage:                                          // animation while being 'damaged' - includes Pikmin falling off
		mBlendAnimator.mAnimators[0].startAnim(mGrowState + 6, this); // 6 = DamageSmall, 7 = DamageMedium, 8 = DamageLarge
		break;

	case PLANTMOTION_Disappear:                                            // blend animation as plant withers under mold
		mBlendAnimator.mAnimators[0].startAnim(mGrowState, this);          // 0 = NormalSmall, 1 = NormalMedium, 2 = NormalLarge
		mBlendAnimator.mAnimators[1].startAnim(PLANTANIM_Wither, nullptr); // blend to 5 = wither

		SysShape::BlendQuadraticFunc quadFunc;
		mBlendAnimator.startBlend(&quadFunc, 30.0f, this);
		mBlendStepTime = 30.0f; // in frames

		startColorMotion(PLANTCOLOR_Disappear);

		if (gameSystem->isFlag(GAMESYS_IsSoundFXActive)) {
			mSoundObj->startSound(PSSE_EV_TSUYUKUSA_WITHER, 0);
		}
		break;

	case PLANTMOTION_Reappear: // animation on respawn after mold
		setAlive(true);
		mBlendAnimator.mAnimators[0].startAnim(PLANTANIM_Reappear, this); // 12 = reappear

		startColorMotion(PLANTCOLOR_Reappear);

		// trigger regrowth efx
		efx::ArgRotY fxArg(mPosition, mFaceDir);
		efx::TTsuyuGrow0 grow0;
		grow0.create(&fxArg);
		break;
	}
}

/**
 * Sets global manager color animation frame.
 *
 * @param frame Frame to force color animation to.
 *
 * @note Address: 0x801DF330
 * @note Size: 0x18
 */
void Plant::setColor(f32 frame)
{
	if (mgr) {
		mgr->mAnmColor->mCurrentFrame = frame;
	}
}

/**
 * Updates culling. Just calls BaseItem method.
 *
 * @note Address: 0x801DF348
 * @note Size: 0x20
 */
void Plant::do_updateLOD() { BaseItem::do_updateLOD(); }

/**
 * Updates visible (blend) animations and model calcs. If Plant is visible and at max size, also
 * recalc and update ProcAnimator. Also updates berries, Plant, and Plant collision tree.
 *
 * @note Address: 0x801DF368
 * @note Size:	0x2B0
 */
void Plant::doAnimation()
{
	mFruits->update();
	SysShape::BlendQuadraticFunc quadFunc;
	mBlendAnimator.animate(&quadFunc, 30.0f * sys->mDeltaTime, mAnimSpeed * sys->mDeltaTime, mBlendStepTime * sys->mDeltaTime);
	mBlendAnimator.setModelCalc(mModel, 0);

	if (mModel) {
		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
		mModel->mJ3dModel->calc();
		f32 ratios = ((f32)mStuckCount / 10.0f) + ((f32)getFruitsNum() / 20.0f);
		if (ratios > 1.0f) {
			ratios = 1.0f;
		}
		ratios *= TORADIANS(35.0f);

		if (mLod.isFlag(AILOD_IsVisible)) {
			if (mGrowState == PLANTGROW_Large) {
				mProcAnimator.setMatrix(0, mModel->getJoint("kuki_jnt1")->getWorldMatrix());
				mProcAnimator.setMatrix(1, mModel->getJoint("kuki_jnt2")->getWorldMatrix());
				mProcAnimator.setMatrix(2, mModel->getJoint("kuki_jnt3")->getWorldMatrix());
				mProcAnimator.setMatrix(3, mModel->getJoint("kuki_jnt4")->getWorldMatrix());
				mProcAnimator.update(mFaceDir, ratios);
			}

			mModel->mJ3dModel->calcWeightEnvelopeMtx();
		}
	}

	update();
	updateCollTree();
}

/**
 * Restocks all berries based on plant type (spicy, bitter, random).
 *
 * @note Address: 0x801DF618
 * @note Size:	0x2C
 */
void Plant::bearFruits() { mFruits->bearAll(mPlantType); }

/**
 * Kills all berries.
 *
 * @note Address: 0x801DF644
 * @note Size: 0x24
 */
void Plant::killFruits() { mFruits->killAll(); }

/**
 * Drops `num` amount of berries, starting at one closest to origin of map.
 * If a berry is null, will stop looking and return.
 *
 * @param num Number of berries to drop.
 *
 * @note Address: 0x801DF668
 * @note Size: 0x80
 */
void Plant::dropFruit(int num)
{
	for (int i = 0; i < num; i++) {
		FruitSlot* slot = mFruits->getFruit(Vector3f::zero);
		if (slot) {
			slot->dropFruit();
			continue;
		}
		return;
	}
}

/**
 * Checks if Plant has any berries.
 *
 * @returns True if any berries are found on Plant, false if none found.
 *
 * @note Address: 0x801DF6E8
 * @note Size: 0x24
 */
bool Plant::hasFruits() { return mFruits->hasFruits(); }

/**
 * Checks how many berries Plant has.
 *
 * @returns Number of berries currently on Plant.
 *
 * @note Address: 0x801DF70C
 * @note Size: 0x24
 */
int Plant::getFruitsNum() { return mFruits->countFruits(); }

/**
 * Bursts closest berry to enemy (whiskerpillar) when 'eaten'.
 * Also triggers correct efx based on berry type (spicy or bitter), and sound effect.
 * Updates berry color in `eat` with what was eaten. Also kills berry.
 *
 * @param eat Eat interaction triggered by enemy.
 *
 * @returns True if berry to burst is found, false if not.
 *
 * @note Address: 0x801DF730
 * @note Size: 0x1D0
 */
bool Plant::interactEat(InteractEat& eat)
{
	Vector3f creaturePos = eat.mCreature->getPosition();
	FruitSlot* slot      = mFruits->getFruit(creaturePos);

	if (slot) {
		Pellet* fruit = slot->mFruit;
		if (fruit->getKind() == PelletType::Berry) {
			Vector3f fruitPos = fruit->getPosition();
			efx::Arg fxArg(fruitPos);
			if (fruit->mPelletColor == PELCOLOR_SPICY) {
				eat.mBerryColor = PELCOLOR_SPICY;
				efx::TFruitsDownR downSpicy;
				downSpicy.create(&fxArg);
			} else {
				eat.mBerryColor = PELCOLOR_BITTER;
				efx::TFruitsDownP downBitter;
				downBitter.create(&fxArg);
			}
			fruit->mSoundMgr->startSound(PSSE_EV_FRUIT_POP, 0);

		} else {
			eat.mBerryColor = 2;
		}

		slot->killFruit();
		return true;
	}

	return false;
}

/*********************************
 * ITEMPLANT MANAGER DEFINITIONS *
 *********************************/

/**
 * Constructor for Plant manager. Sets up component paths and reads in Plant parameters from file.
 *
 * @note Address: 0x801DF900
 * @note Size: 0x120
 */
Mgr::Mgr()
{
	mItemName = "Plant";
	setModelSize(1);
	mObjectPathComponent = "user/Kando/objects/plants";
	mParms               = new PlantParms;
	void* data = JKRDvdRipper::loadToMainRAM("user/Abe/item/plantParms.txt", nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM,
	                                         0, nullptr, nullptr);
	if (data) {
		RamStream input(data, -1);
		input.setMode(STREAM_MODE_TEXT, 1);
		mParms->read(input);
		delete[] data;
	}
}

/**
 * Creates new plant and adds it to list of plants that exist.
 *
 * @returns New Plant.
 *
 * @note Address: 0x801DFD5C
 * @note Size: 0x130
 */
BaseItem* Mgr::birth()
{
	Plant* plant = new Plant;
	entry(plant);
	return plant;
}

/**
 * Loads model, color animation, and animation manager from file.
 *
 * @throws Panics if `texts.szs` archive doesn't load/exist.
 *
 * @note Address: 0x801DFE8C
 * @note Size: 0xB4
 */
void Mgr::onLoadResources()
{
	loadArchive("arc.szs");
	loadBmd("model.bmd", 0, 0x20020000);
	mAnmColor = static_cast<J3DAnmColor*>(J3DAnmLoaderDataBase ::load(JKRFileLoader::getGlbResource("model.bpk", nullptr)));

	JKRArchive* textArc = openTextArc("texts.szs");
	P2ASSERTLINE(1329, textArc);
	loadAnimMgr(textArc, "plantAnimMgr.txt");
	closeTextArc(textArc);
}

/**
 * Creates new Plant generator parameter.
 *
 * @returns New (default) GenPlantParm.
 *
 * @note Address: 0x801DFF40
 * @note Size: 0x4C
 */
GenItemParm* Mgr::generatorNewItemParm() { return new GenPlantParm(); }

/**
 * Writes current generator parameter to stream. Writes plant type and comment.
 *
 * @param input Stream to write to.
 * @param genParm Generator parameter to write, needs to be castable to GenPlantParm.
 *
 * @throws Panics if `genParm` is null or uncastable to genPlantParm.
 *
 * @note Address: 0x801DFF8C
 * @note Size: 0x88
 */
void Mgr::generatorWrite(Stream& input, GenItemParm* genParm)
{
	GenPlantParm* plantParm = static_cast<GenPlantParm*>(genParm);
	P2ASSERTLINE(1448, plantParm);

	input.textWriteTab(input.mTabCount);
	input.writeShort(plantParm->mPlantType);
	input.textWriteText("\t#実タイプ\r\n"); // '#actual type'
}

/**
 * Reads generator parameter from stream, based on version.
 * Sets plant type from stream if latest version (0001), otherwise spicy.
 *
 * @param input Stream to write from.
 * @param genParm Generator parameter to read into, needs to be castable to GenPlantParm.
 * @param version Version of code.
 *
 * @throws Panics if `genParm` is null or uncastable to genPlantParm.
 *
 * @note Address: 0x801E0014
 * @note Size: 0x88
 */
void Mgr::generatorRead(Stream& input, GenItemParm* genParm, u32 version)
{
	GenPlantParm* plantParm = static_cast<GenPlantParm*>(genParm);
	P2ASSERTLINE(1458, plantParm);

	if (version >= '0001') {
		plantParm->mPlantType = input.readShort();
	} else {
		plantParm->mPlantType = PLANTTYPE_Spicy;
	}
}

/**
 * Creates new Plant and initializes parameters based on inputs.
 * Sets plant type from generator parameter. Sets face direction from input y-rotation.
 * Sets position from input position vector.
 *
 * @param pos Position vector to generate Plant at.
 * @param rot Rotation vector of angles - y-rotation = new face direction.
 * @param genParm Generator parameter to set plant type - needs to be castable to GenPlantParm.
 *
 * @returns New (initialized) Plant.
 *
 * @throws Panics if `genParm` is null or uncastable to genPlantParm.
 *
 * @note Address: 0x801E009C
 * @note Size: 0xB4
 */
BaseItem* Mgr::generatorBirth(Vector3f& pos, Vector3f& rot, GenItemParm* genParm)
{
	GenPlantParm* plantParm = static_cast<GenPlantParm*>(genParm);
	P2ASSERTLINE(1469, plantParm);

	Plant* plant      = static_cast<Plant*>(birth());
	plant->mPlantType = plantParm->mPlantType;
	plant->init(nullptr);
	plant->mFaceDir = roundAng(rot.y);
	plant->setPosition(pos, false);
	return plant;
}

/**********************************
 * FRUITS SLOT HOLDER DEFINITIONS *
 **********************************/

/**
 * Initializes Fruits class to handle berries.
 *
 * @param count Number of berry slots to set up.
 * @param mtx Matrix for berry holder.
 *
 * @note Address: 0x801E0150
 * @note Size: 0x74
 */
void Fruits::init(int count, Matrixf* mtx)
{
	mSlots     = new FruitSlot[count];
	mSlotCount = count;
	mMatrix    = mtx;
}

/**
 * Updates each berry slot.
 *
 * @note Address: 0x801E0224
 * @note Size: 0x64
 */
void Fruits::update()
{
	for (int i = 0; i < mSlotCount; i++) {
		mSlots[i].update();
	}
}

/**
 * Generates any missing berries based on plant type (spicy, bitter, random).
 * If a berry slot isn't filled, create a berry and set it up.
 * If plant type is random, 90% chance berry is spicy, 10% chance berry is bitter.
 *
 * @param plantType Type of Plant to make berries for, either spicy, bitter, or random.
 *
 * @note NON-MATCHING
 * @note Address: 0x801E0288
 * @note Size: 0x2B4
 */
void Fruits::bearAll(u16 plantType)
{
	for (int i = 0; i < mSlotCount; i++) {
		FruitSlot* slot = getSlot(i);
		Pellet* fruit   = slot->getFruit();

		if (!fruit) {
			PelletInitArg pelletArg;
			pelletArg.mTextIdentifier = "fruit";
			switch (plantType) {
			case PLANTTYPE_Spicy:
				pelletArg.mPelletColor = PELCOLOR_SPICY;
				break;

			case PLANTTYPE_Bitter:
				pelletArg.mPelletColor = PELCOLOR_BITTER;
				break;

			case PLANTTYPE_Random:
				if (randFloat() > 0.9f) {
					pelletArg.mPelletColor = PELCOLOR_BITTER;
				} else {
					pelletArg.mPelletColor = PELCOLOR_SPICY;
				}
				break;
			}

			pelletArg.mPelletIndex = 0;
			pelletArg.mState       = PelBirthType_Appear;
			pelletArg.mPelletType  = PelletType::Berry;

			Pellet* pellet = pelletMgr->birth(&pelletArg);
			if (!pellet) {
				return;
			}

			Matrixf mtx;
			PSMTXIdentity(mtx.mMatrix.mtxView);

			const f32 positions[5][3] = {
				{ 33.965f, 0.0f, 0.0f },   { 25.463f, 8.0f, -8.0f }, { 25.463f, 8.0f, 8.0f },
				{ 25.463f, -8.0f, -8.0f }, { 25.463f, -8.0f, 8.0f },
			};

			Vector3f pos[5];
			pos[0].set(positions[0][0], positions[0][1], positions[0][2]);
			pos[1].set(positions[1][0], positions[1][1], positions[1][2]);
			pos[2].set(positions[2][0], positions[2][1], positions[2][2]);
			pos[3].set(positions[3][0], positions[3][1], positions[3][2]);
			pos[4].set(positions[4][0], positions[4][1], positions[4][2]);

			Vector3f T(pos[i].x, pos[i].y, pos[i].z);
			mtx.makeT(T);

			slot->setFruit(pellet, mMatrix, mtx);
		}
	}
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stfd     f31, 0x130(r1)
	psq_st   f31, 312(r1), 0, qr0
	stmw     r18, 0xf8(r1)
	lis      r5, lbl_804808F0@ha
	mr       r24, r3
	addi     r31, r5, lbl_804808F0@l
	addi     r29, r1, 0x50
	clrlwi   r28, r4, 0x10
	li       r27, 0
	li       r30, 0
	b        lbl_801E0514

lbl_801E02C0:
	lwz      r0, 0(r24)
	add      r26, r0, r30
	lwz      r0, 0x18(r26)
	cmplwi   r0, 0
	bne      lbl_801E0508
	lis      r3, __vt__Q24Game15CreatureInitArg@ha
	li       r6, 0
	addi     r0, r3, __vt__Q24Game15CreatureInitArg@l
	li       r3, -1
	lis      r4, __vt__Q24Game13PelletInitArg@ha
	stw      r0, 0xbc(r1)
	addi     r7, r4, __vt__Q24Game13PelletInitArg@l
	li       r5, 0xff
	li       r4, 1
	addi     r0, r2, lbl_805198B8@sda21
	cmpwi    r28, 1
	stw      r7, 0xbc(r1)
	stb      r6, 0xd8(r1)
	sth      r6, 0xd0(r1)
	stb      r5, 0xd2(r1)
	stw      r6, 0xd4(r1)
	stb      r6, 0xd3(r1)
	stb      r4, 0xc0(r1)
	stb      r6, 0xd9(r1)
	stw      r3, 0xe0(r1)
	stw      r3, 0xdc(r1)
	stb      r6, 0xda(r1)
	stb      r6, 0xdb(r1)
	stw      r0, 0xc4(r1)
	beq      lbl_801E035C
	bge      lbl_801E0348
	cmpwi    r28, 0
	bge      lbl_801E0354
	b        lbl_801E03AC

lbl_801E0348:
	cmpwi    r28, 3
	bge      lbl_801E03AC
	b        lbl_801E0364

lbl_801E0354:
	stw      r6, 0xc8(r1)
	b        lbl_801E03AC

lbl_801E035C:
	stw      r4, 0xc8(r1)
	b        lbl_801E03AC

lbl_801E0364:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xec(r1)
	lfd      f3, lbl_80519858@sda21(r2)
	stw      r0, 0xe8(r1)
	lfs      f1, lbl_80519870@sda21(r2)
	lfd      f2, 0xe8(r1)
	lfs      f0, lbl_805198C0@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801E03A4
	li       r0, 1
	stw      r0, 0xc8(r1)
	b        lbl_801E03AC

lbl_801E03A4:
	li       r0, 0
	stw      r0, 0xc8(r1)

lbl_801E03AC:
	li       r3, 0
	li       r5, 1
	li       r0, 2
	stw      r3, 0xcc(r1)
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 0xbc
	sth      r5, 0xd0(r1)
	stb      r0, 0xd2(r1)
	bl       birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	or.      r25, r3, r3
	beq      lbl_801E0520
	addi     r3, r1, 0x8c
	bl       PSMTXIdentity
	lwz      r18, 0x1d4(r31)
	addi     r3, r1, 0x8c
	lwz      r19, 0x1d8(r31)
	addi     r4, r1, 0x44
	lwz      r20, 0x1dc(r31)
	lwz      r21, 0x1e0(r31)
	lwz      r22, 0x1e4(r31)
	lwz      r23, 0x1e8(r31)
	lwz      r12, 0x1ec(r31)
	lwz      r11, 0x1f0(r31)
	lwz      r10, 0x1f4(r31)
	lwz      r9, 0x1f8(r31)
	lwz      r8, 0x1fc(r31)
	lwz      r7, 0x200(r31)
	lwz      r6, 0x204(r31)
	lwz      r5, 0x208(r31)
	lwz      r0, 0x20c(r31)
	stw      r18, 0x38(r1)
	stw      r19, 0x3c(r1)
	lfs      f31, 0x38(r1)
	stw      r20, 0x40(r1)
	lfs      f13, 0x3c(r1)
	stw      r21, 0x2c(r1)
	lfs      f12, 0x40(r1)
	stw      r22, 0x30(r1)
	lfs      f11, 0x2c(r1)
	stw      r23, 0x34(r1)
	lfs      f10, 0x30(r1)
	stw      r12, 0x20(r1)
	lfs      f9, 0x34(r1)
	stw      r11, 0x24(r1)
	lfs      f8, 0x20(r1)
	stw      r10, 0x28(r1)
	lfs      f7, 0x24(r1)
	stw      r9, 0x14(r1)
	lfs      f6, 0x28(r1)
	stw      r8, 0x18(r1)
	lfs      f5, 0x14(r1)
	stw      r7, 0x1c(r1)
	lfs      f4, 0x18(r1)
	stw      r6, 8(r1)
	lfs      f3, 0x1c(r1)
	stw      r5, 0xc(r1)
	lfs      f2, 8(r1)
	stw      r0, 0x10(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f31, 0x50(r1)
	stfs     f13, 0x54(r1)
	stfs     f12, 0x58(r1)
	stfs     f11, 0x5c(r1)
	stfs     f10, 0x60(r1)
	stfs     f9, 0x64(r1)
	stfs     f8, 0x68(r1)
	stfs     f7, 0x6c(r1)
	stfs     f6, 0x70(r1)
	stfs     f5, 0x74(r1)
	stfs     f4, 0x78(r1)
	stfs     f3, 0x7c(r1)
	stfs     f2, 0x80(r1)
	stfs     f1, 0x84(r1)
	stfs     f0, 0x88(r1)
	lfs      f2, 0(r29)
	lfs      f1, 4(r29)
	lfs      f0, 8(r29)
	stfs     f2, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)
	bl       "makeT__7MatrixfFR10Vector3<f>"
	lwz      r5, 8(r24)
	mr       r3, r26
	mr       r4, r25
	addi     r6, r1, 0x8c
	bl setFruit__Q34Game9ItemPlant9FruitSlotFPQ24Game6PelletP7MatrixfR7Matrixf

lbl_801E0508:
	addi     r30, r30, 0x4c
	addi     r29, r29, 0xc
	addi     r27, r27, 1

lbl_801E0514:
	lwz      r0, 4(r24)
	cmpw     r27, r0
	blt      lbl_801E02C0

lbl_801E0520:
	psq_l    f31, 312(r1), 0, qr0
	lfd      f31, 0x130(r1)
	lmw      r18, 0xf8(r1)
	lwz      r0, 0x144(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

/**
 * Checks if any slots have berries.
 *
 * @returns True if any slots have berries, false otherwise.
 *
 * @note Address: 0x801E053C
 * @note Size: 0x40
 */
bool Fruits::hasFruits()
{
	for (int i = 0; i < mSlotCount; i++) {
		if (mSlots[i].mFruit) {
			return true;
		}
	}
	return false;
}

/**
 * Counts number of slots with berries.
 *
 * @returns Number of slots currently containing berries.
 *
 * @note Address: 0x801E057C
 * @note Size: 0x40
 */
int Fruits::countFruits()
{
	int count = 0;
	for (int i = 0; i < mSlotCount; i++) {
		if (mSlots[i].mFruit) {
			count++;
		}
	}

	return count;
}

/**
 * Kills all berries in any slot.
 *
 * @note Address: 0x801E05BC
 * @note Size: 0x64
 */
void Fruits::killAll()
{
	for (int i = 0; i < mSlotCount; i++) {
		mSlots[i].killFruit();
	}
}

/**
 * Finds nearest berry-containing slot to input position.
 *
 * @param pos Position from which to find nearest berry.
 *
 * @returns Slot nearest to `pos` containing a berry, or nullptr if no berry-containing slot found.
 *
 * @note Address: 0x801E0620
 * @note Size: 0x10C
 */
FruitSlot* Fruits::getFruit(Vector3f& pos)
{
	f32 minDist = 128000.0;
	int slotIdx = -1;
	for (int i = 0; i < mSlotCount; i++) {
		Pellet* fruit = mSlots[i].mFruit;
		if (fruit) {
			Vector3f fruitPos = fruit->getPosition();
			f32 fruitDist     = fruitPos.distance(pos);
			if (fruitDist < minDist) {
				minDist = fruitDist;
				slotIdx = i;
			}
		}
	}

	if (slotIdx != -1) {
		return &mSlots[slotIdx];
	}

	return nullptr;
}

/*************************
 * FRUITSLOT DEFINITIONS *
 *************************/

/**
 * Constructor for berry-holding slot class. Sets berry pellet to null and sets matrix to the identity.
 *
 * @note Address: 0x801E072C
 * @note Size: 0x4C
 */
FruitSlot::FruitSlot()
{
	mFruit = nullptr;
	PSMTXIdentity(mFruitMatrix.mMatrix.mtxView);
}

/**
 * Sets up berry-holding slot with a berry pellet and orientation matrix, and sets berry pellet's capture matrix.
 *
 * @param pellet Berry pellet to put in slot.
 * @param captureMatrix Capture matrix for berry pellet.
 * @param fruitMatrix Orientation matrix for slot.
 *
 * @note Address: 0x801E0778
 * @note Size: 0x50
 */
void FruitSlot::setFruit(Pellet* pellet, Matrixf* captureMatrix, Matrixf& fruitMatrix)
{
	mFruit = pellet;
	PSMTXCopy(fruitMatrix.mMatrix.mtxView, mFruitMatrix.mMatrix.mtxView);
	pellet->startCapture(captureMatrix);
}

/**
 * Drops berry from slot if berry exists. Ends capture and sets slot berry to nullptr.
 *
 * @note Address: 0x801E07C8
 * @note Size: 0x40
 */
void FruitSlot::dropFruit()
{
	if (mFruit) {
		mFruit->endCapture();
		mFruit = nullptr;
	}
}

/**
 * If berry is in slot, kill berry and set berry to null.
 *
 * @note Address: 0x801E0808
 * @note Size: 0x44
 */
void FruitSlot::killFruit()
{
	if (mFruit) {
		mFruit->kill(nullptr);
		mFruit = nullptr;
	}
}

/**
 * If berry is in slot, update berry's capture using the slot's orientation matrix.
 *
 * @note Address: 0x801E084C
 * @note Size: 0x34
 */
void FruitSlot::update()
{
	if (mFruit) {
		mFruit->updateCapture(mFruitMatrix);
	}
}

} // namespace ItemPlant
} // namespace Game
