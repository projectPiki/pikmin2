#include "types.h"
#include "Game/Entities/Miulin.h"
#include "Game/generalEnemyMgr.h"
#include "Game/Entities/ShijimiChou.h"
#include "Game/PikiMgr.h"
#include "Game/EnemyFunc.h"
#include "Game/Navi.h"
#include "efx/TMiuAttack.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Miulin {

/*
 * --INFO--
 * Address:	80364454
 * Size:	000020
 */
void Obj::setParameters() { EnemyBase::setParameters(); }

/*
 * --INFO--
 * Address:	80364474
 * Size:	0000B0
 */
void Obj::birth(Vector3f& position, f32 faceDirection)
{
	EnemyBase::birth(position, faceDirection);
	ShijimiChou::Mgr* specMgr = static_cast<ShijimiChou::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_ShijimiChou));
	if (specMgr) {
		EnemyBirthArg arg;
		arg.mPosition = position;
		arg.mPosition.y += 80.0f;
		arg.mFaceDir = faceDirection;

		specMgr->createGroupByEnemy(arg, this, 5, true);
	}
}

/*
 * --INFO--
 * Address:	80364524
 * Size:	0000B4
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	mKoshiJoint = mModel->getJoint("jnt_koshi");
	P2ASSERTLINE(74, mKoshiJoint);
	_2D0         = 0;
	_2D4         = mHomePosition;
	_2E0         = 0;
	mIsSearching = false;
	mFsm->start(this, MIULIN_Wait, nullptr);
}

/*
 * --INFO--
 * Address:	803645D8
 * Size:	000140
 */
Obj::Obj()
{
	mFsm      = nullptr;
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	80364764
 * Size:	000080
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	mAlertTimer += sys->mDeltaTime;

	if (mTargetCreature && !mTargetCreature->isAlive()) {
		mTargetCreature = nullptr;
	}
}

/*
 * --INFO--
 * Address:	803647E4
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	803647E8
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80364808
 * Size:	000088
 */
void Obj::getShadowParam(ShadowParam& param)
{
	mKoshiJoint->getWorldMatrix()->getBasis(3, param.mPosition);
	param.mPosition.y               = mPosition.y + 2.0f;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	param.mBoundingSphere.mRadius   = 20.0f;
	param.mSize                     = 25.0f;
}

/*
 * --INFO--
 * Address:	80364890
 * Size:	000040
 */
void Obj::doSimulation(f32 simSpeed)
{
	_2D0--;
	if (_2D0 < 0) {
		_2D0 = 0;
	}

	EnemyBase::doSimulation(simSpeed);
}

/*
 * --INFO--
 * Address:	803648D0
 * Size:	00002C
 */
void Obj::wallCallback(MoveInfo const& moveInfo)
{
	_2D0            = 120;
	mTargetCreature = nullptr;
	mGoalPosition   = mHomePosition;
}

/*
 * --INFO--
 * Address:	803648FC
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(MIULINANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	80364924
 * Size:	00006C
 */
void Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(2);
	mWalkSmokeMgr.setup(0, mModel, "jnt_footR", 5.0f);
	mWalkSmokeMgr.setup(1, mModel, "jnt_footL", 5.0f);
}

/*
 * --INFO--
 * Address:	80364990
 * Size:	000008
 */
Game::WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr() { return &mWalkSmokeMgr; }

/*
 * --INFO--
 * Address:	80364998
 * Size:	000534
 */
bool Obj::isAttackStart()
{
	f32 atkRadius    = SQUARE(C_PARMS->mGeneral.mAttackRadius.mValue);
	f32 minAtkRange  = SQUARE(C_PROPERPARMS.mMinAttackRange.mValue);
	f32 contAtkAngle = PI * (DEG2RAD * (C_PROPERPARMS.mContinuousPressAngle.mValue));

	if (mTargetCreature) {
		if (FABS(getAngDist(mTargetCreature)) <= contAtkAngle) {
			Vector3f pos       = Vector3f(mPosition.x, 0.0f, mPosition.z);
			Vector3f targetPos = Vector3f(mTargetCreature->getPosition().x, 0.0f, mTargetCreature->getPosition().z);

			f32 sqrDist = sqrDistanceXZ(targetPos, pos);
			if (sqrDist < minAtkRange + atkRadius && sqrDist > minAtkRange - atkRadius) {
				return true;
			}
		}
	}

	Iterator<Piki> iter(pikiMgr);

	CI_LOOP(iter)
	{
		Piki* piki = *iter;

		if (piki->isSearchable()) {
			if (FABS(getAngDist(piki)) <= contAtkAngle) {
				Vector3f pos       = Vector3f(mPosition.x, 0.0f, mPosition.z);
				Vector3f targetPos = Vector3f(piki->getPosition().x, 0.0f, piki->getPosition().z);

				f32 sqrDist = sqrDistanceXZ(targetPos, pos);
				if (sqrDist < minAtkRange + atkRadius && sqrDist > minAtkRange - atkRadius) {
					mTargetCreature = piki;
					return true;
				}
			}
		}
	}

	return false;
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stfd     f31, 0x110(r1)
	psq_st   f31, 280(r1), 0, qr0
	stfd     f30, 0x100(r1)
	psq_st   f30, 264(r1), 0, qr0
	stfd     f29, 0xf0(r1)
	psq_st   f29, 248(r1), 0, qr0
	stfd     f28, 0xe0(r1)
	psq_st   f28, 232(r1), 0, qr0
	stfd     f27, 0xd0(r1)
	psq_st   f27, 216(r1), 0, qr0
	stfd     f26, 0xc0(r1)
	psq_st   f26, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	mr       r31, r3
	lfs      f1, lbl_8051E830@sda21(r2)
	lwz      r3, 0xc0(r3)
	lwz      r4, 0x230(r31)
	lfs      f0, 0x844(r3)
	lfs      f2, 0x5b4(r3)
	cmplwi   r4, 0
	fmuls    f0, f1, f0
	lfs      f3, 0x90c(r3)
	lfs      f1, lbl_8051E82C@sda21(r2)
	fmuls    f30, f2, f2
	fmuls    f29, f3, f3
	fmuls    f28, f1, f0
	beq      lbl_80364B3C
	lwz      r12, 0(r4)
	addi     r3, r1, 0x50
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x50(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x5c
	lfs      f1, 0x54(r1)
	lfs      f0, 0x58(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x40(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x5c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x64(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x38(r1)
	lfs      f0, 0x40(r1)
	lfs      f4, 0x60(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x44(r1)
	stfs     f4, 0x48(r1)
	stfs     f3, 0x4c(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f28
	cror     2, 0, 2
	bne      lbl_80364B3C
	lwz      r4, 0x230(r31)
	addi     r3, r1, 0x80
	lfs      f26, 0x194(r31)
	lwz      r12, 0(r4)
	lfs      f27, 0x18c(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x230(r31)
	addi     r3, r1, 0x8c
	lfs      f31, 0x88(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f1, f31, f26
	lfs      f2, 0x8c(r1)
	fadds    f0, f29, f30
	fsubs    f2, f2, f27
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80364B3C
	fsubs    f0, f29, f30
	fcmpo    cr0, f1, f0
	ble      lbl_80364B3C
	li       r3, 1
	b        lbl_80364E80

lbl_80364B3C:
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0xa4(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x98(r1)
	stw      r0, 0x9c(r1)
	stw      r3, 0xa0(r1)
	bne      lbl_80364B7C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x9c(r1)
	b        lbl_80364C04

lbl_80364B7C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x9c(r1)
	b        lbl_80364BE8

lbl_80364B94:
	lwz      r3, 0xa0(r1)
	lwz      r4, 0x9c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xa4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80364C04
	lwz      r3, 0xa0(r1)
	lwz      r4, 0x9c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x9c(r1)

lbl_80364BE8:
	lwz      r12, 0x98(r1)
	addi     r3, r1, 0x98
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80364B94

lbl_80364C04:
	fadds    f31, f29, f30
	fsubs    f30, f29, f30
	b        lbl_80364E5C

lbl_80364C10:
	lwz      r3, 0xa0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	li       r30, 0
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80364C74
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80364C74
	mr       r3, r29
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80364C74
	li       r30, 1

lbl_80364C74:
	clrlwi.  r0, r30, 0x18
	beq      lbl_80364DA0
	mr       r4, r29
	addi     r3, r1, 0x20
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x20(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	lwz      r12, 8(r12)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 8(r1)
	lfs      f0, 0x10(r1)
	lfs      f4, 0x30(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f28
	cror     2, 0, 2
	bne      lbl_80364DA0
	mr       r4, r29
	addi     r3, r1, 0x68
	lwz      r12, 0(r29)
	lfs      f29, 0x194(r31)
	lwz      r12, 8(r12)
	lfs      f27, 0x18c(r31)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x74
	lwz      r12, 0(r29)
	lfs      f26, 0x70(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f26, f29
	lfs      f1, 0x74(r1)
	fsubs    f1, f1, f27
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f31
	bge      lbl_80364DA0
	fcmpo    cr0, f0, f30
	ble      lbl_80364DA0
	stw      r29, 0x230(r31)
	li       r3, 1
	b        lbl_80364E80

lbl_80364DA0:
	lwz      r0, 0xa4(r1)
	cmplwi   r0, 0
	bne      lbl_80364DCC
	lwz      r3, 0xa0(r1)
	lwz      r4, 0x9c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x9c(r1)
	b        lbl_80364E5C

lbl_80364DCC:
	lwz      r3, 0xa0(r1)
	lwz      r4, 0x9c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x9c(r1)
	b        lbl_80364E40

lbl_80364DEC:
	lwz      r3, 0xa0(r1)
	lwz      r4, 0x9c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xa4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80364E5C
	lwz      r3, 0xa0(r1)
	lwz      r4, 0x9c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x9c(r1)

lbl_80364E40:
	lwz      r12, 0x98(r1)
	addi     r3, r1, 0x98
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80364DEC

lbl_80364E5C:
	lwz      r3, 0xa0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x9c(r1)
	cmplw    r4, r3
	bne      lbl_80364C10
	li       r3, 0

lbl_80364E80:
	psq_l    f31, 280(r1), 0, qr0
	lfd      f31, 0x110(r1)
	psq_l    f30, 264(r1), 0, qr0
	lfd      f30, 0x100(r1)
	psq_l    f29, 248(r1), 0, qr0
	lfd      f29, 0xf0(r1)
	psq_l    f28, 232(r1), 0, qr0
	lfd      f28, 0xe0(r1)
	psq_l    f27, 216(r1), 0, qr0
	lfd      f27, 0xd0(r1)
	psq_l    f26, 200(r1), 0, qr0
	lfd      f26, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r0, 0x124(r1)
	lwz      r29, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	80364ECC
 * Size:	0004A4
 */
bool Obj::isFindTarget()
{
	f32 searchAngle = PI * (DEG2RAD * C_PARMS->mGeneral.mSearchAngle.mValue);
	mTargetCreature = nullptr;

	if (isNowCaution()) {
		searchAngle = PI;
	} else if (isProhibitedSearch()) {
		return false;
	}

	f32 searchDist = C_PARMS->mGeneral.mSearchDistance.mValue;
	searchDist *= searchDist;

	mTargetCreature = EnemyFunc::getNearestNavi(this, C_PARMS->mGeneral.mSearchAngle.mValue, C_PARMS->mGeneral.mSearchDistance.mValue,
	                                            &searchDist, nullptr);

	Iterator<Piki> iter(pikiMgr);

	f32 minDist = 10.0f;
	minDist *= minDist;

	CI_LOOP(iter)
	{
		Piki* piki = *iter;

		if (piki->isSearchable() && !piki->isStickTo()) {
			// Vector3f pikiPos = piki->getPosition();
			// Vector3f pos     = getPosition();

			// f32 angleDist = angDist(angXZ(pikiPos.x, pikiPos.z, pos), getFaceDir());
			if (FABS(getAngDist(piki)) <= searchAngle) {
				Vector3f pos       = Vector3f(mPosition.x, 0.0f, mPosition.z);
				Vector3f targetPos = Vector3f(piki->getPosition().x, 0.0f, piki->getPosition().z);

				f32 sqrDist = sqrDistanceXZ(targetPos, pos);
				if (sqrDist < searchDist && sqrDist > minDist) {
					mTargetCreature = piki;
					searchDist      = sqrDist;
				}
			}
		}
	}

	if (mTargetCreature) {
		mGoalPosition = mTargetCreature->getPosition();
		mIsSearching  = false;
		return true;
	}

	return false;
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stfd     f28, 0x90(r1)
	psq_st   f28, 152(r1), 0, qr0
	stfd     f27, 0x80(r1)
	psq_st   f27, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	mr       r31, r3
	lfs      f1, lbl_8051E830@sda21(r2)
	lwz      r4, 0xc0(r3)
	li       r0, 0
	lfs      f2, lbl_8051E82C@sda21(r2)
	lfs      f0, 0x49c(r4)
	fmuls    f0, f1, f0
	stw      r0, 0x230(r3)
	fmuls    f31, f2, f0
	bl       isNowCaution__Q34Game6Miulin3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80364F44
	lfs      f31, lbl_8051E82C@sda21(r2)
	b        lbl_80364F5C

lbl_80364F44:
	mr       r3, r31
	bl       isProhibitedSearch__Q34Game6Miulin3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80364F5C
	li       r3, 0
	b        lbl_8036532C

lbl_80364F5C:
	lwz      r6, 0xc0(r31)
	mr       r3, r31
	addi     r4, r1, 8
	li       r5, 0
	lfs      f1, 0x44c(r6)
	fmuls    f0, f1, f1
	stfs     f1, 8(r1)
	stfs     f0, 8(r1)
	lwz      r6, 0xc0(r31)
	lfs      f1, 0x49c(r6)
	lfs      f2, 0x44c(r6)
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	stw      r3, 0x230(r31)
	li       r0, 0
	lfs      f30, lbl_8051E834@sda21(r2)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	lwz      r3, pikiMgr__4Game@sda21(r13)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	fmuls    f30, f30, f30
	stw      r4, 0x60(r1)
	stw      r0, 0x6c(r1)
	stw      r0, 0x64(r1)
	stw      r3, 0x68(r1)
	bne      lbl_80364FD8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)
	b        lbl_803652C0

lbl_80364FD8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)
	b        lbl_80365044

lbl_80364FF0:
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803652C0
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)

lbl_80365044:
	lwz      r12, 0x60(r1)
	addi     r3, r1, 0x60
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80364FF0
	b        lbl_803652C0

lbl_80365064:
	lwz      r3, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	li       r30, 0
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803650C8
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803650C8
	mr       r3, r29
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_803650C8
	li       r30, 1

lbl_803650C8:
	clrlwi.  r0, r30, 0x18
	beq      lbl_80365204
	mr       r3, r29
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80365204
	mr       r4, r29
	addi     r3, r1, 0x24
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x24(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x30
	lfs      f1, 0x28(r1)
	lfs      f0, 0x2c(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x30(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x38(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0xc(r1)
	lfs      f0, 0x14(r1)
	lfs      f4, 0x34(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x18(r1)
	stfs     f4, 0x1c(r1)
	stfs     f3, 0x20(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f27, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f27
	bl       angDist__Fff
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f31
	cror     2, 0, 2
	bne      lbl_80365204
	mr       r4, r29
	addi     r3, r1, 0x48
	lwz      r12, 0(r29)
	lfs      f27, 0x194(r31)
	lwz      r12, 8(r12)
	lfs      f28, 0x18c(r31)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x54
	lwz      r12, 0(r29)
	lfs      f29, 0x50(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f1, f29, f27
	lfs      f2, 0x54(r1)
	lfs      f0, 8(r1)
	fsubs    f2, f2, f28
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80365204
	fcmpo    cr0, f1, f30
	ble      lbl_80365204
	stw      r29, 0x230(r31)
	stfs     f1, 8(r1)

lbl_80365204:
	lwz      r0, 0x6c(r1)
	cmplwi   r0, 0
	bne      lbl_80365230
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)
	b        lbl_803652C0

lbl_80365230:
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)
	b        lbl_803652A4

lbl_80365250:
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x6c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803652C0
	lwz      r3, 0x68(r1)
	lwz      r4, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x64(r1)

lbl_803652A4:
	lwz      r12, 0x60(r1)
	addi     r3, r1, 0x60
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80365250

lbl_803652C0:
	lwz      r3, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x64(r1)
	cmplw    r4, r3
	bne      lbl_80365064
	lwz      r4, 0x230(r31)
	cmplwi   r4, 0
	beq      lbl_80365328
	lwz      r12, 0(r4)
	addi     r3, r1, 0x3c
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x3c(r1)
	li       r0, 0
	li       r3, 1
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x40(r1)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x44(r1)
	stfs     f0, 0x2c4(r31)
	stb      r0, 0x2e4(r31)
	b        lbl_8036532C

lbl_80365328:
	li       r3, 0

lbl_8036532C:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	psq_l    f28, 152(r1), 0, qr0
	lfd      f28, 0x90(r1)
	psq_l    f27, 136(r1), 0, qr0
	lfd      f27, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r0, 0xd4(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80365370
 * Size:	00003C
 */
bool Obj::isOutOfTerritory() { return sqrDistanceXZ(mHomePosition, mPosition) > SQUARE(C_PARMS->mGeneral.mTerritoryRadius.mValue); }

/*
 * --INFO--
 * Address:	803653AC
 * Size:	000088
 */
bool Obj::isProhibitedSearch()
{
	if (_2D0 > 0) {
		return true;
	}

	if (mIsSearching) {
		f32 radius = C_PARMS->mGeneral.mTerritoryRadius.mValue;
		radius *= 0.7f;

		if (mFlickTimer > 0.0f) {
			mFlickTimer = 0.0f;
			return false;
		}

		if (sqrDistanceXZ(mHomePosition, mPosition) > SQUARE(radius)) {
			return true;
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	80365434
 * Size:	0000AC
 */
bool Obj::isStartWalk()
{
	f32 viewAngle = C_PARMS->mGeneral.mViewAngle.mValue;
	if (mFlickTimer > 0.0f) {
		viewAngle   = 180.0f;
		mFlickTimer = 0.0f;
	}

	mTargetCreature
	    = EnemyFunc::getNearestPikminOrNavi(this, viewAngle, C_PARMS->mGeneral.mSearchDistance.mValue, nullptr, nullptr, nullptr);

	if (mTargetCreature) {
		mGoalPosition = mTargetCreature->getPosition();
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	803654E0
 * Size:	00002C
 */
void Obj::setReturnState()
{
	mTargetCreature = nullptr;
	mIsSearching    = true;
	mGoalPosition   = mHomePosition;
}

/*
 * --INFO--
 * Address:	8036550C
 * Size:	000270
 */
void Obj::walkFunc()
{
	getMotionFrame();

	f32 dashSpeedMultiplier = 1.0f;
	f32 dashAnimScale       = 1.0f;

	if (mTargetCreature && FABS(getAngDist(mTargetCreature)) < PI * (DEG2RAD * C_PROPERPARMS.mDashableAngle.mValue)) {
		dashSpeedMultiplier = C_PROPERPARMS.mDashSpeedMultiplier.mValue;
		dashAnimScale       = C_PROPERPARMS.mDashAnimationScale.mValue;
		setEmotionExcitement();
	} else {
		setEmotionCaution();
	}

	setTargetVelocity(dashSpeedMultiplier);

	setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed * dashAnimScale);

	_2E0++;

	if (_2E0 > 120) {
		if (sqrDistanceXZ(mPosition, _2D4) < 900.0f) {
			_2D0            = 120;
			mTargetCreature = nullptr;
			mGoalPosition   = mHomePosition;
		}

		_2D4 = mPosition;
		_2E0 = 0;
	}
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stfd     f28, 0x50(r1)
	psq_st   f28, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lfs      f31, lbl_8051E81C@sda21(r2)
	lwz      r4, 0x230(r31)
	fmr      f30, f31
	cmplwi   r4, 0
	beq      lbl_80365634
	lwz      r12, 0(r4)
	addi     r3, r1, 0x2c
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x2c(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x38
	lfs      f1, 0x30(r1)
	lfs      f0, 0x34(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x38(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x40(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x14(r1)
	lfs      f0, 0x1c(r1)
	lfs      f4, 0x3c(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x20(r1)
	stfs     f4, 0x24(r1)
	stfs     f3, 0x28(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f29, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	lwz      r4, 0xc0(r31)
	fabs     f3, f1
	lfs      f1, lbl_8051E830@sda21(r2)
	lfs      f0, 0x8e4(r4)
	lfs      f2, lbl_8051E82C@sda21(r2)
	frsp     f3, f3
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	fcmpo    cr0, f3, f0
	bge      lbl_80365634
	lfs      f31, 0x86c(r4)
	mr       r3, r31
	lfs      f30, 0x894(r4)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	b        lbl_8036563C

lbl_80365634:
	mr       r3, r31
	bl       setEmotionCaution__Q24Game9EnemyBaseFv

lbl_8036563C:
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f0, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	fmuls    f29, f31, f0
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f28, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 8(r1)
	stfs     f31, 0xc(r1)
	stfs     f0, 0x10(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f2, f29, f28
	lfs      f0, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
	frsp     f3, f1
	mr       r3, r31
	fmuls    f1, f0, f30
	stfs     f2, 0x1d4(r31)
	fmuls    f0, f29, f3
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	lwz      r3, 0x2e0(r31)
	addi     r0, r3, 1
	stw      r0, 0x2e0(r31)
	lwz      r0, 0x2e0(r31)
	cmpwi    r0, 0x78
	ble      lbl_80365748
	lfs      f1, 0x194(r31)
	lfs      f0, 0x2dc(r31)
	lfs      f2, 0x18c(r31)
	fsubs    f3, f1, f0
	lfs      f1, 0x2d4(r31)
	lfs      f0, lbl_8051E840@sda21(r2)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80365728
	li       r3, 0x78
	li       r0, 0
	stw      r3, 0x2d0(r31)
	stw      r0, 0x230(r31)
	lfs      f0, 0x198(r31)
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2c4(r31)

lbl_80365728:
	lfs      f0, 0x18c(r31)
	li       r0, 0
	stfs     f0, 0x2d4(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x2d8(r31)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x2dc(r31)
	stw      r0, 0x2e0(r31)

lbl_80365748:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	lwz      r0, 0x94(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036577C
 * Size:	00017C
 */
f32 Obj::turnFunc(f32 factor)
{
	Vector3f targetPos = mGoalPosition;

	if (mTargetCreature) {
		targetPos = mTargetCreature->getPosition();
	}

	f32 angleDist = turnToTarget2(targetPos, factor * C_PARMS->mGeneral.mTurnSpeed(), factor * C_PARMS->mGeneral.mMaxTurnAngle());

	return FABS(angleDist);
}

/*
 * --INFO--
 * Address:	803658F8
 * Size:	000050
 */
bool Obj::isReachToGoal(f32 distance)
{
	if (mIsSearching) {
		distance = C_PARMS->mGeneral.mHomeRadius.mValue;
	}

	if (sqrDistanceXZ(mPosition, mGoalPosition) < SQUARE(distance)) {
		return true;
	}

	return false;
}

// sigh
static void fixData(f32& p1, f32& p2, f32& p3)
{
	p1 = RAND_MAX;
	p2 = -325.9493f;
	p3 = 325.9493f;
}

/*
 * --INFO--
 * Address:	80365948
 * Size:	00015C
 */
void Obj::setNextGoal()
{
	if (mIsSearching) {
		mGoalPosition = mHomePosition;
		return;
	}

	f32 radius    = C_PARMS->mGeneral.mTerritoryRadius.mValue;
	mGoalPosition = mHomePosition;

	f32 angle = TAU * randFloat();
	mGoalPosition.x += radius * sinf(angle);
	mGoalPosition.z += radius * cosf(angle);
}

/*
 * --INFO--
 * Address:	80365AA4
 * Size:	0002E0
 */
bool Obj::nextTargetTurnCheck()
{
	if (!isFindTarget()) {
		setNextGoal();
	}

	// SHOULD match when turnFunc matches, but turnFunc might need tweaking to make sure this matches.
	if (turnFunc(0.1f) < PI * (DEG2RAD * C_PROPERPARMS.mMaxTurnAngle())) {
		return false;
	}

	return true;
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stfd     f28, 0x50(r1)
	psq_st   f28, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r31, r3
	bl       isFindTarget__Q34Game6Miulin3ObjFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80365C0C
	lbz      r0, 0x2e4(r31)
	cmplwi   r0, 0
	beq      lbl_80365B10
	lfs      f0, 0x198(r31)
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2c4(r31)
	b        lbl_80365C0C

lbl_80365B10:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x198(r31)
	lfs      f31, 0x35c(r3)
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x2c4(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_8051E858@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f2, lbl_8051E844@sda21(r2)
	lfd      f0, 0x20(r1)
	lfs      f1, lbl_8051E850@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051E818@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f3, f1, f2
	fcmpo    cr0, f3, f0
	bge      lbl_80365B98
	lfs      f0, lbl_8051E848@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_80365BBC

lbl_80365B98:
	lfs      f0, lbl_8051E84C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_80365BBC:
	lfs      f1, 0x2bc(r31)
	lfs      f0, lbl_8051E818@sda21(r2)
	fmadds   f1, f31, f2, f1
	fcmpo    cr0, f3, f0
	stfs     f1, 0x2bc(r31)
	bge      lbl_80365BD8
	fneg     f3, f3

lbl_80365BD8:
	lfs      f1, lbl_8051E84C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f0, 0x2c4(r31)
	fmuls    f1, f3, f1
	fctiwz   f1, f1
	stfd     f1, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f1, 4(r3)
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2c4(r31)

lbl_80365C0C:
	lwz      r4, 0x230(r31)
	lwz      r30, 0xc0(r31)
	cmplwi   r4, 0
	lfs      f31, 0x2bc(r31)
	lfs      f28, 0x2c4(r31)
	beq      lbl_80365C40
	lwz      r12, 0(r4)
	addi     r3, r1, 0x14
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f31, 0x14(r1)
	lfs      f28, 0x1c(r1)

lbl_80365C40:
	lwz      r5, 0xc0(r31)
	mr       r4, r31
	lwz      r12, 0(r31)
	addi     r3, r1, 8
	lfs      f2, lbl_8051E860@sda21(r2)
	lfs      f1, 0x334(r5)
	lfs      f0, 0x30c(r5)
	lwz      r12, 8(r12)
	fmuls    f29, f2, f1
	fmuls    f30, f2, f0
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f31, f1
	fsubs    f2, f28, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f31, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f31
	bl       angDist__Fff
	fmr      f31, f1
	lfs      f0, lbl_8051E830@sda21(r2)
	lfs      f1, lbl_8051E82C@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f29, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f29
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80365CF4
	lfs      f0, lbl_8051E818@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_80365CF0
	fmr      f29, f1
	b        lbl_80365CF4

lbl_80365CF0:
	fneg     f29, f1

lbl_80365CF4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	fabs     f3, f31
	lfs      f1, lbl_8051E830@sda21(r2)
	lfs      f0, 0x1fc(r31)
	lfs      f2, lbl_8051E82C@sda21(r2)
	frsp     f3, f3
	stfs     f0, 0x1a8(r31)
	lfs      f0, 0x8bc(r30)
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	fcmpo    cr0, f3, f0
	bge      lbl_80365D48
	li       r3, 0
	b        lbl_80365D4C

lbl_80365D48:
	li       r3, 1

lbl_80365D4C:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r0, 0x94(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80365D84
 * Size:	0000D0
 */
bool Obj::isNowCaution()
{
	bool doBecomeAlert;
	f32 privateRad = C_PARMS->mGeneral.mPrivateRadius.mValue;
	if (EnemyFunc::isThereOlimar(this, privateRad, nullptr)) {
		doBecomeAlert = true;
	} else if (EnemyFunc::isTherePikmin(this, privateRad, nullptr)) {
		doBecomeAlert = true;
	} else {
		doBecomeAlert = false;
	}

	if (!doBecomeAlert) {
		doBecomeAlert = mHealth < C_PARMS->mGeneral.mLifeBeforeAlert.mValue;
	}

	if (doBecomeAlert) {
		mAlertTimer = 0.0f;
		return true;
	}

	return mAlertTimer < C_PARMS->mGeneral.mAlertDuration.mValue;
}

/*
 * --INFO--
 * Address:	80365E54
 * Size:	000028
 */
void Obj::landEffect() { EnemyBase::createBounceEffect(mPosition, 0.9f); }

/*
 * --INFO--
 * Address:	80365E7C
 * Size:	000144
 */
void Obj::attackEffect(Vector3f& effectPos)
{
	Matrixf mat;
	Vector3f pos = mPosition;
	Vector3f rotation(0.0f, mFaceDir, 0.0f);
	mat.makeTR(Vector3f::zero, rotation);
	PSMTXMultVec(mat.mMatrix.mtxView, (Vec*)&effectPos, (Vec*)&effectPos);

	pos += effectPos;

	efx::TMiuAttack fxAttack;
	efx::Arg fxArg(pos);

	fxAttack.create(&fxArg);

	if (mWaterBox) {
		createBounceEffect(mPosition, 0.8f);
	}
}
} // namespace Miulin
} // namespace Game
