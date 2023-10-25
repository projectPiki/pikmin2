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

/*
 * --INFO--
 * Address:	801D8ABC
 * Size:	000294
 */
void FSM::init(Item*)
{
	create(PIKIHEAD_StateCount);
	registerState(new FallState());
	registerState(new BuryState());
	registerState(new WaitState());
	registerState(new TaneState());
	registerState(new HatugaState());
	registerState(new GrowState());
	registerState(new SioreState());
}

/*
 * --INFO--
 * Address:	801D8D50
 * Size:	000098
 */
void FallState::init(Item* item, StateArg* arg)
{
	_14 = 10.0f - randFloat() * 0.5f; // 9.5-10.5
	_10 = _14 * 0.2f;                 // 1.9-2.1
	item->mEfxTane->createTanekira_(item->mEfxTane->mPos);
	item->mAnimator.startAnim(4, nullptr);
}

/*
 * --INFO--
 * Address:	801D8DE8
 * Size:	000038
 */
void FallState::exec(Item* item) { item->applyAirDrag(sys->getFrameLength(), _10, _14); }

/*
 * --INFO--
 * Address:	801D8E20
 * Size:	000024
 */
void FallState::cleanup(Item* item) { item->mEfxTane->killTanekira_(); }

/*
 * --INFO--
 * Address:	801D8E44
 * Size:	000028
 */
void FallState::onPlatCollision(Item* item, PlatEvent& event) { item->kill(nullptr); }

/*
 * --INFO--
 * Address:	801D8E6C
 * Size:	0002F0
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

/*
 * --INFO--
 * Address:	801D918C
 * Size:	00008C
 */
void BuryState::init(Item* item, StateArg* arg)
{
	item->mAnimator.startAnim(3, item);
	mAnimDone = false;
	mTimer    = randFloat() * 2.0f + pikiMgr->mParms->mPikiParms.mBuriedSeedWaitTime.mValue;
}

/*
 * --INFO--
 * Address:	801D9218
 * Size:	000068
 */
void BuryState::exec(Item* item)
{
	// timer only starts counting down after animation finishes
	if (mAnimDone) {
		mTimer -= sys->getFrameLength();
		if (mTimer <= 0.0f) {
			transit(item, PIKIHEAD_Hatuga, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	801D9280
 * Size:	000004
 */
void BuryState::cleanup(Item* item) { }

/*
 * --INFO--
 * Address:	801D9284
 * Size:	00000C
 */
void BuryState::onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent) { mAnimDone = true; }

/*
 * --INFO--
 * Address:	801D9290
 * Size:	00008C
 */
void TaneState::init(Item* item, StateArg* arg)
{
	item->mAnimator.startAnim(5, item);
	mAnimDone = false;
	mTimer    = randFloat() * 2.0f + pikiMgr->mParms->mPikiParms.mUnpluckableTime.mValue;
}

/*
 * --INFO--
 * Address:	801D931C
 * Size:	000068
 */
void TaneState::exec(Item* item)
{
	// timer only starts counting down after animation finishes
	if (mAnimDone) {
		mTimer -= sys->getFrameLength();
		if (mTimer <= 0.0f) {
			transit(item, PIKIHEAD_Hatuga, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	801D9384
 * Size:	000004
 */
void TaneState::cleanup(Item* item) { }

/*
 * --INFO--
 * Address:	801D9388
 * Size:	00000C
 */
void TaneState::onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent) { mAnimDone = true; }

/*
 * --INFO--
 * Address:	801D9394
 * Size:	000058
 */
void HatugaState::init(Item* item, StateArg* arg)
{
	item->mAnimator.startAnim(1, item);
	item->startSound(PSSE_PK_SE_ONY_HATSUGA);
}

/*
 * --INFO--
 * Address:	801D93EC
 * Size:	000004
 */
void HatugaState::exec(Item* item) { }

/*
 * --INFO--
 * Address:	801D93F0
 * Size:	000004
 */
void HatugaState::cleanup(Item* item) { }

/*
 * --INFO--
 * Address:	801D93F4
 * Size:	000034
 */
void HatugaState::onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent) { transit(item, PIKIHEAD_Wait, nullptr); }

/*
 * --INFO--
 * Address:	801D9428
 * Size:	0000EC
 */
void WaitState::init(Item* item, StateArg* arg)
{
	item->mEfxTane->createKourin_(item->mEfxTane->mPos);
	item->mAnimator.startAnim(0, item);
	if (item->mHeadType == Flower) {
		mTimer = 2.0f * randFloat() + pikiMgr->mParms->mPikiParms.mWitherFromFlowerTime.mValue;
	} else {
		mTimer = 2.0f * randFloat() + pikiMgr->mParms->mPikiParms.mGrowUpToFlowerTime.mValue;
	}
}

/*
 * --INFO--
 * Address:	801D9514
 * Size:	00009C
 */
void WaitState::exec(Item* item)
{
	if (!moviePlayer || moviePlayer->mDemoState == MoviePlayer::MOVIEPLAY_SUCCESS) {
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

/*
 * --INFO--
 * Address:	801D95B0
 * Size:	000024
 */
void WaitState::cleanup(Item* item) { item->mEfxTane->killKourin_(); }

/*
 * --INFO--
 * Address:	801D95D4
 * Size:	000038
 */
void WaitState::onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent) { item->mAnimator.startAnim(0, item); }

/*
 * --INFO--
 * Address:	801D960C
 * Size:	00004C
 */
void GrowState::init(Item* item, StateArg* arg)
{
	item->mAnimator.startAnim(6, item);
	item->mEfxTane->createGlow1_(item->mEfxTane->mPos);
}

/*
 * --INFO--
 * Address:	801D9658
 * Size:	000004
 */
void GrowState::exec(Item* item) { }

/*
 * --INFO--
 * Address:	801D965C
 * Size:	000004
 */
void GrowState::cleanup(Item* item) { }

/*
 * --INFO--
 * Address:	801D9660
 * Size:	0000CC
 */
void GrowState::onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent)
{
	if (keyEvent.mType == KEYEVENT_2) {
		item->mHeadType = (item->mHeadType + 1) % 3;
		efx::createSimpleGlow2(*item->mEfxTane->mPos); // TODO: not declared yet
		if (item->mHeadType == Bud) {
			item->startSound(PSSE_PK_SE_ONY_TSUBOMI);
		} else if (item->mHeadType == Flower) {
			item->startSound(PSSE_PK_SE_ONY_SAKU);
		}
	} else {
		transit(item, PIKIHEAD_Wait, nullptr);
	}
}

/*
 * --INFO--
 * Address:	801D972C
 * Size:	0000AC
 */
void SioreState::init(Item* item, StateArg* arg)
{
	item->mAnimator.startAnim(2, item);
	mAnimDone = false;
	mTimer    = randFloat() * 2.0f + pikiMgr->mParms->mPikiParms.mWitheredHideTime.mValue;
	item->startSound(PSSE_PK_SE_ONY_KARERU);
}

/*
 * --INFO--
 * Address:	801D97D8
 * Size:	000068
 */
void SioreState::exec(Item* item)
{
	if (mAnimDone) {
		mTimer -= sys->getFrameLength();
		if (mTimer <= 0.0f) {
			transit(item, PIKIHEAD_Bury, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	801D9840
 * Size:	000004
 */
void SioreState::cleanup(Item* item) { }

/*
 * --INFO--
 * Address:	801D9844
 * Size:	000014
 */
void SioreState::onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent)
{
	item->mHeadType = Leaf;
	mAnimDone       = true;
}

/*
 * --INFO--
 * Address:	801D9858
 * Size:	0001D0
 */
Item::Item()
    : FSMItem<Item, FSM, State>(OBJTYPE_Pikihead)
    , mEfxTane(new efx::TPkEffectTane())
{
	mAnimSpeed = 30.0f;
	mCollTree->createSingleSphere(mModel, 0, mBoundingSphere, nullptr);
}

/*
 * --INFO--
 * Address:	801D9AC4
 * Size:	00021C
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
		mVelocity = itemInitArg->mVelocity;
		mHeadType = itemInitArg->mHeadType;
		_1E4      = itemInitArg->_1C;
	} else {
		mColor    = randFloat() * 5.0f;
		mHeadType = Leaf;
		_1E4      = -1.0f;
	}
	mEfxTane->init();
	mEfxTane->mPikiColor = mColor;
	mEfxTane->_08        = &mPosition;
	mEfxTane->mPos       = &mEfxPosition;
	mEfxTane->_10        = &mBaseTrMatrix;
	mEfxTane->_0C        = mModel->getJoint("happajnt3")->getWorldMatrix();
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

/*
 * --INFO--
 * Address:	801D9D14
 * Size:	000094
 */
void Item::onKill(CreatureKillArg* settings)
{
	Radar::Mgr::exit(this);
	if (mCurrentState) {
		mCurrentState->cleanup(this);
	}
	mgr->kill(this);
	if (!settings || !settings->isFlag(CKILL_Unk1)) {
		GameStat::mePikis.dec(mColor);
	}
}

/*
 * --INFO--
 * Address:	801D9DD0
 * Size:	00002C
 */
bool Item::needSave() { return getStateID() != PIKIHEAD_Fall; }

/*
 * --INFO--
 * Address:	801D9DFC
 * Size:	00005C
 */
void Item::cacheSave(Stream& output)
{
	output.writeByte((mHeadType << 4) + mColor);
	mPosition.write(output);
}

/*
 * --INFO--
 * Address:	801D9E58
 * Size:	0000A4
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

/*
 * --INFO--
 * Address:	801D9EFC
 * Size:	000200
 */
void Item::makeTrMatrix()
{
	if (getStateID() == PIKIHEAD_Fall) {
		if (mVelocity.length() > 0.0f) {
			Vector3f xVec = mVelocity;
			xVec.normalise();
			xVec *= -1.0f;
			Vector3f zAxis(0.0f, 0.0f, 1.0f);
			Vector3f yVec = cross(xVec, zAxis);
			yVec.normalise();

			Vector3f xAxis(1.0f, 0.0f, 0.0f);
			Vector3f zVec = cross(yVec, xAxis);
			zVec.normalise();

			mBaseTrMatrix.setBasis(0, xVec);
			mBaseTrMatrix.setBasis(1, yVec);
			mBaseTrMatrix.setBasis(2, zVec);
			mBaseTrMatrix.setTranslation(mPosition);
		}
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

/*
 * --INFO--
 * Address:	801DA0FC
 * Size:	000140
 */
void Item::doAI()
{
	mFsm->exec(this);
	if (_1E4 > 0.0f) {
		_1E4 -= sys->mDeltaTime;
		if (_1E4 <= 0.0f) {
			PikiMgr::mBirthMode = 1;
			Piki* piki          = pikiMgr->birth();
			PikiMgr::mBirthMode = 0;
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

/*
 * --INFO--
 * Address:	801DA23C
 * Size:	00014C
 */
void Item::changeMaterial()
{
	J3DMaterial* mat = mModel->mJ3dModel->mModelData->getMaterialNodePointer(0);
	if (mat) {
		Color4 pikiColor = Piki::pikiColors[mColor];
		J2DGXColorS10 color(pikiColor.r, pikiColor.g, pikiColor.b, pikiColor.a);
		mat->mTevBlock->setTevColor(0, color);
	}

	mModel->mJ3dModel->calcMaterial();

	for (u16 i = 0; i < mModel->mJ3dModel->getModelData()->getMaterialNum(); i++) {
		J3DMatPacket* packet = &mModel->mJ3dModel->mMatPackets[i];
		if (packet->mInitShapePacket->mDisplayList) {
			packet->beginDiff();
			mModel->mJ3dModel->getModelData()->getMaterialNodePointer(i)->mTevBlock->diff(0x1000000);
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

/*
 * --INFO--
 * Address:	801DA388
 * Size:	000044
 */
void Item::onKeyEvent(const SysShape::KeyEvent& keyEvent)
{
	if (mCurrentState) {
		mCurrentState->onKeyEvent(this, keyEvent);
	}
}

/*
 * --INFO--
 * Address:	801DA3CC
 * Size:	000004
 */
void State::onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent) { }

/*
 * --INFO--
 * Address:	801DA3D0
 * Size:	000024
 */
void Item::updateBoundSphere()
{
	mBoundingSphere.mPosition = mPosition;
	mBoundingSphere.mRadius   = 4.0f;
}

/*
 * --INFO--
 * Address:	801DA3F4
 * Size:	000024
 */
void Item::getLODSphere(Sys::Sphere& lodSphere)
{
	lodSphere.mPosition = mPosition;
	lodSphere.mRadius   = 20.0f;
}

/*
 * --INFO--
 * Address:	801DA418
 * Size:	000004
 */
void Item::onSetPosition() { }

/*
 * --INFO--
 * Address:	801DA41C
 * Size:	000074
 */
void Item::doSimulation(f32 rate)
{
	if (getStateID() == PIKIHEAD_Fall) {
		mVelocity.y -= (rate * _aiConstants->mGravity.mData);
		move(rate);
	}
}

/*
 * --INFO--
 * Address:	801DA490
 * Size:	00002C
 */
bool Item::canPullout()
{
	return (s8)(getStateID() == PIKIHEAD_Wait); // why is this cast necessary smh
}

/*
 * --INFO--
 * Address:	801DA4BC
 * Size:	0001AC
 */
bool Item::interactFue(InteractFue& whistle)
{
	if (canPullout() && isAlive()) {
		Navi* navi = static_cast<Navi*>(whistle.mCreature);
		if (!navi->getOlimarData()->hasItem(OlimarData::ODII_ProfessionalNoisemaker)) {
			return false;
		}

		if (gameSystem->isVersusMode()) {
			if (mColor == navi->mNaviIndex) {
				return false;
			}
		}

		PikiMgr::mBirthMode = 1;
		Piki* piki          = pikiMgr->birth();
		PikiMgr::mBirthMode = 0;

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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r4
	bl
"getStateID__Q24Game89FSMItem<Q34Game12ItemPikihead4Item,Q34Game12ItemPikihead3FSM,Q34Game12ItemPikihead5State>Fv"
	subfic   r0, r3, 2
	cntlzw   r0, r0
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_801DA644
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801DA644
	lwz      r30, 4(r28)
	mr       r3, r30
	bl       getOlimarData__Q24Game4NaviFv
	li       r4, 3
	bl       hasItem__Q24Game10OlimarDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801DA534
	li       r3, 0
	b        lbl_801DA648

lbl_801DA534:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_801DA55C
	lhz      r3, 0x1f4(r31)
	lhz      r0, 0x2dc(r30)
	cmplw    r3, r0
	bne      lbl_801DA55C
	li       r3, 0
	b        lbl_801DA648

lbl_801DA55C:
	li       r0, 1
	lwz      r3, pikiMgr__4Game@sda21(r13)
	stw      r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	or.      r29, r3, r3
	stw      r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
	beq      lbl_801DA644
	lwz      r3, 4(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801DA5C0
	lis      r3, lbl_80480828@ha
	lis      r5, lbl_8048084C@ha
	addi     r3, r3, lbl_80480828@l
	li       r4, 0x2bd
	addi     r5, r5, lbl_8048084C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801DA5C0:
	mr       r3, r29
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lhz      r4, 0x1f4(r31)
	mr       r3, r29
	bl       changeShape__Q24Game4PikiFi
	lhz      r4, 0x1f6(r31)
	mr       r3, r29
	bl       changeHappa__Q24Game4PikiFi
	stw      r30, 0x2c4(r29)
	mr       r3, r29
	addi     r4, r31, 0x19c
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lwz      r3, 0x28c(r29)
	mr       r4, r29
	li       r5, 0x11
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_801DA648

lbl_801DA644:
	li       r3, 0

lbl_801DA648:
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

/*
 * --INFO--
 * Address:	801DA668
 * Size:	0000D4
 */
Mgr::Mgr()
    : FixedSizeItemMgr<Item>()
{
	mItemName = "PikiHead";
	setModelSize(1);
	mObjectPathComponent = "user/Kando/objects/pikihead";
}

/*
 * --INFO--
 * Address:	801DA94C
 * Size:	0000AC
 */
void Mgr::onLoadResources()
{
	loadArchive("arc.szs");
	loadBmd("pikihead.bmd", 0, 0x20000);
	(*mModelData)->newSharedDisplayList(0x40000);
	JKRArchive* arc = openTextArc("texts.szs");
	loadAnimMgr(arc, "pikiheadAnimMgr.txt");
	closeTextArc(arc);
	createMgr(100, 0x80000);
}

/*
 * --INFO--
 * Address:	801DA9F8
 * Size:	000378
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

/*
 * --INFO--
 * Address:	801DAD70
 * Size:	00006C
 */
void Mgr::onCreateModel(SysShape::Model* model)
{
	model->getJ3DModel()->newDifferedDisplayList(0x1000000);
	model->getJ3DModel()->calc();
	model->getJ3DModel()->calcMaterial();
	model->getJ3DModel()->makeDL();
	model->getJ3DModel()->lock();
}

/*
 * --INFO--
 * Address:	801DADDC
 * Size:	0000A0
 */
Item* Mgr::birth()
{
	switch (PikiMgr::mBirthMode) {
	case 0:
		if (pikiMgr->mActiveCount + mMonoObjectMgr.mActiveCount >= 100) {
			return nullptr;
		}
		break;
	case 1:
		break;
	case 2:
		JUT_PANICLINE(834, "‚±‚ê‚Í‚ ‚è‚¦‚È‚¢‚æ\n"); // 'this is impossible' lol
		break;
	}

	return mMonoObjectMgr.birth();
}

/*
 * --INFO--
 * Address:	801DAE7C
 * Size:	000060
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
