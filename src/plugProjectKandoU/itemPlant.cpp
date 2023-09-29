#include "Game/Entities/ItemPlant.h"
#include "Game/Farm.h"
#include "PSM/Tsuyukusa.h"

namespace Game {
namespace ItemPlant {

static const char unusedName[] = "itemPlant";

Mgr* mgr;

/*
 * --INFO--
 * Address:	801DCE28
 * Size:	00018C
 */
void FSM::init(Item* item)
{
	create(ITEMPLANT_StateCount);
	registerState(new NormalState);
	registerState(new DamagedState);
	registerState(new GrowUpState);
	registerState(new KareruState);
}

/*
 * --INFO--
 * Address:	801DCFB4
 * Size:	000034
 */
void NormalState::init(Item* item, StateArg* stateArg) { static_cast<Item*>(item)->startMotion(0); }

/*
 * --INFO--
 * Address:	801DCFEC
 * Size:	000128
 */
void NormalState::exec(Item* item)
{
	Item* plant = static_cast<Item*>(item);
	plant->_1F8 += sys->mDeltaTime;
	switch (plant->_1F4) {
	case 0:
		if (plant->_1F8 > plant->_1FC + mgr->mParms->mPlantParms.mP000.mValue) {
			transit(plant, ITEMPLANT_GrowUp, nullptr);
		}
		break;
	case 1:
		if (plant->_1F8 > plant->_1FC + mgr->mParms->mPlantParms.mP001.mValue) {
			transit(plant, ITEMPLANT_GrowUp, nullptr);
		}
		break;
	case 2:
		if (plant->_1F8 > plant->_1FC + mgr->mParms->mPlantParms.mP003.mValue) {
			plant->bearFruits();
			plant->_1F8 = 0.0f;
		}
		break;
	case 3:
		plant->_1F8 = 0.0f;
		break;
	}
}

/*
 * --INFO--
 * Address:	801DD148
 * Size:	000004
 */
void NormalState::cleanup(Item*) { }

/*
 * --INFO--
 * Address:	801DD14C
 * Size:	000034
 */
void NormalState::eventKarero(Item* item) { transit(item, ITEMPLANT_Kareru, nullptr); }

/*
 * --INFO--
 * Address:	801DD180
 * Size:	00005C
 */
void NormalState::onDamage(Item* item, f32 damage)
{
	static_cast<Item*>(item)->addDamage(damage);
	transit(item, ITEMPLANT_Damaged, nullptr);
}

/*
 * --INFO--
 * Address:	801DD1DC
 * Size:	000048
 */
void DamagedState::init(Item* item, StateArg* stateArg)
{
	static_cast<Item*>(item)->startMotion(4);
	_10 = false;
}

/*
 * --INFO--
 * Address:	801DD224
 * Size:	000004
 */
void DamagedState::exec(Item*) { }

/*
 * --INFO--
 * Address:	801DD228
 * Size:	000004
 */
void DamagedState::cleanup(Item*) { }

/*
 * --INFO--
 * Address:	801DD22C
 * Size:	00000C
 */
void DamagedState::eventKarero(Item*) { _10 = true; }

/*
 * --INFO--
 * Address:	801DD238
 * Size:	00005C
 */
void DamagedState::onKeyEvent(Item* item, const SysShape::KeyEvent& event)
{
	if (_10) {
		transit(item, ITEMPLANT_Kareru, nullptr);
	} else {
		transit(item, ITEMPLANT_Normal, nullptr);
	}
}

/*
 * --INFO--
 * Address:	801DD294
 * Size:	000024
 */
void DamagedState::onDamage(Item* item, f32 damage) { static_cast<Item*>(item)->addDamage(damage); }

/*
 * --INFO--
 * Address:	801DD2B8
 * Size:	000074
 */
void GrowUpState::init(Item* item, StateArg* stateArg)
{
	Item* plant = static_cast<Item*>(item);
	plant->startMotion(1);
	plant->_1F8 = 0.0f;
	_10         = false;
	plant->startSound(PSSE_EV_TSUYUKUSA_GROW);
}

/*
 * --INFO--
 * Address:	801DD32C
 * Size:	000004
 */
void GrowUpState::exec(Item*) { }

/*
 * --INFO--
 * Address:	801DD330
 * Size:	000004
 */
void GrowUpState::cleanup(Item*) { }

/*
 * --INFO--
 * Address:	801DD334
 * Size:	00000C
 */
void GrowUpState::eventKarero(Item*) { _10 = true; }

/*
 * --INFO--
 * Address:	801DD340
 * Size:	000120
 */
void GrowUpState::onKeyEvent(Item* item, const SysShape::KeyEvent& event)
{
	Item* plant = static_cast<Item*>(item);
	plant->_1F4++;

	if (plant->_1F4 == 2) {
		PSMTXCopy(plant->mObjMatrix.mMatrix.mtxView, plant->mModel->mJ3dModel->mPosMtx);
		plant->mModel->mJ3dModel->calc();
		plant->mProcAnimator.update(plant->mFaceDir, 0.0f);
	}

	P2ASSERTLINE(381, plant->_1F4 <= 2);

	if (_10) {
		transit(plant, ITEMPLANT_Kareru, nullptr);
		return;
	}

	if (plant->_1F4 == 2) {
		plant->bearFruits();
	}

	transit(plant, ITEMPLANT_Normal, nullptr);
}

/*
 * --INFO--
 * Address:	801DD460
 * Size:	000024
 */
void GrowUpState::onDamage(Item* item, f32 damage) { static_cast<Item*>(item)->addDamage(damage); }

/*
 * --INFO--
 * Address:	801DD484
 * Size:	00007C
 */
void KareruState::init(Item* item, StateArg* stateArg)
{
	Item* plant = static_cast<Item*>(item);
	plant->startMotion(2);
	plant->mDamage = 0.0f;
	plant->_1F4    = 3;
	plant->killFruits();
	_10 = 0;
	_12 = 0;
}

/*
 * --INFO--
 * Address:	801DD504
 * Size:	00008C
 */
void KareruState::exec(Item* item)
{
	if (_10 == 1 && _12) {
		item->setAlive(true);
		static_cast<Item*>(item)->startMotion(3);
		_12 = 0;
		_10 = 2;
	}
}

/*
 * --INFO--
 * Address:	801DD590
 * Size:	000004
 */
void KareruState::cleanup(Item*) { }

/*
 * --INFO--
 * Address:	801DD594
 * Size:	000018
 */
void KareruState::eventHaero(Item*)
{
	if (_10 != 2) {
		_12 = 1;
	}
}

/*
 * --INFO--
 * Address:	801DD5AC
 * Size:	0000A4
 */
void KareruState::onKeyEvent(Item* item, const SysShape::KeyEvent& event)
{
	if (event.mType == KEYEVENT_END || event.mType == KEYEVENT_END_BLEND) {
		switch (_10) {
		case 0:
			_10 = 1;
			item->setAlive(false);
			break;
		case 1:
			break;
		case 2:
			static_cast<Item*>(item)->_1F4 = 0;
			transit(item, ITEMPLANT_Normal, nullptr);
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	801DD650
 * Size:	000004
 */
void KareruState::onDamage(Item*, f32) { }

/*
 * --INFO--
 * Address:	801DD654
 * Size:	000048
 */
void Item::constructor() { mSoundObj = new PSM::Tsuyukusa(this); }

/*
 * --INFO--
 * Address:	801DD69C
 * Size:	000058
 */
void Item::onInit(CreatureInitArg* initArg)
{
	setAlive(true);
	_1F8     = 0.0f;
	mDamage  = 0.0f;
	mFaceDir = 0.0f;
	_1EC     = 0;
	_1F4     = 0;
}

/*
 * --INFO--
 * Address:	801DD6F4
 * Size:	000028
 */
void Item::onStickStart(Creature* stuck)
{
	if (stuck && stuck->mStuckCollPart->mPartType == COLLTYPE_SPHERE) {
		_1EC++;
	}
}

/*
 * --INFO--
 * Address:	801DD71C
 * Size:	00003C
 */
void Item::onStickEnd(Creature* stuck)
{
	if (stuck && stuck->mStuckCollPart->mPartType == COLLTYPE_SPHERE) {
		_1EC--;
		if (_1EC < 0) {
			_1EC = 0;
		}
	}
}

/*
 * --INFO--
 * Address:	801DD758
 * Size:	000028
 */
void Item::onSetPosition() { Farm::farmMgr->addPlant(this); }

/*
 * --INFO--
 * Address:	801DD780
 * Size:	000044
 */
void Item::updateTrMatrix()
{
	Vector3f rot(0.0f, mFaceDir, 0.0f);
	mObjMatrix.makeTR(mPosition, rot);
}

/*
 * --INFO--
 * Address:	801DD7C4
 * Size:	000028
 */
void Item::startColorMotion(int state)
{
	mColorMotionState = state;
	if (mColorMotionState == 0) {
		_1E4 = 1.0f;
	} else {
		_1E4 = 0.0f;
	}
}

/*
 * --INFO--
 * Address:	801DD7EC
 * Size:	000090
 */
void Item::updateColorMotion(f32)
{
	/*
	lhz      r0, 0x1e8(r3)
	cmpwi    r0, 1
	beq      lbl_801DD840
	bgelr
	cmpwi    r0, 0
	bltlr
	lwz      r4, sys@sda21(r13)
	lfs      f2, 0x1e4(r3)
	lfs      f3, 0x54(r4)
	lfs      f0, lbl_80519804@sda21(r2)
	fmuls    f1, f1, f3
	fadds    f1, f2, f1
	stfs     f1, 0x1e4(r3)
	lfs      f1, 0x1e4(r3)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bnelr
	stfs     f0, 0x1e4(r3)
	li       r0, 2
	sth      r0, 0x1e8(r3)
	blr

lbl_801DD840:
	lwz      r4, sys@sda21(r13)
	lfs      f2, 0x1e4(r3)
	lfs      f3, 0x54(r4)
	lfs      f0, lbl_80519800@sda21(r2)
	fmuls    f1, f1, f3
	fsubs    f1, f2, f1
	stfs     f1, 0x1e4(r3)
	lfs      f1, 0x1e4(r3)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bnelr
	stfs     f0, 0x1e4(r3)
	li       r0, 2
	sth      r0, 0x1e8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DD87C
 * Size:	000034
 */
void Item::doAI()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 0x1d8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DD8B0
 * Size:	000044
 */
bool Item::interactAttack(InteractAttack&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r3
	mr       r5, r4
	stw      r0, 0x14(r1)
	mr       r4, r6
	lwz      r3, 0x1dc(r3)
	lfs      f1, 8(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DD8F4
 * Size:	000004
 */
// void ItemState<Item>::onDamage(Item*, f32) { }

/*
 * --INFO--
 * Address:	801DD8F8
 * Size:	000038
 */
bool Item::interactFarmKarero(InteractFarmKarero&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 0x1dc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DD930
 * Size:	000004
 */
void State::eventKarero(Item*) { }

/*
 * --INFO--
 * Address:	801DD934
 * Size:	000038
 */
bool Item::interactFarmHaero(InteractFarmHaero&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 0x1dc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DD96C
 * Size:	000004
 */
void State::eventHaero(Item*) { }

/*
 * --INFO--
 * Address:	801DD970
 * Size:	000120
 */
void Item::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lfs      f0, lbl_80519804@sda21(r2)
	li       r7, 0
	stw      r0, 0x54(r1)
	li       r0, 0xff
	li       r6, 0x66
	li       r5, 0x99
	stw      r31, 0x4c(r1)
	mr       r31, r4
	stw      r30, 0x48(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r8, systemFont__9JFWSystem@sda21(r13)
	stw      r7, 0x24(r1)
	stw      r8, 0x20(r1)
	stw      r7, 0x28(r1)
	stw      r7, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stb      r6, 0x34(r1)
	stb      r5, 0x35(r1)
	stb      r0, 0x36(r1)
	stb      r0, 0x37(r1)
	stb      r7, 0x38(r1)
	stb      r6, 0x39(r1)
	stb      r0, 0x3a(r1)
	stb      r0, 0x3b(r1)
	lwz      r4, 0x25c(r4)
	bl       initPerspPrintf__8GraphicsFP8Viewport
	lfs      f0, lbl_80519808@sda21(r2)
	li       r6, 0xc8
	li       r5, 0
	li       r0, 0xff
	stb      r6, 0x34(r1)
	mr       r4, r30
	addi     r3, r1, 8
	stb      r5, 0x35(r1)
	stb      r5, 0x36(r1)
	stb      r0, 0x37(r1)
	stb      r6, 0x38(r1)
	stb      r6, 0x39(r1)
	stb      r6, 0x3a(r1)
	stb      r0, 0x3b(r1)
	stfs     f0, 0x30(r1)
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xc(r1)
	mr       r3, r30
	lfs      f0, lbl_8051980C@sda21(r2)
	lfs      f3, 8(r1)
	lfs      f1, 0x10(r1)
	fadds    f0, f2, f0
	stfs     f2, 0x18(r1)
	stfs     f3, 0x14(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x18(r1)
	bl
	"getStateID__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>Fv"
	mr       r7, r3
	mr       r3, r31
	addi     r4, r1, 0x20
	addi     r5, r1, 0x14
	addi     r6, r2, lbl_80519810@sda21
	crclr    6
	bl       "perspPrintf__8GraphicsFR15PerspPrintfInfoR10Vector3<f>Pce"
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DDA90
 * Size:	000294
 */
void Item::addDamage(f32)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	stw      r30, 0x48(r1)
	lfs      f0, 0x1f0(r3)
	fadds    f0, f0, f1
	stfs     f0, 0x1f0(r3)
	lwz      r4, mgr__Q24Game9ItemPlant@sda21(r13)
	lfs      f1, 0x1f0(r3)
	lwz      r4, 0x8c(r4)
	lfs      f0, 0x150(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_801DDAE8
	lfs      f0, lbl_80519800@sda21(r2)
	li       r4, 1
	stfs     f0, 0x1f0(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x238(r12)
	mtctr    r12
	bctrl

lbl_801DDAE8:
	mr       r4, r31
	addi     r3, r1, 0x20
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x20
	cmplwi   r0, 0
	stw      r4, 0x10(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x14(r1)
	stw      r3, 0x18(r1)
	bne      lbl_801DDB34
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_801DDCE0

lbl_801DDB34:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_801DDBA0

lbl_801DDB4C:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801DDCE0
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_801DDBA0:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801DDB4C
	b        lbl_801DDCE0

lbl_801DDBC0:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801DDC24
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game12InteractDrop@ha
	addi     r4, r4, __vt__Q24Game11Interaction@l
	stw      r31, 0xc(r1)
	addi     r0, r3, __vt__Q24Game12InteractDrop@l
	mr       r3, r30
	stw      r4, 8(r1)
	addi     r4, r1, 8
	stw      r0, 8(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_801DDC24:
	lwz      r0, 0x1c(r1)
	cmplwi   r0, 0
	bne      lbl_801DDC50
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_801DDCE0

lbl_801DDC50:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_801DDCC4

lbl_801DDC70:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801DDCE0
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_801DDCC4:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801DDC70

lbl_801DDCE0:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x14(r1)
	cmplw    r4, r3
	bne      lbl_801DDBC0
	addi     r3, r1, 0x20
	li       r4, -1
	bl       __dt__Q24Game8StickersFv
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DDD24
 * Size:	000004
 */
void Item::dropFruit(int) { }

/*
 * --INFO--
 * Address:	801DDD28
 * Size:	000318
 */
void ProcAnimator::calcAngles()
{
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
	stfd     f27, 0x30(r1)
	psq_st   f27, 56(r1), 0, qr0
	stfd     f26, 0x20(r1)
	psq_st   f26, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r29, r3
	lwz      r3, 0xc(r3)
	lfs      f29, lbl_80519800@sda21(r2)
	li       r30, 1
	lwz      r3, 0(r3)
	li       r31, 4
	lfs      f30, lbl_80519814@sda21(r2)
	lfs      f28, 0xc(r3)
	lfs      f27, 0x1c(r3)
	lfs      f26, 0x2c(r3)
	lfs      f31, lbl_80519804@sda21(r2)
	stfs     f28, 0(r29)
	stfs     f27, 4(r29)
	stfs     f26, 8(r29)
	b        lbl_801DDFD8

lbl_801DDDB0:
	lwz      r3, 0xc(r29)
	lwzx     r28, r3, r31
	lfs      f3, 0x1c(r28)
	lfs      f2, 0xc(r28)
	fsubs    f5, f3, f27
	lfs      f4, 0x2c(r28)
	fsubs    f0, f2, f28
	fsubs    f1, f4, f26
	fmuls    f6, f5, f5
	fmuls    f1, f1, f1
	fmadds   f0, f0, f0, f6
	fadds    f1, f1, f0
	fcmpo    cr0, f1, f29
	ble      lbl_801DDDF8
	ble      lbl_801DDDFC
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801DDDFC

lbl_801DDDF8:
	fmr      f1, f29

lbl_801DDDFC:
	fcmpo    cr0, f1, f29
	ble      lbl_801DDE10
	lfs      f0, lbl_80519804@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f5, f5, f0

lbl_801DDE10:
	fmr      f28, f2
	fmr      f27, f3
	fmr      f26, f4
	fcmpo    cr0, f5, f30
	bge      lbl_801DDE2C
	fmr      f5, f30
	b        lbl_801DDE3C

lbl_801DDE2C:
	lfs      f0, lbl_80519804@sda21(r2)
	fcmpo    cr0, f5, f0
	ble      lbl_801DDE3C
	fmr      f5, f0

lbl_801DDE3C:
	fcmpo    cr0, f5, f31
	cror     2, 1, 2
	bne      lbl_801DDE50
	lfs      f0, lbl_80519800@sda21(r2)
	b        lbl_801DDEC4

lbl_801DDE50:
	lfs      f0, lbl_80519814@sda21(r2)
	fcmpo    cr0, f5, f0
	cror     2, 0, 2
	bne      lbl_801DDE68
	lfs      f0, lbl_80519818@sda21(r2)
	b        lbl_801DDEC4

lbl_801DDE68:
	lfs      f0, lbl_80519800@sda21(r2)
	fcmpo    cr0, f5, f0
	bge      lbl_801DDEA0
	fneg     f0, f5
	lfs      f1, lbl_8051981C@sda21(r2)
	fmuls    f1, f1, f0
	bl       __cvt_fp2unsigned
	lis      r4, asinAcosTable___5JMath@ha
	slwi     r0, r3, 2
	addi     r3, r4, asinAcosTable___5JMath@l
	lfs      f0, lbl_80519820@sda21(r2)
	lfsx     f1, r3, r0
	fadds    f0, f1, f0
	b        lbl_801DDEC4

lbl_801DDEA0:
	lfs      f0, lbl_8051981C@sda21(r2)
	fmuls    f1, f0, f5
	bl       __cvt_fp2unsigned
	lis      r4, asinAcosTable___5JMath@ha
	slwi     r0, r3, 2
	addi     r3, r4, asinAcosTable___5JMath@l
	lfs      f0, lbl_80519820@sda21(r2)
	lfsx     f1, r3, r0
	fsubs    f0, f0, f1

lbl_801DDEC4:
	lwz      r3, 0x14(r29)
	stfsx    f0, r3, r31
	lwz      r3, 0x18(r29)
	stfsx    f0, r3, r31
	lfs      f2, 0x10(r28)
	lfs      f1, 0x20(r28)
	fmuls    f3, f2, f2
	lfs      f0, 0(r28)
	fmuls    f1, f1, f1
	fmadds   f0, f0, f0, f3
	fadds    f1, f1, f0
	fcmpo    cr0, f1, f29
	ble      lbl_801DDF08
	ble      lbl_801DDF0C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801DDF0C

lbl_801DDF08:
	fmr      f1, f29

lbl_801DDF0C:
	fcmpo    cr0, f1, f29
	ble      lbl_801DDF20
	lfs      f0, lbl_80519804@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0

lbl_801DDF20:
	fcmpo    cr0, f2, f30
	bge      lbl_801DDF30
	fmr      f2, f30
	b        lbl_801DDF40

lbl_801DDF30:
	lfs      f0, lbl_80519804@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_801DDF40
	fmr      f2, f0

lbl_801DDF40:
	fcmpo    cr0, f2, f31
	cror     2, 1, 2
	bne      lbl_801DDF54
	lfs      f0, lbl_80519800@sda21(r2)
	b        lbl_801DDFC8

lbl_801DDF54:
	lfs      f0, lbl_80519814@sda21(r2)
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_801DDF6C
	lfs      f0, lbl_80519818@sda21(r2)
	b        lbl_801DDFC8

lbl_801DDF6C:
	lfs      f0, lbl_80519800@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_801DDFA4
	fneg     f0, f2
	lfs      f1, lbl_8051981C@sda21(r2)
	fmuls    f1, f1, f0
	bl       __cvt_fp2unsigned
	lis      r4, asinAcosTable___5JMath@ha
	slwi     r0, r3, 2
	addi     r3, r4, asinAcosTable___5JMath@l
	lfs      f0, lbl_80519820@sda21(r2)
	lfsx     f1, r3, r0
	fadds    f0, f1, f0
	b        lbl_801DDFC8

lbl_801DDFA4:
	lfs      f0, lbl_8051981C@sda21(r2)
	fmuls    f1, f0, f2
	bl       __cvt_fp2unsigned
	lis      r4, asinAcosTable___5JMath@ha
	slwi     r0, r3, 2
	addi     r3, r4, asinAcosTable___5JMath@l
	lfs      f0, lbl_80519820@sda21(r2)
	lfsx     f1, r3, r0
	fsubs    f0, f0, f1

lbl_801DDFC8:
	lwz      r3, 0x14(r29)
	addi     r30, r30, 1
	stfsx    f0, r3, r31
	addi     r31, r31, 4

lbl_801DDFD8:
	lwz      r0, 0x20(r29)
	cmpw     r30, r0
	blt      lbl_801DDDB0
	lfs      f0, lbl_80519800@sda21(r2)
	lwz      r3, 0x14(r29)
	stfs     f0, 0(r3)
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	psq_l    f27, 56(r1), 0, qr0
	lfd      f27, 0x30(r1)
	psq_l    f26, 40(r1), 0, qr0
	lfd      f26, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x84(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DE040
 * Size:	0004E4
 */
void ProcAnimator::update(f32, f32)
{
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

/*
 * --INFO--
 * Address:	801DE524
 * Size:	000034
 */
void Plant::onKill(CreatureKillArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, mgr__Q24Game9ItemPlant@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DE558
 * Size:	000038
 */
Pellet* Plant::getNearestFruit(Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x288(r3)
	bl       "getFruit__Q34Game9ItemPlant6FruitsFR10Vector3<f>"
	cmplwi   r3, 0
	beq      lbl_801DE57C
	lwz      r3, 0x18(r3)
	b        lbl_801DE580

lbl_801DE57C:
	li       r3, 0

lbl_801DE580:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DE590
 * Size:	000024
 */
void Plant::updateBoundSphere()
{
	/*
	lfs      f1, 0x19c(r3)
	lfs      f0, lbl_80519848@sda21(r2)
	stfs     f1, 0x1c4(r3)
	lfs      f1, 0x1a0(r3)
	stfs     f1, 0x1c8(r3)
	lfs      f1, 0x1a4(r3)
	stfs     f1, 0x1cc(r3)
	stfs     f0, 0x1d0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DE5B4
 * Size:	0001E0
 */
void Plant::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	lwz      r8, systemFont__9JFWSystem@sda21(r13)
	li       r7, 0
	li       r0, 0xff
	li       r6, 0x66
	lfs      f0, lbl_80519804@sda21(r2)
	li       r5, 0x99
	stw      r8, 0x20(r1)
	mr       r31, r4
	mr       r30, r3
	stw      r7, 0x24(r1)
	mr       r3, r31
	stw      r7, 0x28(r1)
	stw      r7, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stb      r6, 0x34(r1)
	stb      r5, 0x35(r1)
	stb      r0, 0x36(r1)
	stb      r0, 0x37(r1)
	stb      r7, 0x38(r1)
	stb      r6, 0x39(r1)
	stb      r0, 0x3a(r1)
	stb      r0, 0x3b(r1)
	lwz      r4, 0x25c(r4)
	bl       initPerspPrintf__8GraphicsFP8Viewport
	lfs      f0, lbl_80519808@sda21(r2)
	li       r6, 0xc8
	li       r5, 0
	li       r0, 0xff
	stb      r6, 0x34(r1)
	mr       r4, r30
	addi     r3, r1, 8
	stb      r5, 0x35(r1)
	stb      r5, 0x36(r1)
	stb      r0, 0x37(r1)
	stb      r6, 0x38(r1)
	stb      r6, 0x39(r1)
	stb      r6, 0x3a(r1)
	stb      r0, 0x3b(r1)
	stfs     f0, 0x30(r1)
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xc(r1)
	mr       r3, r30
	lfs      f0, lbl_8051980C@sda21(r2)
	lfs      f3, 8(r1)
	lfs      f1, 0x10(r1)
	fadds    f0, f2, f0
	stfs     f2, 0x18(r1)
	stfs     f3, 0x14(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x18(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x228(r12)
	mtctr    r12
	bctrl
	lwz      r29, 0x1ec(r30)
	xoris    r5, r3, 0x8000
	lis      r4, 0x4330
	mr       r3, r30
	xoris    r0, r29, 0x8000
	lwz      r12, 0(r30)
	stw      r5, 0x44(r1)
	lfd      f4, lbl_80519858@sda21(r2)
	stw      r4, 0x40(r1)
	lfs      f2, lbl_80519844@sda21(r2)
	lfd      f0, 0x40(r1)
	stw      r0, 0x4c(r1)
	fsubs    f3, f0, f4
	lfs      f0, lbl_8051984C@sda21(r2)
	stw      r4, 0x48(r1)
	lwz      r12, 0x228(r12)
	lfd      f1, 0x48(r1)
	fdivs    f2, f3, f2
	fsubs    f1, f1, f4
	fdivs    f0, f1, f0
	fadds    f31, f0, f2
	mtctr    r12
	bctrl
	fmr      f1, f31
	lis      r4, lbl_80480918@ha
	mr       r7, r3
	mr       r3, r31
	addi     r6, r4, lbl_80480918@l
	mr       r8, r29
	addi     r4, r1, 0x20
	addi     r5, r1, 0x14
	crset    6
	bl       "perspPrintf__8GraphicsFR15PerspPrintfInfoR10Vector3<f>Pce"
	lfs      f1, 0x18(r1)
	lis      r3, lbl_80480928@ha
	lfs      f0, lbl_80519850@sda21(r2)
	addi     r6, r3, lbl_80480928@l
	mr       r3, r31
	addi     r4, r1, 0x20
	fadds    f0, f1, f0
	addi     r5, r1, 0x14
	stfs     f0, 0x18(r1)
	lfs      f1, 0x280(r30)
	lfs      f2, 0x284(r30)
	crset    6
	bl       "perspPrintf__8GraphicsFR15PerspPrintfInfoR10Vector3<f>Pce"
	psq_l    f31, 104(r1), 0, qr0
	lwz      r0, 0x74(r1)
	lfd      f31, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DE794
 * Size:	000778
 */
void Plant::onInit(CreatureInitArg*)
{
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

/*
 * --INFO--
 * Address:	801DEF0C
 * Size:	000034
 */
// void StateMachine<Item>::start(Item*, int, StateArg*)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  li        r0, 0
// 	  stw       r0, 0x1DC(r4)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x14(r12)
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
 * Address:	801DEF40
 * Size:	000080
 */
void Plant::doAI()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r4, r31
	lwz      r3, 0x1d8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r3, 0x3c(r3)
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_801DEFAC
	clrlwi.  r0, r3, 0x1f
	beq      lbl_801DEFAC
	lwz      r0, 0x1f4(r31)
	cmpwi    r0, 3
	beq      lbl_801DEFA0
	lwz      r3, 0x17c(r31)
	li       r4, 1
	bl       noukouFrameWork__Q23PSM9TsuyukusaFb
	b        lbl_801DEFAC

lbl_801DEFA0:
	lwz      r3, 0x17c(r31)
	li       r4, 0
	bl       noukouFrameWork__Q23PSM9TsuyukusaFb

lbl_801DEFAC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DEFC0
 * Size:	000370
 */
void Plant::startMotion(int)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	mr       r31, r3
	addi     r3, r31, 0x204
	stw      r30, 0x68(r1)
	mr       r30, r4
	bl       endBlend__Q28SysShape13BlendAnimatorFv
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x5c(r1)
	cmpwi    r30, 2
	lfd      f3, lbl_80519858@sda21(r2)
	stw      r0, 0x58(r1)
	lfs      f1, lbl_80519870@sda21(r2)
	lfd      f2, 0x58(r1)
	lfs      f0, lbl_80519874@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x1fc(r31)
	beq      lbl_801DF1A0
	bge      lbl_801DF034
	cmpwi    r30, 0
	beq      lbl_801DF044
	bge      lbl_801DF058
	b        lbl_801DF318

lbl_801DF034:
	cmpwi    r30, 4
	beq      lbl_801DF17C
	bge      lbl_801DF318
	b        lbl_801DF254

lbl_801DF044:
	lwz      r4, 0x1f4(r31)
	addi     r3, r31, 0x208
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_801DF318

lbl_801DF058:
	lwz      r0, 0x1f4(r31)
	cmpwi    r0, 1
	ble      lbl_801DF080
	lis      r3, lbl_804808FC@ha
	lis      r5, lbl_8048090C@ha
	addi     r3, r3, lbl_804808FC@l
	li       r4, 0x43c
	addi     r5, r5, lbl_8048090C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801DF080:
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_801DF090
	addi     r5, r31, 0x178

lbl_801DF090:
	lwz      r4, 0x1f4(r31)
	addi     r3, r31, 0x208
	addi     r4, r4, 3
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lwz      r0, 0x1f4(r31)
	cmpwi    r0, 0
	bne      lbl_801DF110
	lis      r3, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x40(r1)
	addi     r0, r3, __vt__Q23efx8TSimple2@l
	lis      r4, __vt__Q23efx11TSimpleMtx2@ha
	lis      r3, __vt__Q23efx11TTsuyuGrow1@ha
	stw      r0, 0x40(r1)
	addi     r0, r4, __vt__Q23efx11TSimpleMtx2@l
	addi     r5, r31, 0x138
	li       r4, 0x1bd
	stw      r0, 0x40(r1)
	addi     r0, r3, __vt__Q23efx11TTsuyuGrow1@l
	li       r7, 0x1be
	addi     r3, r1, 0x40
	sth      r4, 0x44(r1)
	li       r4, 0
	sth      r7, 0x46(r1)
	stw      r6, 0x48(r1)
	stw      r6, 0x4c(r1)
	stw      r5, 0x50(r1)
	stw      r0, 0x40(r1)
	bl       create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	b        lbl_801DF318

lbl_801DF110:
	cmpwi    r0, 1
	bne      lbl_801DF318
	lis      r3, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x2c(r1)
	addi     r0, r3, __vt__Q23efx8TSimple2@l
	lis      r4, __vt__Q23efx11TSimpleMtx2@ha
	lis      r3, __vt__Q23efx11TTsuyuGrow2@ha
	stw      r0, 0x2c(r1)
	addi     r0, r4, __vt__Q23efx11TSimpleMtx2@l
	addi     r5, r31, 0x138
	li       r4, 0x1bf
	stw      r0, 0x2c(r1)
	addi     r0, r3, __vt__Q23efx11TTsuyuGrow2@l
	li       r7, 0x1c0
	addi     r3, r1, 0x2c
	sth      r4, 0x30(r1)
	li       r4, 0
	sth      r7, 0x32(r1)
	stw      r6, 0x34(r1)
	stw      r6, 0x38(r1)
	stw      r5, 0x3c(r1)
	stw      r0, 0x2c(r1)
	bl       create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	b        lbl_801DF318

lbl_801DF17C:
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_801DF18C
	addi     r5, r31, 0x178

lbl_801DF18C:
	lwz      r4, 0x1f4(r31)
	addi     r3, r31, 0x208
	addi     r4, r4, 6
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_801DF318

lbl_801DF1A0:
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_801DF1B0
	addi     r5, r31, 0x178

lbl_801DF1B0:
	lwz      r4, 0x1f4(r31)
	addi     r3, r31, 0x208
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	addi     r3, r31, 0x224
	li       r4, 5
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lis      r4, __vt__Q28SysShape13BlendFunction@ha
	lis      r3, __vt__Q28SysShape18BlendQuadraticFunc@ha
	addi     r0, r4, __vt__Q28SysShape13BlendFunction@l
	cmplwi   r31, 0
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q28SysShape18BlendQuadraticFunc@l
	mr       r5, r31
	stw      r0, 8(r1)
	beq      lbl_801DF1F4
	addi     r5, r31, 0x178

lbl_801DF1F4:
	lfs      f1, lbl_80519850@sda21(r2)
	addi     r3, r31, 0x204
	addi     r4, r1, 8
	bl
startBlend__Q28SysShape13BlendAnimatorFPQ28SysShape13BlendFunctionfPQ28SysShape14MotionListener
	lfs      f0, lbl_80519850@sda21(r2)
	mr       r3, r31
	li       r4, 0
	stfs     f0, 0x258(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x240(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_801DF318
	lwz      r3, 0x17c(r31)
	li       r4, 0x3841
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_801DF318

lbl_801DF254:
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_801DF27C
	addi     r5, r31, 0x178

lbl_801DF27C:
	addi     r3, r31, 0x208
	li       r4, 0xc
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0(r31)
	lwz      r12, 0x240(r12)
	mtctr    r12
	bctrl
	lis      r3, __vt__Q23efx3Arg@ha
	lfs      f1, 0x200(r31)
	addi     r0, r3, __vt__Q23efx3Arg@l
	lis      r5, __vt__Q23efx5TBase@ha
	stw      r0, 0x18(r1)
	lis      r4, __vt__Q23efx8TSimple1@ha
	lis      r6, __vt__Q23efx7ArgRotY@ha
	lis      r3, __vt__Q23efx11TTsuyuGrow0@ha
	lfs      f0, 0x19c(r31)
	addi     r8, r5, __vt__Q23efx5TBase@l
	addi     r7, r4, __vt__Q23efx8TSimple1@l
	addi     r9, r6, __vt__Q23efx7ArgRotY@l
	stfs     f0, 0x1c(r1)
	addi     r0, r3, __vt__Q23efx11TTsuyuGrow0@l
	li       r6, 0x1bc
	li       r5, 0
	lfs      f0, 0x1a0(r31)
	addi     r3, r1, 0xc
	addi     r4, r1, 0x18
	stfs     f0, 0x20(r1)
	lfs      f0, 0x1a4(r31)
	stw      r8, 0xc(r1)
	stw      r7, 0xc(r1)
	stfs     f0, 0x24(r1)
	stw      r9, 0x18(r1)
	stfs     f1, 0x28(r1)
	sth      r6, 0x10(r1)
	stw      r5, 0x14(r1)
	stw      r0, 0xc(r1)
	bl       create__Q23efx11TTsuyuGrow0FPQ23efx3Arg

lbl_801DF318:
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DF330
 * Size:	000018
 */
void Plant::setColor(f32)
{
	/*
	lwz      r3, mgr__Q24Game9ItemPlant@sda21(r13)
	cmplwi   r3, 0
	beqlr
	lwz      r3, 0x88(r3)
	stfs     f1, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DF348
 * Size:	000020
 */
void Plant::do_updateLOD()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       do_updateLOD__Q24Game8BaseItemFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DF368
 * Size:	0002B0
 */
void Plant::doAnimation()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	mr       r30, r3
	lis      r4, lbl_804808F0@ha
	lwz      r3, 0x288(r3)
	addi     r31, r4, lbl_804808F0@l
	bl       update__Q34Game9ItemPlant6FruitsFv
	lis      r4, __vt__Q28SysShape13BlendFunction@ha
	lis      r3, __vt__Q28SysShape18BlendQuadraticFunc@ha
	addi     r0, r4, __vt__Q28SysShape13BlendFunction@l
	lwz      r5, sys@sda21(r13)
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q28SysShape18BlendQuadraticFunc@l
	lfs      f1, lbl_80519850@sda21(r2)
	addi     r3, r30, 0x204
	stw      r0, 8(r1)
	addi     r4, r1, 8
	lfs      f3, 0x54(r5)
	lfs      f2, 0x1d4(r30)
	lfs      f0, 0x258(r30)
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3
	fmuls    f3, f0, f3
	bl       animate__Q28SysShape13BlendAnimatorFPQ28SysShape13BlendFunctionfff
	addi     r3, r30, 0x204
	lwz      r29, 0x174(r30)
	lwz      r12, 0x204(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 8(r29)
	lwz      r4, 4(r4)
	lwz      r4, 0x28(r4)
	lwz      r4, 0(r4)
	stw      r3, 0x54(r4)
	lwz      r3, 0x174(r30)
	cmplwi   r3, 0
	beq      lbl_801DF5D8
	lwz      r4, 8(r3)
	addi     r3, r30, 0x138
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x174(r30)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x228(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1ec(r30)
	lis      r4, 0x4330
	xoris    r3, r3, 0x8000
	stw      r4, 0x10(r1)
	xoris    r0, r0, 0x8000
	lfd      f5, lbl_80519858@sda21(r2)
	stw      r3, 0x14(r1)
	lfs      f3, lbl_80519844@sda21(r2)
	lfd      f0, 0x10(r1)
	stw      r0, 0x1c(r1)
	fsubs    f4, f0, f5
	lfs      f1, lbl_8051984C@sda21(r2)
	stw      r4, 0x18(r1)
	lfs      f0, lbl_80519804@sda21(r2)
	lfd      f2, 0x18(r1)
	fdivs    f3, f4, f3
	fsubs    f2, f2, f5
	fdivs    f1, f2, f1
	fadds    f31, f1, f3
	fcmpo    cr0, f31, f0
	ble      lbl_801DF4AC
	fmr      f31, f0

lbl_801DF4AC:
	lbz      r0, 0xd8(r30)
	lfs      f0, lbl_80519878@sda21(r2)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	fmuls    f31, f31, f0
	beq      lbl_801DF5D8
	lwz      r0, 0x1f4(r30)
	cmpwi    r0, 2
	bne      lbl_801DF5CC
	lwz      r3, 0x174(r30)
	addi     r4, r31, 0x44
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r0, 0x27c(r30)
	mr       r29, r3
	cmpwi    r0, 0
	bgt      lbl_801DF500
	addi     r3, r31, 0xc
	addi     r5, r31, 0x1c
	li       r4, 0x297
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801DF500:
	lwz      r3, 0x268(r30)
	addi     r4, r31, 0x50
	stw      r29, 0(r3)
	lwz      r3, 0x174(r30)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r0, 0x27c(r30)
	mr       r29, r3
	cmpwi    r0, 1
	bgt      lbl_801DF53C
	addi     r3, r31, 0xc
	addi     r5, r31, 0x1c
	li       r4, 0x297
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801DF53C:
	lwz      r3, 0x268(r30)
	addi     r4, r31, 0x5c
	stw      r29, 4(r3)
	lwz      r3, 0x174(r30)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r0, 0x27c(r30)
	mr       r29, r3
	cmpwi    r0, 2
	bgt      lbl_801DF578
	addi     r3, r31, 0xc
	addi     r5, r31, 0x1c
	li       r4, 0x297
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801DF578:
	lwz      r3, 0x268(r30)
	addi     r4, r31, 0x68
	stw      r29, 8(r3)
	lwz      r3, 0x174(r30)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r0, 0x27c(r30)
	mr       r29, r3
	cmpwi    r0, 3
	bgt      lbl_801DF5B4
	addi     r3, r31, 0xc
	addi     r5, r31, 0x1c
	li       r4, 0x297
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801DF5B4:
	lwz      r4, 0x268(r30)
	fmr      f2, f31
	addi     r3, r30, 0x25c
	stw      r29, 0xc(r4)
	lfs      f1, 0x200(r30)
	bl       update__Q34Game9ItemPlant12ProcAnimatorFff

lbl_801DF5CC:
	lwz      r3, 0x174(r30)
	lwz      r3, 8(r3)
	bl       calcWeightEnvelopeMtx__8J3DModelFv

lbl_801DF5D8:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x214(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       updateCollTree__Q24Game8BaseItemFv
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DF618
 * Size:	00002C
 */
void Plant::bearFruits()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 0x288(r3)
	lhz      r4, 0x1e0(r4)
	bl       bearAll__Q34Game9ItemPlant6FruitsFUs
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DF644
 * Size:	000024
 */
void Plant::killFruits()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x288(r3)
	bl       killAll__Q34Game9ItemPlant6FruitsFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DF668
 * Size:	000080
 */
void Plant::dropFruit(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "zero__10Vector3<f>"@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r5, "zero__10Vector3<f>"@l
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_801DF6C0

lbl_801DF69C:
	lwz      r3, 0x288(r28)
	mr       r4, r31
	bl       "getFruit__Q34Game9ItemPlant6FruitsFR10Vector3<f>"
	cmplwi   r3, 0
	beq      lbl_801DF6C8
	bl       dropFruit__Q34Game9ItemPlant9FruitSlotFv
	b        lbl_801DF6BC
	b        lbl_801DF6C8

lbl_801DF6BC:
	addi     r30, r30, 1

lbl_801DF6C0:
	cmpw     r30, r29
	blt      lbl_801DF69C

lbl_801DF6C8:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DF6E8
 * Size:	000024
 */
bool Plant::hasFruits()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x288(r3)
	bl       hasFruits__Q34Game9ItemPlant6FruitsFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DF70C
 * Size:	000024
 */
int Plant::getFruitsNum()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x288(r3)
	bl       countFruits__Q34Game9ItemPlant6FruitsFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DF730
 * Size:	0001D0
 */
bool Plant::interactEat(InteractEat&)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	mr       r30, r3
	addi     r3, r1, 0x14
	stw      r29, 0x64(r1)
	mr       r29, r4
	lwz      r4, 4(r4)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	addi     r4, r1, 0x50
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x50(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x58(r1)
	lwz      r3, 0x288(r30)
	bl       "getFruit__Q34Game9ItemPlant6FruitsFR10Vector3<f>"
	or.      r31, r3, r3
	beq      lbl_801DF8E0
	lwz      r30, 0x18(r31)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 2
	bne      lbl_801DF8C8
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	lis      r3, __vt__Q23efx3Arg@ha
	lfs      f1, 0xc(r1)
	addi     r0, r3, __vt__Q23efx3Arg@l
	lfs      f0, 0x10(r1)
	stw      r0, 0x40(r1)
	stfs     f2, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)
	lhz      r0, 0x43e(r30)
	cmplwi   r0, 0
	bne      lbl_801DF854
	li       r7, 0
	lis      r3, __vt__Q23efx5TBase@ha
	stw      r7, 8(r29)
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	lis      r3, __vt__Q23efx12TFruitsDownR@ha
	stw      r0, 0x30(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	li       r6, 0x65
	li       r5, 0x66
	stw      r0, 0x30(r1)
	addi     r0, r3, __vt__Q23efx12TFruitsDownR@l
	addi     r3, r1, 0x30
	addi     r4, r1, 0x40
	sth      r6, 0x34(r1)
	sth      r5, 0x36(r1)
	stw      r7, 0x38(r1)
	stw      r7, 0x3c(r1)
	stw      r0, 0x30(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg
	b        lbl_801DF8A8

lbl_801DF854:
	li       r0, 1
	lis      r3, __vt__Q23efx5TBase@ha
	stw      r0, 8(r29)
	li       r5, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x20(r1)
	addi     r0, r3, __vt__Q23efx8TSimple2@l
	lis      r3, __vt__Q23efx12TFruitsDownP@ha
	li       r4, 0x63
	stw      r0, 0x20(r1)
	addi     r0, r3, __vt__Q23efx12TFruitsDownP@l
	li       r6, 0x64
	addi     r3, r1, 0x20
	sth      r4, 0x24(r1)
	addi     r4, r1, 0x40
	sth      r6, 0x26(r1)
	stw      r5, 0x28(r1)
	stw      r5, 0x2c(r1)
	stw      r0, 0x20(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg

lbl_801DF8A8:
	lwz      r3, 0x330(r30)
	li       r4, 0x3842
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_801DF8D0

lbl_801DF8C8:
	li       r0, 2
	stw      r0, 8(r29)

lbl_801DF8D0:
	mr       r3, r31
	bl       killFruit__Q34Game9ItemPlant9FruitSlotFv
	li       r3, 1
	b        lbl_801DF8E4

lbl_801DF8E0:
	li       r3, 0

lbl_801DF8E4:
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DF900
 * Size:	000120
 */
Mgr::Mgr()
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	stw      r0, 0x444(r1)
	extsh.   r0, r4
	stw      r31, 0x43c(r1)
	mr       r31, r3
	stw      r30, 0x438(r1)
	beq      lbl_801DF928
	addi     r0, r31, 0x90
	stw      r0, 4(r31)

lbl_801DF928:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game12TNodeItemMgrFv
	lis      r3, __vt__Q34Game9ItemPlant3Mgr@ha
	addi     r0, r2, lbl_8051987C@sda21
	addi     r4, r3, __vt__Q34Game9ItemPlant3Mgr@l
	mr       r3, r31
	stw      r4, 0(r31)
	addi     r5, r4, 0x74
	li       r4, 1
	stw      r5, 0x30(r31)
	stw      r0, 8(r31)
	bl       setModelSize__Q24Game11BaseItemMgrFi
	lis      r4, lbl_80480964@ha
	li       r3, 0x1dc
	addi     r0, r4, lbl_80480964@l
	stw      r0, 0x28(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801DF980
	bl       __ct__Q34Game9ItemPlant10PlantParmsFv
	mr       r0, r3

lbl_801DF980:
	stw      r0, 0x8c(r31)
	li       r0, 0
	lis      r3, lbl_80480980@ha
	li       r4, 0
	stw      r0, 8(r1)
	addi     r3, r3, lbl_80480980@l
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 2
	li       r9, 0
	li       r10, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r30, r3, r3
	beq      lbl_801DFA04
	mr       r4, r30
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1c(r1)
	bne      lbl_801DF9E4
	li       r0, 0
	stw      r0, 0x424(r1)

lbl_801DF9E4:
	lwz      r3, 0x8c(r31)
	addi     r4, r1, 0x10
	lwz      r12, 0xd8(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       __dla__FPv

lbl_801DFA04:
	lwz      r0, 0x444(r1)
	mr       r3, r31
	lwz      r31, 0x43c(r1)
	lwz      r30, 0x438(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DFA20
 * Size:	000024
 */
void PlantParms::read(Stream&)
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
 * Address:	801DFA44
 * Size:	000318
 */
PlantParms::PlantParms()
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
	stw      r30, 8(r1)
	mr       r30, r3
	lis      r3, lbl_804808F0@ha
	stw      r0, 0xd8(r30)
	addi     r31, r3, lbl_804808F0@l
	addi     r0, r30, 0xd4
	li       r3, 0
	stw      r0, 0(r30)
	addi     r0, r31, 0xb0
	mr       r4, r30
	addi     r6, r31, 0xc4
	stw      r3, 4(r30)
	addi     r3, r30, 0xc
	stw      r0, 8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x73303031@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519838@sda21(r2)
	stw      r0, 0xc(r30)
	mr       r4, r30
	lfs      f1, lbl_80519800@sda21(r2)
	addi     r3, r30, 0x34
	stfs     f0, 0x24(r30)
	addi     r5, r5, 0x73303031@l
	lfs      f0, lbl_80519804@sda21(r2)
	addi     r6, r31, 0xd8
	stfs     f1, 0x2c(r30)
	stfs     f0, 0x30(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x73303032@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519838@sda21(r2)
	stw      r0, 0x34(r30)
	mr       r4, r30
	lfs      f1, lbl_80519800@sda21(r2)
	addi     r3, r30, 0x5c
	stfs     f0, 0x4c(r30)
	addi     r5, r5, 0x73303032@l
	lfs      f0, lbl_80519804@sda21(r2)
	addi     r6, r31, 0xe8
	stfs     f1, 0x54(r30)
	stfs     f0, 0x58(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x73303033@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519884@sda21(r2)
	stw      r0, 0x5c(r30)
	mr       r4, r30
	lfs      f1, lbl_80519800@sda21(r2)
	addi     r3, r30, 0x84
	stfs     f0, 0x74(r30)
	addi     r5, r5, 0x73303033@l
	lfs      f0, lbl_80519804@sda21(r2)
	addi     r6, r2, lbl_80519888@sda21
	stfs     f1, 0x7c(r30)
	stfs     f0, 0x80(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x73303034@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519834@sda21(r2)
	stw      r0, 0x84(r30)
	mr       r4, r30
	lfs      f1, lbl_80519890@sda21(r2)
	addi     r3, r30, 0xac
	stfs     f0, 0x9c(r30)
	addi     r5, r5, 0x73303034@l
	lfs      f0, lbl_80519894@sda21(r2)
	addi     r6, r31, 0xf8
	stfs     f1, 0xa4(r30)
	stfs     f0, 0xa8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r4, "__vt__7Parm<f>"@ha
	lis      r3, __vt__Q34Game9ItemPlant10PlantParms@ha
	addi     r0, r4, "__vt__7Parm<f>"@l
	lis      r5, 0x70303030@ha
	stw      r0, 0xac(r30)
	addi     r9, r3, __vt__Q34Game9ItemPlant10PlantParms@l
	lfs      f0, lbl_80519898@sda21(r2)
	addi     r8, r30, 0x1d8
	lfs      f1, lbl_80519890@sda21(r2)
	li       r7, 0
	stfs     f0, 0xc4(r30)
	addi     r0, r31, 0x108
	lfs      f0, lbl_80519894@sda21(r2)
	addi     r3, r30, 0xe8
	stfs     f1, 0xcc(r30)
	addi     r4, r30, 0xdc
	addi     r5, r5, 0x70303030@l
	addi     r6, r31, 0x118
	stfs     f0, 0xd0(r30)
	stw      r9, 0xd8(r30)
	stw      r8, 0xdc(r30)
	stw      r7, 0xe0(r30)
	stw      r0, 0xe4(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303031@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051984C@sda21(r2)
	stw      r0, 0xe8(r30)
	addi     r3, r30, 0x110
	lfs      f1, lbl_80519800@sda21(r2)
	addi     r4, r30, 0xdc
	stfs     f0, 0x100(r30)
	addi     r5, r5, 0x70303031@l
	lfs      f0, lbl_8051989C@sda21(r2)
	addi     r6, r31, 0x12c
	stfs     f1, 0x108(r30)
	stfs     f0, 0x10c(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303032@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051984C@sda21(r2)
	stw      r0, 0x110(r30)
	addi     r3, r30, 0x138
	lfs      f1, lbl_80519800@sda21(r2)
	addi     r4, r30, 0xdc
	stfs     f0, 0x128(r30)
	addi     r5, r5, 0x70303032@l
	lfs      f0, lbl_8051989C@sda21(r2)
	addi     r6, r31, 0x140
	stfs     f1, 0x130(r30)
	stfs     f0, 0x134(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303033@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805198A0@sda21(r2)
	stw      r0, 0x138(r30)
	addi     r3, r30, 0x160
	lfs      f1, lbl_80519800@sda21(r2)
	addi     r4, r30, 0xdc
	stfs     f0, 0x150(r30)
	addi     r5, r5, 0x70303033@l
	lfs      f0, lbl_805198A4@sda21(r2)
	addi     r6, r31, 0x158
	stfs     f1, 0x158(r30)
	stfs     f0, 0x15c(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303034@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051984C@sda21(r2)
	stw      r0, 0x160(r30)
	addi     r3, r30, 0x188
	lfs      f1, lbl_80519800@sda21(r2)
	addi     r4, r30, 0xdc
	stfs     f0, 0x178(r30)
	addi     r5, r5, 0x70303034@l
	lfs      f0, lbl_8051989C@sda21(r2)
	addi     r6, r31, 0x170
	stfs     f1, 0x180(r30)
	stfs     f0, 0x184(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303035@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80519844@sda21(r2)
	stw      r0, 0x188(r30)
	addi     r3, r30, 0x1b0
	lfs      f1, lbl_80519800@sda21(r2)
	addi     r4, r30, 0xdc
	stfs     f0, 0x1a0(r30)
	addi     r5, r5, 0x70303035@l
	lfs      f0, lbl_8051989C@sda21(r2)
	addi     r6, r31, 0x17c
	stfs     f1, 0x1a8(r30)
	stfs     f0, 0x1ac(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f2, lbl_805198A8@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_80519800@sda21(r2)
	stw      r0, 0x1b0(r30)
	mr       r3, r30
	lfs      f0, lbl_805198AC@sda21(r2)
	stfs     f2, 0x1c8(r30)
	stfs     f1, 0x1d0(r30)
	stfs     f0, 0x1d4(r30)
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
 * Address:	801DFD5C
 * Size:	000130
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
	li       r3, 0x28c
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_801DFE64
	li       r4, 0x408
	bl       __ct__Q24Game8BaseItemFi
	lis      r3,
"__vt__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>"@ha
	li       r0, 0
	addi     r4, r3,
"__vt__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>"@l
	li       r3, 0x1c
	stw      r4, 0(r31)
	addi     r4, r4, 0x1b0
	stw      r4, 0x178(r31)
	stw      r0, 0x1d8(r31)
	stw      r0, 0x1dc(r31)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_801DFDE8
	lis      r4, "__vt__Q24Game36StateMachine<Q34Game9ItemPlant4Item>"@ha
	lis      r5, "__vt__Q24Game31ItemFSM<Q34Game9ItemPlant4Item>"@ha
	addi     r0, r4, "__vt__Q24Game36StateMachine<Q34Game9ItemPlant4Item>"@l
	lis      r4, __vt__Q34Game9ItemPlant3FSM@ha
	stw      r0, 0(r3)
	li       r6, -1
	addi     r5, r5, "__vt__Q24Game31ItemFSM<Q34Game9ItemPlant4Item>"@l
	addi     r0, r4, __vt__Q34Game9ItemPlant3FSM@l
	stw      r6, 0x18(r3)
	stw      r5, 0(r3)
	stw      r0, 0(r3)

lbl_801DFDE8:
	stw      r3, 0x1d8(r31)
	mr       r4, r31
	lwz      r3, 0x1d8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q34Game9ItemPlant4Item@ha
	lis      r3, __vt__Q34Game9ItemPlant5Plant@ha
	addi     r4, r4, __vt__Q34Game9ItemPlant4Item@l
	lfs      f0, lbl_80519800@sda21(r2)
	stw      r4, 0(r31)
	addi     r0, r4, 0x1b0
	addi     r4, r3, __vt__Q34Game9ItemPlant5Plant@l
	li       r5, 0
	stw      r0, 0x178(r31)
	addi     r0, r4, 0x1b0
	addi     r3, r31, 0x204
	stfs     f0, 0x1f8(r31)
	stfs     f0, 0x1f0(r31)
	stw      r5, 0x1f4(r31)
	stw      r4, 0(r31)
	stw      r0, 0x178(r31)
	bl       __ct__Q28SysShape13BlendAnimatorFv
	li       r0, 0
	lfs      f0, lbl_80519800@sda21(r2)
	stw      r0, 0x27c(r31)
	stw      r0, 0x268(r31)
	stfs     f0, 0x280(r31)
	stfs     f0, 0x284(r31)
	stfs     f0, 0x118(r31)

lbl_801DFE64:
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
 * Address:	801DFE8C
 * Size:	0000B4
 */
void Mgr::onLoadResources()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_804808F0@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_804808F0@l
	addi     r4, r2, lbl_805198B0@sda21
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       loadArchive__Q24Game11BaseItemMgrFPc
	mr       r3, r29
	addi     r4, r31, 0x18c
	li       r5, 0
	lis      r6, 0x2002
	bl       loadBmd__Q24Game11BaseItemMgrFPciUl
	addi     r3, r31, 0x198
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	bl       load__20J3DAnmLoaderDataBaseFPCv
	stw      r3, 0x88(r29)
	mr       r3, r29
	addi     r4, r31, 0x1a4
	bl       openTextArc__Q24Game11BaseItemMgrFPc
	or.      r30, r3, r3
	bne      lbl_801DFF08
	addi     r3, r31, 0xc
	addi     r5, r31, 0x1c
	li       r4, 0x531
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801DFF08:
	mr       r3, r29
	mr       r4, r30
	addi     r5, r31, 0x1b0
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
 * Address:	801DFF40
 * Size:	00004C
 */
GenItemParm* Mgr::generatorNewItemParm()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 8
	stw      r0, 0x14(r1)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_801DFF7C
	lis      r5, __vt__Q24Game11GenItemParm@ha
	lis      r4, __vt__12GenPlantParm@ha
	addi     r5, r5, __vt__Q24Game11GenItemParm@l
	li       r0, 2
	stw      r5, 0(r3)
	addi     r4, r4, __vt__12GenPlantParm@l
	stw      r4, 0(r3)
	sth      r0, 4(r3)

lbl_801DFF7C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DFF8C
 * Size:	000088
 */
void Mgr::generatorWrite(Stream&, GenItemParm*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r3, lbl_804808F0@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r3, lbl_804808F0@l
	stw      r30, 0x18(r1)
	or.      r30, r5, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	bne      lbl_801DFFCC
	addi     r3, r31, 0xc
	addi     r5, r31, 0x1c
	li       r4, 0x5a8
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801DFFCC:
	lwz      r4, 0x414(r29)
	mr       r3, r29
	bl       textWriteTab__6StreamFi
	lhz      r0, 4(r30)
	mr       r3, r29
	extsh    r4, r0
	bl       writeShort__6StreamFs
	mr       r3, r29
	addi     r4, r31, 0x1c4
	crclr    6
	bl       textWriteText__6StreamFPce
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
 * Address:	801E0014
 * Size:	000088
 */
void Mgr::generatorRead(Stream&, GenItemParm*, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	or.      r30, r5, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	bne      lbl_801E0058
	lis      r3, lbl_804808FC@ha
	lis      r5, lbl_8048090C@ha
	addi     r3, r3, lbl_804808FC@l
	li       r4, 0x5b2
	addi     r5, r5, lbl_8048090C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E0058:
	lis      r3, 0x30303031@ha
	addi     r0, r3, 0x30303031@l
	cmplw    r31, r0
	blt      lbl_801E0078
	mr       r3, r29
	bl       readShort__6StreamFv
	sth      r3, 4(r30)
	b        lbl_801E0080

lbl_801E0078:
	li       r0, 0
	sth      r0, 4(r30)

lbl_801E0080:
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
 * Address:	801E009C
 * Size:	0000B4
 */
BaseItem* Mgr::generatorBirth(Vector3f&, Vector3f&, GenItemParm*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	or.      r31, r6, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	bne      lbl_801E00E8
	lis      r3, lbl_804808FC@ha
	lis      r5, lbl_8048090C@ha
	addi     r3, r3, lbl_804808FC@l
	li       r4, 0x5bd
	addi     r5, r5, lbl_8048090C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E00E8:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl
	lhz      r0, 4(r31)
	mr       r31, r3
	li       r4, 0
	sth      r0, 0x1e0(r3)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lfs      f1, 4(r30)
	bl       roundAng__Ff
	stfs     f1, 0x200(r31)
	mr       r3, r31
	mr       r4, r29
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E0150
 * Size:	000074
 */
void Fruits::init(int, Matrixf*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r3
	mulli    r3, r31, 0x4c
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game9ItemPlant9FruitSlotFv@ha
	lis      r5, __dt__Q34Game9ItemPlant9FruitSlotFv@ha
	addi     r4, r4, __ct__Q34Game9ItemPlant9FruitSlotFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q34Game9ItemPlant9FruitSlotFv@l
	li       r6, 0x4c
	bl       __construct_new_array
	stw      r3, 0(r29)
	stw      r31, 4(r29)
	stw      r30, 8(r29)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E01C4
 * Size:	000060
 */
FruitSlot::~FruitSlot()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801E0208
	lis      r5, __vt__Q34Game9ItemPlant9FruitSlot@ha
	li       r4, 0
	addi     r0, r5, __vt__Q34Game9ItemPlant9FruitSlot@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_801E0208
	mr       r3, r30
	bl       __dl__FPv

lbl_801E0208:
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
 * Address:	801E0224
 * Size:	000064
 */
void Fruits::update()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_801E0260

lbl_801E024C:
	lwz      r0, 0(r29)
	add      r3, r0, r31
	bl       update__Q34Game9ItemPlant9FruitSlotFv
	addi     r31, r31, 0x4c
	addi     r30, r30, 1

lbl_801E0260:
	lwz      r0, 4(r29)
	cmpw     r30, r0
	blt      lbl_801E024C
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
 * Address:	801E0288
 * Size:	0002B4
 */
void Fruits::bearAll(unsigned short)
{
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

/*
 * --INFO--
 * Address:	801E053C
 * Size:	000040
 */
bool Fruits::hasFruits()
{
	/*
	lwz      r0, 4(r3)
	li       r5, 0
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_801E0574

lbl_801E0550:
	lwz      r4, 0(r3)
	addi     r0, r5, 0x18
	lwzx     r0, r4, r0
	cmplwi   r0, 0
	beq      lbl_801E056C
	li       r3, 1
	blr

lbl_801E056C:
	addi     r5, r5, 0x4c
	bdnz     lbl_801E0550

lbl_801E0574:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E057C
 * Size:	000040
 */
int Fruits::countFruits()
{
	/*
	lwz      r0, 4(r3)
	li       r6, 0
	li       r5, 0
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_801E05B4

lbl_801E0594:
	lwz      r4, 0(r3)
	addi     r0, r5, 0x18
	lwzx     r0, r4, r0
	cmplwi   r0, 0
	beq      lbl_801E05AC
	addi     r6, r6, 1

lbl_801E05AC:
	addi     r5, r5, 0x4c
	bdnz     lbl_801E0594

lbl_801E05B4:
	mr       r3, r6
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E05BC
 * Size:	000064
 */
void Fruits::killAll()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_801E05F8

lbl_801E05E4:
	lwz      r0, 0(r29)
	add      r3, r0, r31
	bl       killFruit__Q34Game9ItemPlant9FruitSlotFv
	addi     r31, r31, 0x4c
	addi     r30, r30, 1

lbl_801E05F8:
	lwz      r0, 4(r29)
	cmpw     r30, r0
	blt      lbl_801E05E4
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
 * Address:	801E0620
 * Size:	00010C
 */
FruitSlot* Fruits::getFruit(Vector3f&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stmw     r27, 0x1c(r1)
	lfs      f31, lbl_805198C4@sda21(r2)
	mr       r27, r3
	mr       r28, r4
	li       r30, -1
	li       r29, 0
	li       r31, 0
	b        lbl_801E06E8

lbl_801E0654:
	lwz      r3, 0(r27)
	addi     r0, r31, 0x18
	lwzx     r4, r3, r0
	cmplwi   r4, 0
	beq      lbl_801E06E0
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 4(r28)
	lfs      f3, 8(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0(r28)
	lfs      f1, 0x10(r1)
	lfs      f0, 8(r28)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_80519800@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801E06CC
	ble      lbl_801E06D0
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801E06D0

lbl_801E06CC:
	fmr      f1, f0

lbl_801E06D0:
	fcmpo    cr0, f1, f31
	bge      lbl_801E06E0
	fmr      f31, f1
	mr       r30, r29

lbl_801E06E0:
	addi     r31, r31, 0x4c
	addi     r29, r29, 1

lbl_801E06E8:
	lwz      r0, 4(r27)
	cmpw     r29, r0
	blt      lbl_801E0654
	cmpwi    r30, -1
	beq      lbl_801E070C
	mulli    r0, r30, 0x4c
	lwz      r3, 0(r27)
	add      r3, r3, r0
	b        lbl_801E0710

lbl_801E070C:
	li       r3, 0

lbl_801E0710:
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E072C
 * Size:	00004C
 */
FruitSlot::FruitSlot()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q34Game9ItemPlant9FruitSlot@ha
	li       r0, 0
	addi     r4, r3, __vt__Q34Game9ItemPlant9FruitSlot@l
	addi     r3, r31, 0x1c
	stw      r4, 0(r31)
	stw      r0, 0x18(r31)
	bl       PSMTXIdentity
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
 * Address:	801E0778
 * Size:	000050
 */
void FruitSlot::setFruit(Pellet*, Matrixf*, Matrixf&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r4
	addi     r4, r3, 0x1c
	stw      r30, 0x18(r3)
	mr       r3, r6
	bl       PSMTXCopy
	mr       r3, r30
	mr       r4, r31
	bl       startCapture__Q24Game8CreatureFP7Matrixf
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E07C8
 * Size:	000040
 */
void FruitSlot::dropFruit()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	cmplwi   r3, 0
	beq      lbl_801E07F4
	bl       endCapture__Q24Game8CreatureFv
	li       r0, 0
	stw      r0, 0x18(r31)

lbl_801E07F4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E0808
 * Size:	000044
 */
void FruitSlot::killFruit()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x18(r3)
	cmplwi   r3, 0
	beq      lbl_801E0838
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	li       r0, 0
	stw      r0, 0x18(r31)

lbl_801E0838:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E084C
 * Size:	000034
 */
void FruitSlot::update()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	cmplwi   r3, 0
	beq      lbl_801E0870
	addi     r4, r4, 0x1c
	bl       updateCapture__Q24Game8CreatureFR7Matrixf

lbl_801E0870:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E0880
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
	beq      lbl_801E0998
	lis      r3, __vt__Q34Game9ItemPlant3Mgr@ha
	addi     r3, r3, __vt__Q34Game9ItemPlant3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x74
	stw      r0, 0x30(r30)
	beq      lbl_801E0988
	lis      r3, __vt__Q24Game12TNodeItemMgr@ha
	addic.   r0, r30, 0x4c
	addi     r3, r3, __vt__Q24Game12TNodeItemMgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x74
	stw      r0, 0x30(r30)
	beq      lbl_801E0954
	lis      r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@ha
	addic.   r3, r30, 0x6c
	addi     r4, r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@l
	stw      r4, 0x4c(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x68(r30)
	beq      lbl_801E0904
	lis      r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
	addi     r0, r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
	stw      r0, 0x6c(r30)
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_801E0904:
	addic.   r0, r30, 0x4c
	beq      lbl_801E0954
	lis      r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
	addic.   r0, r30, 0x4c
	addi     r3, r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
	stw      r3, 0x4c(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x68(r30)
	beq      lbl_801E0954
	lis      r3, "__vt__27Container<Q24Game8BaseItem>"@ha
	addic.   r0, r30, 0x4c
	addi     r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
	stw      r0, 0x4c(r30)
	beq      lbl_801E0954
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x4c
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x4c(r30)
	bl       __dt__5CNodeFv

lbl_801E0954:
	addic.   r0, r30, 0x30
	beq      lbl_801E0988
	lis      r3, "__vt__27Container<Q24Game8BaseItem>"@ha
	addic.   r0, r30, 0x30
	addi     r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
	stw      r0, 0x30(r30)
	beq      lbl_801E0988
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x30
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x30(r30)
	bl       __dt__5CNodeFv

lbl_801E0988:
	extsh.   r0, r31
	ble      lbl_801E0998
	mr       r3, r30
	bl       __dl__FPv

lbl_801E0998:
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
 * Address:	801E09B4
 * Size:	000118
 */
BaseItem* Mgr::doNew()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0x28c
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_801E0AB4
	li       r4, 0x408
	bl       __ct__Q24Game8BaseItemFi
	lis      r3,
"__vt__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>"@ha
	li       r0, 0
	addi     r4, r3,
"__vt__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>"@l
	li       r3, 0x1c
	stw      r4, 0(r31)
	addi     r4, r4, 0x1b0
	stw      r4, 0x178(r31)
	stw      r0, 0x1d8(r31)
	stw      r0, 0x1dc(r31)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_801E0A38
	lis      r4, "__vt__Q24Game36StateMachine<Q34Game9ItemPlant4Item>"@ha
	lis      r5, "__vt__Q24Game31ItemFSM<Q34Game9ItemPlant4Item>"@ha
	addi     r0, r4, "__vt__Q24Game36StateMachine<Q34Game9ItemPlant4Item>"@l
	lis      r4, __vt__Q34Game9ItemPlant3FSM@ha
	stw      r0, 0(r3)
	li       r6, -1
	addi     r5, r5, "__vt__Q24Game31ItemFSM<Q34Game9ItemPlant4Item>"@l
	addi     r0, r4, __vt__Q34Game9ItemPlant3FSM@l
	stw      r6, 0x18(r3)
	stw      r5, 0(r3)
	stw      r0, 0(r3)

lbl_801E0A38:
	stw      r3, 0x1d8(r31)
	mr       r4, r31
	lwz      r3, 0x1d8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r4, __vt__Q34Game9ItemPlant4Item@ha
	lis      r3, __vt__Q34Game9ItemPlant5Plant@ha
	addi     r4, r4, __vt__Q34Game9ItemPlant4Item@l
	lfs      f0, lbl_80519800@sda21(r2)
	stw      r4, 0(r31)
	addi     r0, r4, 0x1b0
	addi     r4, r3, __vt__Q34Game9ItemPlant5Plant@l
	li       r5, 0
	stw      r0, 0x178(r31)
	addi     r0, r4, 0x1b0
	addi     r3, r31, 0x204
	stfs     f0, 0x1f8(r31)
	stfs     f0, 0x1f0(r31)
	stw      r5, 0x1f4(r31)
	stw      r4, 0(r31)
	stw      r0, 0x178(r31)
	bl       __ct__Q28SysShape13BlendAnimatorFv
	li       r0, 0
	lfs      f0, lbl_80519800@sda21(r2)
	stw      r0, 0x27c(r31)
	stw      r0, 0x268(r31)
	stfs     f0, 0x280(r31)
	stfs     f0, 0x284(r31)
	stfs     f0, 0x118(r31)

lbl_801E0AB4:
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
 * Address:	801E0ACC
 * Size:	00000C
 */
u32 Mgr::generatorGetID()
{
	/*
	lis      r3, 0x706C6E74@ha
	addi     r3, r3, 0x706C6E74@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E0AD8
 * Size:	00000C
 */
u32 Mgr::generatorLocalVersion()
{
	/*
	lis      r3, 0x30303031@ha
	addi     r3, r3, 0x30303031@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E0AE4
 * Size:	000030
 */
void Item::changeMaterial()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lfs      f1, 0x1e4(r3)
	lwz      r12, 0x23c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E0B14
 * Size:	000004
 */
void Item::setColor(f32) { }

/*
 * --INFO--
 * Address:	801E0B18
 * Size:	000008
 */
bool Item::hasFruits() { return false; }

/*
 * --INFO--
 * Address:	801E0B20
 * Size:	000008
 */
int Item::getFruitsNum() { return 0; }

/*
 * --INFO--
 * Address:	801E0B28
 * Size:	000008
 */
Pellet* Item::getNearestFruit(Vector3f&) { return 0x0; }

} // namespace ItemPlant
} // namespace Game
