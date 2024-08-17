#include "Dolphin/rand.h"
#include "Game/AIConstants.h"
#include "Game/Entities/ItemPikihead.h"
#include "Game/gameStat.h"
#include "Game/Piki.h"
#include "Game/PikiMgr.h"
#include "Game/PikiState.h"
#include "Game/Navi.h"
#include "Game/MoviePlayer.h"
#include "efx/TEnemyDive.h"
#include "nans.h"
#include "Radar.h"
#include "SoundID.h"

namespace Game {
namespace ItemPikihead {

static const int unusedArray[] = { 0, 0, 0 };
static const char unusedName[] = "itemPikihead";

Mgr* mgr;

/**
 * @note Address: 0x801D8ABC
 * @note Size: 0x294
 */
void FSM::init(Item*)
{
	create(PIKIHEAD_StateCount);
	registerState(new FallState);
	registerState(new BuryState);
	registerState(new WaitState);
	registerState(new TaneState);
	registerState(new HatugaState);
	registerState(new GrowState);
	registerState(new SioreState);
}

/**
 * @note Address: 0x801D8D50
 * @note Size: 0x98
 */
void FallState::init(Item* item, StateArg* arg)
{
	mVerticalDrag   = RAND_FLOAT_RANGE(10.0f, 0.5f); // 9.5-10.5
	mHorizontalDrag = mVerticalDrag * 0.2f;          // 1.9-2.1
	item->mEfxTane->createTanekira_(item->mEfxTane->mEfxPos);
	item->mAnimator.startAnim(4, nullptr);
}

/**
 * @note Address: 0x801D8DE8
 * @note Size: 0x38
 */
void FallState::exec(Item* item) { item->applyAirDrag(sys->getDeltaTime(), mHorizontalDrag, mVerticalDrag); }

/**
 * @note Address: 0x801D8E20
 * @note Size: 0x24
 */
void FallState::cleanup(Item* item) { item->mEfxTane->killTanekira_(); }

/**
 * @note Address: 0x801D8E44
 * @note Size: 0x28
 */
void FallState::onPlatCollision(Item* item, PlatEvent& event) { item->kill(nullptr); }

/**
 * @note Address: 0x801D8E6C
 * @note Size: 0x2F0
 */
void FallState::onBounce(Item* item, Sys::Triangle* tri)
{
	if (item->isAlive()) {
		Vector3f pos = item->getPosition();

		// can't plant in bald triangle
		if (tri && tri->mCode.isBald()) {
			item->kill(nullptr);
			return;
		}

		// sprout can't plant within 100 units of a hole or fountain
		Sys::Sphere searchSphere(pos, 100.0f);
		CellIteratorArg iterArg(searchSphere);
		CellIterator iter(iterArg);
		CI_LOOP(iter)
		{
			Creature* creature = static_cast<Creature*>(*iter);
			if (creature->mObjectTypeID == OBJTYPE_Cave || creature->mObjectTypeID == OBJTYPE_BigFountain
			    || creature->mObjectTypeID == OBJTYPE_Hole) {
				Vector3f objPos = creature->getPosition();
				if (objPos.distance(pos) <= 100.0f) {
					item->kill(nullptr);
					return;
				}
			}
		}

		// if within 10 units of water, make water effect and sound
		Sys::Sphere waterSearchSphere(pos, 10.0f);
		if (item->checkWater(nullptr, waterSearchSphere)) {
			efx::TEnemyDive diveFX;
			efx::ArgScale fxArg(pos, 1.2f);
			diveFX.create(&fxArg);
			item->startSound(PSSE_EV_ITEM_LAND_WATER1_S);

			// if not, make land effect and sound
		} else {
			efx::createSimplePkAp(pos);
			item->startSound(PSSE_PK_SE_ONY_SEED_GROUND);
		}

		// become buried.
		transit(item, PIKIHEAD_Bury, nullptr);
	}
}

/**
 * @note Address: 0x801D918C
 * @note Size: 0x8C
 */
void BuryState::init(Item* item, StateArg* arg)
{
	item->mAnimator.startAnim(3, item);
	mAnimDone = false;
	mTimer    = randFloat() * 2.0f + pikiMgr->mParms->mPikiParms.mBuriedSeedWaitTime.mValue;
}

/**
 * @note Address: 0x801D9218
 * @note Size: 0x68
 */
void BuryState::exec(Item* item)
{
	// timer only starts counting down after animation finishes
	if (mAnimDone) {
		mTimer -= sys->getDeltaTime();
		if (mTimer <= 0.0f) {
			transit(item, PIKIHEAD_Hatuga, nullptr);
		}
	}
}

/**
 * @note Address: 0x801D9280
 * @note Size: 0x4
 */
void BuryState::cleanup(Item* item) { }

/**
 * @note Address: 0x801D9284
 * @note Size: 0xC
 */
void BuryState::onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent) { mAnimDone = true; }

/**
 * @note Address: 0x801D9290
 * @note Size: 0x8C
 */
void TaneState::init(Item* item, StateArg* arg)
{
	item->mAnimator.startAnim(5, item);
	mAnimDone = false;
	mTimer    = randFloat() * 2.0f + pikiMgr->mParms->mPikiParms.mUnpluckableTime.mValue;
}

/**
 * @note Address: 0x801D931C
 * @note Size: 0x68
 */
void TaneState::exec(Item* item)
{
	// timer only starts counting down after animation finishes
	if (mAnimDone) {
		mTimer -= sys->getDeltaTime();
		if (mTimer <= 0.0f) {
			transit(item, PIKIHEAD_Hatuga, nullptr);
		}
	}
}

/**
 * @note Address: 0x801D9384
 * @note Size: 0x4
 */
void TaneState::cleanup(Item* item) { }

/**
 * @note Address: 0x801D9388
 * @note Size: 0xC
 */
void TaneState::onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent) { mAnimDone = true; }

/**
 * @note Address: 0x801D9394
 * @note Size: 0x58
 */
void HatugaState::init(Item* item, StateArg* arg)
{
	item->mAnimator.startAnim(1, item);
	item->startSound(PSSE_PK_SE_ONY_HATSUGA);
}

/**
 * @note Address: 0x801D93EC
 * @note Size: 0x4
 */
void HatugaState::exec(Item* item) { }

/**
 * @note Address: 0x801D93F0
 * @note Size: 0x4
 */
void HatugaState::cleanup(Item* item) { }

/**
 * @note Address: 0x801D93F4
 * @note Size: 0x34
 */
void HatugaState::onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent) { transit(item, PIKIHEAD_Wait, nullptr); }

/**
 * @note Address: 0x801D9428
 * @note Size: 0xEC
 */
void WaitState::init(Item* item, StateArg* arg)
{
	item->mEfxTane->createKourin_(item->mEfxTane->mEfxPos);
	item->mAnimator.startAnim(0, item);
	if (item->mHeadType == Flower) {
		mTimer = 2.0f * randFloat() + pikiMgr->mParms->mPikiParms.mWitherFromFlowerTime.mValue;
	} else {
		mTimer = 2.0f * randFloat() + pikiMgr->mParms->mPikiParms.mGrowUpToFlowerTime.mValue;
	}
}

/**
 * @note Address: 0x801D9514
 * @note Size: 0x9C
 */
void WaitState::exec(Item* item)
{
	if (!moviePlayer || moviePlayer->mDemoState == DEMOSTATE_Inactive) {
		mTimer -= sys->mDeltaTime;
	}

	if (mTimer <= 0.0f) {
		if (item->mHeadType == Flower) {
			transit(item, PIKIHEAD_Siore, nullptr);
		} else {
			transit(item, PIKIHEAD_Grow, nullptr);
		}
	}
}

/**
 * @note Address: 0x801D95B0
 * @note Size: 0x24
 */
void WaitState::cleanup(Item* item) { item->mEfxTane->killKourin_(); }

/**
 * @note Address: 0x801D95D4
 * @note Size: 0x38
 */
void WaitState::onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent) { item->mAnimator.startAnim(0, item); }

/**
 * @note Address: 0x801D960C
 * @note Size: 0x4C
 */
void GrowState::init(Item* item, StateArg* arg)
{
	item->mAnimator.startAnim(6, item);
	item->mEfxTane->createGlow1_(item->mEfxTane->mEfxPos);
}

/**
 * @note Address: 0x801D9658
 * @note Size: 0x4
 */
void GrowState::exec(Item* item) { }

/**
 * @note Address: 0x801D965C
 * @note Size: 0x4
 */
void GrowState::cleanup(Item* item) { }

/**
 * @note Address: 0x801D9660
 * @note Size: 0xCC
 */
void GrowState::onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent)
{
	if (keyEvent.mType == KEYEVENT_2) {
		item->mHeadType = (item->mHeadType + 1) % 3;
		efx::createSimpleGlow2(*item->mEfxTane->mEfxPos); // TODO: not declared yet
		if (item->mHeadType == Bud) {
			item->startSound(PSSE_PK_SE_ONY_TSUBOMI);
		} else if (item->mHeadType == Flower) {
			item->startSound(PSSE_PK_SE_ONY_SAKU);
		}
	} else {
		transit(item, PIKIHEAD_Wait, nullptr);
	}
}

/**
 * @note Address: 0x801D972C
 * @note Size: 0xAC
 */
void SioreState::init(Item* item, StateArg* arg)
{
	item->mAnimator.startAnim(2, item);
	mAnimDone = false;
	mTimer    = randFloat() * 2.0f + pikiMgr->mParms->mPikiParms.mWitheredHideTime.mValue;
	item->startSound(PSSE_PK_SE_ONY_KARERU);
}

/**
 * @note Address: 0x801D97D8
 * @note Size: 0x68
 */
void SioreState::exec(Item* item)
{
	if (mAnimDone) {
		mTimer -= sys->getDeltaTime();
		if (mTimer <= 0.0f) {
			transit(item, PIKIHEAD_Bury, nullptr);
		}
	}
}

/**
 * @note Address: 0x801D9840
 * @note Size: 0x4
 */
void SioreState::cleanup(Item* item) { }

/**
 * @note Address: 0x801D9844
 * @note Size: 0x14
 */
void SioreState::onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent)
{
	item->mHeadType = Leaf;
	mAnimDone       = true;
}

/**
 * @note Address: 0x801D9858
 * @note Size: 0x1D0
 */
Item::Item()
    : FSMItem<Item, FSM, State>(OBJTYPE_Pikihead)
    , mEfxTane(new efx::TPkEffectTane())
{
	mAnimSpeed = 30.0f;
	mCollTree->createSingleSphere(mModel, 0, mBoundingSphere, nullptr);
}

/**
 * @note Address: 0x801D9AC4
 * @note Size: 0x21C
 */
void Item::onInit(CreatureInitArg* settings)
{
	mModel             = mgr->createModel(this);
	mAnimator.mAnimMgr = mgr->mAnimMgr;
	mAnimator.startAnim(0, nullptr);
	mCollTree->attachModel(mModel);
	setAtari(false);
	InitArg* itemInitArg = static_cast<InitArg*>(settings);
	if (itemInitArg) {
		mColor = itemInitArg->mPikminType;
		if (itemInitArg->mPikminType == -1) {
			mColor = Blue;
		}
		mVelocity         = itemInitArg->mVelocity;
		mHeadType         = itemInitArg->mHeadType;
		mAutopluckedTimer = itemInitArg->mAutopluckTimer;
	} else {
		mColor            = randFloat() * 5.0f;
		mHeadType         = Leaf;
		mAutopluckedTimer = -1.0f;
	}
	mEfxTane->init();
	mEfxTane->mPikiColor   = mColor;
	mEfxTane->mObjPos      = &mPosition;
	mEfxTane->mEfxPos      = &mEfxPosition;
	mEfxTane->mObjMatrix   = &mBaseTrMatrix;
	mEfxTane->mHappaJntMtx = mModel->getJoint("happajnt3")->getWorldMatrix();
	if (itemInitArg && itemInitArg->mIsAlreadyBuried) {
		mFsm->start(this, PIKIHEAD_Hatuga, nullptr);
	} else {
		mFsm->start(this, PIKIHEAD_Fall, nullptr);
	}

	setAlive(true);
	if (itemInitArg && itemInitArg->mPikminType != -1) {
		GameStat::mePikis.inc(mColor);
	}
	Radar::Mgr::entry(this, Radar::MAP_BURIED_PIKMIN, 0);
}

/**
 * @note Address: 0x801D9D14
 * @note Size: 0x94
 */
void Item::onKill(CreatureKillArg* settings)
{
	Radar::Mgr::exit(this);
	if (mCurrentState) {
		mCurrentState->cleanup(this);
	}
	mgr->kill(this);
	if (!settings || !settings->isFlag(CKILL_DontCountAsDeath)) {
		GameStat::mePikis.dec(mColor);
	}
}

/**
 * @note Address: 0x801D9DD0
 * @note Size: 0x2C
 */
bool Item::needSave() { return getStateID() != PIKIHEAD_Fall; }

/**
 * @note Address: 0x801D9DFC
 * @note Size: 0x5C
 */
void Item::cacheSave(Stream& output)
{
	output.writeByte((mHeadType << 4) + mColor);
	mPosition.write(output);
}

/**
 * @note Address: 0x801D9E58
 * @note Size: 0xA4
 */
void Item::cacheLoad(Stream& input)
{
	u8 status            = input.readByte();
	mColor               = status & 0xF;
	mHeadType            = status >> 4;
	mEfxTane->mPikiColor = mColor;
	mFsm->start(this, PIKIHEAD_Wait, nullptr);
	mPosition.read(input);
	setPosition(mPosition, false);
	GameStat::mePikis.inc(mColor);
}

/**
 * @note Address: 0x801D9EFC
 * @note Size: 0x200
 */
void Item::makeTrMatrix()
{
	if (getStateID() == PIKIHEAD_Fall && mVelocity.length() > 0.0f) {
		Vector3f yVec = mVelocity;
		yVec.normalise();
		yVec = yVec * -1.0f;

		Vector3f zAxis(0.0f, 0.0f, 1.0f);
		Vector3f xVec = yVec.cross(zAxis);
		xVec.normalise();

		Vector3f zVec = xVec.cross(yVec);
		zVec.normalise();

		mBaseTrMatrix.setColumn(0, xVec);
		mBaseTrMatrix.setColumn(1, yVec);
		mBaseTrMatrix.setColumn(2, zVec);
		mBaseTrMatrix.setTranslation(mPosition);
	} else {
		BaseItem::makeTrMatrix();
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl
"getStateID__Q24Game89FSMItem<Q34Game12ItemPikihead4Item,Q34Game12ItemPikihead3FSM,Q34Game12ItemPikihead5State>Fv"
	cmpwi    r3, 0
	bne      lbl_801DA0E0
	lfs      f7, 0x190(r31)
	lfs      f3, 0x194(r31)
	fmuls    f0, f7, f7
	lfs      f4, 0x198(r31)
	fmuls    f2, f3, f3
	lfs      f1, lbl_805197CC@sda21(r2)
	fmuls    f5, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f5, f0
	fcmpo    cr0, f0, f1
	ble      lbl_801D9F64
	fmadds   f0, f7, f7, f2
	fadds    f0, f5, f0
	fcmpo    cr0, f0, f1
	ble      lbl_801D9F68
	frsqrte  f1, f0
	fmuls    f0, f1, f0
	b        lbl_801D9F68

lbl_801D9F64:
	fmr      f0, f1

lbl_801D9F68:
	lfs      f1, lbl_805197CC@sda21(r2)
	fcmpo    cr0, f0, f1
	ble      lbl_801DA0E0
	fmuls    f0, f3, f3
	fmuls    f2, f4, f4
	fmadds   f0, f7, f7, f0
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_801D9F9C
	ble      lbl_801D9FA0
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_801D9FA0

lbl_801D9F9C:
	fmr      f2, f1

lbl_801D9FA0:
	lfs      f0, lbl_805197CC@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_801D9FC0
	lfs      f0, lbl_805197E4@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f7, f7, f0
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_801D9FC0:
	lfs      f0, lbl_805197E0@sda21(r2)
	lfs      f6, lbl_805197CC@sda21(r2)
	fmuls    f4, f4, f0
	lfs      f5, lbl_805197E4@sda21(r2)
	fmuls    f3, f3, f0
	fmuls    f2, f7, f0
	fmuls    f7, f4, f6
	fmuls    f1, f3, f6
	fnmsubs  f0, f2, f5, f7
	fmsubs   f9, f3, f5, f7
	fmsubs   f1, f2, f6, f1
	fmuls    f5, f0, f0
	fmuls    f7, f1, f1
	fmadds   f5, f9, f9, f5
	fadds    f7, f7, f5
	fcmpo    cr0, f7, f6
	ble      lbl_801DA014
	ble      lbl_801DA018
	frsqrte  f5, f7
	fmuls    f7, f5, f7
	b        lbl_801DA018

lbl_801DA014:
	fmr      f7, f6

lbl_801DA018:
	lfs      f5, lbl_805197CC@sda21(r2)
	fcmpo    cr0, f7, f5
	ble      lbl_801DA038
	lfs      f5, lbl_805197E4@sda21(r2)
	fdivs    f5, f5, f7
	fmuls    f9, f9, f5
	fmuls    f0, f0, f5
	fmuls    f1, f1, f5

lbl_801DA038:
	fmuls    f7, f9, f4
	lfs      f5, lbl_805197CC@sda21(r2)
	fmuls    f8, f1, f3
	fmuls    f6, f0, f2
	fmsubs   f10, f1, f2, f7
	fmsubs   f8, f0, f4, f8
	fmsubs   f11, f9, f3, f6
	fmuls    f6, f10, f10
	fmuls    f7, f11, f11
	fmadds   f6, f8, f8, f6
	fadds    f6, f7, f6
	fcmpo    cr0, f6, f5
	ble      lbl_801DA07C
	ble      lbl_801DA080
	frsqrte  f5, f6
	fmuls    f6, f5, f6
	b        lbl_801DA080

lbl_801DA07C:
	fmr      f6, f5

lbl_801DA080:
	lfs      f5, lbl_805197CC@sda21(r2)
	fcmpo    cr0, f6, f5
	ble      lbl_801DA0A0
	lfs      f5, lbl_805197E4@sda21(r2)
	fdivs    f5, f5, f6
	fmuls    f8, f8, f5
	fmuls    f10, f10, f5
	fmuls    f11, f11, f5

lbl_801DA0A0:
	stfs     f9, 0x138(r31)
	stfs     f0, 0x148(r31)
	stfs     f1, 0x158(r31)
	stfs     f2, 0x13c(r31)
	stfs     f3, 0x14c(r31)
	stfs     f4, 0x15c(r31)
	stfs     f8, 0x140(r31)
	stfs     f10, 0x150(r31)
	stfs     f11, 0x160(r31)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x144(r31)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x154(r31)
	lfs      f0, 0x1a4(r31)
	stfs     f0, 0x164(r31)
	b        lbl_801DA0E8

lbl_801DA0E0:
	mr       r3, r31
	bl       makeTrMatrix__Q24Game8BaseItemFv

lbl_801DA0E8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x801DA0FC
 * @note Size: 0x140
 */
void Item::doAI()
{
	mFsm->exec(this);
	if (mAutopluckedTimer > 0.0f) {
		mAutopluckedTimer -= sys->mDeltaTime;
		if (mAutopluckedTimer <= 0.0f) {
			PikiMgr::mBirthMode = PikiMgr::PSM_Force;
			Piki* piki          = pikiMgr->birth();
			PikiMgr::mBirthMode = PikiMgr::PSM_Normal;
			if (piki) {
				piki->init(nullptr);
				piki->changeShape(mColor);
				piki->changeHappa(mHeadType);
				piki->mNavi = nullptr;
				piki->setPosition(mPosition, false);
				piki->mFsm->transit(piki, PIKISTATE_AutoNuki, nullptr);

				kill(nullptr);
				setAlive(false);
			} else {
				JUT_PANICLINE(603, "exit failed !!\n");
			}
		}
	}
}

/**
 * @note Address: 0x801DA23C
 * @note Size: 0x14C
 */
void Item::changeMaterial()
{
	// J3DMaterial* mat = mModel->mJ3dModel->getModelData()->getMaterialNodePointer(0);
	if (mModel->mJ3dModel->getModelData()->getMaterialNodePointer(0)) {
		Color4 pikiColor = Piki::pikiColors[mColor];
		mModel->mJ3dModel->getModelData()->getMaterialNodePointer(0)->getTevBlock()->setTevColor(
		    0, J2DGXColorS10(pikiColor.r, pikiColor.g, pikiColor.b, pikiColor.a));
	}

	mModel->mJ3dModel->calcMaterial();

	for (u16 i = 0; i < mModel->mJ3dModel->getModelData()->getMaterialNum(); i++) {
		J3DMatPacket* packet = mModel->mJ3dModel->getMatPacket(i);
		if (packet->mInitShapePacket->mDisplayList) {
			packet->beginDiff();
			mModel->mJ3dModel->getModelData()->getMaterialNodePointer(i)->getTevBlock()->diff(0x1000000);
			packet->endDiff();
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	lwz      r3, 0x174(r3)
	lwz      r3, 8(r3)
	lwz      r3, 4(r3)
	lwz      r3, 0x60(r3)
	lwz      r6, 0(r3)
	cmplwi   r6, 0
	beq      lbl_801DA2C8
	lhz      r4, 0x1f4(r30)
	lis      r3, pikiColors__Q24Game4Piki@ha
	addi     r0, r3, pikiColors__Q24Game4Piki@l
	addi     r5, r1, 8
	slwi     r3, r4, 2
	li       r4, 0
	add      r9, r0, r3
	lbz      r3, 1(r9)
	lbz      r7, 2(r9)
	lbz      r8, 3(r9)
	lbz      r0, 0(r9)
	sth      r3, 0xa(r1)
	sth      r0, 8(r1)
	sth      r7, 0xc(r1)
	sth      r8, 0xe(r1)
	lwz      r3, 0x2c(r6)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl

lbl_801DA2C8:
	lwz      r3, 0x174(r30)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r31, 0
	b        lbl_801DA34C

lbl_801DA2E8:
	lwz      r3, 0xc0(r5)
	rlwinm   r0, r31, 6, 0xa, 0x19
	clrlwi   r28, r31, 0x10
	add      r29, r3, r0
	lwz      r3, 0x28(r29)
	lwz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_801DA348
	mr       r3, r29
	bl       beginDiff__12J3DMatPacketFv
	lwz      r3, 0x174(r30)
	slwi     r0, r28, 2
	lis      r4, 0x100
	lwz      r3, 8(r3)
	lwz      r3, 4(r3)
	lwz      r3, 0x60(r3)
	lwzx     r3, r3, r0
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	bl       endDiff__12J3DMatPacketFv

lbl_801DA348:
	addi     r31, r31, 1

lbl_801DA34C:
	lwz      r4, 0x174(r30)
	clrlwi   r3, r31, 0x10
	lwz      r5, 8(r4)
	lwz      r4, 4(r5)
	lhz      r0, 0x5c(r4)
	cmplw    r3, r0
	blt      lbl_801DA2E8
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x801DA388
 * @note Size: 0x44
 */
void Item::onKeyEvent(const SysShape::KeyEvent& keyEvent)
{
	if (mCurrentState) {
		mCurrentState->onKeyEvent(this, keyEvent);
	}
}

/**
 * @note Address: 0x801DA3CC
 * @note Size: 0x4
 */
void State::onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent) { }

/**
 * @note Address: 0x801DA3D0
 * @note Size: 0x24
 */
void Item::updateBoundSphere()
{
	mBoundingSphere.mPosition = mPosition;
	mBoundingSphere.mRadius   = 4.0f;
}

/**
 * @note Address: 0x801DA3F4
 * @note Size: 0x24
 */
void Item::getLODSphere(Sys::Sphere& lodSphere)
{
	lodSphere.mPosition = mPosition;
	lodSphere.mRadius   = 20.0f;
}

/**
 * @note Address: 0x801DA418
 * @note Size: 0x4
 */
void Item::onSetPosition() { }

/**
 * @note Address: 0x801DA41C
 * @note Size: 0x74
 */
void Item::doSimulation(f32 rate)
{
	if (getStateID() == PIKIHEAD_Fall) {
		mVelocity.y -= (rate * _aiConstants->mGravity.mData);
		move(rate);
	}
}

/**
 * @note Address: 0x801DA490
 * @note Size: 0x2C
 */
bool Item::canPullout()
{
	return (s8)(getStateID() == PIKIHEAD_Wait); // why is this cast necessary smh
}

/**
 * @note Address: 0x801DA4BC
 * @note Size: 0x1AC
 */
bool Item::interactFue(InteractFue& whistle)
{
	if (canPullout() != false && isAlive()) {
		Navi* navi = static_cast<Navi*>(whistle.mCreature);
		if (!navi->getOlimarData()->hasItem(OlimarData::ODII_ProfessionalNoisemaker)) {
			return false;
		}

		if (gameSystem->isVersusMode()) {
			if (mColor == navi->mNaviIndex) {
				return false;
			}
		}

		PikiMgr::mBirthMode = PikiMgr::PSM_Force;
		Piki* piki          = pikiMgr->birth();
		PikiMgr::mBirthMode = PikiMgr::PSM_Normal;

		if (piki) {
			P2ASSERTLINE(701, whistle.mCreature->isNavi());
			piki->init(nullptr);
			piki->changeShape(mColor);
			piki->changeHappa(mHeadType);
			piki->mNavi = navi;
			piki->setPosition(mPosition, false);
			piki->mFsm->transit(piki, PIKISTATE_AutoNuki, nullptr);
			kill(nullptr);
			setAlive(false);
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x801DA668
 * @note Size: 0xD4
 */
Mgr::Mgr()
    : FixedSizeItemMgr<Item>()
{
	mItemName = "PikiHead";
	setModelSize(1);
	mObjectPathComponent = "user/Kando/objects/pikihead";
}

/**
 * @note Address: 0x801DA94C
 * @note Size: 0xAC
 */
void Mgr::onLoadResources()
{
	loadArchive("arc.szs");
	loadBmd("pikihead.bmd", 0, 0x20000);
	(*mModelData)->newSharedDisplayList(0x40000);
	JKRArchive* arc = openTextArc("texts.szs");
	loadAnimMgr(arc, "pikiheadAnimMgr.txt");
	closeTextArc(arc);
	createMgr(MAX_PIKI_COUNT, 0x80000);
}

/**
 * @note Address: 0x801DA9F8
 * @note Size: 0x378
 */
void Mgr::doSimpleDraw(Viewport* vp)
{
	// loop through head types (leaf, bud, flower, red bud, red flower)
	for (int i = 0; i < PikiHappaCount; i++) {
		J3DModelData* model     = pikiMgr->mHappaModel[i];
		J3DMaterial* mat        = model->mJointTree.mJoints[0]->mMaterial;
		j3dSys.mVtxPos          = model->mVertexData.mVtxPos;
		j3dSys.mVtxNorm         = model->mVertexData.mVtxNorm;
		j3dSys.mVtxColor        = model->mVertexData.mVtxColor[0];
		J3DShape::sOldVcdVatCmd = nullptr;

		while (mat) {
			mat->loadSharedDL();
			mat->mShape->loadPreDrawSetting();

			Iterator<Item> iter(this);
			CI_LOOP(iter)
			{
				Item* sprout = *iter;
				int happa    = sprout->mHeadType;
				if (!sprout->mLod.isFlag(AILOD_IsVisible)) {
					sprout->mModel->getJoint("happajnt3")->getWorldMatrix()->getTranslation(sprout->mEfxPosition);
					sprout->mEfxPosition.y += 3.0f;
					continue;
				}

				if ((sprout->mColor == White || sprout->mColor == Purple) && (happa >= Bud)) {
					happa += 2;
				}

				if (happa == i) {
					Matrixf* worldMat = sprout->mModel->getJoint("happajnt3")->getWorldMatrix();
					worldMat->getTranslation(sprout->mEfxPosition);
					sprout->mEfxPosition.y += 3.0f;
					Matrixf mtx;
					PSMTXConcat(vp->getMatrix(true)->mMatrix.mtxView, worldMat->mMatrix.mtxView, mtx.mMatrix.mtxView);
					GXLoadPosMtxImm(mtx.mMatrix.mtxView, GX_PNMTX0);
					GXLoadNrmMtxImm(mtx.mMatrix.mtxView, GX_PNMTX0);
					mat->mShape->simpleDrawCache();
				}
			}

			mat = mat->mNext;
		}
	}
}

/**
 * @note Address: 0x801DAD70
 * @note Size: 0x6C
 */
void Mgr::onCreateModel(SysShape::Model* model)
{
	model->getJ3DModel()->newDifferedDisplayList(0x1000000);
	model->getJ3DModel()->calc();
	model->getJ3DModel()->calcMaterial();
	model->getJ3DModel()->makeDL();
	model->getJ3DModel()->lock();
}

/**
 * @note Address: 0x801DADDC
 * @note Size: 0xA0
 */
Item* Mgr::birth()
{
	switch (PikiMgr::mBirthMode) {
	case PikiMgr::PSM_Normal: // don't make a sprout if we're at or over 100 pikmin on the field
		if (pikiMgr->mActiveCount + mMonoObjectMgr.mActiveCount >= 100) {
			return nullptr;
		}
		break;

	case PikiMgr::PSM_Force: // just make the damn sprout
		break;

	case PikiMgr::PSM_Replace:                      // we should not be entering a cave floor and immediately making a sprout lol
		JUT_PANICLINE(834, "これはありえないよ\n"); // 'this is impossible' lol
		break;
	}

	return mMonoObjectMgr.birth();
}

/**
 * @note Address: 0x801DAE7C
 * @note Size: 0x60
 */
Item* Mgr::generatorBirth(Vector3f& pos, Vector3f& rot, GenItemParm* genParm)
{
	Item* item = birth();
	item->init(nullptr);
	item->setPosition(pos, false);
	return item;
}

} // namespace ItemPikihead
} // namespace Game
