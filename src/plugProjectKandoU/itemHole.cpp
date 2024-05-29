#include "Game/AILOD.h"
#include "Game/BaseItem.h"
#include "Game/GameSystem.h"
#include "Game/Entities/ItemBarrel.h"
#include "Game/MapMgr.h"
#include "Game/MoviePlayer.h"
#include "Game/PlatInstance.h"
#include "Game/pelletMgr.h"
#include "Game/itemMgr.h"
#include "Iterator.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "Platform.h"
#include "PS.h"
#include "Radar.h"
#include "SysShape/Joint.h"
#include "SysShape/Model.h"
#include "System.h"
#include "Vector3.h"
#include "efx/Arg.h"
#include "efx/WarpZone.h"
#include "id32.h"
#include "mapCode.h"
#include "sysMath.h"
#include "types.h"
#include "nans.h"
#include "Game/Entities/ItemHole.h"
#include "SoundID.h"
#include "PSSystem/PSSystemIF.h"

namespace Game {
namespace ItemHole {

static const int unusedArray[]         = { 0, 0, 0 };
static const char unusedItemHoleName[] = "itemHole";

Mgr* mgr;

/**
 * @note Address: 0x801D1738
 * @note Size: 0x134
 */
void FSM::init(Game::CFSMItem*)
{
	create(HOLE_StateCount);
	registerState(new NormalState());
	registerState(new AppearState());
	registerState(new CloseState());
}

/**
 * @note Address: 0x801D186C
 * @note Size: 0x3C
 */
void NormalState::init(Game::CFSMItem* item, Game::StateArg* arg)
{
	static_cast<Item*>(item)->mBuryDepth = 0.0f;
	item->setAlive(true);
}

/**
 * @note Address: 0x801D18A8
 * @note Size: 0x4
 */
void NormalState::exec(Game::CFSMItem*) { }

/**
 * @note Address: 0x801D18AC
 * @note Size: 0x4
 */
void NormalState::cleanup(Game::CFSMItem*) { }

/**
 * @note Address: 0x801D18B0
 * @note Size: 0x5C
 */
void AppearState::init(Game::CFSMItem* item, Game::StateArg* arg)
{
	item->setAlive(true);
	static_cast<Item*>(item)->mBuryDepth = 25.0f;
	mAppearTimer                         = 0.0f;
}

/**
 * @note Address: 0x801D190C
 * @note Size: 0x118
 */
void AppearState::exec(Game::CFSMItem* item)
{
	mAppearTimer += sys->mDeltaTime;
	f32 buriedFrac = 1.0f - (mAppearTimer * 0.8333333f);
	if (buriedFrac <= 0.0f) {
		buriedFrac = 0.0f;
		efx::Arg arg;
		arg.mPosition = item->getPosition();
		static_cast<Item*>(item)->mEfxWarpZone->create(&arg);
		transit(item, Hole_Normal, nullptr);
	}
	static_cast<Item*>(item)->mBuryDepth = buriedFrac * 25.0f;
}

/**
 * @note Address: 0x801D1A54
 * @note Size: 0x4
 */
void AppearState::cleanup(Game::CFSMItem*) { }

/**
 * @note Address: 0x801D1A58
 * @note Size: 0x3C
 */
void CloseState::init(Game::CFSMItem* item, Game::StateArg* arg)
{
	static_cast<Item*>(item)->mBuryDepth = 25.0f;
	item->setAlive(false);
}

/**
 * @note Address: 0x801D1A94
 * @note Size: 0x14
 * exec__Q34Game8ItemHole10CloseStateFPQ24Game8CFSMItem
 */
void CloseState::exec(Game::CFSMItem* item) { item->mLod.resetFlag(AILOD_IsVisibleBoth); }

/**
 * @note Address: 0x801D1AA8
 * @note Size: 0x4
 */
void CloseState::cleanup(Game::CFSMItem*) { }

/**
 * @note Address: 0x801D1AAC
 * @note Size: 0x25C
 */
void Item::movieUserCommand(u32 command, MoviePlayer* player)
{
	switch (command) {
	case CC_MovieCommand1:
		PelletIterator iterator;
		iterator.first();
		while (!iterator.isDone()) {
			Pellet* pellet = (Pellet*)(*iterator);
			if (pellet->isPickable() && pellet->isAlive()) {
				Vector3f pelletPos = pellet->getPosition();
				Vector3f holePos   = getPosition();
				Vector2f sep(holePos.x - pelletPos.x, holePos.z - pelletPos.z);
				f32 rad = pellet->getBottomRadius();
				if (sep.length() - rad < 60.0f) {
					pelletPos.y += 120.0f;
					pellet->setPosition(pelletPos, false);
				}
			}
			iterator.next();
		}
		if (!player->isFlag(MVP_IsFinished)) {
			mFsm->transit(this, Hole_Appear, nullptr);

		} else {
			if (mBuryDepth != 0.0f) {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_WORK_FINISH, 0);
			}
			efx::Arg arg(Vector3f::zero);
			arg.mPosition = mPosition;
			mEfxWarpZone->create(&arg);
			mFsm->transit(this, Hole_Normal, nullptr);
		}
	}
}

/**
 * @note Address: 0x801D1D08
 * @note Size: 0x108
 */
bool Item::interactGotKey(Game::InteractGotKey& interaction)
{
	if (getStateID() == Hole_Close && gameSystem->isFlag(GAMESYS_IsGameWorldActive)) {
		MoviePlayArg arg("g2F_appear_hole", nullptr, nullptr, 0);
		arg.mOrigin                = getPosition();
		arg.mAngle                 = getFaceDir();
		arg.mDelegateStart         = gameSystem->mSection->mMovieStartCallback;
		arg.mDelegateEnd           = gameSystem->mSection->mMovieFinishCallback;
		moviePlayer->mTargetObject = this;
		moviePlayer->play(arg);
		return true;
	}
	return false;
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
Item::Item(int objTypeID)
    : CFSMItem(objTypeID)
{
}

/**
 * @note Address: 0x801D1E18
 * @note Size: 0xC0
 */
void Item::onInit(Game::CreatureInitArg* arg)
{
	mNodeItemMgr->setup(this);
	setAlive(true);
	if (arg) {
		mFsm->start(this, static_cast<InitArg*>(arg)->mInitialState, nullptr);
	} else {
		mFsm->start(this, Hole_Normal, nullptr);
	}
	mBarrel  = nullptr;
	mFaceDir = 0.0f;
}

/**
 * @note Address: 0x801D1F50
 * @note Size: 0x50
 */
void Item::changeMaterial() { mModel->jointVisible(false, mModel->getJoint("flag")->mJointIndex); }

/**
 * @note Address: 0x801D1FA0
 * @note Size: 0x1DC
 */
void Item::onSetPosition()
{
	if (mapMgr) {
		mPosition.y = mapMgr->getMinY(mPosition);
	}
	Radar::Mgr::entry(this, Radar::MAP_HOLE, 0);
	mBoundingSphere.mPosition = mPosition;
	mBoundingSphere.mRadius   = 50.0f;
	mEfxWarpZone              = new efx::WarpZone();
	makeTrMatrix();
	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
	mModel->mJ3dModel->calc();
	Matrixf* worldMatrix = mModel->mJoints[0].getWorldMatrix();

	ID32 futa('futa'); // 'lid'
	PlatAddInstanceArg lidArg;
	lidArg.mItem     = this;
	lidArg.mId       = futa;
	lidArg.mPlatform = mgr->mCapPlatform;
	lidArg.mMatrix   = worldMatrix;
	lidArg.mRadius   = 75.0f;
	mCapPlatInstance = platMgr->addInstance(lidArg);

	ID32 side('side');
	PlatAddInstanceArg sideArg;
	sideArg.mItem     = this;
	sideArg.mId       = side;
	sideArg.mPlatform = mgr->mSidePlatform;
	sideArg.mMatrix   = worldMatrix;
	sideArg.mRadius   = 75.0f;
	mSidePlatInstance = platMgr->addInstance(sideArg);

	mCapPlatInstance->setCollision(true);
	mSidePlatInstance->setCollision(true);
}

/**
 * @note Address: 0x801D217C
 * @note Size: 0x314
 * initDependency__Q34Game8ItemHole4ItemFv
 */
void Item::initDependency()
{
	bool result;
	Iterator<BaseItem> iter(ItemBarrel::mgr);
	CI_LOOP(iter)
	{
		BaseItem* item           = (*iter);
		ItemBarrel::Item* barrel = static_cast<ItemBarrel::Item*>(item);
		if (barrel->isAlive()) {
			Vector3f sep = barrel->getPosition() - getPosition();
			Vector2f sep2D(sep.x, sep.z);
			if (sep2D.length() < 40.0f) {
				mBarrel = barrel;
				return;
			}
		}
	}

	if (getStateID() == Hole_Normal) {
		efx::Arg arg(Vector3f::zero);
		arg.mPosition = mPosition;
		mEfxWarpZone->create(&arg);
	}
	mBarrel = nullptr;
}

/**
 * @note Address: 0x801D2490
 * @note Size: 0x68
 */
void Item::makeTrMatrix()
{
	Vector3f rot(0.0f, mFaceDir, 0.0f);
	Vector3f translation = mPosition;
	translation.y -= mBuryDepth;
	mBaseTrMatrix.makeTR(translation, rot);
}

/**
 * @note Address: 0x801D24F8
 * @note Size: 0x30
 */
bool Item::canRide() { return static_cast<State*>(getCurrState())->canRide(); }

/**
 * @note Address: 0x801D2530
 * @note Size: 0x14
 */
void Item::do_setLODParm(Game::AILODParm& parm)
{
	parm.mFar   = 0.075f;
	parm.mClose = 0.0425f;
}

/**
 * @note Address: 0x801D2544
 * @note Size: 0x8
 */
bool Item::sound_culling() { return false; }

/**
 * @note Address: 0x801D254C
 * @note Size: 0xE4
 */
void Item::doAI()
{
	mEfxWarpZone->setRateLOD(mLod.isFlag(AILOD_IsMid | AILOD_IsFar), true);
	CFSMItem::doAI();
	if (mBarrel) {
		if (!mBarrel->isAlive()) {
			mBarrel = nullptr;
			efx::Arg arg(Vector3f::zero);
			arg.mPosition = mPosition;
			mEfxWarpZone->create(&arg);
		}
	} else {
		if (getStateID() != Hole_Close) {
			PSPlayCaveHoleSound(mSoundObj);
		}
	}
}

/**
 * @note Address: 0x801D2630
 * @note Size: 0xBC
 */
void Item::doDirectDraw(Graphics& gfx)
{
	Matrixf v1;
	gfx.initPrimDraw(nullptr);
	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, v1.mMatrix.mtxView);

	Vector3f translation = v1.getTranslation();
	translation.y += 10.0f;
	v1.setTranslation(translation);

	GXSetLineWidth(40, GX_TO_ZERO);
	gfx.drawAxis(50.0f, &v1);
	gfx.initPrimDraw(nullptr);
	Vector3f infoPos(mPosition.x, mPosition.y + 40.0f, mPosition.z);

	drawLODInfo(gfx, infoPos);
}

/**
 * @note Address: 0x801D26EC
 * @note Size: 0x58
 */
CItemFSM* Item::createFSM() { return new FSM(); }

/**
 * @note Address: 0x801D2744
 * @note Size: 0x7C
 */
Mgr::Mgr()
    : TNodeItemMgr()
{
	mItemName = "Hole";
	setModelSize(1);
	mObjectPathComponent = "user/Kando/objects/dungeon_hole";
}

/**
 * @note Address: 0x801D27C0
 * @note Size: 0x100
 */
void Mgr::onLoadResources()
{
	loadArchive("arc.szs");
	loadBmd("dungeon_hole.bmd", 0, 0x20000);
	mModelData[0]->newSharedDisplayList(0x40000);
	mModelData[0]->makeSharedDL();
	JKRArchive* archive = openTextArc("texts.szs");
	mCapPlatform        = loadPlatform(archive, "cap_platform.bin");
	mSidePlatform       = loadPlatform(archive, "side_platform.bin");
	MapCode::Code code;
	code.setCode(MapCode::Code::Attribute1, MapCode::Code::SlipCode_Steep, true);
	mCapPlatform->setMapCodeAll(code);
	code.setCode(MapCode::Code::Attribute1, MapCode::Code::SlipCode_Gradual, true);
	mSidePlatform->setMapCodeAll(code);
	closeTextArc(archive);
}

/**
 * @note Address: 0x801D28C0
 * @note Size: 0xBC
 */
void Mgr::setup(Game::BaseItem* item)
{
	item->mModel = new SysShape::Model(getModelData(0), J3DMODEL_CreateNewDL, 2);
	item->mModel->mJ3dModel->calc();
	item->mModel->mJ3dModel->calcMaterial();
	item->mModel->mJ3dModel->makeDL();
	item->mModel->mJ3dModel->lock();
}

/**
 * @note Address: 0x801D297C
 * @note Size: 0x54
 */
BaseItem* Mgr::generatorBirth(Vector3f& position, Vector3f& p2, Game::GenItemParm* parm)
{
	BaseItem* item = birth();
	item->init(nullptr);
	item->setPosition(position, false);
	return item;
}
} // namespace ItemHole
} // namespace Game
