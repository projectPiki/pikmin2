#include "PikiAI.h"
#include "Game/Piki.h"
#include "Game/Entities/ItemOnyon.h"
#include "Dolphin/rand.h"

#define PIKI_ENTERSHIP_RADIUS  (30.0f)
#define PIKI_ENTERONYON_RADIUS (10.0f)
#define PIKI_ENTERONYON_SPEED  (50.0f)
#define PIKI_EXITONYON_SPEED   (100.0f)

namespace PikiAI {
/**
 * @note Address: 0x801A2720
 * @note Size: 0xD0
 */
ActEnter::ActEnter(Game::Piki* p)
    : Action(p)
{
	mGotoPos = new ActGotoPos(p);
	mClimb   = new ActClimb(p);

	mName = "Enter";
}

/**
 * @note Address: 0x801A27F0
 * @note Size: 0x338
 */
void ActEnter::init(ActionArg* arg)
{
	mOnyonLeg           = nullptr;
	mOnyonFoot          = nullptr;
	ActCropArg* cropArg = static_cast<ActCropArg*>(arg);
	bool isOnyonCheck   = cropArg->isOnyonOrShip();
	P2ASSERTLINE(119, isOnyonCheck);

	mParent->startMotion(Game::IPikiAnims::WALK, Game::IPikiAnims::WALK, nullptr, nullptr);
	mParent->mTargetVelocity = Vector3f(0.0f);
	mOnyon                   = static_cast<Game::Onyon*>(cropArg->mCreature);

	// pikis entering the ship
	if (mOnyon->mOnyonType == ONYON_TYPE_SHIP) {
		Vector3f startPos = mOnyon->getInStart_UFO();
		f32 randDist      = (PIKI_ENTERSHIP_RADIUS + 4.0f) * randFloat();
		f32 randAngle     = TAU * randFloat();
		Vector3f offset   = Vector3f(sinf(randAngle) * randDist, 0.0f, cosf(randAngle) * randDist);
		Vector3f gotoPos  = startPos + offset;
		GotoPosActionArg gotoArg;
		gotoArg.mPosition = gotoPos;
		gotoArg.mRadius   = PIKI_ENTERSHIP_RADIUS;
		mGotoPos->init(&gotoArg);
		mState = ENTER_ShipGoto;
		return;
	}

	// pikis entering an onyon
	int randFoot  = 3.0f * randFloat();
	mOnyonLeg     = static_cast<Game::Onyon*>(cropArg->mCreature)->getFootPart(randFoot);
	mOnyonFoot    = mOnyonLeg;
	CollPart* leg = mOnyonLeg;
	GotoPosActionArg gotoArg;
	gotoArg.mPosition = leg->mPosition;
	gotoArg.mRadius   = PIKI_ENTERONYON_RADIUS;
	mOnyonLeg         = static_cast<Game::Onyon*>(cropArg->mCreature)->getLegPart(randFoot);
	mGotoPos->init(&gotoArg);
	mState = ENTER_OnyonBegin;
}

/**
 * @note Address: 0x801A2B28
 * @note Size: 0x240
 */
int ActEnter::exec()
{
	switch (mState) {
	case ENTER_OnyonBegin:
		if (mOnyonFoot) {
			mGotoPos->mPosition = mOnyonFoot->mPosition;
		}
		if (mGotoPos->exec() == ACTEXEC_Success) {
			ClimbActionArg climbArg(mOnyonLeg, PIKI_ENTERONYON_SPEED, true);
			mParent->getPosition();
			mParent->startStick(mOnyon, mOnyonLeg);
			mParent->getPosition();
			mClimb->init(&climbArg);
			mState = ENTER_OnyonClimb;
			mParent->startSound(mOnyon, PSSE_PK_VC_ONY_CLIMB, true);
		}
		break;

	case ENTER_OnyonClimb: {
		int climbResult    = mClimb->exec();
		f32 climbingHeight = mParent->mClimbingPosition.y;
		if (climbingHeight < 0.25f) {
			climbingHeight /= 0.25f;
			mBaseScale      = mParent->getBaseScale() * climbingHeight;
			mParent->mScale = mBaseScale;
		}
		if (climbResult == ACTEXEC_Success) {
			mParent->endStick();
			mParent->startSound(mOnyon, PSSE_PK_SE_ONY_ENTER, true);
			mOnyon->enterPiki(mParent);
			return ACTEXEC_Success;
		}
	} break;

	case ENTER_ShipGoto:
		if (mGotoPos->exec() == ACTEXEC_Success) {
			mState = ENTER_ShipStay;
			initStay();
		}
		break;

	case ENTER_ShipSuck:
		if (execSuck() == ACTEXEC_Success) {
			mOnyon->enterPiki(mParent);
			return ACTEXEC_Success;
		}
		break;

	case ENTER_ShipStay:
		execStay();
		break;
	}

	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x801A2D68
 * @note Size: 0x68
 */
void ActEnter::cleanup()
{
	mParent->endStick();
	mParent->setAtari(true);
	mBaseScale      = mParent->getBaseScale();
	mParent->mScale = mBaseScale;
}

/**
 * @note Address: 0x801A2DD0
 * @note Size: 0x4
 */
void ActEnter::onKeyEvent(SysShape::KeyEvent const&) { }

/**
 * @note Address: 0x801A2DD4
 * @note Size: 0x78
 */
void ActEnter::initStay()
{
	mTimer           = 1.3f;
	Vector3f suckPos = mOnyon->getInEnd_UFO();
	mParent->turnTo(suckPos);
	mParent->setMoveRotation(false);
}

/**
 * @note Address: 0x801A2E4C
 * @note Size: 0x64
 */
int ActEnter::execStay()
{
	mTimer -= sys->getDeltaTime();
	mParent->mTargetVelocity = 0.0f;
	if (mTimer <= 0.0f) {
		mState = ENTER_ShipSuck;
		initSuck();
	}
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x801A2EB0
 * @note Size: 0x1A0
 */
void ActEnter::initSuck()
{
	mSuckGoalPos = mOnyon->getInEnd_UFO();
	mSuckGoalPos.y -= 3.0f;

	const Vector3f pikiPos = mParent->getPosition();
	mSuckDir               = mSuckGoalPos - pikiPos;
	mSuckDir.y             = 0.0f;

	mHorizSuckDist = mSuckDir.normalise();
	mVertSuckDist  = absF(mSuckGoalPos.y - pikiPos.y);

	mSuckGoalPos.y = pikiPos.y;

	mTimer       = -mHorizSuckDist;
	mInsideOnyon = 0;
	mBaseScale   = 1.0f;

	mParent->startSound(PSSE_PK_VC_JUMP_INTO_UFO, true);
	mParent->startMotion(Game::IPikiAnims::ROLLJUMP, Game::IPikiAnims::ROLLJUMP, nullptr, nullptr);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	addi     r3, r1, 0x14
	lwz      r4, 0x24(r31)
	bl       getInEnd_UFO__Q24Game5OnyonFv
	lfs      f1, 0x14(r1)
	addi     r3, r1, 8
	lfs      f0, lbl_80519134@sda21(r2)
	stfs     f1, 0x28(r31)
	lfs      f1, 0x18(r1)
	stfs     f1, 0x2c(r31)
	lfs      f1, 0x1c(r1)
	stfs     f1, 0x30(r31)
	lfs      f1, 0x2c(r31)
	fsubs    f0, f1, f0
	stfs     f0, 0x2c(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x28(r31)
	lfs      f1, 8(r1)
	lfs      f0, 0xc(r1)
	lfs      f3, 0x2c(r31)
	fsubs    f1, f2, f1
	lfs      f5, 0x30(r31)
	lfs      f4, 0x10(r1)
	fsubs    f3, f3, f0
	lfs      f2, lbl_80519118@sda21(r2)
	stfs     f1, 0x34(r31)
	fsubs    f1, f5, f4
	stfs     f3, 0x38(r31)
	stfs     f1, 0x3c(r31)
	stfs     f2, 0x38(r31)
	lfs      f4, 0x34(r31)
	lfs      f3, 0x38(r31)
	lfs      f5, 0x3c(r31)
	fmuls    f1, f4, f4
	fmuls    f3, f3, f3
	fmuls    f5, f5, f5
	fadds    f1, f1, f3
	fadds    f1, f5, f1
	fcmpo    cr0, f1, f2
	ble      lbl_801A2F8C
	fmadds   f1, f4, f4, f3
	fadds    f3, f5, f1
	fcmpo    cr0, f3, f2
	ble      lbl_801A2F90
	frsqrte  f1, f3
	fmuls    f3, f1, f3
	b        lbl_801A2F90

lbl_801A2F8C:
	fmr      f3, f2

lbl_801A2F90:
	lfs      f1, lbl_80519118@sda21(r2)
	fcmpo    cr0, f3, f1
	ble      lbl_801A2FCC
	lfs      f2, lbl_80519154@sda21(r2)
	lfs      f1, 0x34(r31)
	fdivs    f2, f2, f3
	fmuls    f1, f1, f2
	stfs     f1, 0x34(r31)
	lfs      f1, 0x38(r31)
	fmuls    f1, f1, f2
	stfs     f1, 0x38(r31)
	lfs      f1, 0x3c(r31)
	fmuls    f1, f1, f2
	stfs     f1, 0x3c(r31)
	b        lbl_801A2FD0

lbl_801A2FCC:
	fmr      f3, f1

lbl_801A2FD0:
	stfs     f3, 0x48(r31)
	li       r0, 0
	lfs      f1, lbl_80519154@sda21(r2)
	li       r4, 0x281f
	lfs      f2, 0x2c(r31)
	li       r5, 1
	fsubs    f2, f2, f0
	fabs     f2, f2
	frsp     f2, f2
	stfs     f2, 0x44(r31)
	stfs     f0, 0x2c(r31)
	lfs      f0, 0x48(r31)
	fneg     f0, f0
	stfs     f0, 0x40(r31)
	stb      r0, 0x4c(r31)
	stfs     f1, 0x5c(r31)
	lwz      r3, 4(r31)
	bl       startSound__Q24Game4PikiFUlb
	lwz      r3, 4(r31)
	li       r4, 0x23
	li       r5, 0x23
	li       r6, 0
	lwz      r12, 0(r3)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x801A3050
 * @note Size: 0x18C
 */
int ActEnter::execSuck()
{
	if (mInsideOnyon) {
		mParent->setPosition(mSuckPos, false);
		return ACTEXEC_Success;
	}

	f32 heightOffset = (-mVertSuckDist / SQUARE(mHorizSuckDist)) * SQUARE(mTimer) + mVertSuckDist;
	Vector3f newPos  = mSuckGoalPos + mSuckDir * mTimer;
	newPos.y += heightOffset;
	mParent->setPosition(newPos, false);

	mParent->mScale = Vector3f(mBaseScale);
	mTimer += sys->mDeltaTime * 110.0f;
	if (mTimer >= 0.0f) {
		mInsideOnyon = 1;
		mSuckPos     = newPos;
		mParent->startSound(PSSE_PK_SE_ONY_ENTER, true);
		return ACTEXEC_Success;
	}

	f32 val = -mTimer / mHorizSuckDist;
	if (val < 0.0f) {
		val = 0.0f;
	}
	mBaseScale = _sqrtf2(val);
	if (mBaseScale < 0.05f) {
		mBaseScale = 0.05f;
	}
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x801A31DC
 * @note Size: 0x70
 */
ActExit::ActExit(Game::Piki* parent)
    : Action(parent)
    , mClimb(new ActClimb(parent))
{
	mName = "Exit";
}

/**
 * @note Address: 0x801A324C
 * @note Size: 0x204
 */
void ActExit::init(ActionArg* arg)
{
	ActCropArg* cropArg = static_cast<ActCropArg*>(arg);
	P2ASSERTLINE(517, cropArg->mCreature->mObjectTypeID == OBJTYPE_Onyon);

	mParent->startMotion(Game::IPikiAnims::WALK, Game::IPikiAnims::WALK, nullptr, nullptr);
	mParent->mTargetVelocity = Vector3f(0.0f);
	int randFoot             = 3.0f * randFloat();
	mCreature                = cropArg->mCreature;
	mOnyonLeg                = static_cast<Game::Onyon*>(cropArg->mCreature)->getLegPart(randFoot);

	ClimbActionArg climbArg(mOnyonLeg, PIKI_EXITONYON_SPEED, false);
	mParent->setPosition(mOnyonLeg->mPosition, false);
	mParent->startStick(mCreature, mOnyonLeg);
	mClimb->init(&climbArg);

	mParent->startSound(cropArg->mCreature, PSSE_PK_VC_ONY_EXIT, true);
	mParent->mScale                              = Vector3f::zero;
	mParent->mBaseTrMatrix.mMatrix.structView.xx = 0.0f;
	mParent->mBaseTrMatrix.mMatrix.structView.yx = 0.0f;
	mParent->mBaseTrMatrix.mMatrix.structView.zx = 0.0f;
	mParent->mBaseTrMatrix.mMatrix.structView.xy = 0.0f;
	mParent->mBaseTrMatrix.mMatrix.structView.yy = 0.0f;
	mParent->mBaseTrMatrix.mMatrix.structView.zy = 0.0f;
	mParent->mBaseTrMatrix.mMatrix.structView.xz = 0.0f;
	mParent->mBaseTrMatrix.mMatrix.structView.yz = 0.0f;
	mParent->mBaseTrMatrix.mMatrix.structView.zz = 0.0f;

	PSMTXCopy(mParent->mBaseTrMatrix.mMatrix.mtxView, mParent->mModel->mJ3dModel->mPosMtx);
	mParent->mModel->mJ3dModel->calc();
}

/**
 * @note Address: 0x801A3450
 * @note Size: 0xA8
 */
int ActExit::exec()
{
	int climbResult    = mClimb->exec();
	f32 climbingHeight = mParent->mClimbingPosition.y;
	if (climbingHeight < 0.25f) {
		climbingHeight /= 0.25f;
		mBaseScale      = mParent->getBaseScale() * climbingHeight;
		mParent->mScale = mBaseScale;
	}
	if (climbResult == ACTEXEC_Success) {
		return ACTEXEC_Success;
	}
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x801A34F8
 * @note Size: 0xC8
 */
void ActExit::cleanup()
{
	f32 climbY      = mParent->mClimbingPosition.y;
	mBaseScale      = mParent->getBaseScale();
	mParent->mScale = Vector3f(mBaseScale);
	mParent->endStick();
	mParent->setMoveRotation(true);
	f32 y = 240.0f + 60.0f * randFloat();
	y *= climbY;
	mParent->mVelocity = Vector3f(0.0f, y, 0.0f);
}

} // namespace PikiAI
