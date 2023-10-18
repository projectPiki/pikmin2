#include "Dolphin/mtx.h"
#include "JSystem/JParticle/JPABlock.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "JSystem/JParticle/JPAResource.h"
#include "JSystem/JParticle/JPAShape.h"

/*
 * --INFO--
 * Address:	8008FC9C
 * Size:	000048
 */
JPAEmitterCallBack::~JPAEmitterCallBack() { }

/*
 * --INFO--
 * Address:	8008FCE4
 * Size:	00035C
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
	mRandom.setSeed(mManager->mWorkData->mRndm.next());
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
	initFlag(0x30);
	mDrawTimes     = 1;
	mTick          = 0;
	mWaitTime      = 0;
	mRateStepTimer = 0;
	// mTexAnmIdx     = 0;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_80516BA0@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r3
	lis      r3, __float_epsilon@ha
	stw      r4, 0xe4(r30)
	stw      r31, 0xe8(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f3, 0x18(r4)
	lfs      f2, 0x14(r4)
	lfs      f0, 0x10(r4)
	stfs     f0, 0(r30)
	stfs     f2, 4(r30)
	stfs     f3, 8(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f3, 0x24(r4)
	lfs      f2, 0x20(r4)
	lfs      f0, 0x1c(r4)
	stfs     f0, 0xc(r30)
	stfs     f2, 0x10(r30)
	stfs     f3, 0x14(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f3, 0x30(r4)
	lfs      f2, 0x2c(r4)
	lfs      f0, 0x28(r4)
	stfs     f0, 0x18(r30)
	stfs     f2, 0x1c(r30)
	stfs     f3, 0x20(r30)
	lfs      f2, 0x18(r30)
	lfs      f4, 0x20(r30)
	lfs      f0, 0x1c(r30)
	fmuls    f3, f2, f2
	fmuls    f4, f4, f4
	fmuls    f2, f0, f0
	lfs      f0, __float_epsilon@l(r3)
	fmuls    f0, f1, f0
	fadds    f1, f3, f2
	fadds    f4, f4, f1
	fcmpo    cr0, f4, f0
	cror     2, 0, 2
	beq      lbl_8008FE08
	lfs      f0, lbl_80516BA4@sda21(r2)
	fcmpo    cr0, f4, f0
	cror     2, 0, 2
	bne      lbl_8008FDC4
	b        lbl_8008FDE4

lbl_8008FDC4:
	frsqrte  f3, f4
	lfs      f2, lbl_80516BA8@sda21(r2)
	lfs      f0, lbl_80516BAC@sda21(r2)
	frsp     f3, f3
	fmuls    f1, f3, f3
	fmuls    f2, f2, f3
	fnmsubs  f0, f4, f1, f0
	fmuls    f4, f2, f0

lbl_8008FDE4:
	lfs      f0, 0x18(r30)
	fmuls    f0, f0, f4
	stfs     f0, 0x18(r30)
	lfs      f0, 0x1c(r30)
	fmuls    f0, f0, f4
	stfs     f0, 0x1c(r30)
	lfs      f0, 0x20(r30)
	fmuls    f0, f0, f4
	stfs     f0, 0x20(r30)

lbl_8008FE08:
	lwz      r4, 0xe8(r30)
	lis      r3, 0x0019660D@ha
	addi     r0, r3, 0x0019660D@l
	addi     r3, r30, 0x68
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lha      r6, 0x6c(r4)
	lha      r5, 0x6a(r4)
	lha      r4, 0x68(r4)
	sth      r4, 0x4c(r30)
	sth      r5, 0x4e(r30)
	sth      r6, 0x50(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lha      r4, 0x6e(r4)
	stw      r4, 0x24(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lha      r4, 0x72(r4)
	sth      r4, 0x52(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lhz      r4, 0x74(r4)
	sth      r4, 0x54(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f0, 0x4c(r4)
	stfs     f0, 0x28(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lbz      r4, 0x78(r4)
	stb      r4, 0x56(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f0, 0x58(r4)
	stfs     f0, 0x2c(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f0, 0x5c(r4)
	stfs     f0, 0x30(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f0, 0x34(r4)
	stfs     f0, 0x34(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f0, 0x38(r4)
	stfs     f0, 0x38(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f0, 0x40(r4)
	stfs     f0, 0x3c(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f0, 0x44(r4)
	stfs     f0, 0x40(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f0, 0x3c(r4)
	stfs     f0, 0x44(r30)
	lwz      r4, 0xe8(r30)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lfs      f0, 0x60(r4)
	stfs     f0, 0x48(r30)
	lwz      r4, 0xe4(r30)
	lwz      r5, 0x20(r4)
	lwz      r4, 0xc(r5)
	mullw    r4, r4, r0
	addis    r4, r4, 0x3c6f
	addi     r0, r4, -3233
	stw      r0, 0xc(r5)
	stw      r0, 0xc4(r30)
	bl       PSMTXIdentity
	lfs      f1, lbl_80516BB0@sda21(r2)
	li       r5, 0xff
	lfs      f0, lbl_80516BA4@sda21(r2)
	li       r4, 0
	stfs     f1, 0x98(r30)
	li       r3, 0x30
	li       r0, 1
	stfs     f1, 0x9c(r30)
	stfs     f1, 0xa0(r30)
	stfs     f0, 0xac(r30)
	stfs     f0, 0xa8(r30)
	stfs     f0, 0xa4(r30)
	stfs     f1, 0xb0(r30)
	stfs     f1, 0xb4(r30)
	stb      r5, 0xbf(r30)
	stb      r5, 0xbe(r30)
	stb      r5, 0xbd(r30)
	stb      r5, 0xbc(r30)
	stb      r5, 0xbb(r30)
	stb      r5, 0xba(r30)
	stb      r5, 0xb9(r30)
	stb      r5, 0xb8(r30)
	lwz      r5, 0x1c(r31)
	lwz      r6, 0(r5)
	lbz      r5, 0x26(r6)
	stb      r5, 0x108(r30)
	lbz      r5, 0x27(r6)
	stb      r5, 0x109(r30)
	lbz      r5, 0x28(r6)
	stb      r5, 0x10a(r30)
	lbz      r5, 0x29(r6)
	stb      r5, 0x10b(r30)
	lwz      r5, 0x1c(r31)
	lwz      r6, 0(r5)
	lbz      r5, 0x2a(r6)
	stb      r5, 0x10c(r30)
	lbz      r5, 0x2b(r6)
	stb      r5, 0x10d(r30)
	lbz      r5, 0x2c(r6)
	stb      r5, 0x10e(r30)
	lbz      r5, 0x2d(r6)
	stb      r5, 0x10f(r30)
	stw      r4, 0xc0(r30)
	stfs     f1, 0xfc(r30)
	stfs     f0, 0xf8(r30)
	stw      r3, 0xf4(r30)
	stb      r0, 0x110(r30)
	stw      r4, 0x100(r30)
	sth      r4, 0x104(r30)
	sth      r4, 0x106(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80090040
 * Size:	00011C
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

/*
 * --INFO--
 * Address:	8009015C
 * Size:	0000FC
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

/*
 * --INFO--
 * Address:	80090258
 * Size:	000174
 */
void JPABaseEmitter::deleteAllParticle()
{
	while (mAlivePtclBase.getNum())
		mPtclPool->push_front(mAlivePtclBase.pop_back());
	while (mAlivePtclChld.getNum())
		mPtclPool->push_front(mAlivePtclChld.pop_back());
}

/*
 * --INFO--
 * Address:	800903CC
 * Size:	000040
 */
bool JPABaseEmitter::processTillStartFrame()
{
	if (mWaitTime >= mResource->mDynamicsBlock->mData->mStartFrame) {
		return true;
	}
	if ((mFlags & 2) == 0) {
		mWaitTime++;
	}
	return false;
}

/*
 * --INFO--
 * Address:	8009040C
 * Size:	00009C
 */
bool JPABaseEmitter::processTermination()
{
	if (isFlag(0x100)) {
		return true;
	}

	if (mMaxFrame == 0) {
		return false;
	}
	if (mMaxFrame < 0) {
		setFlag(8);
		return getParticleNumber() == 0;
	}
	if (mTick >= mMaxFrame) {
		setFlag(8);
		if (isFlag(0x40)) {
			return 0;
		}
		return getParticleNumber() == 0;
	}
	return false;
}

/*
 * --INFO--
 * Address:	800904A8
 * Size:	000080
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

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JPABaseEmitter::getEmitterAxisX(JGeometry::TVec3<float>*) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JPABaseEmitter::getEmitterAxisY(JGeometry::TVec3<float>*) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JPABaseEmitter::getEmitterAxisZ(JGeometry::TVec3<float>*) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80090528
 * Size:	000010
 */
int JPABaseEmitter::getCurrentCreateNumber() const { return mManager->mWorkData->mCreateNumber; }

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
int JPABaseEmitter::getDrawCount() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JPABaseEmitter::loadTexture(u8, _GXTexMapID)
{
	// UNUSED FUNCTION
}
