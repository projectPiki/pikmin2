#include "Dolphin/mtx.h"
#include "JSystem/JParticle/JPABlock.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "JSystem/JParticle/JPAResource.h"
#include "JSystem/JParticle/JPAShape.h"

/**
 * @note Address: 0x8008FC9C
 * @note Size: 0x48
 */
JPAEmitterCallBack::~JPAEmitterCallBack() { }

/**
 * @note Address: 0x8008FCE4
 * @note Size: 0x35C
 */
void JPABaseEmitter::init(JPAEmitterManager* manager, JPAResource* resource)
{
	mManager  = manager;
	mResource = resource;
	mResource->getDyn()->getEmitterScl(&mLocalScl);
	mResource->getDyn()->getEmitterTrs(&mLocalTrs);
	mResource->getDyn()->getEmitterDir(&mLocalDir);
	mLocalDir.normalize();
	mResource->getDyn()->getEmitterRot(&mLocalRot);
	mMaxFrame            = mResource->getDyn()->getMaxFrame();
	mLifeTime            = mResource->getDyn()->getLifetime();
	mVolumeSize          = mResource->getDyn()->getVolumeSize();
	mRate                = mResource->getDyn()->getRate();
	mRateStep            = mResource->getDyn()->getRateStep();
	mVolumeSweep         = mResource->getDyn()->getVolumeSweep();
	mVolumeMinRad        = mResource->getDyn()->getVolumeMinRad();
	mAwayFromCenterSpeed = mResource->getDyn()->getInitVelOmni();
	mAwayFromAxisSpeed   = mResource->getDyn()->getInitVelAxis();
	mDirSpeed            = mResource->getDyn()->getInitVelDir();
	mSpread              = mResource->getDyn()->getInitVelDirSp();
	mRndmDirSpeed        = mResource->getDyn()->getInitVelRndm();
	mAirResist           = mResource->getDyn()->getAirRes();
	mRandom.setSeed(mManager->mWorkData->mRndm.getRandU32());
	PSMTXIdentity(mGlobalRot);
	mGlobalScl.set(1.0f, 1.0f, 1.0f);
	mGlobalTrs.zero();
	mGlobalPScl.set(1.0f, 1.0f);
	mGlobalEnvClr.a = 0xff;
	mGlobalEnvClr.b = 0xff;
	mGlobalEnvClr.g = 0xff;
	mGlobalEnvClr.r = 0xff;
	mGlobalPrmClr.a = 0xff;
	mGlobalPrmClr.b = 0xff;
	mGlobalPrmClr.g = 0xff;
	mGlobalPrmClr.r = 0xff;
	resource->getBsp()->getPrmClr(&mPrmClr);
	resource->getBsp()->getEnvClr(&mEnvClr);
	mpUserWork = nullptr;
	mScaleOut  = 1.0f;
	mEmitCount = 0.0f;
	initFlag(JPAEMIT_FirstEmit | JPAEMIT_RateStepEmit);
	mDrawTimes     = 1;
	mCurrentFrame  = 0;
	mWaitTime      = 0;
	mRateStepTimer = 0;
}

/**
 * @note Address: 0x80090040
 * @note Size: 0x11C
 */
JPABaseParticle* JPABaseEmitter::createParticle()
{

	if (mPtclPool->mNum != 0) {
		JPANode<JPABaseParticle>* node = mPtclPool->pop_front();
		mAlivePtclBase.push_front(node);
		mResource->getDyn()->calc(mManager->mWorkData);
		node->mData.init_p(mManager->mWorkData);
		return &node->mData;
	}

	return nullptr;
}

/**
 * @note Address: 0x8009015C
 * @note Size: 0xFC
 */
JPABaseParticle* JPABaseEmitter::createChild(JPABaseParticle* parent)
{
	if (mPtclPool->mNum != 0) {
		JPANode<JPABaseParticle>* node = mPtclPool->pop_front();
		mAlivePtclChld.push_front(node);
		node->mData.init_c(mManager->mWorkData, parent);
		return &node->mData;
	}

	return nullptr;
}

/**
 * @note Address: 0x80090258
 * @note Size: 0x174
 */
void JPABaseEmitter::deleteAllParticle()
{
	while (mAlivePtclBase.getNum())
		mPtclPool->push_front(mAlivePtclBase.pop_back());
	while (mAlivePtclChld.getNum())
		mPtclPool->push_front(mAlivePtclChld.pop_back());
}

/**
 * @note Address: 0x800903CC
 * @note Size: 0x40
 */
bool JPABaseEmitter::processTillStartFrame()
{
	if (mWaitTime >= mResource->getDyn()->getStartFrame()) {
		return true;
	}

	if (!isFlag(JPAEMIT_StopCalc)) {
		mWaitTime++;
	}

	return false;
}

/**
 * @note Address: 0x8009040C
 * @note Size: 0x9C
 */
bool JPABaseEmitter::processTermination()
{
	if (isFlag(JPAEMIT_ForceDelete)) {
		return true;
	}

	if (mMaxFrame == 0) {
		return false;
	}

	if (mMaxFrame < 0) {
		setFlag(JPAEMIT_EnableDeleteEmitter);
		return getParticleNumber() == 0;
	}

	if (mCurrentFrame >= mMaxFrame) {
		setFlag(JPAEMIT_EnableDeleteEmitter);
		if (isFlag(JPAEMIT_Immortal)) {
			return 0;
		}
		return getParticleNumber() == 0;
	}

	return false;
}

/**
 * @note Address: 0x800904A8
 * @note Size: 0x80
 */
void JPABaseEmitter::calcEmitterGlobalPosition(JGeometry::TVec3f* p1) const
{
	Mtx mtx;
	PSMTXScale(mtx, mGlobalScl.x, mGlobalScl.y, mGlobalScl.z);
	PSMTXConcat(mGlobalRot, mtx, mtx);
	mtx[0][3] = mGlobalTrs.x;
	mtx[1][3] = mGlobalTrs.y;
	mtx[2][3] = mGlobalTrs.z;
	PSMTXMultVec(mtx, (Vec*)&mLocalTrs, (Vec*)p1);
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void JPABaseEmitter::getEmitterAxisX(JGeometry::TVec3<f32>*) const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void JPABaseEmitter::getEmitterAxisY(JGeometry::TVec3<f32>*) const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void JPABaseEmitter::getEmitterAxisZ(JGeometry::TVec3<f32>*) const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80090528
 * @note Size: 0x10
 */
int JPABaseEmitter::getCurrentCreateNumber() const { return mManager->mWorkData->mCreateNumber; }

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
int JPABaseEmitter::getDrawCount() const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
void JPABaseEmitter::loadTexture(u8, _GXTexMapID)
{
	// UNUSED FUNCTION
}
