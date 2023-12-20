#include "JSystem/JMath.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "JSystem/JParticle/JPAShape.h"

/**
 * @note Address: 0x80091030
 * @note Size: 0x70
 */
void JPACalcScaleX(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPAExtraShape* esp = work->mResource->mExtraShape;
	if (work->mScaleAnm < esp->getScaleInTiming()) {
		ptcl->mParticleScaleX = ptcl->mScaleOut * (esp->getScaleIncRateX() * work->mScaleAnm + esp->getScaleInValueX());
	} else if (work->mScaleAnm > esp->getScaleOutTiming()) {
		ptcl->mParticleScaleX = ptcl->mScaleOut * (esp->getScaleDecRateX() * (work->mScaleAnm - esp->getScaleOutTiming()) + 1.0f);
	} else {
		ptcl->mParticleScaleX = ptcl->mScaleOut;
	}
}

/**
 * @note Address: 0x800910A0
 * @note Size: 0x70
 */
void JPACalcScaleY(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPAExtraShape* esp = work->mResource->mExtraShape;
	if (work->mScaleAnm < esp->getScaleInTiming()) {
		ptcl->mParticleScaleY = ptcl->mScaleOut * (esp->getScaleIncRateY() * work->mScaleAnm + esp->getScaleInValueY());
	} else if (work->mScaleAnm > esp->getScaleOutTiming()) {
		ptcl->mParticleScaleY = ptcl->mScaleOut * (esp->getScaleDecRateY() * (work->mScaleAnm - esp->getScaleOutTiming()) + 1.0f);
	} else {
		ptcl->mParticleScaleY = ptcl->mScaleOut;
	}
}

/**
 * @note Address: 0x80091110
 * @note Size: 0xC
 */
void JPACalcScaleCopy(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPAExtraShape* esp    = work->mResource->getEsp();
	ptcl->mParticleScaleY = ptcl->mParticleScaleX;
}

/**
 * @note Address: 0x8009111C
 * @note Size: 0xC
 */
void JPACalcScaleAnmNormal(JPAEmitterWorkData* work, JPABaseParticle* ptcl) { work->mScaleAnm = ptcl->mTime; }

/**
 * @note Address: 0x80091128
 * @note Size: 0x64
 */
void JPACalcScaleAnmRepeatX(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPAExtraShape* esp = work->mResource->getEsp();
	work->mScaleAnm    = (ptcl->mAge % esp->getScaleAnmCycleX()) / (f32)esp->getScaleAnmCycleX();
}

/**
 * @note Address: 0x8009118C
 * @note Size: 0x64
 */
void JPACalcScaleAnmRepeatY(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPAExtraShape* esp = work->mResource->getEsp();
	work->mScaleAnm    = (ptcl->mAge % esp->getScaleAnmCycleY()) / (f32)esp->getScaleAnmCycleY();
}

/**
 * @note Address: 0x800911F0
 * @note Size: 0x8C
 */
void JPACalcScaleAnmReverseX(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPAExtraShape* esp = work->mResource->getEsp();
	s32 cycle          = ptcl->mAge / esp->getScaleAnmCycleX();
	f32 base           = (ptcl->mAge % esp->getScaleAnmCycleX()) / (f32)esp->getScaleAnmCycleX();
	work->mScaleAnm    = base + ((cycle & 1) * (1.0f - base * 2.0f));
}

/**
 * @note Address: 0x8009127C
 * @note Size: 0x8C
 */
void JPACalcScaleAnmReverseY(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPAExtraShape* esp = work->mResource->getEsp();
	s32 cycle          = ptcl->mAge / esp->getScaleAnmCycleY();
	f32 base           = (ptcl->mAge % esp->getScaleAnmCycleY()) / (f32)esp->getScaleAnmCycleY();
	work->mScaleAnm    = base + ((cycle & 1) * (1.0f - base * 2.0f));
}

/**
 * @note Address: 0x80091308
 * @note Size: 0x80
 */
void JPACalcAlphaAnm(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPAExtraShape* esp = work->mResource->mExtraShape;
	f32 alpha;
	if (ptcl->mTime < esp->getAlphaInTiming()) {
		alpha = 255.0f * (esp->getAlphaInValue() + esp->getAlphaIncRate() * ptcl->mTime);
	} else if (ptcl->mTime > esp->getAlphaOutTiming()) {
		alpha = 255.0f * ((ptcl->mTime - esp->getAlphaOutTiming()) * esp->getAlphaDecRate() + esp->getAlphaBaseValue());
	} else {
		alpha = 255.0f * esp->getAlphaBaseValue();
	}
	OSf32tou8(&alpha, &ptcl->mPrmColorAlphaAnm);
}

/**
 * @note Address: 0x80091388
 * @note Size: 0xE4
 */
void JPACalcAlphaFlickAnm(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPAExtraShape* esp = work->mResource->getEsp();
	f32 alpha;
	if (ptcl->mTime < esp->getAlphaInTiming()) {
		alpha = (esp->getAlphaInValue() + esp->getAlphaIncRate() * ptcl->mTime);
	} else if (ptcl->mTime > esp->getAlphaOutTiming()) {
		alpha = ((ptcl->mTime - esp->getAlphaOutTiming()) * esp->getAlphaDecRate() + esp->getAlphaBaseValue());
	} else {
		alpha = esp->getAlphaBaseValue();
	}
	s32 theta = ptcl->mAlphaWaveRandom * ptcl->mAge * 16384.0f * (1.0f - esp->getAlphaFreq());
	f32 wave  = JMASSin(theta);
	alpha *= (1.0f + esp->getAlphaAmp() * (wave - 1.0f) * 0.5f) * 255.0f;
	OSf32tou8(&alpha, &ptcl->mPrmColorAlphaAnm);
}

/**
 * @note Address: 0x8009146C
 * @note Size: 0x34
 * __ct
 */
JPAExtraShape::JPAExtraShape(const u8* data)
{
	mData = (const JPAExtraShapeData*)data;
	init();
}

/**
 * @note Address: N/A
 * @note Size: 0x1FC
 */
void JPAExtraShape::init_jpa(const u8*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800914A0
 * @note Size: 0x100
 * init__13JPAExtraShapeFv
 */
void JPAExtraShape::init()
{
	mAlphaIncRate = (getAlphaInTiming() != 0.0f) ? (getAlphaBaseValue() - getAlphaInValue()) / getAlphaInTiming() : 1.0f;
	mAlphaDecRate = (getAlphaOutTiming() != 1.0f) ? (getAlphaOutValue() - getAlphaBaseValue()) / (1.0f - getAlphaOutTiming()) : 1.0f;

	if (getScaleInTiming() != 0.0f) {
		mScaleIncRateX = (1.0f - getScaleInValueX()) / getScaleInTiming();
		mScaleIncRateY = (1.0f - getScaleInValueY()) / getScaleInTiming();
	} else {
		mScaleIncRateX = mScaleIncRateY = 1.0f;
	}

	if (getScaleOutTiming() != 1.0f) {
		mScaleDecRateX = (getScaleOutValueX() - 1.0f) / (1.0f - getScaleOutTiming());
		mScaleDecRateY = (getScaleOutValueY() - 1.0f) / (1.0f - getScaleOutTiming());
	} else {
		mScaleDecRateX = mScaleDecRateY = 1.0f;
	}
}
