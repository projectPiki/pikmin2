#include "Dolphin/rand.h"
#include "Game/Interaction.h"
#include "efx/PikiDamage.h"
#include "efx/TPk.h"
#include "types.h"
#include "P2Macros.h"
#include "Vector3.h"
#include "PikiAI.h"
#include "Game/pelletMgr.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/pathfinder.h"
#include "Game/routeMgr.h"
#include "Game/MapMgr.h"
#include "Game/mapParts.h"
#include "Game/Stickers.h"
#include "Game/PikiParms.h"
#include "nans.h"

static const int unusedAiPrimArray[] = { 0, 0, 0 };
static const char unusedAiPrimName[] = "aiPrimitives";

namespace PikiAI {

/**
 * @note Address: 0x801972DC
 * @note Size: 0x3C
 */
ActGotoPos::ActGotoPos(Game::Piki* p)
    : Action(p)
{
}

/**
 * @note Address: 0x80197318
 * @note Size: 0x78
 */
void ActGotoPos::init(ActionArg* actionArg)
{
	GotoPosActionArg* posArg = static_cast<GotoPosActionArg*>(actionArg);
	mParent->startMotion(Game::IPikiAnims::WALK, Game::IPikiAnims::WALK, nullptr, nullptr);
	mPosition = posArg->mPosition;
	mRadius   = posArg->mRadius;
}

/**
 * @note Address: 0x80197390
 * @note Size: 0x11C
 */
int ActGotoPos::exec()
{
	Vector3f pikiPos = mParent->getPosition();
	Vector3f diff    = mPosition - pikiPos;

	f32 dist = diff.normalise();
	if (dist <= mRadius) {
		return ACTEXEC_Success;
	}

	mParent->setSpeed(1.0f, diff);
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x801974AC
 * @note Size: 0x4
 */
void ActGotoPos::cleanup() { }

/**
 * @note Address: 0x801974B0
 * @note Size: 0x3C
 */
ActApproachPos::ActApproachPos(Game::Piki* p)
    : Action(p)
{
}

/**
 * @note Address: 0x801974EC
 * @note Size: 0x104
 */
void ActApproachPos::init(ActionArg* settings)
{
	bool isApproachArg = false;
	if (settings) {
		bool strCheck = strcmp("ApproachPosActionArg", settings->getName()) == 0;
		if (strCheck) {
			isApproachArg = true;
		}
	}
	P2ASSERTLINE(424, isApproachArg);
	ApproachPosActionArg* approachArg = static_cast<ApproachPosActionArg*>(settings);

	mParent->startMotion(Game::IPikiAnims::WALK, Game::IPikiAnims::WALK, nullptr, nullptr);

	mGoalPosition   = approachArg->mGoalPosition;
	mRadius         = approachArg->mRadius;
	mIsElasticSpeed = approachArg->mIsElasticSpeed;
	mIsCheck3D      = approachArg->mIsCheck3D;
	mTimeOutLimit   = approachArg->mTimeOutLimit;

	mTimer = 0.0f;
}

/**
 * @note Address: 0x801975F0
 * @note Size: 0x328
 */
int ActApproachPos::exec()
{
	Vector3f dir = mGoalPosition - mParent->getPosition();
	f32 y        = dir.y;
	f32 dist     = dir.length();
	dir.normalise();

	f32 angleDist = angDist(JMAAtan2Radian(dir.x, dir.z), mParent->getFaceDir());

	// time out if we have a time limit and we've tried at least that long
	if (mTimeOutLimit > 0.0f) {
		mTimer += sys->mDeltaTime;
		if (mTimer >= mTimeOutLimit) {
			return ACTEXEC_Success;
		}
	}

	// if we're checking height and we're *too* far away vertically, fail
	if (mIsCheck3D && FABS(y) > 20.0f) {
		return ACTEXEC_Fail;
	}

	// if we're within the radius, move back a lil pls. too close. jeez.
	if (dist < mRadius) {
		mParent->setMoveRotation(false);
		mParent->setSpeed(-0.5f, dir, dist);

		// if we're nowhere close, keep moving!
	} else if (dist > mRadius + 6.0f) {
		mParent->setMoveRotation(true);

		// elastic speed - if we're far away, go a little faster!
		if (mIsElasticSpeed) {
			f32 speed = 0.01f * dist;
			if (speed > 1.0f) {
				speed = 1.0f;
			}

			speed *= 0.5f;
			mParent->setSpeed(speed + 0.5f, dir);

		} else { // nvm just go a fixed speed
			mParent->setSpeed(0.5f, dir);
		}

		// we're close enough to the ~zone~
	} else {
		// STOP
		mParent->setVelocity(Vector3f::zero);

		// if we're basically facing the goal position, we win (we can stop)
		if (FABS(angleDist) < PI / 10.0f) {
			// if we need to check height, make sure we're within 10 units. if not, keep going
			if (mIsCheck3D) {
				if (FABS(dir.y) > 10.0f) {
					return ACTEXEC_Continue;
				}
			}
			return ACTEXEC_Success;

		} else {
			// we're not facing the right spot! turn gradually toward the spot.
			mParent->mFaceDir = roundAng(0.2f * angleDist + mParent->mFaceDir);
		}
	}

	return ACTEXEC_Continue;

	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stfd     f29, 0x30(r1)
	psq_st   f29, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x18(r31)
	lfs      f2, 0x10(r1)
	lfs      f1, 0x10(r31)
	lfs      f0, 8(r1)
	fsubs    f4, f3, f2
	lfs      f3, 0x14(r31)
	fsubs    f2, f1, f0
	lfs      f1, 0xc(r1)
	fmuls    f5, f4, f4
	lfs      f0, lbl_80518F60@sda21(r2)
	fsubs    f1, f3, f1
	stfs     f4, 0x1c(r1)
	fmuls    f3, f2, f2
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	fadds    f1, f3, f5
	fcmpo    cr0, f1, f0
	ble      lbl_80197694
	fmadds   f30, f2, f2, f5
	fcmpo    cr0, f30, f0
	ble      lbl_80197698
	frsqrte  f0, f30
	fmuls    f30, f0, f30
	b        lbl_80197698

lbl_80197694:
	fmr      f30, f0

lbl_80197698:
	lfs      f29, 0x18(r1)
	lfs      f1, lbl_80518F60@sda21(r2)
	fmuls    f4, f29, f29
	fadds    f0, f3, f4
	fadds    f0, f5, f0
	fcmpo    cr0, f0, f1
	ble      lbl_801976D0
	fmadds   f0, f2, f2, f4
	fadds    f3, f5, f0
	fcmpo    cr0, f3, f1
	ble      lbl_801976D4
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_801976D4

lbl_801976D0:
	fmr      f3, f1

lbl_801976D4:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8019770C
	lfs      f0, lbl_80518F64@sda21(r2)
	lfs      f2, 0x14(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)

lbl_8019770C:
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x14(r1)
	lfs      f2, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lwz      r3, 4(r31)
	fmr      f31, f1
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f31
	bl       angDist__Fff
	lfs      f2, 0x1c(r31)
	fmr      f31, f1
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80197788
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x20(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x20(r31)
	lfs      f1, 0x20(r31)
	lfs      f0, 0x1c(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80197788
	li       r3, 0
	b        lbl_801978EC

lbl_80197788:
	lbz      r0, 0x25(r31)
	cmplwi   r0, 0
	beq      lbl_801977B0
	fabs     f1, f29
	lfs      f0, lbl_80518F68@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801977B0
	li       r3, 2
	b        lbl_801978EC

lbl_801977B0:
	lfs      f1, 0xc(r31)
	fcmpo    cr0, f30, f1
	bge      lbl_801977EC
	lwz      r3, 4(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	fmr      f2, f30
	lwz      r3, 4(r31)
	lfs      f1, lbl_80518F6C@sda21(r2)
	addi     r4, r1, 0x14
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>f"
	b        lbl_801978E8

lbl_801977EC:
	lfs      f0, lbl_80518F70@sda21(r2)
	fadds    f0, f0, f1
	fcmpo    cr0, f30, f0
	ble      lbl_80197868
	lwz      r3, 4(r31)
	li       r4, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x24(r31)
	cmplwi   r0, 0
	beq      lbl_80197854
	lfs      f1, lbl_80518F74@sda21(r2)
	lfs      f0, lbl_80518F64@sda21(r2)
	fmuls    f1, f1, f30
	fcmpo    cr0, f1, f0
	ble      lbl_80197838
	fmr      f1, f0

lbl_80197838:
	lfs      f0, lbl_80518F78@sda21(r2)
	addi     r4, r1, 0x14
	lwz      r3, 4(r31)
	fmuls    f1, f1, f0
	fadds    f1, f0, f1
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	b        lbl_801978E8

lbl_80197854:
	lwz      r3, 4(r31)
	addi     r4, r1, 0x14
	lfs      f1, lbl_80518F78@sda21(r2)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	b        lbl_801978E8

lbl_80197868:
	lwz      r3, 4(r31)
	lis      r4, "zero__10Vector3<f>"@ha
	addi     r4, r4, "zero__10Vector3<f>"@l
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	fabs     f1, f31
	lfs      f0, lbl_80518F7C@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	bge      lbl_801978CC
	lbz      r0, 0x25(r31)
	cmplwi   r0, 0
	beq      lbl_801978C4
	lfs      f1, 0x18(r1)
	lfs      f0, lbl_80518F80@sda21(r2)
	fabs     f1, f1
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801978C4
	li       r3, 1
	b        lbl_801978EC

lbl_801978C4:
	li       r3, 0
	b        lbl_801978EC

lbl_801978CC:
	lwz      r3, 4(r31)
	lfs      f1, lbl_80518F84@sda21(r2)
	lfs      f0, 0x1fc(r3)
	fmadds   f1, f1, f31, f0
	bl       roundAng__Ff
	lwz      r3, 4(r31)
	stfs     f1, 0x1fc(r3)

lbl_801978E8:
	li       r3, 1

lbl_801978EC:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	lwz      r0, 0x64(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/**
 * @note Address: 0x80197918
 * @note Size: 0x34
 */
void ActApproachPos::cleanup() { mParent->setMoveRotation(true); }

/**
 * @note Address: 0x8019794C
 * @note Size: 0x3C
 */
ActGotoSlot::ActGotoSlot(Game::Piki* p)
    : Action(p)
{
}

/**
 * @note Address: 0x80197988
 * @note Size: 0x18C
 */
void ActGotoSlot::init(ActionArg* settings)
{
	bool isGotoSlotArg = false;
	if (settings) {
		bool strCheck = strcmp("GotoSlotArg", settings->getName()) == 0;
		if (strCheck) {
			isGotoSlotArg = true;
		}
	}
	P2ASSERTLINE(529, isGotoSlotArg);

	mParent->startMotion(Game::IPikiAnims::WALK, Game::IPikiAnims::WALK, nullptr, nullptr);

	GotoSlotArg* slotArg = static_cast<GotoSlotArg*>(settings);
	mPellet              = slotArg->mPellet;

	if (slotArg->mSlotSearchType == SLOTSEARCH_Nearest) {
		Vector3f pikiPos = mParent->getPosition();
		mSlotId          = mPellet->getNearFreeStickSlot(pikiPos);

	} else {
		mSlotId = mPellet->getRandomFreeStickSlot();
	}

	if (mPellet->isPellet() && mPellet->getTotalPikmins() == 0) {
		mSlotId      = 0;
		mIsFirstPiki = true;
	}

	resetTimers();
	mWallTimer = 0;
}

/**
 * @note Address: 0x80197B14
 * @note Size: 0x18
 */
void ActGotoSlot::wallCallback(Vector3f&)
{
	if (mWallTimer < 100) {
		mWallTimer++;
	}
}

/**
 * @note Address: 0x80197B2C
 * @note Size: 0x14
 */
void ActGotoSlot::resetTimers()
{
	mRetryCounter     = 0;
	mRefreshSlotTimer = 3.0f;
}

/**
 * @note Address: 0x80197B40
 * @note Size: 0xA94
 */
int ActGotoSlot::exec()
{
	// no slot to go to :(
	if (mSlotId == -1) {
		return ACTEXEC_Fail;
	}

	// no pellet to grab :(
	if (!mPellet->isAlive()) {
		return ACTEXEC_Fail;
	}

	// no slots are filled, we can choose the best seat.
	if (mIsFirstPiki) {
		Game::Pellet* pellet = mPellet;
		bool isAlreadyPikmin = false;
		if (pellet->getTotalPikmins()) {
			isAlreadyPikmin = true;
		}

		// another piki grabbed it while we were waiting
		if (isAlreadyPikmin) {
			mIsFirstPiki     = false;
			Vector3f pikiPos = mParent->getPosition();
			mSlotId          = mPellet->getNearFreeStickSlot(pikiPos);

			// if we can't find a slot, fail
			if (mSlotId == -1) {
				return ACTEXEC_Fail;
			}

			resetTimers();
			return ACTEXEC_Continue;
		}

		Vector3f stickSlotPos; // unused
		mPellet->calcStickSlotGlobal(mSlotId, stickSlotPos);

		Vector3f pelletPos = pellet->getPosition();   // f30, f29, f28
		f32 pickRadius     = pellet->getPickRadius(); // f31
		Vector3f pikiPos   = mParent->getPosition();  // f27, f26, f25

		if (mPellet->isPellet()) {
			pelletPos.y -= 0.5f * mPellet->getCylinderHeight();
		}

		// direction to goal
		Vector3f sep = pelletPos - pikiPos; // 0x8c
		sep.y        = 0.0f;

		sep.normalise();

		// how far do we have to go to the actual pickup point?
		Vector3f vec = (pelletPos - sep * pickRadius) - pikiPos;
		Vector2f vec2D(vec.x, vec.z);
		f32 dist = vec2D.length();

		// if we're not that close, get that ass moving
		if (dist > 6.0f) {
			mParent->setSpeed(1.0f, sep);

			// if we're SORTA close, check we're not stuck
			if (dist < 40.0f) {

				// if we're 'stuck' for at least 60 frames, fail
				if (++mRetryCounter >= 60) {
					resetTimers();
					return ACTEXEC_Fail;
				}
			}

			// if we're within 6 units and vertically 'close enough', grab the damn pellet
		} else if (FABS(vec.y) < 20.0f) {
			Vector3f slotPos; // 0x80
			pellet->calcStickSlotGlobal(0, slotPos);

			slotPos -= pelletPos;
			slotPos.normalise();

			sep *= -1.0f;

			f32 dotProd    = slotPos.dot(sep);
			f32 crossThing = (slotPos.z * sep.x) - (slotPos.x * sep.z);
			f32 factor     = (dotProd >= 1.0f) ? 1.0f : (dotProd <= -1.0f) ? -1.0f : dotProd; // f3

			pellet->mAngleOffset = (crossThing > 0.0f) ? acosf(factor) : roundAng(-acosf(factor));

			mParent->startStick(mPellet, mSlotId);
			return ACTEXEC_Success;

			// we're close in 2D but not vertically; check we're not stuck
		} else if (++mRetryCounter >= 60) {
			resetTimers();
			return ACTEXEC_Fail;

			// close 2D, not vertically, not stuck. slow down but keep trying
		} else {
			mParent->setSpeed(0.2f, sep);
		}

		return ACTEXEC_Continue;
	}

	// we're not the first piki, we need to check the other slots more carefully.

	Vector3f slotPos; // 0x74
	mPellet->calcStickSlotGlobal(mSlotId, slotPos);
	Vector3f pikiPos = mParent->getPosition(); // 0x68

	// direction to goal
	Vector3f dir = slotPos - pikiPos; // 0x5c
	f32 absY     = FABS(dir.y);
	f32 dist     = dir.length();
	dir.normalise();

	// if we're within 100 units but we're stuck, get a new slot
	if (dist < 100.0f && ++mRetryCounter >= 60) {
		s16 oldSlot = mSlotId;

		// get a better slot.
		mSlotId = mPellet->getNearFreeStickSlot(pikiPos);

		// HEY I'M TRYNA GRAB OVA ERE
		if (mPellet->isPellet()) {
			mPellet->sendClaim();
		}

		// if we just got the same slot back, fail bc we're stuck
		if (oldSlot == mSlotId) {
			return ACTEXEC_Fail;
		}

		// if we don't find a (free) slot, fail
		if (mSlotId == -1) {
			return ACTEXEC_Fail;
		}

		// we have a new slot, try again
		resetTimers();
		return ACTEXEC_Continue;
	}

	// move closer!!
	if (dist > 6.0f) {
		mParent->setSpeed(1.0f, dir);
		return ACTEXEC_Continue;
	}

	// we're close! and also close enough vertically! grab the damn pellet.
	if (dist < 6.0f && absY < 20.0f) {
		// better double check the slot is free lol.
		if (!mPellet->isSlotFree(mSlotId)) {
			// slot got taken :( find a new one and try again
			mSlotId = mPellet->getNearFreeStickSlot(pikiPos);
			resetTimers();
			return ACTEXEC_Continue;
		}

		// grab pellet.
		mParent->startStick(mPellet, mSlotId);
		pikiPos = mParent->getPosition();
		return ACTEXEC_Success;
	}

	// we're close horizontally, but not vertically? otherwise we'd be out by now?
	Vector3f pelletPos = mPellet->getPosition();
	Vector3f sep2      = pelletPos - pikiPos;
	Vector2f sep2D(sep2.x, sep2.z);

	// NB: this is just horizontal now, and also piki -> pellet, not piki -> slot
	f32 dist2D = sep2D.length();
	if (dist2D < dist) {

		// keep trying to get closer to the *pellet* horizontally while we check if we're stuck
		sep2.normalise();
		Vector3f dir2(sep2.x, 0.0f, -sep2.z);
		dir2.normalise();

		mParent->setSpeed(0.2f, dir2);

		// we have 3 seconds to keep trying before we look for a new slot.
		mRefreshSlotTimer -= sys->mDeltaTime;
		if (mRefreshSlotTimer < 0.0f) {
			// yeah we're stuck, try a new slot
			mSlotId = mPellet->getNearFreeStickSlot(pikiPos);
			resetTimers();
		}

		return ACTEXEC_Continue;
	}

	// 2D distance to pellet is more than 3D distance to slot, so keep moving
	mParent->setSpeed(0.2f, dir);
	return ACTEXEC_Continue;
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stfd     f31, 0x120(r1)
	psq_st   f31, 296(r1), 0, qr0
	stfd     f30, 0x110(r1)
	psq_st   f30, 280(r1), 0, qr0
	stfd     f29, 0x100(r1)
	psq_st   f29, 264(r1), 0, qr0
	stfd     f28, 0xf0(r1)
	psq_st   f28, 248(r1), 0, qr0
	stfd     f27, 0xe0(r1)
	psq_st   f27, 232(r1), 0, qr0
	stfd     f26, 0xd0(r1)
	psq_st   f26, 216(r1), 0, qr0
	stfd     f25, 0xc0(r1)
	psq_st   f25, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	mr       r31, r3
	lha      r0, 0x10(r3)
	cmpwi    r0, -1
	bne      lbl_80197BA8
	li       r3, 2
	b        lbl_80198580

lbl_80197BA8:
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80197BCC
	li       r3, 2
	b        lbl_80198580

lbl_80197BCC:
	lbz      r0, 0x1d(r31)
	cmplwi   r0, 0
	beq      lbl_80198118
	lwz      r30, 0xc(r31)
	li       r29, 0
	mr       r3, r30
	bl       getTotalPikmins__Q24Game6PelletFv
	cmpwi    r3, 0
	beq      lbl_80197BF4
	li       r29, 1

lbl_80197BF4:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80197C7C
	li       r0, 0
	addi     r3, r1, 0x44
	stb      r0, 0x1d(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x44(r1)
	addi     r4, r1, 0xa4
	lfs      f1, 0x48(r1)
	lfs      f0, 0x4c(r1)
	stfs     f2, 0xa4(r1)
	stfs     f1, 0xa8(r1)
	stfs     f0, 0xac(r1)
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x170(r12)
	mtctr    r12
	bctrl
	sth      r3, 0x10(r31)
	lha      r0, 0x10(r31)
	cmpwi    r0, -1
	bne      lbl_80197C64
	li       r3, 2
	b        lbl_80198580

lbl_80197C64:
	li       r0, 0
	lfs      f0, lbl_80518F88@sda21(r2)
	stw      r0, 0x14(r31)
	li       r3, 1
	stfs     f0, 0x18(r31)
	b        lbl_80198580

lbl_80197C7C:
	lwz      r3, 0xc(r31)
	addi     r5, r1, 0x98
	lha      r4, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x180(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 0x38
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f30, 0x38(r1)
	mr       r3, r30
	lfs      f29, 0x3c(r1)
	lfs      f28, 0x40(r1)
	bl       getPickRadius__Q24Game6PelletFv
	lwz      r4, 4(r31)
	fmr      f31, f1
	addi     r3, r1, 0x2c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r31)
	lfs      f27, 0x2c(r1)
	lwz      r12, 0(r3)
	lfs      f26, 0x30(r1)
	lwz      r12, 0x80(r12)
	lfs      f25, 0x34(r1)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80197D18
	lwz      r3, 0xc(r31)
	bl       getCylinderHeight__Q24Game6PelletFv
	lfs      f0, lbl_80518F78@sda21(r2)
	fnmsubs  f29, f0, f1, f29

lbl_80197D18:
	fsubs    f4, f30, f27
	lfs      f1, lbl_80518F60@sda21(r2)
	fsubs    f2, f28, f25
	fsubs    f3, f29, f26
	fmuls    f0, f4, f4
	stfs     f4, 0x8c(r1)
	fmuls    f5, f1, f1
	stfs     f3, 0x90(r1)
	fmuls    f3, f2, f2
	fadds    f0, f0, f5
	stfs     f2, 0x94(r1)
	stfs     f1, 0x90(r1)
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80197D70
	fmadds   f0, f4, f4, f5
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_80197D74
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_80197D74

lbl_80197D70:
	fmr      f3, f1

lbl_80197D74:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_80197DAC
	lfs      f0, lbl_80518F64@sda21(r2)
	lfs      f2, 0x8c(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x90(r1)
	lfs      f0, 0x94(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x8c(r1)
	stfs     f1, 0x90(r1)
	stfs     f0, 0x94(r1)

lbl_80197DAC:
	lfs      f0, 0x94(r1)
	lfs      f3, 0x8c(r1)
	fmuls    f1, f0, f31
	lfs      f2, 0x90(r1)
	fmuls    f3, f3, f31
	lfs      f0, lbl_80518F60@sda21(r2)
	fmuls    f2, f2, f31
	fsubs    f4, f28, f1
	fsubs    f1, f30, f3
	fsubs    f2, f29, f2
	fsubs    f3, f4, f25
	fsubs    f1, f1, f27
	fsubs    f2, f2, f26
	fmuls    f3, f3, f3
	fmadds   f25, f1, f1, f3
	fcmpo    cr0, f25, f0
	ble      lbl_80197E00
	ble      lbl_80197E04
	frsqrte  f0, f25
	fmuls    f25, f0, f25
	b        lbl_80197E04

lbl_80197E00:
	fmr      f25, f0

lbl_80197E04:
	lfs      f0, lbl_80518F70@sda21(r2)
	fcmpo    cr0, f25, f0
	ble      lbl_80197E58
	lwz      r3, 4(r31)
	addi     r4, r1, 0x8c
	lfs      f1, lbl_80518F64@sda21(r2)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	lfs      f0, lbl_80518F8C@sda21(r2)
	fcmpo    cr0, f25, f0
	bge      lbl_80198110
	lwz      r3, 0x14(r31)
	addi     r0, r3, 1
	cmpwi    r0, 0x3c
	stw      r0, 0x14(r31)
	blt      lbl_80198110
	li       r0, 0
	lfs      f0, lbl_80518F88@sda21(r2)
	stw      r0, 0x14(r31)
	li       r3, 2
	stfs     f0, 0x18(r31)
	b        lbl_80198580

lbl_80197E58:
	fabs     f1, f2
	lfs      f0, lbl_80518F68@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	bge      lbl_801980D4
	mr       r3, r30
	addi     r5, r1, 0x80
	lwz      r12, 0(r30)
	li       r4, 0
	lwz      r12, 0x180(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x84(r1)
	lfs      f0, 0x80(r1)
	fsubs    f4, f1, f29
	lfs      f3, 0x88(r1)
	fsubs    f2, f0, f30
	lfs      f1, lbl_80518F60@sda21(r2)
	fsubs    f3, f3, f28
	fmuls    f5, f4, f4
	fmuls    f0, f2, f2
	stfs     f2, 0x80(r1)
	fmuls    f6, f3, f3
	stfs     f4, 0x84(r1)
	fadds    f0, f0, f5
	stfs     f3, 0x88(r1)
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80197EE8
	fmadds   f0, f2, f2, f5
	fadds    f3, f6, f0
	fcmpo    cr0, f3, f1
	ble      lbl_80197EEC
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_80197EEC

lbl_80197EE8:
	fmr      f3, f1

lbl_80197EEC:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_80197F24
	lfs      f0, lbl_80518F64@sda21(r2)
	lfs      f2, 0x80(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x84(r1)
	lfs      f0, 0x88(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x80(r1)
	stfs     f1, 0x84(r1)
	stfs     f0, 0x88(r1)

lbl_80197F24:
	lfs      f6, lbl_80518F90@sda21(r2)
	lfs      f0, 0x90(r1)
	lfs      f1, 0x8c(r1)
	fmuls    f4, f0, f6
	lfs      f0, 0x84(r1)
	fmuls    f5, f1, f6
	lfs      f2, 0x94(r1)
	lfs      f7, 0x80(r1)
	fmuls    f1, f0, f4
	fmuls    f3, f2, f6
	lfs      f8, 0x88(r1)
	lfs      f0, lbl_80518F64@sda21(r2)
	fmadds   f1, f7, f5, f1
	stfs     f5, 0x8c(r1)
	fmuls    f2, f7, f3
	stfs     f4, 0x90(r1)
	fmadds   f1, f8, f3, f1
	fmsubs   f2, f8, f5, f2
	stfs     f3, 0x94(r1)
	fcmpo    cr0, f1, f0
	fmr      f3, f1
	cror     2, 1, 2
	bne      lbl_80197F88
	fmr      f3, f0
	b        lbl_80197F98

lbl_80197F88:
	fcmpo    cr0, f1, f6
	cror     2, 0, 2
	bne      lbl_80197F98
	fmr      f3, f6

lbl_80197F98:
	lfs      f1, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_8019802C
	lfs      f0, lbl_80518F64@sda21(r2)
	fcmpo    cr0, f3, f0
	cror     2, 1, 2
	bne      lbl_80197FB8
	b        lbl_801980B8

lbl_80197FB8:
	lfs      f0, lbl_80518F90@sda21(r2)
	fcmpo    cr0, f3, f0
	cror     2, 0, 2
	bne      lbl_80197FD0
	lfs      f1, lbl_80518F94@sda21(r2)
	b        lbl_801980B8

lbl_80197FD0:
	fcmpo    cr0, f3, f1
	bge      lbl_80198004
	fneg     f0, f3
	lfs      f1, lbl_80518F98@sda21(r2)
	fmuls    f1, f1, f0
	bl       __cvt_fp2unsigned
	lis      r4, asinAcosTable___5JMath@ha
	slwi     r0, r3, 2
	addi     r3, r4, asinAcosTable___5JMath@l
	lfs      f0, lbl_80518F9C@sda21(r2)
	lfsx     f1, r3, r0
	fadds    f1, f1, f0
	b        lbl_801980B8

lbl_80198004:
	lfs      f0, lbl_80518F98@sda21(r2)
	fmuls    f1, f0, f3
	bl       __cvt_fp2unsigned
	lis      r4, asinAcosTable___5JMath@ha
	slwi     r0, r3, 2
	addi     r3, r4, asinAcosTable___5JMath@l
	lfs      f0, lbl_80518F9C@sda21(r2)
	lfsx     f1, r3, r0
	fsubs    f1, f0, f1
	b        lbl_801980B8

lbl_8019802C:
	lfs      f0, lbl_80518F64@sda21(r2)
	fcmpo    cr0, f3, f0
	cror     2, 1, 2
	bne      lbl_80198040
	b        lbl_801980B0

lbl_80198040:
	lfs      f0, lbl_80518F90@sda21(r2)
	fcmpo    cr0, f3, f0
	cror     2, 0, 2
	bne      lbl_80198058
	lfs      f1, lbl_80518F94@sda21(r2)
	b        lbl_801980B0

lbl_80198058:
	fcmpo    cr0, f3, f1
	bge      lbl_8019808C
	fneg     f0, f3
	lfs      f1, lbl_80518F98@sda21(r2)
	fmuls    f1, f1, f0
	bl       __cvt_fp2unsigned
	lis      r4, asinAcosTable___5JMath@ha
	slwi     r0, r3, 2
	addi     r3, r4, asinAcosTable___5JMath@l
	lfs      f0, lbl_80518F9C@sda21(r2)
	lfsx     f1, r3, r0
	fadds    f1, f1, f0
	b        lbl_801980B0

lbl_8019808C:
	lfs      f0, lbl_80518F98@sda21(r2)
	fmuls    f1, f0, f3
	bl       __cvt_fp2unsigned
	lis      r4, asinAcosTable___5JMath@ha
	slwi     r0, r3, 2
	addi     r3, r4, asinAcosTable___5JMath@l
	lfs      f0, lbl_80518F9C@sda21(r2)
	lfsx     f1, r3, r0
	fsubs    f1, f0, f1

lbl_801980B0:
	fneg     f1, f1
	bl       roundAng__Ff

lbl_801980B8:
	stfs     f1, 0x3e0(r30)
	lwz      r3, 4(r31)
	lwz      r4, 0xc(r31)
	lha      r5, 0x10(r31)
	bl       startStick__Q24Game8CreatureFPQ24Game8Creatures
	li       r3, 0
	b        lbl_80198580

lbl_801980D4:
	lwz      r3, 0x14(r31)
	addi     r0, r3, 1
	cmpwi    r0, 0x3c
	stw      r0, 0x14(r31)
	blt      lbl_80198100
	li       r0, 0
	lfs      f0, lbl_80518F88@sda21(r2)
	stw      r0, 0x14(r31)
	li       r3, 2
	stfs     f0, 0x18(r31)
	b        lbl_80198580

lbl_80198100:
	lwz      r3, 4(r31)
	addi     r4, r1, 0x8c
	lfs      f1, lbl_80518F84@sda21(r2)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"

lbl_80198110:
	li       r3, 1
	b        lbl_80198580

lbl_80198118:
	lwz      r3, 0xc(r31)
	addi     r5, r1, 0x74
	lha      r4, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x180(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f5, 0x20(r1)
	lfs      f3, 0x28(r1)
	lfs      f1, 0x7c(r1)
	lfs      f0, 0x74(r1)
	fsubs    f7, f1, f3
	lfs      f4, 0x24(r1)
	fsubs    f2, f0, f5
	lfs      f1, 0x78(r1)
	lfs      f0, lbl_80518F60@sda21(r2)
	fsubs    f6, f1, f4
	fmuls    f9, f2, f2
	stfs     f5, 0x68(r1)
	fmuls    f8, f7, f7
	fabs     f5, f6
	stfs     f4, 0x6c(r1)
	fadds    f1, f9, f8
	stfs     f3, 0x70(r1)
	frsp     f4, f5
	stfs     f2, 0x5c(r1)
	fcmpo    cr0, f1, f0
	stfs     f6, 0x60(r1)
	stfs     f7, 0x64(r1)
	ble      lbl_801981C0
	fmadds   f31, f2, f2, f8
	fcmpo    cr0, f31, f0
	ble      lbl_801981C4
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_801981C4

lbl_801981C0:
	fmr      f31, f0

lbl_801981C4:
	lfs      f0, 0x60(r1)
	lfs      f1, lbl_80518F60@sda21(r2)
	fmuls    f3, f0, f0
	fadds    f0, f9, f3
	fadds    f0, f8, f0
	fcmpo    cr0, f0, f1
	ble      lbl_801981FC
	fmadds   f0, f2, f2, f3
	fadds    f3, f8, f0
	fcmpo    cr0, f3, f1
	ble      lbl_80198200
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_80198200

lbl_801981FC:
	fmr      f3, f1

lbl_80198200:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_80198238
	lfs      f0, lbl_80518F64@sda21(r2)
	lfs      f2, 0x5c(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x60(r1)
	lfs      f0, 0x64(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x5c(r1)
	stfs     f1, 0x60(r1)
	stfs     f0, 0x64(r1)

lbl_80198238:
	lfs      f0, lbl_80518FA0@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_801982D8
	lwz      r3, 0x14(r31)
	addi     r0, r3, 1
	cmpwi    r0, 0x3c
	stw      r0, 0x14(r31)
	blt      lbl_801982D8
	lwz      r3, 0xc(r31)
	addi     r4, r1, 0x68
	lha      r29, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x170(r12)
	mtctr    r12
	bctrl
	sth      r3, 0x10(r31)
	lwz      r3, 0xc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019829C
	lwz      r3, 0xc(r31)
	bl       sendClaim__Q24Game6PelletFv

lbl_8019829C:
	lha      r0, 0x10(r31)
	cmpw     r29, r0
	bne      lbl_801982B0
	li       r3, 2
	b        lbl_80198580

lbl_801982B0:
	cmpwi    r0, -1
	bne      lbl_801982C0
	li       r3, 2
	b        lbl_80198580

lbl_801982C0:
	li       r0, 0
	lfs      f0, lbl_80518F88@sda21(r2)
	stw      r0, 0x14(r31)
	li       r3, 1
	stfs     f0, 0x18(r31)
	b        lbl_80198580

lbl_801982D8:
	lfs      f0, lbl_80518F70@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_801982FC
	lwz      r3, 4(r31)
	addi     r4, r1, 0x5c
	lfs      f1, lbl_80518F64@sda21(r2)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	li       r3, 1
	b        lbl_80198580

lbl_801982FC:
	bge      lbl_801983A8
	lfs      f0, lbl_80518F68@sda21(r2)
	fcmpo    cr0, f4, f0
	bge      lbl_801983A8
	lwz      r3, 0xc(r31)
	lha      r4, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x168(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80198360
	lwz      r3, 0xc(r31)
	addi     r4, r1, 0x68
	lwz      r12, 0(r3)
	lwz      r12, 0x170(r12)
	mtctr    r12
	bctrl
	sth      r3, 0x10(r31)
	li       r0, 0
	lfs      f0, lbl_80518F88@sda21(r2)
	li       r3, 1
	stw      r0, 0x14(r31)
	stfs     f0, 0x18(r31)
	b        lbl_80198580

lbl_80198360:
	lwz      r3, 4(r31)
	lwz      r4, 0xc(r31)
	lha      r5, 0x10(r31)
	bl       startStick__Q24Game8CreatureFPQ24Game8Creatures
	lwz      r4, 4(r31)
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	li       r3, 0
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x68(r1)
	stfs     f1, 0x6c(r1)
	stfs     f0, 0x70(r1)
	b        lbl_80198580

lbl_801983A8:
	lwz      r4, 0xc(r31)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x10(r1)
	lfs      f0, 0x70(r1)
	lfs      f1, 8(r1)
	fsubs    f4, f2, f0
	lfs      f0, 0x68(r1)
	lfs      f2, 0xc(r1)
	fsubs    f3, f1, f0
	lfs      f1, 0x6c(r1)
	fmuls    f5, f4, f4
	fsubs    f2, f2, f1
	lfs      f0, lbl_80518F60@sda21(r2)
	fmuls    f6, f3, f3
	fadds    f1, f6, f5
	fcmpo    cr0, f1, f0
	ble      lbl_80198414
	fmadds   f1, f3, f3, f5
	fcmpo    cr0, f1, f0
	ble      lbl_80198418
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80198418

lbl_80198414:
	fmr      f1, f0

lbl_80198418:
	fcmpo    cr0, f1, f31
	bge      lbl_8019856C
	fmuls    f2, f2, f2
	lfs      f1, lbl_80518F60@sda21(r2)
	fadds    f0, f6, f2
	fadds    f0, f5, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80198454
	fmadds   f0, f3, f3, f2
	fadds    f2, f5, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80198458
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80198458

lbl_80198454:
	fmr      f2, f1

lbl_80198458:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80198474
	lfs      f0, lbl_80518F64@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_80198474:
	fneg     f0, f4
	lfs      f1, lbl_80518F60@sda21(r2)
	frsp     f4, f3
	stfs     f3, 0x58(r1)
	fmuls    f3, f1, f1
	frsp     f2, f0
	fmuls    f4, f4, f4
	stfs     f0, 0x50(r1)
	fmuls    f0, f2, f2
	stfs     f1, 0x54(r1)
	fadds    f0, f0, f3
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_801984C8
	fmadds   f0, f2, f2, f3
	fadds    f3, f4, f0
	fcmpo    cr0, f3, f1
	ble      lbl_801984CC
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_801984CC

lbl_801984C8:
	fmr      f3, f1

lbl_801984CC:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_80198504
	lfs      f0, lbl_80518F64@sda21(r2)
	lfs      f2, 0x50(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x54(r1)
	lfs      f0, 0x58(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x50(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x58(r1)

lbl_80198504:
	lwz      r3, 4(r31)
	addi     r4, r1, 0x50
	lfs      f1, lbl_80518F84@sda21(r2)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x18(r31)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80518F60@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x18(r31)
	lfs      f1, 0x18(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_80198564
	lwz      r3, 0xc(r31)
	addi     r4, r1, 0x68
	lwz      r12, 0(r3)
	lwz      r12, 0x170(r12)
	mtctr    r12
	bctrl
	sth      r3, 0x10(r31)
	li       r0, 0
	lfs      f0, lbl_80518F88@sda21(r2)
	stw      r0, 0x14(r31)
	stfs     f0, 0x18(r31)

lbl_80198564:
	li       r3, 1
	b        lbl_80198580

lbl_8019856C:
	lwz      r3, 4(r31)
	addi     r4, r1, 0x5c
	lfs      f1, lbl_80518F84@sda21(r2)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	li       r3, 1

lbl_80198580:
	psq_l    f31, 296(r1), 0, qr0
	lfd      f31, 0x120(r1)
	psq_l    f30, 280(r1), 0, qr0
	lfd      f30, 0x110(r1)
	psq_l    f29, 264(r1), 0, qr0
	lfd      f29, 0x100(r1)
	psq_l    f28, 248(r1), 0, qr0
	lfd      f28, 0xf0(r1)
	psq_l    f27, 232(r1), 0, qr0
	lfd      f27, 0xe0(r1)
	psq_l    f26, 216(r1), 0, qr0
	lfd      f26, 0xd0(r1)
	psq_l    f25, 200(r1), 0, qr0
	lfd      f25, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r0, 0x134(r1)
	lwz      r29, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/**
 * @note Address: 0x801985D4
 * @note Size: 0x4
 */
void ActGotoSlot::cleanup() { }

/**
 * @note Address: 0x801985D8
 * @note Size: 0x7C
 */
ActPathMove::ActPathMove(Game::Piki* p)
    : Action(p)
{
	mLinks        = new WayPointLinks;
	mStartWPIndex = -1;
}

/**
 * @note Address: 0x80198654
 * @note Size: 0x1BC
 */
void ActPathMove::init(ActionArg* settings)
{
	bool isPathMove    = false;
	mVsWayPointCounter = 0;
	if (settings) {
		bool strCheck = strcmp("PathMoveArg", settings->getName()) == 0;
		if (strCheck) {
			isPathMove = true;
		}
	}
	P2ASSERTLINE(790, isPathMove);
	PathMoveArg* pathMoveArg = static_cast<PathMoveArg*>(settings);

	mOnyon  = nullptr;
	mPellet = pathMoveArg->mPellet;

	// this doesn't seem to be used, input is always 0 anyway.
	mUnusedPathFlag = (pathMoveArg->_18 > 0);
	if (mUnusedPathFlag) {
		mUnusedSlotId = pathMoveArg->_18;
	}

	mContextHandle = 0;
	mNewVelocity   = Vector3f(0.0f);

	initPathfinding(true);

	// assume the pellet is picked up bc we're doing pathfinding
	mIsPickedUp = true;

	// this seems to be more for debug than anything else
	mPrevPosition = mPellet->getPosition();

	if (mPellet->isPellet()) {
		Game::Pellet* pellet = mPellet;
		mPellet->setVelocity(Vector3f::zero);
		pellet->mRigid.mConfigs[0].mForce = Vector3f(0.0f);
		s16 slot                          = pellet->getSpeicalSlot();
		if (slot == -1) {
			pellet->mPelletCarry->reset();
		}
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lis      r3, lbl_8047F070@ha
	stw      r30, 0x28(r1)
	addi     r30, r3, lbl_8047F070@l
	stw      r29, 0x24(r1)
	li       r29, 0
	stw      r28, 0x20(r1)
	or.      r28, r4, r4
	stb      r29, 0x3d(r31)
	beq      lbl_801986BC
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r30, 0x6c
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_801986BC
	li       r29, 1

lbl_801986BC:
	clrlwi.  r0, r29, 0x18
	bne      lbl_801986D8
	addi     r3, r30, 0x34
	addi     r5, r30, 0x48
	li       r4, 0x316
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801986D8:
	li       r0, 0
	stw      r0, 0x34(r31)
	lwz      r0, 4(r28)
	stw      r0, 0x30(r31)
	lwz      r3, 0x18(r28)
	neg      r0, r3
	andc     r0, r0, r3
	srwi     r0, r0, 0x1f
	stb      r0, 0x3c(r31)
	lbz      r0, 0x3c(r31)
	cmplwi   r0, 0
	beq      lbl_8019872C
	lwz      r3, 0x18(r28)
	lis      r0, 0x4330
	stw      r0, 0x18(r1)
	xoris    r0, r3, 0x8000
	lfd      f1, lbl_80518FA8@sda21(r2)
	stw      r0, 0x1c(r1)
	lfd      f0, 0x18(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0x38(r31)

lbl_8019872C:
	li       r0, 0
	lfs      f0, lbl_80518F60@sda21(r2)
	stw      r0, 0x20(r31)
	mr       r3, r31
	li       r4, 1
	stfs     f0, 0xb0(r31)
	stfs     f0, 0xb4(r31)
	stfs     f0, 0xb8(r31)
	bl       initPathfinding__Q26PikiAI11ActPathMoveFb
	li       r0, 1
	addi     r3, r1, 8
	stb      r0, 0x6c(r31)
	lwz      r4, 0x30(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	stfs     f0, 0x10(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x14(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x18(r31)
	lwz      r3, 0x30(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801987F0
	lwz      r3, 0x30(r31)
	lis      r4, "zero__10Vector3<f>"@ha
	addi     r4, r4, "zero__10Vector3<f>"@l
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518F60@sda21(r2)
	mr       r3, r29
	stfs     f0, 0x1c8(r29)
	stfs     f0, 0x1cc(r29)
	stfs     f0, 0x1d0(r29)
	bl       getSpeicalSlot__Q24Game6PelletFv
	extsh    r0, r3
	cmpwi    r0, -1
	bne      lbl_801987F0
	lwz      r3, 0x334(r29)
	bl       reset__Q24Game11PelletCarryFv

lbl_801987F0:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x80198810
 * @note Size: 0x3AC
 */
void ActPathMove::initPathfinding(bool resetLinkCount)
{
	if (resetLinkCount) {
		mLinks->mCount = 0;
	}

	if (mPellet->isPellet()) {
		Game::Pellet* pellet = mPellet;
		mPellet->setVelocity(Vector3f::zero);
		pellet->mRigid.mConfigs[0].mForce = Vector3f(0.0f);
		s16 slot                          = pellet->getSpeicalSlot();
		if (slot == -1) {
			pellet->mPelletCarry->reset();
		}
	}

	Vector3f pelletPos = mPellet->getPosition();
	Game::WPEdgeSearchArg searchArg(pelletPos);
	s16 roomIndex    = mParent->mRoomIndex;
	Vector3f* posPtr = &pelletPos; // required to make pelletPos go on stack properly smh
	if (Game::gameSystem->mIsInCave) {
		Sys::Sphere sphere;
		sphere.mPosition = pelletPos;
		sphere.mRadius   = 1.0f;
		if (mPellet->isPellet()) {
			sphere.mRadius = 1.0f;
		}

		roomIndex = static_cast<Game::RoomMapMgr*>(Game::mapMgr)->findRoomIndex(sphere);
	}

	searchArg.mRoomID = roomIndex;
	searchArg.mLinks  = mLinks;

	if (mPellet->inWater()) {
		searchArg.mInWater = true;
	}

	Game::WayPoint* startWP = nullptr;
	if (Game::mapMgr->mRouteMgr->getNearestEdge(searchArg)) {
		if (!searchArg.mWp1->isFlag(Game::WPF_Closed)) {
			startWP = searchArg.mWp1;
		} else {
			startWP = searchArg.mWp2;
		}
	} else {
		searchArg.mLinks = nullptr;
		if (Game::mapMgr->mRouteMgr->getNearestEdge(searchArg)) {
			if (searchArg.mWp1->isFlag(Game::WPF_Closed)) {
				startWP = searchArg.mWp2;
			} else {
				startWP = searchArg.mWp1;
			}
		} else {
			JUT_PANICLINE(925, "zannen !\n");
		}
	}

	JUT_ASSERTLINE(929, startWP, "start==0");

	mStartWPIndex = startWP->mIndex;

	mPathFindWPIndex  = startWP->mIndex;
	Game::Onyon* goal = decideGoal();
	JUT_ASSERTLINE(937, goal, "newgoal == 0");

	if (goal && mPellet->isPellet()) {
		mPellet->setCarryColor(goal->mOnyonType);
	}

	if (goal != mOnyon) {
		mGoalWPIndex  = goal->mGoalWayPoint->mIndex;
		mGoalPosition = goal->getGoalPos();
		mOnyon        = goal;
		if (mContextHandle) {
			Game::testPathfinder->release(mContextHandle);
		}
		mState = PATHMOVE_Pathfinding;

		u8 flag = Game::PATHFLAG_RequireOpen;
		if (isAllBlue()) {
			flag |= Game::PATHFLAG_PathThroughWater;
		}

		flag |= Game::PATHFLAG_DisallowUnfinishedBridges;
		if (Game::gameSystem && Game::gameSystem->isVersusMode()) {
			if (mOnyon->mOnyonType == ONYON_TYPE_BLUE) {
				flag |= (Game::PATHFLAG_DisallowVsRed | Game::PATHFLAG_AllowUnvisited);
			} else {
				flag |= (Game::PATHFLAG_DisallowVsBlue | Game::PATHFLAG_AllowUnvisited);
			}
		}

		Game::PathfindRequest request(mPathFindWPIndex, mGoalWPIndex, flag);
		mContextHandle        = Game::testPathfinder->start(request);
		mStartPathFindCounter = 0;
		mPathFindCounter      = 0;
		mRootNode             = nullptr;
	}
}

/**
 * @note Address: 0x80198BBC
 * @note Size: 0x5C
 */
Game::Onyon* ActPathMove::decideGoal()
{
	P2ASSERTLINE(998, mPellet->mObjectTypeID == OBJTYPE_Pellet);
	return mPellet->getPelletGoal();
}

/**
 * @note Address: 0x80198C18
 * @note Size: 0x11C
 */
int ActPathMove::exec()
{
	// check if we can pick up the pellet
	if (!mIsPickedUp) {
		Game::Pellet* pellet = mPellet;
		if (pellet->mPelletCarry->pullable(Game::PCS_Carry, pellet->getTotalCarryPikmins())) {
			pellet->startPick();
			if (mContextHandle != 0) {
				Game::testPathfinder->release(mContextHandle);
				mContextHandle = 0;
			}
			mIsPickedUp = true;
			mOnyon      = nullptr;
			initPathfinding(true);
		}
		return ACTEXEC_Continue;
	}

	switch (mState) {
	case PATHMOVE_Pathfinding:
		return execPathfinding();

	case PATHMOVE_Move:
		return execMove();

	case PATHMOVE_MoveGoal:
		return execMoveGoal();

	case PATHMOVE_MoveGuru:
		return execMoveGuru();

	default:
		return ACTEXEC_Continue;
	}
}

/**
 * @note Address: 0x80198D34
 * @note Size: 0x2B0
 */
int ActPathMove::execPathfinding()
{
	Game::Pellet* pellet = mPellet;
	if (pellet) {
		// RESET PELLET CARRY SPEED
		pellet->mPelletCarry->pull(Game::PCS_Carry, Vector3f::zero, pellet->getTotalCarryPikmins());
	}

	// no context handle!
	if (mContextHandle == 0) {
		return ACTEXEC_Fail;
	}

	// NULL context handle! (!)
	if (mContextHandle == -1) {
		return ACTEXEC_Fail;
	}

	// keep track of how long we've been pathfinding for
	mPathFindCounter++;

	// god i hope we're a pellet
	if (mPellet->isPellet()) {
		pellet = mPellet;

		// if we've been picked up, don't move while we pathfind
		if (pellet->isPicked()) {
			mPellet->setVelocity(Vector3f::zero);
			pellet->mRigid.mConfigs->mForce = Vector3f(0.0f);
			if ((s16)pellet->getSpeicalSlot() == -1) {
				pellet->mPelletCarry->reset();
			}
		}
	}

	// see how pathfinding is going
	switch (Game::testPathfinder->check(mContextHandle)) {
	case Game::PATHFIND_MakePath: // ready to make the path!

		// get how many waypoints we have in our path
		mWayPointCount = Game::testPathfinder->makepath(mContextHandle, &mStartNode);

		// set nodes and get ready to MOVE
		mRootNode = mStartNode;
		mState    = PATHMOVE_Move;

		// initialize spline system
		crInit();

		// debug
		Game::PathNode* startNode = mStartNode;
		s16 endIdx                = -1;
		FOREACH_NODE(Game::PathNode, startNode, node) { endIdx = node->mWpIndex; }
		char buf[256];
		sprintf(buf, "%d->%d->...->%d", startNode->mWpIndex, (startNode->mNext) ? (char*)startNode->mNext->mWpIndex : "...", endIdx);
		return ACTEXEC_Continue;

	case Game::PATHFIND_Start: // make a new context and start a path
		if (mContextHandle) {
			Game::testPathfinder->release(mContextHandle);
		}

		u8 flag = (Game::PATHFLAG_PathThroughWater | Game::PATHFLAG_DisallowUnfinishedBridges);
		mStartPathFindCounter++;
		mState = PATHMOVE_Pathfinding;
		if (Game::gameSystem && Game::gameSystem->isVersusMode()) {
			flag |= Game::PATHFLAG_AllowUnvisited;
		}
		if (mStartPathFindCounter >= 2) {
			flag |= Game::PATHFLAG_AllowUnvisited; // hm
			if (mStartPathFindCounter >= 3) {
				mStartPathFindCounter = 3;
			}
		}

		Game::PathfindRequest request(mPathFindWPIndex, mGoalWPIndex, flag);

		// get a new handle
		mContextHandle = Game::testPathfinder->start(request);

		// reset our counter bc we have a new context!
		mPathFindCounter = 0;
		return ACTEXEC_Continue;

	case Game::PATHFIND_Busy: // keep on keepin' on
		break;

	case Game::PATHFIND_NoHandle: // woops something happened to the handle
		JUT_PANICLINE(1201, "no handle %d\n", mContextHandle);
		break;
	}

	return ACTEXEC_Continue;
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stw      r31, 0x12c(r1)
	stw      r30, 0x128(r1)
	mr       r30, r3
	lis      r3, lbl_8047F070@ha
	stw      r29, 0x124(r1)
	addi     r31, r3, lbl_8047F070@l
	lwz      r29, 0x30(r30)
	cmplwi   r29, 0
	beq      lbl_80198D9C
	mr       r3, r29
	bl       getTotalCarryPikmins__Q24Game6PelletFv
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x114(r1)
	lis      r3, "zero__10Vector3<f>"@ha
	addi     r5, r3, "zero__10Vector3<f>"@l
	lfd      f1, lbl_80518FA8@sda21(r2)
	stw      r0, 0x110(r1)
	li       r4, 0
	lwz      r3, 0x334(r29)
	lfd      f0, 0x110(r1)
	fsubs    f1, f0, f1
	bl       "pull__Q24Game11PelletCarryFUsR10Vector3<f>f"

lbl_80198D9C:
	lwz      r3, 0x20(r30)
	cmplwi   r3, 0
	bne      lbl_80198DB0
	li       r3, 2
	b        lbl_80198FC8

lbl_80198DB0:
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_80198DC4
	li       r3, 2
	b        lbl_80198FC8

lbl_80198DC4:
	lwz      r3, 0x40(r30)
	addi     r0, r3, 1
	stw      r0, 0x40(r30)
	lwz      r3, 0x30(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80198E54
	lwz      r29, 0x30(r30)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80198E54
	lwz      r3, 0x30(r30)
	lis      r4, "zero__10Vector3<f>"@ha
	addi     r4, r4, "zero__10Vector3<f>"@l
	lwz      r12, 0(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518F60@sda21(r2)
	mr       r3, r29
	stfs     f0, 0x1c8(r29)
	stfs     f0, 0x1cc(r29)
	stfs     f0, 0x1d0(r29)
	bl       getSpeicalSlot__Q24Game6PelletFv
	extsh    r0, r3
	cmpwi    r0, -1
	bne      lbl_80198E54
	lwz      r3, 0x334(r29)
	bl       reset__Q24Game11PelletCarryFv

lbl_80198E54:
	lwz      r3, testPathfinder__4Game@sda21(r13)
	lwz      r4, 0x20(r30)
	bl       check__Q24Game10PathfinderFUl
	cmpwi    r3, 2
	beq      lbl_80198FC4
	bge      lbl_80198E7C
	cmpwi    r3, 0
	beq      lbl_80198E88
	bge      lbl_80198F08
	b        lbl_80198FC4

lbl_80198E7C:
	cmpwi    r3, 4
	bge      lbl_80198FC4
	b        lbl_80198FAC

lbl_80198E88:
	lwz      r3, testPathfinder__4Game@sda21(r13)
	addi     r5, r30, 0x44
	lwz      r4, 0x20(r30)
	bl       makepath__Q24Game10PathfinderFUlPPQ24Game8PathNode
	stw      r3, 0x4c(r30)
	li       r0, 1
	mr       r3, r30
	lwz      r4, 0x44(r30)
	stw      r4, 0x48(r30)
	sth      r0, 0x1e(r30)
	bl       crInit__Q26PikiAI11ActPathMoveFv
	lwz      r3, 0x44(r30)
	li       r7, -1
	mr       r4, r3
	b        lbl_80198ECC

lbl_80198EC4:
	lha      r7, 0x20(r4)
	lwz      r4, 0xc(r4)

lbl_80198ECC:
	cmplwi   r4, 0
	bne      lbl_80198EC4
	lwz      r4, 0xc(r3)
	cmplwi   r4, 0
	beq      lbl_80198EE8
	lha      r6, 0x20(r4)
	b        lbl_80198EEC

lbl_80198EE8:
	addi     r6, r2, lbl_80518FB0@sda21

lbl_80198EEC:
	lha      r5, 0x20(r3)
	addi     r3, r1, 0x10
	addi     r4, r31, 0xa0
	crclr    6
	bl       sprintf
	li       r3, 1
	b        lbl_80198FC8

lbl_80198F08:
	lwz      r4, 0x20(r30)
	cmplwi   r4, 0
	beq      lbl_80198F1C
	lwz      r3, testPathfinder__4Game@sda21(r13)
	bl       release__Q24Game10PathfinderFUl

lbl_80198F1C:
	lwz      r3, 0x50(r30)
	li       r0, 0
	li       r6, 6
	addi     r3, r3, 1
	stw      r3, 0x50(r30)
	sth      r0, 0x1e(r30)
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80198F54
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_80198F54
	ori      r0, r6, 0x40
	clrlwi   r6, r0, 0x18

lbl_80198F54:
	lwz      r0, 0x50(r30)
	cmpwi    r0, 2
	blt      lbl_80198F78
	cmpwi    r0, 3
	ori      r0, r6, 0x40
	clrlwi   r6, r0, 0x18
	blt      lbl_80198F78
	li       r0, 3
	stw      r0, 0x50(r30)

lbl_80198F78:
	lha      r5, 0x56(r30)
	addi     r4, r1, 8
	lha      r0, 0x54(r30)
	lwz      r3, testPathfinder__4Game@sda21(r13)
	sth      r0, 8(r1)
	sth      r5, 0xa(r1)
	stb      r6, 0xc(r1)
	bl       start__Q24Game10PathfinderFRQ24Game15PathfindRequest
	stw      r3, 0x20(r30)
	li       r0, 0
	li       r3, 1
	stw      r0, 0x40(r30)
	b        lbl_80198FC8

lbl_80198FAC:
	lwz      r6, 0x20(r30)
	addi     r3, r31, 0x34
	addi     r5, r31, 0xb0
	li       r4, 0x4b1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80198FC4:
	li       r3, 1

lbl_80198FC8:
	lwz      r0, 0x134(r1)
	lwz      r31, 0x12c(r1)
	lwz      r30, 0x128(r1)
	lwz      r29, 0x124(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x1AC
 */
f32 ActPathMove::getCarrySpeed()
{
	f32 carryPower;
	f32 maxFactor = static_cast<Game::PikiParms*>(mParent->mParms)->mPikiParms.mCarryMaxFactor.mValue; // f30
	f32 minFactor = static_cast<Game::PikiParms*>(mParent->mParms)->mPikiParms.mCarryMinFactor.mValue; // f31

	P2ASSERTLINE(1215, mPellet->mObjectTypeID == OBJTYPE_Pellet);

	Game::Pellet* pellet = mPellet;
	// if we're carrying a captain, go at FULL SPEED
	if (pellet->mPelletView && pellet->mPelletView->mCreature->isNavi()) {
		return static_cast<Game::PikiParms*>(mParent->mParms)->mPikiParms.mRunSpeed();

		// if we're carrying a cherry in VS mode, go at FULL SPEED
	} else if (Game::gameSystem->isVersusMode() && pellet->mPelletFlag == Game::Pellet::FLAG_VS_CHERRY) {
		return static_cast<Game::PikiParms*>(mParent->mParms)->mPikiParms.mRunSpeed();
	}

	f32 maxSpeed = static_cast<Game::PikiParms*>(mParent->mParms)->mPikiParms.mRunSpeed.mValue * maxFactor;
	f32 minSpeed = static_cast<Game::PikiParms*>(mParent->mParms)->mPikiParms.mRunSpeed.mValue * minFactor;

	int min = pellet->getPelletConfigMin();
	int max = pellet->getPelletConfigMax();

	carryPower = pellet->mCarryPower;
	JUT_ASSERTLINE(1248, max, "max is 0 [%s]\n", pellet->mConfig->mParams.mName.mData);

	return minSpeed + (((1.0f + carryPower) - (f32)min) / (f32)max) * (maxSpeed - minSpeed);
}

/**
 * @note Address: 0x80198FE4
 * @note Size: 0x6A8
 */
int ActPathMove::execMoveGoal()
{
	Vector3f pelletPos = mPellet->getPosition();
	Vector3f dir       = mGoalPosition - pelletPos;
	f32 sqrDistXZ      = dir.x * dir.x + dir.z * dir.z;
	f32 dist           = dir.normalise();
	if (dist == 0.0f) {
		dir = Vector3f(0.0f);
	}

	// if we're within 10 units of goal (horizontally), WE CAN LET GO
	if (sqrDistXZ < 100.0f) {
		{ // this is so `stickers` gets deleted after the loop

			// make all pikis carrying pellet movie extras
			Game::Stickers stickers(mPellet);
			Iterator<Game::Creature> iter(&stickers);
			CI_LOOP(iter) { (*iter)->movie_begin(false); }
		}

		// stop carrying the pellet
		mParent->finishMotion();
		mParent->endStick();

		{
			// make sure everyone ELSE stops carrying the pellet
			Game::Stickers stickers(mPellet);
			Iterator<Game::Creature> iter(&stickers);
			CI_LOOP(iter)
			{
				Game::Creature* stuck = *iter;
				if (stuck->isPiki()) {
					stuck->endStick();
				}
			}

			return ACTEXEC_Success;
		}
	}

	// we're not close enough, move a bit more
	f32 speed = getCarrySpeed();

	dir.y = 0.0f;
	dir *= speed;
	carry(dir);
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x8019968C
 * @note Size: 0x9C
 */
bool ActPathMove::isAllBlue()
{
	P2ASSERTLINE(1325, mPellet->mObjectTypeID == OBJTYPE_Pellet);
	Game::Pellet* pellet = mPellet;
	// if all carrying pikmin are blues or bulbmin, return true (we can go through water!)
	if (pellet->getPikmins(Game::Blue) + pellet->getPikmins(Game::Bulbmin) == pellet->getTotalPikmins()) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x80199728
 * @note Size: 0xA8
 */
void ActPathMove::carry(Vector3f& velocity)
{
	Game::Pellet* pellet = mPellet;

	// MOVE THE PELLET
	bool pullResult = pellet->mPelletCarry->pull(Game::PCS_Carry, velocity, pellet->getTotalCarryPikmins());

	if (mIsPickedUp && !pullResult) {
		// we can no longer pick up pellet - drop it.
		mIsPickedUp = false;
		pellet->endPick(false);
	}
}

/**
 * @note Address: 0x801997D0
 * @note Size: 0x428
 */
int ActPathMove::execMove()
{
	f32 speed = getCarrySpeed();
	crMove();
	mNewVelocity.y = 0.0f;
	mNewVelocity.normalise();
	mNewVelocity *= speed;

	Game::Pellet* pellet = mPellet;

	// MOVE THE PELLET
	bool pullCheck = pellet->mPelletCarry->pull(Game::PCS_Carry, mNewVelocity, pellet->getTotalCarryPikmins());

	// we can no longer pick up pellet - drop it.
	if (mIsPickedUp && !pullCheck) {
		mIsPickedUp = false;
		pellet->endPick(false);
	}

	if (mPellet->isPellet()) {
		pellet             = mPellet;
		Vector3f pelletPos = pellet->getPosition();
		f32 dist           = pelletPos.distance(mPrevPosition); // f30
		mPrevPosition      = pelletPos;
		if (pellet->getWallTimer() > 99 && dist < 1.0f) {
			pellet->mWallTimer = 0;
			mOnyon             = nullptr;
			if (mContextHandle) {
				Game::testPathfinder->release(mContextHandle);
				mContextHandle = 0;
			}

			mLinks->mCount       = 0;
			WayPointLinks* links = mLinks;
			s16 idx              = mStartWPIndex;
			if (!links->addLink(idx)) {
				// if link didn't add, try EXTRA hard to add the link (literally does the same thing again lmao).
				mLinks->mCount          = 0;
				WayPointLinks* newLinks = mLinks;
				s16 newIdx              = mStartWPIndex;
				newLinks->addLink(newIdx);
			}

			initPathfinding(false);
		}
	}

	return ACTEXEC_Continue;
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stmw     r27, 0x2c(r1)
	mr       r31, r3
	lis      r4, lbl_8047F070@ha
	lwz      r3, 0x30(r3)
	addi     r28, r4, lbl_8047F070@l
	lwz      r4, 4(r31)
	lhz      r0, 0x128(r3)
	lwz      r3, 0xc0(r4)
	cmplwi   r0, 0x401
	lfs      f30, 0x1100(r3)
	lfs      f31, 0x1128(r3)
	beq      lbl_80199838
	addi     r3, r28, 0x34
	addi     r5, r28, 0x48
	li       r4, 0x4bf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80199838:
	lwz      r27, 0x30(r31)
	lwz      r3, 0x358(r27)
	cmplwi   r3, 0
	beq      lbl_80199874
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80199874
	lwz      r3, 4(r31)
	lwz      r3, 0xc0(r3)
	lfs      f31, 0x2c8(r3)
	b        lbl_80199938

lbl_80199874:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_801998A0
	lbz      r0, 0x32c(r27)
	cmplwi   r0, 3
	bne      lbl_801998A0
	lwz      r3, 4(r31)
	lwz      r3, 0xc0(r3)
	lfs      f31, 0x2c8(r3)
	b        lbl_80199938

lbl_801998A0:
	lwz      r4, 4(r31)
	mr       r3, r27
	lwz      r4, 0xc0(r4)
	lfs      f0, 0x2c8(r4)
	fmuls    f30, f0, f30
	fmuls    f31, f0, f31
	bl       getPelletConfigMin__Q24Game6PelletFv
	mr       r29, r3
	mr       r3, r27
	bl       getPelletConfigMax__Q24Game6PelletFv
	or.      r30, r3, r3
	lfs      f29, 0x418(r27)
	bne      lbl_801998F0
	lwz      r6, 0x35c(r27)
	addi     r3, r28, 0x34
	addi     r5, r28, 0xc0
	li       r4, 0x4e0
	lwz      r6, 0x40(r6)
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801998F0:
	lis      r3, 0x4330
	xoris    r0, r29, 0x8000
	stw      r0, 0x1c(r1)
	xoris    r0, r30, 0x8000
	lfs      f1, lbl_80518F64@sda21(r2)
	fsubs    f0, f30, f31
	stw      r3, 0x18(r1)
	lfd      f3, lbl_80518FA8@sda21(r2)
	fadds    f4, f1, f29
	lfd      f1, 0x18(r1)
	stw      r0, 0x24(r1)
	fsubs    f2, f1, f3
	stw      r3, 0x20(r1)
	lfd      f1, 0x20(r1)
	fsubs    f2, f4, f2
	fsubs    f1, f1, f3
	fdivs    f1, f2, f1
	fmadds   f31, f1, f0, f31

lbl_80199938:
	mr       r3, r31
	bl       crMove__Q26PikiAI11ActPathMoveFv
	lfs      f1, lbl_80518F60@sda21(r2)
	stfs     f1, 0xb4(r31)
	lfs      f3, 0xb0(r31)
	lfs      f2, 0xb4(r31)
	fmuls    f0, f3, f3
	lfs      f4, 0xb8(r31)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019998C
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80199990
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80199990

lbl_8019998C:
	fmr      f2, f1

lbl_80199990:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_801999C8
	lfs      f1, lbl_80518F64@sda21(r2)
	lfs      f0, 0xb0(r31)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0xb0(r31)
	lfs      f0, 0xb4(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb4(r31)
	lfs      f0, 0xb8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb8(r31)

lbl_801999C8:
	lfs      f0, 0xb0(r31)
	fmuls    f0, f0, f31
	stfs     f0, 0xb0(r31)
	lfs      f0, 0xb4(r31)
	fmuls    f0, f0, f31
	stfs     f0, 0xb4(r31)
	lfs      f0, 0xb8(r31)
	fmuls    f0, f0, f31
	stfs     f0, 0xb8(r31)
	lwz      r27, 0x30(r31)
	mr       r3, r27
	bl       getTotalCarryPikmins__Q24Game6PelletFv
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	addi     r5, r31, 0xb0
	lfd      f1, lbl_80518FA8@sda21(r2)
	li       r4, 0
	stw      r0, 0x20(r1)
	lwz      r3, 0x334(r27)
	lfd      f0, 0x20(r1)
	fsubs    f1, f0, f1
	bl       "pull__Q24Game11PelletCarryFUsR10Vector3<f>f"
	lbz      r0, 0x6c(r31)
	cmplwi   r0, 0
	beq      lbl_80199A58
	clrlwi.  r0, r3, 0x18
	bne      lbl_80199A58
	li       r0, 0
	mr       r3, r27
	stb      r0, 0x6c(r31)
	li       r4, 0
	lwz      r12, 0(r27)
	lwz      r12, 0x14c(r12)
	mtctr    r12
	bctrl

lbl_80199A58:
	lwz      r3, 0x30(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80199BC8
	lwz      r27, 0x30(r31)
	addi     r3, r1, 8
	mr       r4, r27
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0xc(r1)
	lfs      f0, 0x14(r31)
	lfs      f5, 8(r1)
	fsubs    f2, f3, f0
	lfs      f1, 0x10(r31)
	lfs      f4, 0x10(r1)
	lfs      f0, 0x18(r31)
	fsubs    f1, f5, f1
	fmuls    f6, f2, f2
	fsubs    f2, f4, f0
	lfs      f0, lbl_80518F60@sda21(r2)
	fmadds   f1, f1, f1, f6
	fmuls    f2, f2, f2
	fadds    f30, f2, f1
	fcmpo    cr0, f30, f0
	ble      lbl_80199AE0
	ble      lbl_80199AE4
	frsqrte  f0, f30
	fmuls    f30, f0, f30
	b        lbl_80199AE4

lbl_80199AE0:
	fmr      f30, f0

lbl_80199AE4:
	stfs     f5, 0x10(r31)
	mr       r3, r27
	stfs     f3, 0x14(r31)
	stfs     f4, 0x18(r31)
	bl       getWallTimer__Q24Game6PelletFv
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 0x63
	ble      lbl_80199BC8
	lfs      f0, lbl_80518F64@sda21(r2)
	fcmpo    cr0, f30, f0
	bge      lbl_80199BC8
	li       r0, 0
	stb      r0, 0x3bc(r27)
	stw      r0, 0x34(r31)
	lwz      r4, 0x20(r31)
	cmplwi   r4, 0
	beq      lbl_80199B38
	lwz      r3, testPathfinder__4Game@sda21(r13)
	bl       release__Q24Game10PathfinderFUl
	li       r0, 0
	stw      r0, 0x20(r31)

lbl_80199B38:
	lwz      r3, 0xc(r31)
	li       r0, 0
	sth      r0, 8(r3)
	lha      r6, 0x1c(r31)
	lwz      r5, 0xc(r31)
	cmpwi    r6, -1
	beq      lbl_80199B78
	lha      r4, 8(r5)
	cmpwi    r4, 4
	bge      lbl_80199B78
	addi     r3, r4, 1
	slwi     r0, r4, 1
	sth      r3, 8(r5)
	li       r3, 1
	sthx     r6, r5, r0
	b        lbl_80199B7C

lbl_80199B78:
	li       r3, 0

lbl_80199B7C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80199BBC
	lwz      r3, 0xc(r31)
	li       r0, 0
	sth      r0, 8(r3)
	lha      r6, 0x1c(r31)
	lwz      r5, 0xc(r31)
	cmpwi    r6, -1
	beq      lbl_80199BBC
	lha      r4, 8(r5)
	cmpwi    r4, 4
	bge      lbl_80199BBC
	addi     r3, r4, 1
	slwi     r0, r4, 1
	sth      r3, 8(r5)
	sthx     r6, r5, r0

lbl_80199BBC:
	mr       r3, r31
	li       r4, 0
	bl       initPathfinding__Q26PikiAI11ActPathMoveFb

lbl_80199BC8:
	li       r3, 1
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/**
 * @note Address: 0x80199BF8
 * @note Size: 0x90
 */
void ActPathMove::cleanup()
{
	if (mPellet->isPellet()) {
		Game::Pellet* pellet = mPellet;
		if (pellet->isPicked()) {
			pellet->mPelletCarry->reset();
		}
	}
	if (mContextHandle != 0) {
		Game::testPathfinder->release(mContextHandle);
	}
	mContextHandle = 0;
}

/**
 * @note Address: 0x80199C88
 * @note Size: 0x4E8
 */
int ActPathMove::execMoveGuru()
{
	if (!mNextWayPoint->isFlag(Game::WPF_Closed)) {
		mState = PATHMOVE_Move;
		return ACTEXEC_Continue;
	}

	int wpId = mCurrGraphIdx;
	Vector3f moveVec;
	if (wpId >= 0) {
		Game::WayPoint* wp = getWayPoint(wpId);
		Vector3f wpPos     = wp->mPosition;
		Vector3f sep       = mNextWayPoint->mPosition - wpPos;
		f32 dist           = sep.normalise() - 160.0f;
		if (dist < 0.0f) {
			dist = 0.0f;
		}

		moveVec = wp->mPosition + sep * dist;

	} else {
		moveVec = mPacePosition;
	}

	// is this what makes treasures go in circles??
	mPaceAngle += PI * sys->mDeltaTime;
	if (mPaceAngle > TAU) {
		mPaceAngle -= TAU;
	}

	Vector3f dir = getDirection(mPaceAngle);
	dir *= 10.0f;
	Vector3f pullDir = dir + moveVec;

	Vector3f pelletPos = mPellet->getPosition();
	pullDir -= pelletPos;
	pullDir.y = 0.0f;
	f32 dist  = pullDir.normalise();

	if (dist == 0.0f) {
		pullDir = Vector3f(0.0f);
	}

	f32 carrySpeed = getCarrySpeed();

	pullDir *= carrySpeed / 2;

	Game::Pellet* pellet = mPellet;

	// MOVE THE PELLET
	bool pullCheck = pellet->mPelletCarry->pull(Game::PCS_Carry, pullDir, pellet->getTotalCarryPikmins());

	// we can no longer pick up pellet - drop it.
	if (mIsPickedUp && !pullCheck) {
		mIsPickedUp = false;
		pellet->endPick(false);
	}

	return ACTEXEC_Continue;
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stmw     r27, 0x3c(r1)
	lwz      r4, 0x64(r3)
	lis      r5, lbl_8047F070@ha
	mr       r30, r3
	lbz      r0, 0x34(r4)
	addi     r31, r5, lbl_8047F070@l
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80199CDC
	li       r0, 1
	li       r3, 1
	sth      r0, 0x1e(r30)
	b        lbl_8019A144

lbl_80199CDC:
	lwz      r4, 0x70(r30)
	cmpwi    r4, 0
	blt      lbl_80199DA0
	bl       getWayPoint__Q26PikiAI11ActPathMoveFi
	lwz      r4, 0x64(r30)
	lfs      f7, 0x50(r3)
	lfs      f0, 0x50(r4)
	lfs      f1, 0x54(r4)
	fsubs    f4, f0, f7
	lfs      f6, 0x54(r3)
	lfs      f0, 0x4c(r4)
	lfs      f8, 0x4c(r3)
	fsubs    f5, f1, f6
	fmuls    f1, f4, f4
	fsubs    f3, f0, f8
	lfs      f0, lbl_80518F60@sda21(r2)
	fmuls    f2, f5, f5
	fmadds   f1, f3, f3, f1
	fadds    f2, f2, f1
	fcmpo    cr0, f2, f0
	ble      lbl_80199D40
	ble      lbl_80199D44
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80199D44

lbl_80199D40:
	fmr      f2, f0

lbl_80199D44:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80199D68
	lfs      f0, lbl_80518F64@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0
	fmuls    f5, f5, f0
	b        lbl_80199D6C

lbl_80199D68:
	fmr      f2, f0

lbl_80199D6C:
	lfs      f1, lbl_80518FB4@sda21(r2)
	lfs      f0, lbl_80518F60@sda21(r2)
	fsubs    f9, f2, f1
	fcmpo    cr0, f9, f0
	bge      lbl_80199D84
	fmr      f9, f0

lbl_80199D84:
	fmuls    f2, f3, f9
	fmuls    f1, f4, f9
	fmuls    f0, f5, f9
	fadds    f4, f8, f2
	fadds    f5, f7, f1
	fadds    f6, f6, f0
	b        lbl_80199DAC

lbl_80199DA0:
	lfs      f4, 0x58(r30)
	lfs      f5, 0x5c(r30)
	lfs      f6, 0x60(r30)

lbl_80199DAC:
	lwz      r3, sys@sda21(r13)
	lfs      f3, lbl_80518F94@sda21(r2)
	lfs      f2, 0x54(r3)
	lfs      f1, 0x68(r30)
	lfs      f0, lbl_80518FB8@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x68(r30)
	lfs      f1, 0x68(r30)
	fcmpo    cr0, f1, f0
	ble      lbl_80199DDC
	fsubs    f0, f1, f0
	stfs     f0, 0x68(r30)

lbl_80199DDC:
	lfs      f3, 0x68(r30)
	lfs      f0, lbl_80518F60@sda21(r2)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_80199DF4
	fneg     f1, f3

lbl_80199DF4:
	lfs      f2, lbl_80518FBC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80518F60@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f1, 4(r3)
	bge      lbl_80199E4C
	lfs      f0, lbl_80518FC0@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f2, f0
	b        lbl_80199E64

lbl_80199E4C:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r4, r0

lbl_80199E64:
	lfs      f0, lbl_80518F80@sda21(r2)
	addi     r3, r1, 8
	lfs      f3, lbl_80518F60@sda21(r2)
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f0, f1, f0
	fadds    f2, f2, f4
	fadds    f3, f3, f5
	fadds    f0, f0, f6
	stfs     f2, 0x14(r1)
	stfs     f3, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r4, 0x30(r30)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	lfs      f0, 8(r1)
	lfs      f1, lbl_80518F60@sda21(r2)
	fsubs    f2, f2, f0
	lfs      f3, 0x1c(r1)
	lfs      f0, 0x10(r1)
	fmuls    f6, f1, f1
	lfs      f4, 0x18(r1)
	fsubs    f5, f3, f0
	fmuls    f0, f2, f2
	lfs      f3, 0xc(r1)
	stfs     f2, 0x14(r1)
	fmuls    f7, f5, f5
	fadds    f0, f0, f6
	stfs     f5, 0x1c(r1)
	fsubs    f3, f4, f3
	fadds    f0, f7, f0
	stfs     f3, 0x18(r1)
	fcmpo    cr0, f0, f1
	stfs     f1, 0x18(r1)
	ble      lbl_80199F18
	fmadds   f0, f2, f2, f6
	fadds    f4, f7, f0
	fcmpo    cr0, f4, f1
	ble      lbl_80199F1C
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_80199F1C

lbl_80199F18:
	fmr      f4, f1

lbl_80199F1C:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_80199F58
	lfs      f0, lbl_80518F64@sda21(r2)
	lfs      f2, 0x14(r1)
	fdivs    f3, f0, f4
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	b        lbl_80199F5C

lbl_80199F58:
	fmr      f4, f0

lbl_80199F5C:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpu    cr0, f0, f4
	bne      lbl_80199F74
	stfs     f0, 0x14(r1)
	stfs     f0, 0x18(r1)
	stfs     f0, 0x1c(r1)

lbl_80199F74:
	lwz      r3, 0x30(r30)
	lwz      r4, 4(r30)
	lhz      r0, 0x128(r3)
	lwz      r3, 0xc0(r4)
	cmplwi   r0, 0x401
	lfs      f30, 0x1100(r3)
	lfs      f31, 0x1128(r3)
	beq      lbl_80199FA8
	addi     r3, r31, 0x34
	addi     r5, r31, 0x48
	li       r4, 0x4bf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80199FA8:
	lwz      r27, 0x30(r30)
	lwz      r3, 0x358(r27)
	cmplwi   r3, 0
	beq      lbl_80199FE4
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80199FE4
	lwz      r3, 4(r30)
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x2c8(r3)
	b        lbl_8019A0A8

lbl_80199FE4:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_8019A010
	lbz      r0, 0x32c(r27)
	cmplwi   r0, 3
	bne      lbl_8019A010
	lwz      r3, 4(r30)
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x2c8(r3)
	b        lbl_8019A0A8

lbl_8019A010:
	lwz      r4, 4(r30)
	mr       r3, r27
	lwz      r4, 0xc0(r4)
	lfs      f0, 0x2c8(r4)
	fmuls    f30, f0, f30
	fmuls    f31, f0, f31
	bl       getPelletConfigMin__Q24Game6PelletFv
	mr       r28, r3
	mr       r3, r27
	bl       getPelletConfigMax__Q24Game6PelletFv
	or.      r29, r3, r3
	lfs      f29, 0x418(r27)
	bne      lbl_8019A060
	lwz      r6, 0x35c(r27)
	addi     r3, r31, 0x34
	addi     r5, r31, 0xc0
	li       r4, 0x4e0
	lwz      r6, 0x40(r6)
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019A060:
	lis      r3, 0x4330
	xoris    r0, r28, 0x8000
	stw      r0, 0x34(r1)
	xoris    r0, r29, 0x8000
	lfs      f1, lbl_80518F64@sda21(r2)
	fsubs    f0, f30, f31
	stw      r3, 0x30(r1)
	lfd      f3, lbl_80518FA8@sda21(r2)
	fadds    f4, f1, f29
	lfd      f1, 0x30(r1)
	stw      r0, 0x2c(r1)
	fsubs    f2, f1, f3
	stw      r3, 0x28(r1)
	lfd      f1, 0x28(r1)
	fsubs    f2, f4, f2
	fsubs    f1, f1, f3
	fdivs    f1, f2, f1
	fmadds   f1, f1, f0, f31

lbl_8019A0A8:
	lfs      f0, lbl_80518F78@sda21(r2)
	lfs      f2, 0x14(r1)
	fmuls    f3, f1, f0
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r27, 0x30(r30)
	mr       r3, r27
	bl       getTotalCarryPikmins__Q24Game6PelletFv
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x34(r1)
	addi     r5, r1, 0x14
	lfd      f1, lbl_80518FA8@sda21(r2)
	li       r4, 0
	stw      r0, 0x30(r1)
	lwz      r3, 0x334(r27)
	lfd      f0, 0x30(r1)
	fsubs    f1, f0, f1
	bl       "pull__Q24Game11PelletCarryFUsR10Vector3<f>f"
	lbz      r0, 0x6c(r30)
	cmplwi   r0, 0
	beq      lbl_8019A140
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019A140
	li       r0, 0
	mr       r3, r27
	stb      r0, 0x6c(r30)
	li       r4, 0
	lwz      r12, 0(r27)
	lwz      r12, 0x14c(r12)
	mtctr    r12
	bctrl

lbl_8019A140:
	li       r3, 1

lbl_8019A144:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/**
 * @note Address: 0x8019A170
 * @note Size: 0xB8
 */
Game::WayPoint* ActPathMove::getWayPoint(int id)
{
	// count through the whole node graph so far til we get to our desired point
	Game::PathNode* node = mRootNode;
	for (int i = 0; i < id; i++) {
		node = node->mNext;
	}

	// assuming point exists, grab waypoint at this node
	if (node) {
		return Game::mapMgr->mRouteMgr->getWayPoint(node->mWpIndex);
	}

	// no node found
	return nullptr;
}

/**
 * @note Address: 0x8019A228
 * @note Size: 0x18C
 */
Vector3f ActPathMove::crGetPoint(int idx)
{
	Game::WayPoint* currWayPoint;
	if (idx < 0) {
		return mStartPosition;
	}

	if (idx >= mWayPointCount) {
		return mGoalPosition;
	}

	// breadbug crash happens in this inline.
	currWayPoint = getWayPoint(idx);

	if (!currWayPoint) {
		return Vector3f::zero;
	}

	Vector3f result = currWayPoint->mPosition;
	Vector3f diff   = result - mGoalPosition;
	diff.length(); // unused
	return result;
}

/**
 * @note Address: 0x8019A3B4
 * @note Size: 0x3C4
 */
bool ActPathMove::contextCheck(int idx)
{
	if (Game::gameSystem->isVersusMode()) {
		int nextIdx = idx + 1;
		if (nextIdx >= 0 && nextIdx < mWayPointCount) {
			Game::WayPoint* wp = getWayPoint(nextIdx);

			if (mOnyon->mOnyonType == ONYON_TYPE_BLUE) {
				if (wp->isFlag(Game::PATHFLAG_DisallowVsBlue)) {
					mVsWayPointCounter++;
					if (mVsWayPointCounter < 2) {
						return false;
					}
				} else {
					mVsWayPointCounter = 0;
				}
			} else if (wp->isFlag(Game::PATHFLAG_DisallowVsRed)) {
				mVsWayPointCounter++;
				if (mVsWayPointCounter < 2) {
					return false;
				}
			} else {
				mVsWayPointCounter = 0;
			}
		}
	}

	Vector3f pelletPos = mPellet->getPosition();
	Sys::Tube tube;           // 0x78
	Sys::Sphere pelletSphere; // 0x68
	pelletSphere.mPosition = pelletPos;
	if (mPellet->isPellet()) {
		pelletSphere.mRadius = mPellet->getBottomRadius();
	} else {
		mPellet->getBoundingSphere(pelletSphere);
	}

	if (idx < 0) {
		Vector3f point = crGetPoint(idx);
		crGetRadius(idx);

		Vector2f sep2D(point.x - pelletSphere.mPosition.x, point.z - pelletSphere.mPosition.z);
		if (sep2D.length() > 700.0f) {
			return false;
		}

		return true;
	}

	Vector3f point           = crGetPoint(idx);
	Vector3f nextPoint       = crGetPoint(idx + 1);
	f32 rad                  = crGetRadius(idx);
	f32 nextRad              = crGetRadius(idx + 1);
	pelletSphere.mPosition.y = 0.0f;
	tube.mStartPos           = Vector3f(point.x, 0.0f, point.z);
	tube.mEndPos             = Vector3f(nextPoint.x, 0.0f, nextPoint.z);
	tube.mStartRadius        = rad;
	tube.mEndRadius          = nextRad;

	Vector3f collVec;
	f32 collAmt;

	if (tube.collide(pelletSphere, collVec, collAmt)) {
		return true;
	}

	Sys::Sphere pointSphere;
	pointSphere.mPosition = Vector3f(point.x, 0.0f, point.z);
	pointSphere.mRadius   = rad;

	if (pointSphere.intersect(pelletSphere)) {
		return true;
	}

	Sys::Sphere nextPointSphere;
	nextPointSphere.mPosition = Vector3f(nextPoint.x, 0.0f, nextPoint.z);
	nextPointSphere.mRadius   = nextRad;

	return (nextPointSphere.intersect(pelletSphere) > 0);
	/*
	stwu     r1, -0x100(r1)
	mflr     r0
	stw      r0, 0x104(r1)
	stfd     f31, 0xf0(r1)
	psq_st   f31, 248(r1), 0, qr0
	stfd     f30, 0xe0(r1)
	psq_st   f30, 232(r1), 0, qr0
	stfd     f29, 0xd0(r1)
	psq_st   f29, 216(r1), 0, qr0
	stfd     f28, 0xc0(r1)
	psq_st   f28, 200(r1), 0, qr0
	stfd     f27, 0xb0(r1)
	psq_st   f27, 184(r1), 0, qr0
	stfd     f26, 0xa0(r1)
	psq_st   f26, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	lwz      r5, gameSystem__4Game@sda21(r13)
	mr       r30, r3
	mr       r31, r4
	lwz      r0, 0x44(r5)
	cmpwi    r0, 1
	bne      lbl_8019A53C
	addic.   r6, r31, 1
	blt      lbl_8019A53C
	lwz      r0, 0x4c(r30)
	cmpw     r6, r0
	bge      lbl_8019A53C
	cmpwi    r6, 0
	lwz      r5, 0x48(r30)
	li       r3, 0
	ble      lbl_8019A494
	cmpwi    r6, 8
	addi     r4, r6, -8
	ble      lbl_8019A47C
	addi     r0, r4, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r4, 0
	ble      lbl_8019A47C

lbl_8019A454:
	lwz      r4, 0xc(r5)
	addi     r3, r3, 8
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r5, 0xc(r4)
	bdnz     lbl_8019A454

lbl_8019A47C:
	subf     r0, r3, r6
	mtctr    r0
	cmpw     r3, r6
	bge      lbl_8019A494

lbl_8019A48C:
	lwz      r5, 0xc(r5)
	bdnz     lbl_8019A48C

lbl_8019A494:
	cmplwi   r5, 0
	beq      lbl_8019A4BC
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r5)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8019A4C0

lbl_8019A4BC:
	li       r3, 0

lbl_8019A4C0:
	lwz      r4, 0x34(r30)
	lhz      r0, 0x22e(r4)
	cmplwi   r0, 0
	bne      lbl_8019A508
	lbz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_8019A4FC
	lbz      r3, 0x3d(r30)
	addi     r0, r3, 1
	stb      r0, 0x3d(r30)
	lbz      r0, 0x3d(r30)
	cmplwi   r0, 2
	bge      lbl_8019A53C
	li       r3, 0
	b        lbl_8019A730

lbl_8019A4FC:
	li       r0, 0
	stb      r0, 0x3d(r30)
	b        lbl_8019A53C

lbl_8019A508:
	lbz      r0, 0x34(r3)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_8019A534
	lbz      r3, 0x3d(r30)
	addi     r0, r3, 1
	stb      r0, 0x3d(r30)
	lbz      r0, 0x3d(r30)
	cmplwi   r0, 2
	bge      lbl_8019A53C
	li       r3, 0
	b        lbl_8019A730

lbl_8019A534:
	li       r0, 0
	stb      r0, 0x3d(r30)

lbl_8019A53C:
	lwz      r4, 0x30(r30)
	addi     r3, r1, 0x30
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x30(r1)
	lfs      f1, 0x34(r1)
	lfs      f0, 0x38(r1)
	stfs     f2, 0x68(r1)
	stfs     f1, 0x6c(r1)
	stfs     f0, 0x70(r1)
	lwz      r3, 0x30(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019A598
	lwz      r3, 0x30(r30)
	bl       getBottomRadius__Q24Game6PelletFv
	stfs     f1, 0x74(r1)
	b        lbl_8019A5B0

lbl_8019A598:
	lwz      r3, 0x30(r30)
	addi     r4, r1, 0x68
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8019A5B0:
	cmpwi    r31, 0
	bge      lbl_8019A634
	mr       r4, r30
	mr       r5, r31
	addi     r3, r1, 0x24
	bl       crGetPoint__Q26PikiAI11ActPathMoveFi
	lfs      f30, 0x24(r1)
	mr       r3, r30
	lfs      f31, 0x2c(r1)
	mr       r4, r31
	bl       crGetRadius__Q26PikiAI11ActPathMoveFi
	lfs      f0, 0x70(r1)
	lfs      f1, 0x68(r1)
	fsubs    f2, f31, f0
	lfs      f0, lbl_80518F60@sda21(r2)
	fsubs    f1, f30, f1
	fmuls    f2, f2, f2
	fadds    f1, f1, f1
	fadds    f1, f1, f2
	fcmpo    cr0, f1, f0
	ble      lbl_8019A614
	ble      lbl_8019A618
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8019A618

lbl_8019A614:
	fmr      f1, f0

lbl_8019A618:
	lfs      f0, lbl_80518FC4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8019A62C
	li       r3, 0
	b        lbl_8019A730

lbl_8019A62C:
	li       r3, 1
	b        lbl_8019A730

lbl_8019A634:
	mr       r4, r30
	mr       r5, r31
	addi     r3, r1, 0x18
	bl       crGetPoint__Q26PikiAI11ActPathMoveFi
	lfs      f29, 0x18(r1)
	mr       r4, r30
	lfs      f28, 0x20(r1)
	addi     r3, r1, 0xc
	addi     r5, r31, 1
	bl       crGetPoint__Q26PikiAI11ActPathMoveFi
	lfs      f27, 0xc(r1)
	mr       r3, r30
	lfs      f26, 0x14(r1)
	mr       r4, r31
	bl       crGetRadius__Q26PikiAI11ActPathMoveFi
	fmr      f30, f1
	mr       r3, r30
	addi     r4, r31, 1
	bl       crGetRadius__Q26PikiAI11ActPathMoveFi
	fmr      f31, f1
	lfs      f0, lbl_80518F60@sda21(r2)
	stfs     f29, 0x78(r1)
	addi     r3, r1, 0x78
	addi     r4, r1, 0x68
	addi     r5, r1, 0x5c
	stfs     f0, 0x6c(r1)
	addi     r6, r1, 8
	stfs     f0, 0x7c(r1)
	stfs     f28, 0x80(r1)
	stfs     f27, 0x84(r1)
	stfs     f0, 0x88(r1)
	stfs     f26, 0x8c(r1)
	stfs     f30, 0x90(r1)
	stfs     f31, 0x94(r1)
	bl       "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019A6D0
	li       r3, 1
	b        lbl_8019A730

lbl_8019A6D0:
	lfs      f0, lbl_80518F60@sda21(r2)
	addi     r3, r1, 0x4c
	stfs     f29, 0x4c(r1)
	addi     r4, r1, 0x68
	stfs     f0, 0x50(r1)
	stfs     f28, 0x54(r1)
	stfs     f30, 0x58(r1)
	bl       intersect__Q23Sys6SphereFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019A700
	li       r3, 1
	b        lbl_8019A730

lbl_8019A700:
	lfs      f0, lbl_80518F60@sda21(r2)
	addi     r3, r1, 0x3c
	stfs     f27, 0x3c(r1)
	addi     r4, r1, 0x68
	stfs     f0, 0x40(r1)
	stfs     f26, 0x44(r1)
	stfs     f31, 0x48(r1)
	bl       intersect__Q23Sys6SphereFRQ23Sys6Sphere
	clrlwi   r3, r3, 0x18
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f

lbl_8019A730:
	psq_l    f31, 248(r1), 0, qr0
	lfd      f31, 0xf0(r1)
	psq_l    f30, 232(r1), 0, qr0
	lfd      f30, 0xe0(r1)
	psq_l    f29, 216(r1), 0, qr0
	lfd      f29, 0xd0(r1)
	psq_l    f28, 200(r1), 0, qr0
	lfd      f28, 0xc0(r1)
	psq_l    f27, 184(r1), 0, qr0
	lfd      f27, 0xb0(r1)
	psq_l    f26, 168(r1), 0, qr0
	lfd      f26, 0xa0(r1)
	lwz      r31, 0x9c(r1)
	lwz      r0, 0x104(r1)
	lwz      r30, 0x98(r1)
	mtlr     r0
	addi     r1, r1, 0x100
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0xF0
 */
bool ActPathMove::crPointOpen(int idx)
{
	if (idx < 0 || idx >= mWayPointCount) {
		return true;
	}
	Game::WayPoint* wp2 = getWayPoint(idx);
	if (!wp2) {
		return true;
	}

	return (wp2->isFlag(Game::WPF_Closed)) <= 0; // SO dumb
}

/**
 * @note Address: 0x8019A778
 * @note Size: 0x134
 */
f32 ActPathMove::crGetRadius(int idx)
{
	if (idx < 0) {
		Sys::Sphere sphere;
		mPellet->getBoundingSphere(sphere);
		P2ASSERTLINE(1858, sphere.mRadius > 0.0f);
		return sphere.mRadius;
	}

	if (idx >= mWayPointCount) {
		return 50.0f;
	}

	Game::WayPoint* wp = getWayPoint(idx);
	if (!wp) {
		return 50.0f;
	}

	return wp->mRadius;
}

/**
 * @note Address: 0x8019A8AC
 * @note Size: 0x738
 */
void ActPathMove::crInit()
{
	mCurrGraphIdx  = -1;
	mStartPosition = mPellet->getPosition();
	Vector3f collVec;
	Sys::Tube tube;
	Sys::Sphere collSphere;

	Vector3f point1 = crGetPoint(mCurrGraphIdx + 1); // 0
	Vector3f point2 = crGetPoint(mCurrGraphIdx + 2); // 1

	bool pointCheck = point1 == point2;
	if (!pointCheck) {
		f32 rad2          = crGetRadius(mCurrGraphIdx + 2); // 1
		f32 rad1          = crGetRadius(mCurrGraphIdx + 1); // 0
		tube.mStartPos    = point1;
		tube.mEndPos      = point2;
		tube.mStartRadius = rad1;
		tube.mEndRadius   = rad2;
	}

	collSphere.mPosition = mStartPosition;
	collSphere.mRadius   = 0.0f;
	f32 collAmt;
	if (!pointCheck && tube.collide(collSphere, collVec, collAmt) && crPointOpen(mCurrGraphIdx + 2)) { // 1
		mCurrGraphIdx                = 0;                                                              // ready to start walk
		mCRControls[CRMOVE_Prev]     = crGetPoint(-1);
		mCRControls[CRMOVE_Curr]     = crGetPoint(-1);
		mCRControls[CRMOVE_Next]     = crGetPoint(1);
		mCRControls[CRMOVE_NextNext] = crGetPoint(2);
		return;
	}

	Game::WayPoint* nextWp = nullptr;
	Game::WayPoint* wp     = Game::mapMgr->mRouteMgr->getWayPoint(mStartNode->mWpIndex);
	if (mStartNode->mNext) {
		nextWp = Game::mapMgr->mRouteMgr->getWayPoint(mStartNode->mNext->mWpIndex);
	}

	if (wp && nextWp) {
		Vector3f newPoint = wp->mPosition;
		Vector3f nextPos  = nextWp->mPosition;
		Vector3f sep      = nextPos - newPoint;

		f32 dist = sep.normalise();

		Vector3f pelletPos = mPellet->getPosition();

		Vector3f pelletSep = pelletPos - newPoint;

		if (dist == 0.0f) {
			newPoint = newPoint;
		} else {
			f32 ratio = sep.dot(pelletSep) / dist;
			if (ratio < 0.0f) {
				newPoint = newPoint;
			} else if (ratio > 1.0f) {
				newPoint = nextPos;
			} else {
				newPoint = sep * (ratio * dist) + newPoint;
			}
		}

		crMakeRefs();
		mCRControls[CRMOVE_Next] = newPoint;
		return;
	}

	crMakeRefs();
}

/**
 * @note Address: 0x8019AFE4
 * @note Size: 0x80
 */
void ActPathMove::crMakeRefs()
{
	for (int i = 0; i < CRMOVE_Count; i++) {
		mCRControls[i] = crGetPoint(mCurrGraphIdx + i - 1);
	}
}

/**
 * @note Address: 0x8019B064
 * @note Size: 0xC54
 */
bool ActPathMove::crMove()
{
	Vector3f point0 = crGetPoint(mCurrGraphIdx); // 0x7c, f28, f27, f26
	Vector3f point2 = mCRControls[CRMOVE_Next];  // f31, f29, f22
	if ((mCurrGraphIdx == -1 && !crPointOpen(1)) || (mCurrGraphIdx != -1 && !crPointOpen(mCurrGraphIdx + 1))) {
		if (mCurrGraphIdx == -1) {
			mNextWayPoint = (mRootNode->mNext) ? Game::mapMgr->mRouteMgr->getWayPoint(mRootNode->mNext->mWpIndex) : nullptr;
		} else {
			mNextWayPoint = getWayPoint(mCurrGraphIdx + 1);
		}

		mState        = PATHMOVE_MoveGuru;
		mPacePosition = mPellet->getPosition();
		mPaceAngle    = 0.0f;
	}

	Vector3f pelletPos = mPellet->getPosition(); // f23, f25, f24
	if (qdist2(point2.x, point2.z, pelletPos.x, pelletPos.z) < 6.0f) {
		if (mCurrGraphIdx >= mWayPointCount - 2) {
			mState       = PATHMOVE_MoveGoal;
			mNewVelocity = CRSplineTangent(1.0f, mCRControls);
			mNewVelocity.normalise();
			return true;
		}

		mCurrGraphIdx++;
		crMakeRefs();

		Vector3f splinePoints[1]; // 0x4c
		mNewVelocity = CRSplineTangent(0.0f, mCRControls);
		mNewVelocity.normalise();
		return true;
	}

	if (!contextCheck(mCurrGraphIdx)) {
		mNewVelocity = Vector3f(0.0f);

		if (mContextHandle) {
			Game::testPathfinder->release(mContextHandle);
			mContextHandle = 0;
		}
		mOnyon = nullptr;
		initPathfinding(true);
		return false;
	}

	Vector3f sep = point2 - point0; // f31, f30, f29
	f32 dist     = sep.normalise();
	f32 factor; // f27
	if (dist > 0.0f) {
		Vector3f diff = pelletPos - point0;
		factor        = sep.dot(diff) / dist;
	} else {
		factor = 1.0f;
	}

	if (factor < 0.0f) {
		factor = 0.0f;
	}

	if (factor > 1.0f) {
		factor = 1.0f;
	}

	sep.x *= factor * dist;
	sep.z *= factor * dist;
	Vector3f newPoint = (sep + point0) - pelletPos; // f23, f24, f25
	newPoint.y        = 0.0f;
	f32 newDist       = newPoint.normalise(); // f28

	f32 rad0 = crGetRadius(mCurrGraphIdx);     // f26
	f32 rad1 = crGetRadius(mCurrGraphIdx + 1); // f0

	f32 lerp = (1.0f - factor) * rad0 + (factor * rad1);
	if (lerp == 0.0f) {
		lerp = 1.0f;
	}

	f32 comp = FABS(newDist) / lerp; // f26
	if (comp < 0.3f) {
		comp = 0.0f;
	}
	if (comp > 2.0f && FABS(newDist) > 130.0f) {
		return true;
	}

	if (comp > 1.0f) {
		comp = 1.0f;
	} else if (comp < 0.0f) {
		comp = 0.0f;
	}

	if (factor >= 1.0f) {
		if (mCurrGraphIdx >= mWayPointCount - 2) {
			mState       = PATHMOVE_MoveGoal;
			mNewVelocity = CRSplineTangent(factor, mCRControls);
			mNewVelocity.normalise();
			return true;
		}
		mCurrGraphIdx++;
		crMakeRefs();
		mNewVelocity = CRSplineTangent(0.0f, mCRControls);
		mNewVelocity.normalise();
		return true;
	}

	mNewVelocity = CRSplineTangent(factor, mCRControls);
	mNewVelocity.normalise();

	mNewVelocity = mNewVelocity * (1.0f - comp) + newPoint * comp;

	if (mNewVelocity.x * sep.x + mNewVelocity.z * sep.z <= 0.0f) {
		mNewVelocity = sep;
	}

	return true;

	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stfd     f31, 0x120(r1)
	psq_st   f31, 296(r1), 0, qr0
	stfd     f30, 0x110(r1)
	psq_st   f30, 280(r1), 0, qr0
	stfd     f29, 0x100(r1)
	psq_st   f29, 264(r1), 0, qr0
	stfd     f28, 0xf0(r1)
	psq_st   f28, 248(r1), 0, qr0
	stfd     f27, 0xe0(r1)
	psq_st   f27, 232(r1), 0, qr0
	stfd     f26, 0xd0(r1)
	psq_st   f26, 216(r1), 0, qr0
	stfd     f25, 0xc0(r1)
	psq_st   f25, 200(r1), 0, qr0
	stfd     f24, 0xb0(r1)
	psq_st   f24, 184(r1), 0, qr0
	stfd     f23, 0xa0(r1)
	psq_st   f23, 168(r1), 0, qr0
	stfd     f22, 0x90(r1)
	psq_st   f22, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	mr       r31, r3
	addi     r3, r1, 0x7c
	lwz      r5, 0x70(r31)
	mr       r4, r31
	bl       crGetPoint__Q26PikiAI11ActPathMoveFi
	lwz      r0, 0x70(r31)
	lfs      f28, 0x7c(r1)
	cmpwi    r0, -1
	lfs      f27, 0x80(r1)
	lfs      f26, 0x84(r1)
	lfs      f31, 0x8c(r31)
	lfs      f29, 0x90(r31)
	lfs      f22, 0x94(r31)
	bne      lbl_8019B168
	lwz      r0, 0x4c(r31)
	cmpwi    r0, 1
	bgt      lbl_8019B110
	li       r0, 1
	b        lbl_8019B160

lbl_8019B110:
	lwz      r3, 0x48(r31)
	lwz      r4, 0xc(r3)
	cmplwi   r4, 0
	beq      lbl_8019B140
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r4)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8019B144

lbl_8019B140:
	li       r3, 0

lbl_8019B144:
	cmplwi   r3, 0
	bne      lbl_8019B154
	li       r0, 1
	b        lbl_8019B160

lbl_8019B154:
	lbz      r0, 0x34(r3)
	clrlwi   r0, r0, 0x1f
	xori     r0, r0, 1

lbl_8019B160:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8019B250

lbl_8019B168:
	lwz      r3, 0x70(r31)
	cmpwi    r3, -1
	beq      lbl_8019B378
	addic.   r3, r3, 1
	blt      lbl_8019B188
	lwz      r0, 0x4c(r31)
	cmpw     r3, r0
	blt      lbl_8019B190

lbl_8019B188:
	li       r0, 1
	b        lbl_8019B248

lbl_8019B190:
	cmpwi    r3, 0
	lwz      r6, 0x48(r31)
	li       r4, 0
	ble      lbl_8019B200
	cmpwi    r3, 8
	addi     r5, r3, -8
	ble      lbl_8019B1E8
	addi     r0, r5, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r5, 0
	ble      lbl_8019B1E8

lbl_8019B1C0:
	lwz      r5, 0xc(r6)
	addi     r4, r4, 8
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r6, 0xc(r5)
	bdnz     lbl_8019B1C0

lbl_8019B1E8:
	subf     r0, r4, r3
	mtctr    r0
	cmpw     r4, r3
	bge      lbl_8019B200

lbl_8019B1F8:
	lwz      r6, 0xc(r6)
	bdnz     lbl_8019B1F8

lbl_8019B200:
	cmplwi   r6, 0
	beq      lbl_8019B228
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r6)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8019B22C

lbl_8019B228:
	li       r3, 0

lbl_8019B22C:
	cmplwi   r3, 0
	bne      lbl_8019B23C
	li       r0, 1
	b        lbl_8019B248

lbl_8019B23C:
	lbz      r0, 0x34(r3)
	clrlwi   r0, r0, 0x1f
	xori     r0, r0, 1

lbl_8019B248:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8019B378

lbl_8019B250:
	lwz      r3, 0x70(r31)
	cmpwi    r3, -1
	bne      lbl_8019B298
	lwz      r3, 0x48(r31)
	lwz      r4, 0xc(r3)
	cmplwi   r4, 0
	beq      lbl_8019B28C
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r4)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8019B290

lbl_8019B28C:
	li       r3, 0

lbl_8019B290:
	stw      r3, 0x64(r31)
	b        lbl_8019B338

lbl_8019B298:
	addic.   r5, r3, 1
	lwz      r6, 0x48(r31)
	li       r3, 0
	ble      lbl_8019B308
	cmpwi    r5, 8
	addi     r4, r5, -8
	ble      lbl_8019B2F0
	addi     r0, r4, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r4, 0
	ble      lbl_8019B2F0

lbl_8019B2C8:
	lwz      r4, 0xc(r6)
	addi     r3, r3, 8
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r4, 0xc(r4)
	lwz      r6, 0xc(r4)
	bdnz     lbl_8019B2C8

lbl_8019B2F0:
	subf     r0, r3, r5
	mtctr    r0
	cmpw     r3, r5
	bge      lbl_8019B308

lbl_8019B300:
	lwz      r6, 0xc(r6)
	bdnz     lbl_8019B300

lbl_8019B308:
	cmplwi   r6, 0
	beq      lbl_8019B330
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r6)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8019B334

lbl_8019B330:
	li       r3, 0

lbl_8019B334:
	stw      r3, 0x64(r31)

lbl_8019B338:
	li       r0, 3
	addi     r3, r1, 0x70
	sth      r0, 0x1e(r31)
	lwz      r4, 0x30(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x70(r1)
	lfs      f0, lbl_80518F60@sda21(r2)
	stfs     f1, 0x58(r31)
	lfs      f1, 0x74(r1)
	stfs     f1, 0x5c(r31)
	lfs      f1, 0x78(r1)
	stfs     f1, 0x60(r31)
	stfs     f0, 0x68(r31)

lbl_8019B378:
	lwz      r4, 0x30(r31)
	addi     r3, r1, 0x64
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f23, 0x64(r1)
	fmr      f1, f31
	lfs      f24, 0x6c(r1)
	fmr      f2, f22
	fmr      f3, f23
	lfs      f25, 0x68(r1)
	fmr      f4, f24
	bl       qdist2__Fffff
	lfs      f0, lbl_80518F70@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8019B550
	lwz      r3, 0x4c(r31)
	lwz      r4, 0x70(r31)
	addi     r0, r3, -2
	cmpw     r4, r0
	blt      lbl_8019B48C
	li       r0, 2
	lfs      f1, lbl_80518F64@sda21(r2)
	sth      r0, 0x1e(r31)
	addi     r3, r1, 0x58
	addi     r4, r31, 0x74
	bl       "CRSplineTangent__FfP10Vector3<f>"
	lfs      f0, 0x58(r1)
	lfs      f1, lbl_80518F60@sda21(r2)
	stfs     f0, 0xb0(r31)
	lfs      f0, 0x5c(r1)
	stfs     f0, 0xb4(r31)
	lfs      f0, 0x60(r1)
	stfs     f0, 0xb8(r31)
	lfs      f3, 0xb0(r31)
	lfs      f2, 0xb4(r31)
	fmuls    f0, f3, f3
	lfs      f4, 0xb8(r31)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019B448
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8019B44C
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8019B44C

lbl_8019B448:
	fmr      f2, f1

lbl_8019B44C:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8019B484
	lfs      f1, lbl_80518F64@sda21(r2)
	lfs      f0, 0xb0(r31)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0xb0(r31)
	lfs      f0, 0xb4(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb4(r31)
	lfs      f0, 0xb8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb8(r31)

lbl_8019B484:
	li       r3, 1
	b        lbl_8019BC54

lbl_8019B48C:
	addi     r0, r4, 1
	mr       r3, r31
	stw      r0, 0x70(r31)
	bl       crMakeRefs__Q26PikiAI11ActPathMoveFv
	lfs      f1, lbl_80518F60@sda21(r2)
	addi     r3, r1, 0x4c
	addi     r4, r31, 0x74
	bl       "CRSplineTangent__FfP10Vector3<f>"
	lfs      f0, 0x4c(r1)
	lfs      f1, lbl_80518F60@sda21(r2)
	stfs     f0, 0xb0(r31)
	lfs      f0, 0x50(r1)
	stfs     f0, 0xb4(r31)
	lfs      f0, 0x54(r1)
	stfs     f0, 0xb8(r31)
	lfs      f3, 0xb0(r31)
	lfs      f2, 0xb4(r31)
	fmuls    f0, f3, f3
	lfs      f4, 0xb8(r31)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019B50C
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8019B510
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8019B510

lbl_8019B50C:
	fmr      f2, f1

lbl_8019B510:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8019B548
	lfs      f1, lbl_80518F64@sda21(r2)
	lfs      f0, 0xb0(r31)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0xb0(r31)
	lfs      f0, 0xb4(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb4(r31)
	lfs      f0, 0xb8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb8(r31)

lbl_8019B548:
	li       r3, 1
	b        lbl_8019BC54

lbl_8019B550:
	lwz      r4, 0x70(r31)
	mr       r3, r31
	bl       contextCheck__Q26PikiAI11ActPathMoveFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019B5AC
	lfs      f0, lbl_80518F60@sda21(r2)
	stfs     f0, 0xb0(r31)
	stfs     f0, 0xb4(r31)
	stfs     f0, 0xb8(r31)
	lwz      r4, 0x20(r31)
	cmplwi   r4, 0
	beq      lbl_8019B590
	lwz      r3, testPathfinder__4Game@sda21(r13)
	bl       release__Q24Game10PathfinderFUl
	li       r0, 0
	stw      r0, 0x20(r31)

lbl_8019B590:
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x34(r31)
	li       r4, 1
	bl       initPathfinding__Q26PikiAI11ActPathMoveFb
	li       r3, 0
	b        lbl_8019BC54

lbl_8019B5AC:
	fsubs    f30, f29, f27
	lfs      f0, lbl_80518F60@sda21(r2)
	fsubs    f29, f22, f26
	fsubs    f31, f31, f28
	fmuls    f1, f30, f30
	fmuls    f2, f29, f29
	fmadds   f1, f31, f31, f1
	fadds    f3, f2, f1
	fcmpo    cr0, f3, f0
	ble      lbl_8019B5E4
	ble      lbl_8019B5E8
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8019B5E8

lbl_8019B5E4:
	fmr      f3, f0

lbl_8019B5E8:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8019B60C
	lfs      f0, lbl_80518F64@sda21(r2)
	fdivs    f0, f0, f3
	fmuls    f31, f31, f0
	fmuls    f30, f30, f0
	fmuls    f29, f29, f0
	b        lbl_8019B610

lbl_8019B60C:
	fmr      f3, f0

lbl_8019B610:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8019B63C
	fsubs    f0, f25, f27
	fsubs    f1, f23, f28
	fsubs    f2, f24, f26
	fmuls    f0, f30, f0
	fmadds   f0, f31, f1, f0
	fmadds   f0, f29, f2, f0
	fdivs    f27, f0, f3
	b        lbl_8019B640

lbl_8019B63C:
	lfs      f27, lbl_80518F64@sda21(r2)

lbl_8019B640:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f27, f0
	bge      lbl_8019B650
	fmr      f27, f0

lbl_8019B650:
	lfs      f0, lbl_80518F64@sda21(r2)
	fcmpo    cr0, f27, f0
	ble      lbl_8019B660
	fmr      f27, f0

lbl_8019B660:
	fmuls    f0, f27, f3
	lfs      f25, lbl_80518F60@sda21(r2)
	fmuls    f1, f29, f0
	fmuls    f0, f31, f0
	fadds    f1, f1, f26
	fadds    f0, f0, f28
	fsubs    f24, f1, f24
	fsubs    f23, f0, f23
	fmuls    f1, f24, f24
	fmadds   f0, f23, f23, f25
	fadds    f28, f1, f0
	fcmpo    cr0, f28, f25
	ble      lbl_8019B6A4
	ble      lbl_8019B6A8
	frsqrte  f0, f28
	fmuls    f28, f0, f28
	b        lbl_8019B6A8

lbl_8019B6A4:
	fmr      f28, f25

lbl_8019B6A8:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f28, f0
	ble      lbl_8019B6CC
	lfs      f0, lbl_80518F64@sda21(r2)
	fdivs    f0, f0, f28
	fmuls    f23, f23, f0
	fmuls    f25, f25, f0
	fmuls    f24, f24, f0
	b        lbl_8019B6D0

lbl_8019B6CC:
	fmr      f28, f0

lbl_8019B6D0:
	lwz      r3, 0x70(r31)
	cmpwi    r3, 0
	bge      lbl_8019B728
	lwz      r3, 0x30(r31)
	addi     r4, r1, 0x18
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x24(r1)
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_8019B720
	lis      r3, lbl_8047F0A4@ha
	lis      r5, lbl_8047F0B8@ha
	addi     r3, r3, lbl_8047F0A4@l
	li       r4, 0x742
	addi     r5, r5, lbl_8047F0B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019B720:
	lfs      f26, 0x24(r1)
	b        lbl_8019B7EC

lbl_8019B728:
	lwz      r0, 0x4c(r31)
	cmpw     r3, r0
	blt      lbl_8019B73C
	lfs      f26, lbl_80518FC8@sda21(r2)
	b        lbl_8019B7EC

lbl_8019B73C:
	cmpwi    r3, 0
	lwz      r6, 0x48(r31)
	li       r4, 0
	ble      lbl_8019B7AC
	cmpwi    r3, 8
	addi     r5, r3, -8
	ble      lbl_8019B794
	addi     r0, r5, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r5, 0
	ble      lbl_8019B794

lbl_8019B76C:
	lwz      r5, 0xc(r6)
	addi     r4, r4, 8
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r6, 0xc(r5)
	bdnz     lbl_8019B76C

lbl_8019B794:
	subf     r0, r4, r3
	mtctr    r0
	cmpw     r4, r3
	bge      lbl_8019B7AC

lbl_8019B7A4:
	lwz      r6, 0xc(r6)
	bdnz     lbl_8019B7A4

lbl_8019B7AC:
	cmplwi   r6, 0
	beq      lbl_8019B7D4
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r6)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8019B7D8

lbl_8019B7D4:
	li       r3, 0

lbl_8019B7D8:
	cmplwi   r3, 0
	bne      lbl_8019B7E8
	lfs      f26, lbl_80518FC8@sda21(r2)
	b        lbl_8019B7EC

lbl_8019B7E8:
	lfs      f26, 0x58(r3)

lbl_8019B7EC:
	lwz      r3, 0x70(r31)
	addic.   r3, r3, 1
	bge      lbl_8019B844
	lwz      r3, 0x30(r31)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x14(r1)
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_8019B83C
	lis      r3, lbl_8047F0A4@ha
	lis      r5, lbl_8047F0B8@ha
	addi     r3, r3, lbl_8047F0A4@l
	li       r4, 0x742
	addi     r5, r5, lbl_8047F0B8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019B83C:
	lfs      f0, 0x14(r1)
	b        lbl_8019B908

lbl_8019B844:
	lwz      r0, 0x4c(r31)
	cmpw     r3, r0
	blt      lbl_8019B858
	lfs      f0, lbl_80518FC8@sda21(r2)
	b        lbl_8019B908

lbl_8019B858:
	cmpwi    r3, 0
	lwz      r6, 0x48(r31)
	li       r4, 0
	ble      lbl_8019B8C8
	cmpwi    r3, 8
	addi     r5, r3, -8
	ble      lbl_8019B8B0
	addi     r0, r5, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r5, 0
	ble      lbl_8019B8B0

lbl_8019B888:
	lwz      r5, 0xc(r6)
	addi     r4, r4, 8
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r5, 0xc(r5)
	lwz      r6, 0xc(r5)
	bdnz     lbl_8019B888

lbl_8019B8B0:
	subf     r0, r4, r3
	mtctr    r0
	cmpw     r4, r3
	bge      lbl_8019B8C8

lbl_8019B8C0:
	lwz      r6, 0xc(r6)
	bdnz     lbl_8019B8C0

lbl_8019B8C8:
	cmplwi   r6, 0
	beq      lbl_8019B8F0
	lwz      r3, mapMgr__4Game@sda21(r13)
	lha      r4, 0x20(r6)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8019B8F4

lbl_8019B8F0:
	li       r3, 0

lbl_8019B8F4:
	cmplwi   r3, 0
	bne      lbl_8019B904
	lfs      f0, lbl_80518FC8@sda21(r2)
	b        lbl_8019B908

lbl_8019B904:
	lfs      f0, 0x58(r3)

lbl_8019B908:
	lfs      f3, lbl_80518F64@sda21(r2)
	fmuls    f1, f27, f0
	lfs      f0, lbl_80518F60@sda21(r2)
	fsubs    f2, f3, f27
	fmadds   f2, f2, f26, f1
	fcmpu    cr0, f0, f2
	bne      lbl_8019B928
	fmr      f2, f3

lbl_8019B928:
	fabs     f1, f28
	lfs      f0, lbl_80518FCC@sda21(r2)
	frsp     f1, f1
	fdivs    f26, f1, f2
	fcmpo    cr0, f26, f0
	bge      lbl_8019B944
	lfs      f26, lbl_80518F60@sda21(r2)

lbl_8019B944:
	lfs      f0, lbl_80518FD0@sda21(r2)
	fcmpo    cr0, f26, f0
	ble      lbl_8019B96C
	fabs     f1, f28
	lfs      f0, lbl_80518FD4@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8019B96C
	li       r3, 1
	b        lbl_8019BC54

lbl_8019B96C:
	lfs      f0, lbl_80518F64@sda21(r2)
	fcmpo    cr0, f26, f0
	ble      lbl_8019B980
	fmr      f26, f0
	b        lbl_8019B990

lbl_8019B980:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f26, f0
	bge      lbl_8019B990
	fmr      f26, f0

lbl_8019B990:
	lfs      f0, lbl_80518F64@sda21(r2)
	fcmpo    cr0, f27, f0
	cror     2, 1, 2
	bne      lbl_8019BB34
	lwz      r3, 0x4c(r31)
	lwz      r4, 0x70(r31)
	addi     r0, r3, -2
	cmpw     r4, r0
	blt      lbl_8019BA70
	li       r0, 2
	fmr      f1, f27
	sth      r0, 0x1e(r31)
	addi     r3, r1, 0x40
	addi     r4, r31, 0x74
	bl       "CRSplineTangent__FfP10Vector3<f>"
	lfs      f0, 0x40(r1)
	lfs      f1, lbl_80518F60@sda21(r2)
	stfs     f0, 0xb0(r31)
	lfs      f0, 0x44(r1)
	stfs     f0, 0xb4(r31)
	lfs      f0, 0x48(r1)
	stfs     f0, 0xb8(r31)
	lfs      f3, 0xb0(r31)
	lfs      f2, 0xb4(r31)
	fmuls    f0, f3, f3
	lfs      f4, 0xb8(r31)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019BA2C
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8019BA30
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8019BA30

lbl_8019BA2C:
	fmr      f2, f1

lbl_8019BA30:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8019BA68
	lfs      f1, lbl_80518F64@sda21(r2)
	lfs      f0, 0xb0(r31)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0xb0(r31)
	lfs      f0, 0xb4(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb4(r31)
	lfs      f0, 0xb8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb8(r31)

lbl_8019BA68:
	li       r3, 1
	b        lbl_8019BC54

lbl_8019BA70:
	addi     r0, r4, 1
	mr       r3, r31
	stw      r0, 0x70(r31)
	bl       crMakeRefs__Q26PikiAI11ActPathMoveFv
	lfs      f1, lbl_80518F60@sda21(r2)
	addi     r3, r1, 0x34
	addi     r4, r31, 0x74
	bl       "CRSplineTangent__FfP10Vector3<f>"
	lfs      f0, 0x34(r1)
	lfs      f1, lbl_80518F60@sda21(r2)
	stfs     f0, 0xb0(r31)
	lfs      f0, 0x38(r1)
	stfs     f0, 0xb4(r31)
	lfs      f0, 0x3c(r1)
	stfs     f0, 0xb8(r31)
	lfs      f3, 0xb0(r31)
	lfs      f2, 0xb4(r31)
	fmuls    f0, f3, f3
	lfs      f4, 0xb8(r31)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019BAF0
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8019BAF4
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8019BAF4

lbl_8019BAF0:
	fmr      f2, f1

lbl_8019BAF4:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8019BB2C
	lfs      f1, lbl_80518F64@sda21(r2)
	lfs      f0, 0xb0(r31)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0xb0(r31)
	lfs      f0, 0xb4(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb4(r31)
	lfs      f0, 0xb8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb8(r31)

lbl_8019BB2C:
	li       r3, 1
	b        lbl_8019BC54

lbl_8019BB34:
	fmr      f1, f27
	addi     r3, r1, 0x28
	addi     r4, r31, 0x74
	bl       "CRSplineTangent__FfP10Vector3<f>"
	lfs      f0, 0x28(r1)
	lfs      f1, lbl_80518F60@sda21(r2)
	stfs     f0, 0xb0(r31)
	lfs      f0, 0x2c(r1)
	stfs     f0, 0xb4(r31)
	lfs      f0, 0x30(r1)
	stfs     f0, 0xb8(r31)
	lfs      f3, 0xb0(r31)
	lfs      f2, 0xb4(r31)
	fmuls    f0, f3, f3
	lfs      f4, 0xb8(r31)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8019BBA4
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8019BBA8
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8019BBA8

lbl_8019BBA4:
	fmr      f2, f1

lbl_8019BBA8:
	lfs      f0, lbl_80518F60@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8019BBE0
	lfs      f1, lbl_80518F64@sda21(r2)
	lfs      f0, 0xb0(r31)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0xb0(r31)
	lfs      f0, 0xb4(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb4(r31)
	lfs      f0, 0xb8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0xb8(r31)

lbl_8019BBE0:
	lfs      f0, lbl_80518F64@sda21(r2)
	fmuls    f2, f23, f26
	lfs      f3, 0xb0(r31)
	fmuls    f4, f25, f26
	fsubs    f7, f0, f26
	lfs      f5, 0xb4(r31)
	lfs      f6, 0xb8(r31)
	fmuls    f1, f24, f26
	lfs      f0, lbl_80518F60@sda21(r2)
	fmuls    f3, f3, f7
	fmuls    f5, f5, f7
	fmuls    f6, f6, f7
	fadds    f2, f3, f2
	fadds    f3, f5, f4
	fadds    f1, f6, f1
	stfs     f2, 0xb0(r31)
	stfs     f3, 0xb4(r31)
	stfs     f1, 0xb8(r31)
	lfs      f1, 0xb8(r31)
	lfs      f2, 0xb0(r31)
	fmuls    f1, f1, f29
	fmadds   f1, f2, f31, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8019BC50
	stfs     f31, 0xb0(r31)
	stfs     f30, 0xb4(r31)
	stfs     f29, 0xb8(r31)

lbl_8019BC50:
	li       r3, 1

lbl_8019BC54:
	psq_l    f31, 296(r1), 0, qr0
	lfd      f31, 0x120(r1)
	psq_l    f30, 280(r1), 0, qr0
	lfd      f30, 0x110(r1)
	psq_l    f29, 264(r1), 0, qr0
	lfd      f29, 0x100(r1)
	psq_l    f28, 248(r1), 0, qr0
	lfd      f28, 0xf0(r1)
	psq_l    f27, 232(r1), 0, qr0
	lfd      f27, 0xe0(r1)
	psq_l    f26, 216(r1), 0, qr0
	lfd      f26, 0xd0(r1)
	psq_l    f25, 200(r1), 0, qr0
	lfd      f25, 0xc0(r1)
	psq_l    f24, 184(r1), 0, qr0
	lfd      f24, 0xb0(r1)
	psq_l    f23, 168(r1), 0, qr0
	lfd      f23, 0xa0(r1)
	psq_l    f22, 152(r1), 0, qr0
	lfd      f22, 0x90(r1)
	lwz      r0, 0x134(r1)
	lwz      r31, 0x8c(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/**
 * @note Address: 0x8019BCB8
 * @note Size: 0x7C
 */
ActStickAttack::ActStickAttack(Game::Piki* p)
    : Action(p)
{
}

/**
 * @note Address: 0x8019BD34
 * @note Size: 0x1F0
 */
void ActStickAttack::init(ActionArg* settings)
{
	bool isStickArg = false;
	if (settings) {
		bool strCheck = strcmp("StickAttackActionArg", settings->getName()) == 0;
		if (strCheck) {
			isStickArg = true;
		}
	}
	P2ASSERTLINE(2331, isStickArg);
	StickAttackActionArg* arg = static_cast<StickAttackActionArg*>(settings);

	mCreature = arg->mCreature;
	mDamage   = arg->mAttackDamage;
	mObjType  = arg->mObjType;
	mAnimIdx  = Game::IPikiAnims::KUTTUKU;
	if (mParent->isStickTo()) {
		mParent->startMotion(Game::IPikiAnims::KUTTUKU, Game::IPikiAnims::KUTTUKU, this, nullptr);
		mIsInitialStick = true;

	} else {
		int animIdx = arg->mAnimIdx;
		if (animIdx == Game::IPikiAnims::NULLANIM) {
			mParent->startMotion(Game::IPikiAnims::KUTTUKU, Game::IPikiAnims::KUTTUKU, this, nullptr);
			mIsInitialStick = false;
		} else {
			mAnimIdx = animIdx;
			mParent->startMotion(animIdx, animIdx, this, nullptr);
			mIsInitialStick = false;
		}
	}

	mIsAttackReady           = false;
	mIsAnimFinished          = false;
	mHasAttacked             = false;
	mIsAttackSuccessful      = false;
	mParent->mTargetVelocity = Vector3f(0.0f);
	if (mParent->doped()) {
		mParent->startSound(mCreature, PSSE_PK_VC_DOPE_ATTACK, true);
	} else {
		mParent->startSound(mCreature, PSSE_PK_VC_ATTACK, true);
	}
}

/**
 * @note Address: 0x8019BF24
 * @note Size: 0x164
 */
int ActStickAttack::exec()
{
	// target is dead
	if (!mCreature->isAlive()) {
		mParent->endStick();
		return ACTEXEC_Success;
	}

	// animation is done
	if (mIsAnimFinished) {
		return ACTEXEC_Fail;
	}

	// piki no longer in correct animation
	if (!mParent->assertMotion(mAnimIdx)) {
		return ACTEXEC_Fail;
	}

	// piki has fallen off
	if (mIsInitialStick && !mParent->isStickTo()) {
		return ACTEXEC_Fail;
	}

	// do an attack
	if (mIsAttackReady && !mHasAttacked) {
		Game::InteractAttack attack(mParent, mDamage, mParent->mStuckCollPart);
		// wild pikmin do no damage
		if (mParent->isZikatu()) {
			attack.mDamage = 0.0f;
		}
		// don't attack again this animation
		mHasAttacked = true;

		// do attack
		if (mCreature->stimulate(attack)) {
			mIsAttackSuccessful = true;
		} else {
			mIsAttackSuccessful = false;
			mParent->startSound(mCreature, PSSE_PK_SE_KARABURI, true);
		}
	}
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x8019C088
 * @note Size: 0x650
 */
void ActStickAttack::createEfx()
{
	if (!mIsAttackSuccessful) {
		Vector3f pos = Vector3f(mParent->mLeafStemOffset);
		efx::createSimpleInattack(pos);
		return;
	}
	switch (mObjType) {
	case STICKATK_Default:
	case STICKATK_Rock:
		if (mObjType != STICKATK_Rock) {
			if (mParent->doped()) {
				efx::TPkAttackDP effect;
				Vector3f offset = mParent->mLeafStemOffset;
				efx::Arg effectArg;
				effectArg.mPosition = offset;
				effect.create(&effectArg);

			} else {
				efx::PikiDamage effect;
				Vector3f offset = mParent->mLeafStemOffset;
				efx::Arg effectArg;
				effectArg.mPosition = offset;
				effect.create(&effectArg);
			}
		}
		mParent->startSound(mCreature, PSSE_PK_SE_ATTACKHIT, true);
		break;

	case STICKATK_Bridge: {
		Vector3f pos = Vector3f(mParent->mLeafStemOffset);
		if (Game::BaseHIOParms::sMabikiEfx && mCreature->getMabiki()) {
			Game::Mabiki* mabiki = mCreature->getMabiki();
			f32 fxChance         = (100 - mabiki->mCounter) / 100.0f;
			if (randFloat() <= fxChance) {
				efx::createSimpleBridgeAttack(pos);
				mabiki->mBuffer++;
				mParent->startSound(mCreature, PSSE_PK_SE_HIT_BRIDGE, PSGame::SeMgr::SETSE_PikiWorking);
			}
		} else {
			efx::createSimpleBridgeAttack(pos);
		}
		break;
	}

	case STICKATK_BlackGate: {
		Vector3f pos = Vector3f(mParent->mLeafStemOffset);
		if (Game::BaseHIOParms::sMabikiEfx && mCreature->getMabiki()) {
			Game::Mabiki* mabiki = mCreature->getMabiki();
			f32 fxChance         = (100 - mabiki->mCounter) / 100.0f;
			if (randFloat() <= fxChance) {
				efx::createSimpleGate2Attack(pos);
				mParent->startSound(mCreature, PSSE_PK_SE_HIT_HARDWALL, PSGame::SeMgr::SETSE_PikiWorking);
				mabiki->mBuffer++;
			}
		} else {
			efx::createSimpleGate2Attack(pos);
		}
		break;
	}

	case STICKATK_WhiteGate: {
		Vector3f pos = Vector3f(mParent->mLeafStemOffset);
		if (Game::BaseHIOParms::sMabikiEfx && mCreature->getMabiki()) {
			Game::Mabiki* mabiki = mCreature->getMabiki();
			f32 fxChance         = (100 - mabiki->mCounter) / 100.0f;
			if (randFloat() <= fxChance) {
				efx::createSimpleGate1Attack(pos);
				mParent->startSound(mCreature, PSSE_PK_SE_HIT_SOFTWALL, PSGame::SeMgr::SETSE_PikiWorking);
				mabiki->mBuffer++;
			}
		} else {
			efx::createSimpleGate1Attack(pos);
		}
		break;
	}

	case STICKATK_ElecGate: {
		Vector3f pos = Vector3f(mParent->mLeafStemOffset);
		if (Game::BaseHIOParms::sMabikiEfx && mCreature->getMabiki()) {
			Game::Mabiki* mabiki = mCreature->getMabiki();
			f32 fxChance         = (100 - mabiki->mCounter) / 100.0f;
			if (randFloat() <= fxChance) {
				efx::createSimpleGate3Attack(pos);
				mParent->startSound(mCreature, PSSE_PK_SE_HIT_ELEC_GATE, PSGame::SeMgr::SETSE_PikiWorking);
				mabiki->mBuffer++;
			}
		} else {
			efx::createSimpleGate3Attack(pos);
		}
		break;
	}

	case STICKATK_BreakStone: {
		Vector3f pos = Vector3f(mParent->mLeafStemOffset);
		efx::createSimpleStoneAttack(pos);
		if (mCreature->mObjectTypeID == OBJTYPE_Barrel) {
			mParent->startSound(mCreature, PSSE_PK_SE_HIT_CONCRETEWALL, PSGame::SeMgr::SETSE_PikiWorking);

		} else if (mCreature->mObjectTypeID == OBJTYPE_Weed) { // aiWeed uses FlockAttack not StickAttack, don't think this can happen
			mParent->startSound(mCreature, PSSE_EV_WORK_STONE_BREAK, true);

		} else if (mCreature->mObjectTypeID == OBJTYPE_BigFountain) {
			mParent->startSound(mCreature, PSSE_PK_SE_HIT_FOUNTAIN, PSGame::SeMgr::SETSE_PikiWorking);
		}
		break;
	}

	case STICKATK_Treasure:
		efx::createSimpleDig(*mParent->mEffectsObj->mStemPosition);
		mParent->startSound(mCreature, PSSE_PK_VC_DIGGING, PSGame::SeMgr::SETSE_PikiCarry);
		break;

	default:
		break;
	}
}

/**
 * @note Address: 0x8019C6D8
 * @note Size: 0x80
 */
void ActStickAttack::onKeyEvent(SysShape::KeyEvent const& keyEvent)
{
	switch (keyEvent.mType) {
	case KEYEVENT_LOOP_END:
		break;

	case KEYEVENT_2: // attack ready
		mIsAttackReady = true;
		break;

	case KEYEVENT_3: // re-prime attack triggers after attack
		mIsAttackReady = false;
		mHasAttacked   = false;
		break;

	case KEYEVENT_END:
		mIsAnimFinished = true;
		break;

	case KEYEVENT_100: // do efx
		createEfx();
		break;

	default:
		break;
	}
}

/**
 * @note Address: 0x8019C758
 * @note Size: 0x24
 */
void ActStickAttack::cleanup() { mParent->endStick(); }

/**
 * @note Address: 0x8019C77C
 * @note Size: 0x3C
 */
ActClimb::ActClimb(Game::Piki* p)
    : Action(p)
{
}

/**
 * @note Address: 0x8019C7B8
 * @note Size: 0x100
 */
void ActClimb::init(ActionArg* settings)
{
	mParent->startMotion(20, 20, nullptr, nullptr);
	ClimbActionArg* climbArg = static_cast<ClimbActionArg*>(settings);
	mCollPart                = climbArg->mCollPart;
	mSpeed                   = climbArg->mSpeed;
	mIsClimbTowards          = climbArg->mIsClimbTowards;
	P2ASSERTLINE(2609, mCollPart->mPartType == COLLTYPE_TUBE);
	Sys::Tube tube;
	mCollPart->getTube(tube);
	tube.getAxisVector(mVelocity);
	mVelocity.x = -mVelocity.x;
	mVelocity.y = -mVelocity.y;
	mVelocity.z = -mVelocity.z;
	mVelocity   = mVelocity * mSpeed;
}

/**
 * @note Address: 0x8019C8B8
 * @note Size: 0xE4
 */
int ActClimb::exec()
{
	mParent->mVelocity = mVelocity;
	if (!mIsClimbTowards) {
		mParent->mVelocity *= -1.0f;
	}

	mParent->move(sys->getDeltaTime());

	if (mIsClimbTowards) {
		if (mParent->mClimbingPosition.y < 0.0f) {
			return ACTEXEC_Success;
		}
	} else {
		if (mParent->mClimbingPosition.y >= 1.0f) {
			return ACTEXEC_Success;
		}
	}
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x8019C99C
 * @note Size: 0x4
 */
void ActClimb::cleanup() { }

/**
 * @note Address: 0x8019C9A0
 * @note Size: 0x3C
 */
ActGather::ActGather(Game::Piki* p)
    : Action(p)
{
}

/**
 * @note Address: 0x8019C9DC
 * @note Size: 0xE0
 */
void ActGather::init(ActionArg* settings)
{
	bool strCheck = strcmp("GatherActionArg", settings->getName()) == 0;
	P2ASSERTLINE(2669, strCheck);

	GatherActionArg* arg = static_cast<GatherActionArg*>(settings);
	mGoalPosition        = arg->mGoalPosition;
	mRadius              = arg->mRadius;
	mParent->startMotion(Game::IPikiAnims::WALK, Game::IPikiAnims::WALK, nullptr, nullptr);
	mTimer = 5.0f;
	mRadius *= 0.6f;
}

/**
 * @note Address: 0x8019CABC
 * @note Size: 0x154
 */
int ActGather::exec()
{
	Vector3f pikiPos = mParent->getPosition();
	Vector3f dir     = mGoalPosition - pikiPos;
	f32 dist         = dir.normalise();

	mTimer -= sys->mDeltaTime;

	if (dist < mRadius || mTimer <= 0.0f) {
		mParent->mTargetVelocity = Vector3f(0.0f);
		return ACTEXEC_Success;
	}

	mParent->setSpeed(0.6f, dir);
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x8019CC10
 * @note Size: 0x4
 */
void ActGather::cleanup() { }

/**
 * @note Address: 0x8019CC14
 * @note Size: 0x3C
 */
ActFollowVectorField::ActFollowVectorField(Game::Piki* p)
    : Action(p)
{
}

/**
 * @note Address: 0x8019CC50
 * @note Size: 0x60
 */
void ActFollowVectorField::init(ActionArg* arg)
{
	mParent->startMotion(Game::IPikiAnims::WALK, Game::IPikiAnims::WALK, nullptr, nullptr);
	mItem = static_cast<FollowVectorFieldActionArg*>(arg)->mItem;
}

/**
 * @note Address: 0x8019CCB0
 * @note Size: 0x80
 */
int ActFollowVectorField::exec()
{
	Sys::Sphere sphere;
	Vector3f dir;

	mParent->getBoundingSphere(sphere);
	if (!mItem->getVectorField(sphere, dir)) {
		return ACTEXEC_Fail;
	}
	mParent->setSpeed(1.0f, dir);
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x8019CD30
 * @note Size: 0x4
 */
void ActFollowVectorField::cleanup() { }

} // namespace PikiAI
