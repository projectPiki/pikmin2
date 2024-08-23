#include "Game/Entities/Pelplant.h"
#include "Game/Farm.h"
#include "Game/gamePlayData.h"

#include "JSystem/J3D/J3DMtxBuffer.h"

namespace Game {
namespace Farm {
FarmMgr* farmMgr;
}

namespace Pelplant {
Obj* Obj::sCurrentObj;

static f32 sLODRadius[4] = { 45.0f, 60.0f, 103.0f, 133.0f }; // one, five, ten, twenty
} // namespace Pelplant
} // namespace Game

const char* unused[] = { __FILE__, "/enemy/data/pelplant", "/enemy/parm/pelplant" };

static f32 negSin(f32 x) { return -JMath::sincosTable_.mTable[((int)(x *= -325.9493f) & 0x7ffU)].first; }
static f32 posSin(f32 x) { return JMath::sincosTable_.mTable[((int)(x *= 325.9493f) & 0x7ffU)].first; }

// Custom version of pikmin2_sinf from trig.h
inline f32 pikmin2_sinf_(f32 x)
{
	if (x < 0.0f) {
		return negSin(x);
	} else {
		return posSin(x);
	}
}

namespace Game {
namespace Pelplant {
/**
 * @note Address: 0x80108300
 * @note Size: 0xB0
 */
f32 BlendAccelerationFunc::getValue(f32 t)
{
	f32 sinTheta = pikmin2_sinf_(TAU * (3.0f * -t));
	f32 value    = ((0.5f * (1.0f - t)) * sinTheta) + t;

	if (value > 1.0f) {
		return 1.0f;
	}

	if (value < 0.0f) {
		value = 0.0f;
	}
	return value;
}

/**
 * @note Address: 0x801083B0
 * @note Size: 0xB4
 */
void Obj::birth(Vector3f& position, f32 faceDir)
{
	EnemyBase::birth(position, faceDir);

	mFarmPow = 0;
	if (Farm::farmMgr) {
		Farm::farmMgr->addPlant(this);
	}

	if (gameSystem->isVersusMode()) {
		mFsm->start(this, PELPLANT_GrowMidFull, nullptr);
	} else {
		mFsm->start(this, PELPLANT_WaitSmall, nullptr);
	}

	mRootJointMtx = mModel->getJoint("bodyjnt2")->getWorldMatrix();
}

/**
 * @note Address: 0x80108464
 * @note Size: 0x280
 */
void Obj::setInitialSetting(EnemyInitialParamBase* initParms)
{
	PelplantInitialParam* plParms = static_cast<PelplantInitialParam*>(initParms);

	if (mFarmPow == 0) {
		setPelFlag(PELPLANTFLAG_Growing);
	} else {
		resetPelFlag(PELPLANTFLAG_Growing);
	}

	if (mFarmPow < 0) {
		plParms->mInitialState = PELPLANTSIZE_Small;
	}

	mColor = plParms->mColor;
	setPelletColor(mColor, false);

	mSize = plParms->mAmount;
	switch (plParms->mInitialState) {
	case PELPLANTSIZE_Small:
		mFsm->start(this, PELPLANT_WaitSmall, nullptr);
		break;
	case PELPLANTSIZE_Middle:
		mFsm->start(this, PELPLANT_WaitMiddle, nullptr);
		break;
	case PELPLANTSIZE_Full:
		mFsm->start(this, PELPLANT_WaitFull, nullptr);
		attachPellet();
		break;
	}

	if (plParms->mAmount == PELLET_NUMBER_FIVE) {
		sCurrentObj = this;

		SysShape::Joint* joint = mModel->getJoint("headjnt");
		P2ASSERTLINE(365, joint);
		joint->mJ3d->mFunction = Obj::headJointCallBack;

		sCurrentObj = nullptr;
	}

	if (plParms->mAmount == PELLET_NUMBER_TEN || plParms->mAmount == PELLET_NUMBER_TWENTY) {
		sCurrentObj = this;

		SysShape::Joint* joint = mModel->getJoint("headjnt");
		P2ASSERTLINE(376, joint);
		joint->mJ3d->mFunction = Obj::headJointCallBack;

		joint = mModel->getJoint("bodyjnt1");
		P2ASSERTLINE(381, joint);
		joint->mJ3d->mFunction = Obj::neckJointCallBack;

		sCurrentObj = nullptr;
	}

	CollPart* part = mCollTree->getCollPart('head');
	f32 scale      = getHeadScale();
	part->setScale(scale);
	part->mOffset *= scale;
}

/**
 * __ct__Q34Game8Pelplant3ObjFv
 * @note Address: 0x801086E4
 * @note Size: 0x138
 */
Obj::Obj()
    : EnemyBase()
    , mFsm(nullptr)
    , mRootJointMtx(nullptr)
    , mPelFlags()
    , mPellet(nullptr)
    , mColorChangeTimer(0.0f)
    , mColor(PELCOLOR_RANDOM)
    , mSize(PELPLANTSIZE_Middle)
    , mFarmPow(0)
{
	mAnimator = new ProperAnimator();
	setFSM(new FSM());
	mPelFlags.clear();
}

/**
 * @note Address: 0x801088C4
 * @note Size: 0x34
 */
void Pelplant::Obj::doUpdate() { mFsm->exec(this); }

/**
 * @note Address: 0x801088F8
 * @note Size: 0x88
 */
void Pelplant::Obj::updateLODSphereRadius(int size)
{
	if (size == PELPLANTSIZE_Full) {
		switch (mSize) {
		case PELLET_NUMBER_ONE:
			mCurLodSphere.mRadius = sLODRadius[0];
			return;
		case PELLET_NUMBER_FIVE:
			mCurLodSphere.mRadius = sLODRadius[1];
			return;
		case PELLET_NUMBER_TEN:
			mCurLodSphere.mRadius = sLODRadius[2];
			return;
		case PELLET_NUMBER_TWENTY:
			mCurLodSphere.mRadius = sLODRadius[3];
			return;
		}
	} else {
		mCurLodSphere.mRadius = sLODRadius[0];
	}
}

/**
 * @note Address: 0x80108980
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x80108984
 * @note Size: 0x18C
 */
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
	if (C_PARMS->mFlags[0].typeView & 1) {
		gfx.initPerspPrintf(gfx.mCurrentViewport);

		PerspPrintfInfo info;
		Vector3f pos(mPosition.x, 100.0f + mPosition.y, mPosition.z);

		info.mColorA = Color4(0xC8, 0xC8, 0xFF, 0xC8);
		info.mColorB = Color4(0x64, 0x64, 0xFF, 0xC8);
		gfx.perspPrintf(info, pos, "FARM_POW(%d) Grow%s", mFarmPow, isPelFlag(PELPLANTFLAG_Growing) ? "on" : "off");

		pos.y += 16.0f;
		info.mColorA = Color4(0xFF, 0xC8, 0xFF, 0xC8);
		info.mColorB = Color4(0xC8, 0x64, 0xFF, 0xC8);
		gfx.perspPrintf(info, pos, "%s %4.2f", mFsm->getCurrName(this), mGrowTimer);
	}
}

/**
 * @note Address: 0x80108B10
 * @note Size: 0xC0
 */
void Obj::getShadowParam(ShadowParam& param)
{
	param.mPosition = mPosition;
	param.mPosition.y += 2.0f;

	if (mFloorTriangle) {
		Plane* plane                      = &mFloorTriangle->mTrianglePlane;
		param.mBoundingSphere.mPosition.x = plane->mNormal.x;
		param.mBoundingSphere.mPosition.y = plane->mNormal.y;
		param.mBoundingSphere.mPosition.z = plane->mNormal.z;
	} else {
		param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	}
	param.mBoundingSphere.mRadius = 50.0f;

	Vector3f newVec;
	mRootJointMtx->getRow(0, newVec);
	f32 sum = newVec.x;
	newVec.y *= newVec.y;
	newVec.z *= newVec.z;
	sum *= newVec.x;
	sum += newVec.y;
	sum += newVec.z;
	__sqrtf(sum, &sum);

	param.mSize = 8.0f * sum;
}

/**
 * @note Address: 0x80108BD0
 * @note Size: 0x90
 */
void Obj::doAnimationUpdateAnimator()
{
	BlendAccelerationFunc func;
	static_cast<EnemyBlendAnimatorBase*>(mAnimator)->animate(&func, EnemyAnimatorBase::defaultAnimSpeed * sys->mDeltaTime,
	                                                         EnemyAnimatorBase::defaultAnimSpeed * sys->mDeltaTime,
	                                                         EnemyAnimatorBase::defaultAnimSpeed * sys->mDeltaTime);
	static_cast<EnemyBlendAnimatorBase*>(mAnimator)->mAnimator.setModelCalc(mModel, 0);
}

/**
 * @note Address: 0x80108C60
 * @note Size: 0x58
 */
f32 Obj::getHeadScale()
{
	f32 headScale;
	if (mPellet) {
		switch (mSize) {
		case PELLET_NUMBER_ONE:
			headScale = 1.0f;
			break;
		case PELLET_NUMBER_FIVE:
			headScale = 2.0f;
			break;
		case PELLET_NUMBER_TEN:
			headScale = 3.5f;
			break;
		case PELLET_NUMBER_TWENTY:
			headScale = 4.8f;
			break;
		}
	} else {
		headScale = 1.0f;
	}
	return headScale;
}

/**
 * @note Address: N/A
 * @note Size: 0x9C
 */
void Obj::getNeckScale(Vector3f* scale) { *scale = Vector3f(1.5f, 0.85f, 0.75f); }

/**
 * doAnimation__Q34Game8Pelplant3ObjFv
 * @note Address: 0x80108CB8
 * @note Size: 0x198
 */
void Obj::doAnimation()
{
	sys->mTimers->_start("zama", true);

	f32 headScale = getHeadScale();

	Obj::sCurrentObj = this;
	EnemyBase::doAnimation();
	Obj::sCurrentObj = nullptr;

	if (mPellet) {
		f32 neckScale;
		switch (mSize) {
		case PELLET_NUMBER_ONE:
			neckScale = 12.0f;
			break;
		case PELLET_NUMBER_FIVE:
			neckScale = 12.0f;
			break;
		case PELLET_NUMBER_TEN:
			neckScale = 12.0f;
			break;
		case PELLET_NUMBER_TWENTY:
			neckScale = 12.0f;
			break;
		default:
			JUT_PANICLINE(663, "Unknown Pellet size. %d \n", mSize);
			break;
		}

		Vector3f translation = Vector3f(neckScale, 0.0f, 0.0f);
		Vector3f rotation(0.0f, HALF_PI, -HALF_PI);
		Vector3f scale(1.0f / headScale);

		Matrixf mat;
		mat.makeSRT(scale, rotation, translation);
		mPellet->updateCapture(mat);
	}

	sys->mTimers->_stop("zama");
}

/**
 * @note Address: 0x80108E50
 * @note Size: 0x4
 */
void Obj::doSimulation(f32) { }

/**
 * @note Address: 0x80108E54
 * @note Size: 0xF0
 */
void Obj::setPelletColor(u16 color, bool check)
{
	if (mPellet) {
		switch (color) {
		case PELCOLOR_BLUE:
		case PELCOLOR_RED:
		case PELCOLOR_YELLOW:
			if (check) {
				if (playData->hasMetPikmin(color)) {
					mPellet->setValidColor(color);
					return;
				}

				mPellet->mPelletColor = PELCOLOR_RED;
				return;
			}

			mPellet->setValidColor(color);
			break;
		default:
			mPellet->mPelletColor = PELCOLOR_RED;
			break;
		}
	}
}

/**
 * @note Address: 0x80108F44
 * @note Size: 0x190
 */
void Obj::changePelletColor()
{
	if (mPellet && mColor == PELCOLOR_RANDOM) {
		if (mColorChangeTimer > C_PARMS->mPelplantParms.mColorChangeTime.mValue) {
			u16 initialColor;
			if (mPellet) {
				initialColor = mPellet->mPelletColor;
			} else {
				initialColor = PELCOLOR_BLUE;
			}

			u16 nextColor = initialColor + 1;
			u16 colorCap  = nextColor;
			while (!playData->hasMetPikmin(nextColor)) {
				if (++nextColor > PELCOLOR_YELLOW) {
					nextColor = PELCOLOR_BLUE;
				}

				if (nextColor == colorCap) {
					nextColor = PELCOLOR_RED;
				}
			}

			if (nextColor > PELCOLOR_YELLOW) {
				nextColor = PELCOLOR_BLUE;
			}

			setPelletColor(nextColor, true);

			if (isPelFlag(PELPLANTFLAG_Growing)) {
				mColorChangeTimer = 0.0f;
				return;
			}

			mColorChangeTimer = 0.0f;
			return;
		}

		const f32 dt = sys->mDeltaTime;
		if (isPelFlag(PELPLANTFLAG_Growing)) {
			mColorChangeTimer += dt;
		}
	}
}

/**
 * @note Address: 0x801090D4
 * @note Size: 0x110
 */
void Obj::attachPellet()
{
	if (!mPellet) {
		Obj::sCurrentObj = this;

		PelletNumberInitArg numberArg(mSize, PELCOLOR_BLUE);
		Pellet* newPellet = pelletMgr->birth(&numberArg);
		if (newPellet) {
			Matrixf* mat = mModel->getJoint("headjnt")->getWorldMatrix();
			P2ASSERTLINE(777, mat);
			newPellet->startCapture(mat);

			mPellet = (PelletNumber::Object*)newPellet;

			setPelletColor(mColor, false);
		}

		Obj::sCurrentObj = nullptr;
	}
}

/**
 * @note Address: 0x801091E4
 * @note Size: 0x98
 */
bool Obj::damageCallBack(Creature* source, f32 damage, CollPart* part)
{
	if (isLivingThing()) {
		addDamage(damage, 1.0f);
		if (part && part->mSpecialID.getStrID()[3] == '0') {
			addDamage(mMaxHealth, 1.0f);
		}
	}

	return true;
}

/**
 * @note Address: 0x80109288
 * @note Size: 0x78
 */
bool Obj::farmCallBack(Creature* c, f32 power)
{
	mFarmPow = ROUND_F32_TO_U8(power);

	if (mFarmPow < 0) {
		resetPelFlag(PELPLANTFLAG_Growing);
	} else {
		setPelFlag(PELPLANTFLAG_Growing);
	}

	disableEvent(0, EB_Cullable);
	return true;
}

/**
 * @note Address: 0x80109300
 * @note Size: 0x60
 */
void Obj::onStickStart(Creature* other)
{
	EnemyBase::onStickStart(other);
	if (other->mStuckCollPart && other->mStuckCollPart->mSpecialID.getStrID()[3] == '0') {
		addDamage(mMaxHealth, 1.0f);
	}
}

/**
 * @note Address: 0x80109360
 * @note Size: 0xF0
 */
bool Obj::headJointCallBack(J3DJoint* joint, int p2)
{
	if (sCurrentObj && p2 == 1) {
		Mtx& mtx  = J3DMtxCalc::mMtxBuffer->mWorldMatrices[joint->getJntNo()];
		f32 scale = sCurrentObj->getHeadScale();
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				mtx[i][j] *= scale;
			}
		}
	}

	return false;
}

/**
 * @note Address: 0x80109450
 * @note Size: 0x104
 */
bool Obj::neckJointCallBack(J3DJoint* joint, int p2)
{
	if (sCurrentObj && p2 == 1) {
		Mtx& mtx = J3DMtxCalc::mMtxBuffer->mWorldMatrices[joint->getJntNo()];

		f32 neckLength;
		f32 neckThickness;
		if (sCurrentObj->mPellet) {
			switch (sCurrentObj->mSize) {
			case PELLET_NUMBER_ONE:
				neckThickness = 1.0f;
				neckLength    = neckThickness;
				break;
			case PELLET_NUMBER_FIVE:
				neckThickness = 1.0f;
				neckLength    = neckThickness;
				break;
			case PELLET_NUMBER_TEN:
				neckThickness = 1.5;
				neckLength    = 0.85;
				break;
			case PELLET_NUMBER_TWENTY:
				neckThickness = 2.0;
				neckLength    = 0.75;
				break;
			}

		} else {
			neckThickness = 1.0f;
			neckLength    = neckThickness;
		}

		Vector3f scale(neckThickness, neckLength, neckThickness);
		mtx[0][0] *= scale.x;
		mtx[0][1] *= scale.x;
		mtx[0][2] *= scale.x;

		mtx[1][0] *= scale.y;
		mtx[1][1] *= scale.y;
		mtx[1][2] *= scale.y;

		mtx[2][0] *= scale.z;
		mtx[2][1] *= scale.z;
		mtx[2][2] *= scale.z;
	}
	return false;
}

/**
 * __ct__Q34Game8Pelplant3MgrFiUc
 * @note Address: 0x80109554
 * @note Size: 0x50
 */
Mgr::Mgr(int objLimit, u8 modelType)
    : EnemyMgrBase(objLimit, modelType)
{
	mName = "ペレット草マネージャ"; // pellet plant manager
}

/**
 * @note Address: 0x8010963C
 * @note Size: 0x48
 */
void Mgr::doAlloc() { init(new Parms); }

/**
 * birth__Q34Game8Pelplant3MgrFRQ24Game13EnemyBirthArg
 * @note Address: 0x8010A460
 * @note Size: 0x20
 */
EnemyBase* Mgr::birth(EnemyBirthArg& arg) { return EnemyMgrBase::birth(arg); }

/**
 * @note Address: 0x8010A480
 * @note Size: 0xD0
 */
void Obj::onInit(CreatureInitArg* arg)
{
	EnemyBase::onInit(arg);
	mGrowTimer = 0.0f;
	setEmotionNone();

	if (mFarmPow == 0) {
		setPelFlag(PELPLANTFLAG_Growing);
	} else {
		resetPelFlag(PELPLANTFLAG_Growing);
	}

	int stateID = getStateID();
	if (stateID == PELPLANT_NULL) {
		stateID = PELPLANT_WaitSmall;
	}

	mFsm->start(this, stateID, nullptr);

	disableEvent(0, EB_DeathEffectEnabled);
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_PlatformCollEnabled);
	enableEvent(0, EB_BitterImmune);
	hardConstraintOn();
}

/**
 * @note Address: 0x8010A550
 * @note Size: 0x48
 */
void Obj::doGetLifeGaugeParam(LifeGaugeParam& param)
{
	mRootJointMtx->getTranslation(param.mPosition);
	param.mPosition.y += 60.0f;
	param.mCurrHealthRatio = mHealth / mMaxHealth;
	param.mRadius          = 10.0f;
}

} // namespace Pelplant
} // namespace Game
