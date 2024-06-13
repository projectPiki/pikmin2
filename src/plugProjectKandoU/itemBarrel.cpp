#include "CollInfo.h"
#include "Game/GameSystem.h"
#include "Game/Entities/ItemBarrel.h"
#include "Game/Interaction.h"
#include "Game/MapMgr.h"
#include "Game/MoviePlayer.h"
#include "Game/itemMgr.h"
#include "efx/TBarrel.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "P2Macros.h"
#include "PSM/ObjBase.h"
#include "PSM/WorkItem.h"
#include "PSSystem/PSSystemIF.h"
#include "Sys/Sphere.h"
#include "SysShape/Model.h"
#include "nans.h"
#include "stream.h"

namespace Game {
namespace ItemBarrel {

static const int unusedBarrelArray[] = { 0, 0, 0 };
static const char unusedBarrelName[] = "itemBarrel";

Mgr* mgr;

/**
 * @note Address: 0x801F7970
 * @note Size: 0x134
 */
void FSM::init(Item*)
{
	create(BARREL_StateCount);
	registerState(new NormalState());
	registerState(new DamagedState());
	registerState(new DeadState());
}

/**
 * @note Address: 0x801F7AA4
 * @note Size: 0xC
 */
void NormalState::init(Item* item, StateArg* arg) { item->mAnimSpeed = 0.0f; }

/**
 * @note Address: 0x801F7AB0
 * @note Size: 0x4
 */
void NormalState::exec(Item*) { }

/**
 * @note Address: 0x801F7AB4
 * @note Size: 0x4
 */
void NormalState::cleanup(Item*) { }

/**
 * @note Address: 0x801F7AB8
 * @note Size: 0x64
 */
void NormalState::onDamage(Item* item, f32 damage)
{
	item->mStoredDamage += damage;
	item->mHealth -= item->mStoredDamage;
	item->mStoredDamage = 0.0f;
	if (item->mHealth < 0.0f) {
		transit(item, BARREL_Dead, nullptr);
	}
}

/**
 * @note Address: 0x801F7B4C
 * @note Size: 0x4
 */
void NormalState::onKeyEvent(Item*, SysShape::KeyEvent const&) { }

/**
 * @note Address: 0x801F7B50
 * @note Size: 0x170
 */
void DeadState::init(Item* item, StateArg* stateArg)
{
	item->mAnimator.startAnim(1, item);
	item->mAnimSpeed = 30.0f;
	item->setAlive(false);
	item->mSoundEvent.finish();
	P2ASSERTLINE(144, item->mSoundObj->getCastType() == PSM::CCT_WorkItem);
	static_cast<PSM::WorkItem*>(item->mSoundObj)->eventFinish();
	PSSystem::spSysIF->playSystemSe(PSSE_SY_WORK_FINISH, 0);
	item->startSound(PSSE_EN_ROCK_BREAK);

	efx::TBarrelDead deadFX;
	Vector3f pos = item->getPosition();
	efx::Arg fxArg(pos);

	deadFX.create(&fxArg);
}

/**
 * @note Address: 0x801F7CC0
 * @note Size: 0x4
 */
void DeadState::exec(Item*) { }

/**
 * @note Address: 0x801F7CC4
 * @note Size: 0x4
 */
void DeadState::cleanup(Item*) { }

/**
 * @note Address: 0x801F7CC8
 * @note Size: 0x4
 */
void DeadState::onDamage(Item*, f32) { }

/**
 * @note Address: 0x801F7CCC
 * @note Size: 0x148
 */
void DeadState::onKeyEvent(Item* item, SysShape::KeyEvent const& event)
{
	WaterBox* waterbox = mapMgr->findWater(item->mBoundingSphere);
	if (waterbox && gameSystem->isFlag(GAMESYS_IsGameWorldActive)) {
		MoviePlayArg movieArg("x12_drain_water", nullptr, nullptr, 0);
		movieArg.setTarget(item);
		moviePlayer->mTargetObject = item;
		moviePlayer->play(movieArg);
		item->mSoundObj->startSound(PSSE_EV_WATER_OUT, 0);
		waterbox->startDown(-100.0f);
	}
	item->mAnimSpeed = 0.0f;
	mgr->kill(item);
}

/**
 * @note Address: 0x801F7E14
 * @note Size: 0x4
 */
void DamagedState::init(Item*, StateArg*) { }

/**
 * @note Address: 0x801F7E18
 * @note Size: 0x4
 */
void DamagedState::exec(Item*) { }

/**
 * @note Address: 0x801F7E1C
 * @note Size: 0x4
 */
void DamagedState::cleanup(Item*) { }

/**
 * @note Address: 0x801F7E20
 * @note Size: 0x10
 */
void DamagedState::onDamage(Item* item, f32 damage) { item->mStoredDamage += damage; }

/**
 * @note Address: 0x801F7E30
 * @note Size: 0x4
 */
void DamagedState::onKeyEvent(Item*, SysShape::KeyEvent const&) { }

/**
 * @note Address: 0x801F7E34
 * @note Size: 0x44
 */
void Item::doSave(Stream& output) { output.writeByte(isAlive()); }

/**
 * @note Address: 0x801F7E78
 * @note Size: 0xBC
 */
void Item::doLoad(Stream& input)
{
	if (input.readByte() == 0) {
		mAnimator.startAnim(1, this);
		mAnimator.setLastFrame();
		setAlive(false);
		WaterBox* waterbox = mapMgr->findWater(mBoundingSphere);
		if (waterbox) {
			waterbox->startDown(-100.0f);
		}
		mAnimSpeed = 0.0f;
		mgr->kill(this);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
Item::Item()
    : WorkItem(OBJTYPE_Barrel)
{
	mMass = 0.0f;
}

/**
 * @note Address: 0x801F7F34
 * @note Size: 0x48
 */
void Item::constructor() { mSoundObj = new PSM::WorkItem(this); }

/**
 * @note Address: 0x801F7F7C
 * @note Size: 0x140
 */
void Item::onInit(CreatureInitArg*)
{
	mModel = new SysShape::Model(mgr->getModelData(0), J3DMODEL_CreateNewDL, 2);
	mModel->mJ3dModel->calc();
	mModel->mJ3dModel->calcMaterial();
	mModel->mJ3dModel->makeDL();
	mModel->mJ3dModel->lock();
	mFsm->start(this, BARREL_Normal, nullptr);
	setAlive(true);
	createBarrel();
	mAnimSpeed         = 0.0f;
	mAnimator.mAnimMgr = mgr->mAnimMgr;
	mAnimator.startAnim(1, this);
	mCollTree->createFromFactory(mModel, mgr->mCollPartFactory, nullptr);
	mStoredDamage = 0.0f;
}

/**
 * @note Address: 0x801F80F0
 * @note Size: 0x4C
 */
void Item::onSetPosition()
{
	makeTrMatrix();
	updateBoundSphere();
}

/**
 * @note Address: 0x801F813C
 * @note Size: 0x48
 */
void Item::updateBoundSphere()
{
	f32 radius                = getWorkRadius();
	mBoundingSphere.mPosition = mPosition;
	mBoundingSphere.mRadius   = radius;
}

/**
 * @note Address: 0x801F8184
 * @note Size: 0xC4
 */
void Item::doAI()
{
	mFsm->exec(this);
	updateCollTree();
	CollPart* part = mCollTree->mPart;
	part->mRadius  = getWorkRadius();
	switch (mSoundEvent.update()) {
	case TSE_ApplyTransition:
		P2ASSERTLINE(298, mSoundObj->getCastType() == PSM::CCT_WorkItem);
		static_cast<PSM::WorkItem*>(mSoundObj)->eventStop();
	}
}

/**
 * @note Address: 0x801F8248
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
 * @note Address: 0x801F835C
 * @note Size: 0x58
 */
f32 Item::getWorkRadius()
{
	Sys::Sphere bounds;
	if (isAlive()) {
		mCollTree->getBoundingSphere(bounds);
		return bounds.mRadius;
	} else {
		return 0.0f;
	}
}

/**
 * @note Address: 0x801F83B4
 * @note Size: 0xC4
 */
f32 Item::getWorkDistance(Sys::Sphere& sphere)
{
	Vector3f sep = mPosition - sphere.mPosition;
	f32 dist     = sep.length();
	return dist - getWorkRadius();
}

/**
 * @note Address: 0x801F8478
 * @note Size: 0x24
 */
void Item::createBarrel()
{
	mHealth       = mgr->mParms->mBarrelParms.mHealth.mValue;
	mBackupHealth = mHealth;
	mStoredDamage = 0.0f;
}

/**
 * @note Address: 0x801F849C
 * @note Size: 0x148
 */
bool Item::interactAttack(InteractAttack& interaction)
{
	if (interaction.mCreature->isNavi()) {
		return false;
	}
	if (mCurrentState) {
		mCurrentState->onDamage(this, interaction.mDamage);
		switch (mSoundEvent.event()) {
		case 1:
			P2ASSERTLINE(361, mSoundObj->getCastType() == PSM::CCT_WorkItem);
			static_cast<PSM::WorkItem*>(mSoundObj)->eventStart();
			break;
		case 2:
			break;
		case 3:
			P2ASSERTLINE(368, mSoundObj->getCastType() == PSM::CCT_WorkItem);
			static_cast<PSM::WorkItem*>(mSoundObj)->eventRestart();
			break;
		}
	}
	return true;
}

/**
 * @note Address: 0x801F85E8
 * @note Size: 0x120
 * __ct__Q34Game10ItemBarrel3MgrFv
 */
Mgr::Mgr()
    : TNodeItemMgr()
{
	mItemName = "Barrel";
	setModelSize(1);
	mObjectPathComponent = "user/Kando/objects/barrel";
	mParms               = new BarrelParms();

	void* resource = JKRDvdRipper::loadToMainRAM("user/Abe/item/barrelParms.txt", nullptr, Switch_0, 0, nullptr,
	                                             JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);
	if (resource) {
		RamStream stream(resource, -1);
		stream.setMode(STREAM_MODE_TEXT, true);
		mParms->read(stream);
		delete[] resource;
	}
}

/**
 * @note Address: 0x801F8918
 * @note Size: 0x108
 * birth__Q34Game10ItemBarrel3MgrFv
 */
BaseItem* Mgr::birth()
{
	Item* item = new Item();
	entry(item);
	return item;
}

/**
 * @note Address: 0x801F8A20
 * @note Size: 0x60
 * generatorBirth__Q34Game10ItemBarrel3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm
 */
BaseItem* Mgr::generatorBirth(Vector3f& position, Vector3f& p2, GenItemParm* parm)
{
	Item* item = static_cast<Item*>(birth());
	item->init(nullptr);
	item->setPosition(position, false);
	return item;
}

/**
 * @note Address: 0x801F8A80
 * @note Size: 0xB8
 */
void Mgr::onLoadResources()
{
	loadArchive("arc.szs");
	loadBmd("model.bmd", 0, 0x20000);
	mModelData[0]->newSharedDisplayList(0x40000);
	mModelData[0]->makeSharedDL();
	JKRArchive* arc = openTextArc("texts.szs");
	loadAnimMgr(arc, "animMgr.txt");
	loadCollision(arc, "coll.txt");
	closeTextArc(arc);
}

} // namespace ItemBarrel
} // namespace Game
