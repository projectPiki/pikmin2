#include "CollInfo.h"
#include "math.h"
#include "Dolphin/rand.h"
#include "Game/Entities/ItemWeed.h"
#include "Game/Entities/ItemHoney.h"
#include "JSystem/J3D/J3DTransform.h"
#include "JSystem/JMath.h"
#include "efx/TPk.h"
#include "P2Macros.h"
#include "nans.h"

static const int padding[]    = { 0, 0, 0 };
static const char className[] = "itemWeed";

#define WEED_NECTAR_CHANCE (0.08f)
#define WEED_MAX_ATTACKERS (5)

namespace Game {
namespace ItemWeed {

Mgr* mgr;
/**
 * @note Address: 0x8020F280
 * @note Size: 0x38
 */
Weed::Weed()
{
	(Vector3f)(*this) = Vector3f(0.0f);
	mFlockMgr         = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void Weed::init(WeedMgr* mgr, Vector3f& vec)
{
	mFlockMgr = mgr;
	mScale    = Vector3f(1.0f);
	setPosition(vec);
}

/**
 * @note Address: 0x8020F2B8
 * @note Size: 0x8
 */
bool Weed::damaged(f32) { return true; }

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
void Weed::setPosition(Vector3f& vec)
{
	(Vector3f)(*this) = vec;
	makeMatrix();
}

/**
 * @note Address: 0x8020F2C0
 * @note Size: 0xAC
 */
void Weed::makeMatrix()
{
	Vector3f rot(0.0f, randFloat() * TAU, 0.0f);
	Vector3f scale = mScale;
	Vector3f translation(*this);
	mTransformationMtx.makeSRT(scale, rot, translation);
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void Weed::update() { }

/**
 * @note Address: N/A
 * @note Size: 0xE8
 */
WeedMgr::WeedMgr(int count)
{
	mMonoObjectMgr.alloc(count);
	mMaxAttackers = WEED_MAX_ATTACKERS;
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
void WeedMgr::init(Sys::Sphere& sphere, cWeedType weedType)
{
	mActivationSpherePosition.mPosition = sphere.mPosition;
	mActivationSpherePosition.mRadius   = sphere.mRadius;

	createWeeds(weedType);
	resolveCollision(60.0f);
}

/**
 * @note Address: N/A
 * @note Size: 0x22C
 */
void WeedMgr::createWeeds(cWeedType weedType)
{
	Weed* weed;
	for (int i = 0; i < getMaxObjects(); i++) {
		weed = mMonoObjectMgr.birth();
		if (weed) {
			if (weedType == WEEDTYPE_Grass) {
				weed->mModelIdx = 0;
			} else {
				weed->mModelIdx = (int)(randFloat() * 3.0f) + 1; // random between 1 and 4
			}
			f32 randRadius = mActivationSpherePosition.mRadius * randFloat();
			f32 randTheta  = randFloat() * TAU;
			Vector3f weedPos(randRadius * sinf(randTheta), 0.0f, randRadius * cosf(randTheta));
			weedPos += mActivationSpherePosition.mPosition;
			weed->init(this, weedPos);
		}
	}
}

/**
 * @note Address: 0x8020F584
 * @note Size: 0x4
 */
void WeedMgr::do_update_boundSphere() { }

/**
 * @note Address: 0x8020F588
 * @note Size: 0x18
 */
void WeedMgr::do_update()
{
	if (mIsAgentVisible[0] != false) {
		return;
	}
	if (mIsAgentVisible[1] != false) {
		return;
	}
	return;
}

/**
 * @note Address: 0x8020F5A0
 * @note Size: 0x84
 */
void FSM::init(Item* item)
{
	create(WEED_StateCount);
	registerState(new WaitState);
}

/**
 * @note Address: N/A
 * @note Size: 0x13C
 */
Item::Item()
    : FSMItem(OBJTYPE_Weed)
{
	mCollTree               = new CollTree;
	mBoundingSphere.mRadius = 75.0f;
	mDummyShape.mMatrix     = &mBaseTrMatrix;
	mCollTree->createSingleSphere(&mDummyShape, 0, mBoundingSphere, nullptr);
	setCollisionFlick(false);
	mWeedType = WEEDTYPE_Stone;
}

/**
 * @note Address: 0x8020F624
 * @note Size: 0x15C
 */
void Item::onInit(CreatureInitArg* initArg)
{
	mFsm->start(this, WEED_Wait, nullptr);
	setAlive(true);
	InitArg* itemInitArg = static_cast<InitArg*>(initArg);
	P2ASSERTLINE(194, itemInitArg);
	int count = itemInitArg->mCount;
	mWeedType = itemInitArg->mWeedType;
	mFlockMgr = new WeedMgr(count);
	setCollisionFlick(false);
}

/**
 * @note Address: 0x8020F7B4
 * @note Size: 0x268
 */
void Item::onSetPosition()
{
	mBaseTrMatrix.makeT(mPosition);
	f32 radius = mBoundingSphere.mRadius;
	Sys::Sphere sphere(mPosition, radius);
	mFlockMgr->init(sphere, mWeedType);
}

/**
 * @note Address: 0x8020FA1C
 * @note Size: 0x3C
 */
bool Item::ignoreAtari(Creature* other) { return !other->isPiki(); }

/**
 * @note Address: 0x8020FA58
 * @note Size: 0x78
 */
void Item::updateBoundSphere()
{
	mCollTree->mPart->mRadius = mBoundingSphere.mRadius;
	mBoundingSphere.mPosition = mPosition;
	JUT_ASSERTLINE(225, isCollisionFlick() == false, "ダメック\n"); // 'damek'
}

/**
 * @note Address: 0x8020FAD0
 * @note Size: 0x2E0
 */
bool Item::interactFlockAttack(InteractFlockAttack& attack)
{
	TFlock* flock         = mFlockMgr->getValidFlock(attack.mFlockIdx);
	Vector3f flockPos     = Vector3f(*flock);
	attack.mFlockPosition = flockPos;
	int res               = mFlockMgr->attackFlock(attack.mFlockIdx, attack.mDamage);
	if (res == 1) { // just killed flock
		if (attack.mCreature->isPiki() && mWeedType == WEEDTYPE_Stone) {
			efx::createSimpleStoneAttack(flockPos);
		}

		if (randFloat() > (1.0f - WEED_NECTAR_CHANCE)) {
			ItemHoney::Item* nectar = ItemHoney::mgr->birth();
			if (nectar) {
				ItemHoney::InitArg nectarArg(HONEY_Y, false);
				nectar->init(&nectarArg);
				Vector3f nectarPos = flockPos;
				nectarPos.y += 10.0f;
				f32 angle    = 2 * (PI * randFloat());
				Vector3f vel = Vector3f(30.0f * sinf(angle), 200.0f, 30.0f * cosf(angle));
				nectar->setPosition(nectarPos, false);
				nectar->setVelocity(vel);
			}
		}
	}

	attack.mIsFlockDead = res != 0; // flock dead = 1, flock alive = 0
	mFlockMgr->getFlock(attack.mFlockIdx);
	return true;
}

/**
 * @note Address: 0x8020FDEC
 * @note Size: 0x84
 */
void Item::doAI()
{
	mFsm->exec(this);
	updateCollTree();
	mFlockMgr->update();
	if (mFlockMgr->getNumObjects() == 0) {
		setAlive(false);
	}
}

/**
 * @note Address: 0x8020FE78
 * @note Size: 0x3C
 */
void Item::doSimpleDraw(Viewport* viewport) { mFlockMgr->doSimpleDraw(viewport, mgr->mModelData, mgr->mModelDataMax); }

/**
 * @note Address: 0x8020FEB4
 * @note Size: 0x13C
 */
Mgr::Mgr()
{
	mItemName            = "草と小石";
	mObjectPathComponent = "user/Kando/objects/weed";
	setModelSize(4);
	loadArchive("arc.szs");
	loadBmd("weed1.bmd", 0, 0x20000);
	loadBmd("stone1.bmd", 1, 0x20000);
	loadBmd("stone2.bmd", 2, 0x20000);
	loadBmd("stone3.bmd", 3, 0x20000);
	for (int i = 0; i < 4; i++) {
		J3DModelData* modelData = getModelData(i);
		modelData->newSharedDisplayList(0x40000);
		modelData->simpleCalcMaterial(0, *(Mtx*)&j3dDefaultMtx);
		modelData->makeSharedDL();
	}
}

/**
 * @note Address: 0x8020FFF0
 * @note Size: 0x200
 */
void Mgr::doSimpleDraw(Viewport* viewport)
{
	Iterator<BaseItem> iter(this);
	CI_LOOP(iter) { static_cast<Item*>(*iter)->doSimpleDraw(viewport); }
}

/**
 * @note Address: 0x802101F0
 * @note Size: 0x4
 */
void Mgr::onLoadResources() { }

/**
 * @note Address: N/A
 * @note Size: 0x160
 */
Item* Mgr::birth()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x802101F4
 * @note Size: 0x8
 */
char* Mgr::getCaveName(int) { return "weed"; }

/**
 * @note Address: 0x802101FC
 * @note Size: 0x4C
 */
int Mgr::getCaveID(char* name)
{
	if (strncmp("weed", name, strlen("weed")) != 0) {
		return -1;
	}

	return 0;
}

/**
 * @note Address: 0x80210248
 * @note Size: 0x4
 */
void WaitState::init(Item*, StateArg*) { }

/**
 * @note Address: 0x8021024C
 * @note Size: 0x4
 */
void WaitState::exec(Item*) { }

/**
 * @note Address: 0x80210250
 * @note Size: 0x4
 */
void WaitState::cleanup(Item*) { }

/**
 * @note Address: 0x80210254
 * @note Size: 0x54
 */
GenItemParm* Mgr::generatorNewItemParm() { return new GenWeedParm; }

/**
 * @note Address: 0x802102A8
 * @note Size: 0xB0
 */
void Mgr::generatorWrite(Stream& output, GenItemParm* genItemParm)
{
	GenWeedParm* genWeedParm = static_cast<GenWeedParm*>(genItemParm);
	P2ASSERTLINE(460, genWeedParm != nullptr);
	output.textWriteTab(output.mTabCount);
	output.writeShort(genWeedParm->mCount);
	output.textWriteText("\t#うじゃ王数\r\n"); // 'uja-o number'
	output.textWriteTab(output.mTabCount);
	output.writeShort(genWeedParm->mWeedType);
	output.textWriteText("\t#石か草か\r\n"); // 'stone or grass'
}

/**
 * @note Address: 0x80210358
 * @note Size: 0x8C
 */
void Mgr::generatorRead(Stream& input, GenItemParm* genItemParm, u32 version)
{
	GenWeedParm* genWeedParm = static_cast<GenWeedParm*>(genItemParm);
	P2ASSERTLINE(474, genWeedParm != nullptr);
	genWeedParm->mCount = input.readShort();
	if ('0001' <= version) {
		genWeedParm->mWeedType = input.readShort();
	}
}

/**
 * @note Address: 0x802103E4
 * @note Size: 0x1DC
 */
BaseItem* Mgr::generatorBirth(Vector3f& position, Vector3f& p2, GenItemParm* genItemParm)
{
	GenWeedParm* genWeedParm = static_cast<GenWeedParm*>(genItemParm);
	P2ASSERTLINE(484, genWeedParm);
	Item* item = new Item;
	entry(item);
	InitArg initArg(genWeedParm->mCount, (cWeedType)genWeedParm->mWeedType);
	item->init(&initArg);
	item->setPosition(position, false);
	return item;
}

} // namespace ItemWeed
} // namespace Game
