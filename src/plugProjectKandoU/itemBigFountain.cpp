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

/*
 * --INFO--
 * Address:	801EC188
 * Size:	00018C
 */
void FSM::init(Item* item)
{
	create(BIGFOUNTAIN_StateCount);
	registerState(new WaitState());
	registerState(new OutState());
	registerState(new AppearState());
	registerState(new CloseState());
}

/*
 * --INFO--
 * Address:	801EC314
 * Size:	000048
 */
void AppearState::init(Item* item, StateArg* arg)
{
	item->mBuryDepth = 45.0f;
	_10              = 0.0f;
	item->setAlive(true);
}

/*
 * --INFO--
 * Address:	801EC35C
 * Size:	0000CC
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

/*
 * --INFO--
 * Address:	801EC458
 * Size:	000004
 */
void AppearState::cleanup(Item* item) { }

/*
 * --INFO--
 * Address:	801EC45C
 * Size:	00003C
 */
void CloseState::init(Item* item, StateArg* arg)
{
	item->mBuryDepth = 45.0f;
	item->setAlive(false);
}

/*
 * --INFO--
 * Address:	801EC498
 * Size:	000014
 */
void CloseState::exec(Item* item) { item->mLod.resetFlag(AILOD_IsVisible | AILOD_IsVisVP0 | AILOD_IsVisVP1); }

/*
 * --INFO--
 * Address:	801EC4AC
 * Size:	000004
 */
void CloseState::cleanup(Item* item) { }

/*
 * --INFO--
 * Address:	801EC4B0
 * Size:	000044
 */
void WaitState::init(Item* item, StateArg* arg)
{
	item->mAnimator.startAnim(0, nullptr);
	item->mAnimSpeed = 0.0f;
	item->mBuryDepth = 0.0f;
}

/*
 * --INFO--
 * Address:	801EC4F4
 * Size:	000034
 */
void WaitState::exec(Item* item) { item->startSound(PSSE_EN_WATERSHOT_NORMAL); }

/*
 * --INFO--
 * Address:	801EC528
 * Size:	000004
 */
void WaitState::cleanup(Item* item) { }

/*
 * --INFO--
 * Address:	801EC52C
 * Size:	000094
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

/*
 * --INFO--
 * Address:	801EC5C0
 * Size:	00000C
 */
void WaitState::onKeyEvent(Item* item, SysShape::KeyEvent const& keyEvent) { item->mAnimSpeed = 0.0f; }

/*
 * --INFO--
 * Address:	801EC5CC
 * Size:	00011C
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

/*
 * --INFO--
 * Address:	801EC6E8
 * Size:	000034
 */
void OutState::exec(Item* item) { item->startSound(PSSE_EV_BIG_FOUNTAIN); }

/*
 * --INFO--
 * Address:	801EC71C
 * Size:	000004
 */
void OutState::cleanup(Item* item) { }

/*
 * --INFO--
 * Address:	801EC720
 * Size:	000204
 */
void Item::movieUserCommand(u32 command, MoviePlayer* player)
{
	switch (command) {
	case 100:
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

/*
 * --INFO--
 * Address:	801EC924
 * Size:	000108
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

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
Item::Item()
    : WorkItem(OBJTYPE_BigFountain)
{
}

/*
 * --INFO--
 * Address:	801ECA2C
 * Size:	000048
 */
void Item::constructor() { mSoundObj = new PSM::WorkItem(this); }

/*
 * --INFO--
 * Address:	801ECA74
 * Size:	000284
 */
void Item::onInit(CreatureInitArg* initArg)
{
	mModel = new SysShape::Model(mgr->getModelData(0), 0x20000, 2);
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
	Vector3f(1.0f).setVec(mModel->mJ3dModel->mModelScale);
	mMass    = 0.0f;
	mFaceDir = 0.0f;
}

/*
 * --INFO--
 * Address:	801ECD2C
 * Size:	000054
 */
void Item::initDependency()
{
	if (gameSystem->isStoryMode()) {
		mHealth = 0.0f;
		mFsm->start(this, BIGFOUNTAIN_Out, nullptr);
	}
}

/*
 * --INFO--
 * Address:	801ECD80
 * Size:	0000C0
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

/*
 * --INFO--
 * Address:	801ECE40
 * Size:	000060
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

/*
 * --INFO--
 * Address:	801ECEA0
 * Size:	000068
 */
void Item::makeTrMatrix()
{
	Vector3f rotation    = Vector3f(0.0f, mFaceDir, 0.0f);
	Vector3f translation = mPosition;
	translation.y -= mBuryDepth;
	mBaseTrMatrix.makeTR(translation, rotation);
}

/*
 * --INFO--
 * Address:	801ECF08
 * Size:	000118
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

/*
 * --INFO--
 * Address:	801ED020
 * Size:	0000A0
 */
void Item::doAI()
{
	mFsm->exec(this);
	switch (mSoundEvent.update()) {
	case 2:
		P2ASSERTLINE(492, mSoundObj->getCastType() == PSM::CCT_WorkItem);
		static_cast<PSM::WorkItem*>(mSoundObj)->eventStop();
		break;
	}
}

/*
 * --INFO--
 * Address:	801ED0C0
 * Size:	00016C
 */
void Item::doDirectDraw(Graphics& gfx)
{
	gfx.initPrimDraw(nullptr);
	gfx._084 = Color4(200, 250, 200, 255);
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

/*
 * --INFO--
 * Address:	801ED22C
 * Size:	000038
 */
void Item::updateBoundSphere()
{
	mBoundingSphere.mPosition = mPosition;
	updateCollTree();
}

/*
 * --INFO--
 * Address:	801ED264
 * Size:	000004
 */
void Item::doSimulation(f32) { }

/*
 * --INFO--
 * Address:	801ED268
 * Size:	000030
 */
bool Item::canRide() { return mCurrentState->canRide(); }

/*
 * --INFO--
 * Address:	801ED2A0
 * Size:	00011C
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

/*
 * --INFO--
 * Address:	801ED3C0
 * Size:	0000C8
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

/*
 * --INFO--
 * Address:	801ED488
 * Size:	000060
 */
f32 Item::getWorkDistance(Sys::Sphere& sphere)
{
	Vector3f sep = mPosition - sphere.mPosition;
	f32 dist     = sep.length();
	return dist - 50.0f;
}

/*
 * --INFO--
 * Address:	801ED4E8
 * Size:	00003C
 */
void Item::onKeyEvent(SysShape::KeyEvent const& keyEvent) { mCurrentState->onKeyEvent(this, keyEvent); }

/*
 * --INFO--
 * Address:	801ED528
 * Size:	000120
 */
Mgr::Mgr()
    : TNodeItemMgr()
{
	setModelSize(1);
	mObjectPathComponent = "user/Kando/objects/kanketusen";
	mItemName            = "‹AŠÒŠÔŒ‡ò"; // 'return geyser'
	mParms               = new FountainParms();
	void* data           = JKRDvdRipper::loadToMainRAM("user/Abe/item/fountainParms.txt", nullptr, Switch_0, 0, nullptr,
                                             JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
	if (data != nullptr) {
		RamStream input(data, -1);
		input.resetPosition(true, 1);
		mParms->read(input);
		delete[] data;
	}
}

/*
 * --INFO--
 * Address:	801ED858
 * Size:	0000DC
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
	mapCode.setCode(MapCode::Code::Attribute1, MapCode::Code::SlipCode2, true);
	mPlatform->setMapCodeAll(mapCode);

	closeTextArc(textArc);
}

/*
 * --INFO--
 * Address:	801ED934
 * Size:	000020
 */
BaseItem* Mgr::birth() { return TNodeItemMgr::birth(); }

/*
 * --INFO--
 * Address:	801ED954
 * Size:	000058
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
