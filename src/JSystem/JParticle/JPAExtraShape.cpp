#include "JSystem/JMath.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "JSystem/JParticle/JPAShape.h"

/*
 * --INFO--
 * Address:	80091030
 * Size:	000070
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

/*
 * --INFO--
 * Address:	800910A0
 * Size:	000070
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

/*
 * --INFO--
 * Address:	80091110
 * Size:	00000C
 */
void JPACalcScaleCopy(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPAExtraShape* esp    = work->mResource->getEsp();
	ptcl->mParticleScaleY = ptcl->mParticleScaleX;
}

/*
 * --INFO--
 * Address:	8009111C
 * Size:	00000C
 */
void JPACalcScaleAnmNormal(JPAEmitterWorkData* work, JPABaseParticle* ptcl) { work->mScaleAnm = ptcl->mTime; }

/*
 * --INFO--
 * Address:	80091128
 * Size:	000064
 */
void JPACalcScaleAnmRepeatX(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPAExtraShape* esp = work->mResource->getEsp();
	work->mScaleAnm    = (ptcl->mAge % esp->getScaleAnmCycleX()) / (f32)esp->getScaleAnmCycleX();
}

/*
 * --INFO--
 * Address:	8009118C
 * Size:	000064
 */
void JPACalcScaleAnmRepeatY(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPAExtraShape* esp = work->mResource->getEsp();
	work->mScaleAnm    = (ptcl->mAge % esp->getScaleAnmCycleY()) / (f32)esp->getScaleAnmCycleY();
}

/*
 * --INFO--
 * Address:	800911F0
 * Size:	00008C
 */
void JPACalcScaleAnmReverseX(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPAExtraShape* esp = work->mResource->getEsp();
	s32 cycle          = ptcl->mAge / esp->getScaleAnmCycleX();
	f32 base           = (ptcl->mAge % esp->getScaleAnmCycleX()) / (f32)esp->getScaleAnmCycleX();
	work->mScaleAnm    = base + ((cycle & 1) * (1.0f - base * 2.0f));
}

/*
 * --INFO--
 * Address:	8009127C
 * Size:	00008C
 */
void JPACalcScaleAnmReverseY(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPAExtraShape* esp = work->mResource->getEsp();
	s32 cycle          = ptcl->mAge / esp->getScaleAnmCycleY();
	f32 base           = (ptcl->mAge % esp->getScaleAnmCycleY()) / (f32)esp->getScaleAnmCycleY();
	work->mScaleAnm    = base + ((cycle & 1) * (1.0f - base * 2.0f));
}

/*
 * --INFO--
 * Address:	80091308
 * Size:	000080
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

/*
 * --INFO--
 * Address:	80091388
 * Size:	0000E4
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

/*
 * --INFO--
 * Address:	8009146C
 * Size:	000034
 * __ct
 */
JPAExtraShape::JPAExtraShape(const u8* data)
{
	mData = (const JPAExtraShapeData*)data;
	init();
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001FC
 */
void JPAExtraShape::init_jpa(const u8*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800914A0
 * Size:	000100
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
