#include "Game/Entities/ItemRock.h"
#include "Game/Farm.h"
#include "PSM/WorkItem.h"
#include "Dolphin/rand.h"

namespace Game {
namespace ItemRock {

static const char unusedName[] = "itemRock";

Mgr* mgr;

/*
 * --INFO--
 * Address:	801E0E84
 * Size:	000134
 */
void FSM::init(Item*)
{
	create(ITEMROCK_StateCount);
	registerState(new NormalState);
	registerState(new DownState);
	registerState(new UpState);
}

/*
 * --INFO--
 * Address:	801E0FB8
 * Size:	00003C
 */
void NormalState::init(Item* item, StateArg* stateArg)
{
	static_cast<ItemRock::Item*>(item)->startWaitMotion();
	_10 = 0;
	_11 = 0;
}

/*
 * --INFO--
 * Address:	801E0FF4
 * Size:	000090
 */
void NormalState::exec(Item* item)
{
	ItemRock::Item* rock = static_cast<ItemRock::Item*>(item);
	f32 val              = rock->_20C[rock->_21C];
	if (rock->_21C > 0) {
		rock->_214 += sys->mDeltaTime;
		if (rock->_214 >= val) {
			_11        = 1;
			rock->_200 = rock->_208[rock->_21C - 1];
			transit(rock, ITEMROCK_Up, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	801E10B4
 * Size:	000004
 */
void NormalState::cleanup(Item*) { }

/*
 * --INFO--
 * Address:	801E10B8
 * Size:	0000BC
 */
void NormalState::onDamage(Item* item, f32 damage)
{
	ItemRock::Item* rock = static_cast<ItemRock::Item*>(item);
	rock->startDamageMotion();
	rock->_218 += damage;
	rock->_200 -= rock->_218;
	rock->_218 = 0.0f;
	if (rock->_200 < rock->_208[rock->_21C + 1]) {
		_10 = 1;
		transit(rock, ITEMROCK_Down, nullptr);
	}
}

/*
 * --INFO--
 * Address:	801E1174
 * Size:	0000F8
 */
void NormalState::onKeyEvent(Item* item, const SysShape::KeyEvent& event)
{
	ItemRock::Item* rock = static_cast<ItemRock::Item*>(item);
	if (event.mType == KEYEVENT_100) {
		Vector3f rockPos = rock->getPosition();
		rock->startFukuEffect(rockPos);
	}

	if (_11) {
		rock->_200 = rock->_208[rock->_21C - 1];
		transit(rock, ITEMROCK_Up, nullptr);
		return;
	} else if (_10) {
		transit(rock, ITEMROCK_Down, nullptr);
		return;
	}

	rock->startWaitMotion();
}

/*
 * --INFO--
 * Address:	801E126C
 * Size:	000048
 */
void DownState::init(Item* item, StateArg* stateArg)
{
	static_cast<ItemRock::Item*>(item)->startDownMotion();
	item->startSound(PSSE_EV_RUIN_WITHER);
}

/*
 * --INFO--
 * Address:	801E12B4
 * Size:	000004
 */
void DownState::exec(Item*) { }

/*
 * --INFO--
 * Address:	801E12B8
 * Size:	000004
 */
void DownState::cleanup(Item*) { }

/*
 * --INFO--
 * Address:	801E12BC
 * Size:	000010
 */
void DownState::onDamage(Item* item, f32 damage) { static_cast<ItemRock::Item*>(item)->_218 += damage; }

/*
 * --INFO--
 * Address:	801E12CC
 * Size:	0000F0
 */
void DownState::onKeyEvent(Item* item, const SysShape::KeyEvent& event)
{
	ItemRock::Item* rock = static_cast<ItemRock::Item*>(item);
	rock->_214           = 0.0f;
	rock->_21C++;
	if (rock->_21C >= rock->_220) {
		rock->_21C = rock->_220;
		rock->setAlive(false);
		rock->finishLoopEffect();
	}

	rock->mObstacle->setPower(1.0f - (f32)rock->_21C / (f32)rock->_220);
	rock->startLoopEffect();
	transit(rock, ITEMROCK_Normal, nullptr);
}

/*
 * --INFO--
 * Address:	801E13BC
 * Size:	000058
 */
void UpState::init(Item* item, StateArg* stateArg)
{
	ItemRock::Item* rock = static_cast<ItemRock::Item*>(item);
	rock->startUpMotion();
	rock->mAnimSpeed = 30.0f;
	rock->_214       = 0.0f;
	rock->startSound(PSSE_EV_RUIN_GROW);
}

/*
 * --INFO--
 * Address:	801E1414
 * Size:	000004
 */
void UpState::exec(Item*) { }

/*
 * --INFO--
 * Address:	801E1418
 * Size:	000004
 */
void UpState::cleanup(Item*) { }

/*
 * --INFO--
 * Address:	801E141C
 * Size:	000010
 */
void UpState::onDamage(Item* item, f32 damage) { static_cast<ItemRock::Item*>(item)->_218 += damage; }

/*
 * --INFO--
 * Address:	801E142C
 * Size:	0000CC
 */
void UpState::onKeyEvent(Item* item, const SysShape::KeyEvent& event)
{
	// sigh - cannot do a cast at the start, doesn't match.
	static_cast<ItemRock::Item*>(item)->_21C--;
	item->setAlive(true);
	static_cast<ItemRock::Item*>(item)->mObstacle->setPower(
	    1.0f - (f32) static_cast<ItemRock::Item*>(item)->_21C / (f32) static_cast<ItemRock::Item*>(item)->_220);
	static_cast<ItemRock::Item*>(item)->startLoopEffect();
	transit(item, ITEMROCK_Normal, nullptr);
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
Item::Item()
    : WorkItem(OBJTYPE_Rock)
{
}

/*
 * --INFO--
 * Address:	801E14F8
 * Size:	000048
 */
void Item::constructor() { mSoundObj = new PSM::WorkItem(this); }

/*
 * --INFO--
 * Address:	801E1540
 * Size:	00020C
 */
void Item::onInit(CreatureInitArg* initArg)
{
	_214   = 0.0f;
	mModel = new SysShape::Model(mgr->getModelData(0), 0x20000, 2);
	mModel->mJ3dModel->calc();
	mModel->mJ3dModel->calcMaterial();
	mModel->mJ3dModel->makeDL();
	mModel->mJ3dModel->lock();

	mEfxKouhai1 = new efx::TKouhai1;
	mEfxKouhai2 = new efx::TKouhai2;
	mEfxKouhai3 = new efx::TKouhai3;

	mAnimSpeed         = 30.0f;
	mAnimator.mAnimMgr = mgr->mAnimMgr;
	mAnimator.startAnim(2, this);

	mFsm->start(this, ITEMROCK_Normal, nullptr);
	setAlive(true);
	createRock(3);

	_210[0] = mgr->mParms->mRockParms.mP008.mValue;
	_210[1] = mgr->mParms->mRockParms.mP009.mValue;
	_210[2] = mgr->mParms->mRockParms.mP010.mValue;

	mCollTree->createSingleSphere(mModel, 0, mBoundingSphere, nullptr);
	_1FC = 0;
}

/*
 * --INFO--
 * Address:	801E1780
 * Size:	000034
 */
void Item::onKill(CreatureKillArg* killArg) { mgr->kill(this); }

/*
 * --INFO--
 * Address:	801E17B4
 * Size:	00005C
 */
void Item::onSetPosition()
{
	mObstacle = Farm::farmMgr->addObstacle(this, 180.0f, 1.0f);
	updateBoundSphere();
	startLoopEffect();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000140
 */
void Item::emitDamageEffect()
{
	// will be needed in InteractAttack bc of float ordering
}

/*
 * --INFO--
 * Address:	801E1810
 * Size:	000044
 */
void Item::onKeyEvent(const SysShape::KeyEvent& event)
{
	if (mCurrentState) {
		mCurrentState->onKeyEvent(this, event);
	}
}

/*
 * --INFO--
 * Address:	801E1858
 * Size:	00010C
 */
void Item::startLoopEffect()
{
	efx::Arg fxArg(mPosition);
	switch (_21C) {
	case 0:
		isAlive(); // probably debug
		mEfxKouhai3->create(&fxArg);
		break;
	case 1:
		isAlive(); // probably debug
		mEfxKouhai2->create(&fxArg);
		break;
	case 2:
		isAlive(); // probably debug
		mEfxKouhai1->create(&fxArg);
		break;
	default:
		isAlive(); // probably debug
	}
}

/*
 * --INFO--
 * Address:	801E1964
 * Size:	000064
 */
void Item::finishLoopEffect()
{
	mEfxKouhai1->fade();
	mEfxKouhai2->fade();
	mEfxKouhai3->fade();
}

/*
 * --INFO--
 * Address:	801E19C8
 * Size:	0000B0
 */
void Item::startFukuEffect(Vector3f& fxPos)
{
	efx::TKouhaiFuku fukuFX;
	efx::Arg fxArg(fxPos);
	fukuFX.create(&fxArg);

	startSound(PSSE_EV_RUIN_DISCHARGE);
}

/*
 * --INFO--
 * Address:	801E1A78
 * Size:	000204
 */
void Item::doLoad(Stream& input)
{
	_21C = input.readInt();
	_214 = input.readFloat();
	_200 = input.readFloat();
	mObstacle->setPower(1.0f - (f32)_21C / (f32)_220);
	initMotion();
	mEfxKouhai1->forceKill();
	mEfxKouhai2->forceKill();
	mEfxKouhai3->forceKill();

	if (_21C >= _220) {
		_21C = _220;
		setAlive(false);
	}

	startLoopEffect();
}

/*
 * --INFO--
 * Address:	801E1C7C
 * Size:	000058
 */
void Item::doSave(Stream& input)
{
	input.writeInt(_21C);
	input.writeFloat(_214);
	input.writeFloat(_200);
}

/*
 * --INFO--
 * Address:	801E1CD4
 * Size:	000048
 */
void Item::updateBoundSphere()
{
	f32 rad                   = getWorkRadius();
	mBoundingSphere.mPosition = mPosition;
	mBoundingSphere.mRadius   = rad;
}

/*
 * --INFO--
 * Address:	801E1D1C
 * Size:	0001B4
 */
void Item::doAI()
{
	mFsm->exec(this);
	updateCollTree();
	CollPart* part = mCollTree->mPart;
	part->mRadius  = getWorkRadius();

	if (mLod.isFlag(AILOD_IsVisible)) {
		startLoopEffect();
	} else {
		finishLoopEffect();
	}

	if (_1FC) {
		_1FC--;
	}
}

/*
 * --INFO--
 * Address:	801E1ED0
 * Size:	000020
 */
void Item::initMotion() { startWaitMotion(); }

/*
 * --INFO--
 * Address:	801E1EF0
 * Size:	000020
 */
void Item::on_movie_end(bool) { startWaitMotion(); }

/*
 * --INFO--
 * Address:	801E1F10
 * Size:	00012C
 */
void Item::startWaitMotion()
{
	switch (_21C) {
	case 0:
		if (randFloat() > 0.2f) {
			mAnimator.startAnim(2, this);
		} else {
			mAnimator.startAnim(3, this);
		}
		break;

	case 1:
		mAnimator.startAnim(1, this);
		break;

	case 2:
		mAnimator.startAnim(0, this);
		break;

	case 3:
		mAnimator.startAnim(9, nullptr);
		mAnimator.setFrameByKeyType(KEYEVENT_END);
		mAnimSpeed = 0.0f;
		break;
	}
}

/*
 * --INFO--
 * Address:	801E203C
 * Size:	00009C
 */
void Item::startDamageMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x21c(r3)
	cmpwi    r0, 2
	beq      lbl_801E20AC
	bge      lbl_801E20C8
	cmpwi    r0, 0
	beq      lbl_801E206C
	bge      lbl_801E208C
	b        lbl_801E20C8
	b        lbl_801E20C8

lbl_801E206C:
	cmplwi   r3, 0
	mr       r5, r3
	beq      lbl_801E207C
	addi     r5, r5, 0x178

lbl_801E207C:
	addi     r3, r3, 0x1a8
	li       r4, 6
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_801E20C8

lbl_801E208C:
	cmplwi   r3, 0
	mr       r5, r3
	beq      lbl_801E209C
	addi     r5, r5, 0x178

lbl_801E209C:
	addi     r3, r3, 0x1a8
	li       r4, 5
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_801E20C8

lbl_801E20AC:
	cmplwi   r3, 0
	mr       r5, r3
	beq      lbl_801E20BC
	addi     r5, r5, 0x178

lbl_801E20BC:
	addi     r3, r3, 0x1a8
	li       r4, 4
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener

lbl_801E20C8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E20D8
 * Size:	00028C
 */
void Item::startDownMotion()
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	mr       r31, r3
	lwz      r3, 0x1f0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1f4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1f8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x21c(r31)
	cmpwi    r0, 2
	beq      lbl_801E22A4
	bge      lbl_801E2350
	cmpwi    r0, 0
	beq      lbl_801E214C
	bge      lbl_801E21F4
	b        lbl_801E2350
	b        lbl_801E2350

lbl_801E214C:
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_801E215C
	addi     r5, r31, 0x178

lbl_801E215C:
	addi     r3, r31, 0x1a8
	li       r4, 7
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lis      r3, __vt__Q23efx5TBase@ha
	lfs      f0, 0x19c(r31)
	lfs      f1, 0x1a0(r31)
	addi     r0, r3, __vt__Q23efx5TBase@l
	lfs      f2, 0x1a4(r31)
	lis      r3, __vt__Q23efx8TSimple2@ha
	addi     r5, r3, __vt__Q23efx8TSimple2@l
	li       r6, 0
	stw      r0, 0x48(r1)
	lis      r4, __vt__Q23efx11TKouhaiFuku@ha
	lis      r3, __vt__Q23efx3Arg@ha
	li       r8, 0xd0
	addi     r0, r3, __vt__Q23efx3Arg@l
	li       r7, 0xd1
	stw      r5, 0x48(r1)
	addi     r5, r4, __vt__Q23efx11TKouhaiFuku@l
	addi     r3, r1, 0x48
	addi     r4, r1, 0x58
	sth      r8, 0x4c(r1)
	sth      r7, 0x4e(r1)
	stw      r6, 0x50(r1)
	stw      r6, 0x54(r1)
	stw      r5, 0x48(r1)
	stw      r0, 0x58(r1)
	stfs     f0, 0x5c(r1)
	stfs     f1, 0x60(r1)
	stfs     f2, 0x64(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg
	mr       r3, r31
	li       r4, 0x3839
	lwz      r12, 0(r31)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	b        lbl_801E2350

lbl_801E21F4:
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_801E2204
	addi     r5, r31, 0x178

lbl_801E2204:
	addi     r3, r31, 0x1a8
	li       r4, 8
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lis      r3, __vt__Q23efx5TBase@ha
	lfs      f1, 0x19c(r31)
	lfs      f2, 0x1a0(r31)
	addi     r0, r3, __vt__Q23efx5TBase@l
	lfs      f3, 0x1a4(r31)
	lis      r3, __vt__Q23efx8TSimple2@ha
	lfs      f0, lbl_805198EC@sda21(r2)
	addi     r5, r3, __vt__Q23efx8TSimple2@l
	stw      r0, 0x28(r1)
	lis      r4, __vt__Q23efx11TKouhaiFuku@ha
	li       r6, 0
	fsubs    f2, f2, f0
	lis      r3, __vt__Q23efx3Arg@ha
	li       r8, 0xd0
	addi     r0, r3, __vt__Q23efx3Arg@l
	li       r7, 0xd1
	stw      r5, 0x28(r1)
	addi     r5, r4, __vt__Q23efx11TKouhaiFuku@l
	addi     r3, r1, 0x28
	sth      r8, 0x2c(r1)
	addi     r4, r1, 0x38
	sth      r7, 0x2e(r1)
	stw      r6, 0x30(r1)
	stw      r6, 0x34(r1)
	stw      r5, 0x28(r1)
	stw      r0, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f2, 0x40(r1)
	stfs     f3, 0x44(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg
	mr       r3, r31
	li       r4, 0x3839
	lwz      r12, 0(r31)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	b        lbl_801E2350

lbl_801E22A4:
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_801E22B4
	addi     r5, r31, 0x178

lbl_801E22B4:
	addi     r3, r31, 0x1a8
	li       r4, 9
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lis      r3, __vt__Q23efx5TBase@ha
	lfs      f1, 0x19c(r31)
	lfs      f2, 0x1a0(r31)
	addi     r0, r3, __vt__Q23efx5TBase@l
	lfs      f3, 0x1a4(r31)
	lis      r3, __vt__Q23efx8TSimple2@ha
	lfs      f0, lbl_805198F0@sda21(r2)
	addi     r5, r3, __vt__Q23efx8TSimple2@l
	stw      r0, 8(r1)
	lis      r4, __vt__Q23efx11TKouhaiFuku@ha
	li       r6, 0
	fsubs    f2, f2, f0
	lis      r3, __vt__Q23efx3Arg@ha
	li       r8, 0xd0
	addi     r0, r3, __vt__Q23efx3Arg@l
	li       r7, 0xd1
	stw      r5, 8(r1)
	addi     r5, r4, __vt__Q23efx11TKouhaiFuku@l
	addi     r3, r1, 8
	sth      r8, 0xc(r1)
	addi     r4, r1, 0x18
	sth      r7, 0xe(r1)
	stw      r6, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f2, 0x20(r1)
	stfs     f3, 0x24(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg
	mr       r3, r31
	li       r4, 0x3839
	lwz      r12, 0(r31)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl

lbl_801E2350:
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E2364
 * Size:	0000EC
 */
void Item::startUpMotion()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x1f0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1f4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1f8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x21c(r31)
	cmpwi    r0, 2
	beq      lbl_801E2400
	bge      lbl_801E23D4
	cmpwi    r0, 0
	beq      lbl_801E243C
	bge      lbl_801E23E0
	b        lbl_801E243C

lbl_801E23D4:
	cmpwi    r0, 4
	bge      lbl_801E243C
	b        lbl_801E2420

lbl_801E23E0:
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_801E23F0
	addi     r5, r31, 0x178

lbl_801E23F0:
	addi     r3, r31, 0x1a8
	li       r4, 0xc
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_801E243C

lbl_801E2400:
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_801E2410
	addi     r5, r31, 0x178

lbl_801E2410:
	addi     r3, r31, 0x1a8
	li       r4, 0xb
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_801E243C

lbl_801E2420:
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_801E2430
	addi     r5, r31, 0x178

lbl_801E2430:
	addi     r3, r31, 0x1a8
	li       r4, 0xa
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener

lbl_801E243C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E2450
 * Size:	000114
 */
bool Item::getVectorField(Sys::Sphere&, Vector3f&)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stfd     f29, 0x20(r1)
	psq_st   f29, 40(r1), 0, qr0
	stfd     f28, 0x10(r1)
	psq_st   f28, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	lfs      f0, 4(r4)
	mr       r31, r5
	lfs      f1, 0x1a0(r3)
	lfs      f3, 0x1a4(r3)
	fsubs    f29, f1, f0
	lfs      f2, 8(r4)
	lfs      f1, 0x19c(r3)
	fsubs    f28, f3, f2
	lfs      f0, 0(r4)
	fmuls    f2, f29, f29
	fsubs    f30, f1, f0
	lfs      f0, lbl_805198C8@sda21(r2)
	fmuls    f3, f28, f28
	fmadds   f1, f30, f30, f2
	fadds    f31, f3, f1
	fcmpo    cr0, f31, f0
	ble      lbl_801E24D4
	ble      lbl_801E24D8
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_801E24D8

lbl_801E24D4:
	fmr      f31, f0

lbl_801E24D8:
	lfs      f0, lbl_805198C8@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_801E24FC
	lfs      f0, lbl_805198CC@sda21(r2)
	fdivs    f0, f0, f31
	fmuls    f30, f30, f0
	fmuls    f29, f29, f0
	fmuls    f28, f28, f0
	b        lbl_801E2500

lbl_801E24FC:
	fmr      f31, f0

lbl_801E2500:
	bl       getWorkRadius__Q34Game8ItemRock4ItemFv
	fcmpo    cr0, f31, f1
	ble      lbl_801E251C
	stfs     f30, 0(r31)
	stfs     f29, 4(r31)
	stfs     f28, 8(r31)
	b        lbl_801E252C

lbl_801E251C:
	lfs      f0, lbl_805198C8@sda21(r2)
	stfs     f0, 0(r31)
	stfs     f0, 4(r31)
	stfs     f0, 8(r31)

lbl_801E252C:
	li       r3, 1
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	psq_l    f28, 24(r1), 0, qr0
	lfd      f28, 0x10(r1)
	lwz      r0, 0x54(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E2564
 * Size:	000088
 */
f32 Item::getWorkDistance(Sys::Sphere&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	lfs      f0, 4(r4)
	lfs      f1, 0x1a0(r3)
	lfs      f3, 0x1a4(r3)
	fsubs    f4, f1, f0
	lfs      f2, 8(r4)
	lfs      f1, 0x19c(r3)
	fsubs    f2, f3, f2
	lfs      f0, 0(r4)
	fmuls    f3, f4, f4
	fsubs    f1, f1, f0
	lfs      f0, lbl_805198C8@sda21(r2)
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f3
	fadds    f31, f2, f1
	fcmpo    cr0, f31, f0
	ble      lbl_801E25C8
	ble      lbl_801E25CC
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_801E25CC

lbl_801E25C8:
	fmr      f31, f0

lbl_801E25CC:
	bl       getWorkRadius__Q34Game8ItemRock4ItemFv
	fsubs    f1, f31, f1
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E25EC
 * Size:	000194
 */
void Item::createRock(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f0, lbl_805198C8@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	addi     r0, r31, 1
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	slwi     r29, r0, 2
	stw      r31, 0x220(r3)
	li       r3, 0
	stw      r3, 0x21c(r30)
	mr       r3, r29
	stfs     f0, 0x218(r30)
	bl       __nwa__FUl
	stw      r3, 0x208(r30)
	mr       r3, r29
	bl       __nwa__FUl
	stw      r3, 0x20c(r30)
	slwi     r3, r31, 2
	bl       __nwa__FUl
	stw      r3, 0x210(r30)
	addic.   r0, r31, 1
	lfs      f1, lbl_805198F4@sda21(r2)
	li       r3, 0
	lwz      r5, mgr__Q24Game8ItemRock@sda21(r13)
	lwz      r4, 0x208(r30)
	lwz      r5, 0x88(r5)
	lfs      f0, 0x100(r5)
	stfs     f0, 0(r4)
	lwz      r5, mgr__Q24Game8ItemRock@sda21(r13)
	lwz      r4, 0x208(r30)
	lwz      r5, 0x88(r5)
	lfs      f0, 0x128(r5)
	stfs     f0, 4(r4)
	lwz      r5, mgr__Q24Game8ItemRock@sda21(r13)
	lwz      r4, 0x208(r30)
	lwz      r5, 0x88(r5)
	lfs      f0, 0x150(r5)
	stfs     f0, 8(r4)
	lwz      r5, mgr__Q24Game8ItemRock@sda21(r13)
	lwz      r4, 0x208(r30)
	lwz      r5, 0x88(r5)
	lfs      f0, 0x178(r5)
	stfs     f0, 0xc(r4)
	lwz      r5, mgr__Q24Game8ItemRock@sda21(r13)
	lwz      r4, 0x20c(r30)
	lwz      r5, 0x88(r5)
	lfs      f0, 0x1a0(r5)
	fmuls    f0, f1, f0
	stfs     f0, 0(r4)
	lwz      r5, mgr__Q24Game8ItemRock@sda21(r13)
	lwz      r4, 0x20c(r30)
	lwz      r5, 0x88(r5)
	lfs      f0, 0x1c8(r5)
	fmuls    f0, f1, f0
	stfs     f0, 4(r4)
	lwz      r5, mgr__Q24Game8ItemRock@sda21(r13)
	lwz      r4, 0x20c(r30)
	lwz      r5, 0x88(r5)
	lfs      f0, 0x1f0(r5)
	fmuls    f0, f1, f0
	stfs     f0, 8(r4)
	lwz      r5, mgr__Q24Game8ItemRock@sda21(r13)
	lwz      r4, 0x20c(r30)
	lwz      r5, 0x88(r5)
	lfs      f0, 0x218(r5)
	fmuls    f0, f1, f0
	stfs     f0, 0xc(r4)
	lwz      r4, 0x208(r30)
	lfs      f0, 0(r4)
	stfs     f0, 0x204(r30)
	lfs      f0, 0x204(r30)
	stfs     f0, 0x200(r30)
	ble      lbl_801E2764
	addi     r0, r31, 1
	addi     r4, r31, -7
	cmpwi    r0, 8
	ble      lbl_801E274C
	addi     r0, r4, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r4, 0
	ble      lbl_801E274C

lbl_801E2744:
	addi     r3, r3, 8
	bdnz     lbl_801E2744

lbl_801E274C:
	addi     r4, r31, 1
	subf     r0, r3, r4
	mtctr    r0
	cmpw     r3, r4
	bge      lbl_801E2764

lbl_801E2760:
	bdnz     lbl_801E2760

lbl_801E2764:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E2780
 * Size:	000174
 */
bool Item::interactAttack(InteractAttack&)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r3, 0x1dc(r3)
	cmplwi   r3, 0
	beq      lbl_801E28D8
	lwz      r12, 0(r3)
	mr       r4, r30
	lfs      f1, 8(r5)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x1fc(r30)
	cmplwi   r0, 0
	bne      lbl_801E28D8
	lwz      r0, 0x21c(r30)
	cmpwi    r0, 1
	beq      lbl_801E27FC
	bge      lbl_801E27E8
	cmpwi    r0, 0
	bge      lbl_801E27F4
	b        lbl_801E2808

lbl_801E27E8:
	cmpwi    r0, 3
	bge      lbl_801E2808
	b        lbl_801E2804

lbl_801E27F4:
	li       r31, 2
	b        lbl_801E2808

lbl_801E27FC:
	li       r31, 1
	b        lbl_801E2808

lbl_801E2804:
	li       r31, 0

lbl_801E2808:
	lis      r3, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx8TSimple1@ha
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx13TKouhaiDamage@ha
	stw      r0, 8(r1)
	addi     r4, r4, __vt__Q23efx8TSimple1@l
	li       r0, 0xcd
	li       r7, 0
	stw      r4, 8(r1)
	addi     r6, r3, __vt__Q23efx13TKouhaiDamage@l
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx9ArgKouhai@ha
	sth      r0, 0xc(r1)
	addi     r5, r4, __vt__Q23efx3Arg@l
	addi     r0, r3, __vt__Q23efx9ArgKouhai@l
	addi     r3, r1, 8
	stw      r7, 0x10(r1)
	addi     r4, r1, 0x20
	stw      r6, 8(r1)
	lwz      r8, 0x19c(r30)
	lwz      r7, 0x1a0(r30)
	lwz      r6, 0x1a4(r30)
	stw      r8, 0x14(r1)
	stw      r7, 0x18(r1)
	lfs      f2, 0x14(r1)
	stw      r6, 0x1c(r1)
	lfs      f1, 0x18(r1)
	stw      r5, 0x20(r1)
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x24(r1)
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)
	stw      r0, 0x20(r1)
	stw      r31, 0x30(r1)
	bl       create__Q23efx13TKouhaiDamageFPQ23efx3Arg
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	lfd      f3, lbl_805198D0@sda21(r2)
	stw      r0, 0x38(r1)
	lfs      f1, lbl_805198E0@sda21(r2)
	lfd      f2, 0x38(r1)
	lfs      f0, lbl_805198E4@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r3, 0x44(r1)
	addi     r0, r3, 6
	stb      r0, 0x1fc(r30)

lbl_801E28D8:
	lwz      r0, 0x54(r1)
	li       r3, 1
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E28F4
 * Size:	000004
 */
void State::onDamage(Item*, float) { }

/*
 * --INFO--
 * Address:	801E28F8
 * Size:	000028
 */
f32 Item::getWorkRadius()
{
	/*
	lwz      r4, 0x21c(r3)
	lwz      r0, 0x220(r3)
	cmpw     r4, r0
	bne      lbl_801E2910
	lfs      f1, lbl_805198C8@sda21(r2)
	blr

lbl_801E2910:
	lwz      r3, 0x210(r3)
	slwi     r0, r4, 2
	lfsx     f1, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E2920
 * Size:	000120
 */
Mgr::Mgr()
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	stw      r0, 0x444(r1)
	extsh.   r0, r4
	lis      r4, lbl_80480B10@ha
	stw      r31, 0x43c(r1)
	addi     r31, r4, lbl_80480B10@l
	stw      r30, 0x438(r1)
	mr       r30, r3
	beq      lbl_801E2950
	addi     r0, r30, 0x8c
	stw      r0, 4(r30)

lbl_801E2950:
	mr       r3, r30
	li       r4, 0
	bl       __ct__Q24Game12TNodeItemMgrFv
	lis      r3, __vt__Q34Game8ItemRock3Mgr@ha
	addi     r0, r31, 0xc
	addi     r4, r3, __vt__Q34Game8ItemRock3Mgr@l
	mr       r3, r30
	stw      r4, 0(r30)
	addi     r5, r4, 0x74
	li       r4, 1
	stw      r5, 0x30(r30)
	stw      r0, 8(r30)
	bl       setModelSize__Q24Game11BaseItemMgrFi
	addi     r0, r31, 0x20
	li       r3, 0x2a4
	stw      r0, 0x28(r30)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801E29A4
	bl       __ct__Q34Game8ItemRock9RockParmsFv
	mr       r0, r3

lbl_801E29A4:
	stw      r0, 0x88(r30)
	li       r0, 0
	addi     r3, r31, 0x40
	li       r4, 0
	stw      r0, 8(r1)
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r31, r3, r3
	beq      lbl_801E2A24
	mr       r4, r31
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1c(r1)
	bne      lbl_801E2A04
	li       r0, 0
	stw      r0, 0x424(r1)

lbl_801E2A04:
	lwz      r3, 0x88(r30)
	addi     r4, r1, 0x10
	lwz      r12, 0xd8(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       __dla__FPv

lbl_801E2A24:
	lwz      r0, 0x444(r1)
	mr       r3, r30
	lwz      r31, 0x43c(r1)
	lwz      r30, 0x438(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E2A40
 * Size:	000024
 */
void RockParms::read(Stream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0xdc
	stw      r0, 0x14(r1)
	bl       read__10ParametersFR6Stream
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E2A64
 * Size:	0001A4
 */
RockParms::RockParms()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, 0x73303030@ha
	lis      r4, __vt__Q24Game13CreatureParms@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__Q24Game13CreatureParms@l
	addi     r5, r5, 0x73303030@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, lbl_80480B10@ha
	stw      r30, 8(r1)
	addi     r30, r3, lbl_80480B10@l
	li       r3, 0
	mr       r4, r31
	stw      r0, 0xd8(r31)
	addi     r0, r31, 0xd4
	addi     r6, r30, 0x70
	stw      r0, 0(r31)
	addi     r0, r30, 0x5c
	stw      r3, 4(r31)
	addi     r3, r31, 0xc
	stw      r0, 8(r31)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x73303031@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805198F8@sda21(r2)
	stw      r0, 0xc(r31)
	mr       r4, r31
	lfs      f1, lbl_805198C8@sda21(r2)
	addi     r3, r31, 0x34
	stfs     f0, 0x24(r31)
	addi     r5, r5, 0x73303031@l
	lfs      f0, lbl_805198CC@sda21(r2)
	addi     r6, r30, 0x84
	stfs     f1, 0x2c(r31)
	stfs     f0, 0x30(r31)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x73303032@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805198F8@sda21(r2)
	stw      r0, 0x34(r31)
	mr       r4, r31
	lfs      f1, lbl_805198C8@sda21(r2)
	addi     r3, r31, 0x5c
	stfs     f0, 0x4c(r31)
	addi     r5, r5, 0x73303032@l
	lfs      f0, lbl_805198CC@sda21(r2)
	addi     r6, r30, 0x94
	stfs     f1, 0x54(r31)
	stfs     f0, 0x58(r31)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x73303033@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805198FC@sda21(r2)
	stw      r0, 0x5c(r31)
	mr       r4, r31
	lfs      f1, lbl_805198C8@sda21(r2)
	addi     r3, r31, 0x84
	stfs     f0, 0x74(r31)
	addi     r5, r5, 0x73303033@l
	lfs      f0, lbl_805198CC@sda21(r2)
	addi     r6, r2, lbl_80519900@sda21
	stfs     f1, 0x7c(r31)
	stfs     f0, 0x80(r31)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x73303034@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519908@sda21(r2)
	stw      r0, 0x84(r31)
	mr       r4, r31
	lfs      f1, lbl_8051990C@sda21(r2)
	addi     r3, r31, 0xac
	stfs     f0, 0x9c(r31)
	addi     r5, r5, 0x73303034@l
	lfs      f0, lbl_80519910@sda21(r2)
	addi     r6, r30, 0xa4
	stfs     f1, 0xa4(r31)
	stfs     f0, 0xa8(r31)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r4, "__vt__7Parm<f>"@ha
	lis      r3, __vt__Q34Game8ItemRock9RockParms@ha
	addi     r0, r4, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519914@sda21(r2)
	stw      r0, 0xac(r31)
	addi     r0, r3, __vt__Q34Game8ItemRock9RockParms@l
	lfs      f1, lbl_8051990C@sda21(r2)
	addi     r3, r31, 0xdc
	stfs     f0, 0xc4(r31)
	li       r4, 1
	lfs      f0, lbl_80519910@sda21(r2)
	stfs     f1, 0xcc(r31)
	stfs     f0, 0xd0(r31)
	stw      r0, 0xd8(r31)
	bl       __ct__Q44Game8ItemRock9RockParms5ParmsFv
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E2C08
 * Size:	0002F0
 */
RockParms::Parms::Parms()
    : Parameters(nullptr, "Plant::Parms")
    , mP000(this, 'p000', "ライフ(0)", 1500.0f, 1.0f, 60000.0f)
    , mP001(this, 'p001', "ライフ(1)", 1200.0f, 1.0f, 60000.0f)
    , mP002(this, 'p002', "ライフ(2)", 750.0f, 1.0f, 60000.0f)
    , mP003(this, 'p003', "ライフ(3)", 250.0f, 1.0f, 60000.0f)
    , mP004(this, 'p004', "再生時間(0) [分]", 1.0f, 0.0f, 150.0f)
    , mP005(this, 'p005', "再生時間(1) [分]", 1.0f, 0.0f, 150.0f)
    , mP006(this, 'p006', "再生時間(2) [分]", 1.0f, 0.0f, 150.0f)
    , mP007(this, 'p007', "再生時間(3) [分]", 1.0f, 0.0f, 150.0f)
    , mP008(this, 'p008', "仕事半径(0)", 35.0f, 0.0f, 150.0f)
    , mP009(this, 'p009', "仕事半径(0)", 20.0f, 0.0f, 150.0f)
    , mP010(this, 'p010', "仕事半径(0)", 10.0f, 0.0f, 150.0f)
{

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	lis      r4, lbl_80480B10@ha
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_80480B10@l
	stw      r30, 8(r1)
	mr       r30, r3
	beq      lbl_801E2C38
	addi     r0, r30, 0x1c4
	stw      r0, 0(r30)

lbl_801E2C38:
	li       r0, 0
	lis      r5, 0x70303030@ha
	stw      r0, 4(r30)
	addi     r0, r31, 0xb4
	mr       r4, r30
	addi     r3, r30, 0xc
	stw      r0, 8(r30)
	addi     r5, r5, 0x70303030@l
	addi     r6, r31, 0xc4
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303031@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519918@sda21(r2)
	stw      r0, 0xc(r30)
	mr       r4, r30
	lfs      f1, lbl_805198CC@sda21(r2)
	addi     r3, r30, 0x34
	stfs     f0, 0x24(r30)
	addi     r5, r5, 0x70303031@l
	lfs      f0, lbl_8051991C@sda21(r2)
	addi     r6, r31, 0xd0
	stfs     f1, 0x2c(r30)
	stfs     f0, 0x30(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303032@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519920@sda21(r2)
	stw      r0, 0x34(r30)
	mr       r4, r30
	lfs      f1, lbl_805198CC@sda21(r2)
	addi     r3, r30, 0x5c
	stfs     f0, 0x4c(r30)
	addi     r5, r5, 0x70303032@l
	lfs      f0, lbl_8051991C@sda21(r2)
	addi     r6, r31, 0xdc
	stfs     f1, 0x54(r30)
	stfs     f0, 0x58(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303033@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519924@sda21(r2)
	stw      r0, 0x5c(r30)
	mr       r4, r30
	lfs      f1, lbl_805198CC@sda21(r2)
	addi     r3, r30, 0x84
	stfs     f0, 0x74(r30)
	addi     r5, r5, 0x70303033@l
	lfs      f0, lbl_8051991C@sda21(r2)
	addi     r6, r31, 0xe8
	stfs     f1, 0x7c(r30)
	stfs     f0, 0x80(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303034@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519928@sda21(r2)
	stw      r0, 0x84(r30)
	mr       r4, r30
	lfs      f1, lbl_805198CC@sda21(r2)
	addi     r3, r30, 0xac
	stfs     f0, 0x9c(r30)
	addi     r5, r5, 0x70303034@l
	lfs      f0, lbl_8051991C@sda21(r2)
	addi     r6, r31, 0xf4
	stfs     f1, 0xa4(r30)
	stfs     f0, 0xa8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303035@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805198CC@sda21(r2)
	stw      r0, 0xac(r30)
	mr       r4, r30
	lfs      f1, lbl_805198C8@sda21(r2)
	addi     r3, r30, 0xd4
	stfs     f0, 0xc4(r30)
	addi     r5, r5, 0x70303035@l
	lfs      f0, lbl_8051992C@sda21(r2)
	addi     r6, r31, 0x108
	stfs     f1, 0xcc(r30)
	stfs     f0, 0xd0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303036@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805198CC@sda21(r2)
	stw      r0, 0xd4(r30)
	mr       r4, r30
	lfs      f1, lbl_805198C8@sda21(r2)
	addi     r3, r30, 0xfc
	stfs     f0, 0xec(r30)
	addi     r5, r5, 0x70303036@l
	lfs      f0, lbl_8051992C@sda21(r2)
	addi     r6, r31, 0x11c
	stfs     f1, 0xf4(r30)
	stfs     f0, 0xf8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303037@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805198CC@sda21(r2)
	stw      r0, 0xfc(r30)
	mr       r4, r30
	lfs      f1, lbl_805198C8@sda21(r2)
	addi     r3, r30, 0x124
	stfs     f0, 0x114(r30)
	addi     r5, r5, 0x70303037@l
	lfs      f0, lbl_8051992C@sda21(r2)
	addi     r6, r31, 0x130
	stfs     f1, 0x11c(r30)
	stfs     f0, 0x120(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303038@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805198CC@sda21(r2)
	stw      r0, 0x124(r30)
	mr       r4, r30
	lfs      f1, lbl_805198C8@sda21(r2)
	addi     r3, r30, 0x14c
	stfs     f0, 0x13c(r30)
	addi     r5, r5, 0x70303038@l
	lfs      f0, lbl_8051992C@sda21(r2)
	addi     r6, r31, 0x144
	stfs     f1, 0x144(r30)
	stfs     f0, 0x148(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303039@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519930@sda21(r2)
	stw      r0, 0x14c(r30)
	mr       r4, r30
	lfs      f1, lbl_805198C8@sda21(r2)
	addi     r3, r30, 0x174
	stfs     f0, 0x164(r30)
	addi     r5, r5, 0x70303039@l
	lfs      f0, lbl_8051992C@sda21(r2)
	addi     r6, r31, 0x144
	stfs     f1, 0x16c(r30)
	stfs     f0, 0x170(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303130@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519934@sda21(r2)
	stw      r0, 0x174(r30)
	mr       r4, r30
	lfs      f1, lbl_805198C8@sda21(r2)
	addi     r3, r30, 0x19c
	stfs     f0, 0x18c(r30)
	addi     r5, r5, 0x70303130@l
	lfs      f0, lbl_8051992C@sda21(r2)
	addi     r6, r31, 0x144
	stfs     f1, 0x194(r30)
	stfs     f0, 0x198(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f2, lbl_805198EC@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_805198C8@sda21(r2)
	stw      r0, 0x19c(r30)
	mr       r3, r30
	lfs      f0, lbl_8051992C@sda21(r2)
	stfs     f2, 0x1b4(r30)
	stfs     f1, 0x1bc(r30)
	stfs     f0, 0x1c0(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E2EF8
 * Size:	000110
 */
BaseItem* Mgr::birth()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x228
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_801E2FE0
	li       r4, 0x409
	bl       __ct__Q24Game8BaseItemFi
	lis      r3,
"__vt__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>"@ha
	li       r0, 0
	addi     r4, r3,
"__vt__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>"@l
	li       r3, 0x1c
	stw      r4, 0(r31)
	addi     r4, r4, 0x1b0
	stw      r4, 0x178(r31)
	stw      r0, 0x1d8(r31)
	stw      r0, 0x1dc(r31)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_801E2F84
	lis      r4, "__vt__Q24Game35StateMachine<Q34Game8ItemRock4Item>"@ha
	lis      r5, "__vt__Q24Game30ItemFSM<Q34Game8ItemRock4Item>"@ha
	addi     r0, r4, "__vt__Q24Game35StateMachine<Q34Game8ItemRock4Item>"@l
	lis      r4, __vt__Q34Game8ItemRock3FSM@ha
	stw      r0, 0(r3)
	li       r6, -1
	addi     r5, r5, "__vt__Q24Game30ItemFSM<Q34Game8ItemRock4Item>"@l
	addi     r0, r4, __vt__Q34Game8ItemRock3FSM@l
	stw      r6, 0x18(r3)
	stw      r5, 0(r3)
	stw      r0, 0(r3)

lbl_801E2F84:
	stw      r3, 0x1d8(r31)
	mr       r4, r31
	lwz      r3, 0x1d8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r4,
"__vt__Q24Game75WorkItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>"@ha
	addi     r3, r31, 0x1e0
	addi     r4, r4,
"__vt__Q24Game75WorkItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>"@l
	stw      r4, 0(r31)
	addi     r0, r4, 0x1b0
	stw      r0, 0x178(r31)
	bl       __ct__Q24Game11TSoundEventFv
	lis      r3, __vt__Q34Game8ItemRock4Item@ha
	lfs      f0, lbl_805198C8@sda21(r2)
	addi     r3, r3, __vt__Q34Game8ItemRock4Item@l
	li       r0, 0
	stw      r3, 0(r31)
	addi     r3, r3, 0x1b0
	stw      r3, 0x178(r31)
	stfs     f0, 0x118(r31)
	stw      r0, 0x1ec(r31)

lbl_801E2FE0:
	mr       r3, r30
	mr       r4, r31
	bl       entry__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E3008
 * Size:	000060
 */
BaseItem* Mgr::generatorBirth(Vector3f&, Vector3f&, GenItemParm*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r12, 0(r3)
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	mr       r31, r3
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r31
	mr       r4, r30
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E3068
 * Size:	0000A8
 */
void Mgr::onLoadResources()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_80480B10@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_80480B10@l
	addi     r4, r2, lbl_80519938@sda21
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       loadArchive__Q24Game11BaseItemMgrFPc
	mr       r3, r29
	addi     r4, r31, 0x150
	li       r5, 0
	lis      r6, 0x2002
	bl       loadBmd__Q24Game11BaseItemMgrFPciUl
	lwz      r3, 0x1c(r29)
	lis      r4, 4
	lwz      r3, 0(r3)
	bl       newSharedDisplayList__12J3DModelDataFUl
	lwz      r3, 0x1c(r29)
	lwz      r3, 0(r3)
	bl       makeSharedDL__12J3DModelDataFv
	mr       r3, r29
	addi     r4, r31, 0x15c
	bl       openTextArc__Q24Game11BaseItemMgrFPc
	mr       r0, r3
	mr       r3, r29
	mr       r30, r0
	addi     r5, r31, 0x168
	mr       r4, r30
	bl       loadAnimMgr__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
	mr       r3, r29
	mr       r4, r30
	bl       closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E3110
 * Size:	000134
 */
Mgr::~Mgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801E3228
	lis      r3, __vt__Q34Game8ItemRock3Mgr@ha
	addi     r3, r3, __vt__Q34Game8ItemRock3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x74
	stw      r0, 0x30(r30)
	beq      lbl_801E3218
	lis      r3, __vt__Q24Game12TNodeItemMgr@ha
	addic.   r0, r30, 0x4c
	addi     r3, r3, __vt__Q24Game12TNodeItemMgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x74
	stw      r0, 0x30(r30)
	beq      lbl_801E31E4
	lis      r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@ha
	addic.   r3, r30, 0x6c
	addi     r4, r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@l
	stw      r4, 0x4c(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x68(r30)
	beq      lbl_801E3194
	lis      r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
	addi     r0, r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
	stw      r0, 0x6c(r30)
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_801E3194:
	addic.   r0, r30, 0x4c
	beq      lbl_801E31E4
	lis      r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
	addic.   r0, r30, 0x4c
	addi     r3, r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
	stw      r3, 0x4c(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x68(r30)
	beq      lbl_801E31E4
	lis      r3, "__vt__27Container<Q24Game8BaseItem>"@ha
	addic.   r0, r30, 0x4c
	addi     r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
	stw      r0, 0x4c(r30)
	beq      lbl_801E31E4
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x4c
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x4c(r30)
	bl       __dt__5CNodeFv

lbl_801E31E4:
	addic.   r0, r30, 0x30
	beq      lbl_801E3218
	lis      r3, "__vt__27Container<Q24Game8BaseItem>"@ha
	addic.   r0, r30, 0x30
	addi     r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
	stw      r0, 0x30(r30)
	beq      lbl_801E3218
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x30
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x30(r30)
	bl       __dt__5CNodeFv

lbl_801E3218:
	extsh.   r0, r31
	ble      lbl_801E3228
	mr       r3, r30
	bl       __dl__FPv

lbl_801E3228:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E3244
 * Size:	0000F8
 */
BaseItem* Mgr::doNew()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0x228
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_801E3324
	li       r4, 0x409
	bl       __ct__Q24Game8BaseItemFi
	lis      r3,
"__vt__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>"@ha
	li       r0, 0
	addi     r4, r3,
"__vt__Q24Game74FSMItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>"@l
	li       r3, 0x1c
	stw      r4, 0(r31)
	addi     r4, r4, 0x1b0
	stw      r4, 0x178(r31)
	stw      r0, 0x1d8(r31)
	stw      r0, 0x1dc(r31)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_801E32C8
	lis      r4, "__vt__Q24Game35StateMachine<Q34Game8ItemRock4Item>"@ha
	lis      r5, "__vt__Q24Game30ItemFSM<Q34Game8ItemRock4Item>"@ha
	addi     r0, r4, "__vt__Q24Game35StateMachine<Q34Game8ItemRock4Item>"@l
	lis      r4, __vt__Q34Game8ItemRock3FSM@ha
	stw      r0, 0(r3)
	li       r6, -1
	addi     r5, r5, "__vt__Q24Game30ItemFSM<Q34Game8ItemRock4Item>"@l
	addi     r0, r4, __vt__Q34Game8ItemRock3FSM@l
	stw      r6, 0x18(r3)
	stw      r5, 0(r3)
	stw      r0, 0(r3)

lbl_801E32C8:
	stw      r3, 0x1d8(r31)
	mr       r4, r31
	lwz      r3, 0x1d8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r4,
"__vt__Q24Game75WorkItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>"@ha
	addi     r3, r31, 0x1e0
	addi     r4, r4,
"__vt__Q24Game75WorkItem<Q34Game8ItemRock4Item,Q34Game8ItemRock3FSM,Q34Game8ItemRock5State>"@l
	stw      r4, 0(r31)
	addi     r0, r4, 0x1b0
	stw      r0, 0x178(r31)
	bl       __ct__Q24Game11TSoundEventFv
	lis      r3, __vt__Q34Game8ItemRock4Item@ha
	lfs      f0, lbl_805198C8@sda21(r2)
	addi     r3, r3, __vt__Q34Game8ItemRock4Item@l
	li       r0, 0
	stw      r3, 0(r31)
	addi     r3, r3, 0x1b0
	stw      r3, 0x178(r31)
	stfs     f0, 0x118(r31)
	stw      r0, 0x1ec(r31)

lbl_801E3324:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E333C
 * Size:	00000C
 */
u32 Mgr::generatorGetID()
{
	/*
	lis      r3, 0x726F636B@ha
	addi     r3, r3, 0x726F636B@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E3348
 * Size:	00000C
 */
// const char* ::efx::ArgKouhai::getName()
// {
// 	/*
// 	lis      r3, lbl_80480C84@ha
// 	addi     r3, r3, lbl_80480C84@l
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801E3354
 * Size:	00000C
 */
char* Item::getCreatureName()
{
	/*
	lis      r3, lbl_80480C90@ha
	addi     r3, r3, lbl_80480C90@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E3360
 * Size:	000034
 */
// void FSMItem<Item, FSM, State>::doAI()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r4, r3
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x1D8(r3)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801E3394
 * Size:	000044
 */
// void FSMItem<Item, FSM, State>::onKeyEvent(const SysShape::KeyEvent&)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r6, r3
// 	  mr        r5, r4
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x1DC(r3)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x34
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r6
// 	  lwz       r12, 0x24(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0x34:
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801E33D8
 * Size:	000004
 */
// void ItemState<Item>::onDamage(Item*, float) { }

/*
 * --INFO--
 * Address:	801E33DC
 * Size:	000004
 */
// void ItemState<Item>::onBounce(Item*, Sys::Triangle*) { }

/*
 * --INFO--
 * Address:	801E33E0
 * Size:	000004
 */
// void ItemState<Item>::onPlatCollision(Item*, PlatEvent&) { }

/*
 * --INFO--
 * Address:	801E33E4
 * Size:	000004
 */
// void ItemState<Item>::onCollision(Item*, CollEvent&) { }

/*
 * --INFO--
 * Address:	801E33E8
 * Size:	000004
 */
// void FSMState<Item>::init(Item*, StateArg*) { }

/*
 * --INFO--
 * Address:	801E33EC
 * Size:	000004
 */
// void FSMState<Item>::exec(Item*) { }

/*
 * --INFO--
 * Address:	801E33F0
 * Size:	000004
 */
// void FSMState<Item>::cleanup(Item*) { }

/*
 * --INFO--
 * Address:	801E33F4
 * Size:	000004
 */
// void FSMState<Item>::resume(Item*) { }

/*
 * --INFO--
 * Address:	801E33F8
 * Size:	000004
 */
// void FSMState<Item>::restart(Item*) { }

/*
 * --INFO--
 * Address:	801E33FC
 * Size:	000004
 */
// void StateMachine<Item>::init(Item*) { }

/*
 * --INFO--
 * Address:	801E3400
 * Size:	000038
 */
// void StateMachine<Item>::exec(Item*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwz      r3, 0x1dc(r4)
// 	cmplwi   r3, 0
// 	beq      lbl_801E3428
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0xc(r12)
// 	mtctr    r12
// 	bctrl

// lbl_801E3428:
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801E3438
 * Size:	000064
 */
// void StateMachine<Item>::create(int)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	li       r0, 0
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	stw      r4, 0xc(r3)
// 	stw      r0, 8(r3)
// 	lwz      r0, 0xc(r3)
// 	slwi     r3, r0, 2
// 	bl       __nwa__FUl
// 	stw      r3, 4(r31)
// 	lwz      r0, 0xc(r31)
// 	slwi     r3, r0, 2
// 	bl       __nwa__FUl
// 	stw      r3, 0x10(r31)
// 	lwz      r0, 0xc(r31)
// 	slwi     r3, r0, 2
// 	bl       __nwa__FUl
// 	stw      r3, 0x14(r31)
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801E349C
 * Size:	00009C
 */
// void StateMachine<Item>::transit(Item*, int, StateArg*)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x20(r1)
// 	  mflr      r0
// 	  stw       r0, 0x24(r1)
// 	  rlwinm    r0,r5,2,0,29
// 	  stmw      r27, 0xC(r1)
// 	  mr        r27, r3
// 	  mr        r28, r4
// 	  mr        r29, r6
// 	  lwz       r30, 0x1DC(r4)
// 	  lwz       r3, 0x14(r3)
// 	  cmplwi    r30, 0
// 	  lwzx      r31, r3, r0
// 	  beq-      .loc_0x50
// 	  mr        r3, r30
// 	  lwz       r12, 0x0(r30)
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x4(r30)
// 	  stw       r0, 0x18(r27)

// 	.loc_0x50:
// 	  lwz       r0, 0xC(r27)
// 	  cmpw      r31, r0
// 	  blt-      .loc_0x60

// 	.loc_0x5C:
// 	  b         .loc_0x5C

// 	.loc_0x60:
// 	  lwz       r3, 0x4(r27)
// 	  rlwinm    r0,r31,2,0,29
// 	  mr        r4, r28
// 	  mr        r5, r29
// 	  lwzx      r3, r3, r0
// 	  stw       r3, 0x1DC(r28)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lmw       r27, 0xC(r1)
// 	  lwz       r0, 0x24(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x20
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801E3538
 * Size:	000084
 */
// void StateMachine<Item>::registerState(FSMState<Item>*)
// {
// 	/*
// 	.loc_0x0:
// 	  lwz       r6, 0x8(r3)
// 	  lwz       r0, 0xC(r3)
// 	  cmpw      r6, r0
// 	  bgelr-
// 	  lwz       r5, 0x4(r3)
// 	  rlwinm    r0,r6,2,0,29
// 	  stwx      r4, r5, r0
// 	  lwz       r5, 0x4(r4)
// 	  cmpwi     r5, 0
// 	  blt-      .loc_0x34
// 	  lwz       r0, 0xC(r3)
// 	  cmpw      r5, r0
// 	  blt-      .loc_0x3C

// 	.loc_0x34:
// 	  li        r0, 0
// 	  b         .loc_0x40

// 	.loc_0x3C:
// 	  li        r0, 0x1

// 	.loc_0x40:
// 	  rlwinm.   r0,r0,0,24,31
// 	  beqlr-
// 	  stw       r3, 0x8(r4)
// 	  lwz       r0, 0x8(r3)
// 	  lwz       r6, 0x4(r4)
// 	  lwz       r5, 0x10(r3)
// 	  rlwinm    r0,r0,2,0,29
// 	  stwx      r6, r5, r0
// 	  lwz       r0, 0x4(r4)
// 	  lwz       r5, 0x8(r3)
// 	  lwz       r4, 0x14(r3)
// 	  rlwinm    r0,r0,2,0,29
// 	  stwx      r5, r4, r0
// 	  lwz       r4, 0x8(r3)
// 	  addi      r0, r4, 0x1
// 	  stw       r0, 0x8(r3)
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801E35BC
 * Size:	000044
 */
// void FSMItem<Item, FSM, State>::platCallback(PlatEvent&)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r6, r3
// 	  mr        r5, r4
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x1DC(r3)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x34
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r6
// 	  lwz       r12, 0x2C(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0x34:
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801E3600
 * Size:	000044
 */
// void FSMItem<Item, FSM, State>::collisionCallback(CollEvent&)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r6, r3
// 	  mr        r5, r4
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x1DC(r3)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x34
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r6
// 	  lwz       r12, 0x30(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0x34:
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801E3644
 * Size:	000044
 */
// void FSMItem<Item, FSM, State>::bounceCallback(Sys::Triangle*)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r6, r3
// 	  mr        r5, r4
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x1DC(r3)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x34
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r6
// 	  lwz       r12, 0x28(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0x34:
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801E3688
 * Size:	000008
 */
// void FSMItem<Item, FSM, State>::@376 @onKeyEvent(const SysShape::KeyEvent&)
// {
// 	/*
// 	.loc_0x0:
// 	  subi      r3, r3, 0x178
// 	  b         -0x2F8
// 	*/
// }

/*
 * --INFO--
 * Address:	801E3690
 * Size:	000008
 */
// void Item::@376 @onKeyEvent(const SysShape::KeyEvent&)
// {
// 	/*
// 	addi     r3, r3, -376
// 	b        onKeyEvent__Q34Game8ItemRock4ItemFRCQ28SysShape8KeyEvent
// 	*/
// }

/*
 * --INFO--
 * Address:	801E3698
 * Size:	000008
 */
// Mgr::@48 @~Mgr()
// {
// 	/*
// 	addi     r3, r3, -48
// 	b        __dt__Q34Game8ItemRock3MgrFv
// 	*/
// }
} // namespace ItemRock
} // namespace Game
