#include "Game/Entities/Tank.h"
#include "Game/MapMgr.h"

namespace Game {
namespace Tank {

/*
 * --INFO--
 * Address:	80275D8C
 * Size:	000138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	80275EC4
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	80275EC8
 * Size:	00009C
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	mCautionTimer = 128.0f;
	mJoint        = mModel->getJoint("hoppe");
	_2F0          = 0.0f;
	mCautionTimer = 0.0f;
	mIsBlowing    = 0;
	_2E4          = 0.0f;
	_2E8          = 1.0f;
	_2F4          = 0.0f;

	setupEffect();

	mFsm->start(this, TANK_Wait, nullptr);
}

/*
 * --INFO--
 * Address:	80275F68
 * Size:	000050
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishEffect();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	80275FB8
 * Size:	00004C
 */
void Obj::doUpdate()
{
	updateCaution();
	updateEmit();
	mFsm->exec(this);
}

/*
 * --INFO--
 * Address:	80276004
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80276008
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80276028
 * Size:	00004C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	80276074
 * Size:	000090
 */
void Obj::getShadowParam(ShadowParam& param)
{
	getCommonEffectPos(param.mPosition);
	param.mPosition.y               = 2.5f + mPosition.y;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	if (isEvent(1, EB2_IsEarthquake)) {
		param.mBoundingSphere.mRadius = 50.0f;
	} else {
		param.mBoundingSphere.mRadius = 20.0f;
	}

	param.mSize = 15.0f;
}

/*
 * --INFO--
 * Address:	80276104
 * Size:	000054
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	if (mIsBlowing) {
		_2E4 = 0.0f;
		finishEffect();
	}
}

/*
 * --INFO--
 * Address:	80276158
 * Size:	00004C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	if (mIsBlowing) {
		startEffect();
	}
}

/*
 * --INFO--
 * Address:	802761A4
 * Size:	000054
 */
void Obj::doStartEarthquakeFitState()
{
	EnemyBase::doStartEarthquakeFitState();
	if (mIsBlowing) {
		_2E4 = 0.0f;
		finishEffect();
	}
}

/*
 * --INFO--
 * Address:	802761F8
 * Size:	00004C
 */
void Obj::doFinishEarthquakeFitState()
{
	EnemyBase::doFinishEarthquakeFitState();
	if (mIsBlowing) {
		startEffect();
	}
}

/*
 * --INFO--
 * Address:	80276244
 * Size:	000040
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/*
 * --INFO--
 * Address:	80276288
 * Size:	000040
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/*
 * --INFO--
 * Address:	802762CC
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(6, nullptr); }

/*
 * --INFO--
 * Address:	802762F4
 * Size:	00002C
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	80276320
 * Size:	00002C
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	8027634C
 * Size:	0000C4
 */
Vector3f Obj::getOffsetForMapCollision()
{
	if (isAlive()) {
		return Vector3f::zero;
	}

	Vector3f effectPos;
	getCommonEffectPos(effectPos);
	effectPos.x -= mPosition.x;
	effectPos.y = 0.0f;
	effectPos.z -= mPosition.z;
	return effectPos;
}

/*
 * --INFO--
 * Address:	80276410
 * Size:	000094
 */
void Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(4);

	mWalkSmokeMgr.setup(0, mModel, "rsuneR", 2.0f);
	mWalkSmokeMgr.setup(1, mModel, "rsuneL", 2.0f);
	mWalkSmokeMgr.setup(2, mModel, "fsuneR", 3.0f);
	mWalkSmokeMgr.setup(3, mModel, "fsuneL", 3.0f);
}

/*
 * --INFO--
 * Address:	802764A4
 * Size:	000008
 */
WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr() { return &mWalkSmokeMgr; }

/*
 * --INFO--
 * Address:	802764AC
 * Size:	000054
 */
void Obj::getCommonEffectPos(Vector3f& pos)
{
	Sys::Sphere sphere;
	getBoundingSphere(sphere);
	pos = sphere.mPosition;
}

/*
 * --INFO--
 * Address:	80276500
 * Size:	000338
 */
bool Obj::isAttackable(bool check)
{
	Vector3f targetPos = Vector3f(_2CC);
	const f32 theta    = getFaceDir();

	Vector3f dir = Vector3f(pikmin2_sinf(theta), 0.0f, pikmin2_cosf(theta));

	f32 cosTheta, sinTheta;
	sinTheta = dir.x;
	cosTheta = -dir.z;

	f32 ratio = C_PARMS->mGeneral.mMaxAttackRange.mValue;
	if (check) {
		ratio = emitCollideRatio(dir, targetPos, ratio);
	}

	f32 halfRatio = 0.5f * ratio;
	Sys::Sphere sphere;
	sphere.mPosition = Vector3f(dir.x * halfRatio + targetPos.x, targetPos.y, dir.z * halfRatio + targetPos.z);
	sphere.mRadius   = halfRatio;

	CellIteratorArg iterArg(sphere);
	iterArg._1C = 1;

	CellIterator iter(iterArg);

	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		if (creature->isAlive() && (creature->isNavi() || creature->isPiki() && static_cast<FakePiki*>(creature)->isPikmin())) {
			Vector3f creaturePos = creature->getPosition();

			Vector3f diff = creaturePos - targetPos;
			Parms* parms  = C_PARMS;
			f32 absY      = absVal(diff.y);
			if (absY < *parms->mGeneral.mAttackRadius()) {
				Vector3f angle(cosTheta, 0.0f, sinTheta);
				if (absVal(dot(angle, diff)) < *parms->mGeneral.mAttackRadius()) {
					f32 dotProd = dot(dir, diff);
					if (dotProd < ratio && dotProd > 0.0f) {
						if (check) {
							interactCreature(creature);
						} else {
							mTargetCreature = creature;
							return true;
						}
					}
				}
			}
		}
	}

	return check;
}

/*
 * --INFO--
 * Address:	8027683C
 * Size:	000228
 */
f32 Obj::emitCollideRatio(Vector3f& dir, Vector3f& pos, f32 range)
{
	f32 scaledRange = range * _2E4;
	if (0.0f == _2E4) {
		_2E4 = 0.001f;
		_2E8 = 1.0f;
	}

	if (_2E4 < _2E8) {
		// this bit needs fixing
		Vector3f vec = dir * scaledRange;
		vec += pos;
		vec.y += 10.0f;

		Vector3f ballPos = dir * C_PARMS->mGeneral.mMaxAttackRange.mValue;
		Sys::Sphere sphere(ballPos, 0.0f);
		vec.z = C_PARMS->mCreatureProps.mProps.mWallReflection.mValue;
		MoveInfo moveInfo(&sphere, &vec, 0.0f);
		moveInfo.mInfoOrigin = static_cast<Creature*>(this);

		mapMgr->traceMove(moveInfo, sys->mDeltaTime);

		if (moveInfo.mBounceTriangle || moveInfo.mWallTriangle) {
			_2E8 = _2E4;
		} else {
			_2E4 += 2.0f * sys->mDeltaTime;
			if (_2E4 > _2E8) {
				_2E4 = _2E8;
			}
		}

		if (_2E8 < 1.0f) {
			stopEffectRadius(5.0f + scaledRange);
		}
	}

	if (_2E8 < 1.0f) {
		return 2.5f + scaledRange;
	}

	return scaledRange;
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stw      r31, 0xcc(r1)
	mr       r31, r3
	lfs      f0, lbl_8051B2F4@sda21(r2)
	lfs      f2, 0x2e4(r3)
	fcmpu    cr0, f0, f2
	fmuls    f31, f1, f2
	bne      lbl_8027687C
	lfs      f1, lbl_8051B340@sda21(r2)
	lfs      f0, lbl_8051B2F8@sda21(r2)
	stfs     f1, 0x2e4(r31)
	stfs     f0, 0x2e8(r31)

lbl_8027687C:
	lfs      f1, 0x2e4(r31)
	lfs      f0, 0x2e8(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_80276A28
	lfs      f5, 4(r4)
	lis      r3, sincosTable___5JMath@ha
	lfs      f3, 0(r4)
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f5, f5, f31
	lfs      f6, 8(r4)
	lfs      f1, 4(r5)
	fmuls    f3, f3, f31
	lfs      f2, 0(r5)
	fmuls    f6, f6, f31
	lfs      f0, 8(r5)
	fadds    f5, f5, f1
	lfs      f1, lbl_8051B344@sda21(r2)
	fadds    f3, f3, f2
	fadds    f6, f6, f0
	lfs      f0, lbl_8051B2FC@sda21(r2)
	fadds    f5, f5, f1
	stfs     f3, 0x14(r1)
	li       r6, 0
	lfs      f4, lbl_8051B314@sda21(r2)
	stfs     f5, 0x18(r1)
	addi     r8, r1, 0x14
	lfs      f2, lbl_8051B2F4@sda21(r2)
	addi     r7, r1, 8
	stfs     f6, 0x1c(r1)
	li       r0, -1
	lfs      f1, 0x800(r3)
	stfs     f0, 0x20(r1)
	lfs      f0, lbl_8051B348@sda21(r2)
	lfs      f5, 0(r4)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f5, 8(r1)
	lwz      r5, sys@sda21(r13)
	lfs      f7, 4(r4)
	stfs     f7, 0xc(r1)
	lfs      f6, 8(r4)
	addi     r4, r1, 0x24
	stfs     f6, 0x10(r1)
	lwz      r9, 0xc0(r31)
	lfs      f3, 0x564(r9)
	fmuls    f3, f4, f3
	fmuls    f5, f5, f3
	fmuls    f4, f7, f3
	fmuls    f3, f6, f3
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f3, 0x10(r1)
	lfs      f3, 0x4c(r9)
	stw      r6, 0x38(r1)
	stw      r8, 0x24(r1)
	stw      r7, 0x28(r1)
	stfs     f3, 0x2c(r1)
	stfs     f2, 0x30(r1)
	stw      r6, 0x34(r1)
	stw      r6, 0x68(r1)
	stb      r6, 0x98(r1)
	stb      r6, 0x3d(r1)
	stb      r6, 0x3c(r1)
	stw      r6, 0x6c(r1)
	stb      r6, 0xb4(r1)
	stw      r6, 0xb8(r1)
	stfs     f1, 0x50(r1)
	stfs     f0, 0x54(r1)
	stw      r0, 0xbc(r1)
	stw      r6, 0x70(r1)
	stb      r6, 0x3e(r1)
	stw      r31, 0x38(r1)
	lwz      r12, 4(r3)
	lfs      f1, 0x54(r5)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x68(r1)
	cmplwi   r0, 0
	bne      lbl_802769C4
	lwz      r0, 0x6c(r1)
	cmplwi   r0, 0
	beq      lbl_802769D0

lbl_802769C4:
	lfs      f0, 0x2e4(r31)
	stfs     f0, 0x2e8(r31)
	b        lbl_802769FC

lbl_802769D0:
	lwz      r3, sys@sda21(r13)
	lfs      f2, lbl_8051B314@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, 0x2e4(r31)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2e4(r31)
	lfs      f0, 0x2e4(r31)
	lfs      f1, 0x2e8(r31)
	fcmpo    cr0, f0, f1
	ble      lbl_802769FC
	stfs     f1, 0x2e4(r31)

lbl_802769FC:
	lfs      f1, 0x2e8(r31)
	lfs      f0, lbl_8051B2F8@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80276A28
	mr       r3, r31
	lfs      f0, lbl_8051B34C@sda21(r2)
	lwz      r12, 0(r31)
	fadds    f1, f0, f31
	lwz      r12, 0x31c(r12)
	mtctr    r12
	bctrl

lbl_80276A28:
	lfs      f1, 0x2e8(r31)
	lfs      f0, lbl_8051B2F8@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80276A44
	lfs      f0, lbl_8051B2FC@sda21(r2)
	fadds    f1, f0, f31
	b        lbl_80276A48

lbl_80276A44:
	fmr      f1, f31

lbl_80276A48:
	psq_l    f31, 216(r1), 0, qr0
	lwz      r0, 0xe4(r1)
	lfd      f31, 0xd0(r1)
	lwz      r31, 0xcc(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80276A68
 * Size:	000130
 */
void Obj::updateEmit()
{
	Matrixf* mat = mJoint->getWorldMatrix();
	if (mat) {
		mat->getTranslation(_2CC);
		mat->getBasis(0, _2D8);

		_2D8.normalise();

		// this bit has issues.
		Vector3f vec = _2D8 * 10.0f;
		vec.y -= 10.0f;

		_2CC += vec;
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2c0(r3)
	bl       getWorldMatrix__Q28SysShape5JointFv
	cmplwi   r3, 0
	beq      lbl_80276B84
	lfs      f0, 0xc(r3)
	lfs      f1, lbl_8051B2F4@sda21(r2)
	stfs     f0, 0x2cc(r31)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0x2d0(r31)
	lfs      f0, 0x2c(r3)
	stfs     f0, 0x2d4(r31)
	lfs      f0, 0(r3)
	stfs     f0, 0x2d8(r31)
	lfs      f0, 0x10(r3)
	stfs     f0, 0x2dc(r31)
	lfs      f0, 0x20(r3)
	stfs     f0, 0x2e0(r31)
	lfs      f3, 0x2d8(r31)
	lfs      f2, 0x2dc(r31)
	fmuls    f0, f3, f3
	lfs      f4, 0x2e0(r31)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80276B04
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80276B08
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80276B08

lbl_80276B04:
	fmr      f2, f1

lbl_80276B08:
	lfs      f0, lbl_8051B2F4@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80276B40
	lfs      f1, lbl_8051B2F8@sda21(r2)
	lfs      f0, 0x2d8(r31)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0x2d8(r31)
	lfs      f0, 0x2dc(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x2dc(r31)
	lfs      f0, 0x2e0(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x2e0(r31)

lbl_80276B40:
	lfs      f2, 0x2d8(r31)
	lfs      f1, lbl_8051B344@sda21(r2)
	lfs      f3, 0x2dc(r31)
	fmuls    f2, f2, f1
	lfs      f0, 0x2cc(r31)
	fmuls    f3, f3, f1
	lfs      f4, 0x2e0(r31)
	fadds    f0, f0, f2
	fsubs    f3, f3, f1
	fmuls    f4, f4, f1
	stfs     f0, 0x2cc(r31)
	lfs      f0, 0x2d0(r31)
	fadds    f0, f0, f3
	stfs     f0, 0x2d0(r31)
	lfs      f0, 0x2d4(r31)
	fadds    f0, f0, f4
	stfs     f0, 0x2d4(r31)

lbl_80276B84:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80276B98
 * Size:	000050
 */
void Obj::updateCaution()
{
	if (isEvent(0, EB_HasCollisionOccurred) || isEvent(0, EB_IsTakingDamage) || mStuckPikminCount) {
		mCautionTimer = 0.0f;
	}

	if (mCautionTimer < C_PARMS->mGeneral.mAlertDuration.mValue) {
		mCautionTimer += sys->mDeltaTime;
	}
}

/*
 * --INFO--
 * Address:	80276BE8
 * Size:	000024
 */
f32 Obj::getViewAngle()
{
	if (mCautionTimer < C_PARMS->mGeneral.mAlertDuration.mValue) {
		return 180.0f;
	}

	return C_PARMS->mGeneral.mViewAngle.mValue;
}

} // namespace Tank
} // namespace Game
