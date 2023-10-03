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
	mEfxTane->_10        = &mObjMatrix;
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

			mObjMatrix.setBasis(0, xVec);
			mObjMatrix.setBasis(1, yVec);
			mObjMatrix.setBasis(2, zVec);
			mObjMatrix.setTranslation(mPosition);
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

		if (gameSystem->mMode == GSM_VERSUS_MODE) {
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

	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	lis      r6, j3dSys@ha
	lis      r5, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
	stw      r0, 0x74(r1)
	stmw     r23, 0x4c(r1)
	mr       r25, r3
	mr       r26, r4
	addi     r30, r6, j3dSys@l
	addi     r31, r5, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
	li       r28, 0
	li       r29, 0

lbl_801DAA28:
	lwz      r4, pikiMgr__4Game@sda21(r13)
	addi     r3, r29, 0x58
	li       r0, 0
	lwzx     r5, r4, r3
	lwz      r4, 0x28(r5)
	lwz      r3, 0xa0(r5)
	lwz      r4, 0(r4)
	lwz      r27, 0x58(r4)
	stw      r3, 0x10c(r30)
	lwz      r3, 0xa4(r5)
	stw      r3, 0x110(r30)
	lwz      r3, 0xac(r5)
	stw      r3, 0x114(r30)
	stw      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)
	b        lbl_801DAD44

lbl_801DAA64:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r27)
	bl       loadPreDrawSetting__8J3DShapeCFv
	cmplwi   r25, 0
	mr       r3, r25
	beq      lbl_801DAA90
	addi     r3, r25, 0x30

lbl_801DAA90:
	li       r0, 0
	stw      r31, 8(r1)
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801DAAC4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801DAD20

lbl_801DAAC4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801DAB30

lbl_801DAADC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801DAD20
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801DAB30:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801DAADC
	b        lbl_801DAD20

lbl_801DAB50:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0xd8(r3)
	mr       r24, r3
	lhz      r3, 0x1f6(r3)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	bne      lbl_801DABB8
	lis      r4, lbl_8048081C@ha
	lwz      r3, 0x174(r24)
	addi     r4, r4, lbl_8048081C@l
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f1, 0xc(r3)
	lfs      f0, lbl_805197F8@sda21(r2)
	stfs     f1, 0x1e8(r24)
	lfs      f1, 0x1c(r3)
	stfs     f1, 0x1ec(r24)
	lfs      f1, 0x2c(r3)
	stfs     f1, 0x1f0(r24)
	lfs      f1, 0x1ec(r24)
	fadds    f0, f1, f0
	stfs     f0, 0x1ec(r24)
	b        lbl_801DAC64

lbl_801DABB8:
	lhz      r0, 0x1f4(r24)
	cmplwi   r0, 4
	beq      lbl_801DABCC
	cmplwi   r0, 3
	bne      lbl_801DABD8

lbl_801DABCC:
	cmpwi    r3, 1
	blt      lbl_801DABD8
	addi     r3, r3, 2

lbl_801DABD8:
	cmpw     r3, r28
	bne      lbl_801DAC64
	lis      r4, lbl_8048081C@ha
	lwz      r3, 0x174(r24)
	addi     r4, r4, lbl_8048081C@l
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r23, r3
	lfs      f0, lbl_805197F8@sda21(r2)
	lfs      f1, 0xc(r23)
	mr       r3, r26
	li       r4, 1
	stfs     f1, 0x1e8(r24)
	lfs      f1, 0x1c(r23)
	stfs     f1, 0x1ec(r24)
	lfs      f1, 0x2c(r23)
	stfs     f1, 0x1f0(r24)
	lfs      f1, 0x1ec(r24)
	fadds    f0, f1, f0
	stfs     f0, 0x1ec(r24)
	bl       getMatrix__8ViewportFb
	mr       r4, r23
	addi     r5, r1, 0x18
	bl       PSMTXConcat
	addi     r3, r1, 0x18
	li       r4, 0
	bl       GXLoadPosMtxImm
	addi     r3, r1, 0x18
	li       r4, 0
	bl       GXLoadNrmMtxImm
	lwz      r3, 8(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_801DAC64:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801DAC90
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801DAD20

lbl_801DAC90:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801DAD04

lbl_801DACB0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801DAD20
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801DAD04:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801DACB0

lbl_801DAD20:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801DAB50
	lwz      r27, 4(r27)

lbl_801DAD44:
	cmplwi   r27, 0
	bne      lbl_801DAA64
	addi     r28, r28, 1
	addi     r29, r29, 4
	cmpwi    r28, 5
	blt      lbl_801DAA28
	lmw      r23, 0x4c(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
	cmpwi    r0, 1
	beq      lbl_801DAE54
	bge      lbl_801DAE0C
	cmpwi    r0, 0
	bge      lbl_801DAE18
	b        lbl_801DAE54

lbl_801DAE0C:
	cmpwi    r0, 3
	bge      lbl_801DAE54
	b        lbl_801DAE38

lbl_801DAE18:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r0, 0x6c(r31)
	lwz      r3, 0x20(r3)
	add      r0, r3, r0
	cmpwi    r0, 0x64
	blt      lbl_801DAE54
	li       r3, 0
	b        lbl_801DAE68

lbl_801DAE38:
	lis      r3, lbl_80480828@ha
	lis      r5, lbl_804808B0@ha
	addi     r3, r3, lbl_80480828@l
	li       r4, 0x342
	addi     r5, r5, lbl_804808B0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801DAE54:
	addi     r3, r31, 0x4c
	lwz      r12, 0x4c(r31)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_801DAE68:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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

/*
 * --INFO--
 * Address:	801DAEDC
 * Size:	000118
 */
Mgr::~Mgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801DAFD8
	lis      r3, __vt__Q34Game12ItemPikihead3Mgr@ha
	addi     r3, r3, __vt__Q34Game12ItemPikihead3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x74
	stw      r0, 0x30(r30)
	beq      lbl_801DAFC8
	lis      r3,
"__vt__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>"@ha addic.   r0,
r30, 0x4c addi     r3, r3,
"__vt__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>"@l stw      r3,
0(r30) addi     r0, r3, 0x74 stw      r0, 0x30(r30) beq      lbl_801DAF94 lis
r3, "__vt__41MonoObjectMgr<Q34Game12ItemPikihead4Item>"@ha addic.   r0, r30,
0x4c addi     r3, r3, "__vt__41MonoObjectMgr<Q34Game12ItemPikihead4Item>"@l stw
r3, 0x4c(r30) addi     r0, r3, 0x2c stw      r0, 0x68(r30) beq      lbl_801DAF94
	lis      r3, "__vt__37ObjectMgr<Q34Game12ItemPikihead4Item>"@ha
	addic.   r0, r30, 0x4c
	addi     r3, r3, "__vt__37ObjectMgr<Q34Game12ItemPikihead4Item>"@l
	stw      r3, 0x4c(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x68(r30)
	beq      lbl_801DAF94
	lis      r3, "__vt__37Container<Q34Game12ItemPikihead4Item>"@ha
	addic.   r0, r30, 0x4c
	addi     r0, r3, "__vt__37Container<Q34Game12ItemPikihead4Item>"@l
	stw      r0, 0x4c(r30)
	beq      lbl_801DAF94
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x4c
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x4c(r30)
	bl       __dt__5CNodeFv

lbl_801DAF94:
	addic.   r0, r30, 0x30
	beq      lbl_801DAFC8
	lis      r3, "__vt__37Container<Q34Game12ItemPikihead4Item>"@ha
	addic.   r0, r30, 0x30
	addi     r0, r3, "__vt__37Container<Q34Game12ItemPikihead4Item>"@l
	stw      r0, 0x30(r30)
	beq      lbl_801DAFC8
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x30
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x30(r30)
	bl       __dt__5CNodeFv

lbl_801DAFC8:
	extsh.   r0, r31
	ble      lbl_801DAFD8
	mr       r3, r30
	bl       __dl__FPv

lbl_801DAFD8:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DAFF4
 * Size:	00000C
 */
u32 Mgr::generatorGetID() { return 'pkhd'; }

/*
 * --INFO--
 * Address:	801DB000
 * Size:	000088
 */
// void ObjectMgr<Item>::~ObjectMgr()
// {
// }

/*
 * --INFO--
 * Address:	801DB088
 * Size:	00002C
 */
// void FixedSizeItemMgr<Item>::birth()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwzu     r12, 0x4c(r3)
// 	lwz      r12, 0x7c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DB0B4
 * Size:	00000C
 */
char* Item::getCreatureName()
{
	return "Pikihead";
	/*
	lis      r3, lbl_804808C4@ha
	addi     r3, r3, lbl_804808C4@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	801DB0C0
 * Size:	000034
 */
// void FSMItem<Item, FSM, State>::doAI()
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

/*
 * --INFO--
 * Address:	801DB0F4
 * Size:	000004
 */
// void FixedSizeItemMgr<Item>::onCreateModel(SysShape::Model*) { }

/*
 * --INFO--
 * Address:	801DB0F8
 * Size:	00002C
 */
// void FixedSizeItemMgr<Item>::doAnimation()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwzu     r12, 0x4c(r3)
// 	lwz      r12, 0x64(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DB124
 * Size:	00002C
 */
// void FixedSizeItemMgr<Item>::doEntry()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwzu     r12, 0x4c(r3)
// 	lwz      r12, 0x68(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DB150
 * Size:	00002C
 */
// void FixedSizeItemMgr<Item>::doSetView(int)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwzu     r12, 0x4c(r3)
// 	lwz      r12, 0x6c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DB17C
 * Size:	00002C
 */
// void FixedSizeItemMgr<Item>::doViewCalc()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwzu     r12, 0x4c(r3)
// 	lwz      r12, 0x70(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DB1A8
 * Size:	00002C
 */
// void FixedSizeItemMgr<Item>::doSimulation(f32)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwzu     r12, 0x4c(r3)
// 	lwz      r12, 0x74(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DB1D4
 * Size:	00002C
 */
// void FixedSizeItemMgr<Item>::doDirectDraw(Graphics&)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwzu     r12, 0x4c(r3)
// 	lwz      r12, 0x78(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DB200
 * Size:	0001E8
 */
// void FixedSizeItemMgr<Item>::initDependency()
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
// 	addi     r3, r3, 0x4c
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r4, r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
// 	cmplwi   r0, 0
// 	stw      r4, 8(r1)
// 	stw      r0, 0x14(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_801DB24C
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DB3B8

// lbl_801DB24C:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DB2B8

// lbl_801DB264:
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
// 	bne      lbl_801DB3B8
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801DB2B8:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801DB264
// 	b        lbl_801DB3B8

// lbl_801DB2D8:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1bc(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_801DB328
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DB3B8

// lbl_801DB328:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DB39C

// lbl_801DB348:
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
// 	bne      lbl_801DB3B8
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801DB39C:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801DB348

// lbl_801DB3B8:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_801DB2D8
// 	lwz      r0, 0x24(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DB3E8
 * Size:	00002C
 */
// void FixedSizeItemMgr<Item>::getNext(void*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwzu     r12, 0x4c(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DB414
 * Size:	00002C
 */
// void FixedSizeItemMgr<Item>::getStart()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwzu     r12, 0x4c(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DB440
 * Size:	000030
 */
// void FixedSizeItemMgr<Item>::createModel(Item*)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r5, r4
// 	  stw       r0, 0x14(r1)
// 	  lwz       r3, 0x7C(r3)
// 	  lwz       r4, 0x188(r4)
// 	  lwz       r5, 0x184(r5)
// 	  bl        0x24F9A0
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DB470
 * Size:	000044
 */
// void FSMItem<Item, FSM, State>::onKeyEvent(const SysShape::KeyEvent&)
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

/*
 * --INFO--
 * Address:	801DB4B4
 * Size:	000004
 */
// void ItemState<Item>::onDamage(Item*, f32) { }

/*
 * --INFO--
 * Address:	801DB4B8
 * Size:	000004
 */
// void ItemState<Item>::onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent) { }

/*
 * --INFO--
 * Address:	801DB4BC
 * Size:	000004
 */
// void ItemState<Item>::onBounce(Item*, Sys::Triangle*) { }

/*
 * --INFO--
 * Address:	801DB4C0
 * Size:	000004
 */
// void ItemState<Item>::onPlatCollision(Item*, PlatEvent&) { }

/*
 * --INFO--
 * Address:	801DB4C4
 * Size:	000004
 */
// void ItemState<Item>::onCollision(Item*, CollEvent&) { }

/*
 * --INFO--
 * Address:	801DB4C8
 * Size:	000004
 */
// void FSMState<Item>::init(Item*, StateArg*) { }

/*
 * --INFO--
 * Address:	801DB4CC
 * Size:	000004
 */
// void FSMState<Item>::exec(Item*) { }

/*
 * --INFO--
 * Address:	801DB4D0
 * Size:	000004
 */
// void FSMState<Item>::resume(Item*) { }

/*
 * --INFO--
 * Address:	801DB4D4
 * Size:	000004
 */
// void FSMState<Item>::restart(Item*) { }

/*
 * --INFO--
 * Address:	801DB4D8
 * Size:	000004
 */
// void StateMachine<Item>::init(Item*) { }

/*
 * --INFO--
 * Address:	801DB4DC
 * Size:	000038
 */
// void StateMachine<Item>::exec(Item*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwz      r3, 0x1dc(r4)
// 	cmplwi   r3, 0
// 	beq      lbl_801DB504
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0xc(r12)
// 	mtctr    r12
// 	bctrl

// lbl_801DB504:
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DB514
 * Size:	000064
 */
// void StateMachine<Item>::create(int)
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

/*
 * --INFO--
 * Address:	801DB578
 * Size:	000060
 */
// void MonoObjectMgr<Item>::birth()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	bl       "getEmptyIndex__41MonoObjectMgr<Q34Game12ItemPikihead4Item>Fv"
// 	cmpwi    r3, -1
// 	beq      lbl_801DB5C0
// 	lwz      r6, 0x28(r31)
// 	li       r0, 0
// 	lwz      r4, 0x2c(r31)
// 	mulli    r5, r3, 0x1f8
// 	stbx     r0, r4, r3
// 	add      r3, r6, r5
// 	lwz      r4, 0x20(r31)
// 	addi     r0, r4, 1
// 	stw      r0, 0x20(r31)
// 	b        lbl_801DB5C4

// lbl_801DB5C0:
// 	li       r3, 0

// lbl_801DB5C4:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DB5D8
 * Size:	000054
 */
// void MonoObjectMgr<Item>::kill(Item*)
// {
// 	/*
// 	lwz      r0, 0x24(r3)
// 	li       r6, 0
// 	li       r5, 0
// 	mtctr    r0
// 	cmpwi    r0, 0
// 	blelr

// lbl_801DB5F0:
// 	lwz      r0, 0x28(r3)
// 	add      r0, r0, r5
// 	cmplw    r0, r4
// 	bne      lbl_801DB61C
// 	lwz      r4, 0x2c(r3)
// 	li       r0, 1
// 	stbx     r0, r4, r6
// 	lwz      r4, 0x20(r3)
// 	addi     r0, r4, -1
// 	stw      r0, 0x20(r3)
// 	blr

// lbl_801DB61C:
// 	addi     r5, r5, 0x1f8
// 	addi     r6, r6, 1
// 	bdnz     lbl_801DB5F0
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DB62C
 * Size:	000040
 */
// void MonoObjectMgr<Item>::getNext(void*)
// {
// 	/*
// 	lwz      r5, 0x24(r3)
// 	addi     r6, r4, 1
// 	subf     r0, r6, r5
// 	mtctr    r0
// 	cmpw     r6, r5
// 	bge      lbl_801DB664

// lbl_801DB644:
// 	lwz      r4, 0x2c(r3)
// 	lbzx     r0, r4, r6
// 	cmplwi   r0, 0
// 	bne      lbl_801DB65C
// 	mr       r3, r6
// 	blr

// lbl_801DB65C:
// 	addi     r6, r6, 1
// 	bdnz     lbl_801DB644

// lbl_801DB664:
// 	mr       r3, r5
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DB66C
 * Size:	000030
 */
// void MonoObjectMgr<Item>::getStart()
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

/*
 * --INFO--
 * Address:	801DB69C
 * Size:	000008
 */
// void MonoObjectMgr<Item>::getEnd()
// {
// 	/*
// 	lwz      r3, 0x24(r3)
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DB6A4
 * Size:	000010
 */
// void MonoObjectMgr<Item>::getAt(int)
// {
// }

/*
 * --INFO--
 * Address:	801DB6B4
 * Size:	000008
 */
// void MonoObjectMgr<Item>::getTo()
// {
// 	/*
// 	lwz      r3, 0x24(r3)
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DB6BC
 * Size:	000080
 */
// void MonoObjectMgr<Item>::doAnimation()
// {
// }

/*
 * --INFO--
 * Address:	801DB73C
 * Size:	000080
 */
// void MonoObjectMgr<Item>::doEntry()
// {
// }

/*
 * --INFO--
 * Address:	801DB7BC
 * Size:	000090
 */
// void MonoObjectMgr<Item>::doSetView(int)
// {
// }

/*
 * --INFO--
 * Address:	801DB84C
 * Size:	000080
 */
// void MonoObjectMgr<Item>::doViewCalc()
// {
// }

/*
 * --INFO--
 * Address:	801DB8CC
 * Size:	000090
 */
// void MonoObjectMgr<Item>::doSimulation(f32)
// {
// }

/*
 * --INFO--
 * Address:	801DB95C
 * Size:	000090
 */
// void MonoObjectMgr<Item>::doDirectDraw(Graphics&)
// {
// }

/*
 * --INFO--
 * Address:	801DB9EC
 * Size:	000018
 */
// void MonoObjectMgr<Item>::resetMgr()
// {
// }

/*
 * --INFO--
 * Address:	801DBA04
 * Size:	000030
 */
// void MonoObjectMgr<Item>::clearMgr()
// {
// }

/*
 * --INFO--
 * Address:	801DBA34
 * Size:	000004
 */
// void MonoObjectMgr<Item>::onAlloc() { }

/*
 * --INFO--
 * Address:	801DBA38
 * Size:	00003C
 */
// void MonoObjectMgr<Item>::getEmptyIndex()
// {
// 	/*
// 	lwz      r0, 0x24(r3)
// 	li       r5, 0
// 	mtctr    r0
// 	cmpwi    r0, 0
// 	ble      lbl_801DBA6C

// lbl_801DBA4C:
// 	lwz      r4, 0x2c(r3)
// 	lbzx     r0, r4, r5
// 	cmplwi   r0, 1
// 	bne      lbl_801DBA64
// 	mr       r3, r5
// 	blr

// lbl_801DBA64:
// 	addi     r5, r5, 1
// 	bdnz     lbl_801DBA4C

// lbl_801DBA6C:
// 	li       r3, -1
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DBA74
 * Size:	000010
 */
// void MonoObjectMgr<Item>::get(void*)
// {
// 	/*
// 	mulli    r0, r4, 0x1f8
// 	lwz      r3, 0x28(r3)
// 	add      r3, r3, r0
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DBA84
 * Size:	0001E4
 */
// void ObjectMgr<Item>::doAnimation()
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r4, r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
// 	cmplwi   r0, 0
// 	stw      r0, 0x14(r1)
// 	stw      r4, 8(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_801DBACC
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DBC38

// lbl_801DBACC:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DBB38

// lbl_801DBAE4:
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
// 	bne      lbl_801DBC38
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801DBB38:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801DBAE4
// 	b        lbl_801DBC38

// lbl_801DBB58:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x3c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_801DBBA8
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DBC38

// lbl_801DBBA8:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DBC1C

// lbl_801DBBC8:
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
// 	bne      lbl_801DBC38
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801DBC1C:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801DBBC8

// lbl_801DBC38:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_801DBB58
// 	lwz      r0, 0x24(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DBC68
 * Size:	0001E4
 */
// void ObjectMgr<Item>::doEntry()
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r4, r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
// 	cmplwi   r0, 0
// 	stw      r0, 0x14(r1)
// 	stw      r4, 8(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_801DBCB0
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DBE1C

// lbl_801DBCB0:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DBD1C

// lbl_801DBCC8:
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
// 	bne      lbl_801DBE1C
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801DBD1C:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801DBCC8
// 	b        lbl_801DBE1C

// lbl_801DBD3C:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x40(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_801DBD8C
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DBE1C

// lbl_801DBD8C:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DBE00

// lbl_801DBDAC:
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
// 	bne      lbl_801DBE1C
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801DBE00:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801DBDAC

// lbl_801DBE1C:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_801DBD3C
// 	lwz      r0, 0x24(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DBE4C
 * Size:	0001F4
 */
// void ObjectMgr<Item>::doSetView(int)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r5, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r5, r5, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
// 	stw      r31, 0x1c(r1)
// 	cmplwi   r0, 0
// 	mr       r31, r4
// 	stw      r0, 0x14(r1)
// 	stw      r5, 8(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_801DBE9C
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DC00C

// lbl_801DBE9C:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DBF08

// lbl_801DBEB4:
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
// 	bne      lbl_801DC00C
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801DBF08:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801DBEB4
// 	b        lbl_801DC00C

// lbl_801DBF28:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r12, 0(r3)
// 	mr       r4, r31
// 	lwz      r12, 0x44(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_801DBF7C
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DC00C

// lbl_801DBF7C:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DBFF0

// lbl_801DBF9C:
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
// 	bne      lbl_801DC00C
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801DBFF0:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801DBF9C

// lbl_801DC00C:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_801DBF28
// 	lwz      r0, 0x24(r1)
// 	lwz      r31, 0x1c(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DC040
 * Size:	0001E4
 */
// void ObjectMgr<Item>::doViewCalc()
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r4, r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
// 	cmplwi   r0, 0
// 	stw      r0, 0x14(r1)
// 	stw      r4, 8(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_801DC088
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DC1F4

// lbl_801DC088:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DC0F4

// lbl_801DC0A0:
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
// 	bne      lbl_801DC1F4
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801DC0F4:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801DC0A0
// 	b        lbl_801DC1F4

// lbl_801DC114:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x48(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_801DC164
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DC1F4

// lbl_801DC164:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DC1D8

// lbl_801DC184:
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
// 	bne      lbl_801DC1F4
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801DC1D8:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801DC184

// lbl_801DC1F4:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_801DC114
// 	lwz      r0, 0x24(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DC224
 * Size:	0001F4
 */
// void ObjectMgr<Item>::doSimulation(f32)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r4, r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
// 	stfd     f31, 0x18(r1)
// 	fmr      f31, f1
// 	cmplwi   r0, 0
// 	stw      r4, 8(r1)
// 	stw      r0, 0x14(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_801DC274
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DC3E4

// lbl_801DC274:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DC2E0

// lbl_801DC28C:
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
// 	bne      lbl_801DC3E4
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801DC2E0:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801DC28C
// 	b        lbl_801DC3E4

// lbl_801DC300:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r12, 0(r3)
// 	fmr      f1, f31
// 	lwz      r12, 0x4c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_801DC354
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DC3E4

// lbl_801DC354:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DC3C8

// lbl_801DC374:
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
// 	bne      lbl_801DC3E4
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801DC3C8:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801DC374

// lbl_801DC3E4:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_801DC300
// 	lwz      r0, 0x24(r1)
// 	lfd      f31, 0x18(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DC418
 * Size:	0001F4
 */
// void ObjectMgr<Item>::doDirectDraw(Graphics&)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r5, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r5, r5, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
// 	stw      r31, 0x1c(r1)
// 	cmplwi   r0, 0
// 	mr       r31, r4
// 	stw      r0, 0x14(r1)
// 	stw      r5, 8(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_801DC468
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DC5D8

// lbl_801DC468:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DC4D4

// lbl_801DC480:
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
// 	bne      lbl_801DC5D8
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801DC4D4:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801DC480
// 	b        lbl_801DC5D8

// lbl_801DC4F4:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r12, 0(r3)
// 	mr       r4, r31
// 	lwz      r12, 0x50(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_801DC548
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DC5D8

// lbl_801DC548:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801DC5BC

// lbl_801DC568:
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
// 	bne      lbl_801DC5D8
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801DC5BC:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801DC568

// lbl_801DC5D8:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_801DC4F4
// 	lwz      r0, 0x24(r1)
// 	lwz      r31, 0x1c(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DC60C
 * Size:	00002C
 */
// void Container<Item>::getObject(void*)
// {
// }

/*
 * --INFO--
 * Address:	801DC638
 * Size:	000008
 */
// u32 Container<Item>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	801DC640
 * Size:	000008
 */
// u32 Container<Item>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	801DC648
 * Size:	00009C
 */
// void MonoObjectMgr<Item>::MonoObjectMgr()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	bl       __ct__5CNodeFv
// 	lis      r4, __vt__16GenericContainer@ha
// 	lis      r3, "__vt__37Container<Q34Game12ItemPikihead4Item>"@ha
// 	addi     r0, r4, __vt__16GenericContainer@l
// 	lis      r6, __vt__16GenericObjectMgr@ha
// 	stw      r0, 0(r31)
// 	addi     r0, r3, "__vt__37Container<Q34Game12ItemPikihead4Item>"@l
// 	lis      r4, "__vt__37ObjectMgr<Q34Game12ItemPikihead4Item>"@ha
// 	lis      r3, "__vt__41MonoObjectMgr<Q34Game12ItemPikihead4Item>"@ha
// 	stw      r0, 0(r31)
// 	li       r8, 0
// 	addi     r7, r4, "__vt__37ObjectMgr<Q34Game12ItemPikihead4Item>"@l
// 	addi     r5, r3, "__vt__41MonoObjectMgr<Q34Game12ItemPikihead4Item>"@l
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

/*
 * --INFO--
 * Address:	801DC6E4
 * Size:	00009C
 */
// void StateMachine<Item>::transit(Item*, int, StateArg*)
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

/*
 * --INFO--
 * Address:	801DC780
 * Size:	000084
 */
// void StateMachine<ItemPikihead::Item>::registerState(FSMState<ItemPikihead::Item>*)
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

/*
 * --INFO--
 * Address:	801DC804
 * Size:	00001C
 */
// void FSMItem<Item, FSM, State>::getStateID()
// {
// 	/*
// 	.loc_0x0:
// 	  lwz       r3, 0x1DC(r3)
// 	  cmplwi    r3, 0
// 	  beq-      .loc_0x14
// 	  lwz       r3, 0x4(r3)
// 	  blr

// 	.loc_0x14:
// 	  li        r3, -0x1
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DC820
 * Size:	000044
 */
// void FSMItem<Item, FSM, State>::platCallback(PlatEvent&)
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

/*
 * --INFO--
 * Address:	801DC864
 * Size:	000044
 */
// void FSMItem<Item, FSM, State>::collisionCallback(CollEvent&)
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

/*
 * --INFO--
 * Address:	801DC8A8
 * Size:	000044
 */
// void FSMItem<Item, FSM, State>::bounceCallback(Sys::Triangle*)
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

/*
 * --INFO--
 * Address:	801DC8EC
 * Size:	00002C
 */
// void FixedSizeItemMgr<Item>::getEnd()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwzu     r12, 0x4c(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DC918
 * Size:	00002C
 */
// void FixedSizeItemMgr<Item>::get(void*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwzu     r12, 0x4c(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DC944
 * Size:	0000E0
 */
// void FixedSizeItemMgr<Item>::killAll()
// {
// 	/*
// 	stwu     r1, -0x30(r1)
// 	mflr     r0
// 	lis      r4, __vt__Q24Game15CreatureKillArg@ha
// 	stw      r0, 0x34(r1)
// 	stmw     r27, 0x1c(r1)
// 	mr       r27, r3
// 	addi     r31, r4, __vt__Q24Game15CreatureKillArg@l
// 	li       r29, 0
// 	b        lbl_801DCA04

// lbl_801DC968:
// 	addi     r3, r27, 0x4c
// 	mr       r4, r29
// 	lwz      r12, 0x4c(r27)
// 	lwz      r12, 0x24(r12)
// 	mtctr    r12
// 	bctrl
// 	li       r0, 1
// 	stw      r31, 8(r1)
// 	mr       r28, r3
// 	stw      r0, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0xa8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801DC9B4
// 	mr       r3, r28
// 	addi     r4, r1, 8
// 	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

// lbl_801DC9B4:
// 	mr       r3, r28
// 	lwz      r12, 0(r28)
// 	lwz      r12, 0xf8(r12)
// 	mtctr    r12
// 	bctrl
// 	cmplwi   r3, 0
// 	beq      lbl_801DCA00
// 	lwz      r30,
// "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) cmplwi   r30,
// 0 beq      lbl_801DCA00 mr       r3, r28 lwz      r12, 0(r28) lwz      r12,
// 0xf8(r12) mtctr    r12 bctrl mr       r0, r3 mr       r3, r30 mr       r4, r0 bl
// remove__10JSUPtrListFP10JSUPtrLink

// lbl_801DCA00:
// 	addi     r29, r29, 1

// lbl_801DCA04:
// 	lwz      r0, 0x70(r27)
// 	cmpw     r29, r0
// 	blt      lbl_801DC968
// 	lmw      r27, 0x1c(r1)
// 	lwz      r0, 0x34(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x30
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DCA24
 * Size:	00002C
 */
// void FixedSizeItemMgr<Item>::createModelCallback(SysShape::Model*)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  stw       r0, 0x14(r1)
// 	  lwz       r12, 0x0(r3)
// 	  lwz       r12, 0xA0(r12)
// 	  mtctr     r12
// 	  bctrl
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DCA50
 * Size:	0000E4
 */
// void FixedSizeItemMgr<Item>::createMgr(int, unsigned long)
// {
// 	/*
// 	stwu     r1, -0x30(r1)
// 	mflr     r0
// 	stw      r0, 0x34(r1)
// 	stw      r31, 0x2c(r1)
// 	stw      r30, 0x28(r1)
// 	mr       r30, r5
// 	stw      r29, 0x24(r1)
// 	mr       r29, r4
// 	stw      r28, 0x20(r1)
// 	mr       r28, r3
// 	addi     r3, r28, 0x4c
// 	bl       "alloc__41MonoObjectMgr<Q34Game12ItemPikihead4Item>Fi"
// 	mr       r3, r28
// 	bl       "onAlloc__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>Fv"
// 	li       r3, 0x1c
// 	bl       __nw__FUl
// 	or.      r31, r3, r3
// 	beq      lbl_801DCB10
// 	li       r3, 0x14
// 	bl       __nw__FUl
// 	or.      r9, r3, r3
// 	beq      lbl_801DCAF0
// 	lis      r3, lbl_804B8FF8@ha
// 	lis      r4, "__vt__30IDelegate1<PQ28SysShape5Model>"@ha
// 	addi     r7, r3, lbl_804B8FF8@l
// 	lis      r3,
// "__vt__83Delegate1<Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>,PQ28SysShape5Model>"@ha
// 	lwz      r6, 0(r7)
// 	addi     r4, r4, "__vt__30IDelegate1<PQ28SysShape5Model>"@l
// 	lwz      r5, 4(r7)
// 	addi     r0, r3,
// "__vt__83Delegate1<Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>,PQ28SysShape5Model>"@l
// 	lwz      r3, 8(r7)
// 	stw      r6, 8(r1)
// 	stw      r4, 0(r9)
// 	stw      r0, 0(r9)
// 	stw      r28, 4(r9)
// 	stw      r6, 8(r9)
// 	stw      r5, 0xc(r9)
// 	stw      r5, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	stw      r3, 0x10(r9)

// lbl_801DCAF0:
// 	lwz      r4, 0x18(r28)
// 	mr       r3, r31
// 	lwz      r5, 0x1c(r28)
// 	mr       r6, r29
// 	mr       r7, r30
// 	li       r8, 2
// 	bl
// "__ct__Q28SysShape8ModelMgrFiPP12J3DModelDataiUlUlP30IDelegate1<PQ28SysShape5Model>"
// 	mr       r31, r3

// lbl_801DCB10:
// 	stw      r31, 0x7c(r28)
// 	lwz      r0, 0x34(r1)
// 	lwz      r31, 0x2c(r1)
// 	lwz      r30, 0x28(r1)
// 	lwz      r29, 0x24(r1)
// 	lwz      r28, 0x20(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x30
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DCB34
 * Size:	000064
 */
// void FixedSizeItemMgr<Item>::onAlloc()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	li       r31, 0
// 	stw      r30, 8(r1)
// 	mr       r30, r3
// 	b        lbl_801DCB74

// lbl_801DCB54:
// 	addi     r3, r30, 0x4c
// 	mr       r4, r31
// 	lwz      r12, 0x4c(r30)
// 	lwz      r12, 0x24(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r31, 0x184(r3)
// 	addi     r31, r31, 1

// lbl_801DCB74:
// 	lwz      r0, 0x70(r30)
// 	cmpw     r31, r0
// 	blt      lbl_801DCB54
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DCB98
 * Size:	000188
 */
// void MonoObjectMgr<Item>::alloc(int)
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
// 	mulli    r3, r29, 0x1f8
// 	stw      r28, 0x10(r1)
// 	addi     r3, r3, 0x10
// 	bl       __nwa__FUl
// 	lis      r4, __ct__Q34Game12ItemPikihead4ItemFv@ha
// 	mr       r7, r29
// 	addi     r4, r4, __ct__Q34Game12ItemPikihead4ItemFv@l
// 	li       r5, 0
// 	li       r6, 0x1f8
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
// 	ble      lbl_801DCCB8
// 	cmpwi    r31, 8
// 	addi     r3, r31, -8
// 	ble      lbl_801DCC94
// 	addi     r0, r3, 7
// 	srwi     r0, r0, 3
// 	mtctr    r0
// 	cmpwi    r3, 0
// 	ble      lbl_801DCC94

// lbl_801DCC2C:
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
// 	bdnz     lbl_801DCC2C

// lbl_801DCC94:
// 	subf     r0, r11, r31
// 	li       r4, 1
// 	mtctr    r0
// 	cmpw     r11, r31
// 	bge      lbl_801DCCB8

// lbl_801DCCA8:
// 	lwz      r3, 0x2c(r30)
// 	stbx     r4, r3, r11
// 	addi     r11, r11, 1
// 	bdnz     lbl_801DCCA8

// lbl_801DCCB8:
// 	mr       r3, r30
// 	lwz      r12, 0(r30)
// 	lwz      r12, 0x88(r12)
// 	mtctr    r12
// 	bctrl
// 	li       r28, 0
// 	li       r29, 0
// 	b        lbl_801DCCF8

// lbl_801DCCD8:
// 	lwz      r0, 0x28(r30)
// 	add      r3, r0, r29
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x2c(r12)
// 	mtctr    r12
// 	bctrl
// 	addi     r29, r29, 0x1f8
// 	addi     r28, r28, 1

// lbl_801DCCF8:
// 	cmpw     r28, r31
// 	blt      lbl_801DCCD8
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

/*
 * --INFO--
 * Address:	801DCD20
 * Size:	000030
 */
// void Delegate1<FixedSizeItemMgr<Item>, Model*>::invoke(SysShape::Model*)
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x10(r1)
// 	  mflr      r0
// 	  mr        r5, r3
// 	  stw       r0, 0x14(r1)
// 	  addi      r12, r5, 0x8
// 	  lwz       r3, 0x4(r3)
// 	  bl        -0x11B214
// 	  nop
// 	  lwz       r0, 0x14(r1)
// 	  mtlr      r0
// 	  addi      r1, r1, 0x10
// 	  blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801DCD50
 * Size:	000028
 */
// void __sinit_itemPikihead_cpp()
// {
// }

/*
 * --INFO--
 * Address:	801DCD78
 * Size:	000008
 */
// void FSMItem<Item, FSM, State>::@376
//     @onKeyEvent(const SysShape::KeyEvent&)
// {
// }

/*
 * --INFO--
 * Address:	801DCD80
 * Size:	000008
 */
// TPkGlow1::@4 @~TPkGlow1()
// {
// }

/*
 * --INFO--
 * Address:	801DCD88
 * Size:	000008
 */
// void Item::@376 @onKeyEvent(const SysShape::KeyEvent&)
// {
// }

/*
 * --INFO--
 * Address:	801DCD90
 * Size:	000008
 */
// FixedSizeItemMgr<Item>::@48 @~Item > ()
// {
// }

/*
 * --INFO--
 * Address:	801DCD98
 * Size:	000008
 */
// void MonoObjectMgr<Item>::@28 @resetMgr()
// {
// }

/*
 * --INFO--
 * Address:	801DCDA0
 * Size:	000008
 */
// void MonoObjectMgr<Item>::@28 @doDirectDraw(Graphics&)
// {
// }

/*
 * --INFO--
 * Address:	801DCDA8
 * Size:	000008
 */
// void MonoObjectMgr<Item>::@28 @doSimulation(f32)
// {
// }

/*
 * --INFO--
 * Address:	801DCDB0
 * Size:	000008
 */
// void MonoObjectMgr<Item>::@28 @doViewCalc()
// {
// }

/*
 * --INFO--
 * Address:	801DCDB8
 * Size:	000008
 */
// void MonoObjectMgr<Item>::@28 @doSetView(int)
// {
// }

/*
 * --INFO--
 * Address:	801DCDC0
 * Size:	000008
 */
// void MonoObjectMgr<Item>::@28 @doEntry()
// {
// }

/*
 * --INFO--
 * Address:	801DCDC8
 * Size:	000008
 */
// void MonoObjectMgr<Item>::@28 @doAnimation()
// {
// }

/*
 * --INFO--
 * Address:	801DCDD0
 * Size:	000008
 */
// void ObjectMgr<Item>::@28 @doDirectDraw(Graphics&)
// {
// }

/*
 * --INFO--
 * Address:	801DCDD8
 * Size:	000008
 */
// void ObjectMgr<Item>::@28 @doSimulation(f32)
// {
// }

/*
 * --INFO--
 * Address:	801DCDE0
 * Size:	000008
 */
// void ObjectMgr<Item>::@28 @doViewCalc()
// {
// }

/*
 * --INFO--
 * Address:	801DCDE8
 * Size:	000008
 */
// void ObjectMgr<Item>::@28 @doSetView(int)
// {
// }

/*
 * --INFO--
 * Address:	801DCDF0
 * Size:	000008
 */
// void ObjectMgr<Item>::@28 @doEntry()
// {
// }

/*
 * --INFO--
 * Address:	801DCDF8
 * Size:	000008
 */
// void ObjectMgr<Item>::@28 @doAnimation()
// {
// }

/*
 * --INFO--
 * Address:	801DCE00
 * Size:	000008
 */
// void FixedSizeItemMgr<Item>::@48 @getEnd()
// {
// 	/*
// 	addi     r3, r3, -48
// 	b        "getEnd__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>Fv"
// 	*/
// }

/*
 * --INFO--
 * Address:	801DCE08
 * Size:	000008
 */
// void FixedSizeItemMgr<Item>::@48 @getStart()
// {
// 	/*
// 	addi     r3, r3, -48
// 	b        "getStart__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>Fv"
// 	*/
// }

/*
 * --INFO--
 * Address:	801DCE10
 * Size:	000008
 */
// void FixedSizeItemMgr<Item>::@48 @getNext(void*)
// {
// 	/*
// 	addi     r3, r3, -48
// 	b        "getNext__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>FPv"
// 	*/
// }

/*
 * --INFO--
 * Address:	801DCE18
 * Size:	000008
 */
// void FixedSizeItemMgr<Item>::@48 @get(void*)
// {
// 	/*
// 	addi     r3, r3, -48
// 	b        "get__Q24Game44FixedSizeItemMgr<Q34Game12ItemPikihead4Item>FPv"
// 	*/
// }

/*
 * --INFO--
 * Address:	801DCE20
 * Size:	000008
 */
// Mgr::@48 @~Mgr()
// {
// }

} // namespace ItemPikihead
} // namespace Game
