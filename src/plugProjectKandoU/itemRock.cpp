#include "Game/Entities/ItemRock.h"
#include "Game/Farm.h"
#include "PSM/WorkItem.h"
#include "Dolphin/rand.h"
#include "JSystem/JKernel/JKRDvdRipper.h"

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
	f32 changeTime       = rock->mGrowTimes[rock->mSize];
	if (rock->mSize > Item::SIZE_Max) {
		rock->mSizeTimer += sys->mDeltaTime;
		if (rock->mSizeTimer >= changeTime) {
			_11           = 1;
			rock->mHealth = rock->mHealthLimits[rock->mSize - 1];
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
	rock->mDamageBuffer += damage;
	rock->mHealth -= rock->mDamageBuffer;
	rock->mDamageBuffer = 0.0f;
	if (rock->mHealth < rock->mHealthLimits[rock->mSize + 1]) {
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
		rock->mHealth = rock->mHealthLimits[rock->mSize - 1];
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
void DownState::onDamage(Item* item, f32 damage) { static_cast<ItemRock::Item*>(item)->mDamageBuffer += damage; }

/*
 * --INFO--
 * Address:	801E12CC
 * Size:	0000F0
 */
void DownState::onKeyEvent(Item* item, const SysShape::KeyEvent& event)
{
	ItemRock::Item* rock = static_cast<ItemRock::Item*>(item);
	rock->mSizeTimer     = 0.0f;
	rock->mSize++;
	if (rock->mSize >= rock->mSizeCount) {
		rock->mSize = rock->mSizeCount;
		rock->setAlive(false);
		rock->finishLoopEffect();
	}

	rock->mObstacle->setPower(1.0f - (f32)rock->mSize / (f32)rock->mSizeCount);
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
	rock->mSizeTimer = 0.0f;
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
void UpState::onDamage(Item* item, f32 damage) { static_cast<ItemRock::Item*>(item)->mDamageBuffer += damage; }

/*
 * --INFO--
 * Address:	801E142C
 * Size:	0000CC
 */
void UpState::onKeyEvent(Item* item, const SysShape::KeyEvent& event)
{
	// sigh - cannot do a cast at the start, doesn't match.
	static_cast<ItemRock::Item*>(item)->mSize--;
	item->setAlive(true);
	static_cast<ItemRock::Item*>(item)->mObstacle->setPower(
	    1.0f - (f32) static_cast<ItemRock::Item*>(item)->mSize / (f32) static_cast<ItemRock::Item*>(item)->mSizeCount);
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
	mMass     = 0.0f;
	mObstacle = nullptr;
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
	mSizeTimer = 0.0f;
	mModel     = new SysShape::Model(mgr->getModelData(0), 0x20000, 2);
	mModel->mJ3dModel->calc();
	mModel->mJ3dModel->calcMaterial();
	mModel->mJ3dModel->makeDL();
	mModel->mJ3dModel->lock();

	mEfxKouhaiSmall  = new efx::TKouhai1;
	mEfxKouhaiMedium = new efx::TKouhai2;
	mEfxKouhaiMax    = new efx::TKouhai3;

	mAnimSpeed         = 30.0f;
	mAnimator.mAnimMgr = mgr->mAnimMgr;
	mAnimator.startAnim(2, this);

	mFsm->start(this, ITEMROCK_Normal, nullptr);
	setAlive(true);
	createRock(SIZE_VisibleCount);

	mWorkRadii[SIZE_Max]    = mgr->mParms->mRockParms.mWorkRadiusMax.mValue;
	mWorkRadii[SIZE_Medium] = mgr->mParms->mRockParms.mWorkRadiusMedium.mValue;
	mWorkRadii[SIZE_Small]  = mgr->mParms->mRockParms.mWorkRadiusSmall.mValue;

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
	if (!_1FC) {
		int type;
		switch (mSize) {
		case SIZE_Max:
			type = 2;
			break;
		case SIZE_Medium:
			type = 1;
			break;
		case SIZE_Small:
			type = 0;
			break;
		}

		efx::TKouhaiDamage damageFX;
		efx::ArgKouhai fxArg(mPosition, type);
		damageFX.create(&fxArg);

		_1FC = (int)(randFloat() * 5.0f) + 6;
	}
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
	switch (mSize) {
	case SIZE_Max:
		isAlive(); // probably debug
		mEfxKouhaiMax->create(&fxArg);
		break;
	case SIZE_Medium:
		isAlive(); // probably debug
		mEfxKouhaiMedium->create(&fxArg);
		break;
	case SIZE_Small:
		isAlive(); // probably debug
		mEfxKouhaiSmall->create(&fxArg);
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
	mEfxKouhaiSmall->fade();
	mEfxKouhaiMedium->fade();
	mEfxKouhaiMax->fade();
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
	mSize      = input.readInt();
	mSizeTimer = input.readFloat();
	mHealth    = input.readFloat();
	mObstacle->setPower(1.0f - (f32)mSize / (f32)mSizeCount);
	initMotion();
	mEfxKouhaiSmall->forceKill();
	mEfxKouhaiMedium->forceKill();
	mEfxKouhaiMax->forceKill();

	if (mSize >= mSizeCount) {
		mSize = mSizeCount;
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
	input.writeInt(mSize);
	input.writeFloat(mSizeTimer);
	input.writeFloat(mHealth);
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
	switch (mSize) {
	case SIZE_Max:
		if (randFloat() > 0.2f) {
			mAnimator.startAnim(2, this);
		} else {
			mAnimator.startAnim(3, this);
		}
		break;

	case SIZE_Medium:
		mAnimator.startAnim(1, this);
		break;

	case SIZE_Small:
		mAnimator.startAnim(0, this);
		break;

	case SIZE_Disappear:
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
	switch (mSize) {
	case SIZE_Max:
		mAnimator.startAnim(6, this);
		break;
	case SIZE_Medium:
		mAnimator.startAnim(5, this);
		break;
	case SIZE_Small:
		mAnimator.startAnim(4, this);
		break;
	case SIZE_Disappear:
		break;
	}
}

/*
 * --INFO--
 * Address:	801E20D8
 * Size:	00028C
 */
void Item::startDownMotion()
{
	finishLoopEffect();

	switch (mSize) {
	case SIZE_Max: {

		mAnimator.startAnim(7, this);
		Vector3f fxPos = mPosition;
		startFukuEffect(fxPos);
		break;
	}
	case SIZE_Medium: {
		mAnimator.startAnim(8, this);
		Vector3f fxPos = mPosition;
		fxPos.y -= 10.0f;
		startFukuEffect(fxPos);
		break;
	}
	case SIZE_Small: {
		mAnimator.startAnim(9, this);
		Vector3f fxPos = mPosition;
		fxPos.y -= 25.0f;
		startFukuEffect(fxPos);
		break;
	}
	case SIZE_Disappear:
		break;
	}
}

/*
 * --INFO--
 * Address:	801E2364
 * Size:	0000EC
 */
void Item::startUpMotion()
{
	finishLoopEffect();
	switch (mSize) {
	case SIZE_Max:
		break;
	case SIZE_Medium:
		mAnimator.startAnim(12, this);
		break;
	case SIZE_Small:
		mAnimator.startAnim(11, this);
		break;
	case SIZE_Disappear:
		mAnimator.startAnim(10, this);
		break;
	}
}

/*
 * --INFO--
 * Address:	801E2450
 * Size:	000114
 */
bool Item::getVectorField(Sys::Sphere& sphere, Vector3f& vec)
{
	Vector3f sep = mPosition - sphere.mPosition;
	f32 dist     = sep.normalise();

	if (dist > getWorkRadius()) {
		vec = sep;
	} else {
		vec = Vector3f(0.0f);
	}

	return true;
}

/*
 * --INFO--
 * Address:	801E2564
 * Size:	000088
 */
f32 Item::getWorkDistance(Sys::Sphere& sphere)
{
	Vector3f sep = mPosition - sphere.mPosition;
	f32 dist     = sep.length();
	return dist - getWorkRadius();
}

/*
 * --INFO--
 * Address:	801E25EC
 * Size:	000194
 */
void Item::createRock(int visibleSizeCount)
{
	mSizeCount    = visibleSizeCount;
	mSize         = SIZE_Max;
	mDamageBuffer = 0.0f;
	mHealthLimits = new f32[visibleSizeCount + 1];
	mGrowTimes    = new f32[visibleSizeCount + 1];
	mWorkRadii    = new f32[visibleSizeCount]; // don't need one for hidden

	for (int i = 0; i < visibleSizeCount + 1; i++) {
		for (int j = 0; j < 4; j++) {
			mHealthLimits[j] = ((Parm<f32>*)(&mgr->mParms->mRockParms.mHealthMax) + j)->mValue;
		}

		for (int j = 0; j < 4; j++) {
			mGrowTimes[j] = 60.0f * ((Parm<f32>*)(&mgr->mParms->mRockParms.mGrowTimeMax) + j)->mValue;
		}
		// mHealthLimits[1] = mgr->mParms->mRockParms.mP001.mValue;
		// mHealthLimits[2] = mgr->mParms->mRockParms.mP002.mValue;
		// mHealthLimits[3] = mgr->mParms->mRockParms.mP003.mValue;
		// mGrowTimes[0] = 60.0f * mgr->mParms->mRockParms.mP004.mValue;
		// mGrowTimes[1] = 60.0f * mgr->mParms->mRockParms.mP005.mValue;
		// mGrowTimes[2] = 60.0f * mgr->mParms->mRockParms.mP006.mValue;
		// mGrowTimes[3] = 60.0f * mgr->mParms->mRockParms.mP007.mValue;
		mMaxHealth = mHealthLimits[SIZE_Max];
		mHealth    = mMaxHealth;
	}
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
bool Item::interactAttack(InteractAttack& attack)
{
	if (mCurrentState) {
		mCurrentState->onDamage(this, attack.mDamage);
		emitDamageEffect();
	}

	return true;
}

/*
 * --INFO--
 * Address:	801E28F8
 * Size:	000028
 */
f32 Item::getWorkRadius()
{
	if (mSize == mSizeCount) {
		return 0.0f;
	}
	return mWorkRadii[mSize];
}

/*
 * --INFO--
 * Address:	801E2920
 * Size:	000120
 */
Mgr::Mgr()
    : TNodeItemMgr()
{
	mItemName = "荒廃オブジェクト"; // 'ruined object'
	setModelSize(1);
	mObjectPathComponent = "user/Kando/objects/ojamarock";
	mParms               = new RockParms();
	void* resource       = JKRDvdRipper::loadToMainRAM("user/Abe/item/rockParms.txt", nullptr, Switch_0, 0, nullptr,
                                                 JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
	if (resource) {
		RamStream stream(resource, -1);
		stream.resetPosition(true, true);
		mParms->read(stream);
		delete[] resource;
	}
}

/*
 * --INFO--
 * Address:	801E2EF8
 * Size:	000110
 */
BaseItem* Mgr::birth()
{
	ItemRock::Item* rock = new ItemRock::Item;
	entry(rock);
	return rock;
}

/*
 * --INFO--
 * Address:	801E3008
 * Size:	000060
 */
BaseItem* Mgr::generatorBirth(Vector3f& pos, Vector3f& rot, GenItemParm* parm)
{
	ItemRock::Item* rock = static_cast<ItemRock::Item*>(birth());
	rock->init(nullptr);
	rock->setPosition(pos, false);
	return rock;
}

/*
 * --INFO--
 * Address:	801E3068
 * Size:	0000A8
 */
void Mgr::onLoadResources()
{
	loadArchive("arc.szs");
	loadBmd("rock.bmd", 0, 0x20020000);
	mModelData[0]->newSharedDisplayList(0x40000);
	mModelData[0]->makeSharedDL();

	JKRArchive* textArc = openTextArc("texts.szs");
	loadAnimMgr(textArc, "animmgr.txt");
	closeTextArc(textArc);
}
} // namespace ItemRock
} // namespace Game
