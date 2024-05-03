#include "Game/Entities/Pom.h"
#include "Game/Entities/ItemPikihead.h"
#include "Game/gamePlayData.h"
#include "Game/Stickers.h"
#include "Game/BirthMgr.h"
#include "efx/TOnyon.h"
#include "efx/TPonDead.h"
#include "efx/TEnemyDownSmoke.h"
#include "efx/TEnemyDownWat.h"
#include "Iterator.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Pom {

/**
 * @note Address: 0x802547A4
 * @note Size: 0x138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/**
 * @note Address: 0x802548DC
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x802548E0
 * @note Size: 0x114
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	if (isBirthTypeDropGroup()) {
		disableEvent(0, EB_Invulnerable);
		enableEvent(0, EB_DamageAnimEnabled);
		hardConstraintOff();
	} else {
		enableEvent(0, EB_Invulnerable);
		disableEvent(0, EB_DamageAnimEnabled);
		hardConstraintOn();
	}

	disableEvent(0, EB_PlatformCollEnabled);
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_DeathEffectEnabled);
	disableEvent(0, EB_LifegaugeVisible);
	enableEvent(0, EB_BitterImmune);
	setEmotionNone();

	shadowMgr->killShadow(this);
	setPomParms();
	mCanTouchToClose = false;
	mCanSwallowPiki  = false;
	mUsedSlotCount   = 0;
	mSwingTimer      = 0.0f;
	mQueenColorTimer = 0.0f;

	mFsm->start(this, POM_Wait, nullptr);
}

/**
 * @note Address: 0x802549F4
 * @note Size: 0x88
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	mMouthSlots.update();
	if (isEvent(0, EB_DamageAnimEnabled) && mFloorTriangle) {
		if (isEvent(0, EB_HardConstrained)) {
			enableEvent(0, EB_Invulnerable);
			disableEvent(0, EB_DamageAnimEnabled);
		} else {
			hardConstraintOn();
		}
	}
}

/**
 * @note Address: 0x80254A7C
 * @note Size: 0x110
 */
void Obj::changeMaterial()
{
	J3DModel* j3dModel      = mModel->mJ3dModel;
	J3DModelData* modelData = j3dModel->mModelData;

	u16 nameIdx           = j3dModel->mModelData->mMaterialTable.mMaterialNames->getIndex("hanabira1_v");
	J3DMaterial* material = modelData->mMaterialTable.mMaterials[nameIdx];
	material->mTevBlock->setTevColor(0, mRgbColor);
	j3dModel->calcMaterial();

	for (u16 i = 0; i < modelData->mMaterialTable.mMaterialNum; i++) {
		J3DMatPacket& packet = j3dModel->mMatPackets[i];
		j3dSys.mMatPacket    = &j3dModel->mMatPackets[i];
		modelData->mMaterialTable.mMaterials[i]->diff(packet.mShapePacket->mDiffFlag);
	}
}

/**
 * @note Address: 0x80254B8C
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x80254B90
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x80254BB0
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x80254BFC
 * @note Size: 0x44
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition.x               = mPosition.x;
	shadowParam.mPosition.y               = mPosition.y + 2.0f;
	shadowParam.mPosition.z               = mPosition.z;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mBoundingSphere.mRadius   = 0.1f;
	shadowParam.mSize                     = 0.1f;
}

/**
 * @note Address: 0x80254C40
 * @note Size: 0x12C
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (creature && creature->isPiki() && collpart) {
		if (collpart->mCurrentID == 'slot' && mCanSwallowPiki && mUsedSlotCount < mTotalSlotCount) {
			MouthCollPart* slot = mMouthSlots.getSlot(0);
			InteractSwallow swallow(this, 1.0f, slot);
			if (creature->stimulate(swallow)) {
				mUsedSlotCount++;
			}
			mSwingTimer = 0.0f;
			createSwingSmokeEffect();
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x80254D6C
 * @note Size: 0x2C
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart) { return pressCallBack(creature, damage, collpart); }

/**
 * @note Address: 0x80254D98
 * @note Size: 0xA8
 */
void Obj::collisionCallback(CollEvent& collEvent)
{
	if (collEvent.mCollidingCreature) {
		if (collEvent.mCollidingCreature->isPiki() || collEvent.mCollidingCreature->isNavi() || collEvent.mCollidingCreature->isTeki()) {
			setCollEvent(collEvent);
		}
	}
}

/**
 * @note Address: 0x80254E40
 * @note Size: 0x4C
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(1);
	mMouthSlots.setup(0, mModel, "jnt_center");
}

/**
 * @note Address: N/A
 * @note Size: 0xB4
 */
void Obj::setPomColor(int pikiKind)
{
	mPikiKind = (EPikiKind)pikiKind;
	switch (mPikiKind) {
	case Blue:
		mRgbColor.r = mRgbColor.g = 50;
		mRgbColor.b               = 255;
		break;
	case Red:
		mRgbColor.r = 255;
		mRgbColor.g = mRgbColor.b = 20;
		break;
	case Yellow:
		mRgbColor.r = mRgbColor.g = 255;
		mRgbColor.b               = 20;
		break;
	case Purple:
		mRgbColor.r = 28;
		mRgbColor.g = 0;
		mRgbColor.b = 52;
		break;
	case White:
		mRgbColor.r = 200;
		mRgbColor.g = 255;
		mRgbColor.b = 220;
		break;
	}
}

/**
 * @note Address: 0x80254E8C
 * @note Size: 0x510
 */
void Obj::setPomParms()
{
	EnemyTypeID::EEnemyTypeID id = getEnemyTypeID();

	switch (id) {
	case EnemyTypeID::EnemyID_BluePom:
		setPomColor(Blue);
		break;
	case EnemyTypeID::EnemyID_RedPom:
		setPomColor(Red);
		break;
	case EnemyTypeID::EnemyID_YellowPom:
		setPomColor(Yellow);
		break;
	case EnemyTypeID::EnemyID_BlackPom:
		setPomColor(Purple);
		break;
	case EnemyTypeID::EnemyID_WhitePom:
		setPomColor(White);
		break;
	case EnemyTypeID::EnemyID_RandPom:
		setPomColor(Red);
		break;
	}

	if (getEnemyTypeID() != EnemyTypeID::EnemyID_RandPom) {
		mTotalSlotCount = C_PROPERPARMS.mNormalMaxSlots.mValue;
		mShotMultiplier = 1;
		mRgbColor.a     = 0;
	} else {
		mTotalSlotCount = C_PROPERPARMS.mQueenMaxSlots.mValue;
		mShotMultiplier = C_PROPERPARMS.mQueenShotMultiplier.mValue;
		mRgbColor.a     = 255;
	}
}

/**
 * @note Address: 0x802553A4
 * @note Size: 0x4AC
 */
void Obj::shotPikmin()
{
	Vector3f pos = getPosition();
	pos.y += 50.0f;

	int val = mStuckPikminCount * mShotMultiplier;
	Stickers stickers(this);
	Iterator<Creature> iter(&stickers);

	CI_LOOP(iter)
	{
		Creature* creature = (*iter);
		if (creature->isPiki() && creature->isStickToMouth()) {
			int pikiKind = static_cast<Piki*>(creature)->mPikiKind;
			if (pikiKind < Bulbmin) {
				BirthMgr::dec(pikiKind);
				if (getEnemyTypeID() != EnemyTypeID::EnemyID_RandPom && static_cast<Piki*>(creature)->mPikiKind == mPikiKind) {
					mUsedSlotCount--;
				}
			}
			CreatureKillArg killArg(CKILL_DontCountAsDeath);
			InteractKill kill(this, &killArg);
			creature->stimulate(kill);
		}
	}

	for (int i = 0; i < val; i++) {
		ItemPikihead::Item* sprout = static_cast<ItemPikihead::Item*>(ItemPikihead::mgr->birth());
		if (sprout) {
			f32 randAngle = randWeightFloat(TAU);

			Vector3f initPos = Vector3f(110.0f * cosf(randAngle), 750.0f, 110.0f * sinf(randAngle));
			ItemPikihead::InitArg initArg((EPikiKind)mPikiKind, initPos);

			sprout->init(&initArg);
			sprout->setPosition(pos, false);
			BirthMgr::inc(mPikiKind);
		}
	}

	createShotEffect();
	setZukanVisible(false);
}

/**
 * @note Address: 0x80255850
 * @note Size: 0x19C
 */
void Obj::changePomColor()
{
	if (getEnemyTypeID() == EnemyTypeID::EnemyID_RandPom) {
		if (mQueenColorTimer > C_PROPERPARMS.mColorChangeTime.mValue) {
			int limit     = mPikiKind + 3; // more than 3 and we loop back
			int nextColor = mPikiKind + 1; // first potential next color to try (Blue->Red->Yellow)

			int choosableColors[] = { Blue, Red, Yellow, 0, 0 }; // only set Blue, Red, Yellow as queen options

			for (nextColor; nextColor < limit; nextColor++) {
				int colorIndex = nextColor; // color to try
				if (nextColor > 2) {        // only allow Blue (0), Red (1), Yellow (2)
					colorIndex = nextColor - 3;
				}

				// if color is unlocked, set color of dots + output piki, reset timer + return
				// NB: colors for purple and white are here, probably disabled before release
				if (playData->hasMetPikmin(choosableColors[colorIndex])) {
					setPomColor(colorIndex);
					mQueenColorTimer = 0.0f;
					return;
				}
			}
		} else {
			mQueenColorTimer += sys->mDeltaTime;
		}
	}
}

/**
 * @note Address: 0x802559EC
 * @note Size: 0x184
 */
void Obj::createSwingSmokeEffect()
{
	if (mWaterBox) {
		Vector3f pos = mPosition;
		pos.y        = *mWaterBox->getSeaHeightPtr();
		efx::ArgScale argScale(pos, 0.7f);
		efx::TEnemyDownWat waterFX;

		waterFX.create(&argScale);

	} else {
		efx::Arg arg(mPosition.x, mPosition.y - 5.0f, mPosition.z);
		efx::TEnemyDownSmoke smokeFX(1.0f);

		smokeFX.mScale = 0.7f;
		smokeFX.create(&arg);
	}
}

/**
 * @note Address: 0x80255B70
 * @note Size: 0x94
 */
void Obj::createShotEffect()
{
	Vector3f pos = mPosition;
	pos.y -= 60.0f;

	efx::Arg arg(pos);
	efx::TOnyonLay laySeed;

	laySeed.create(&arg);
}

/**
 * @note Address: 0x80255C04
 * @note Size: 0x80
 */
void Obj::createPomDeadEffect()
{
	efx::Arg arg(mPosition);
	efx::TPonDead deadFX;

	deadFX.create(&arg);
}

} // namespace Pom
} // namespace Game
