#include "types.h"
#include "Dolphin/rand.h"
#include "Game/Entities/ElecBug.h"

namespace Game {
namespace ElecBug {

/*
 * --INFO--
 * Address:	8027AC88
 * Size:	000138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
}

/*
 * --INFO--
 * Address:	8027ADC0
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	8027ADC4
 * Size:	0000A4
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

/*
 * --INFO--
 * Address:	8027AE68
 * Size:	000044
 */
void Obj::onKill(CreatureKillArg* arg)
{
	finishPartnerAndEffect();
	EnemyBase::onKill(arg);
}

/*
 * --INFO--
 * Address:	8027AEAC
 * Size:	000048
 */
void Obj::doUpdate()
{
	mInactiveTimer += sys->mDeltaTime;
	mFsm->exec(this);
}

/*
 * --INFO--
 * Address:	8027AEF4
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics& gfx) { }

/*
 * --INFO--
 * Address:	8027AEF8
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	8027AF18
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
 * Address:	8027AF64
 * Size:	000080
 */
void Obj::getShadowParam(ShadowParam& param)
{
	Matrixf* bodyJointMtx = mModel->getJoint("body")->getWorldMatrix();
	param.mPosition       = bodyJointMtx->getBasis(3);
	param.mPosition.y -= 5.0f;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	param.mBoundingSphere.mRadius   = 15.0f;
	param.mSize                     = 15.0f;
}

/*
 * --INFO--
 * Address:	8027AFE4
 * Size:	0001E4
 */
void Obj::collisionCallback(CollEvent& event)
{
	if (event.mCollidingCreature && !isEvent(0, EB_Bittered)) {
		int stateID = getStateID();
		if (stateID == ELECBUG_Discharge || stateID == ELECBUG_ChildDischarge) {
			if (event.mCollidingCreature->isPiki() || event.mCollidingCreature->isNavi()) {
				Vector3f sep = event.mCollidingCreature->getPosition();
				sep -= mPosition;
				sep.y = 0.0f;
				sep.normalise();
				Vector3f dir = Vector3f(sep.x * C_PARMS->mGeneral.mSearchDistance(), C_PARMS->mGeneral.mSearchHeight(),
				                        sep.z * C_PARMS->mGeneral.mSearchDistance());

				if (event.mCollidingCreature->isNavi()) {
					dir.y = 0.0f;
				}

				InteractDenki denki(this, C_PARMS->mGeneral.mAttackDamage(), &dir);
				event.mCollidingCreature->stimulate(denki);
			}
		}
	}

	setCollEvent(event);
}

/*
 * --INFO--
 * Address:	8027B1C8
 * Size:	0001BC
 */
bool Obj::pressCallBack(Creature* source, f32 damage, CollPart* part)
{
	if (isAlive() && !isEvent(0, EB_Bittered) && source && source->isPiki()) {
		int stateID = getStateID();
		if (stateID >= ELECBUG_Wait && stateID <= ELECBUG_ChildDischarge) {
			mFsm->transit(this, ELECBUG_Reverse, nullptr);

			if (stateID == ELECBUG_Discharge || stateID == ELECBUG_ChildDischarge) {
				Vector3f sep = source->getPosition();
				sep -= mPosition;
				sep.y = 0.0f;
				sep.normalise();
				Vector3f dir(sep.x * C_PARMS->mGeneral.mSearchDistance(), C_PARMS->mGeneral.mSearchHeight(),
				             sep.z * C_PARMS->mGeneral.mSearchDistance());
				InteractDenki denki(this, C_PARMS->mGeneral.mAttackDamage(), &dir);
				source->stimulate(denki);
			}

			return true;
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	8027B384
 * Size:	00002C
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart) { return pressCallBack(creature, damage, collpart); }

/*
 * --INFO--
 * Address:	8027B3B0
 * Size:	0000C0
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

/*
 * --INFO--
 * Address:	8027B470
 * Size:	000040
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	disableEvent(0, EB_Invulnerable);
	finishPartnerAndEffect();
}

/*
 * --INFO--
 * Address:	8027B4B0
 * Size:	000040
 */
void Obj::doFinishStoneState()
{
	if (getStateID() != ELECBUG_Reverse) {
		enableEvent(0, EB_Invulnerable);
	}
}

/*
 * --INFO--
 * Address:	8027B4F0
 * Size:	000034
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/*
 * --INFO--
 * Address:	8027B524
 * Size:	000034
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/*
 * --INFO--
 * Address:	8027B558
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(ELECBUGANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	8027B580
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	8027B5A0
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	8027B5C0
 * Size:	0001A4
 */
void Obj::setTargetPosition()
{
	Vector3f homePos  = mHomePosition;
	f32 randAngle     = randWeightFloat(TAU);
	f32 radDiff       = C_PARMS->mGeneral.mTerritoryRadius() - C_PARMS->mGeneral.mHomeRadius();
	f32 randDist      = C_PARMS->mGeneral.mHomeRadius() + randWeightFloat(radDiff);
	mTargetPosition.x = randDist * sinf(randAngle) + homePos.x;
	mTargetPosition.y = homePos.y;
	mTargetPosition.z = randDist * cosf(randAngle) + homePos.z;
}

/*
 * --INFO--
 * Address:	8027B764
 * Size:	00001C
 */
void Obj::resetPartnerPtr()
{
	if (mPartner) {
		mPartner->mPartner = nullptr;
		mPartner           = nullptr;
	}
}

/*
 * --INFO--
 * Address:	8027B780
 * Size:	000070
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

/*
 * --INFO--
 * Address:	8027B7F0
 * Size:	000030
 */
void Obj::startChargeState(Obj* beetle)
{
	mPartner = beetle;
	beetle->startChildChargeState(this);
}

/*
 * --INFO--
 * Address:	8027B820
 * Size:	000044
 */
bool Obj::startChildChargeState(Obj* beetle)
{
	mPartner = beetle;
	mFsm->transit(this, ELECBUG_ChildCharge, nullptr);
	return true;
}

/*
 * --INFO--
 * Address:	8027B864
 * Size:	000044
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

/*
 * --INFO--
 * Address:	8027BC50
 * Size:	000010
 */
void Obj::setupEffect() { mEffectObj->mPosition = &mPosition; }

/*
 * --INFO--
 * Address:	8027BC60
 * Size:	000040
 */
void Obj::startChargeEffect() { mEffectObj->startCharge(); }

/*
 * --INFO--
 * Address:	8027BCA0
 * Size:	0000C0
 */
void Obj::startDischargeEffect(Obj* partner) { mEffectObj->startDischarge(&partner->mPosition); }

/*
 * --INFO--
 * Address:	8027BD60
 * Size:	0000A4
 */
void Obj::finishPartnerAndEffect()
{
	if (mPartner) {
		mPartner->mPartner = nullptr;
		mPartner           = nullptr;
	}

	mEffectObj->fade();
}

/*
 * --INFO--
 * Address:	8027BE04
 * Size:	00008C
 */
void Obj::effectDrawOn() { mEffectObj->effectDrawOn(); }

/*
 * --INFO--
 * Address:	8027BE90
 * Size:	00008C
 */
void Obj::effectDrawOff() { mEffectObj->effectDrawOff(); }

/*
 * --INFO--
 * Address:	8027BF1C
 * Size:	0004D0
 */
void Obj::checkInteract(Obj* partner)
{
	Vector3f pos        = getPosition();          // f19, f20, f22
	Vector3f partnerPos = partner->getPosition(); // f2, f1, f0

	Vector3f sep = partnerPos - pos; // f30, f29, f31
	sep.normalise();

	Vector3f yAxis(0.0f, 1.0f, 0.0f);

	Vector3f crossVec = cross(yAxis, sep); // f28, f27, f26
	crossVec.normalise();

	Vector3f vec3 = cross(sep, crossVec);
	vec3.normalise(); // f23, f24, f25

	f32 dist = pos.distance(partnerPos); // f21

	Vector3f denkiDir = crossVec * C_PARMS->mGeneral.mSearchDistance();
	denkiDir.y        = C_PARMS->mGeneral.mSearchHeight();

	Sys::Sphere searchSphere;
	searchSphere.mPosition = Vector3f(0.5f * (pos.x + partnerPos.x), 0.5f * (pos.y + partnerPos.y), 0.5f * (pos.z + partnerPos.z));
	searchSphere.mRadius   = dist;

	CellIteratorArg iterArg(searchSphere);
	iterArg.mIsSphereCollisionDisabled = true;
	CellIterator iter(iterArg);
	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		if (creature->isAlive() && (creature->isNavi() || creature->isPiki())) {
			Vector3f creatureSep = creature->getPosition();
			creatureSep -= pos;

			f32 creatureDot = dot(crossVec, creatureSep); // f3
			f32 absDot      = absVal(creatureDot);        // f4

			if (absDot < 10.0f) {
				f32 sepDot = dot(sep, creatureSep); // f6
				if (sepDot < dist && sepDot > 0.0f && absVal(dot(vec3, creatureSep)) < 15.0f) {
					f32 factor = creatureDot / absDot;
					Vector3f dir(factor * denkiDir.x, denkiDir.y, factor * denkiDir.z);
					InteractDenki denki(this, C_PARMS->mGeneral.mAttackDamage(), &dir);
					creature->stimulate(denki);
				}
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
