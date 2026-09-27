#include "Game/Piki.h"
#include "efx/TPk.h"
#include "efx/TDopingSmoke.h"
#include "efx/TOrima.h"
#include "efx/TCursor.h"
#include "efx/TFueact.h"
#include "efx/TNaviEffect.h"
#include "efx/TEnemyDead.h"
#include "efx/TGate.h"
#include "efx/TStoneAttack.h"
#include "efx/TBridge.h"
#include "game/Piki.h"
#include "trig.h"
#include "Game/MapMgr.h"
#include "JSystem/JParticle/JPAMath.h"
#include "float.h"

namespace efx {

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void TParticleCallBack_Yodare::init(JPABaseEmitter*, JPABaseParticle*)
{
	_00   = 0.0f;
	mName = "ArgType";
	_08   = 1.0f;
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x124
 */
void TParticleCallBack_Yodare::execute(JPABaseEmitter*, JPABaseParticle*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void TTestYodareGen::create(Arg*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803B66B0
 * @note Size: 0xF0
 */
bool TPkNageBlur::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgType", static_cast<ArgType*>(arg)->getName()) == 0;
	P2ASSERTLINE(319, nameCheck);
	ArgType* targ = static_cast<ArgType*>(arg);
	switch (targ->mType) {
	case Game::Blue:
		mEffectID = PID_PkNageBlur_Blue;
		break;
	case Game::Red:
		mEffectID = PID_PkNageBlur_Red;
		break;
	case Game::Yellow:
		mEffectID = PID_PkNageBlur_Yellow;
		break;
	case Game::Purple:
		mEffectID = PID_PkNageBlur_Purple;
		break;
	case Game::White:
		mEffectID = PID_PkNageBlur_White;
		break;
	}
	return TSync::create(arg);
}

static void fakeFuncEfxPikmin(TParticleCallBack_Yodare* callback)
{
	callback->_00 = 1.0f;
}

/**
 * @note Address: 0x803B67A0
 * @note Size: 0x1E0
 */
bool TDopingSmoke::create(Arg* arg)
{
	bool nameCheck = strcmp("ArgDopingSmoke", static_cast<ArgDopingSmoke*>(arg)->getName()) == 0;
	P2ASSERTLINE(349, nameCheck);
	ArgDopingSmoke* targ = static_cast<ArgDopingSmoke*>(arg);
	switch (targ->mDopeType) {
	case 0:
		mEffectIDs[0] = PID_DopingSmoke_3;
		break;
	case 1:
		mEffectIDs[0] = PID_DopingSmoke_1;
		break;
	default:
		mEffectIDs[0] = PID_DangoFly_2;
	}
	if (TSimple1::create(arg)) {
		Vector3f vec      = targ->mDopePos;
		Vector3f* tempPtr = &vec;
		vec.normalise();
		setEmitterVector(tempPtr);
		if (targ->mDopeType == 0) {
			JPABaseEmitter* emit = particleMgr->create(PID_DopingSmoke_2, arg->mPosition, 0);
			if (emit) {
				emit->mEmitterCallback = &mCallBack_StaticClipping;
				emit->mLocalDir.x      = vec.x;
				emit->mLocalDir.y      = vec.y;
				emit->mLocalDir.z      = vec.z;
			} else {
				return false;
			}
		}
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803B6980
 * @note Size: 0x60
 */
bool TOrimaLight::create(Arg* arg)
{
	switch (mNaviType) {
	case 0:
		mItems[0].mEffectID = PID_OrimaLight_Orima_1;
		mItems[1].mEffectID = PID_OrimaLight_Orima_2;
		break;
	case 1:
		mItems[0].mEffectID = PID_OrimaLight_Loozy_1;
		mItems[1].mEffectID = PID_OrimaLight_Loozy_2;
		break;
	}
	return TSyncGroup2::create(arg);
}

/**
 * @note Address: 0x803B69E0
 * @note Size: 0x60
 */
bool TOrimaLightAct::create(Arg* arg)
{
	switch (mNaviType) {
	case 0:
		mItems[0].mEffectID = PID_OrimaLightAct_Orima_1;
		mItems[1].mEffectID = PID_OrimaLightAct_Orima_2;
		break;
	case 1:
		mItems[0].mEffectID = PID_OrimaLightAct_Loozy_1;
		mItems[1].mEffectID = PID_OrimaLightAct_Loozy_2;
		break;
	}
	return TSyncGroup2::create(arg);
}

/**
 * @note Address: 0x803B6A40
 * @note Size: 0x78
 */
void TCursor::init(s32 whistleType, s32 cNum)
{
	if (cNum <= 0 || cNum > 16) {
		cNum = 16;
	}
	mContextNum = cNum;
	mAngleSpeed = kAngleSpeed;

	// Louie and President whistles are unused in vanilla as whistleType is always 0 for navis
	switch (whistleType) {
	case 0:
		mOneEmitter.mEffectID = PID_Cursor_Olimar;
		break;
	case 1:
		mOneEmitter.mEffectID = PID_Cursor_President;
		break;
	case 2:
		mOneEmitter.mEffectID = PID_Cursor_Louie;
		break;
	case 3:
		mOneEmitter.mEffectID = PID_WhistleFuebug;
		break;
	}
}

/**
 * @note Address: 0x803B6AB8
 * @note Size: 0x154
 */
bool TCursor::create(Arg* arg)
{
	mAngleTimer = 0.0f;

	bool nameCheck = strcmp("ArgCursor", static_cast<ArgCursor*>(arg)->getName()) == 0;
	P2ASSERTLINE(459, nameCheck);
	ArgCursor* targ = static_cast<ArgCursor*>(arg);

	mPosition = arg->mPosition;
	f32 scale = targ->mScale;
	for (int i = 0; i < mContextNum; i++) {
		Vector3f pos;
		calcPos_(&pos, scale, i);
		mContextArray[i].mPosition = pos;
	}

	for (int i = 0; i < mContextNum; i++) {
		mOneEmitter.add(&mContextArray[i]);
	}
	mOneEmitter.create(arg);
	return true;
}

/**
 * @note Address: 0x803B6C0C
 * @note Size: 0x100
 */
void TCursor::update(Arg* arg)
{
	P2ASSERTLINE(480, arg);
	ArgCursor* targ = static_cast<ArgCursor*>(arg);

	f32 scale = targ->mScale;
	mPosition = targ->mPosition;

	mAngleTimer -= mAngleSpeed;
	if (mAngleTimer < 0.0f) {
		mAngleTimer += TAU;
	}

	for (int i = 0; i < mContextNum; i++) {
		Vector3f pos;
		calcPos_(&pos, scale, i);
		mContextArray[i].mPosition = pos;
	}
}

/**
 * @note Address: 0x803B6D0C
 * @note Size: 0x148
 */
void TCursor::calcPos_(Vector3f* pos, f32 mag, s32 id)
{
	f32 angle = mAngleTimer + ((f32)id * 2.0f * PI) / (f32)mContextNum;
	pos->x    = mag * cosf(angle) + mPosition.x;
	pos->z    = mag * sinf(angle) + mPosition.z;
	if (Game::mapMgr) {
		pos->y = Game::mapMgr->getMinY(*pos);
	} else {
		pos->y = mPosition.y;
	}
}

/**
 * @note Address: 0x803B6E54
 * @note Size: 0xAC
 */
bool TFueactCircle::create(Arg* arg)
{
	if (mEmitter) {
		return false;
	} else {
		mEmitter = particleMgr->create(PID_FueActCircle, Vector3f::zero, 0);
		if (mEmitter) {
			mEmitter->mEmitterCallback  = this;
			mEmitter->mParticleCallback = this;
			mEmitter->setFlag(JPAEMIT_Immortal);
			return true;
		} else {
			return false;
		}
	}
}

/**
 * @note Address: 0x803B6F00
 * @note Size: 0x124
 */
void TFueactCircle::execute(JPABaseEmitter* emit)
{
	P2ASSERTLINE(530, mMtx);
	P2ASSERTLINE(531, mPos);

	// Vector3f probably doesnt belong in these functions
	// the JGeometry Util stuff seems to be what was used

	JGeometry::TVec3f sep2;
	sep2.x = mPos->x - (*mMtx)(0, 3);
	sep2.y = mPos->y - (*mMtx)(1, 3);
	sep2.z = mPos->z - (*mMtx)(2, 3);
	sep2.normalize();

	emit->setAngle(&sep2);
}

/**
 * @note Address: 0x803B7024
 * @note Size: 0x2CC
 */
void TFueactCircle::execute(JPABaseEmitter*, JPABaseParticle* prt)
{
	P2ASSERTLINE(547, mMtx);
	P2ASSERTLINE(548, mPos);

	JGeometry::TVec3f mtxPos;
	JGeometry::TVec3f pos;
	pos.set(mPos->x, mPos->y, mPos->z);
	mtxPos.set((*mMtx)(0, 3), (*mMtx)(1, 3), (*mMtx)(2, 3));
	JGeometry::TVec3f sep2 = pos - mtxPos;
	f32 dist               = sep2.length();
	if (dist > 175.0f) {
		sep2.normalize();
		sep2.scale(175.0f);
		pos = mtxPos + sep2;
	}

	if (!prt->checkStatus(0x4)) {
		f32 time    = prt->mTime;
		f32 invTime = 1.0f - time;
		JGeometry::TVec3f newScaledVec;
		newScaledVec.scale(time, pos);
		JGeometry::TVec3f offset;
		offset.scaleAdd(invTime, mtxPos, newScaledVec);
		prt->setOffsetPosition(offset);
	}
}

/**
 * @note Address: 0x803B72F0
 * @note Size: 0x1D4
 */
void TFueactBiriBase::doExecuteEmitterOperation(JPABaseEmitter* emit)
{
	P2ASSERTLINE(579, mMtx);
	P2ASSERTLINE(580, mPos);

	Matrixf* ownerMtx;
	Vector3f* pos;
	pos      = mPos;
	ownerMtx = mMtx;

	Vector3f angle(pos->x - (*ownerMtx)(0, 3), pos->y - (*ownerMtx)(1, 3), pos->z - (*ownerMtx)(2, 3));
	f32 scale = angle.magnitude();
	angle.normalise();

	Vector3f mtxPos((*ownerMtx)(0, 3), (*ownerMtx)(1, 3), (*ownerMtx)(2, 3));

	Matrixf mtx;
	Vector3f up(0.0f, 1.0f, 0.0f);
	Vector3f side;
	side = cross(up, angle);
	Vector3f up2;
	up2 = cross(angle, side);

	// making these setter inlines screws everything up
	mtx(0, 0) = side.x;
	mtx(0, 1) = up2.x;
	mtx(0, 2) = angle.x;
	mtx(0, 3) = mtxPos.x;

	mtx(1, 0) = side.y;
	mtx(1, 1) = up2.y;
	mtx(1, 2) = angle.y;
	mtx(1, 3) = mtxPos.y;

	mtx(2, 0) = side.z;
	mtx(2, 1) = up2.z;
	mtx(2, 2) = angle.z;
	mtx(2, 3) = mtxPos.z;

	JPASetRMtxTVecfromMtx(mtx.mMatrix.mtxView, emit->mGlobalRot, &emit->mGlobalTrs);
	if (scale > 175.0f) {
		scale = 175.0f;
	}
	emit->setScaleOnly(scale / 100.0f);
}

/**
 * @note Address: 0x803B74C4
 * @note Size: 0x10C
 */
void createSimpleDead(Vector3f& pos, s32 type)
{
	P2ASSERTLINE(618, pkEffectMgr);
	switch (type) {
	case Game::Bulbmin:
		TEnemyDead_ArgScale efx;
		ArgScale arg(pos, 0.5f);
		efx.create(&arg);
		break;
	default:
		pkEffectMgr->createS_Dead(pos, type);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
void createSimpleAttack(Vector3f&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
void createSimpleAttackDp(Vector3f&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
void createSimpleKanden(Vector3f&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803B75D0
 * @note Size: 0x5C
 */
void createSimpleChinka(Vector3f& pos)
{
	P2ASSERTLINE(656, pkEffectMgr);
	pkEffectMgr->createS_Chinka(pos);
}

/**
 * @note Address: 0x803B762C
 * @note Size: 0x5C
 */
void createSimpleGedoku(Vector3f& pos)
{
	P2ASSERTLINE(662, pkEffectMgr);
	pkEffectMgr->createS_Gedoku(pos);
}

/**
 * @note Address: 0x803B7688
 * @note Size: 0x98
 */
void createSimpleBlackDrop(Vector3f& pos)
{
	Arg arg(pos);
	TPkBlackDrop efx;
	efx.create(&arg);
}

/**
 * @note Address: 0x803B7720
 * @note Size: 0x8C
 */
void createSimpleGate1Attack(Vector3f& pos)
{
	Arg arg(pos);
	TGate1Attack efx;
	efx.create(&arg);
}

/**
 * @note Address: 0x803B77AC
 * @note Size: 0x8C
 */
void createSimplePkAp(Vector3f& pos)
{
	Arg arg(pos);
	TPkAp efx;
	efx.create(&arg);
}

/**
 * @note Address: 0x803B7838
 * @note Size: 0x5C
 */
void createSimpleWaterOff(Vector3f& pos)
{
	P2ASSERTLINE(689, pkEffectMgr);
	pkEffectMgr->createS_WaterOff(pos);
}

/**
 * @note Address: 0x803B7894
 * @note Size: 0x5C
 */
void createSimpleDive(Vector3f& pos)
{
	P2ASSERTLINE(695, pkEffectMgr);
	pkEffectMgr->createS_Dive(pos);
}

/**
 * @note Address: 0x803B78F0
 * @note Size: 0x98
 */
void createSimpleChiru(Vector3f& pos, s32 type)
{
	P2ASSERTLINE(701, pkEffectMgr);
	switch (type) {
	case Game::Blue:
	case Game::Red:
	case Game::Yellow:
		pkEffectMgr->createS_Chiru(pos);
		break;
	case Game::Purple:
	case Game::White:
		pkEffectMgr->createS_ChiruRed(pos);
		break;
	}
}

/**
 * @note Address: 0x803B7988
 * @note Size: 0x5C
 */
void createSimpleInattack(Vector3f& pos)
{
	P2ASSERTLINE(717, pkEffectMgr);
	pkEffectMgr->createS_Inattack(pos);
}

/**
 * @note Address: 0x803B79E4
 * @note Size: 0x80
 */
void createSimpleInstick(Vector3f& pos)
{
	Arg arg(pos);
	TPkInstick efx;
	efx.create(&arg);
}

/**
 * @note Address: 0x803B7A64
 * @note Size: 0x8C
 */
void createSimpleGate2Attack(Vector3f& pos)
{
	Arg arg(pos);
	TGate2Attack efx;
	efx.create(&arg);
}

/**
 * @note Address: 0x803B7AF0
 * @note Size: 0x80
 */
void createSimpleBridgeAttack(Vector3f& pos)
{
	Arg arg(pos);
	TBridgeAttack efx;
	efx.create(&arg);
}

/**
 * @note Address: 0x803B7B70
 * @note Size: 0x5C
 */
void createSimpleWalksmoke(Vector3f& pos)
{
	P2ASSERTLINE(744, pkEffectMgr);
	pkEffectMgr->createS_Walksmoke(pos);
}

/**
 * @note Address: 0x803B7BCC
 * @note Size: 0x8C
 */
void createSimpleGlow2(Vector3f& pos)
{
	TPkGlow2 efx;
	Arg arg(pos);
	efx.create(&arg);
}

/**
 * @note Address: 0x803B7C58
 * @note Size: 0x80
 */
void createSimpleStoneAttack(Vector3f& pos)
{
	TStoneAttack efx;
	Arg arg(pos);
	efx.create(&arg);
}

/**
 * @note Address: 0x803B7CD8
 * @note Size: 0x5C
 */
void createSimpleDig(Vector3f& pos)
{
	P2ASSERTLINE(764, pkEffectMgr);
	pkEffectMgr->createS_Dig(pos);
}

/**
 * @note Address: 0x803B7D34
 * @note Size: 0x5C
 */
void createSimpleGate3Attack(Vector3f& pos)
{
	P2ASSERTLINE(770, pkEffectMgr);
	pkEffectMgr->createS_Gate3Attack(pos);
}

/**
 * @note Address: 0x803B7D90
 * @note Size: 0x5C
 */
void createSimpleWalkwater(Vector3f& pos)
{
	P2ASSERTLINE(776, pkEffectMgr);
	pkEffectMgr->createS_Walkwater(pos);
}

/**
 * @note Address: 0x803B7DEC
 * @note Size: 0x38
 */
void TNaviEffect::init(Vector3f* pos, Mtx mtx, Vector3f* naviPos, enumNaviType naviType)
{
	mPos       = pos;
	mBeaconMtx = (Matrixf*)mtx;
	mNaviPos   = naviPos;
	mHeight    = nullptr;
	setNaviType(naviType);
}

/**
 * @note Address: 0x803B7E24
 * @note Size: 0xD8
 * TODO: fix enums
 */
void TNaviEffect::setNaviType(enumNaviType type)
{
	switch (type) {
	case NAVITYPE_Olimar:
		mCursor.initNoCheck(0, WHISTLE_CONTEXT_NUM);
		mLight.mNaviType    = 0;
		mLightAct.mNaviType = 0;
		break;
	case NAVITYPE_Louie:
		mCursor.initNoCheck(0, WHISTLE_CONTEXT_NUM);
		mLight.mNaviType    = 1;
		mLightAct.mNaviType = 1;
		break;
	case NAVITYPE_President:
		mCursor.initNoCheck(1, WHISTLE_CONTEXT_NUM);
		mLight.mNaviType    = 0;
		mLightAct.mNaviType = 0;
		break;
	case NAVITYPE_Fuebug:
		mCursor.initNoCheck(2, WHISTLE_CONTEXT_NUM);
		mLight.mNaviType    = 1;
		mLightAct.mNaviType = 1;
		break;
	}
}

/**
 * @note Address: 0x803B7EFC
 * @note Size: 0x20
 */
void TNaviEffect::update()
{
	updateHamon_();
}

/**
 * @note Address: 0x803B7F1C
 * @note Size: 0xD8
 */
void TNaviEffect::updateHamon_()
{
	if (mHeight && mPos && isFlag(NAVIFX_InWater)) {
		mHamonPosition.x = mPos->x;
		mHamonPosition.y = *mHeight;
		mHamonPosition.z = mPos->z;
	} else {
		return;
	}

	f32 diff = *mHeight - mPos->y;
	if (diff < 12.0f) {
		createHamonA_(&mHamonPosition);
	} else {
		killHamonA_();
	}

	if (diff < 22.0f) {
		createHamonB_(&mHamonPosition);
	} else {
		killHamonB_();
	}
}

/**
 * @note Address: 0x803B7FF4
 * @note Size: 0x60
 */
void TNaviEffect::createHamonA_(Vector3f* pos)
{
	P2ASSERTLINE(863, pos);
	mHamonA.create(pos);
}

/**
 * @note Address: 0x803B8054
 * @note Size: 0x24
 */
void TNaviEffect::killHamonA_()
{
	mHamonA.kill();
}

/**
 * @note Address: 0x803B8078
 * @note Size: 0x60
 */
void TNaviEffect::createHamonB_(Vector3f* pos)
{
	P2ASSERTLINE(874, pos);
	mHamonB.create(pos);
}

/**
 * @note Address: 0x803B80D8
 * @note Size: 0x24
 */
void TNaviEffect::killHamonB_()
{
	mHamonB.kill();
}

/**
 * @note Address: 0x803B80FC
 * @note Size: 0x78
 */
void TNaviEffect::createLight_(Mtx mtx)
{
	P2ASSERTLINE(886, mtx);
	mLight.setMtxptr(mtx);
	mLight.create(nullptr);
}

/**
 * @note Address: 0x803B8174
 * @note Size: 0x2C
 */
void TNaviEffect::killLight_()
{
	mLight.fade();
}

/**
 * @note Address: 0x803B81A0
 * @note Size: 0x78
 */
void TNaviEffect::createLightAct_(Mtx mtx)
{
	P2ASSERTLINE(899, mtx);
	mLightAct.setMtxptr(mtx);
	mLightAct.create(nullptr);
}

/**
 * @note Address: 0x803B8218
 * @note Size: 0x2C
 */
void TNaviEffect::killLightAct_()
{
	mLightAct.fade();
}

/**
 * @note Address: 0x803B8244
 * @note Size: 0x64
 */
void TNaviEffect::createCursor_(Vector3f pos, f32 scale)
{
	ArgCursor arg(pos, scale);
	mCursor.create(&arg);
}

/**
 * @note Address: 0x803B82A8
 * @note Size: 0x2C
 */
void TNaviEffect::killCursor_()
{
	mCursor.fade();
}

/**
 * @note Address: 0x803B82D4
 * @note Size: 0x284
 */
void TNaviEffect::updateCursor_(Vector3f pos, f32 scale)
{
	ArgCursor arg(pos, scale);
	mCursor.update(&arg);
}

/**
 * @note Address: 0x803B8558
 * @note Size: 0xB4
 */
void TNaviEffect::createFueact_(Mtx mtx, Vector3f* pos)
{
	P2ASSERTLINE(930, mtx);
	P2ASSERTLINE(931, pos);

	mFueact.mCircle.mMtx = (Matrixf*)mtx;
	mFueact.mCircle.mPos = pos;
	mFueact.mBiri1.mMtx  = (Matrixf*)mtx;
	mFueact.mBiri1.mPos  = pos;
	mFueact.mBiri2.mMtx  = (Matrixf*)mtx;
	mFueact.mBiri2.mPos  = pos;
	mFueact.create(nullptr);
}

/**
 * @note Address: 0x803B860C
 * @note Size: 0x2C
 */
void TNaviEffect::killFueact_()
{
	mFueact.fade();
}

/**
 * @note Address: 0x803B8638
 * @note Size: 0x78
 */
void TNaviEffect::createOrimadamage_(Mtx mtx)
{
	P2ASSERTLINE(945, mtx);
	mDamage.setMtxptr(mtx);
	mDamage.create(nullptr);
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void TNaviEffect::killOrimadamage_()
{
	mDamage.fade();
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803B86B0
 * @note Size: 0x3C
 */
void TPkEffect::init()
{
	mPikiColor       = -1;
	mStemPosition    = nullptr;
	mHamonPosPtr     = nullptr;
	mAltStemPosition = nullptr;
	mHappaJointMtx   = nullptr;
	mBaseObjMatrix   = nullptr;
	mHeight          = nullptr;
	mMoeSmokeTimer   = 0;
	mFlags.clear();
}

/**
 * @note Address: 0x803B86EC
 * @note Size: 0x34
 */
void TPkEffect::update()
{
	updateMoeSmoke_();
	updateHamon_();
}

/**
 * @note Address: 0x803B8720
 * @note Size: 0x38
 */
void TPkEffect::updateMoeSmoke_()
{
	if (!mMoeSmokeTimer) {
		killMoeSmoke_();
	} else {
		mMoeSmokeTimer--;
	}
}

/**
 * @note Address: 0x803B8758
 * @note Size: 0xD0
 */
void TPkEffect::updateHamon_()
{
	if (mHeight && mHamonPosPtr && isFlag(NAVIFX_Unk6)) {
		mHamonPosition = Vector3f(mHamonPosPtr->x, *mHeight, mHamonPosPtr->z);
	} else {
		return;
	}

	f32 diff = *mHeight - mHamonPosPtr->y;
	if (diff < 12.0f) {
		createHamonA_(&mHamonPosition);
	} else {
		killHamonA_();
	}

	if (diff < 22.0f) {
		createHamonB_(&mHamonPosition);
	} else {
		killHamonB_();
	}
}

/**
 * @note Address: 0x803B8828
 * @note Size: 0x64
 */
void TPkEffect::createKourin_(Vector3f* pos)
{
	P2ASSERTLINE(1019, pos);
	mOeKourin.create(pos, mPikiColor);
}

/**
 * @note Address: 0x803B888C
 * @note Size: 0x24
 */
void TPkEffect::killKourin_()
{
	mOeKourin.kill();
}

/**
 * @note Address: 0x803B88B0
 * @note Size: 0x60
 */
void TPkEffect::createDoping_(Vector3f* pos)
{
	P2ASSERTLINE(1033, pos);
	mOeDoping.create(pos);
}

/**
 * @note Address: 0x803B8910
 * @note Size: 0x24
 */
void TPkEffect::killDoping_()
{
	mOeDoping.kill();
}

/**
 * @note Address: 0x803B8934
 * @note Size: 0xF8
 */
void TPkEffect::createNage_(Vector3f* pos, Mtx mtx)
{
	P2ASSERTLINE(1046, pos);
	mOeNagekira.create(pos);
	P2ASSERTLINE(1049, mtx);
	ArgType arg(mPikiColor);
	arg.mPosition  = Vector3f::zero;
	mNageBlur.mMtx = (Matrixf*)mtx;
	mNageBlur.create(&arg);
}

/**
 * @note Address: 0x803B8A2C
 * @note Size: 0x44
 */
void TPkEffect::killNage_()
{
	mOeNagekira.kill();
	mNageBlur.fade();
}

/**
 * @note Address: 0x803B8A70
 * @note Size: 0x7C
 */
void TPkEffect::createMoe_(Vector3f* pos)
{
	P2ASSERTLINE(1066, pos);
	mOeMoeBC.create(pos);
	mMoeA.mPosition = pos;
	mMoeA.create(nullptr);
}

/**
 * @note Address: 0x803B8AEC
 * @note Size: 0x44
 */
void TPkEffect::killMoe_()
{
	mOeMoeBC.kill();
	mMoeA.fade();
}

/**
 * @note Address: 0x803B8B30
 * @note Size: 0x60
 */
void TPkEffect::createChudoku_(Vector3f* pos)
{
	P2ASSERTLINE(1083, pos);
	mOeChudoku.create(pos);
}

/**
 * @note Address: 0x803B8B90
 * @note Size: 0x24
 */
void TPkEffect::killChudoku_()
{
	mOeChudoku.kill();
}

/**
 * @note Address: 0x803B8BB4
 * @note Size: 0x60
 */
void TPkEffect::createMoeSmoke_(Vector3f* pos)
{
	P2ASSERTLINE(1097, pos);
	mOeMoeSmoke.create(pos);
}

/**
 * @note Address: 0x803B8C14
 * @note Size: 0x24
 */
void TPkEffect::killMoeSmoke_()
{
	mOeMoeSmoke.kill();
}

/**
 * @note Address: 0x803B8C38
 * @note Size: 0x70
 */
void TPkEffect::createBlackDown_(Vector3f* pos)
{
	P2ASSERTLINE(1111, pos);
	mBlackDown.mPosition = pos;
	mBlackDown.create(nullptr);
}

/**
 * @note Address: 0x803B8CA8
 * @note Size: 0x2C
 */
void TPkEffect::killBlackDown_()
{
	mBlackDown.fade();
}

/**
 * @note Address: 0x803B8CD4
 * @note Size: 0x60
 */
void TPkEffect::createWater_(Vector3f* pos)
{
	P2ASSERTLINE(1125, pos);
	mOeWater.create(pos);
}

/**
 * @note Address: 0x803B8D34
 * @note Size: 0x24
 */
void TPkEffect::killWater_()
{
	mOeWater.kill();
}

/**
 * @note Address: 0x803B8D58
 * @note Size: 0x60
 */
void TPkEffect::createHamonA_(Vector3f* pos)
{
	P2ASSERTLINE(1137, pos);
	mOeHamonA.create(pos);
}

/**
 * @note Address: 0x803B8DB8
 * @note Size: 0x24
 */
void TPkEffect::killHamonA_()
{
	mOeHamonA.kill();
}

/**
 * @note Address: 0x803B8DDC
 * @note Size: 0x60
 */
void TPkEffect::createHamonB_(Vector3f* pos)
{
	P2ASSERTLINE(1148, pos);
	mOeHamonB.create(pos);
}

/**
 * @note Address: 0x803B8E3C
 * @note Size: 0x24
 */
void TPkEffect::killHamonB_()
{
	mOeHamonB.kill();
}

/**
 * @note Address: 0x803B8E60
 * @note Size: 0x20
 */
void TPkEffectTane::init()
{
	mPikiColor   = -1;
	mEfxPos      = nullptr;
	mHappaJntMtx = nullptr;
	mObjPos      = nullptr;
	mObjMatrix   = nullptr;
}

/**
 * @note Address: 0x803B8E80
 * @note Size: 0x60
 */
void TPkEffectTane::createTanekira_(Vector3f* pos)
{
	P2ASSERTLINE(1174, pos);
	mOeKira.create(pos);
}

/**
 * @note Address: 0x803B8EE0
 * @note Size: 0x24
 */
void TPkEffectTane::killTanekira_()
{
	mOeKira.kill();
}

/**
 * @note Address: 0x803B8F04
 * @note Size: 0x64
 */
void TPkEffectTane::createKourin_(Vector3f* pos)
{
	P2ASSERTLINE(1189, pos);
	mOeKourin.create(pos, mPikiColor);
}

/**
 * @note Address: 0x803B8F68
 * @note Size: 0x24
 */
void TPkEffectTane::killKourin_()
{
	mOeKourin.kill();
}

/**
 * @note Address: 0x803B8F8C
 * @note Size: 0x70
 */
void TPkEffectTane::createGlow1_(Vector3f* pos)
{
	P2ASSERTLINE(1202, pos);
	mGlow.mPosition = pos;
	mGlow.create(nullptr);
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void TPkEffectTane::killGlow1_()
{
	mGlow.fade();
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803B8FFC
 * @note Size: 0x4
 */
void TFueactCircle::executeAfter(JPABaseEmitter*)
{
}

/**
 * @note Address: 0x803B9000
 * @note Size: 0x2C
 */
// void TCursor::forceKill() { mOneEmitter.forceKill(); }

/**
 * @note Address: N/A
 * @note Size: 0x104
 */
TTestYodareGen::~TTestYodareGen()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void TTestYodareGen::forceKill()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void TTestYodareGen::fade()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
TTestYodareHit::~TTestYodareHit()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
TParticleCallBack_Yodare::~TParticleCallBack_Yodare()
{
	// UNUSED FUNCTION
}

} // namespace efx
