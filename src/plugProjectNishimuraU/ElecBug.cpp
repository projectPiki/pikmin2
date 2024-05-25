#include "types.h"
#include "Dolphin/rand.h"
#include "Game/Entities/ElecBug.h"

namespace Game {
namespace ElecBug {

/**
 * @note Address: 0x8027AC88
 * @note Size: 0x138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
}

/**
 * @note Address: 0x8027ADC0
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x8027ADC4
 * @note Size: 0xA4
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	enableEvent(0, EB_Invulnerable);
	mInactiveTimer = randWeightFloat(10.0f);
	mStateTimer    = 0.0f;
	mPartner       = nullptr;
	setupEffect();
	mFsm->start(this, ELECBUG_Turn, nullptr);
}

/**
 * @note Address: 0x8027AE68
 * @note Size: 0x44
 */
void Obj::onKill(CreatureKillArg* arg)
{
	finishPartnerAndEffect();
	EnemyBase::onKill(arg);
}

/**
 * @note Address: 0x8027AEAC
 * @note Size: 0x48
 */
void Obj::doUpdate()
{
	mInactiveTimer += sys->mDeltaTime;
	mFsm->exec(this);
}

/**
 * @note Address: 0x8027AEF4
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics& gfx) { }

/**
 * @note Address: 0x8027AEF8
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x8027AF18
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x8027AF64
 * @note Size: 0x80
 */
void Obj::getShadowParam(ShadowParam& param)
{
	Matrixf* bodyJointMtx = mModel->getJoint("body")->getWorldMatrix();
	param.mPosition       = bodyJointMtx->getColumn(3);
	param.mPosition.y -= 5.0f;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	param.mBoundingSphere.mRadius   = 15.0f;
	param.mSize                     = 15.0f;
}

/**
 * @note Address: 0x8027AFE4
 * @note Size: 0x1E4
 */
void Obj::collisionCallback(CollEvent& event)
{
	if (event.mCollidingCreature && !isEvent(0, EB_Bittered)) {
		int stateID = getStateID();
		if (stateID == ELECBUG_Discharge || stateID == ELECBUG_ChildDischarge) {
			if (event.mCollidingCreature->isPiki() || event.mCollidingCreature->isNavi()) {
				Vector3f sep = event.mCollidingCreature->getPosition();
				Vector3f::getFlatDirectionFromTo(mPosition, sep);
				Vector3f dir = Vector3f(sep.x * C_GENERALPARMS.mSearchDistance(), C_GENERALPARMS.mSearchHeight(),
				                        sep.z * C_GENERALPARMS.mSearchDistance());

				if (event.mCollidingCreature->isNavi()) {
					dir.y = 0.0f;
				}

				InteractDenki denki(this, C_GENERALPARMS.mAttackDamage(), &dir);
				event.mCollidingCreature->stimulate(denki);
			}
		}
	}

	setCollEvent(event);
}

/**
 * @note Address: 0x8027B1C8
 * @note Size: 0x1BC
 */
bool Obj::pressCallBack(Creature* source, f32 damage, CollPart* part)
{
	if (isAlive() && !isEvent(0, EB_Bittered) && source && source->isPiki()) {
		int stateID = getStateID();
		if (stateID >= ELECBUG_Wait && stateID <= ELECBUG_ChildDischarge) {
			mFsm->transit(this, ELECBUG_Reverse, nullptr);

			if (stateID == ELECBUG_Discharge || stateID == ELECBUG_ChildDischarge) {
				Vector3f sep = source->getPosition();
				Vector3f::getFlatDirectionFromTo(mPosition, sep);
				Vector3f dir(sep.x * C_GENERALPARMS.mSearchDistance(), C_GENERALPARMS.mSearchHeight(),
				             sep.z * C_GENERALPARMS.mSearchDistance());
				InteractDenki denki(this, C_GENERALPARMS.mAttackDamage(), &dir);
				source->stimulate(denki);
			}

			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x8027B384
 * @note Size: 0x2C
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart) { return pressCallBack(creature, damage, collpart); }

/**
 * @note Address: 0x8027B3B0
 * @note Size: 0xC0
 */
bool Obj::earthquakeCallBack(Creature* source, f32 damage)
{
	if (isAlive() && !isEvent(0, EB_Bittered) && source && source->isPiki()) {
		int stateID = getStateID();
		if (stateID >= ELECBUG_Wait && stateID <= ELECBUG_ChildDischarge) {
			mFsm->transit(this, ELECBUG_Reverse, nullptr);
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x8027B470
 * @note Size: 0x40
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	disableEvent(0, EB_Invulnerable);
	finishPartnerAndEffect();
}

/**
 * @note Address: 0x8027B4B0
 * @note Size: 0x40
 */
void Obj::doFinishStoneState()
{
	if (getStateID() != ELECBUG_Reverse) {
		enableEvent(0, EB_Invulnerable);
	}
}

/**
 * @note Address: 0x8027B4F0
 * @note Size: 0x34
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/**
 * @note Address: 0x8027B524
 * @note Size: 0x34
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/**
 * @note Address: 0x8027B558
 * @note Size: 0x28
 */
void Obj::startCarcassMotion() { startMotion(ELECBUGANIM_Carry, nullptr); }

/**
 * @note Address: 0x8027B580
 * @note Size: 0x20
 */
void Obj::doStartMovie() { effectDrawOff(); }

/**
 * @note Address: 0x8027B5A0
 * @note Size: 0x20
 */
void Obj::doEndMovie() { effectDrawOn(); }

/**
 * @note Address: 0x8027B5C0
 * @note Size: 0x1A4
 */
void Obj::setTargetPosition()
{
	Vector3f homePos  = mHomePosition;
	f32 randAngle     = randWeightFloat(TAU);
	f32 radDiff       = C_GENERALPARMS.mTerritoryRadius() - C_GENERALPARMS.mHomeRadius();
	f32 randDist      = C_GENERALPARMS.mHomeRadius() + randWeightFloat(radDiff);
	mTargetPosition.x = randDist * sinf(randAngle) + homePos.x;
	mTargetPosition.y = homePos.y;
	mTargetPosition.z = randDist * cosf(randAngle) + homePos.z;
}

/**
 * @note Address: 0x8027B764
 * @note Size: 0x1C
 */
void Obj::resetPartnerPtr()
{
	if (mPartner) {
		mPartner->mPartner = nullptr;
		mPartner           = nullptr;
	}
}

/**
 * @note Address: 0x8027B780
 * @note Size: 0x70
 */
bool Obj::isBecomeChargeState()
{
	if (isAlive() && !isEvent(0, EB_Bittered)) {
		int stateID = getStateID();
		if (stateID >= ELECBUG_Wait && stateID <= ELECBUG_Move) {
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x8027B7F0
 * @note Size: 0x30
 */
void Obj::startChargeState(Obj* beetle)
{
	mPartner = beetle;
	beetle->startChildChargeState(this);
}

/**
 * @note Address: 0x8027B820
 * @note Size: 0x44
 */
bool Obj::startChildChargeState(Obj* beetle)
{
	mPartner = beetle;
	mFsm->transit(this, ELECBUG_ChildCharge, nullptr);
	return true;
}

/**
 * @note Address: 0x8027B864
 * @note Size: 0x44
 */
void Obj::createEffect()
{
	mEffectObj = new efx::TDnkmsEffect;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x74
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8027B890
	bl       __ct__Q23efx12TDnkmsEffectFv
	mr       r0, r3

lbl_8027B890:
	stw      r0, 0x2dc(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x8027BC50
 * @note Size: 0x10
 */
void Obj::setupEffect() { mEffectObj->mPosition = &mPosition; }

/**
 * @note Address: 0x8027BC60
 * @note Size: 0x40
 */
void Obj::startChargeEffect() { mEffectObj->startCharge(); }

/**
 * @note Address: 0x8027BCA0
 * @note Size: 0xC0
 */
void Obj::startDischargeEffect(Obj* partner) { mEffectObj->startDischarge(&partner->mPosition); }

/**
 * @note Address: 0x8027BD60
 * @note Size: 0xA4
 */
void Obj::finishPartnerAndEffect()
{
	if (mPartner) {
		mPartner->mPartner = nullptr;
		mPartner           = nullptr;
	}

	mEffectObj->fade();
}

/**
 * @note Address: 0x8027BE04
 * @note Size: 0x8C
 */
void Obj::effectDrawOn() { mEffectObj->effectDrawOn(); }

/**
 * @note Address: 0x8027BE90
 * @note Size: 0x8C
 */
void Obj::effectDrawOff() { mEffectObj->effectDrawOff(); }

/**
 * @note Address: 0x8027BF1C
 * @note Size: 0x4D0
 */
void Obj::checkInteract(Obj* partner)
{
	Vector3f currentPos = getPosition();          // f19, f20, f22
	Vector3f partnerPos = partner->getPosition(); // f2, f1, f0

	Vector3f separationVec = partnerPos - currentPos; // f30, f29, f31
	separationVec.normalise();

	Vector3f yAxis(0.0f, 1.0f, 0.0f);

	Vector3f crossVec = yAxis.cross(separationVec); // f28, f27, f26
	crossVec.normalise();

	Vector3f perpVec = separationVec.cross(crossVec);
	perpVec.normalise(); // f23, f24, f25

	f32 distance = currentPos.distance(partnerPos); // f21

	Vector3f searchDirection(crossVec);
	searchDirection.scale(C_GENERALPARMS.mSearchDistance());
	searchDirection.y = C_GENERALPARMS.mSearchHeight();

	Vector3f middle;
	middle.setMiddle(currentPos, partnerPos);
	Sys::Sphere searchSphere(middle, distance);

	CellIteratorArg iterArg(searchSphere);
	iterArg.mOptimise = true;

	CellIterator iter(iterArg);
	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);

		// Skip if the creature is not alive or is neither a Navi nor a Piki
		if (!creature->isAlive() || (!creature->isNavi() && !creature->isPiki())) {
			continue;
		}

		// Calculate the separation vector from the creature to the current object
		Vector3f creatureSepVec = creature->getPosition() - currentPos;

		// Check if the creature is in the same general direction
		f32 dotCross = crossVec.dot(creatureSepVec);
		f32 abs      = absVal(dotCross);

		if (!(abs < 10.0f)) {
			continue;
		}

		// Check if the creature is within the distance range
		f32 dotSeparation = separationVec.dot(creatureSepVec);
		if (dotSeparation < distance && dotSeparation > 0.0f) {
			// Check if the creature is within a certain perpendicular distance
			f32 dotPerp = perpVec.dot(creatureSepVec);

			if (absVal(dotPerp) < 15.0f) {
				// Calculate the direction for interaction
				Vector3f interactionDir = searchDirection;
				interactionDir.scale2D(dotCross / abs);

				// Perform the interaction with the calculated attack damage
				f32 attackDamage = C_GENERALPARMS.mAttackDamage.mValue;
				InteractDenki interaction(this, attackDamage, &interactionDir);
				creature->stimulate(interaction);
			}
		}
	}

	/*
	stwu     r1, -0x1d0(r1)
	mflr     r0
	stw      r0, 0x1d4(r1)
	stfd     f31, 0x1c0(r1)
	psq_st   f31, 456(r1), 0, qr0
	stfd     f30, 0x1b0(r1)
	psq_st   f30, 440(r1), 0, qr0
	stfd     f29, 0x1a0(r1)
	psq_st   f29, 424(r1), 0, qr0
	stfd     f28, 0x190(r1)
	psq_st   f28, 408(r1), 0, qr0
	stfd     f27, 0x180(r1)
	psq_st   f27, 392(r1), 0, qr0
	stfd     f26, 0x170(r1)
	psq_st   f26, 376(r1), 0, qr0
	stfd     f25, 0x160(r1)
	psq_st   f25, 360(r1), 0, qr0
	stfd     f24, 0x150(r1)
	psq_st   f24, 344(r1), 0, qr0
	stfd     f23, 0x140(r1)
	psq_st   f23, 328(r1), 0, qr0
	stfd     f22, 0x130(r1)
	psq_st   f22, 312(r1), 0, qr0
	stfd     f21, 0x120(r1)
	psq_st   f21, 296(r1), 0, qr0
	stfd     f20, 0x110(r1)
	psq_st   f20, 280(r1), 0, qr0
	stfd     f19, 0x100(r1)
	psq_st   f19, 264(r1), 0, qr0
	stfd     f18, 0xf0(r1)
	psq_st   f18, 248(r1), 0, qr0
	stfd     f17, 0xe0(r1)
	psq_st   f17, 232(r1), 0, qr0
	stfd     f16, 0xd0(r1)
	psq_st   f16, 216(r1), 0, qr0
	stw      r31, 0xcc(r1)
	stw      r30, 0xc8(r1)
	mr       r30, r3
	mr       r31, r4
	mr       r4, r30
	addi     r3, r1, 0x20
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lfs      f19, 0x20(r1)
	lwz      r12, 8(r12)
	lfs      f20, 0x24(r1)
	lfs      f22, 0x28(r1)
	mtctr    r12
	bctrl
	lfs      f2, 0x18(r1)
	lfs      f1, 0x14(r1)
	fsubs    f29, f2, f20
	lfs      f0, 0x1c(r1)
	fsubs    f30, f1, f19
	lfs      f3, lbl_8051B4E8@sda21(r2)
	fsubs    f31, f0, f22
	fmuls    f4, f29, f29
	fmuls    f5, f31, f31
	fmadds   f4, f30, f30, f4
	fadds    f4, f5, f4
	fcmpo    cr0, f4, f3
	ble      lbl_8027C038
	ble      lbl_8027C03C
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_8027C03C

lbl_8027C038:
	fmr      f4, f3

lbl_8027C03C:
	lfs      f3, lbl_8051B4E8@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_8027C05C
	lfs      f3, lbl_8051B504@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f30, f30, f3
	fmuls    f29, f29, f3
	fmuls    f31, f31, f3

lbl_8027C05C:
	lfs      f4, lbl_8051B4E8@sda21(r2)
	lfs      f5, lbl_8051B504@sda21(r2)
	fmuls    f3, f4, f31
	fmuls    f6, f4, f29
	fmsubs   f27, f4, f30, f3
	fnmsubs  f26, f5, f30, f6
	fmsubs   f28, f5, f31, f6
	fmuls    f3, f27, f27
	fmuls    f5, f26, f26
	fmadds   f3, f28, f28, f3
	fadds    f5, f5, f3
	fcmpo    cr0, f5, f4
	ble      lbl_8027C0A0
	ble      lbl_8027C0A4
	frsqrte  f3, f5
	fmuls    f5, f3, f5
	b        lbl_8027C0A4

lbl_8027C0A0:
	fmr      f5, f4

lbl_8027C0A4:
	lfs      f3, lbl_8051B4E8@sda21(r2)
	fcmpo    cr0, f5, f3
	ble      lbl_8027C0C4
	lfs      f3, lbl_8051B504@sda21(r2)
	fdivs    f3, f3, f5
	fmuls    f28, f28, f3
	fmuls    f27, f27, f3
	fmuls    f26, f26, f3

lbl_8027C0C4:
	fmuls    f5, f30, f26
	lfs      f3, lbl_8051B4E8@sda21(r2)
	fmuls    f6, f31, f27
	fmuls    f4, f29, f28
	fmsubs   f25, f31, f28, f5
	fmsubs   f23, f29, f26, f6
	fmsubs   f24, f30, f27, f4
	fmuls    f4, f25, f25
	fmuls    f5, f24, f24
	fmadds   f4, f23, f23, f4
	fadds    f4, f5, f4
	fcmpo    cr0, f4, f3
	ble      lbl_8027C108
	ble      lbl_8027C10C
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_8027C10C

lbl_8027C108:
	fmr      f4, f3

lbl_8027C10C:
	lfs      f3, lbl_8051B4E8@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_8027C12C
	lfs      f3, lbl_8051B504@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f23, f23, f3
	fmuls    f25, f25, f3
	fmuls    f24, f24, f3

lbl_8027C12C:
	fsubs    f5, f20, f2
	lfs      f3, lbl_8051B4E8@sda21(r2)
	fsubs    f4, f22, f0
	fsubs    f6, f19, f1
	fmuls    f5, f5, f5
	fmuls    f7, f4, f4
	fmadds   f4, f6, f6, f5
	fadds    f21, f7, f4
	fcmpo    cr0, f21, f3
	ble      lbl_8027C164
	ble      lbl_8027C168
	frsqrte  f3, f21
	fmuls    f21, f3, f21
	b        lbl_8027C168

lbl_8027C164:
	fmr      f21, f3

lbl_8027C168:
	fadds    f3, f19, f1
	lwz      r3, 0xc0(r30)
	lfs      f4, lbl_8051B518@sda21(r2)
	fadds    f1, f20, f2
	fadds    f0, f22, f0
	lfs      f5, 0x44c(r3)
	lfs      f17, 0x474(r3)
	fmuls    f2, f4, f3
	fmuls    f1, f4, f1
	addi     r3, r1, 0x54
	fmuls    f0, f4, f0
	stfs     f21, 0x38(r1)
	fmuls    f18, f26, f5
	fmuls    f16, f28, f5
	stfs     f2, 0x2c(r1)
	addi     r4, r1, 0x2c
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x74
	stb      r0, 0x70(r1)
	addi     r4, r1, 0x54
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x74
	bl       first__Q24Game12CellIteratorFv
	b        lbl_8027C344

lbl_8027C1D4:
	addi     r3, r1, 0x74
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027C33C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8027C230
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027C33C

lbl_8027C230:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 8(r1)
	fsubs    f1, f1, f20
	lfs      f2, 0x10(r1)
	fsubs    f0, f0, f19
	lfs      f4, lbl_8051B4E8@sda21(r2)
	fsubs    f2, f2, f22
	fmuls    f3, f27, f1
	fmadds   f3, f28, f0, f3
	fmadds   f3, f26, f2, f3
	fcmpo    cr0, f3, f4
	ble      lbl_8027C280
	fmr      f4, f3
	b        lbl_8027C284

lbl_8027C280:
	fneg     f4, f3

lbl_8027C284:
	lfs      f5, lbl_8051B4E0@sda21(r2)
	fcmpo    cr0, f4, f5
	bge      lbl_8027C33C
	fmuls    f5, f29, f1
	fmadds   f5, f30, f0, f5
	fmadds   f6, f31, f2, f5
	fcmpo    cr0, f6, f21
	bge      lbl_8027C33C
	lfs      f5, lbl_8051B4E8@sda21(r2)
	fcmpo    cr0, f6, f5
	ble      lbl_8027C33C
	fmuls    f1, f25, f1
	fmadds   f0, f23, f0, f1
	fmadds   f1, f24, f2, f0
	fcmpo    cr0, f1, f5
	ble      lbl_8027C2C8
	b        lbl_8027C2CC

lbl_8027C2C8:
	fneg     f1, f1

lbl_8027C2CC:
	lfs      f0, lbl_8051B508@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8027C33C
	fdivs    f0, f3, f4
	lwz      r5, 0xc0(r30)
	lis      r3, __vt__Q24Game11Interaction@ha
	lis      r4, __vt__Q24Game12InteractWind@ha
	lfs      f2, 0x604(r5)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	fmuls    f1, f0, f16
	lis      r3, __vt__Q24Game13InteractDenki@ha
	fmuls    f0, f0, f18
	stw      r0, 0x3c(r1)
	addi     r4, r4, __vt__Q24Game12InteractWind@l
	addi     r0, r3, __vt__Q24Game13InteractDenki@l
	stw      r4, 0x3c(r1)
	mr       r3, r31
	addi     r4, r1, 0x3c
	stw      r30, 0x40(r1)
	stfs     f2, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f17, 0x4c(r1)
	stfs     f0, 0x50(r1)
	stw      r0, 0x3c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_8027C33C:
	addi     r3, r1, 0x74
	bl       next__Q24Game12CellIteratorFv

lbl_8027C344:
	addi     r3, r1, 0x74
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8027C1D4
	psq_l    f31, 456(r1), 0, qr0
	lfd      f31, 0x1c0(r1)
	psq_l    f30, 440(r1), 0, qr0
	lfd      f30, 0x1b0(r1)
	psq_l    f29, 424(r1), 0, qr0
	lfd      f29, 0x1a0(r1)
	psq_l    f28, 408(r1), 0, qr0
	lfd      f28, 0x190(r1)
	psq_l    f27, 392(r1), 0, qr0
	lfd      f27, 0x180(r1)
	psq_l    f26, 376(r1), 0, qr0
	lfd      f26, 0x170(r1)
	psq_l    f25, 360(r1), 0, qr0
	lfd      f25, 0x160(r1)
	psq_l    f24, 344(r1), 0, qr0
	lfd      f24, 0x150(r1)
	psq_l    f23, 328(r1), 0, qr0
	lfd      f23, 0x140(r1)
	psq_l    f22, 312(r1), 0, qr0
	lfd      f22, 0x130(r1)
	psq_l    f21, 296(r1), 0, qr0
	lfd      f21, 0x120(r1)
	psq_l    f20, 280(r1), 0, qr0
	lfd      f20, 0x110(r1)
	psq_l    f19, 264(r1), 0, qr0
	lfd      f19, 0x100(r1)
	psq_l    f18, 248(r1), 0, qr0
	lfd      f18, 0xf0(r1)
	psq_l    f17, 232(r1), 0, qr0
	lfd      f17, 0xe0(r1)
	psq_l    f16, 216(r1), 0, qr0
	lfd      f16, 0xd0(r1)
	lwz      r31, 0xcc(r1)
	lwz      r0, 0x1d4(r1)
	lwz      r30, 0xc8(r1)
	mtlr     r0
	addi     r1, r1, 0x1d0
	blr
	*/
}
} // namespace ElecBug
} // namespace Game
