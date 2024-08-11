#include "Game/Entities/ItemBigFountain.h"
#include "Game/MoviePlayer.h"
#include "Game/MapMgr.h"
#include "Platform.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "PSM/WorkItem.h"
#include "PSSystem/PSSystemIF.h"
#include "Radar.h"
#include "nans.h"

namespace Game {
namespace ItemBigFountain {

static const int unusedArray[]   = { 0, 0, 0 };
static const char unusedBFName[] = "itemBigFountain";

Mgr* mgr;

/**
 * @note Address: 0x801EC188
 * @note Size: 0x18C
 */
void FSM::init(Item* item)
{
	create(BIGFOUNTAIN_StateCount);
	registerState(new WaitState());
	registerState(new OutState());
	registerState(new AppearState());
	registerState(new CloseState());
}

/**
 * @note Address: 0x801EC314
 * @note Size: 0x48
 */
void AppearState::init(Item* item, StateArg* arg)
{
	item->mBuryDepth = 45.0f;
	_10              = 0.0f;
	item->setAlive(true);
}

/**
 * @note Address: 0x801EC35C
 * @note Size: 0xCC
 */
void AppearState::exec(Item* item)
{
	_10 += sys->mDeltaTime;

	f32 timeRemaining = 1.0f - 0.8333333f * _10;

	if (timeRemaining <= 0.0f) {
		timeRemaining = 0.0f;
		Vector3f pos  = item->getPosition();
		transit(item, BIGFOUNTAIN_Wait, nullptr);

		PSSystem::spSysIF->playSystemSe(PSSE_SY_WORK_FINISH, 0);
	}

	item->mBuryDepth = timeRemaining * 45.0f;
}

/**
 * @note Address: 0x801EC458
 * @note Size: 0x4
 */
void AppearState::cleanup(Item* item) { }

/**
 * @note Address: 0x801EC45C
 * @note Size: 0x3C
 */
void CloseState::init(Item* item, StateArg* arg)
{
	item->mBuryDepth = 45.0f;
	item->setAlive(false);
}

/**
 * @note Address: 0x801EC498
 * @note Size: 0x14
 */
void CloseState::exec(Item* item) { item->mLod.resetFlag(AILOD_IsVisibleBoth); }

/**
 * @note Address: 0x801EC4AC
 * @note Size: 0x4
 */
void CloseState::cleanup(Item* item) { }

/**
 * @note Address: 0x801EC4B0
 * @note Size: 0x44
 */
void WaitState::init(Item* item, StateArg* arg)
{
	item->mAnimator.startAnim(0, nullptr);
	item->mAnimSpeed = 0.0f;
	item->mBuryDepth = 0.0f;
}

/**
 * @note Address: 0x801EC4F4
 * @note Size: 0x34
 */
void WaitState::exec(Item* item) { item->startSound(PSSE_EN_WATERSHOT_NORMAL); }

/**
 * @note Address: 0x801EC528
 * @note Size: 0x4
 */
void WaitState::cleanup(Item* item) { }

/**
 * @note Address: 0x801EC52C
 * @note Size: 0x94
 */
void WaitState::onDamage(Item* item, f32 damage)
{
	item->mHealth -= damage;
	if (item->mHealth <= 0.0f) {
		transit(item, BIGFOUNTAIN_Out, nullptr);
	}
	if (item->mAnimSpeed < 30.0f) {
		item->mAnimator.startAnim(0, item);
		item->mAnimSpeed = 30.0f;
	}
}

/**
 * @note Address: 0x801EC5C0
 * @note Size: 0xC
 */
void WaitState::onKeyEvent(Item* item, SysShape::KeyEvent const& keyEvent) { item->mAnimSpeed = 0.0f; }

/**
 * @note Address: 0x801EC5CC
 * @note Size: 0x11C
 */
void OutState::init(Item* item, StateArg* arg)
{
	item->mAnimator.startAnim(1, nullptr);
	item->mAnimSpeed = 30.0f;
	item->setAlive(false);
	item->mEfxGeyserSet->fade();
	efx::Arg effectArg(item->mPosition);
	item->mEfxGeyserAct->create(&effectArg);
	if (gameSystem->isFlag(GAMESYS_IsSoundFXActive)) {
		item->mSoundEvent.finish();
		P2ASSERTLINE(248, item->mSoundObj->getCastType() == PSM::CCT_WorkItem);
		static_cast<PSM::WorkItem*>(item->mSoundObj)->eventFinish();
		PSSystem::spSysIF->playSystemSe(PSSE_SY_WORK_FINISH, 0);
	}
}

/**
 * @note Address: 0x801EC6E8
 * @note Size: 0x34
 */
void OutState::exec(Item* item) { item->startSound(PSSE_EV_BIG_FOUNTAIN); }

/**
 * @note Address: 0x801EC71C
 * @note Size: 0x4
 */
void OutState::cleanup(Item* item) { }

/**
 * @note Address: 0x801EC720
 * @note Size: 0x204
 */
void Item::movieUserCommand(u32 command, MoviePlayer* player)
{
	switch (command) {
	case CC_MovieCommand1:
		PelletIterator iter;
		CI_LOOP(iter)
		{
			Pellet* pellet = *iter;
			if (pellet->isPickable() && pellet->isAlive()) {
				Vector3f pelletPos   = pellet->getPosition();
				Vector3f fountainPos = getPosition();

				Vector2f diff(fountainPos.x - pelletPos.x, fountainPos.z - pelletPos.z);
				f32 rad   = pellet->getBottomRadius();
				f32 len2D = diff.length();

				if (len2D - rad < 60.0f) {
					pelletPos.y += 120.0f;
					pellet->setPosition(pelletPos, false);
				}
			}
		}

		if (!player->isFlag(MVP_IsFinished)) {
			mFsm->transit(this, BIGFOUNTAIN_Appear, nullptr);
			return;
		}

		if (mBuryDepth != 0.0f) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_WORK_FINISH, 0);
		}

		mFsm->transit(this, BIGFOUNTAIN_Wait, nullptr);
	}
}

/**
 * @note Address: 0x801EC924
 * @note Size: 0x108
 */
bool Item::interactGotKey(InteractGotKey& gotKey)
{
	if (getStateID() == BIGFOUNTAIN_Close && gameSystem->isFlag(GAMESYS_IsGameWorldActive)) {
		MoviePlayArg playArg("g30_appear_fountain", nullptr, nullptr, 0);
		playArg.mOrigin            = getPosition();
		playArg.mAngle             = getFaceDir();
		playArg.mDelegateStart     = gameSystem->mSection->mMovieStartCallback;
		playArg.mDelegateEnd       = gameSystem->mSection->mMovieFinishCallback;
		moviePlayer->mTargetObject = this;
		moviePlayer->play(playArg);
		return true;
	}

	return false;
}

/**
 * @note Address: N/A
 * @note Size: 0xDC
 */
Item::Item()
    : WorkItem(OBJTYPE_BigFountain)
{
}

/**
 * @note Address: 0x801ECA2C
 * @note Size: 0x48
 */
void Item::constructor() { mSoundObj = new PSM::WorkItem(this); }

/**
 * @note Address: 0x801ECA74
 * @note Size: 0x284
 */
void Item::onInit(CreatureInitArg* initArg)
{
	mModel = new SysShape::Model(mgr->getModelData(0), J3DMODEL_CreateNewDL, 2);
	mModel->mJ3dModel->calc();
	mModel->mJ3dModel->calcMaterial();
	mModel->mJ3dModel->makeDL();
	mModel->mJ3dModel->lock();
	mBoundingSphere.mRadius = 65.0f;
	mCollTree->createSingleSphere(mModel, 0, mBoundingSphere, nullptr);
	setCollisionFlick(false);
	mAnimSpeed = 0.0f;

	JUT_ASSERTLINE(364, mgr->mAnimMgr, "animMgr null @ big fountain\n");

	mAnimator.mAnimMgr = mgr->mAnimMgr;
	mAnimator.startAnim(0, this);

	mHealth       = mgr->mParms->mFountainParms.mHealth.mValue;
	mEfxGeyserAct = new efx::TGeyserAct();
	mEfxGeyserSet = new efx::TGeyserSet();

	InitArg* fountainArg = static_cast<InitArg*>(initArg);
	if (fountainArg) {
		mFsm->start(this, fountainArg->mInitState, nullptr);
	} else if (mHealth > 0.0f) {
		mFsm->start(this, BIGFOUNTAIN_Wait, nullptr);
		setAlive(true);
	} else {
		mFsm->start(this, BIGFOUNTAIN_Out, nullptr);
	}

	// weird but required for stack.
	Vector3f(1.0f).set(mModel->mJ3dModel->mModelScale);
	mMass    = 0.0f;
	mFaceDir = 0.0f;
}

/**
 * @note Address: 0x801ECD2C
 * @note Size: 0x54
 */
void Item::initDependency()
{
	if (gameSystem->isStoryMode()) {
		mHealth = 0.0f;
		mFsm->start(this, BIGFOUNTAIN_Out, nullptr);
	}
}

/**
 * @note Address: 0x801ECD80
 * @note Size: 0xC0
 */
void Item::update()
{
	doAI();
	updateBoundSphere();
	mSoundObj->exec();
	updateCell();
	if (mCellLayerIndex < 0 || mCellLayerIndex > 10) {
		getTypeName();
		JUT_PANICLINE(424, "cellLayerindex overflow\n");
	}
	do_updateLOD();
}

/**
 * @note Address: 0x801ECE40
 * @note Size: 0x60
 */
void Item::killAllEffect()
{
	if (mEfxGeyserSet) {
		mEfxGeyserSet->fade();
	}
	if (mEfxGeyserAct) {
		mEfxGeyserAct->fade();
	}
}

/**
 * @note Address: 0x801ECEA0
 * @note Size: 0x68
 */
void Item::makeTrMatrix()
{
	Vector3f rotation    = Vector3f(0.0f, mFaceDir, 0.0f);
	Vector3f translation = mPosition;
	translation.y -= mBuryDepth;
	mBaseTrMatrix.makeTR(translation, rotation);
}

/**
 * @note Address: 0x801ECF08
 * @note Size: 0x118
 */
void Item::onSetPosition()
{
	if (mapMgr) {
		mPosition.y = mapMgr->getMinY(mPosition);
	}

	Radar::Mgr::entry(this, Radar::MAP_GEYSER, 0);

	makeTrMatrix();
	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
	mModel->mJ3dModel->calc();

	Matrixf* worldMat = mModel->mJoints[0].getWorldMatrix();
	ID32 id('foun');
	PlatAddInstanceArg platArg;
	platArg.mItem     = this;
	platArg.mId       = id;
	platArg.mPlatform = mgr->mPlatform;
	platArg.mMatrix   = worldMat;
	mPlatInstance     = platMgr->addInstance(platArg);
	mPlatInstance->setCollision(true);
}

/**
 * @note Address: 0x801ED020
 * @note Size: 0xA0
 */
void Item::doAI()
{
	mFsm->exec(this);
	switch (mSoundEvent.update()) {
	case TSE_ApplyTransition:
		P2ASSERTLINE(492, mSoundObj->getCastType() == PSM::CCT_WorkItem);
		static_cast<PSM::WorkItem*>(mSoundObj)->eventStop();
		break;
	}
}

/**
 * @note Address: 0x801ED0C0
 * @note Size: 0x16C
 */
void Item::doDirectDraw(Graphics& gfx)
{
	gfx.initPrimDraw(nullptr);
	gfx.mDrawColor = Color4(200, 250, 200, 255);
	gfx.drawSphere(mBoundingSphere.mPosition, mBoundingSphere.mRadius);

	PerspPrintfInfo printInfo;
	gfx.initPerspPrintf(gfx.mCurrentViewport);

	printInfo.mColorA = Color4(200, 0, 0, 255);
	printInfo.mColorB = Color4(200, 200, 200, 255);
	printInfo.mScale  = 1.2f;

	Vector3f pos = mPosition;
	pos.y += 120.0f;
	const char* status = (isAlive()) ? "alv" : "ded";

	gfx.perspPrintf(printInfo, pos, "%s %s", mLod.isFlag(AILOD_IsVisible) ? "vis" : "x", status);
}

/**
 * @note Address: 0x801ED22C
 * @note Size: 0x38
 */
void Item::updateBoundSphere()
{
	mBoundingSphere.mPosition = mPosition;
	updateCollTree();
}

/**
 * @note Address: 0x801ED264
 * @note Size: 0x4
 */
void Item::doSimulation(f32) { }

// this is here to fix the weak function ordering. - HP
static void fakeFunc(Item* item) { item->FSMItem::doAI(); }

/**
 * @note Address: 0x801ED268
 * @note Size: 0x30
 */
bool Item::canRide() { return mCurrentState->canRide(); }

/**
 * @note Address: 0x801ED2A0
 * @note Size: 0x11C
 */
bool Item::interactAttack(InteractAttack& attack)
{
	if (mCurrentState) {
		mCurrentState->onDamage(this, attack.mDamage);
		switch (mSoundEvent.event()) {
		case 1:
			P2ASSERTLINE(559, mSoundObj->getCastType() == PSM::CCT_WorkItem);
			static_cast<PSM::WorkItem*>(mSoundObj)->eventStart();
			break;
		case 3:
			P2ASSERTLINE(566, mSoundObj->getCastType() == PSM::CCT_WorkItem);
			static_cast<PSM::WorkItem*>(mSoundObj)->eventRestart();
			break;
		}
	}

	return true;
}

/**
 * @note Address: 0x801ED3C0
 * @note Size: 0xC8
 */
bool Item::getVectorField(Sys::Sphere& sphere, Vector3f& vec)
{
	Vector3f sep = mPosition - sphere.mPosition;
	f32 dist     = sep.normalise();

	if (dist > 50.0f) {
		vec = sep;
	} else if (dist != 0.0f) {
		vec = sep;
	} else {
		vec = Vector3f(0.0f);
	}

	return true;
}

/**
 * @note Address: 0x801ED488
 * @note Size: 0x60
 */
f32 Item::getWorkDistance(Sys::Sphere& sphere)
{
	Vector3f sep = mPosition - sphere.mPosition;
	f32 dist     = sep.length();
	return dist - 50.0f;
}

/**
 * @note Address: 0x801ED4E8
 * @note Size: 0x3C
 */
void Item::onKeyEvent(SysShape::KeyEvent const& keyEvent) { mCurrentState->onKeyEvent(this, keyEvent); }

/**
 * @note Address: 0x801ED528
 * @note Size: 0x120
 */
Mgr::Mgr()
    : TNodeItemMgr()
{
	setModelSize(1);
	mObjectPathComponent = "user/Kando/objects/kanketusen";
	mItemName            = "帰還間欠泉"; // 'return geyser'
	mParms               = new FountainParms();

	void* data = JKRDvdRipper::loadToMainRAM("user/Abe/item/fountainParms.txt", nullptr, Switch_0, 0, nullptr,
	                                         JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
	if (data != nullptr) {
		RamStream input(data, -1);
		input.setMode(STREAM_MODE_TEXT, 1);
		mParms->read(input);
		delete[] data;
	}
}

/**
 * @note Address: 0x801ED858
 * @note Size: 0xDC
 */
void Mgr::onLoadResources()
{
	loadArchive("arc.szs");
	loadBmd("kanketusen.bmd", 0, 0x20020000);
	mModelData[0]->newSharedDisplayList(0x40000);
	mModelData[0]->makeSharedDL();

	JKRArchive* textArc = openTextArc("texts.szs");

	loadAnimMgr(textArc, "animmgr.txt");
	mPlatform = loadPlatform(textArc, "platform.bin");

	MapCode::Code mapCode;
	mapCode.setCode(MapCode::Code::Attribute1, MapCode::Code::SlipCode_Steep, true);
	mPlatform->setMapCodeAll(mapCode);

	closeTextArc(textArc);
}

/**
 * @note Address: 0x801ED934
 * @note Size: 0x20
 */
BaseItem* Mgr::birth() { return TNodeItemMgr::birth(); }

/**
 * @note Address: 0x801ED954
 * @note Size: 0x58
 */
BaseItem* Mgr::generatorBirth(Vector3f& pos, Vector3f& rot, GenItemParm* genParm)
{
	BaseItem* bItem = TNodeItemMgr::birth();
	Item* fountain  = static_cast<Item*>(bItem);
	fountain->init(nullptr);
	fountain->setPosition(pos, false);
	return fountain;
}

} // namespace ItemBigFountain
} // namespace Game
