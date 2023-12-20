#include "Dolphin/gx.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "JSystem/JParticle/JPAShape.h"

/**
 * @note Address: 0x8008EE44
 * @note Size: 0x128
 */
void JPARegistChildPrmEnv(JPAEmitterWorkData* work)
{
	JPAChildShape* csp   = work->mResource->getCsp();
	JPABaseEmitter* emtr = work->mEmitter;
	GXColor prm, env;
	csp->getPrmClr(&prm);
	csp->getEnvClr(&env);
	prm.r = COLOR_MULTI(prm.r, emtr->mGlobalPrmClr.r);
	prm.g = COLOR_MULTI(prm.g, emtr->mGlobalPrmClr.g);
	prm.b = COLOR_MULTI(prm.b, emtr->mGlobalPrmClr.b);
	prm.a = COLOR_MULTI(prm.a, emtr->mGlobalPrmClr.a);
	env.r = COLOR_MULTI(env.r, emtr->mGlobalEnvClr.r);
	env.g = COLOR_MULTI(env.g, emtr->mGlobalEnvClr.g);
	env.b = COLOR_MULTI(env.b, emtr->mGlobalEnvClr.b);
	GXSetTevColor(GX_TEVREG0, prm);
	GXSetTevColor(GX_TEVREG1, env);
}

/**
 * @note Address: 0x8008EF6C
 * @note Size: 0x2C
 */
void JPACalcChildAlphaOut(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	f32 anm = (1.0f - particle->mTime) * 255.0f;
	OSf32tou8(&anm, &particle->mPrmColorAlphaAnm);
}

/**
 * @note Address: 0x8008EF98
 * @note Size: 0x30
 */
void JPACalcChildScaleOut(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	particle->mParticleScaleX = particle->mScaleOut * (1.0f - particle->mTime);
	particle->mParticleScaleY = particle->mAlphaWaveRandom * (1.0f - particle->mTime);
}

/**
 * @note Address: 0x8008EFC8
 * @note Size: 0x8
 */
JPAChildShape::JPAChildShape(const u8* data) { mData = (JPAChildShapeData*)data; }

/**
 * @note Address: N/A
 * @note Size: 0x1C8
 */
void JPAChildShape::init_jpa(const u8*, JKRHeap*)
{
	// UNUSED FUNCTION
}
