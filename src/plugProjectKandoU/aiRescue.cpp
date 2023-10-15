#include "PikiAI.h"
#include "Game/Piki.h"
#include "Game/PikiState.h"
#include "Game/MapMgr.h"
#include "Game/routeMgr.h"
#include "Game/AIConstants.h"

static const char className[] = "actRescue";

namespace PikiAI {
/*
 * --INFO--
 * Address:	80238EB0
 * Size:	0000B8
 */
ActRescue::ActRescue(Game::Piki* piki)
    : Action(piki)
{
	mThrowFlag   = THROW_Null;
	mName        = "Rescue";
	mApproachPos = new ActApproachPos(piki);
}

/*
 * --INFO--
 * Address:	80238F68
 * Size:	0000C4
 */
void ActRescue::init(ActionArg* arg)
{
	P2ASSERTLINE(46, arg);

	ActRescueArg* sarg = static_cast<ActRescueArg*>(arg);
	bool check         = false;
	if (sarg->mTarget) {
		if (sarg->mTarget->isPiki()) {
			check = true;
		}
	}
	P2ASSERTLINE(48, check);

	mTargetPiki = sarg->mTarget;
	mWayPoint   = nullptr;
	initApproach();
}

/*
 * --INFO--
 * Address:	8023902C
 * Size:	000060
 */
int ActRescue::exec()
{
	switch (mState) {
	case RESCUE_Approach:
		return execApproach();
	case RESCUE_Go:
		return execGo();
	case RESCUE_Throw:
		return execThrow();
	default:
		return ACTEXEC_Continue;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
ActionExitCode ActRescue::checkPikmin()
{
	if (!mTargetPiki->isAlive()) {
		return ACTEXEC_Fail;
	}
	int state = mTargetPiki->getStateID();
	if (state != Game::PIKISTATE_WaterHanged && state != Game::PIKISTATE_Drown && !mTargetPiki->inWater()) {
		return ACTEXEC_Success;
	}
	if (state == Game::PIKISTATE_WaterHanged && static_cast<Game::PikiWaterHangedState*>(mTargetPiki->mCurrentState)->mPiki != mParent) {
		return ACTEXEC_Success;
	}
	return ACTEXEC_Continue;
}

/*
 * --INFO--
 * Address:	8023908C
 * Size:	0000AC
 */
void ActRescue::initApproach()
{
	mState       = RESCUE_Approach;
	Vector3f pos = mTargetPiki->getPosition();
	ApproachPosActionArg arg(pos, 10.0f, -1.0f);
	mApproachPos->init(&arg);
}

/*
 * --INFO--
 * Address:	80239138
 * Size:	00013C
 */
int ActRescue::execApproach()
{
	ActionExitCode ret = checkPikmin();
	switch (ret) {
	case ACTEXEC_Continue: {
		Vector3f pos            = mTargetPiki->getPosition();
		mApproachPos->mPosition = pos;
		ret                     = static_cast<ActionExitCode>(mApproachPos->exec());
		if (ret == ACTEXEC_Success) {
			initGo();
		} else if (ret == ACTEXEC_Fail) {
			return ACTEXEC_Fail;
		}
		return ACTEXEC_Continue;
	}
	default:
		return ret;
	}
}

/*
 * --INFO--
 * Address:	80239274
 * Size:	000150
 */
void ActRescue::initGo()
{
	mState = RESCUE_Go;
	WPFindCond cond;
	Vector3f pos = mTargetPiki->getPosition();
	Game::WPSearchArg arg(pos, &cond, false, 10.0f);
	mWayPoint = Game::mapMgr->mRouteMgr->getNearestWayPoint(arg);
	if (mWayPoint) {
		ApproachPosActionArg arg(mWayPoint->mPosition, 250.0f, -1.0f);
		mApproachPos->init(&arg);
		Game::WaterHangedStateArg statearg(mParent);
		mTargetPiki->mFsm->transit(mTargetPiki, Game::PIKISTATE_WaterHanged, &statearg);
	}
	mTimeLimit = 100;
}

/*
 * --INFO--
 * Address:	802393C4
 * Size:	0001C0
 */
int ActRescue::execGo()
{
	ActionExitCode ret = checkPikmin();
	switch (ret) {
	case ACTEXEC_Continue:
		if (!mWayPoint) {
			ret = ACTEXEC_Fail;
		} else {
			ret = static_cast<ActionExitCode>(mApproachPos->exec());
			if (!--mTimeLimit) {
				ret = ACTEXEC_Success;
			}

			if (ret == ACTEXEC_Success) {
				initThrow();
			} else if (ret == ACTEXEC_Fail) {
				return ACTEXEC_Fail;
			}

			SysShape::Joint* jnt = mParent->mModel->getJoint("rhandjnt");
			P2ASSERTLINE(220, jnt);
			Vector3f mod(3.0f, 0.0f, 0.0f);
			mod = jnt->getWorldMatrix()->mtxMult(mod);
			mTargetPiki->setPosition(mod, false);
			ret = ACTEXEC_Continue;
		}
		break;
	}
	return ret;
}

/*
 * --INFO--
 * Address:	80239584
 * Size:	000064
 */
void ActRescue::initThrow()
{
	mState = RESCUE_Throw;
	mParent->startMotion(Game::IPikiAnims::THROW, Game::IPikiAnims::THROW, this, nullptr);
	mThrowFlag = THROW_Null;
}

/*
 * --INFO--
 * Address:	802395E8
 * Size:	000278
 */
int ActRescue::execThrow()
{
	if (!mParent->assertMotion(Game::IPikiAnims::THROW)) {
		return ACTEXEC_Fail;
	}

	if (mThrowFlag & THROW_DoThrow) {
		mTargetPiki->mBrain->start(ACT_Free, nullptr);
		mTargetPiki->mFsm->transit(mTargetPiki, Game::PIKISTATE_Flying, nullptr);
		mThrowFlag            = THROW_Null;
		Vector3f pikiPos      = mParent->getPosition();
		f32 y                 = mWayPoint->mPosition.y - pikiPos.y;
		Vector2f sep          = Vector2f(mWayPoint->mPosition.x - pikiPos.x, mWayPoint->mPosition.z - pikiPos.z);
		f32 dist              = sep.length();
		f32 angleDist         = JMAAtan2Radian(sep.x, sep.y);
		mTargetPiki->mFaceDir = roundAng(angleDist);

		f32 factor = 0.5f;
		f32 height = mTargetPiki->getThrowHeight() + absF(y) + 50.0f;
		if ((int)mTargetPiki->mPikiKind == Game::Purple) {
			factor *= 0.5f;
		}

		f32 yVel = factor * (0.5f * Game::_aiConstants->mGravity.mData) + (height / factor);

		f32 throwDist = dist / (2.0f * factor);

		mTargetPiki->mSimVelocity = Vector3f(pikmin2_sinf(angleDist) * throwDist, yVel, pikmin2_cosf(angleDist) * throwDist);
		mTargetPiki->mVelocity    = mTargetPiki->mSimVelocity;

	} else if (mThrowFlag & THROW_Stop) {
		return ACTEXEC_Success;
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
	stfd     f28, 0x40(r1)
	psq_st   f28, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	li       r4, 0x21
	lwz      r3, 4(r3)
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80239638
	li       r3, 2
	b        lbl_8023982C

lbl_80239638:
	lbz      r3, 0x14(r31)
	clrlwi.  r0, r3, 0x1f
	beq      lbl_80239818
	lwz      r3, 0x1c(r31)
	li       r4, 1
	li       r5, 0
	lwz      r3, 0x294(r3)
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
	lwz      r4, 0x1c(r31)
	li       r5, 6
	li       r6, 0
	lwz      r3, 0x28c(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	addi     r3, r1, 8
	stb      r0, 0x14(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x20(r31)
	lfs      f0, 0x10(r1)
	lfs      f2, 0x54(r3)
	lfs      f1, 0x4c(r3)
	fsubs    f2, f2, f0
	lfs      f0, 8(r1)
	lfs      f4, 0x50(r3)
	lfs      f3, 0xc(r1)
	fsubs    f1, f1, f0
	fmuls    f5, f2, f2
	lfs      f0, lbl_8051A508@sda21(r2)
	fsubs    f29, f4, f3
	fmadds   f30, f1, f1, f5
	fcmpo    cr0, f30, f0
	ble      lbl_802396E4
	ble      lbl_802396E8
	frsqrte  f0, f30
	fmuls    f30, f0, f30
	b        lbl_802396E8

lbl_802396E4:
	fmr      f30, f0

lbl_802396E8:
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f31, f1
	bl       roundAng__Ff
	lwz      r3, 0x1c(r31)
	fabs     f29, f29
	lfs      f28, lbl_8051A50C@sda21(r2)
	stfs     f1, 0x1fc(r3)
	lwz      r3, 0x1c(r31)
	bl       getThrowHeight__Q24Game4PikiFv
	frsp     f2, f29
	lwz      r5, 0x1c(r31)
	lfs      f0, lbl_8051A510@sda21(r2)
	lbz      r0, 0x2b8(r5)
	fadds    f1, f1, f2
	cmpwi    r0, 3
	fadds    f2, f0, f1
	bne      lbl_8023973C
	lfs      f0, lbl_8051A50C@sda21(r2)
	fmuls    f28, f28, f0

lbl_8023973C:
	lfs      f1, lbl_8051A514@sda21(r2)
	fdivs    f2, f2, f28
	lwz      r3, _aiConstants__4Game@sda21(r13)
	lfs      f0, lbl_8051A508@sda21(r2)
	lfs      f4, lbl_8051A50C@sda21(r2)
	lfs      f3, 0x28(r3)
	fmuls    f1, f1, f28
	fmuls    f3, f4, f3
	fmr      f4, f31
	fdivs    f5, f30, f1
	fcmpo    cr0, f31, f0
	fmadds   f3, f28, f3, f2
	bge      lbl_80239774
	fneg     f4, f31

lbl_80239774:
	lfs      f2, lbl_8051A518@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051A508@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f4, f2
	fcmpo    cr0, f31, f0
	fctiwz   f0, f1
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f1, f5, f0
	bge      lbl_802397D0
	lfs      f0, lbl_8051A51C@sda21(r2)
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_802397E8

lbl_802397D0:
	fmuls    f0, f31, f2
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_802397E8:
	fmuls    f0, f5, f0
	stfs     f0, 0x200(r5)
	stfs     f3, 0x204(r5)
	stfs     f1, 0x208(r5)
	lwz      r3, 0x1c(r31)
	lfs      f0, 0x200(r3)
	stfs     f0, 0x1e4(r3)
	lfs      f0, 0x204(r3)
	stfs     f0, 0x1e8(r3)
	lfs      f0, 0x208(r3)
	stfs     f0, 0x1ec(r3)
	b        lbl_80239828

lbl_80239818:
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_80239828
	li       r3, 0
	b        lbl_8023982C

lbl_80239828:
	li       r3, 1

lbl_8023982C:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	lwz      r0, 0x84(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80239860
 * Size:	00002C
 */
void ActRescue::onKeyEvent(SysShape::KeyEvent const& event)
{
	if (event.mType == KEYEVENT_2) {
		mThrowFlag |= THROW_DoThrow;
	} else {
		mThrowFlag |= THROW_Stop;
	}
}

/*
 * --INFO--
 * Address:	8023988C
 * Size:	000004
 */
void ActRescue::emotion_success() { }

/*
 * --INFO--
 * Address:	80239890
 * Size:	000004
 */
void ActRescue::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80239894
 * Size:	000004
 */
void ActRescue::cleanup() { }

/*
 * --INFO--
 * Address:	80239898
 * Size:	000004
 */
void ActRescue::collisionCallback(Game::Piki* piki, Game::CollEvent& event) { }

} // namespace PikiAI
