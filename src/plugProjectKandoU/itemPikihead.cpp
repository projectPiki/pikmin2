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
void FallState::exec(Item* item)
{
	item->applyAirDrag(sys->getDeltaTime(), mHorizontalDrag, mVerticalDrag);
}

/**
 * @note Address: 0x801D8E20
 * @note Size: 0x24
 */
void FallState::cleanup(Item* item)
{
	item->mEfxTane->killTanekira_();
}

/**
 * @note Address: 0x801D8E44
 * @note Size: 0x28
 */
void FallState::onPlatCollision(Item* item, PlatEvent& event)
{
	item->kill(nullptr);
}

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
void BuryState::cleanup(Item* item)
{
}

/**
 * @note Address: 0x801D9284
 * @note Size: 0xC
 */
void BuryState::onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent)
{
	mAnimDone = true;
}

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
void TaneState::cleanup(Item* item)
{
}

/**
 * @note Address: 0x801D9388
 * @note Size: 0xC
 */
void TaneState::onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent)
{
	mAnimDone = true;
}

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
void HatugaState::exec(Item* item)
{
}

/**
 * @note Address: 0x801D93F0
 * @note Size: 0x4
 */
void HatugaState::cleanup(Item* item)
{
}

/**
 * @note Address: 0x801D93F4
 * @note Size: 0x34
 */
void HatugaState::onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent)
{
	transit(item, PIKIHEAD_Wait, nullptr);
}

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
void WaitState::cleanup(Item* item)
{
	item->mEfxTane->killKourin_();
}

/**
 * @note Address: 0x801D95D4
 * @note Size: 0x38
 */
void WaitState::onKeyEvent(Item* item, const SysShape::KeyEvent& keyEvent)
{
	item->mAnimator.startAnim(0, item);
}

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
void GrowState::exec(Item* item)
{
}

/**
 * @note Address: 0x801D965C
 * @note Size: 0x4
 */
void GrowState::cleanup(Item* item)
{
}

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
void SioreState::cleanup(Item* item)
{
}

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
		mColor            = randInt(5);
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
	if (getCurrState()) {
		getCurrState()->cleanup(this);
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
bool Item::needSave()
{
	return getStateID() != PIKIHEAD_Fall;
}

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
		Vector3f zVec;
		Vector3f xVec = yVec.cross(zAxis);
		xVec.normalise();

		zVec = xVec.cross(yVec);
		// sigh. this is the only thing I've found that fixes these fucking registers
		zVec = zVec;
		zVec.normalise();

		mBaseTrMatrix.setColumn(0, xVec);
		mBaseTrMatrix.setColumn(1, yVec);
		mBaseTrMatrix.setColumn(2, zVec);
		mBaseTrMatrix.setTranslation(mPosition);
	} else {
		BaseItem::makeTrMatrix();
	}
}

/**
 * @note Address: 0x801DA0FC
 * @note Size: 0x140
 */
void Item::doAI()
{
	FSMItem::doAI();
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
	if (mModel->mJ3dModel->getModelData()->getMaterialNodePointer(0)) {
		Color4& pikiColor = Piki::pikiColors[mColor];
		J3DGXColorS10 color;
		color.r = pikiColor.r;
		color.g = pikiColor.g;
		color.b = pikiColor.b;
		color.a = pikiColor.a;
		mModel->mJ3dModel->getModelData()->getMaterialNodePointer(0)->getTevBlock()->setTevColor(0, color);
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
}

/**
 * @note Address: 0x801DA388
 * @note Size: 0x44
 */
void Item::onKeyEvent(const SysShape::KeyEvent& keyEvent)
{
	if (getCurrState()) {
		getCurrState()->onKeyEvent(this, keyEvent);
	}
}

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
void Item::onSetPosition()
{
}

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
	loadBmd("pikihead.bmd", 0, J3DMODEL_CreateNewDL);
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
		J3DModelData* model = pikiMgr->mHappaModel[i];
		J3DMaterial* mat    = model->getJointNodePointer(0)->getMesh();
		j3dSys.setVtxPos(model->getVtxPosArray());
		j3dSys.setVtxNrm(model->getVtxNrmArray());
		j3dSys.setVtxCol(model->getVtxColorArray(0));
		J3DShape::resetVcdVatCache();

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
		if (pikiMgr->mActiveCount + mMonoObjectMgr.mActiveCount >= MAX_PIKI_COUNT) {
			return nullptr;
		}
		break;

	case PikiMgr::PSM_Force: // just make the damn sprout
		break;

	case PikiMgr::PSM_Replace:                      // we should not be entering a cave floor and immediately making a sprout lol
		JUT_PANICLINE(834, "これはありえないよ\n"); // 'this is impossible' lol
		break;
	}

	return FixedSizeItemMgr<Item>::birth();
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
