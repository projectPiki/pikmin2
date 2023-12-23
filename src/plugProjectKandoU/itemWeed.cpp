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

#define WEED_NECTAR_CHANCE (0.08f)
#define WEED_MAX_ATTACKERS (5)

namespace Game {
namespace ItemWeed {
static const int unusedArray[]     = { 0, 0, 0 };
static const char unusedWeedName[] = "itemWeed";

Mgr* mgr;
/**
 * @note Address: 0x8020F280
 * @note Size: 0x38
 */
Weed::Weed()
    : TFlock()
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
    : TFlockMgr()
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
	mActivationSpherePosition = sphere;
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
			weed->_40 = (weedType == WEEDTYPE_Grass) ? 0 : (int)(randFloat() * 3.0f) + 1;
			// if (weedType == 1) {
			// 	weed->_40 = 0;
			// } else {
			// 	weed->_40 = (int)(randFloat() * 3.0f) + 1;
			// }
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
	registerState(new WaitState());
}

/**
 * @note Address: N/A
 * @note Size: 0x13C
 */
Item::Item()
    : FSMItem(OBJTYPE_Weed)
    , mDummyShape()
{
	mCollTree               = new CollTree();
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
	mFlockMgr->init(sphere, (cWeedType)mWeedType);
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
				ItemHoney::InitArg nectarArg(0, 0);
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
    : TNodeItemMgr()
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
		modelData->simpleCalcMaterial(0, j3dDefaultMtx);
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
GenItemParm* Mgr::generatorNewItemParm() { return new GenWeedParm(); }

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
	Item* item = new Item();
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
BaseItem* Mgr::doNew()
{
	return new Item();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0x1f0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80210830
	li       r4, 0x412
	bl       __ct__Q24Game8BaseItemFi
	lis      r3,
"__vt__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>"@ha
	li       r0, 0
	addi     r4, r3,
"__vt__Q24Game74FSMItem<Q34Game8ItemWeed4Item,Q34Game8ItemWeed3FSM,Q34Game8ItemWeed5State>"@l
	li       r3, 0x1c
	stw      r4, 0(r31)
	addi     r4, r4, 0x1b0
	stw      r4, 0x178(r31)
	stw      r0, 0x1d8(r31)
	stw      r0, 0x1dc(r31)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80210784
	lis      r4, "__vt__Q24Game35StateMachine<Q34Game8ItemWeed4Item>"@ha
	lis      r5, "__vt__Q24Game30ItemFSM<Q34Game8ItemWeed4Item>"@ha
	addi     r0, r4, "__vt__Q24Game35StateMachine<Q34Game8ItemWeed4Item>"@l
	lis      r4, __vt__Q34Game8ItemWeed3FSM@ha
	stw      r0, 0(r3)
	li       r6, -1
	addi     r5, r5, "__vt__Q24Game30ItemFSM<Q34Game8ItemWeed4Item>"@l
	addi     r0, r4, __vt__Q34Game8ItemWeed3FSM@l
	stw      r6, 0x18(r3)
	stw      r5, 0(r3)
	stw      r0, 0(r3)

lbl_80210784:
	stw      r3, 0x1d8(r31)
	mr       r4, r31
	lwz      r3, 0x1d8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r3, __vt__Q34Game8ItemWeed4Item@ha
	lis      r4, __vt__Q28SysShape9MtxObject@ha
	addi     r5, r3, __vt__Q34Game8ItemWeed4Item@l
	lis      r3, __vt__Q44Game8ItemWeed4Item10DummyShape@ha
	stw      r5, 0(r31)
	addi     r5, r5, 0x1b0
	addi     r4, r4, __vt__Q28SysShape9MtxObject@l
	addi     r0, r3, __vt__Q44Game8ItemWeed4Item10DummyShape@l
	stw      r5, 0x178(r31)
	li       r3, 8
	stw      r4, 0x1e0(r31)
	stw      r0, 0x1e0(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802107E4
	bl       __ct__8CollTreeFv
	mr       r0, r3

lbl_802107E4:
	stw      r0, 0x114(r31)
	addi     r0, r31, 0x138
	lfs      f0, lbl_80519F20@sda21(r2)
	addi     r4, r31, 0x1e0
	addi     r6, r31, 0x1c4
	li       r5, 0
	stfs     f0, 0x1d0(r31)
	li       r7, 0
	stw      r0, 0x1e4(r31)
	lwz      r3, 0x114(r31)
	bl
createSingleSphere__8CollTreeFPQ28SysShape9MtxObjectiRQ23Sys6SphereP11CollPartMgr
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xb4(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x1ec(r31)

lbl_80210830:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

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
char* Item::getCreatureName()
{
	return "Weed";
	/*
	addi     r3, r2, lbl_80519F4C@sda21
	blr
	*/
}

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
 * @note Address: 0x8021087C
 * @note Size: 0x34
 */
// void doAI__Q24Game74FSMItem<Item, FSM, State> Fv()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r4, r3
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x1D8(r3)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/**
 * @note Address: 0x802108B0
 * @note Size: 0x118
 */
WeedMgr::~WeedMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802109AC
	lis      r3, __vt__Q34Game8ItemWeed7WeedMgr@ha
	addi     r3, r3, __vt__Q34Game8ItemWeed7WeedMgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x30
	stw      r0, 0x20(r30)
	beq      lbl_8021099C
	lis      r3, "__vt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>"@ha
	addic.   r0, r30, 0x3c
	addi     r3, r3, "__vt__Q24Game32TFlockMgr<Q34Game8ItemWeed4Weed>"@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x30
	stw      r0, 0x20(r30)
	beq      lbl_80210968
	lis      r3, "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"@ha
	addic.   r0, r30, 0x3c
	addi     r3, r3, "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"@l
	stw      r3, 0x3c(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x58(r30)
	beq      lbl_80210968
	lis      r3, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@ha
	addic.   r0, r30, 0x3c
	addi     r3, r3, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@l
	stw      r3, 0x3c(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x58(r30)
	beq      lbl_80210968
	lis      r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
	addic.   r0, r30, 0x3c
	addi     r0, r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
	stw      r0, 0x3c(r30)
	beq      lbl_80210968
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x3c
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x3c(r30)
	bl       __dt__5CNodeFv

lbl_80210968:
	addic.   r0, r30, 0x20
	beq      lbl_8021099C
	lis      r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
	addic.   r0, r30, 0x20
	addi     r0, r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
	stw      r0, 0x20(r30)
	beq      lbl_8021099C
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x20
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x20(r30)
	bl       __dt__5CNodeFv

lbl_8021099C:
	extsh.   r0, r31
	ble      lbl_802109AC
	mr       r3, r30
	bl       __dl__FPv

lbl_802109AC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x802109C8
 * @note Size: 0x88
 */
// void ObjectMgr<Weed>::~ObjectMgr()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_80210A34
// 	lis      r4, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@ha
// 	addi     r4, r4, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@l
// 	stw      r4, 0(r30)
// 	addi     r0, r4, 0x2c
// 	stw      r0, 0x1c(r30)
// 	beq      lbl_80210A24
// 	lis      r4, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
// 	addi     r0, r4, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
// 	stw      r0, 0(r30)
// 	beq      lbl_80210A24
// 	lis      r5, __vt__16GenericContainer@ha
// 	li       r4, 0
// 	addi     r0, r5, __vt__16GenericContainer@l
// 	stw      r0, 0(r30)
// 	bl       __dt__5CNodeFv

// lbl_80210A24:
// 	extsh.   r0, r31
// 	ble      lbl_80210A34
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_80210A34:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210A50
 * @note Size: 0x10
 */
bool Weed::isWeed() { return _40 == 0; }

/**
 * @note Address: 0x80210A60
 * @note Size: 0x2C
 */
// void getNext__Q24Game32TFlockMgr<Weed> FPv()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwzu     r12, 0x3c(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210A8C
 * @note Size: 0x2C
 */
// void getStart__Q24Game32TFlockMgr<Weed> Fv()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwzu     r12, 0x3c(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210AB8
 * @note Size: 0x24
 */
// void killFlock__Q24Game32TFlockMgr<Weed> FPQ24Game6TFlock()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	addi     r3, r3, 0x3c
// 	stw      r0, 0x14(r1)
// 	bl "kill__36MonoObjectMgr<Q34Game8ItemWeed4Weed>FPQ34Game8ItemWeed4Weed" lwz
// 	r0, 0x14(r1) mtlr     r0 addi     r1, r1, 0x10 blr
// 	*/
// }

/**
 * @note Address: 0x80210ADC
 * @note Size: 0x4
 */
// void onDamage__Q24Game32ItemState<Item> FPQ34Game8ItemWeed4Itemf() { }

/**
 * @note Address: 0x80210AE0
 * @note Size: 0x4
 */
// void onKeyEvent__Q24Game32ItemState<Item> FPQ34Game8ItemWeed4ItemRCQ28SysShape8KeyEvent() { }

/**
 * @note Address: 0x80210AE4
 * @note Size: 0x4
 */
// void onBounce__Q24Game32ItemState<Item> FPQ34Game8ItemWeed4ItemPQ23Sys8Triangle() { }

/**
 * @note Address: 0x80210AE8
 * @note Size: 0x4
 */
// void onPlatCollision__Q24Game32ItemState<Item> FPQ34Game8ItemWeed4ItemRQ24Game9PlatEvent() { }

/**
 * @note Address: 0x80210AEC
 * @note Size: 0x4
 */
// void onCollision__Q24Game32ItemState<Item> FPQ34Game8ItemWeed4ItemRQ24Game9CollEvent() { }

/**
 * @note Address: 0x80210AF0
 * @note Size: 0x4
 */
// void init__Q24Game31FSMState<Item> FPQ34Game8ItemWeed4ItemPQ24Game8StateArg() { }

/**
 * @note Address: 0x80210AF4
 * @note Size: 0x4
 */
// void exec__Q24Game31FSMState<Item> FPQ34Game8ItemWeed4Item() { }

/**
 * @note Address: 0x80210AF8
 * @note Size: 0x4
 */
// void cleanup__Q24Game31FSMState<Item> FPQ34Game8ItemWeed4Item() { }

/**
 * @note Address: 0x80210AFC
 * @note Size: 0x4
 */
// void resume__Q24Game31FSMState<Item> FPQ34Game8ItemWeed4Item() { }

/**
 * @note Address: 0x80210B00
 * @note Size: 0x4
 */
// void restart__Q24Game31FSMState<Item> FPQ34Game8ItemWeed4Item() { }

/**
 * @note Address: 0x80210B04
 * @note Size: 0x30
 */
// void transit__Q24Game31FSMState<Item> FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x8(r3)
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

/**
 * @note Address: 0x80210B34
 * @note Size: 0x4
 */
// void init__Q24Game35StateMachine<Item> FPQ34Game8ItemWeed4Item() { }

/**
 * @note Address: 0x80210B38
 * @note Size: 0x64
 */
// void create__Q24Game35StateMachine<Item> Fi()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	li       r0, 0
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	stw      r4, 0xc(r3)
// 	stw      r0, 8(r3)
// 	lwz      r0, 0xc(r3)
// 	slwi     r3, r0, 2
// 	bl       __nwa__FUl
// 	stw      r3, 4(r31)
// 	lwz      r0, 0xc(r31)
// 	slwi     r3, r0, 2
// 	bl       __nwa__FUl
// 	stw      r3, 0x10(r31)
// 	lwz      r0, 0xc(r31)
// 	slwi     r3, r0, 2
// 	bl       __nwa__FUl
// 	stw      r3, 0x14(r31)
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210B9C
 * @note Size: 0x60
 */
// void MonoObjectMgr<Weed>::birth()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	bl       "getEmptyIndex__36MonoObjectMgr<Q34Game8ItemWeed4Weed>Fv"
// 	cmpwi    r3, -1
// 	beq      lbl_80210BE4
// 	lwz      r6, 0x28(r31)
// 	li       r0, 0
// 	lwz      r4, 0x2c(r31)
// 	mulli    r5, r3, 0x54
// 	stbx     r0, r4, r3
// 	add      r3, r6, r5
// 	lwz      r4, 0x20(r31)
// 	addi     r0, r4, 1
// 	stw      r0, 0x20(r31)
// 	b        lbl_80210BE8

// lbl_80210BE4:
// 	li       r3, 0

// lbl_80210BE8:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210BFC
 * @note Size: 0x54
 */
// void MonoObjectMgr<Weed>::kill(Weed*)
// {
// 	/*
// 	lwz      r0, 0x24(r3)
// 	li       r6, 0
// 	li       r5, 0
// 	mtctr    r0
// 	cmpwi    r0, 0
// 	blelr

// lbl_80210C14:
// 	lwz      r0, 0x28(r3)
// 	add      r0, r0, r5
// 	cmplw    r0, r4
// 	bne      lbl_80210C40
// 	lwz      r4, 0x2c(r3)
// 	li       r0, 1
// 	stbx     r0, r4, r6
// 	lwz      r4, 0x20(r3)
// 	addi     r0, r4, -1
// 	stw      r0, 0x20(r3)
// 	blr

// lbl_80210C40:
// 	addi     r5, r5, 0x54
// 	addi     r6, r6, 1
// 	bdnz     lbl_80210C14
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210C50
 * @note Size: 0x40
 */
// void MonoObjectMgr<Weed>::getNext(void*)
// {
// 	/*
// 	lwz      r5, 0x24(r3)
// 	addi     r6, r4, 1
// 	subf     r0, r6, r5
// 	mtctr    r0
// 	cmpw     r6, r5
// 	bge      lbl_80210C88

// lbl_80210C68:
// 	lwz      r4, 0x2c(r3)
// 	lbzx     r0, r4, r6
// 	cmplwi   r0, 0
// 	bne      lbl_80210C80
// 	mr       r3, r6
// 	blr

// lbl_80210C80:
// 	addi     r6, r6, 1
// 	bdnz     lbl_80210C68

// lbl_80210C88:
// 	mr       r3, r5
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210C90
 * @note Size: 0x30
 */
// void MonoObjectMgr<Weed>::getStart()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	li       r4, -1
// 	stw      r0, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210CC0
 * @note Size: 0x8
 */
// void MonoObjectMgr<Weed>::getEnd()
// {
// 	/*
// 	lwz      r3, 0x24(r3)
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210CC8
 * @note Size: 0x8
 */
// void MonoObjectMgr<Weed>::getTo()
// {
// 	/*
// 	lwz      r3, 0x24(r3)
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210CD0
 * @note Size: 0x50
 */
// void MonoObjectMgr<Weed>::doAnimation()
// {
// 	/*
// 	lwz      r4, 0x24(r3)
// 	li       r5, 0
// 	cmpwi    r4, 0
// 	blelr
// 	cmpwi    r4, 8
// 	addi     r3, r4, -8
// 	ble      lbl_80210D08
// 	addi     r0, r3, 7
// 	srwi     r0, r0, 3
// 	mtctr    r0
// 	cmpwi    r3, 0
// 	ble      lbl_80210D08

// lbl_80210D00:
// 	addi     r5, r5, 8
// 	bdnz     lbl_80210D00

// lbl_80210D08:
// 	subf     r0, r5, r4
// 	mtctr    r0
// 	cmpw     r5, r4
// 	bgelr

// lbl_80210D18:
// 	bdnz     lbl_80210D18
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210D20
 * @note Size: 0x50
 */
// void MonoObjectMgr<Weed>::doEntry()
// {
// 	/*
// 	lwz      r4, 0x24(r3)
// 	li       r5, 0
// 	cmpwi    r4, 0
// 	blelr
// 	cmpwi    r4, 8
// 	addi     r3, r4, -8
// 	ble      lbl_80210D58
// 	addi     r0, r3, 7
// 	srwi     r0, r0, 3
// 	mtctr    r0
// 	cmpwi    r3, 0
// 	ble      lbl_80210D58

// lbl_80210D50:
// 	addi     r5, r5, 8
// 	bdnz     lbl_80210D50

// lbl_80210D58:
// 	subf     r0, r5, r4
// 	mtctr    r0
// 	cmpw     r5, r4
// 	bgelr

// lbl_80210D68:
// 	bdnz     lbl_80210D68
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210D70
 * @note Size: 0x50
 */
// void MonoObjectMgr<Weed>::doSetView(int)
// {
// 	/*
// 	lwz      r4, 0x24(r3)
// 	li       r5, 0
// 	cmpwi    r4, 0
// 	blelr
// 	cmpwi    r4, 8
// 	addi     r3, r4, -8
// 	ble      lbl_80210DA8
// 	addi     r0, r3, 7
// 	srwi     r0, r0, 3
// 	mtctr    r0
// 	cmpwi    r3, 0
// 	ble      lbl_80210DA8

// lbl_80210DA0:
// 	addi     r5, r5, 8
// 	bdnz     lbl_80210DA0

// lbl_80210DA8:
// 	subf     r0, r5, r4
// 	mtctr    r0
// 	cmpw     r5, r4
// 	bgelr

// lbl_80210DB8:
// 	bdnz     lbl_80210DB8
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210DC0
 * @note Size: 0x50
 */
// void MonoObjectMgr<Weed>::doViewCalc()
// {
// 	/*
// 	lwz      r4, 0x24(r3)
// 	li       r5, 0
// 	cmpwi    r4, 0
// 	blelr
// 	cmpwi    r4, 8
// 	addi     r3, r4, -8
// 	ble      lbl_80210DF8
// 	addi     r0, r3, 7
// 	srwi     r0, r0, 3
// 	mtctr    r0
// 	cmpwi    r3, 0
// 	ble      lbl_80210DF8

// lbl_80210DF0:
// 	addi     r5, r5, 8
// 	bdnz     lbl_80210DF0

// lbl_80210DF8:
// 	subf     r0, r5, r4
// 	mtctr    r0
// 	cmpw     r5, r4
// 	bgelr

// lbl_80210E08:
// 	bdnz     lbl_80210E08
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210E10
 * @note Size: 0x50
 */
// void MonoObjectMgr<Weed>::doSimulation(f32)
// {
// 	/*
// 	lwz      r4, 0x24(r3)
// 	li       r5, 0
// 	cmpwi    r4, 0
// 	blelr
// 	cmpwi    r4, 8
// 	addi     r3, r4, -8
// 	ble      lbl_80210E48
// 	addi     r0, r3, 7
// 	srwi     r0, r0, 3
// 	mtctr    r0
// 	cmpwi    r3, 0
// 	ble      lbl_80210E48

// lbl_80210E40:
// 	addi     r5, r5, 8
// 	bdnz     lbl_80210E40

// lbl_80210E48:
// 	subf     r0, r5, r4
// 	mtctr    r0
// 	cmpw     r5, r4
// 	bgelr

// lbl_80210E58:
// 	bdnz     lbl_80210E58
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210E60
 * @note Size: 0x50
 */
// void MonoObjectMgr<Weed>::doDirectDraw(Graphics&)
// {
// 	/*
// 	lwz      r4, 0x24(r3)
// 	li       r5, 0
// 	cmpwi    r4, 0
// 	blelr
// 	cmpwi    r4, 8
// 	addi     r3, r4, -8
// 	ble      lbl_80210E98
// 	addi     r0, r3, 7
// 	srwi     r0, r0, 3
// 	mtctr    r0
// 	cmpwi    r3, 0
// 	ble      lbl_80210E98

// lbl_80210E90:
// 	addi     r5, r5, 8
// 	bdnz     lbl_80210E90

// lbl_80210E98:
// 	subf     r0, r5, r4
// 	mtctr    r0
// 	cmpw     r5, r4
// 	bgelr

// lbl_80210EA8:
// 	bdnz     lbl_80210EA8
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210EB0
 * @note Size: 0x18
 */
// void MonoObjectMgr<Weed>::resetMgr()
// {
// 	/*
// 	li       r0, 0
// 	stw      r0, 0x28(r3)
// 	stw      r0, 0x24(r3)
// 	stw      r0, 0x20(r3)
// 	stw      r0, 0x2c(r3)
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210EC8
 * @note Size: 0x30
 */
// void MonoObjectMgr<Weed>::clearMgr()
// {
// 	/*
// 	li       r0, 0
// 	li       r6, 0
// 	stw      r0, 0x20(r3)
// 	li       r5, 1
// 	b        lbl_80210EE8

// lbl_80210EDC:
// 	lwz      r4, 0x2c(r3)
// 	stbx     r5, r4, r6
// 	addi     r6, r6, 1

// lbl_80210EE8:
// 	lwz      r0, 0x24(r3)
// 	cmpw     r6, r0
// 	blt      lbl_80210EDC
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210EF8
 * @note Size: 0x4
 */
// void MonoObjectMgr<Weed>::onAlloc() { }

/**
 * @note Address: 0x80210EFC
 * @note Size: 0x3C
 */
// void MonoObjectMgr<Weed>::getEmptyIndex()
// {
// 	/*
// 	lwz      r0, 0x24(r3)
// 	li       r5, 0
// 	mtctr    r0
// 	cmpwi    r0, 0
// 	ble      lbl_80210F30

// lbl_80210F10:
// 	lwz      r4, 0x2c(r3)
// 	lbzx     r0, r4, r5
// 	cmplwi   r0, 1
// 	bne      lbl_80210F28
// 	mr       r3, r5
// 	blr

// lbl_80210F28:
// 	addi     r5, r5, 1
// 	bdnz     lbl_80210F10

// lbl_80210F30:
// 	li       r3, -1
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210F38
 * @note Size: 0x10
 */
// void MonoObjectMgr<Weed>::get(void*)
// {
// 	/*
// 	mulli    r0, r4, 0x54
// 	lwz      r3, 0x28(r3)
// 	add      r3, r3, r0
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210F48
 * @note Size: 0x2C
 */
// void Container<Weed>::getObject(void*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80210F74
 * @note Size: 0x8
 */
// u32 Container<Weed>::getAt(int) { return 0x0; }

/**
 * @note Address: 0x80210F7C
 * @note Size: 0x8
 */
// u32 Container<Weed>::getTo() { return 0x0; }

/**
 * @note Address: 0x80210F84
 * @note Size: 0x1D4
 */
// void ObjectMgr<Weed>::doDirectDraw(Graphics&)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@ha
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r4, r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@l
// 	cmplwi   r0, 0
// 	stw      r0, 0x14(r1)
// 	stw      r4, 8(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_80210FCC
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_80211128

// lbl_80210FCC:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_80211038

// lbl_80210FE4:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_80211128
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_80211038:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_80210FE4
// 	b        lbl_80211128

// lbl_80211058:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_80211098
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_80211128

// lbl_80211098:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_8021110C

// lbl_802110B8:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_80211128
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_8021110C:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_802110B8

// lbl_80211128:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_80211058
// 	lwz      r0, 0x24(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80211158
 * @note Size: 0x4C
 */
// void Iterator<Weed>::isDone()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	lwz      r3, 8(r3)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 4(r31)
// 	subf     r0, r0, r3
// 	cntlzw   r0, r0
// 	srwi     r3, r0, 5
// 	lwz      r31, 0xc(r1)
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/**
 * @note Address: 0x802111A4
 * @note Size: 0x1D4
 */
// void ObjectMgr<Weed>::doSimulation(f32)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@ha
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r4, r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@l
// 	cmplwi   r0, 0
// 	stw      r0, 0x14(r1)
// 	stw      r4, 8(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_802111EC
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_80211348

// lbl_802111EC:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_80211258

// lbl_80211204:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_80211348
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_80211258:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_80211204
// 	b        lbl_80211348

// lbl_80211278:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_802112B8
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_80211348

// lbl_802112B8:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_8021132C

// lbl_802112D8:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_80211348
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_8021132C:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_802112D8

// lbl_80211348:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_80211278
// 	lwz      r0, 0x24(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80211378
 * @note Size: 0x1D4
 */
// void ObjectMgr<Weed>::doViewCalc()
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@ha
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r4, r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@l
// 	cmplwi   r0, 0
// 	stw      r0, 0x14(r1)
// 	stw      r4, 8(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_802113C0
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_8021151C

// lbl_802113C0:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_8021142C

// lbl_802113D8:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_8021151C
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_8021142C:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_802113D8
// 	b        lbl_8021151C

// lbl_8021144C:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_8021148C
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_8021151C

// lbl_8021148C:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_80211500

// lbl_802114AC:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_8021151C
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_80211500:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_802114AC

// lbl_8021151C:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_8021144C
// 	lwz      r0, 0x24(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/**
 * @note Address: 0x8021154C
 * @note Size: 0x1D4
 */
// void ObjectMgr<Weed>::doSetView(int)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@ha
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r4, r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@l
// 	cmplwi   r0, 0
// 	stw      r0, 0x14(r1)
// 	stw      r4, 8(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_80211594
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_802116F0

// lbl_80211594:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_80211600

// lbl_802115AC:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_802116F0
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_80211600:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_802115AC
// 	b        lbl_802116F0

// lbl_80211620:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_80211660
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_802116F0

// lbl_80211660:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_802116D4

// lbl_80211680:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_802116F0
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_802116D4:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_80211680

// lbl_802116F0:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_80211620
// 	lwz      r0, 0x24(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80211720
 * @note Size: 0x1D4
 */
// void ObjectMgr<Weed>::doEntry()
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@ha
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r4, r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@l
// 	cmplwi   r0, 0
// 	stw      r0, 0x14(r1)
// 	stw      r4, 8(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_80211768
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_802118C4

// lbl_80211768:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_802117D4

// lbl_80211780:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_802118C4
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_802117D4:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_80211780
// 	b        lbl_802118C4

// lbl_802117F4:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_80211834
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_802118C4

// lbl_80211834:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_802118A8

// lbl_80211854:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_802118C4
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_802118A8:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_80211854

// lbl_802118C4:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_802117F4
// 	lwz      r0, 0x24(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/**
 * @note Address: 0x802118F4
 * @note Size: 0x1D4
 */
// void ObjectMgr<Weed>::doAnimation()
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@ha
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r4, r4, "__vt__31Iterator<Q34Game8ItemWeed4Weed>"@l
// 	cmplwi   r0, 0
// 	stw      r0, 0x14(r1)
// 	stw      r4, 8(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_8021193C
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_80211A98

// lbl_8021193C:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_802119A8

// lbl_80211954:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_80211A98
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_802119A8:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_80211954
// 	b        lbl_80211A98

// lbl_802119C8:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_80211A08
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_80211A98

// lbl_80211A08:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_80211A7C

// lbl_80211A28:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_80211A98
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_80211A7C:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_80211A28

// lbl_80211A98:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_802119C8
// 	lwz      r0, 0x24(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80211AC8
 * @note Size: 0x188
 */
// void MonoObjectMgr<Weed>::alloc(int)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	stw      r0, 0x24(r1)
// 	stw      r31, 0x1c(r1)
// 	mr       r31, r4
// 	stw      r30, 0x18(r1)
// 	mr       r30, r3
// 	stw      r29, 0x14(r1)
// 	mr       r29, r31
// 	mulli    r3, r29, 0x54
// 	stw      r28, 0x10(r1)
// 	addi     r3, r3, 0x10
// 	bl       __nwa__FUl
// 	lis      r4, __ct__Q34Game8ItemWeed4WeedFv@ha
// 	mr       r7, r29
// 	addi     r4, r4, __ct__Q34Game8ItemWeed4WeedFv@l
// 	li       r5, 0
// 	li       r6, 0x54
// 	bl       __construct_new_array
// 	stw      r3, 0x28(r30)
// 	li       r0, 0
// 	mr       r3, r29
// 	stw      r31, 0x24(r30)
// 	stw      r0, 0x20(r30)
// 	bl       __nwa__FUl
// 	cmpwi    r31, 0
// 	stw      r3, 0x2c(r30)
// 	li       r11, 0
// 	ble      lbl_80211BE8
// 	cmpwi    r31, 8
// 	addi     r3, r31, -8
// 	ble      lbl_80211BC4
// 	addi     r0, r3, 7
// 	srwi     r0, r0, 3
// 	mtctr    r0
// 	cmpwi    r3, 0
// 	ble      lbl_80211BC4

// lbl_80211B5C:
// 	lwz      r3, 0x2c(r30)
// 	li       r10, 1
// 	addi     r8, r11, 1
// 	addi     r7, r11, 2
// 	stbx     r10, r3, r11
// 	addi     r6, r11, 3
// 	addi     r5, r11, 4
// 	addi     r4, r11, 5
// 	lwz      r9, 0x2c(r30)
// 	addi     r3, r11, 6
// 	addi     r0, r11, 7
// 	addi     r11, r11, 8
// 	stbx     r10, r9, r8
// 	lwz      r8, 0x2c(r30)
// 	stbx     r10, r8, r7
// 	lwz      r7, 0x2c(r30)
// 	stbx     r10, r7, r6
// 	lwz      r6, 0x2c(r30)
// 	stbx     r10, r6, r5
// 	lwz      r5, 0x2c(r30)
// 	stbx     r10, r5, r4
// 	lwz      r4, 0x2c(r30)
// 	stbx     r10, r4, r3
// 	lwz      r3, 0x2c(r30)
// 	stbx     r10, r3, r0
// 	bdnz     lbl_80211B5C

// lbl_80211BC4:
// 	subf     r0, r11, r31
// 	li       r4, 1
// 	mtctr    r0
// 	cmpw     r11, r31
// 	bge      lbl_80211BE8

// lbl_80211BD8:
// 	lwz      r3, 0x2c(r30)
// 	stbx     r4, r3, r11
// 	addi     r11, r11, 1
// 	bdnz     lbl_80211BD8

// lbl_80211BE8:
// 	mr       r3, r30
// 	lwz      r12, 0(r30)
// 	lwz      r12, 0x88(r12)
// 	mtctr    r12
// 	bctrl
// 	li       r28, 0
// 	li       r29, 0
// 	b        lbl_80211C28

// lbl_80211C08:
// 	lwz      r0, 0x28(r30)
// 	add      r3, r0, r29
// 	lwz      r12, 0xc(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	addi     r29, r29, 0x54
// 	addi     r28, r28, 1

// lbl_80211C28:
// 	cmpw     r28, r31
// 	blt      lbl_80211C08
// 	lwz      r0, 0x24(r1)
// 	lwz      r31, 0x1c(r1)
// 	lwz      r30, 0x18(r1)
// 	lwz      r29, 0x14(r1)
// 	lwz      r28, 0x10(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80211C50
 * @note Size: 0x9C
 */
// void MonoObjectMgr<Weed>::MonoObjectMgr()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	bl       __ct__5CNodeFv
// 	lis      r4, __vt__16GenericContainer@ha
// 	lis      r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@ha
// 	addi     r0, r4, __vt__16GenericContainer@l
// 	lis      r6, __vt__16GenericObjectMgr@ha
// 	stw      r0, 0(r31)
// 	addi     r0, r3, "__vt__32Container<Q34Game8ItemWeed4Weed>"@l
// 	lis      r4, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@ha
// 	lis      r3, "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"@ha
// 	stw      r0, 0(r31)
// 	li       r8, 0
// 	addi     r7, r4, "__vt__32ObjectMgr<Q34Game8ItemWeed4Weed>"@l
// 	addi     r5, r3, "__vt__36MonoObjectMgr<Q34Game8ItemWeed4Weed>"@l
// 	stb      r8, 0x18(r31)
// 	addi     r0, r6, __vt__16GenericObjectMgr@l
// 	addi     r6, r7, 0x2c
// 	addi     r4, r5, 0x2c
// 	stw      r0, 0x1c(r31)
// 	li       r0, 1
// 	mr       r3, r31
// 	stw      r7, 0(r31)
// 	stw      r6, 0x1c(r31)
// 	stw      r5, 0(r31)
// 	stw      r4, 0x1c(r31)
// 	stb      r0, 0x18(r31)
// 	stw      r8, 0x24(r31)
// 	stw      r8, 0x20(r31)
// 	stw      r8, 0x28(r31)
// 	stw      r8, 0x2c(r31)
// 	lwz      r31, 0xc(r1)
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/**
 * @note Address: 0x80211CEC
 * @note Size: 0x9C
 */
// void transit__Q24Game35StateMachine<Item> FPQ34Game8ItemWeed4ItemiPQ24Game8StateArg()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x20(r1)
// 	  mflr      r0
// 	  stw       r0, 0x24(r1)
// 	  rlwinm    r0,r5,2,0,29
// 	  stmw      r27, 0xC(r1)
// 	  mr        r27, r3
// 	  mr        r28, r4
// 	  mr        r29, r6
// 	  lwz       r30, 0x1DC(r4)
// 	  lwz       r3, 0x14(r3)
// 	  cmplwi    r30, 0
// 	  lwzx      r31, r3, r0
// 	  beq-      .loc_0x50
// 	  mr        r3, r30
// 	  lwz       r12, 0x0(r30)
// 	  lwz       r12, 0x10(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x4(r30)
// 	  stw       r0, 0x18(r27)

// 	.loc_0x50:
// 	  lwz       r0, 0xC(r27)
// 	  cmpw      r31, r0
// 	  blt-      .loc_0x60

// 	.loc_0x5C:
// 	  b         .loc_0x5C

// 	.loc_0x60:
// 	  lwz       r3, 0x4(r27)
// 	  rlwinm    r0,r31,2,0,29
// 	  mr        r4, r28
// 	  mr        r5, r29
// 	  lwzx      r3, r3, r0
// 	  stw       r3, 0x1DC(r28)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0x8(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lmw       r27, 0xC(r1)
// 	  lwz       r0, 0x24(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x20
// 	  blr
// 	*/
// }

/**
 * @note Address: 0x80211D88
 * @note Size: 0x84
 */
// void registerState__Q24Game35StateMachine<Item> FPQ24Game31FSMState<Item>()
// {
// 	/*
// 	.loc_0x0:
// 	  lwz       r6, 0x8(r3)
// 	  lwz       r0, 0xC(r3)
// 	  cmpw      r6, r0
// 	  bgelr-
// 	  lwz       r5, 0x4(r3)
// 	  rlwinm    r0,r6,2,0,29
// 	  stwx      r4, r5, r0
// 	  lwz       r5, 0x4(r4)
// 	  cmpwi     r5, 0
// 	  blt-      .loc_0x34
// 	  lwz       r0, 0xC(r3)
// 	  cmpw      r5, r0
// 	  blt-      .loc_0x3C

// 	.loc_0x34:
// 	  li        r0, 0
// 	  b         .loc_0x40

// 	.loc_0x3C:
// 	  li        r0, 0x1

// 	.loc_0x40:
// 	  rlwinm.   r0,r0,0,24,31
// 	  beqlr-
// 	  stw       r3, 0x8(r4)
// 	  lwz       r0, 0x8(r3)
// 	  lwz       r6, 0x4(r4)
// 	  lwz       r5, 0x10(r3)
// 	  rlwinm    r0,r0,2,0,29
// 	  stwx      r6, r5, r0
// 	  lwz       r0, 0x4(r4)
// 	  lwz       r5, 0x8(r3)
// 	  lwz       r4, 0x14(r3)
// 	  rlwinm    r0,r0,2,0,29
// 	  stwx      r5, r4, r0
// 	  lwz       r4, 0x8(r3)
// 	  addi      r0, r4, 0x1
// 	  stw       r0, 0x8(r3)
// 	  blr
// 	*/
// }

/**
 * @note Address: 0x80211E0C
 * @note Size: 0x38
 */
// void exec__Q24Game35StateMachine<Item> FPQ34Game8ItemWeed4Item()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x1DC(r4)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x28
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0xC(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0x28:
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/**
 * @note Address: 0x80211E44
 * @note Size: 0x44
 */
// void onKeyEvent__Q24Game74FSMItem<Item, FSM, State> FRCQ28SysShape8KeyEvent()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r6, r3
// 	  mr        r5, r4
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x1DC(r3)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x34
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r6
// 	  lwz       r12, 0x24(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0x34:
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/**
 * @note Address: 0x80211E88
 * @note Size: 0x44
 */
// void platCallback__Q24Game74FSMItem<Item, FSM, State> FRQ24Game9PlatEvent()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r6, r3
// 	  mr        r5, r4
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x1DC(r3)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x34
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r6
// 	  lwz       r12, 0x2C(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0x34:
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/**
 * @note Address: 0x80211ECC
 * @note Size: 0x44
 */
// void collisionCallback__Q24Game74FSMItem<Item, FSM, State> FRQ24Game9CollEvent()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r6, r3
// 	  mr        r5, r4
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x1DC(r3)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x34
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r6
// 	  lwz       r12, 0x30(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0x34:
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/**
 * @note Address: 0x80211F10
 * @note Size: 0x44
 */
// void bounceCallback__Q24Game74FSMItem<Item, FSM, State> FPQ23Sys8Triangle()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r6, r3
// 	  mr        r5, r4
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x1DC(r3)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x34
// 	  lwz       r12, 0x0(r3)
// 	  mr        r4, r6
// 	  lwz       r12, 0x28(r12)
// 	  mtctr     r12
// 	  bctrl

// 	.loc_0x34:
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/**
 * @note Address: 0x80211F54
 * @note Size: 0x14
 */
// void isFlagAlive__Q24Game32TFlockMgr<Weed> Fi()
// {
// 	/*
// 	lwz      r3, 0x68(r3)
// 	lbzx     r0, r3, r4
// 	cntlzw   r0, r0
// 	srwi     r3, r0, 5
// 	blr
// 	*/
// }

} // namespace ItemWeed
} // namespace Game
