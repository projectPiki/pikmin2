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

/*
 * --INFO--
 * Address:	801F7970
 * Size:	000134
 */
void FSM::init(Item*)
{
	create(BARREL_StateCount);
	registerState(new NormalState());
	registerState(new DamagedState());
	registerState(new DeadState());
}

/*
 * --INFO--
 * Address:	801F7AA4
 * Size:	00000C
 */
void NormalState::init(Item* item, StateArg* arg) { item->mAnimSpeed = 0.0f; }

/*
 * --INFO--
 * Address:	801F7AB0
 * Size:	000004
 */
void NormalState::exec(Item*) { }

/*
 * --INFO--
 * Address:	801F7AB4
 * Size:	000004
 */
void NormalState::cleanup(Item*) { }

/*
 * --INFO--
 * Address:	801F7AB8
 * Size:	000064
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

/*
 * --INFO--
 * Address:	801F7B4C
 * Size:	000004
 */
void NormalState::onKeyEvent(Item*, SysShape::KeyEvent const&) { }

/*
 * --INFO--
 * Address:	801F7B50
 * Size:	000170
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

/*
 * --INFO--
 * Address:	801F7CC0
 * Size:	000004
 */
void DeadState::exec(Item*) { }

/*
 * --INFO--
 * Address:	801F7CC4
 * Size:	000004
 */
void DeadState::cleanup(Item*) { }

/*
 * --INFO--
 * Address:	801F7CC8
 * Size:	000004
 */
void DeadState::onDamage(Item*, f32) { }

/*
 * --INFO--
 * Address:	801F7CCC
 * Size:	000148
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

/*
 * --INFO--
 * Address:	801F7E14
 * Size:	000004
 */
void DamagedState::init(Item*, StateArg*) { }

/*
 * --INFO--
 * Address:	801F7E18
 * Size:	000004
 */
void DamagedState::exec(Item*) { }

/*
 * --INFO--
 * Address:	801F7E1C
 * Size:	000004
 */
void DamagedState::cleanup(Item*) { }

/*
 * --INFO--
 * Address:	801F7E20
 * Size:	000010
 */
void DamagedState::onDamage(Item* item, f32 damage) { item->mStoredDamage += damage; }

/*
 * --INFO--
 * Address:	801F7E30
 * Size:	000004
 */
void DamagedState::onKeyEvent(Item*, SysShape::KeyEvent const&) { }

/*
 * --INFO--
 * Address:	801F7E34
 * Size:	000044
 */
void Item::doSave(Stream& output) { output.writeByte(isAlive()); }

/*
 * --INFO--
 * Address:	801F7E78
 * Size:	0000BC
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

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
Item::Item()
    : WorkItem(OBJTYPE_Barrel)
{
	mMass = 0.0f;
}

/*
 * --INFO--
 * Address:	801F7F34
 * Size:	000048
 */
void Item::constructor() { mSoundObj = new PSM::WorkItem(this); }

/*
 * --INFO--
 * Address:	801F7F7C
 * Size:	000140
 */
void Item::onInit(CreatureInitArg*)
{
	mModel = new SysShape::Model(mgr->getModelData(0), 0x20000, 2);
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

/*
 * --INFO--
 * Address:	801F80F0
 * Size:	00004C
 */
void Item::onSetPosition()
{
	makeTrMatrix();
	updateBoundSphere();
}

/*
 * --INFO--
 * Address:	801F813C
 * Size:	000048
 */
void Item::updateBoundSphere()
{
	f32 radius                = getWorkRadius();
	mBoundingSphere.mPosition = mPosition;
	mBoundingSphere.mRadius   = radius;
}

/*
 * --INFO--
 * Address:	801F8184
 * Size:	0000C4
 */
void Item::doAI()
{
	mFsm->exec(this);
	updateCollTree();
	CollPart* part = mCollTree->mPart;
	part->mRadius  = getWorkRadius();
	switch (mSoundEvent.update()) {
	case 2:
		P2ASSERTLINE(298, mSoundObj->getCastType() == PSM::CCT_WorkItem);
		static_cast<PSM::WorkItem*>(mSoundObj)->eventStop();
	}
}

/*
 * --INFO--
 * Address:	801F8248
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
 * Address:	801F835C
 * Size:	000058
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

/*
 * --INFO--
 * Address:	801F83B4
 * Size:	0000C4
 */
f32 Item::getWorkDistance(Sys::Sphere& sphere)
{
	Vector3f sep = mPosition - sphere.mPosition;
	f32 dist     = sep.length();
	return dist - getWorkRadius();
}

/*
 * --INFO--
 * Address:	801F8478
 * Size:	000024
 */
void Item::createBarrel()
{
	mHealth       = mgr->mParms->mBarrelParms.mHealth.mValue;
	mBackupHealth = mHealth;
	mStoredDamage = 0.0f;
}

/*
 * --INFO--
 * Address:	801F849C
 * Size:	000148
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

/*
 * --INFO--
 * Address:	801F85E8
 * Size:	000120
 * __ct__Q34Game10ItemBarrel3MgrFv
 */
Mgr::Mgr()
    : TNodeItemMgr()
{
	mItemName = "Barrel";
	setModelSize(1);
	mObjectPathComponent = "user/Kando/objects/barrel";
	mParms               = new BarrelParms();
	void* resource       = JKRDvdRipper::loadToMainRAM("user/Abe/item/barrelParms.txt", nullptr, Switch_0, 0, nullptr,
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
 * Address:	801F8918
 * Size:	000108
 * birth__Q34Game10ItemBarrel3MgrFv
 */
BaseItem* Mgr::birth()
{
	Item* item = new Item();
	entry(item);
	return item;
}

/*
 * --INFO--
 * Address:	801F8A20
 * Size:	000060
 * generatorBirth__Q34Game10ItemBarrel3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm
 */
BaseItem* Mgr::generatorBirth(Vector3f& position, Vector3f& p2, GenItemParm* parm)
{
	Item* item = static_cast<Item*>(birth());
	item->init(nullptr);
	item->setPosition(position, false);
	return item;
}

/*
 * --INFO--
 * Address:	801F8A80
 * Size:	0000B8
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
