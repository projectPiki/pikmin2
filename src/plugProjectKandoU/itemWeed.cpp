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
	for (int i = 0; i < getMaxObjects(); i++) {
		Weed* weed = mMonoObjectMgr.birth();
		if (weed) {
			if (weedType == WEEDTYPE_Grass) {
				weed->_40 = 0;
			} else {
				weed->_40 = (int)(randFloat() * 3.0f) + 1;
			}
			f32 randRadius = mActivationSpherePosition.mRadius * randFloat();
			f32 randTheta  = randFloat() * TAU;
			Vector3f weedPos
			    = Vector3f(randRadius * sinf(randTheta), 0.0f, randRadius * cosf(randTheta)) + mActivationSpherePosition.mPosition;
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
	Sys::Sphere sphere(mPosition, mBoundingSphere.mRadius);
	mFlockMgr->init(sphere, mWeedType);
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	stw      r28, 0x30(r1)
	mr       r28, r3
	addi     r3, r28, 0x138
	addi     r4, r28, 0x19c
	bl       "makeT__7MatrixfFR10Vector3<f>"
	lfs      f3, 0x1d0(r28)
	li       r29, 0
	lfs      f1, 0x1a0(r28)
	lfs      f2, 0x1a4(r28)
	lwz      r30, 0x1ec(r28)
	lwz      r31, 0x1e8(r28)
	lfs      f0, 0x19c(r28)
	stfs     f0, 0xc(r31)
	stfs     f1, 0x10(r31)
	stfs     f2, 0x14(r31)
	stfs     f3, 0x18(r31)
	b        lbl_8020F9CC

lbl_8020F818:
	addi     r3, r31, 0x3c
	lwz      r12, 0x3c(r31)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r28, r3, r3
	beq      lbl_8020F9C8
	cmpwi    r30, 1
	bne      lbl_8020F848
	li       r0, 0
	stb      r0, 0x40(r28)
	b        lbl_8020F88C

lbl_8020F848:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_80519F08@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_80519F00@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_80519F14@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r3, 0x14(r1)
	addi     r0, r3, 1
	stb      r0, 0x40(r28)

lbl_8020F88C:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_80519F08@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f1, lbl_80519F00@sda21(r2)
	lfd      f2, 0x10(r1)
	lfs      f0, 0x18(r31)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f31, f0, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_80519F08@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_80519F00@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_80519F04@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80519EF8@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f3, f1, f2
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_8020F900
	fneg     f1, f3

lbl_8020F900:
	lfs      f2, lbl_80519F18@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80519EF8@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f4, f31, f0
	bge      lbl_8020F95C
	lfs      f0, lbl_80519F1C@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_8020F974

lbl_8020F95C:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_8020F974:
	lfs      f0, 0x14(r31)
	fmuls    f3, f31, f1
	lfs      f2, 0xc(r31)
	mr       r3, r28
	lfs      f1, 0x10(r31)
	fadds    f4, f4, f0
	lfs      f0, lbl_80519EFC@sda21(r2)
	stw      r31, 0x50(r28)
	fadds    f3, f3, f2
	lfs      f2, lbl_80519EF8@sda21(r2)
	stfs     f0, 0x44(r28)
	fadds    f2, f2, f1
	stfs     f0, 0x48(r28)
	stfs     f0, 0x4c(r28)
	stfs     f3, 0(r28)
	stfs     f2, 4(r28)
	stfs     f4, 8(r28)
	lwz      r12, 0xc(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8020F9C8:
	addi     r29, r29, 1

lbl_8020F9CC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpw     r29, r3
	blt      lbl_8020F818
	lfs      f1, lbl_80519F10@sda21(r2)
	mr       r3, r31
	bl       resolveCollision__Q24Game12BaseFlockMgrFf
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
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
	JUT_ASSERTLINE(225, isCollisionFlick() == false, "É_ÉÅÉbÉN\n"); // 'damek'
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
	mItemName            = "ëêÇ∆è¨êŒ";
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
	output.textWriteText("\t#Ç§Ç∂Ç·â§êî\r\n"); // 'uja-o number'
	output.textWriteTab(output.mTabCount);
	output.writeShort(genWeedParm->mWeedType);
	output.textWriteText("\t#êŒÇ©ëêÇ©\r\n"); // 'stone or grass'
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

/**
 * @note Address: 0x802105CC
 * @note Size: 0x134
 */
Mgr::~Mgr() { }

/**
 * @note Address: 0x80210700
 * @note Size: 0x148
 */
BaseItem* Mgr::doNew() { return new Item; }

/**
 * @note Address: 0x80210848
 * @note Size: 0xC
 */
u32 Mgr::generatorGetID() { return 'weed'; }

/**
 * @note Address: 0x80210854
 * @note Size: 0xC
 */
u32 Mgr::generatorLocalVersion() { return '0001'; }

/**
 * @note Address: 0x80210860
 * @note Size: 0x8
 */
char* Item::getCreatureName() { return "Weed"; }

/**
 * @note Address: 0x80210868
 * @note Size: 0x8
 */
BaseFlockMgr* Item::getFlockMgr() { return mFlockMgr; }

/**
 * @note Address: 0x80210870
 * @note Size: 0x4
 */
void Item::makeTrMatrix() { }

/**
 * @note Address: 0x80210874
 * @note Size: 0x8
 */
Matrixf* Item::DummyShape::getMatrix(int) { return mMatrix; }

/**
 * @note Address: 0x802108B0
 * @note Size: 0x118
 */
WeedMgr::~WeedMgr() { }

} // namespace ItemWeed
} // namespace Game
