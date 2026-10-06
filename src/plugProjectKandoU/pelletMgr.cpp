#include "Game/Entities/PelletOtakara.h"
#include "IDelegate.h"
#include "MonoObjectMgr.h"
#include "Game/GameConfig.h"
#include "Game/gamePlayData.h"
#include "Game/GameSystem.h"
#include "Game/pelletMgr.h"
#include "Game/shadowMgr.h"
#include "Game/EnemyBase.h"
#include "Game/Stickers.h"
#include "Game/GameMessage.h"
#include "Game/gameStat.h"
#include "Game/DynParticle.h"
#include "Game/MapMgr.h"
#include "Game/routeMgr.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/Entities/ItemTreasure.h"
#include "Game/Entities/PelletNumber.h"
#include "Game/Entities/PelletCarcass.h"
#include "Game/Entities/PelletFruit.h"
#include "Game/Entities/PelletItem.h"
#include "Game/Entities/ItemHole.h"
#include "Game/Entities/ItemBigFountain.h"
#include "Game/VsGameSection.h"
#include "Game/PikiMgr.h"
#include "Game/PlatInstance.h"
#include "Game/MoviePlayer.h"
#include "Game/AIConstants.h"
#include "Game/BaseHIO.h"
#include "Dolphin/rand.h"
#include "efx/TFruitsDown.h"
#include "efx/TOtakara.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "PSSystem/PSMainSide_Scene.h"
#include "ObjectTypes.h"
#include "CollInfo.h"
#include "Radar.h"
#include "VsOtakaraName.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "nans.h"

namespace {
struct NotOff : public Game::WPCondition {
	virtual bool satisfy(Game::WayPoint* wp) // 08
	{
		if (wp->isFlag(Game::WPF_Closed)) {
			return false;
		}

		Vector3f wpPos = wp->mPosition;
		if (Game::ItemHole::mgr) {
			Iterator<Game::BaseItem> iterHole(Game::ItemHole::mgr);
			CI_LOOP(iterHole)
			{
				Game::BaseItem* item = *iterHole;
				Vector3f holePos     = item->getPosition();
				f32 dx               = holePos.x - wpPos.x;
				f32 dy               = holePos.y - wpPos.y;
				f32 dz               = holePos.z - wpPos.z;
				if (Vector3f(dx, dy, dz).length2D() < 70.0f) {
					return false;
				}
			}
		}

		if (Game::ItemBigFountain::mgr) {
			Iterator<Game::BaseItem> iterGeyser(Game::ItemBigFountain::mgr);
			CI_LOOP(iterGeyser)
			{
				Game::BaseItem* item = *iterGeyser;
				Vector3f geyserPos   = item->getPosition();
				f32 dx               = geyserPos.x - wpPos.x;
				f32 dy               = geyserPos.y - wpPos.y;
				f32 dz               = geyserPos.z - wpPos.z;
				if (Vector3f(dx, dy, dz).length2D() < 70.0f) {
					return false;
				}
			}
		}
		return true;
	}
};
} // namespace

namespace Game {

PelletMgr* pelletMgr;

bool PelletMgr::mDebug          = false;
bool PelletMgr::disableDynamics = false;
bool Pellet::sFromTekiEnable    = true;

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "pelletMgr";

/**
 * @note Address: 0x801658EC
 * @note Size: 0x20
 */
char* Pellet::getCreatureName()
{
	if (mConfig) {
		return mConfig->mParams.mName.mData;
	}
	return "no config pellet";
}

/**
 * @note Address: 0x8016590C
 * @note Size: 0x34
 */
s32 Pellet::getCreatureID()
{
	if (mConfig) {
		return getConfigIndex();
	}
	return -1;
}

/**
 * @note Address: 0x80165940
 * @note Size: 0x190
 */
void Pellet::getShadowParam(ShadowParam& shadow)
{
	Vector3f col;
	mBaseTrMatrix.getColumn(1, col);

	if (-(SQUARE(FABS(col.y)) - 1.0f) > 0.0f) {
		col.y = col.y;
	}

	f32 pickRadius    = getPickRadius();
	Vector3f position = getPosition();
	Vector3f shadowPos;
	if (col.y > 0.0f) {
		f32 midHeight      = 0.5f * getCylinderHeight();
		Vector3f scaledCol = col * midHeight;
		shadowPos          = position - scaledCol;
	} else {
		f32 midHeight      = 0.5f * getCylinderHeight();
		Vector3f scaledCol = col * midHeight;
		shadowPos          = position + scaledCol;
	}

	f32 absY = FABS(col.y);
	shadowPos.y += 0.2f;
	shadow.mPosition                 = shadowPos;
	shadow.mBoundingSphere.mPosition = col;
	shadow.mBoundingSphere.mRadius   = 90.0f;
	shadow.mSize                     = pickRadius * FABS(col.y);
}

/**
 * @note Address: 0x80165AD0
 * @note Size: 0x74
 */
bool Pellet::needShadow()
{
	return (!pelletMgr->mMovieDrawDisabled || (pelletMgr->mMovieDrawDisabled && isMovieActor() && mLod.isFlag(AILOD_IsVisible)));
}

/**
 * @note Address: 0x80165B44
 * @note Size: 0x8
 */
u8 Pellet::getWallTimer()
{
	return mWallTimer;
}

/**
 * @note Address: 0x80165B4C
 * @note Size: 0x34
 */
PelletViewArg::PelletViewArg()
{
	mScale     = Vector3f(1.0f);
	mEnemy     = nullptr;
	mMatrix    = nullptr;
	mPosition  = Vector3f(0.0f);
	mEnemyName = 0;
}

/**
 * @note Address: 0x80165B80
 * @note Size: 0x220
 */
Pellet* PelletView::becomePellet(PelletViewArg* viewArg)
{
	PelletInitArg initArg;
	initArg.mTextIdentifier = viewArg->mEnemyName;
	initArg.mPelletColor    = 0;
	initArg.mPelletIndex    = -1;
	initArg.mPelletType     = PelletType::Carcass;
	initArg.mPelView        = this;

	Pellet* newPellet = pelletMgr->birth(&initArg);
	if (newPellet) {
		Vector3f position = viewArg->mPosition;
		position.y += 0.5f * newPellet->getCylinderHeight();

		Vector3f offset = newPellet->getOffset();

		Vector3f& rotOffset = offset;
		Vector3f vec        = rotOffset;

		Vector3f row1 = viewArg->mMatrix->getRow(0);
		rotOffset.x   = vec.dot(row1);

		Vector3f row2 = viewArg->mMatrix->getRow(1);
		rotOffset.y   = vec.dot(row2);

		Vector3f row3 = viewArg->mMatrix->getRow(2);
		rotOffset.z   = vec.dot(row3);

		position = position + rotOffset;

		newPellet->setPosition(position, false);
		mPellet = newPellet;

		newPellet->mIsBounced = true;
		newPellet->setOrientation(*viewArg->mMatrix);
		newPellet->mScale = viewArg->mScale;
		newPellet->mLod.setFlag(AILOD_IsVisibleBoth);

		viewStartPreCarryMotion();

		mCreature = static_cast<Creature*>(viewArg->mEnemy);
		P2ASSERTLINE(895, mCreature);
	} else {
		mPellet   = nullptr;
		mCreature = nullptr;
	}

	return mPellet;
}

/**
 * @note Address: 0x80165DA0
 * @note Size: 0x84
 */
void PelletView::viewMakeMatrix(Matrixf& outMat)
{
	Vector3f translation(0.0f, -0.5f * mPellet->getCylinderHeight(), 0.0f);
	Matrixf srtMatrix;
	srtMatrix.makeSRT(mPellet->mScale, Vector3f::zero, translation);
	PSMTXConcat(mPellet->mBaseTrMatrix.mMatrix.mtxView, srtMatrix.mMatrix.mtxView, outMat.mMatrix.mtxView);
}

/**
 * @note Address: 0x80165E24
 * @note Size: 0xC
 */
void Pellet::clearClaim()
{
	mClaim = 0;
}

/**
 * @note Address: 0x80165E30
 * @note Size: 0x18
 */
void Pellet::sendClaim()
{
	if (mClaim < 10) {
		mClaim++;
	}
}

/**
 * @note Address: 0x80165E48
 * @note Size: 0x3F4
 */
void Pellet::updateClaim()
{
	if (mClaim >= 10) {
		int count = 0;
		Vector3f meanPosition(0.0f);
		Stickers sticker(this);
		Iterator<Creature> iterator(&sticker);

		CI_LOOP(iterator)
		{
			meanPosition += iterator.mContainer->get(iterator.mIndex)->getPosition();
			count++;
		}

		if (count > 0) {
			f32 norm = 1.0f / count;
			meanPosition *= norm;
			Vector3f diff;
			Vector3f* diffPtr = &diff;
			*diffPtr          = meanPosition - mPelletPosition;
			diff.normalise();

			diff *= 30.0f;

			Vector3f velocity    = getVelocity();
			Vector3f newVelocity = velocity;
			newVelocity += diff;
			setVelocity(newVelocity);
			mClaim = 0;
		}
	}
}

/**
 * @note Address: 0x8016623C
 * @note Size: 0xC
 */
f32 Pellet::getBuryDepthMax()
{
	return mConfig->mParams.mDepthMax.mData;
}

/**
 * @note Address: 0x80166248
 * @note Size: 0xC
 */
f32 Pellet::getBuryDepth()
{
	return mConfig->mParams.mDepth.mData;
}

/**
 * @note Address: 0x80166254
 * @note Size: 0x124
 */
f32 Pellet::getBuryRadius(f32 pelletSize)
{
	f32 buryRadiusValues[5] = { mConfig->mParams.mDepthA.mData, mConfig->mParams.mDepthB.mData, mConfig->mParams.mDepthC.mData,
	                            mConfig->mParams.mDepthD.mData, mConfig->mParams.mDepthD.mData };

	int arrayIndex    = pelletSize * 4.0f;
	f32 indexFraction = (f32)arrayIndex * 0.25f;

	f32 t = (pelletSize - indexFraction) * 4.0f;
	P2ASSERTBOUNDSINCLUSIVELINE(1006, 0, arrayIndex, 4);

	// Interpolate between the two values (current and next in the array)
	return (1.0f - t) * buryRadiusValues[arrayIndex] + t * buryRadiusValues[arrayIndex + 1];
}

/**
 * @note Address: 0x80166378
 * @note Size: 0x74
 */
bool Pellet::stimulate(Interaction& interaction)
{
	if (interaction.actCommon(this)) {
		return interaction.actPellet(this);
	}
	return false;
}

/**
 * @note Address: 0x801663EC
 * @note Size: 0x88
 */
bool InteractMattuan::actPellet(Pellet* pellet)
{
	if (pellet->getKind() == PelletType::Upgrade) {
		pellet->startDiscoverDisable(mWaitTimer / sys->mDeltaTime);
	} else {
		pellet->clearDiscoverDisable();
	}
	return true;
}

/**
 * @note Address: 0x80166474
 * @note Size: 0x188
 */
bool InteractEat::actPellet(Pellet* pellet)
{
	if ((pellet->getKind() == PelletType::Berry) && pellet->isAlive()) {
		// this is very dumb but also necessary to get a second vector on the stack??????
		Vector3f position = pellet->getPosition();
		Vector3f position2;
		Vector3f* posPtr = &position2;
		*posPtr          = position;

		efx::Arg arg(position2);

		if (pellet->mPelletColor == 0) {
			efx::TFruitsDownR spicy;
			spicy.create(&arg);
		} else {
			efx::TFruitsDownP bitter;
			bitter.create(&arg);
		}

		pellet->mSoundMgr->startSound(PSSE_EV_FRUIT_POP, 0);
		pellet->kill(nullptr);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x801665FC
 * @note Size: 0x80
 */
bool InteractSuck::actPellet(Pellet* pellet)
{
	PelletGoalStateArg pelletGoalArg(mCreature);
	if (mCreature) {
		mCreature->getTypeName();
	}
	pellet->mPelletSM->transit(pellet, PELSTATE_GoalWait, &pelletGoalArg);
	pellet->finishDisplayCarryInfo();
	return true;
}

/**
 * @note Address: 0x8016667C
 * @note Size: 0x4
 */
void Pellet::doDirectDraw(Graphics&)
{
}

/**
 * @note Address: 0x80166680
 * @note Size: 0x1B0
 */
Pellet::Pellet()
    : mPickFlags(0)
    , mSlots()
{
	mCaster       = nullptr;
	mModel        = nullptr;
	mObjectTypeID = OBJTYPE_Pellet;
	mCollTree     = new CollTree;
	mPelletSM     = new PelletFSM;
	mPelletSM->init(this);
	mCollisionBuffer.alloc(this, 8);
	mPelletColor = 4;
	mPelletView  = nullptr;
	clearCarryColor();
	mPelletCarry = new PelletCarry;
}

/**
 * @note Address: 0x80166830
 * @note Size: 0x6C
 */
void Pellet::constructor()
{
	mSoundMgr = new PSM::EventBase(this, 2);
}

/**
 * @note Address: 0x80166938
 * @note Size: 0x34
 */
void Pellet::shadowOn()
{
	if (shadowMgr) {
		shadowMgr->addShadow(this);
	}
}

/**
 * @note Address: 0x8016696C
 * @note Size: 0x34
 */
void Pellet::shadowOff()
{
	if (shadowMgr) {
		shadowMgr->delShadow(this);
	}
}

/**
 * @note Address: 0x801669A0
 * @note Size: 0x14
 */
JAInter::Object* Pellet::getJAIObject()
{
	return mSoundMgr;
}

/**
 * @note Address: 0x801669B4
 * @note Size: 0x8
 */
PSM::Creature* Pellet::getPSCreature()
{
	return mSoundMgr;
}

/**
 * @note Address: 0x801669BC
 * @note Size: 0xC
 */
f32 Pellet::getBottomRadius()
{
	return mConfig->mParams.mRadius.mData;
}

/**
 * @note Address: 0x801669C8
 * @note Size: 0xC
 */
f32 Pellet::getPickRadius()
{
	return mConfig->mParams.mPRadius.mData;
}

/**
 * @note Address: 0x801669D4
 * @note Size: 0xC
 */
f32 Pellet::getCylinderHeight()
{
	return mConfig->mParams.mHeight.mData;
}

/**
 * @note Address: 0x801669E0
 * @note Size: 0x58
 */
int Pellet::getConfigIndex()
{
	P2ASSERTLINE(1433, mConfig);
	return mConfig->mParams.mIndex;
}

/**
 * @note Address: 0x80166A38
 * @note Size: 0xC
 */
char* Pellet::getConfigName()
{
	return mConfig->mParams.mName.mData;
}

/**
 * @note Address: 0x80166A44
 * @note Size: 0x130
 */
PelletIndexInitArg::PelletIndexInitArg(int idx)
{
	int code;
	pelletMgr->decode(idx, mPelletType, code);

	BasePelletMgr* newPelletMgr = pelletMgr->getMgrByID(mPelletType);
	P2ASSERTLINE(1465, newPelletMgr);
	PelletConfig* config = newPelletMgr->getPelletConfig(code);

	mTextIdentifier = config->mParams.mName.mData;
	mPelletIndex    = code;
	mPelletColor    = randInt(3);
}

/**
 * @note Address: 0x80166B74
 * @note Size: 0xF0
 */
PelletNumberInitArg::PelletNumberInitArg(int pelNumber, int pelColor)
{
	switch (pelNumber) {
	case PELLET_NUMBER_ONE:
		mTextIdentifier = "number1";
		mPelletIndex    = 0;
		break;
	case PELLET_NUMBER_FIVE:
		mTextIdentifier = "number5";
		mPelletIndex    = 1;
		break;
	case PELLET_NUMBER_TEN:
		mTextIdentifier = "number10";
		mPelletIndex    = 2;
		break;
	case PELLET_NUMBER_TWENTY:
		mTextIdentifier = "number20";
		mPelletIndex    = 3;
		break;
	default:
		mTextIdentifier = "number1";
		mPelletIndex    = 0;
		break;
	}

	mPelletColor = pelColor;
	mPelletType  = PelletType::Number;
}

/**
 * @note Address: 0x80166C64
 * @note Size: 0x40
 */
bool Pellet::isPickable()
{
	if (mCurrentState) {
		return mCurrentState->isPickable();
	}
	return false;
}

/**
 * @note Address: 0x80166CAC
 * @note Size: 0x288
 */
void Pellet::onKill(CreatureKillArg* killArg)
{
	if (gameSystem->isVersusMode()) {
		mPelletSM->start(this, PELSTATE_Normal, nullptr);
	}

	setAlive(false);

	if (shadowMgr) {
		shadowMgr->delShadow(this);
	}

	if (gameSystem->isVersusMode()) {
		GameMessagePelletDead msg(this);
		gameSystem->mSection->sendMessage(msg);
	}

	Vector3f scale(1.0f);
	Vector3f rotation(0.0f);
	Vector3f translation(0.0f);
	mBaseTrMatrix.makeSRT(scale, rotation, translation);

	if (mModel) {
		mLodSphere.mPosition = Vector3f(0.0f);
		mLodSphere.mRadius   = FLOAT_DIST_MAX;
		mScale               = Vector3f(1.0f);
		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
		mScale.set(mModel->mJ3dModel->mModelScale);
		mModel->clearAnimatorAll();
		mModel->mJ3dModel->calc();
	}

	releaseParticles();
	mCollTree->release();
	mMgr->kill(this);

	if ((killArg && static_cast<PelletKillArg*>(killArg)->mDoRevive) || (gameSystem->isVersusMode() && mPelletFlag == FLAG_VS_CHERRY)) {
		mMgr->setRevival(this);
	}

	finishDisplayCarryInfo();

	if (mPelletView) {
		mPelletView->viewOnPelletKilled();
		mPelletView->mPellet = nullptr;
		mPelletView          = nullptr;
	}

	if (getKind() == PelletType::Treasure || getKind() == PelletType::Upgrade) {
		Radar::Mgr::exit(this);
	}
}

/**
 * @note Address: 0x80166F68
 * @note Size: 0x620
 */
void Pellet::onInit(CreatureInitArg* initArg)
{
	mMaxCarriers = -1;
	mMinCarriers = -1;
	mWallTimer   = 0;
	mIsBounced   = false;
	mIsInWater   = false;

	clearDiscoverDisable();

	mClaim         = 0;
	mAngleOffset   = 0.0f;
	mFloorTriangle = nullptr;
	mHasCollided   = 0;
	mFaceDir       = 0.0f;
	mAnimSpeed     = 0.0f;
	mIsCaptured    = 0;
	mPickFlags     = 0;
	mCarryInfoList = nullptr;

	clearCapture();

	mCarryPower = 0.0f;

	P2ASSERTLINE(1632, initArg);

	u16 stateType = static_cast<PelletInitArg*>(initArg)->mState;
	if (stateType == PelBirthType_Normal) {
		mPelletSM->start(this, PELSTATE_Normal, nullptr);
		mScale = Vector3f(1.0f);
	} else if (stateType == PelBirthType_Piklopedia) {
		mPelletSM->start(this, PELSTATE_Zukan, nullptr);
	} else if (stateType == PelBirthType_Appear) {
		mPelletSM->start(this, PELSTATE_Appear, nullptr);
		mScale = Vector3f(0.01f);
	} else {
		mPelletSM->start(this, PELSTATE_ScaleAppear, nullptr);
		mScale = Vector3f(0.01f);
	}

	mPikminCount[Blue]    = 0;
	mPikminCount[Red]     = 0;
	mPikminCount[Yellow]  = 0;
	mPikminCount[Purple]  = 0;
	mPikminCount[White]   = 0;
	mPikminCount[Bulbmin] = 0;
	mPikminCount[Carrot]  = 0;
	mTotalCarriers        = 0;
	mPelletSizeType       = (u16) static_cast<PelletInitArg*>(initArg)->mPelletIndex;

	mConfig = mMgr->mConfigList->getPelletConfig(static_cast<PelletInitArg*>(initArg)->mTextIdentifier);

	if (!(mConfig->mParams.mCode.mData & 1)) {
		shadowOn();
	}

	if (static_cast<PelletInitArg*>(initArg)->mAdjustWeightForSquad) {
		mMinCarriers = GameStat::getMapPikmins(AllPikminCalcs);
		int minPikis = mConfig->mParams.mMin.mData;
		if (mMinCarriers > minPikis) {
			mMinCarriers = minPikis;
		}
	} else {
		mMinCarriers = -1;
	}

	if ((static_cast<PelletInitArg*>(initArg)->mMinCarriers != -1) && (static_cast<PelletInitArg*>(initArg)->mMaxCarriers != -1)) {
		mMinCarriers = static_cast<PelletInitArg*>(initArg)->mMinCarriers;
		mMaxCarriers = static_cast<PelletInitArg*>(initArg)->mMaxCarriers;
	}

	mRigid.mFlags.unset(0x01);
	mRigid.mFlags.unset(0x80);
	mPelletColor = static_cast<PelletInitArg*>(initArg)->mPelletColor;

	if (!strcmp(getConfigName(), "loozy")) {
		mPelletFlag = FLAG_LOOZY;
	} else if (!strcmp(getConfigName(), "orima")) {
		mPelletFlag = FLAG_NAVI_NAPSACK;
	} else {
		mPelletFlag = FLAG_NONE;
	}

	if (!strcmp(getConfigName(), VsOtakaraName::cBedamaYellow)) {
		mPelletFlag = FLAG_VS_BEDAMA_YELLOW;
	} else if (!strcmp(getConfigName(), VsOtakaraName::cBedamaRed)) {
		mPelletFlag = FLAG_VS_BEDAMA_RED;
	} else if (!strcmp(getConfigName(), VsOtakaraName::cBedamaBlue)) {
		mPelletFlag = FLAG_VS_BEDAMA_BLUE;
	} else if (!strcmp(getConfigName(), VsOtakaraName::cCoin)) {
		mPelletFlag = FLAG_VS_CHERRY;
	}

	if (static_cast<PelletInitArg*>(initArg)->mDoSkipCreateModel == 0) {
		mModel = mMgr->createShape(mPelletSizeType, mSlotIndex);
		onCreateShape();
	}

	if (mModel) {
		mCarryAnim.mAnimMgr = mMgr->mAnimMgr[mPelletSizeType];
		mRadius             = 2.0f * mModel->getRoughBoundingRadius();
	} else {
		mRadius = mConfig->mParams.mRadius.mData;
	}

	if (mCarryAnim.mAnimMgr) {
		SysShape::MotionListener* listener = this;
		mCarryAnim.startAnim(0, listener);
		stop_carrymotion();
		init_pmotions();
		start_pmotions();
		if ((gameSystem->isZukanMode()) && (mPelletFlag == FLAG_LOOZY)) {
			mAnimSpeed = 30.0f;
		}
	}

	mMgr->setCollTree(this, mPelletSizeType);

	if (strcmp(mConfig->mParams.mDynamics.mData, "never") == 0) {
		mDynamicType = 2;
		mIsDynamic   = false;

		mConfig->mParams.mNumParticles.mData = 0;
	} else if (strcmp(mConfig->mParams.mDynamics.mData, "lod") == 0) {
		mDynamicType = 1;
		mIsDynamic   = true;
	} else {
		mDynamicType = 0;
		mIsDynamic   = true;
	}

	mSlots.clear();
	mIsAlwaysCarried = 0;

	mSlotCount = getPelletConfigMax();

	if (mSlotCount > 128) {
		mSlotCount = 128;
	}

	// For Doomsday Apparatus (because it couldn't just have 1000 in the config... apparently)
	if (mConfig->mParams.mMin.mData == 128) {
		mMinCarriers = 1000;
		mMaxCarriers = 1000;
	}

	mDynParticle = nullptr;
	setupParticles();
	do_onInit(initArg);

	if (getKind() == PelletType::Treasure) {
		Radar::Mgr::entry(this, Radar::MAP_TREASURE, 0);
	} else if (getKind() == PelletType::Upgrade) {
		Radar::Mgr::entry(this, Radar::MAP_UPGRADE, 0);
	}

	setAlive(true);

	if (gameSystem->isVersusMode()) {
		GameMessagePelletBorn msg(this);
		gameSystem->mSection->sendMessage(msg);
	}
}

/**
 * @note Address: 0x80167590
 * @note Size: 0x20
 */
int Pellet::getPelletConfigMin()
{
	if (mMinCarriers > 0) {
		return mMinCarriers;
	}
	return mConfig->mParams.mMin.mData;
}

/**
 * @note Address: 0x801675B0
 * @note Size: 0x20
 */
int Pellet::getPelletConfigMax()
{
	if (mMaxCarriers > 0) {
		return mMaxCarriers;
	}
	return mConfig->mParams.mMax.mData;
}

/**
 * @note Address: 0x801675D0
 * @note Size: 0x354
 */
void Pellet::setupParticles()
{
	f32 radius = getStickRadius();

	f32 nil          = 0.0f;
	mRotation        = nil;
	mMaxCollParticle = mConfig->mParams.mNumParticles.mData;

	if (mMaxCollParticle != 0) {
		if (strcmp("simple", mConfig->mParams.mParticleType.mData) == 0) {
			if (2.0f * (0.5f * mConfig->mParams.mHeight.mData) > radius) {
				setupParticles_tall();
			} else {
				setupParticles_simple();
			}
		} else {
			mDynamicType      = 0;
			mIsDynamic        = true;
			int particleCount = mMaxCollParticle;
			mMaxCollParticle++;

			createParticles(mMaxCollParticle);

			Vector3f rotation;
			for (int i = 0; i < particleCount; i++) {
				f32 theta     = (TAU / (f32)particleCount) * (f32)i;
				f32 mid       = mConfig->mParams.mHeight.mData * 0.5f;
				f32 midRadius = radius - mid;
				rotation.set(midRadius * sinf(theta), 0.0f, midRadius * cosf(theta));
				setupDynParticle(i, mid, rotation);
			}

			rotation = Vector3f(0.0f);
			setupDynParticle(particleCount, mConfig->mParams.mHeight.mData, 0.5f, rotation);
		}

		f32 inverse = 1.0f / mMaxCollParticle;
		mRotation   = mRotation * inverse;
	}
}

/**
 * @note Address: 0x80167924
 * @note Size: 0x220
 */
void Pellet::setupParticles_simple()
{
	f32 radius = getStickRadius();
	createParticles(mMaxCollParticle);

	f32 endIndex    = (f32)mMaxCollParticle;
	f32 angularStep = TAU / endIndex;

	f32 mid = mConfig->mParams.mHeight.mData * 0.5f;

	for (int i = 0; i < mMaxCollParticle; i++) {
		f32 theta     = angularStep * (f32)i;
		f32 midRadius = radius - mid;
		Vector3f rotation(midRadius * sinf(theta), 0.0f, midRadius * cosf(theta));
		setupDynParticle(i, mid, rotation);
	}
}

/**
 * @note Address: 0x80167B44
 * @note Size: 0x230
 */
void Pellet::setupParticles_tall()
{
	f32 radius = getStickRadius();
	f32 mid    = mConfig->mParams.mHeight.mData;
	mid        = 0.5f * mid;

	f32 height = mid;
	if (mid > 10.0f) {
		height = 10.0f;
	}

	int count = mMaxCollParticle;
	createParticles(count);
	f32 offset   = mid - height;
	f32 endIndex = (f32)count;

	f32 angularStep = TAU / endIndex;
	for (int i = 0; i < count; i++) {
		f32 theta     = angularStep * (f32)i;
		f32 midRadius = radius - height;
		Vector3f rotation(midRadius * sinf(theta), -offset, midRadius * cosf(theta));
		setupDynParticle(i, height, rotation);
	}
}

/**
 * @note Address: 0x80167D74
 * @note Size: 0x18
 */
bool Pellet::panmodokiCarryable()
{
	return !(mConfig->mParams.mCode.mData & 1);
}

/**
 * @note Address: 0x80167D8C
 * @note Size: 0x4C
 */
bool Pellet::isCarried()
{
	if (mIsAlwaysCarried || isPicked()) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x80167DE4
 * @note Size: 0x44
 */
void Pellet::finishDisplayCarryInfo()
{
	if (mCarryInfoList) {
		mCarryInfoList->mParam.mCarryInfo.disappear();
		mCarryInfoList = nullptr;
	}
}

/**
 * @note Address: 0x80167E28
 * @note Size: 0xA0
 */
void Pellet::getCarryInfoParam(CarryInfoParam& infoParam)
{
	infoParam.mUseType    = CINFOTYPE_Table;
	infoParam.mPosition   = mRigid.mConfigs[0].mPosition;
	infoParam.mYOffsetMax = 30.0f + mConfig->mParams.mHeight.mData;
	infoParam.mUnused     = 1;
	infoParam.mIsTopFirst = TRUE;
	infoParam.mMaxWeight  = getTotalCarryPikmins();
	int minVal;
	if (mMinCarriers > 0) {
		minVal = mMinCarriers;
	} else {
		minVal = mConfig->mParams.mMin.mData;
	}
	infoParam.mCurrentWeight = minVal;
	infoParam.mColor         = mCarryColor;
}

/**
 * @note Address: 0x80167EC8
 * @note Size: 0x68
 */
void Pellet::setCarryColor(int color)
{
	if (gameSystem->isVersusMode() && color != mCarryColor) {
		mCarryColor = color;
		sound_otakaraEventStart();
	}
	mCarryColor = color;
}

/**
 * @note Address: 0x80167F34
 * @note Size: 0xC
 */
void Pellet::clearCarryColor()
{
	mCarryColor = CINFOCOLOR_Struggle;
}

/**
 * @note Address: 0x80167F40
 * @note Size: 0x1C
 */
Vector3f Pellet::getVelocity()
{
	return mRigid.mConfigs[0].mVelocity;
}

/**
 * @note Address: 0x80167F5C
 * @note Size: 0x1C
 */
void Pellet::setVelocity(Vector3f& velocity)
{
	mRigid.mConfigs[0].mVelocity = velocity;
}

/**
 * @note Address: 0x80167F78
 * @note Size: 0x104
 */
void Pellet::allocateTexCaster()
{
	if ((getKind() == PelletType::Treasure || getKind() == PelletType::Upgrade) && mCaster == nullptr) {
		f32 radius = mConfig->mParams.mPRadius.mData;
		Sys::Sphere sphere(mPelletPosition, 2.0f * radius);
		mCaster = TexCaster::Mgr::sInstance->create(sphere, TAU * randFloat());

		if (mCaster) {
			if (mCaptureMatrix) {
				mCaster->hide();
			} else {
				mCaster->fadein(0.5f);
			}
		}
	}
}

/**
 * @note Address: 0x8016807C
 * @note Size: 0x2F0
 */
void Pellet::onSetPosition()
{
	if (!gameSystem->isZukanMode() && doSpawnBuried()) {
		ItemTreasure::Item* item = (ItemTreasure::Item*)ItemTreasure::mgr->birth();
		if (item) {
			mPelletPosition.y = mapMgr->getMinY(mPelletPosition);
			item->init(nullptr);
			item->setPosition(mPelletPosition, false);
			item->setTreasure(this);
		} else {
			JUT_PANICLINE(2326, "がっかり\n"); // 'disappointed' lol
		}
	}

	mRigid.initPosition(mPelletPosition, Vector3f::zero);
	mBaseTrMatrix        = mRigid.mPrimaryMatrix;
	mLodSphere.mPosition = mPelletPosition;
	updateParticlePositions();
	mRigid.mTimeStep = 1.0f;

	mMass = 0.0f;
	if (mPelletFlag == FLAG_NAVI_NAPSACK) {
		mMass = 0.1f;
	}

	f32 inertiaScaling = mConfig->mParams.mInertiaScaling.mData;
	f32 heightScaling  = mConfig->mParams.mHeight.mData / inertiaScaling;
	f32 z              = 1.0f;
	f32 radSquared     = SQUARE(mConfig->mParams.mRadius.mData / inertiaScaling);

	f32 horizontal = ((radSquared / 4) + (SQUARE(heightScaling) / 12.0f)) * z;
	f32 vertical   = z * (radSquared / 2);

	mRigid.mTransformationMtx(0, 0) *= horizontal;
	mRigid.mTransformationMtx(0, 1) *= horizontal;
	mRigid.mTransformationMtx(0, 2) *= horizontal;
	mRigid.mTransformationMtx(1, 0) *= vertical;
	mRigid.mTransformationMtx(1, 1) *= vertical;
	mRigid.mTransformationMtx(1, 2) *= vertical;
	mRigid.mTransformationMtx(2, 0) *= horizontal;
	mRigid.mTransformationMtx(2, 1) *= horizontal;
	mRigid.mTransformationMtx(2, 2) *= horizontal;
	mLodSphere.mPosition = mPelletPosition;
	mRigid.mFlags.set(1);
}

/**
 * @note Address: 0x8016836C
 * @note Size: 0x160
 */
void Pellet::setPanModokiRotation(f32 direction)
{
	mFaceDir = direction;

	Vector3f yVec;
	mBaseTrMatrix.getColumn(1, yVec);
	yVec.normalise();

	Matrixf mat;
	mat.makeNaturalPosture(yVec, direction);
	mBaseTrMatrix = mat;
	mRigid.mConfigs[0].mPrimaryRotation.fromMatrixf(mBaseTrMatrix);
	mRigid.mConfigs[0].mPrimaryRotation.normalise();
	mBaseTrMatrix.setTranslation(mPelletPosition);
	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mRigid.mPrimaryMatrix.mMatrix.mtxView);
}

/**
 * @note Address: 0x801684CC
 * @note Size: 0x2D0
 */
void Pellet::setOrientation(Matrixf& mat)
{
	Quat quat;
	quat.fromMatrixf(mat);
	quat.normalise();
	mRigid.mConfigs[0].mPrimaryRotation = quat;

	mBaseTrMatrix.makeQ(quat);
	mBaseTrMatrix.setTranslation(mPelletPosition);
	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mRigid.mPrimaryMatrix.mMatrix.mtxView);

	f32 x;
	f32 z;
	if (mBaseTrMatrix(1, 1) > 0.0f) {
		x = mBaseTrMatrix(0, 2);
		z = mBaseTrMatrix(2, 2);
	} else {
		x = mBaseTrMatrix(0, 0);
		z = mBaseTrMatrix(2, 0);
	}

	if (z < -1.0f) {
		z = -1.0f;
	} else if (z > 1.0f) {
		z = 1.0f;
	}

	if (x > 0.0f) {
		P2ASSERTLINE(2504, checkASinCosBounds(z));
		mFaceDir = acosf(z);
	} else {
		P2ASSERTLINE(2507, checkASinCosBounds(z));
		mFaceDir = -acosf(z);
	}

	mFaceDir = roundAng(mFaceDir);

	FORCE_DONT_INLINE;
}

/**
 * @note Address: 0x8016879C
 * @note Size: 0x28
 */
int Pellet::getStateID()
{
	return mPelletSM->getCurrID(this);
}

/**
 * @note Address: 0x801687C4
 * @note Size: 0x260
 */
void Pellet::bounceCallback(Sys::Triangle* triangle)
{
	f32 pRadius       = mConfig->mParams.mPRadius.mData;
	Vector3f position = getPosition();

	Sys::Sphere ball;
	ball.mPosition = position;
	f32 height     = mConfig->mParams.mHeight.mData;
	ball.mRadius   = height;
	ball.mPosition.y -= height;

	int fallType = 0;
	if (pRadius > 30.0f) {
		fallType = 2;
	} else if (pRadius > 10.0f) {
		fallType = 1;
	}

	WaterBox* wbox = checkWater(nullptr, ball);

	if (checkWater(nullptr, ball)) {
		if (!mIsBounced) {
			efx::TOtakaraDive diveEffect;
			ball.mPosition.y = *wbox->getSeaHeightPtr();

			f32 scale = mConfig->mParams.mPRadius.mData;
			efx::ArgScale arg(ball.mPosition, scale);
			diveEffect.create(&arg);
			mSoundMgr->startSound(fallType + 0x380B, 0);
			onBounce();
		}
		mIsBounced = true;
		return;
	}
	if (!mIsBounced && (getKind() != PelletType::Carcass)) {
		mSoundMgr->startSound(fallType + 0x3808, 0);
		mIsBounced = 1;
		onBounce();
	}
}

/**
 * @note Address: 0x80168A28
 * @note Size: 0xF84
 */
void Pellet::update()
{
	Sys::Sphere ball;
	ball.mPosition = getPosition();
	ball.mRadius   = mConfig->mParams.mHeight.mData;
	ball.mPosition.y -= ball.mRadius;

	if (checkWater(nullptr, ball)) {
		mIsInWater = true;
	} else {
		mIsInWater = false;
	}

	updateDiscoverDisable();

	if (mSoundMgr) {
		mSoundMgr->exec();
		if ((gameSystem->isStoryMode()) && !(moviePlayer->isFlag(MVP_IsActive)) && (!isPicked())
		    && (getKind() == PelletType::Treasure || getKind() == PelletType::Upgrade)) {
			PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
			PSSystem::validateSceneMgr(mgr);

			PSM::Scene_Game* currScene = (PSM::Scene_Game*)mgr->getChildScene();
			PSSystem::checkGameScene(currScene);

			if (!currScene->isCave()) {
				mSoundMgr->startSound(PSSE_MP_INSECT_OTAKARA_01, 0);
			}
		}
	}

	Vector3f frameworkVec; // A4
	if (mPelletCarry->frameWork(frameworkVec) != 0) {
		if (mSticked == nullptr) {
			mPelletCarry->reset();
		} else {
			Vector3f velocity = getVelocity();
			frameworkVec.y    = velocity.y;
			setVelocity(frameworkVec);
		}
	}

	if (!(mPickFlags & 1)) {
		updateClaim();
	}

	if (mPickFlags & 1) {
		if (getTotalCarryPikmins() < getPelletConfigMin()) {
			endPick(false);
			mPelletCarry->reset();
			if (mIsAlwaysCarried == 0) {
				setVelocity(Vector3f::zero);
			}
		}
	}

	mCollTree->getBoundingSphere(mLodSphere);
	updateCell();
	if (mPelletView) {
		mCollTree->update();
		mCollTree->getBoundingSphere(mLodSphere);
		mCollTree->mPart->mModel->getMatrix(0);
	}

	mPelletSM->exec(this);
	if (getStateID() == PELSTATE_Zukan) {
		AILODParm parm1;
		updateLOD(parm1);
		return;
	}

	if (!isAlive()) {
		AILODParm parm2;
		updateLOD(parm2);
		if (isMovieActor()) {
			mLod.setFlag(AILOD_IsVisibleBoth);
		}
		return;
	}

	if (mCaptureMatrix) {
		AILODParm parm3;
		updateLOD(parm3);
		return;
	}

	AILODParm parm4;
	updateLOD(parm4);
	if (isMovieActor()) {
		mLod.setFlag(AILOD_IsVisibleBoth);
	}
	bool check;
	int type = 2;
	if (mDynamicType == 0) {
		check = true;
	} else if (mDynamicType == 2) {
		check = false;
	} else if (mLod.isFlag(AILOD_IsMid | AILOD_IsFar) >= 2) {
		check = false;
	} else {
		check = true;
	}

	if (!mLod.isFlag(AILOD_IsVisible) || mLod.isFlag(AILOD_IsMid | AILOD_IsFar) >= 1) {
		type = 1;
	}
	mIsDynamic = check;

	if (PelletMgr::disableDynamics || !mIsDynamic) {
		f32 frametime = sys->getDeltaTime();
		Sys::Sphere moveSphere;
		moveSphere.mPosition = mPelletPosition;
		if (mPickFlags & 1) {
			moveSphere.mPosition.y -= 4.0f;
		}
		Vector3f* velocityPtr               = &mRigid.mConfigs[0].mVelocity;
		moveSphere.mRadius                  = 0.5f * mConfig->mParams.mHeight.mData;
		mRigid.mConfigs[0].mMomentum        = Vector3f(0.0f);
		mRigid.mConfigs[0].mRotatedMomentum = Vector3f(0.0f);

		if (((mIsAlwaysCarried == 0) && !(mPickFlags & 1)) || (mFloorTriangle == nullptr)) {
			velocityPtr->y = -((frametime * _aiConstants->mGravity.mData) - velocityPtr->y);
		}
		mAcceleration.y  = 0.0f;
		Vector3f moveVel = *velocityPtr;
		if (isCollisionFlick() && (mPelletFlag != 1) && !(mPickFlags & 1) && (mIsAlwaysCarried == 0)) {
			moveVel += mAcceleration;
		}

		mAcceleration = Vector3f(0.0f);

		MoveInfo info(&moveSphere, &moveVel, 0.5f);
		info.mMovingCreature = this;
		mapMgr->traceMove(info, frametime);

		if (mPickFlags & 1) {
			bool check = (info.mWallTriangle != nullptr);
			if (check && (moveVel.dot(info.mWallNormal) > 0.5f)) {
				check = false;
			}
			if (check) {
				if (mWallTimer < 100) {
					mWallTimer += 2;
				}
			} else {
				if (mWallTimer != 0) {
					mWallTimer--;
				}
			}
		} else {
			mWallTimer = 0;
		}
		*velocityPtr          = moveVel;
		info.mVelocity        = velocityPtr;
		info.mDoHardIntersect = false;
		if (platMgr) {
			platMgr->traceMove(info, frametime);
		}

		if (info.mFloorTriangle) {
			if (mFloorTriangle == nullptr) {
				bounceCallback(info.mFloorTriangle);
			}

			mFloorTriangle = info.mFloorTriangle;

			if (!(mPickFlags & 1) && (mIsAlwaysCarried == 0)) {
				Vector3f normal = info.mFloorNormal;
				Vector3f fallVelocity(0.0f, -(_aiConstants->mGravity.mData * sys->getDeltaTime()), 0.0f);

				Vector3f res2 = fallVelocity - normal * fallVelocity.dot(normal);
				res2          = -res2 * 1.0f;

				Vector3f newDir = *velocityPtr - normal * velocityPtr->dot(normal);
				*velocityPtr    = *velocityPtr - (newDir * frametime) * 10.0f;

				velocityPtr->x += res2.x;
				velocityPtr->y += res2.y;
				velocityPtr->z += res2.z;
			}
		} else {
			mFloorTriangle = nullptr;
		}

		if (mPickFlags & 1) {
			moveSphere.mPosition.y += 4.0f;
		}

		mPelletPosition              = moveSphere.mPosition;
		mRigid.mConfigs[0].mPosition = mPelletPosition;
	} else if (type > 0) {
		mRigid.computeForces(0);

		if (!(mPickFlags & 1) && (mIsAlwaysCarried == 0)) {
			computeForces(mConfig->mParams.mFriction.mData);
		}

		bool someCheck              = true;
		mRigid.mConfigs[0].mForce.y = -_aiConstants->mGravity.mData;
		if ((getStateID() == PELSTATE_Normal) && (mHasCollided != 0) && !isPicked()) {
			if (mRigid.mConfigs[0].mVelocity.length() < 10.0f && mRigid.mConfigs[0].mMomentum.length() < 100.0f && mIsAlwaysCarried == 0) {
				f32 time = sys->getDeltaTime();

				Sys::Sphere ball3;
				ball3.mPosition = mRigid.mConfigs[0].mPosition;
				f32 halfHeight  = 0.5f * mConfig->mParams.mHeight.mData;
				ball3.mRadius   = halfHeight;
				ball3.mPosition.y -= halfHeight;

				f32 gravity = _aiConstants->mGravity.mData;
				Vector3f anotherImpulse(0.0f, -gravity, 0.0f);

				MoveInfo info2(&ball3, &anotherImpulse, 0.0f);
				mapMgr->traceMove(info2, time);
				if (info2.mFloorTriangle == nullptr) {
					if (platMgr) {
						platMgr->traceMove(info2, time);
					}
				}

				if (info2.mFloorTriangle) {
					someCheck = false;
				}
			}
		}

		Vector3f someVec = mRigid.mConfigs[0].mPosition;
		f32 halfFrame    = sys->getDeltaTime() / 2;

		if (someCheck) {
			if (isCollisionFlick() && !(mPickFlags & 1) && (mIsAlwaysCarried == 0)) {
				mAcceleration.y = 0.0f;
				mRigid.mConfigs[0].mVelocity += mAcceleration;
			}
			for (int i = 0; i < 2; i++) {
				simulate(halfFrame);
			}
		}
		f32 frametimeagain = sys->getDeltaTime();
		f32 frames         = 1.0f / frametimeagain;
		Sys::Sphere ball4;
		ball4.mPosition = someVec;
		ball4.mRadius   = 0.5f * mConfig->mParams.mHeight.mData;

		Vector3f anotherMoveVec = mRigid.mConfigs[0].mPosition;
		anotherMoveVec          = anotherMoveVec - someVec;
		anotherMoveVec *= frames;
		someVec = anotherMoveVec;

		MoveInfo info3(&ball4, &anotherMoveVec, 0.5f);

		mapMgr->traceMove(info3, frametimeagain);
		if (platMgr != nullptr) {
			platMgr->traceMove(info3, frametimeagain);
		}

		if (mPickFlags & 1) {
			bool check = (info3.mWallTriangle != nullptr);
			if (check && (someVec.dot(info3.mWallNormal) > 0.5f)) {
				check = false;
			}
			if (check) {
				if (mWallTimer < 100) {
					mWallTimer += 2;
				}
			} else if (mWallTimer != 0) {
				mWallTimer--;
			}
		} else {
			mWallTimer = 0;
		}

		Vector3f newPos              = info3.mMoveSphere->mPosition;
		newPos.y                     = mRigid.mConfigs[0].mPosition.y;
		mRigid.mConfigs[0].mPosition = newPos;

		f32 anotherVelMag = mRigid.mConfigs[0].mVelocity.normalise();

		f32 reallyAnotherMag = mAcceleration.length();

		if (anotherVelMag > reallyAnotherMag) {
			f32 diff = anotherVelMag - reallyAnotherMag;
			mRigid.mConfigs[0].mVelocity *= diff;
		} else {
			mRigid.mConfigs[0].mVelocity *= anotherVelMag;
		}

		mAcceleration = Vector3f(0.0f);
	}

	do_update();
}

/**
 * @note Address: 0x801699B8
 * @note Size: 0x1C
 */
void Pellet::getPikiBirthCount(int& min, int& max)
{
	min = mConfig->mParams.mPikiCountMin.mData;
	max = mConfig->mParams.mPikiCountMax.mData;
}

/**
 * @note Address: 0x801699D4
 * @note Size: 0x14
 */
void PelletMgr::setMovieDraw(bool check)
{
	mMovieDrawDisabled = !check;
}

/**
 * @note Address: 0x801699E8
 * @note Size: 0x12C
 */
void Pellet::doSimulation(f32 constraint)
{
	Creature::CheckHellArg hellArg;
	hellArg.mIsKillPiki = false;
	if (checkHell(hellArg) == CREATURE_HELL_DEATH) {
		Vector3f position   = getPosition();
		Vector3f wpPosition = position;
		wpPosition.y        = 0.0f;

		NotOff condition;
		WPSearchArg searchArg(wpPosition, &condition, false, 10.0f);

		WayPoint* wayPoint = mapMgr->mRouteMgr->getNearestWayPoint(searchArg);
		if (wayPoint) {
			wpPosition   = wayPoint->getPosition();
			wpPosition.y = 100.0f + mapMgr->getMinY(wpPosition);

			setPosition(wpPosition, false);
		}
	}
}

/**
 * @note Address: 0x80169B14
 * @note Size: 0x114
 */
void Pellet::updateTrMatrix()
{
	if (mCaptureMatrix == nullptr) {
		mPelletPosition = mRigid.mConfigs[0].mPosition;
		Vector3f vec    = mRotation * -1.0f;
		Matrixf T;
		T.makeT(vec);

		Matrixf Q;
		Q.makeQ(mRigid.mConfigs[0].mPrimaryRotation);

		Matrixf mat;
		PSMTXConcat(Q.mMatrix.mtxView, T.mMatrix.mtxView, mat.mMatrix.mtxView);

		mat.setTranslation(mPelletPosition);
		mBaseTrMatrix = mat;
	}
}

/**
 * @note Address: 0x80169C28
 * @note Size: 0x27C
 */
void Pellet::doAnimation()
{
	if (!pelletMgr->mMovieDrawDisabled || isMovieActor()) {
		if (gameSystem != nullptr && gameSystem->isFlag(GAMESYS_IsGameWorldActive)) {
			update();
		} else {
			if (mCollTree) {
				mCollTree->getBoundingSphere(mLodSphere);
			}
			AILODParm parm;
			updateLOD(parm);
		}

		if (getStateID() == PELSTATE_Zukan) {
			mCarryAnim.animate(mAnimSpeed);
			mCarryAnim.setModelCalc(mModel, 0);
			update_pmotions();
		} else if (mCaptureMatrix == nullptr) {
			if (mPelletView == nullptr && mModel != nullptr && mCarryAnim.mAnimMgr) {
				mCarryAnim.animate(mAnimSpeed);
				mCarryAnim.setModelCalc(mModel, 0);
				update_pmotions();
			}

			mPelletPosition   = mRigid.mConfigs[0].mPosition;
			Vector3f opposite = mRotation * -1.0f;

			Matrixf matT;
			matT.makeT(opposite);

			Matrixf matQ;
			matQ.makeQ(mRigid.mConfigs[0].mPrimaryRotation);

			Matrixf outMat;
			PSMTXConcat(matQ.mMatrix.mtxView, matT.mMatrix.mtxView, outMat.mMatrix.mtxView);
			outMat.setTranslation(mPelletPosition);

			mBaseTrMatrix = outMat;

			updateParticlePositions();
		} else {
			return;
		}

		entryShape();
	}
}

/**
 * @note Address: 0x80169EA4
 * @note Size: 0xF0
 */
void Pellet::doEntry()
{
	if (!pelletMgr->mMovieDrawDisabled || isMovieActor()) {
		if (mPelletView == nullptr) {
			if (mLod.isFlag(AILOD_IsVisible)) {
				mModel->show();
				changeMaterial();
			} else if (BaseHIOParms::sEntryOpt && !gameSystem->isMultiplayerMode()) {
				return;
			} else {
				mModel->hide();
			}
		}

		theEntry();
	}
}

/**
 * @note Address: 0x80169F98
 * @note Size: 0x20
 */
void Pellet::doSetView(int viewportNumber)
{
	Creature::doSetView(viewportNumber);
}

/**
 * @note Address: 0x80169FB8
 * @note Size: 0x20
 */
void Pellet::doViewCalc()
{
	Creature::doViewCalc();
}

/**
 * @note Address: 0x80169FD8
 * @note Size: 0xDC
 */
void Pellet::theEntry()
{
	if (mModel) {
		if (mLod.isFlag(AILOD_IsVisible)) {
			mModel->show();
		} else if (BaseHIOParms::sEntryOpt && !gameSystem->isMultiplayerMode()) {
			return;
		} else {
			mModel->hide();
		}
		changeMaterial();
		mModel->mJ3dModel->entry();
		mModel->mJ3dModel->calcDiffTexMtx();
	}
}

/**
 * @note Address: 0x8016A0B4
 * @note Size: 0x9C
 */
void Pellet::entryShape()
{
	if (mPelletView == nullptr) {
		if (mModel) {
			PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
			mScale.set(mModel->mJ3dModel->mModelScale);
			mModel->mJ3dModel->calc();
			mCollTree->update();
		}
	} else {
		mCollTree->update();
	}
}

/**
 * @note Address: 0x8016A150
 * @note Size: 0x24
 */
void Pellet::getBoundingSphere(Sys::Sphere& sphere)
{
	sphere = mLodSphere;
}

/**
 * @note Address: 0x8016A174
 * @note Size: 0x3C
 */
void Pellet::getLODSphere(Sys::Sphere& sphere)
{
	sphere.mPosition = mLodSphere.mPosition;
	if (mPelletView == nullptr) {
		sphere.mRadius = mRadius;
	} else {
		sphere.mRadius = mLodSphere.mRadius;
	}
}

/**
 * @note Address: 0x8016A1B0
 * @note Size: 0x58
 */
void Pellet::init_pmotions()
{
	int numPMotions = mConfig->mParams.mNumPMotions.mData;
	if (numPMotions > 0) {
		mNumPMotions          = numPMotions;
		mPmotionAnim.mAnimMgr = mCarryAnim.mAnimMgr;
		mPmotionAnim.startAnim(0, nullptr);
	} else {
		mNumPMotions = 0;
	}
}

/**
 * @note Address: 0x8016A208
 * @note Size: 0xB4
 */
void Pellet::update_pmotions()
{
	SysShape::Animator* animator = &mPmotionAnim;
	animate_pmotions(animator);
}

/**
 * @note Address: 0x8016A2BC
 * @note Size: 0x44
 */
void Pellet::start_pmotions()
{
	if (mNumPMotions > 0) {
		SysShape::Animator* animator = &mPmotionAnim;
		animator->startAnim(1, this);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x90
 */
void Pellet::start_carrymotion()
{
	if (mCarryAnim.mAnimMgr) {
		if (!mCarryAnim.isFlag(SysShape::Animator::AnimFinishMotion)) {
			mCarryAnim.startAnim(0, this);
			mAnimSpeed = 30.0f * sys->mDeltaTime;
		}
	} else if (mPelletView) {
		mPelletView->view_start_carrymotion();
	}
}

/**
 * @note Address: 0x8016A300
 * @note Size: 0xC
 */
void Pellet::stop_carrymotion()
{
	mAnimSpeed = 0.0f;
}

/**
 * @note Address: 0x8016A30C
 * @note Size: 0x54
 */
void Pellet::finish_carrymotion()
{
	if (mCarryAnim.mAnimMgr) {
		mCarryAnim.setFlag(SysShape::Animator::AnimFinishMotion);
		return;
	}

	if (mPelletView) {
		mPelletView->view_finish_carrymotion();
	}
}

/**
 * @note Address: 0x8016A360
 * @note Size: 0x88
 */
void Pellet::onKeyEvent(SysShape::KeyEvent const& keyEvent)
{
	if (keyEvent.mType == KEYEVENT_END && mCarryAnim.isFlag(SysShape::Animator::AnimFinishMotion)) {
		mCarryAnim.startAnim(0, this);
		if (mPickFlags & 1) {
			mAnimSpeed = 30.0f * sys->mDeltaTime;
			return;
		}
		mAnimSpeed = 0.0f;
	}
}

/**
 * @note Address: 0x8016A3E8
 * @note Size: 0xC0
 */
bool Pellet::isSlotFree(s16 slot)
{
	if (slot == 9999) {
		return (mIsAlwaysCarried == 0);
	}

	P2ASSERTBOUNDSLINE(3686, 0, slot, mSlotCount);

	return !mSlots.isBitSet(slot);
}

/**
 * @note Address: 0x8016A4A8
 * @note Size: 0x1C
 */
int Pellet::getSpeicalSlot()
{
	s16 slot = 9999;
	if (mIsAlwaysCarried > 0) {
		slot = -1;
	}
	return slot;
}

/**
 * @note Address: 0x8016A4C4
 * @note Size: 0x54
 */
s16 Pellet::getFreeStickSlot()
{
	for (int slot = 0; slot < mSlotCount; slot++) {
		if (!mSlots.isBitSet(slot)) {
			return slot;
		}
	}
	return -1;
}

/**
 * @note Address: 0x8016A518
 * @note Size: 0x128
 */
s16 Pellet::getNearFreeStickSlot(Vector3f& position)
{
	f32 minDist    = 12800.0f;
	s16 returnSlot = -1;

	for (s16 slot = 0; slot < mSlotCount; slot++) {
		if (!mSlots.isBitSet(slot)) {
			Vector3f slotPosition;
			calcStickSlotGlobal(slot, slotPosition);
			f32 dist = slotPosition.distance(position);
			if (dist < minDist) {
				minDist    = dist;
				returnSlot = slot;
			}
		}
	}
	return returnSlot;
}

/**
 * @note Address: 0x8016A640
 * @note Size: 0xE8
 */
s16 Pellet::getRandomFreeStickSlot()
{
	int slotDiff, slotShift, newSlotByte;
	int slotCap    = mSlotCount;
	int randomSlot = slotCap * randFloat();
	int slotByte   = 128;
	s16 returnSlot = -1;
	for (s16 slot = 0; slot < slotCap; slot++) {
		if (!mSlots.isBitSet(slot)) {
			slotDiff    = slot - randomSlot;
			slotShift   = slotDiff >> 31;
			newSlotByte = (slotShift ^ slotDiff) - slotShift;
			if (newSlotByte < slotByte) {
				slotByte   = newSlotByte;
				returnSlot = slot;
			}
		}
	}
	return returnSlot;
}

/**
 * @note Address: 0x8016A728
 * @note Size: 0x20C
 */
Onyon* Pellet::getPelletGoal()
{
	Onyon* goalOnyon;

	if (gameSystem->isVersusMode()
	    || (getKind() != PelletType::Treasure && getKind() != PelletType::Berry && getKind() != PelletType::Upgrade)) {
		int maxCount = -1;
		int counter  = 0;
		int i        = 0;

		for (int j = 0; j < 3; j++) {
			if (maxCount < (int)mPikminCount[j]) {
				maxCount = mPikminCount[j];
			}
		}

		int onyonType[3];
		for (int j = 0; j < 3; j++) {
			if (maxCount == (int)mPikminCount[j]) {
				onyonType[i++] = j;
				counter++;
			}
		}

		int idx = randInt(counter);
		if (idx >= counter) {
			idx = ONYON_TYPE_BLUE;
		}

		int type  = onyonType[idx];
		goalOnyon = ItemOnyon::mgr->getOnyon(type);
		if (gameSystem->isStoryMode() && !playData->hasBootContainer(type)) {
			goalOnyon = nullptr;
		}

		if (goalOnyon == nullptr) {
			goalOnyon = ItemOnyon::mgr->getOnyon(ONYON_TYPE_RED);
			if (goalOnyon == nullptr) {
				goalOnyon = ItemOnyon::mgr->mPod;
			}
		}
	} else {
		goalOnyon = ItemOnyon::mgr->mUfo;
		if (ItemOnyon::mgr->mUfo == nullptr) {
			goalOnyon = ItemOnyon::mgr->mPod;
		}
	}

	return goalOnyon;
}

/**
 * @note Address: 0x8016A934
 * @note Size: 0x3C
 */
int Pellet::getTotalPikmins()
{
	int count = mPikminCount[0];
	for (int i = 1; i < PikiColorCount; i++) {
		count += mPikminCount[i];
	}
	return count;
}

/**
 * @note Address: 0x8016A970
 * @note Size: 0x6C
 */
int Pellet::getTotalCarryPikmins()
{
	int total = 0;
	for (int i = 0; i < PikiColorCount; i++) {
		total += mPikminCount[i] * pikiMgr->getColorTransportScale(i);
	}
	return total;
}

/**
 * @note Address: 0x8016A9DC
 * @note Size: 0x78
 */
int Pellet::getPikmins(int color)
{
	P2ASSERTBOUNDSLINE(3902, 0, color, PikiColorCount);
	return mPikminCount[color];
}

/**
 * @note Address: 0x8016AA54
 * @note Size: 0x1D4
 */
void Pellet::onSlotStickStart(Creature* creature, s16 slot)
{
	if (slot != 9999) {
		P2ASSERTBOUNDSLINE(3917, 0, slot, mSlotCount);
		P2ASSERTLINE(3918, isSlotFree(slot));
		mSlots.setBit(slot);
	}

	if (creature->isPiki()) {
		int pikminType = static_cast<Piki*>(creature)->mPikiKind;
		P2ASSERTBOUNDSLINE(3925, 0, pikminType, PikiColorCount);

		mPikminCount[pikminType]++;
		mCarryPower += static_cast<Piki*>(creature)->getPelletCarryPower();
	} else {
		mTotalCarriers++;
	}

	int max = mMaxCarriers > 0 ? mMaxCarriers : mConfig->mParams.mMax.mData;
	if (max != 1) {
		mCarryColor    = CINFOCOLOR_Struggle;
		mCarryInfoList = carryInfoMgr->appear(this);
	}
}

/**
 * @note Address: 0x8016AC28
 * @note Size: 0x1E8
 */
void Pellet::onSlotStickEnd(Creature* creature, s16 slot)
{
	if (slot != 9999) {
		P2ASSERTBOUNDSLINE(3952, 0, slot, mSlotCount);
		if (isSlotFree(slot)) {
			JUT_PANICLINE(3956, "onSlotStickEnd\n");
		}
		mSlots.unsetBit(slot);
	}

	if (creature->isPiki()) {
		int pikminType = static_cast<Piki*>(creature)->mPikiKind;
		P2ASSERTBOUNDSLINE(3964, 0, pikminType, PikiColorCount);

		mPikminCount[pikminType]--;
		mCarryPower -= static_cast<Piki*>(creature)->getPelletCarryPower();
	} else {
		mTotalCarriers--;
	}

	if (getTotalPikmins() == 0) {
		if (mCarryInfoList) {
			mCarryInfoList->mParam.mCarryInfo.disappear();
			mCarryInfoList = nullptr;
		}
		mPelletCarry->giveup(0);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x18C
 * calcStickSlotLocal__Q24Game6PelletFsR10Vector3f
 */
// void calcStickSlotLocal__Q24Game6PelletFsR10Vector3f()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x8016AE10
 * @note Size: 0x21C
 */
void Pellet::calcStickSlotGlobal(s16 slot, Vector3f& stickPosition)
{
	Vector3f pos; // sp14
	if (slot == 9999) {
		pos = Vector3f(0.0f);
	} else {
		bool validSlot = (slot >= 0) && (slot < mSlotCount);
		P2ASSERTLINE(4016, validSlot);
		f32 theta  = TAU / (f32)mSlotCount;
		theta      = theta * slot + mAngleOffset;
		f32 radius = mConfig->mParams.mPRadius.mData;
		pos        = Vector3f(radius * sinf(theta), 0.0f, radius * cosf(theta));
		int face   = getFace();
		f32 mid    = (0.5f * mConfig->mParams.mHeight.mData) + 1.0f;

		if (face == 0) {
			f32 negMid = -mid;
			pos.y      = negMid;
			if (mPickFlags & 1) {
				pos.y -= 4.0f;
			}
		} else {
			pos.y = mid;
			if (mPickFlags & 1) {
				pos.y += 4.0f;
			}
		}
	}

	Vector3f outVec;
	PSMTXMultVec(mBaseTrMatrix.mMatrix.mtxView, (Vec*)&pos, (Vec*)&outVec);
	stickPosition = Vector3f(outVec);
}

/**
 * @note Address: 0x8016B02C
 * @note Size: 0x68
 */
int Pellet::getFace()
{
	if (mDynamicType == 2) {
		return 0;
	}
	Vector3f yVec;
	getYVector(yVec);
	if (yVec.y > 0.0f) {
		return 0;
	} else if (yVec.y < -0.0f) {
		return 1;
	} else {
		return 2;
	}
}

/**
 * @note Address: 0x8016B094
 * @note Size: 0x2AC
 */
void Pellet::startPick()
{
	if (!(mPickFlags & 1)) {
		if (mConfig->mParams.mCode.mData & 1) {
			shadowOn();
		}

		start_carrymotion();

		Vector3f vec2;
		Vector3f vec1;
		int ySign;

		if (mDynamicType != 2) {
			getYVector(vec1);
		}

		getYVector(vec2);
		vec2 = vec2 * 4.0f;

		if (getFace() == 0) {
			mRigid.mConfigs[0].mPosition += vec2;
		} else {
			mRigid.mConfigs[0].mPosition -= vec2;
		}

		DynParticle* particle = mDynParticle;
		while (particle) {
			if (getFace() == 0) {
				particle->mRotation.y -= 4.0f;
			} else {
				particle->mRotation.y += 4.0f;
			}
			particle = static_cast<DynParticle*>(particle->mNext);
		}

		if (mPickFlags & 2) {
			sound_otakaraEventRestart();
		} else {
			sound_otakaraEventStart();
			mPickFlags |= 2;
		}
		mPickFlags |= 1;
	}
}

/**
 * @note Address: 0x8016B344
 * @note Size: 0x17C
 */
void Pellet::endPick(bool b)
{
	if (mPickFlags & 1) {
		mPelletCarry->reset();
		mCarryColor = CINFOCOLOR_Struggle;
		sound_otakaraEventStop();

		if (!b) {
			if (mCarryAnim.mAnimMgr) {
				mCarryAnim.setFlag(SysShape::Animator::AnimFinishMotion);
			} else if (mPelletView) {
				mPelletView->view_finish_carrymotion();
			}
			if (mConfig->mParams.mCode.mData & 1) {
				shadowOff();
			}
		}

		mPickFlags &= ~0x1;

		Vector3f yVec;
		if (mDynamicType != 2) {
			getYVector(yVec);
		}

		DynParticle* particle = mDynParticle;
		while (particle) {
			if (getFace() == 0) {
				particle->mRotation.y += 4.0f;
			} else {
				particle->mRotation.y -= 4.0f;
			}
			particle = static_cast<DynParticle*>(particle->mNext);
		}
	}
}

/**
 * @note Address: 0x8016B4C4
 * @note Size: 0xC
 */
void Pellet::clearDiscoverDisable()
{
	mDiscoverDisable = 0;
}

/**
 * @note Address: 0x8016B4D0
 * @note Size: 0x8
 */
void Pellet::startDiscoverDisable(u8 start)
{
	mDiscoverDisable = start;
}

/**
 * @note Address: 0x8016B4D8
 * @note Size: 0x18
 */
void Pellet::updateDiscoverDisable()
{
	if (mDiscoverDisable == 0) {
		return;
	}
	mDiscoverDisable--;
}

/**
 * @note Address: 0x8016B4F0
 * @note Size: 0x2C
 */
bool Pellet::discoverDisabled()
{
	if (gameSystem->isStoryMode()) {
		return mDiscoverDisable > 0;
	}
	return false;
}

/**
 * @note Address: 0x8016B51C
 * @note Size: 0x2C
 */
void Pellet::doSave(Stream& stream)
{
	stream.writeByte((u8)mIsCaptured);
}

/**
 * @note Address: 0x8016B548
 * @note Size: 0x1DC
 */
void Pellet::doLoad(Stream& stream)
{
	u8 byte     = stream.readByte();
	mIsCaptured = byte != 0;

	Vector3f pelletPosition = getPosition();
	WPSearchArg arg(pelletPosition, nullptr, false, 10.0f);
	WayPoint* wayPoint = mapMgr->mRouteMgr->getNearestWayPoint(arg);

	bool isOnyonNearest = false;
	for (int i = 0; i < 3; i++) {
		Onyon* onyon = ItemOnyon::mgr->getOnyon(i);
		if (onyon != nullptr && wayPoint == onyon->mGoalWayPoint) {
			isOnyonNearest = true;
		}
	}
	if (ItemOnyon::mgr->mUfo->mGoalWayPoint == wayPoint) {
		isOnyonNearest = true;
	}

	if (isOnyonNearest) {
		WPExcludeSpot exclude;
		WPSearchArg arg(pelletPosition, &exclude, false, 10.0f);
		WayPoint* wayPoint = mapMgr->mRouteMgr->getNearestWayPoint(arg);
		if (wayPoint != nullptr) {
			Vector3f newPosition = wayPoint->getPosition();
			f32 y                = 0.5f * mConfig->mParams.mHeight.mData;
			newPosition.y += y;
			setPosition(newPosition, false);
		}
	}
}

/**
 * @note Address: 0x8016B724
 * @note Size: 0xF4
 */
void Pellet::onStartCapture()
{
	Vector3f captureVec;
	mCaptureMatrix->getTranslation(captureVec);
	mRigid.mConfigs[0].mVelocity = Vector3f(0.0f);
	mRigid.mConfigs[0].mPosition = captureVec;
	mLodSphere.mPosition         = captureVec;
	mPelletPosition              = captureVec;

	if (mModel) {
		mBaseTrMatrix.makeT(mPelletPosition);
		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);

		mScale.set(mModel->mJ3dModel->mModelScale);
		mModel->mJ3dModel->calc();

		if (mCollTree) {
			mCollTree->update();
		}
	}
	shadowOff();
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
// void Pellet::getCurrentBuryDepth()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x8016B818
 * @note Size: 0x110
 */
void Pellet::onUpdateCapture(Matrixf& matrix)
{
	if (mCarryAnim.mAnimMgr) {
		mCarryAnim.animate(0.0f);
	}

	SysShape::Model* model = mModel;
	if (model) {
		mCarryAnim.setModelCalc(mModel, 0);
	}

	if (mPelletView == nullptr) {
		if (mModel) {
			PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
			J3DModel* j3dModel = mModel->mJ3dModel;
			mScale.set(mModel->mJ3dModel->mModelScale);
			mModel->mJ3dModel->calc();
			mCollTree->update();
		}
	} else {
		mCollTree->update();
	}

	if (!mPelletFlag) {
		mDiscoverDisable = 90;
	}
}

/**
 * @note Address: 0x8016B928
 * @note Size: 0x98
 */
void Pellet::onEndCapture()
{
	Matrixf mtx;
	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mtx.mMatrix.mtxView);
	mIsCaptured = true;
	shadowOn();
	setPosition(mRigid.mConfigs[0].mPosition, false);
	createKiraEffect(mPelletPosition);
	if (mDynamicType == 2) {
		PSMTXIdentity(mtx.mMatrix.mtxView);
	}
	setOrientation(mtx);
}

/**
 * @note Address: 0x8016B9C0
 * @note Size: 0x270
 */
BasePelletMgr::BasePelletMgr(PelletList::cKind kind)
{
	mConfigList = PelletList::Mgr::getConfigList(kind);
	int count   = mConfigList->mConfigCnt;
	mEntries    = count;

	mModelData  = new J3DModelData*[count];
	mAnimMgr    = new SysShape::AnimMgr*[count];
	mCollParts  = new CollPart*[count];
	mIsUsedList = new bool[count];

	for (int i = 0; i < count; i++) {
		if (PelletMgr::mDebug) {
			mIsUsedList[i] = true;
		} else {
			mIsUsedList[i] = false;
		}
	}

	for (int j = 0; j < count; j++) {
		mModelData[j] = nullptr;
		mAnimMgr[j]   = nullptr;
		mCollParts[j] = nullptr;
	}

	mModelMgr = nullptr;
}

/**
 * @note Address: 0x8016BD88
 * @note Size: 0x30
 */
PelletConfig* BasePelletMgr::getPelletConfig(int i)
{
	if (i < 0 || i >= mConfigList->mConfigCnt) {
		return nullptr;
	}
	return &mConfigList->mConfigs[i];
}

/**
 * @note Address: 0x8016BDB8
 * @note Size: 0x7C
 */
void BasePelletMgr::setUse(int i)
{
	P2ASSERTBOUNDSLINE(4419, 0, i, mEntries);
	mIsUsedList[i] = true;
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
bool BasePelletMgr::used(int i)
{
	P2ASSERTBOUNDSLINE(4425, 0, i, mEntries);
	return mIsUsedList[i] != false;
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void BasePelletMgr::setUseFlagAll(bool use)
{
	// Never used, just a guess (size is right though)
	for (int i = 0; i < mEntries; i++) {
		mIsUsedList[i] = use;
	}
}

/**
 * @note Address: 0x8016BE34
 * @note Size: 0x298
 */
void BasePelletMgr::load()
{
	char buffer[512];
	char* file = nullptr;

#if defined(VERSION_PAL)
	if (gGameConfig.mParms.mPelletMultiLang.mData != 0) {
		sprintf(buffer, "/user/Abe/Pellet/%s/", "pal");
		file = buffer;
	} else {
		file = "user/Kando/pellet/";
	}
#else
	if (gGameConfig.mParms.mPelletMultiLang.mData != 0) {
		switch (sys->mRegion) {
		case System::LANG_Japanese:
			sprintf(buffer, "/user/Abe/Pellet/%s/", "jpn");
			file = buffer;
			break;
		case System::LANG_English:
			sprintf(buffer, "/user/Abe/Pellet/%s/", "us");
			file = buffer;
			break;
		case System::LANG_French:
		case System::LANG_German:
		// case System::LANG_HOL_UNUSED:
		case System::LANG_Italian:
		case System::LANG_Spanish:
			sprintf(buffer, "/user/Abe/Pellet/%s/", "pal");
			file = buffer;
			break;
		}
	} else {
		file = "user/Kando/pellet/";
	}
#endif

	char buffer2[512];

	for (int i = 0; i < mConfigList->mConfigCnt; i++) {

		PelletConfig* config   = &mConfigList->mConfigs[i];
		JKRArchive* archive    = nullptr;
		config->mParams.mIndex = i;
		char* archiveName      = config->mParams.mArchive.mData;
		if (strcmp("null", archiveName)) {
			sprintf(buffer2, "%s%s", file, config->mParams.mArchive.mData);
			archive = JKRMountArchive(buffer2, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
		}

		J3DModelData* data = nullptr;

		if (strcmp("null", config->mParams.mBmd.mData) == 0) {
			mModelData[i] = nullptr;
		} else {
			sprintf(buffer2, "%s", config->mParams.mBmd.mData);

			void* resource = JKRFileLoader::getGlbResource(buffer2, nullptr);
			if (resource == nullptr) {
				JUT_PANICLINE(4560, "meck ** %s : is not foun !\n", buffer2);
			}

			u32 flags = J3DMLF_Material_PE_FogOff | J3DMLF_Material_UseIndirect | J3DMLF_18 | J3DMLF_UseImmediateMtx;
			if (config->mParams.mCode.mData & 2) {
				flags |= J3DMLF_UsePostTexMtx;
			}
			data = J3DModelLoaderDataBase::load(resource, flags);

			if (config->mParams.mCode.mData & 2) {
				for (u16 i = 0; i < data->getShapeNum(); i++) {
					data->getShapeNodePointer(i)->setTexMtxLoadType(0x2000);
				}
			}

			mModelData[i] = data;
		}

		if (config->mParams.mAnimMgr.mData) {
			sprintf(buffer2, "%s%s", file, config->mParams.mAnimMgr.mData);
			mAnimMgr[i] = SysShape::AnimMgr::load(buffer2, data, archive);
		}

		if (config->mParams.mColltree.mData) {
			sprintf(buffer2, "%s%s", file, config->mParams.mColltree.mData);
			mCollParts[i] = CollPartFactory::load(buffer2);
		}
	}
}

/**
 * @note Address: 0x8016C0CC
 * @note Size: 0x3E4
 */
void BasePelletMgr::load_texArc(char* filename)
{
	char buffer[512];
	char* directory = nullptr;

#if defined(VERSION_PAL)
	if (gGameConfig.mParms.mPelletMultiLang.mData != 0) {
		sprintf(buffer, "/user/Abe/Pellet/%s/", "pal");
		directory = buffer;
	} else {
		directory = "user/Kando/pellet/";
	}
#else
	if (gGameConfig.mParms.mPelletMultiLang.mData != 0) {
		switch (sys->mRegion) {
		case System::LANG_Japanese:
			sprintf(buffer, "/user/Abe/Pellet/%s/", "jpn");
			directory = buffer;
			break;
		case System::LANG_English:
			sprintf(buffer, "/user/Abe/Pellet/%s/", "us");
			directory = buffer;
			break;
		case System::LANG_French:
		case System::LANG_German:
		// case System::LANG_HOL_UNUSED:
		case System::LANG_Italian:
		case System::LANG_Spanish:
			sprintf(buffer, "/user/Abe/Pellet/%s/", "pal");
			directory = buffer;
			break;
		}
	} else {
		directory = "user/Kando/pellet/";
	}
#endif

	char path[512];
	sprintf(path, "%s%s", directory, filename);

	JKRArchive* textArc = openTextArc(path);
	JUT_ASSERTLINE(4728, textArc, "%s: not found !\n", path);

	for (int i = 0; i < mConfigList->mConfigCnt; i++) {
		PelletConfig* config = &mConfigList->mConfigs[i];

		if (used(i)) {
			config->mParams.mIndex = i;

			JKRArchive* archive = nullptr;
			if (strcmp("null", config->mParams.mArchive.mData)) {
				sprintf(path, "%s%s", directory, config->mParams.mArchive.mData);
				archive = JKRMountArchive(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
			}

			J3DModelData* data = nullptr;

			if (strcmp("null", config->mParams.mBmd.mData) == 0) {
				mModelData[i] = nullptr;
			} else {
				JUT_ASSERTLINE(4776, archive, "archive not found\n");
				sprintf(path, "%s", config->mParams.mBmd.mData);
				void* resourceLoad = JKRFileLoader::getGlbResource(path, nullptr);
				void* resource     = resourceLoad;
				if (resourceLoad == nullptr) {
					resource = archive->getResource(path);
					JUT_PANICLINE(4786, "%s : is not foun !\n", path);
				}

				if (config->mParams.mIndirectState != PelletConfig::Indirect_No) {
					u32 flags = J3DMLF_Material_PE_FogOff | J3DMLF_Material_UseIndirect | J3DMLF_18 | J3DMLF_UseImmediateMtx;
					if (config->mParams.mCode.mData & 2) {
						flags |= J3DMLF_UsePostTexMtx;
					}
					data = J3DModelLoaderDataBase::load(resource, flags);
				} else {
					u32 flags = J3DMLF_Material_PE_FogOff | J3DMLF_18 | J3DMLF_UseImmediateMtx;
					if (config->mParams.mCode.mData & 2) {
						flags |= J3DMLF_UsePostTexMtx;
					}
					data = J3DModelLoaderDataBase::load(resource, flags);
				}

				mModelData[i] = data;

				if (config->mParams.mCode.mData & 2) {
					for (u16 i = 0; i < data->getShapeNum(); i++) {
						data->getShapeNodePointer(i)->setTexMtxLoadType(0x2000);
					}
				}
			}

			if (config->mParams.mAnimMgr.mData != 0) {
				sprintf(path, "%s/%s", config->mParams.mName.mData, config->mParams.mAnimMgr.mData);
				mAnimMgr[i] = SysShape::AnimMgr::load(textArc, path, data, archive, nullptr);
				if (mAnimMgr[i] == nullptr) {
					mAnimMgr[i] = SysShape::AnimMgr::load(textArc, path, data, archive, nullptr);
				}
			}

			if (config->mParams.mColltree.mData != 0) {
				sprintf(path, "%s/%s", config->mParams.mName.mData, config->mParams.mColltree.mData);
				mCollParts[i] = CollPartFactory::load(textArc, path);
			}
		}
	}
	closeTextArc(textArc);
}

/**
 * @note Address: 0x8016C4B0
 * @note Size: 0x10C
 */
JKRArchive* BasePelletMgr::openTextArc(char* arc)
{
	char directory[512];
	char* file = nullptr;
#if defined(VERSION_PAL)
	if (gGameConfig.mParms.mPelletMultiLang.mData != 0) {
		sprintf(directory, "/user/Abe/Pellet/%s/", "pal");
		file = directory;
	} else {
		file = "user/Kando/pellet/";
	}
#else
	if (gGameConfig.mParms.mPelletMultiLang.mData != 0) {
		switch (sys->mRegion) {
		case System::LANG_Japanese:
			sprintf(directory, "/user/Abe/Pellet/%s/", "jpn");
			file = directory;
			break;
		case System::LANG_English:
			sprintf(directory, "/user/Abe/Pellet/%s/", "us");
			file = directory;
			break;
		case System::LANG_French:
		case System::LANG_German:
		// case System::LANG_HOL_UNUSED:
		case System::LANG_Italian:
		case System::LANG_Spanish:
			sprintf(directory, "/user/Abe/Pellet/%s/", "pal");
			file = directory;
			break;
		}
	} else {
		file = "user/Kando/pellet/";
	}
#endif

	char filePath[512];

	sprintf(filePath, "%s/%s", file, arc);
	return JKRMountArchive(filePath, JKRArchive::EMM_Mem, JKRHeap::sCurrentHeap, JKRArchive::EMD_Tail);
}

/**
 * @note Address: 0x8016C5BC
 * @note Size: 0x30
 */
void BasePelletMgr::closeTextArc(JKRArchive* archive)
{
	archive->unmount();
}

/**
 * @note Address: 0x8016C5EC
 * @note Size: 0xE4
 */
void BasePelletMgr::useModelMgr(int arg1, u32 arg2)
{
	int modelType = 2;
	if (gameSystem && gameSystem->mSection->mPlayerMode == 1) {
		modelType = 1;
	}

	mModelMgr = new SysShape::ModelMgr(mConfigList->mConfigCnt, mModelData, arg1, arg2, modelType,
	                                   new Delegate1<BasePelletMgr, SysShape::Model*>(this, &createModelCallback));
}

/**
 * @note Address: 0x8016C700
 * @note Size: 0xE4
 */
SysShape::Model* BasePelletMgr::createShape(int modelDataIndex, int arg2)
{
	int modelType = 2;
	if (gameSystem && gameSystem->mSection->mPlayerMode == 1) {
		modelType = 1;
	}

	SysShape::Model* model;
	if (mModelMgr) {
		model = mModelMgr->createModel(modelDataIndex, arg2);
	} else {
		if (mModelData[modelDataIndex] == nullptr) {
			JUT_PANICLINE(5061, "bpmgr:no modelData!%d\n", modelDataIndex);
		}
		model = new SysShape::Model(mModelData[modelDataIndex], 0, modelType);
		model->mJ3dModel->newDifferedTexMtx(TEXDIFF_Material);
	}
	return model;
}

/**
 * @note Address: 0x8016C7E4
 * @note Size: 0x158
 */
void BasePelletMgr::setCollTree(Pellet* pellet, int partIndex)
{
	SysShape::Model* pelletModel = pellet->mModel;

	if (pelletModel == nullptr) {
		SysShape::Model* pelletViewModel = pellet->mPelletView->viewGetShape();
		Sys::Sphere sphere(Vector3f::zero, pellet->mConfig->mParams.mPRadius.mData);
		pellet->mCollTree->createSingleSphere(pelletViewModel, pellet->mPelletView->viewGetCollTreeJointIndex(), sphere, &mCollPartMgr);

		CollPart* part = pellet->mCollTree->mPart;
		if (part) {
			part->mOffset = pellet->mPelletView->viewGetCollTreeOffset();
		}
	} else {
		CollPart* part = mCollParts[partIndex];
		if (part) {
			pellet->mCollTree->createFromFactory(pelletModel, (CollPartFactory*)part, &mCollPartMgr);
			return;
		}

		Sys::Sphere sphere(Vector3f::zero, pellet->mConfig->mParams.mRadius.mData);
		pellet->mCollTree->createSingleSphere(pelletModel, 0, sphere, &mCollPartMgr);
	}
}

/**
 * @note Address: 0x8016C93C
 * @note Size: 0x24
 */
GenPelletParm* BasePelletMgr::generatorNewPelletParm()
{
	return new GenPelletParm;
}

/**
 * @note Address: 0x8016C960
 * @note Size: 0x8
 */
J3DModelData* BasePelletMgr::generatorGetShape(GenPelletParm*)
{
	return nullptr;
}

/**
 * @note Address: 0x8016C968
 * @note Size: 0x18
 */
PelletIterator::PelletIterator()
{
	mType  = 0;
	mNode  = nullptr;
	mIndex = 0;
	mMgr   = nullptr;
}

/**
 * @note Address: 0x8016C980
 * @note Size: 0x4C
 */
void PelletIterator::first()
{
	mNode = static_cast<TObjectNode<GenericObjectMgr>*>(pelletMgr->mNode.mChild);
	if (mNode) {
		mMgr = (FixedSizePelletMgr<Pellet>*)mNode->mContents;
	} else {
		mMgr = nullptr;
	}
	setFirst();
}

/**
 * @note Address: 0x8016C9CC
 * @note Size: 0x68
 */
Pellet* PelletIterator::operator*()
{
	P2ASSERTLINE(5197, mMgr);
	return mMgr->getObjectPtr((void*)mIndex);
}

/**
 * @note Address: 0x8016CA34
 * @note Size: 0xC0
 */
void PelletIterator::next()
{
	if (mType == 0) {
		mIndex = (int)mMgr->getNext((void*)mIndex);
	} else {
		JUT_PANICLINE(5206, "manda!\n");
	}

	if (mIndex == (u32)mMgr->getEnd()) {
		mNode = mNode->getNext();
		if (mNode) {
			mMgr = (FixedSizePelletMgr<Pellet>*)mNode->mContents;
			setFirst();
			return;
		}
		mMgr = nullptr;
	}
}

/**
 * @note Address: 0x8016CAF4
 * @note Size: 0x10
 */
bool PelletIterator::isDone()
{
	return mMgr == nullptr;
}

/**
 * @note Address: 0x8016CB04
 * @note Size: 0x350
 */
void PelletIterator::setFirst()
{
	if (mMgr) {
		if (mType == 0) {
			mIndex = (int)mMgr->getStart();
		} else {
			JUT_PANICLINE(5233, "manda!\n");
		}

		if (mIndex == (u32)mMgr->getEnd()) {
			mNode = mNode->getNext();
			if (mNode) {
				mMgr = (FixedSizePelletMgr<Pellet>*)mNode->mContents;
				setFirst();
				return;
			}
			mMgr = nullptr;
		}

	} else {
		mIndex = 0;
	}
}

/**
 * @note Address: 0x8016CE5C
 * @note Size: 0xCC
 */
PelletMgr::PelletMgr()
{
	mName              = "ペレットマネージャ"; // pellet manager
	mMovieDrawDisabled = false;
}

/**
 * @note Address: N/A
 * @note Size: 0xB8
 */
void PelletMgr::setUseFlagAll(bool use)
{
	PelletNumber::mgr->setUseFlagAll(use);
	PelletCarcass::mgr->setUseFlagAll(use);
	PelletFruit::mgr->setUseFlagAll(use);
	PelletOtakara::mgr->setUseFlagAll(use);
	PelletItem::mgr->setUseFlagAll(use);
}

/**
 * @note Address: 0x8016D148
 * @note Size: 0xF0
 */
void PelletMgr::createManagers(u32)
{
	PelletNumber::Mgr* numberMgr = new PelletNumber::Mgr();
	PelletNumber::mgr            = numberMgr;
	addMgr(numberMgr);

	PelletCarcass::Mgr* carcassMgr = new PelletCarcass::Mgr();
	PelletCarcass::mgr             = carcassMgr;
	addMgr(carcassMgr);

	PelletFruit::Mgr* fruitMgr = new PelletFruit::Mgr();
	PelletFruit::mgr           = fruitMgr;
	addMgr(fruitMgr);

	PelletOtakara::Mgr* otakaraMgr = new PelletOtakara::Mgr();
	PelletOtakara::mgr             = otakaraMgr;
	addMgr(otakaraMgr);

	PelletItem::Mgr* itemMgr = new PelletItem::Mgr();
	PelletItem::mgr          = itemMgr;
	addMgr(itemMgr);
}

/**
 * @note Address: 0x8016D238
 * @note Size: 0x80
 */
void PelletMgr::resetMgrs()
{
	PelletNumber::mgr->resetMgr();
	PelletCarcass::mgr->resetMgr();
	PelletFruit::mgr->resetMgr();
	PelletItem::mgr->resetMgrAndResources();
	PelletOtakara::mgr->resetMgrAndResources();
}

/**
 * @note Address: 0x8016D3A8
 * @note Size: 0x80
 */
void PelletMgr::setupResources()
{
	PelletNumber::mgr->setupResources();
	PelletCarcass::mgr->setupResources();
	PelletFruit::mgr->setupResources();
	PelletOtakara::mgr->setupResources();
	PelletItem::mgr->setupResources();
}

/**
 * @note Address: N/A
 * @note Size: 0x50C
 * calcNearestTreasure__Q24Game9PelletMgrFR10Vector3<f>f
 */
Pellet* PelletMgr::calcNearestTreasure(Vector3f& position, f32 radius)
{
	Pellet* nearest = nullptr;
	f32 distance    = radius;
	Iterator<PelletOtakara::Object> iterOta(PelletOtakara::mgr);
	CI_LOOP(iterOta)
	{
		Pellet* pellet      = *iterOta;
		Vector3f offset     = pellet->getPosition() - position;
		f32 currentDistance = offset.length();
		if (currentDistance < distance) {
			distance = currentDistance;
			nearest  = pellet;
		}
	}
	Iterator<PelletItem::Object> iterItem(PelletItem::mgr);
	CI_LOOP(iterItem)
	{
		Pellet* pellet      = *iterItem;
		Vector3f offset     = pellet->getPosition() - position;
		f32 currentDistance = offset.length();
		if (currentDistance < distance) {
			distance = currentDistance;
			nearest  = pellet;
		}
	}
	return nearest;
}

/**
 * @note Address: 0x8016D4C0
 * @note Size: 0x21C
 */
Pellet* PelletMgr::birth(PelletInitArg* arg)
{
	P2ASSERTBOOLLINE(5394, arg && arg->mPelletType != 255);

	BasePelletMgr* mgr = getMgrByID(arg->mPelletType);
	P2ASSERTLINE(5396, mgr);

	PelletConfig* config;
	if (!gameSystem->isZukanMode() && !gameSystem->isVersusMode() && !PelletMgr::mDebug && !arg->mDontCheckCollected) {
		config = mgr->mConfigList->getPelletConfig(arg->mTextIdentifier);
		if (strcmp("yes", config->mParams.mUnique.mData) == 0) {
			int unk = arg->mPelletIndex;
			if (arg->mPelletType == PelletList::PLK_Otakara) {
				u8 result = playData->mZukanStat->mOtakara(unk);
				if (result & 2) {
					mgr->mConfigList->getPelletConfig(arg->mTextIdentifier);
					return nullptr;
				}
			} else if (arg->mPelletType == PelletList::PLK_Item) {
				u8 result = playData->mZukanStat->mItem(unk);
				if (result & 2) {
					mgr->mConfigList->getPelletConfig(arg->mTextIdentifier);
					return nullptr;
				}
			}
		}
	}

	Pellet* pellet;
	if (arg->mFromEnemy) {
		config = mgr->mConfigList->getPelletConfig(arg->mTextIdentifier);
		pellet = mgr->birthFromTeki(config);
		if (pellet) {
			mgr->setComeAlive(pellet->mSlotIndex);
			arg->mDoSkipCreateModel = true;
			pellet->init(arg);
			return pellet;
		}
		return nullptr;
	} else {
		pellet = mgr->birth();
		if (pellet) {
			pellet->mPelletView = arg->mPelView;
			pellet->mMgr        = mgr;
			pellet->init(arg);
		}
		return pellet;
	}
}

/**
 * @note Address: 0x8016D6DC
 * @note Size: 0x1AC
 */
bool PelletMgr::setUse(PelletInitArg* arg)
{
	P2ASSERTBOOLLINE(5531, arg && arg->mPelletType != PelletType::Invalid);

	BasePelletMgr* mgr = getMgrByID(arg->mPelletType);
	P2ASSERTLINE(5533, mgr);

	PelletConfig* config;
	// If not piklopedia (second condition always evaluates to true)
	if (!gameSystem->isZukanMode() && !arg->mDontCheckCollected) {
		config = mgr->mConfigList->getPelletConfig(arg->mTextIdentifier);

		if (IS_SAME_STRING("yes", config->mParams.mUnique.mData)) {
			int pelletIdx = arg->mPelletIndex;

			if (arg->mPelletType == PelletList::PLK_Otakara) {
				u8 result = playData->mZukanStat->mOtakara(pelletIdx);
				if (result & 2) {
					mgr->mConfigList->getPelletConfig(arg->mTextIdentifier);
					return false;
				}
			} else if (arg->mPelletType == PelletList::PLK_Item) {
				u8 result = playData->mZukanStat->mItem(pelletIdx);
				if (result & 2) {
					mgr->mConfigList->getPelletConfig(arg->mTextIdentifier);
					return false;
				}
			}
		}
	}
	mgr->setUse(arg->mPelletIndex);
	return true;
}

/**
 * @note Address: 0x8016D888
 * @note Size: 0x15C
 */
bool PelletMgr::OtakaraItemCode::isNull()
{
	BasePelletMgr* mgr;
	PelletConfig* config;
	if (mValue == 0) {
		return true;
	}

	u8 code = getPelletKind();
	mgr     = nullptr;
	if (code == PelletType::Treasure) {
		mgr = PelletOtakara::mgr;
	} else if (code == PelletType::Upgrade) {
		mgr = PelletItem::mgr;
	}

	JUT_ASSERTLINE(5574, mgr, "illegal code (%x)\n", mValue);

	code = mValue;
	if ((mValue & 0xFF) < 0 || code >= mgr->mConfigList->mConfigCnt) {
		config = nullptr;
	} else {
		config = mgr->mConfigList->mConfigs + code;
	}

	JUT_ASSERTLINE(5578, config, "illegal code no config found (%x) index %d\n", mValue, code);

	if (strcmp("yes", config->mParams.mUnique.mData) == 0) {
		u8 code = mValue;
		if (getPelletKind() == PelletType::Treasure) {
			u8 result = playData->mZukanStat->mOtakara(code);
			if (result & 2) {
				return true;
			}
		} else {
			u8 result = playData->mZukanStat->mItem(code);
			if (result & 2) {
				return true;
			}
		}
	}
	return false;
}

/**
 * @note Address: 0x8016D9E4
 * @note Size: 0xC8
 */
bool PelletMgr::makePelletInitArg(PelletInitArg& arg, char* identifier)
{
	BasePelletMgr* mgr          = PelletOtakara::mgr;
	PelletConfig* otakaraConfig = mgr->mConfigList->getPelletConfig(identifier);
	PelletConfig* config        = otakaraConfig;

	if (otakaraConfig == nullptr) {
		mgr    = PelletItem::mgr;
		config = mgr->mConfigList->getPelletConfig(identifier);
	}

	JUT_ASSERTLINE(5614, config, "no config found(%s)\n", identifier);

	arg.mTextIdentifier = identifier;
	arg.mPelletType     = mgr->getMgrID();
	arg.mPelletIndex    = config->mParams.mIndex;
	arg.mPelView        = 0;

	makeVsCarryMinMax(arg, identifier);
	return true;
}

/**
 * @note Address: 0x8016DAAC
 * @note Size: 0xE4
 */
void PelletMgr::makeVsCarryMinMax(PelletInitArg& arg, char* name)
{
	if (gameSystem && gameSystem->isVersusMode()) {
		if (!strcmp(VsOtakaraName::cBedamaYellow, name)) {
			arg.mMinCarriers = VS_MARBLE_MIN_WEIGHT;
			arg.mMaxCarriers = VS_MARBLE_MAX_WEIGHT;
		} else if (!strcmp(VsOtakaraName::cBedamaRed, name)) {
			arg.mMinCarriers = VS_MARBLE_MIN_WEIGHT;
			arg.mMaxCarriers = VS_MARBLE_MAX_WEIGHT;
		} else if (!strcmp(VsOtakaraName::cBedamaBlue, name)) {
			arg.mMinCarriers = VS_MARBLE_MIN_WEIGHT;
			arg.mMaxCarriers = VS_MARBLE_MAX_WEIGHT;
		} else if (!strcmp(VsOtakaraName::cCoin, name)) {
			arg.mMinCarriers = VS_CHERRY_MIN_WEIGHT;
			arg.mMaxCarriers = VS_CHERRY_MAX_WEIGHT;
		}
	}
}

/**
 * @note Address: 0x8016DB90
 * @note Size: 0x2EC
 */
bool PelletMgr::makePelletInitArg(PelletInitArg& arg, PelletMgr::OtakaraItemCode& itemCode)
{
	if (itemCode.isNull()) {
		return false;
	}

	BasePelletMgr* mgr;
	PelletConfig* config;

	u8 code = itemCode.getPelletKind();
	mgr     = nullptr;
	if (code == PelletType::Treasure) {
		mgr = PelletOtakara::mgr;
	} else if (code == PelletType::Upgrade) {
		mgr = PelletItem::mgr;
	}

	JUT_ASSERTLINE(5672, mgr, "illegal code (%x)\n", itemCode.mValue);

	code = itemCode.mValue;
	if ((itemCode.mValue & 255) < 0 || code >= mgr->mConfigList->mConfigCnt) {
		config = nullptr;
	} else {
		config = mgr->mConfigList->mConfigs + code;
	}

	JUT_ASSERTLINE(5676, config, "illegal code no config found (%x) index %d\n", itemCode.mValue, code);

	arg.mTextIdentifier = config->mParams.mName.mData;
	arg.mPelletType     = itemCode.getPelletKind();
	arg.mPelletIndex    = itemCode.getPelletIndex();
	arg.mPelView        = 0;
	makeVsCarryMinMax(arg, arg.mTextIdentifier);
	return true;
}

/**
 * @note Address: 0x8016DE7C
 * @note Size: 0x60
 */
void PelletMgr::makeOtakaraItemCode(char* configName, OtakaraItemCode& code)
{
	PelletList::cKind kind;
	PelletConfig* config = PelletList::Mgr::getConfigAndKind(configName, kind);
	if (config) {
		code.mValue = (kind << 8 & 0xFF00) + (u8)config->mParams.mIndex;
	} else {
		code.mValue = 0;
	}
}

/**
 * @note Address: 0x8016DEDC
 * @note Size: 0x34
 */
void PelletMgr::OtakaraItemCode::read(Stream& stream)
{
	mValue = stream.readShort();
}

/**
 * @note Address: 0x8016DF10
 * @note Size: 0x60
 */
void PelletMgr::OtakaraItemCode::write(Stream& stream)
{
	stream.textWriteTab(stream.mTabCount);
	stream.writeShort(mValue);
	stream.textWriteText("# お宝アイテムコード\r\n"); // 'treasure item code'
}

/**
 * @note Address: 0x8016DF70
 * @note Size: 0x6C
 */
void PelletMgr::addMgr(BasePelletMgr* mgr)
{
	TObjectNode<GenericObjectMgr>* node = new TObjectNode<GenericObjectMgr>;
	node->mContents                     = mgr;
	mNode.add(node);
}

/**
 * @note Address: 0x8016DFDC
 * @note Size: 0x1E4
 */
void PelletMgr::doAnimation()
{
	Iterator<GenericObjectMgr> iter(this);
	CI_LOOP(iter)
	{
		(*iter)->doAnimation();
	}
}

/**
 * @note Address: 0x8016E20C
 * @note Size: 0x1E4
 */
void PelletMgr::doEntry()
{
	Iterator<GenericObjectMgr> iter(this);
	CI_LOOP(iter)
	{
		(*iter)->doEntry();
	}
}

/**
 * @note Address: 0x8016E3F0
 * @note Size: 0x1F4
 */
void PelletMgr::doSetView(int viewportNumber)
{
	Iterator<GenericObjectMgr> iter(this);
	CI_LOOP(iter)
	{
		(*iter)->doSetView(viewportNumber);
	}
}

/**
 * @note Address: 0x8016E5E4
 * @note Size: 0x1E4
 */
void PelletMgr::doViewCalc()
{
	Iterator<GenericObjectMgr> iter(this);
	CI_LOOP(iter)
	{
		(*iter)->doViewCalc();
	}
}

/**
 * @note Address: 0x8016E7C8
 * @note Size: 0x1F4
 */
void PelletMgr::doSimulation(f32 constraint)
{
	Iterator<GenericObjectMgr> iter(this);
	CI_LOOP(iter)
	{
		(*iter)->doSimulation(constraint);
	}
}

/**
 * @note Address: 0x8016E9BC
 * @note Size: 0x4
 */
void PelletMgr::doDirectDraw(Graphics&)
{
}

/**
 * @note Address: 0x8016E9C0
 * @note Size: 0x1F4
 */
void PelletMgr::doSimpleDraw(Viewport* viewport)
{
	Iterator<GenericObjectMgr> iter(this);
	CI_LOOP(iter)
	{
		(*iter)->doSimpleDraw(viewport);
	}
}

/**
 * @note Address: 0x8016EBB4
 * @note Size: 0x1D4
 */
void PelletMgr::setupSoundViewerAndBas()
{
	Iterator<GenericObjectMgr> iter(this);
	CI_LOOP(iter)
	{
		*iter;
	}
}

/**
 * @note Address: 0x8016ED88
 * @note Size: 0x14
 */
void PelletMgr::decode(s32 index, u8& pelletType, int& code)
{
	pelletType = (index >> 24) & 0xFF;
	code       = index & 0xFFFFFF;
}

/**
 * @note Address: 0x8016ED9C
 * @note Size: 0xC
 */
int PelletMgr::encode(u8 pelletType, int code)
{
	return (pelletType << 24) | code;
}

/**
 * @note Address: 0x8016EDA8
 * @note Size: 0xB4
 */
char* PelletMgr::getCaveName(int caveID)
{
	u8 mgrID;
	int configID;
	decode(caveID, mgrID, configID);

	BasePelletMgr* mgr = getMgrByID(mgrID);
	P2ASSERTLINE(5881, mgr);
	PelletConfig* config = mgr->getPelletConfig(configID);
	P2ASSERTLINE(5883, config);
	return config->getName();
}

/**
 * @note Address: 0x8016EE5C
 * @note Size: 0x270
 */
int PelletMgr::getCaveID(char* name)
{
	Iterator<GenericObjectMgr> iter(this);
	CI_LOOP(iter)
	{
		BasePelletMgr* mgr = (BasePelletMgr*)*iter;
		for (int i = 0; i < mgr->mConfigList->mConfigCnt; i++) {
			if (IS_SAME_STRING_N(mgr->getPelletConfig(i)->getName(), name, strlen(name))) {
				return encode(mgr->getMgrID(), i);
			}
		}
	}
	return -1;
}

/**
 * @note Address: N/A
 * @note Size: 0x200
 */
BasePelletMgr* PelletMgr::getMgrByIndex(int index)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8016F0CC
 * @note Size: 0x21C
 */
BasePelletMgr* PelletMgr::getMgrByID(u8 id)
{
	Iterator<GenericObjectMgr> iter(this);
	CI_LOOP(iter)
	{
		GenericObjectMgr* genMgr = iter.mContainer->get(iter.mIndex);
		BasePelletMgr* mgr       = static_cast<BasePelletMgr*>(genMgr);
		if (mgr->getMgrID() == id) {
			return mgr;
		}
	}
	return nullptr;
}

} // namespace Game
