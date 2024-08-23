#include "Game/Entities/ItemRock.h"
#include "Game/Farm.h"
#include "PSM/WorkItem.h"
#include "Dolphin/rand.h"
#include "JSystem/JKernel/JKRDvdRipper.h"

namespace Game {
namespace ItemRock {

static const char unusedName[] = "itemRock";

Mgr* mgr;

/**
 * @note Address: 0x801E0E84
 * @note Size: 0x134
 */
void FSM::init(Item*)
{
	create(ITEMROCK_StateCount);
	registerState(new NormalState);
	registerState(new DownState);
	registerState(new UpState);
}

/**
 * @note Address: 0x801E0FB8
 * @note Size: 0x3C
 */
void NormalState::init(Item* item, StateArg* stateArg)
{
	static_cast<ItemRock::Item*>(item)->startWaitMotion();
	mIsDamaged  = 0;
	mIsFullSize = 0;
}

/**
 * @note Address: 0x801E0FF4
 * @note Size: 0x90
 */
void NormalState::exec(Item* item)
{
	f32 changeTime = item->mGrowTimes[item->mSize];
	if (item->mSize > Item::SIZE_Max) {
		item->mSizeTimer += sys->mDeltaTime;
		if (item->mSizeTimer >= changeTime) {
			mIsFullSize   = 1;
			item->mHealth = item->mHealthLimits[item->mSize - 1];
			transit(item, ITEMROCK_Up, nullptr);
		}
	}
}

/**
 * @note Address: 0x801E10B4
 * @note Size: 0x4
 */
void NormalState::cleanup(Item*) { }

/**
 * @note Address: 0x801E10B8
 * @note Size: 0xBC
 */
void NormalState::onDamage(Item* item, f32 damage)
{
	item->startDamageMotion();
	item->mDamageBuffer += damage;
	item->mHealth -= item->mDamageBuffer;
	item->mDamageBuffer = 0.0f;
	if (item->mHealth < item->mHealthLimits[item->mSize + 1]) {
		mIsDamaged = 1;
		transit(item, ITEMROCK_Down, nullptr);
	}
}

/**
 * @note Address: 0x801E1174
 * @note Size: 0xF8
 */
void NormalState::onKeyEvent(Item* item, const SysShape::KeyEvent& event)
{
	if (event.mType == KEYEVENT_100) {
		Vector3f rockPos = item->getPosition();
		item->startFukuEffect(rockPos);
	}

	if (mIsFullSize) {
		item->mHealth = item->mHealthLimits[item->mSize - 1];
		transit(item, ITEMROCK_Up, nullptr);
		return;
	} else if (mIsDamaged) {
		transit(item, ITEMROCK_Down, nullptr);
		return;
	}

	item->startWaitMotion();
}

/**
 * @note Address: 0x801E126C
 * @note Size: 0x48
 */
void DownState::init(Item* item, StateArg* stateArg)
{
	item->startDownMotion();
	item->startSound(PSSE_EV_RUIN_WITHER);
}

/**
 * @note Address: 0x801E12B4
 * @note Size: 0x4
 */
void DownState::exec(Item*) { }

/**
 * @note Address: 0x801E12B8
 * @note Size: 0x4
 */
void DownState::cleanup(Item*) { }

/**
 * @note Address: 0x801E12BC
 * @note Size: 0x10
 */
void DownState::onDamage(Item* item, f32 damage) { item->mDamageBuffer += damage; }

/**
 * @note Address: 0x801E12CC
 * @note Size: 0xF0
 */
void DownState::onKeyEvent(Item* item, const SysShape::KeyEvent& event)
{
	item->mSizeTimer = 0.0f;
	item->mSize++;
	if (item->mSize >= item->mSizeCount) {
		item->mSize = item->mSizeCount;
		item->setAlive(false);
		item->finishLoopEffect();
	}

	item->mObstacle->setPower(1.0f - (f32)item->mSize / (f32)item->mSizeCount);
	item->startLoopEffect();
	transit(item, ITEMROCK_Normal, nullptr);
}

/**
 * @note Address: 0x801E13BC
 * @note Size: 0x58
 */
void UpState::init(Item* item, StateArg* stateArg)
{
	item->startUpMotion();
	item->mAnimSpeed = 30.0f;
	item->mSizeTimer = 0.0f;
	item->startSound(PSSE_EV_RUIN_GROW);
}

/**
 * @note Address: 0x801E1414
 * @note Size: 0x4
 */
void UpState::exec(Item*) { }

/**
 * @note Address: 0x801E1418
 * @note Size: 0x4
 */
void UpState::cleanup(Item*) { }

/**
 * @note Address: 0x801E141C
 * @note Size: 0x10
 */
void UpState::onDamage(Item* item, f32 damage) { item->mDamageBuffer += damage; }

/**
 * @note Address: 0x801E142C
 * @note Size: 0xCC
 */
void UpState::onKeyEvent(Item* item, const SysShape::KeyEvent& event)
{
	item->mSize--;
	item->setAlive(true);
	item->mObstacle->setPower(1.0f - (f32)item->mSize / (f32)item->mSizeCount);
	item->startLoopEffect();
	transit(item, ITEMROCK_Normal, nullptr);
}

/**
 * @note Address: N/A
 * @note Size: 0xEC
 */
Item::Item()
    : WorkItem(OBJTYPE_Rock)
{
	mMass     = 0.0f;
	mObstacle = nullptr;
}

/**
 * @note Address: 0x801E14F8
 * @note Size: 0x48
 */
void Item::constructor() { mSoundObj = new PSM::WorkItem(this); }

/**
 * @note Address: 0x801E1540
 * @note Size: 0x20C
 */
void Item::onInit(CreatureInitArg* initArg)
{
	mSizeTimer = 0.0f;
	mModel     = new SysShape::Model(mgr->getModelData(0), J3DMODEL_CreateNewDL, 2);
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
	mMakeEffectDelay = 0;
}

/**
 * @note Address: 0x801E1780
 * @note Size: 0x34
 */
void Item::onKill(CreatureKillArg* killArg) { mgr->kill(this); }

/**
 * @note Address: 0x801E17B4
 * @note Size: 0x5C
 */
void Item::onSetPosition()
{
	mObstacle = Farm::farmMgr->addObstacle(this, 180.0f, 1.0f);
	updateBoundSphere();
	startLoopEffect();
}

/**
 * @note Address: N/A
 * @note Size: 0x140
 */
void Item::emitDamageEffect()
{
	if (!mMakeEffectDelay) {
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

		mMakeEffectDelay = (int)(randFloat() * 5.0f) + 6;
	}
}

/**
 * @note Address: 0x801E1810
 * @note Size: 0x44
 */
void Item::onKeyEvent(const SysShape::KeyEvent& event)
{
	if (mCurrentState) {
		mCurrentState->onKeyEvent(this, event);
	}
}

/**
 * @note Address: 0x801E1858
 * @note Size: 0x10C
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

/**
 * @note Address: 0x801E1964
 * @note Size: 0x64
 */
void Item::finishLoopEffect()
{
	mEfxKouhaiSmall->fade();
	mEfxKouhaiMedium->fade();
	mEfxKouhaiMax->fade();
}

/**
 * @note Address: 0x801E19C8
 * @note Size: 0xB0
 */
void Item::startFukuEffect(Vector3f& fxPos)
{
	efx::TKouhaiFuku fukuFX;
	efx::Arg fxArg(fxPos);
	fukuFX.create(&fxArg);

	startSound(PSSE_EV_RUIN_DISCHARGE);
}

/**
 * @note Address: 0x801E1A78
 * @note Size: 0x204
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

/**
 * @note Address: 0x801E1C7C
 * @note Size: 0x58
 */
void Item::doSave(Stream& input)
{
	input.writeInt(mSize);
	input.writeFloat(mSizeTimer);
	input.writeFloat(mHealth);
}

/**
 * @note Address: 0x801E1CD4
 * @note Size: 0x48
 */
void Item::updateBoundSphere()
{
	f32 rad                   = getWorkRadius();
	mBoundingSphere.mPosition = mPosition;
	mBoundingSphere.mRadius   = rad;
}

/**
 * @note Address: 0x801E1D1C
 * @note Size: 0x1B4
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

	if (mMakeEffectDelay) {
		mMakeEffectDelay--;
	}
}

/**
 * @note Address: 0x801E1ED0
 * @note Size: 0x20
 */
void Item::initMotion() { startWaitMotion(); }

/**
 * @note Address: 0x801E1EF0
 * @note Size: 0x20
 */
void Item::on_movie_end(bool) { startWaitMotion(); }

/**
 * @note Address: 0x801E1F10
 * @note Size: 0x12C
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

/**
 * @note Address: 0x801E203C
 * @note Size: 0x9C
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

/**
 * @note Address: 0x801E20D8
 * @note Size: 0x28C
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

/**
 * @note Address: 0x801E2364
 * @note Size: 0xEC
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

/**
 * @note Address: 0x801E2450
 * @note Size: 0x114
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

/**
 * @note Address: 0x801E2564
 * @note Size: 0x88
 */
f32 Item::getWorkDistance(Sys::Sphere& sphere)
{
	Vector3f sep = mPosition - sphere.mPosition;
	f32 dist     = sep.length();
	return dist - getWorkRadius();
}

/**
 * @note Address: 0x801E25EC
 * @note Size: 0x194
 */
void Item::createRock(int visibleSizeCount)
{
	mSizeCount    = visibleSizeCount;
	mSize         = SIZE_Max;
	mDamageBuffer = 0.0f;
	mHealthLimits = new f32[visibleSizeCount + 1];
	mGrowTimes    = new f32[visibleSizeCount + 1];
	mWorkRadii    = new f32[visibleSizeCount]; // don't need one for hidden

	for (int j = 0; j < 4; j++) {
		mHealthLimits[j] = ((Parm<f32>*)(&mgr->mParms->mRockParms.mHealthMax) + j)->mValue;
	}

	for (int j = 0; j < 4; j++) {
		mGrowTimes[j] = 60.0f * ((Parm<f32>*)(&mgr->mParms->mRockParms.mGrowTimeMax) + j)->mValue;
	}

	mMaxHealth = mHealthLimits[SIZE_Max];
	mHealth    = mMaxHealth;

	for (int i = 0; i < visibleSizeCount + 1; i++) { }
}

/**
 * @note Address: 0x801E2780
 * @note Size: 0x174
 */
bool Item::interactAttack(InteractAttack& attack)
{
	if (mCurrentState) {
		mCurrentState->onDamage(this, attack.mDamage);
		emitDamageEffect();
	}

	return true;
}

/**
 * @note Address: 0x801E28F8
 * @note Size: 0x28
 */
f32 Item::getWorkRadius()
{
	if (mSize == mSizeCount) {
		return 0.0f;
	}
	return mWorkRadii[mSize];
}

/**
 * @note Address: 0x801E2920
 * @note Size: 0x120
 */
Mgr::Mgr()
{
	mItemName = "荒廃オブジェクト"; // 'ruined object'
	setModelSize(1);
	mObjectPathComponent = "user/Kando/objects/ojamarock";
	mParms               = new RockParms;
	void* resource       = JKRDvdRipper::loadToMainRAM("user/Abe/item/rockParms.txt", nullptr, Switch_0, 0, nullptr,
	                                                   JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
	if (resource) {
		RamStream stream(resource, -1);
		stream.setMode(STREAM_MODE_TEXT, 1);
		mParms->read(stream);
		delete[] resource;
	}
}

/**
 * @note Address: 0x801E2EF8
 * @note Size: 0x110
 */
BaseItem* Mgr::birth()
{
	ItemRock::Item* rock = new ItemRock::Item;
	entry(rock);
	return rock;
}

/**
 * @note Address: 0x801E3008
 * @note Size: 0x60
 */
BaseItem* Mgr::generatorBirth(Vector3f& pos, Vector3f& rot, GenItemParm* parm)
{
	ItemRock::Item* rock = static_cast<ItemRock::Item*>(birth());
	rock->init(nullptr);
	rock->setPosition(pos, false);
	return rock;
}

/**
 * @note Address: 0x801E3068
 * @note Size: 0xA8
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
