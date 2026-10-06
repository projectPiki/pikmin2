#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "Dolphin/os.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "JSystem/JParticle/JPAShape.h"
#include "JSystem/JUtility/TColor.h"

// forward declared local functions
static void noLoadPrj(const JPAEmitterWorkData* workData, const Mtx mtx);
static void loadPrj(const JPAEmitterWorkData* workData, const Mtx p2);
static void loadPrjAnm(const JPAEmitterWorkData* workData, const Mtx p2);
static void dirTypeVel(const JPAEmitterWorkData*, const JPABaseParticle*, JGeometry::TVec3f*);
static void dirTypePos(const JPAEmitterWorkData*, const JPABaseParticle*, JGeometry::TVec3f*);
static void dirTypePosInv(const JPAEmitterWorkData*, const JPABaseParticle*, JGeometry::TVec3f*);
static void dirTypeEmtrDir(const JPAEmitterWorkData*, const JPABaseParticle*, JGeometry::TVec3f*);
static void dirTypePrevPtcl(const JPAEmitterWorkData*, const JPABaseParticle*, JGeometry::TVec3f*);
static void rotTypeX(f32, f32, Mtx&);
static void rotTypeY(f32, f32, Mtx&);
static void rotTypeZ(f32, f32, Mtx&);
static void rotTypeXYZ(f32, f32, Mtx&);
static void basePlaneTypeXY(Mtx, f32, f32);
static void basePlaneTypeXZ(Mtx, f32, f32);
static void basePlaneTypeX(Mtx, f32, f32);

static u8 jpa_dl[32] ATTRIBUTE_ALIGN(32) = {
	0x80, 0x00, 0x04, 0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static u8 jpa_dl_x[32] ATTRIBUTE_ALIGN(32) = {
	0x80, 0x00, 0x08, 0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 0x03, 0x03, 0x48, 0x00, 0x49, 0x01, 0x4A,
	0x02, 0x4B, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

typedef void (*projectionFunc)(JPAEmitterWorkData const*, const Mtx);
static projectionFunc p_prj[3] = {
	noLoadPrj,
	loadPrj,
	loadPrjAnm,
};

typedef void (*dirTypeFunc)(const JPAEmitterWorkData*, const JPABaseParticle*, JGeometry::TVec3f*);
static dirTypeFunc p_direction[5] = {
	dirTypeVel, dirTypePos, dirTypePosInv, dirTypeEmtrDir, dirTypePrevPtcl,
};

typedef void (*rotTypeFunc)(f32, f32, Mtx&);
static rotTypeFunc p_rot[5] = {
	rotTypeY, rotTypeX, rotTypeZ, rotTypeXYZ, rotTypeY,
};

typedef void (*planeFunc)(MtxP, f32, f32);
static planeFunc p_plane[3] = {
	basePlaneTypeXY,
	basePlaneTypeXZ,
	basePlaneTypeX,
};

static u8* p_dl[2] = {
	jpa_dl,
	jpa_dl_x,
};

GXBlendMode JPABaseShape::st_bm[3] = { GX_BM_NONE, GX_BM_BLEND, GX_BM_LOGIC };

GXBlendFactor JPABaseShape::st_bf[10] = { GX_BL_ZERO,      GX_BL_ONE,      GX_BL_SRCCOL,      GX_BL_INVSRCCOL, GX_BL_DSTCOL,
                                          GX_BL_INVDSTCOL, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_BL_DSTALPHA,  GX_BL_INVDSTALPHA };

GXLogicOp JPABaseShape::st_lo[16]
    = { GX_LO_CLEAR, GX_LO_SET, GX_LO_COPY, GX_LO_INVCOPY, GX_LO_NOOP,   GX_LO_INV,    GX_LO_AND,   GX_LO_NAND,
        GX_LO_OR,    GX_LO_NOR, GX_LO_XOR,  GX_LO_EQUIV,   GX_LO_REVAND, GX_LO_INVAND, GX_LO_REVOR, GX_LO_INVOR };

GXCompare JPABaseShape::st_c[8] = { GX_NEVER, GX_LESS, GX_LEQUAL, GX_EQUAL, GX_NEQUAL, GX_GEQUAL, GX_GREATER, GX_ALWAYS };

GXAlphaOp JPABaseShape::st_ao[4] = { GX_AOP_AND, GX_AOP_OR, GX_AOP_XOR, GX_AOP_XNOR };

GXTevColorArg JPABaseShape::st_ca[6][4] = {
	{ GX_CC_ZERO, GX_CC_TEXC, GX_CC_ONE, GX_CC_ZERO }, //
	{ GX_CC_ZERO, GX_CC_C0, GX_CC_TEXC, GX_CC_ZERO },  //
	{ GX_CC_C0, GX_CC_ONE, GX_CC_TEXC, GX_CC_ZERO },   //
	{ GX_CC_C1, GX_CC_C0, GX_CC_TEXC, GX_CC_ZERO },    //
	{ GX_CC_ZERO, GX_CC_TEXC, GX_CC_C0, GX_CC_C1 },    //
	{ GX_CC_ZERO, GX_CC_ZERO, GX_CC_ZERO, GX_CC_C0 },  //
};

GXTevAlphaArg JPABaseShape::st_aa[2][4] = {
	{ GX_CA_ZERO, GX_CA_TEXA, GX_CA_A0, GX_CA_ZERO }, //
	{ GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO, GX_CA_A0 }, //
};

/**
 * @note Address: 0x8008B114
 * @note Size: 0x3C
 */
void JPASetPointSize(JPAEmitterWorkData* workData)
{
	GXSetPointSize(workData->mGlobalPtclScl.x * 25.0f, GX_TO_ONE);
}

/**
 * @note Address: 0x8008B150
 * @note Size: 0x3C
 */
void JPASetLineWidth(JPAEmitterWorkData* workData)
{
	GXSetLineWidth(workData->mGlobalPtclScl.x * 25.0f, GX_TO_ONE);
}

/**
 * @note Address: 0x8008B18C
 * @note Size: 0x44
 */
void JPASetPointSize(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	f32 factor = 25.0f;
	GXSetPointSize(u8(factor * workData->mGlobalPtclScl.x * particle->mParticleScaleX), GX_TO_ONE);
}

/**
 * @note Address: 0x8008B1D0
 * @note Size: 0x44
 * JPASetLineWidth__FP18JPAEmitterWorkDataP15JPABaseParticle
 */
void JPASetLineWidth(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	f32 factor = 25.0f;
	GXSetLineWidth(u8(factor * workData->mGlobalPtclScl.x * particle->mParticleScaleX), GX_TO_ONE);
}

/**
 * @note Address: 0x8008B214
 * @note Size: 0x9C
 */
void JPARegistPrm(JPAEmitterWorkData* work)
{
	JPABaseEmitter* emtr = work->mEmitter;
	GXColor prm          = emtr->mPrmClr;
	prm.r                = COLOR_MULTI(prm.r, emtr->mGlobalPrmClr.r);
	prm.g                = COLOR_MULTI(prm.g, emtr->mGlobalPrmClr.g);
	prm.b                = COLOR_MULTI(prm.b, emtr->mGlobalPrmClr.b);
	prm.a                = COLOR_MULTI(prm.a, emtr->mGlobalPrmClr.a);
	GXSetTevColor(GX_TEVREG0, prm);
}

/**
 * @note Address: 0x8008B2B0
 * @note Size: 0x84
 */
void JPARegistEnv(JPAEmitterWorkData* work)
{
	JPABaseEmitter* emtr = work->mEmitter;
	GXColor env          = emtr->mEnvClr;
	env.r                = COLOR_MULTI(env.r, emtr->mGlobalEnvClr.r);
	env.g                = COLOR_MULTI(env.g, emtr->mGlobalEnvClr.g);
	env.b                = COLOR_MULTI(env.b, emtr->mGlobalEnvClr.b);
	GXSetTevColor(GX_TEVREG1, env);
}

/**
 * @note Address: 0x8008B334
 * @note Size: 0x118
 */
void JPARegistPrmEnv(JPAEmitterWorkData* work)
{
	JPABaseEmitter* emtr = work->mEmitter;
	GXColor prm          = emtr->mPrmClr;
	GXColor env          = emtr->mEnvClr;
	prm.r                = COLOR_MULTI(prm.r, emtr->mGlobalPrmClr.r);
	prm.g                = COLOR_MULTI(prm.g, emtr->mGlobalPrmClr.g);
	prm.b                = COLOR_MULTI(prm.b, emtr->mGlobalPrmClr.b);
	prm.a                = COLOR_MULTI(prm.a, emtr->mGlobalPrmClr.a);
	env.r                = COLOR_MULTI(env.r, emtr->mGlobalEnvClr.r);
	env.g                = COLOR_MULTI(env.g, emtr->mGlobalEnvClr.g);
	env.b                = COLOR_MULTI(env.b, emtr->mGlobalEnvClr.b);
	GXSetTevColor(GX_TEVREG0, prm);
	GXSetTevColor(GX_TEVREG1, env);
}

/**
 * @note Address: 0x8008B44C
 * @note Size: 0xB0
 */
void JPARegistAlpha(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPABaseEmitter* emtr = work->mEmitter;
	GXColor prm          = emtr->mPrmClr;
	prm.r                = COLOR_MULTI(prm.r, emtr->mGlobalPrmClr.r);
	prm.g                = COLOR_MULTI(prm.g, emtr->mGlobalPrmClr.g);
	prm.b                = COLOR_MULTI(prm.b, emtr->mGlobalPrmClr.b);
	prm.a                = COLOR_MULTI(prm.a, emtr->mGlobalPrmClr.a);
	prm.a                = COLOR_MULTI(prm.a, ptcl->mPrmColorAlphaAnm);
	GXSetTevColor(GX_TEVREG0, prm);
}

/**
 * @note Address: 0x8008B4FC
 * @note Size: 0xB0
 */
void JPARegistPrmAlpha(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPABaseEmitter* emtr = work->mEmitter;
	GXColor prm          = ptcl->mPrmClr;
	prm.r                = COLOR_MULTI(prm.r, emtr->mGlobalPrmClr.r);
	prm.g                = COLOR_MULTI(prm.g, emtr->mGlobalPrmClr.g);
	prm.b                = COLOR_MULTI(prm.b, emtr->mGlobalPrmClr.b);
	prm.a                = COLOR_MULTI(prm.a, emtr->mGlobalPrmClr.a);
	prm.a                = COLOR_MULTI(prm.a, ptcl->mPrmColorAlphaAnm);
	GXSetTevColor(GX_TEVREG0, prm);
}

/**
 * @note Address: 0x8008B5AC
 * @note Size: 0x134
 */
void JPARegistPrmAlphaEnv(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPABaseEmitter* emtr = work->mEmitter;
	GXColor prm          = ptcl->mPrmClr;
	GXColor env          = ptcl->mEnvClr;
	prm.r                = COLOR_MULTI(prm.r, emtr->mGlobalPrmClr.r);
	prm.g                = COLOR_MULTI(prm.g, emtr->mGlobalPrmClr.g);
	prm.b                = COLOR_MULTI(prm.b, emtr->mGlobalPrmClr.b);
	prm.a                = COLOR_MULTI(prm.a, emtr->mGlobalPrmClr.a);
	prm.a                = COLOR_MULTI(prm.a, ptcl->mPrmColorAlphaAnm);
	env.r                = COLOR_MULTI(env.r, emtr->mGlobalEnvClr.r);
	env.g                = COLOR_MULTI(env.g, emtr->mGlobalEnvClr.g);
	env.b                = COLOR_MULTI(env.b, emtr->mGlobalEnvClr.b);
	GXSetTevColor(GX_TEVREG0, prm);
	GXSetTevColor(GX_TEVREG1, env);
}

/**
 * @note Address: 0x8008B6E0
 * @note Size: 0x124
 */
void JPARegistAlphaEnv(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPABaseEmitter* emtr = work->mEmitter;
	GXColor prm          = emtr->mPrmClr;
	GXColor env          = ptcl->mEnvClr;
	prm.r                = COLOR_MULTI(prm.r, emtr->mGlobalPrmClr.r);
	prm.g                = COLOR_MULTI(prm.g, emtr->mGlobalPrmClr.g);
	prm.b                = COLOR_MULTI(prm.b, emtr->mGlobalPrmClr.b);
	prm.a                = COLOR_MULTI(prm.a, emtr->mGlobalPrmClr.a);
	prm.a                = COLOR_MULTI(prm.a, ptcl->mPrmColorAlphaAnm);
	env.r                = COLOR_MULTI(env.r, emtr->mGlobalEnvClr.r);
	env.g                = COLOR_MULTI(env.g, emtr->mGlobalEnvClr.g);
	env.b                = COLOR_MULTI(env.b, emtr->mGlobalEnvClr.b);
	GXSetTevColor(GX_TEVREG0, prm);
	GXSetTevColor(GX_TEVREG1, env);
}

/**
 * @note Address: 0x8008B804
 * @note Size: 0x84
 */
void JPARegistEnv(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPABaseEmitter* emtr = work->mEmitter;
	GXColor env          = ptcl->mEnvClr;
	env.r                = COLOR_MULTI(env.r, emtr->mGlobalEnvClr.r);
	env.g                = COLOR_MULTI(env.g, emtr->mGlobalEnvClr.g);
	env.b                = COLOR_MULTI(env.b, emtr->mGlobalEnvClr.b);
	GXSetTevColor(GX_TEVREG1, env);
}

/**
 * @note Address: 0x8008B888
 * @note Size: 0x2C
 */
void JPACalcClrIdxNormal(JPAEmitterWorkData* work)
{
	JPABaseShape* bsp = work->mResource->getBsp();
	s16 keyFrame;
	if (work->mEmitter->mCurrentFrame < bsp->mData->mClrAnmFrmMax) {
		keyFrame = work->mEmitter->mCurrentFrame;
	} else {
		keyFrame = bsp->mData->mClrAnmFrmMax;
	}
	work->mClrKeyFrame = keyFrame;
}

/**
 * @note Address: 0x8008B8B4
 * @note Size: 0x28
 */
void JPACalcClrIdxNormal(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPABaseShape* bsp = work->mResource->getBsp();
	s16 keyFrame;
	if (ptcl->mAge < bsp->mData->mClrAnmFrmMax) {
		keyFrame = ptcl->mAge;
	} else {
		keyFrame = bsp->mData->mClrAnmFrmMax;
	}
	work->mClrKeyFrame = keyFrame;
}

/**
 * @note Address: 0x8008B8DC
 * @note Size: 0x30
 */
void JPACalcClrIdxRepeat(JPAEmitterWorkData* work)
{
	JPABaseShape* shape = work->mResource->getBsp();
	work->mClrKeyFrame  = work->mEmitter->mCurrentFrame % (shape->getClrAnmMaxFrm() + 1);
}

/**
 * @note Address: 0x8008B90C
 * @note Size: 0x3C
 */
void JPACalcClrIdxRepeat(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPABaseShape* shape = work->mResource->getBsp();
	s32 tick            = shape->getClrLoopOfst(ptcl->mAnmRandom);
	tick                = ptcl->mAge + tick;
	work->mClrKeyFrame  = tick % (shape->getClrAnmMaxFrm() + 1);
}

/**
 * @note Address: 0x8008B948
 * @note Size: 0x40
 */
void JPACalcClrIdxReverse(JPAEmitterWorkData* work)
{
	JPABaseShape* shape         = work->mResource->getBsp();
	u32 colourAnimLength        = shape->getClrAnmMaxFrm();
	u32 tick                    = work->mEmitter->mCurrentFrame;
	u32 colourAnimationProgress = tick / colourAnimLength;
	tick                        = tick % colourAnimLength;

	// Progress is 0 or 1
	colourAnimationProgress &= 1;

	work->mClrKeyFrame = tick + (colourAnimationProgress) * (colourAnimLength - tick * 2);
}

/**
 * @note Address: 0x8008B988
 * @note Size: 0x4C
 */
void JPACalcClrIdxReverse(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPABaseShape* baseShape = work->mResource->getBsp();
	int particleAgeOffset   = ptcl->getAge() + baseShape->getClrLoopOfst(ptcl->mAnmRandom);
	int maxFrameCount       = baseShape->mData->mClrAnmFrmMax;
	int remainder           = particleAgeOffset % maxFrameCount;
	work->mClrKeyFrame      = remainder + ((particleAgeOffset / maxFrameCount) & 1) * (maxFrameCount - remainder * 2);
}

/**
 * @note Address: 0x8008B9D4
 * @note Size: 0xC
 */
void JPACalcClrIdxMerge(JPAEmitterWorkData* workData)
{
	workData->mClrKeyFrame = 0;
}

/**
 * @note Address: 0x8008B9E0
 * @note Size: 0x70
 */
void JPACalcClrIdxMerge(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPABaseShape* shape = work->mResource->getBsp();
	s32 maxFrm          = shape->getClrAnmMaxFrm() + 1;
	s32 tick            = (s32)(ptcl->mTime * maxFrm) + shape->getClrLoopOfst(ptcl->mAnmRandom);
	work->mClrKeyFrame  = tick % maxFrm;
}

/**
 * @note Address: 0x8008BA50
 * @note Size: 0xC
 */
void JPACalcClrIdxRandom(JPAEmitterWorkData* workData)
{
	workData->mClrKeyFrame = 0;
}

/**
 * @note Address: 0x8008BA5C
 * @note Size: 0x34
 */
void JPACalcClrIdxRandom(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPABaseShape* shape = work->mResource->getBsp();
	s32 tick            = shape->getClrLoopOfst(ptcl->mAnmRandom);
	s32 maxFrm          = shape->getClrAnmMaxFrm() + 1;
	work->mClrKeyFrame  = tick % maxFrm;
}

/**
 * @note Address: 0x8008BA90
 * @note Size: 0x40
 */
void JPACalcPrm(JPAEmitterWorkData* work)
{
	work->mResource->getBsp()->getPrmClr(work->mClrKeyFrame, &work->mEmitter->mPrmClr);
}

/**
 * @note Address: 0x8008BAD0
 * @note Size: 0x3C
 */
void JPACalcPrm(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	work->mResource->getBsp()->getPrmClr(work->mClrKeyFrame, &ptcl->mPrmClr);
}

/**
 * @note Address: 0x8008BB0C
 * @note Size: 0x40
 */
void JPACalcEnv(JPAEmitterWorkData* work)
{
	work->mResource->getBsp()->getEnvClr(work->mClrKeyFrame, &work->mEmitter->mEnvClr);
}

/**
 * @note Address: 0x8008BB4C
 * @note Size: 0x3C
 */
void JPACalcEnv(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	work->mResource->getBsp()->getEnvClr(work->mClrKeyFrame, &ptcl->mEnvClr);
}

/**
 * @note Address: 0x8008BB88
 * @note Size: 0x48
 */
void JPACalcColorCopy(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPABaseEmitter* emtr = work->mEmitter;
	ptcl->mPrmClr        = emtr->mPrmClr;
	ptcl->mEnvClr        = emtr->mEnvClr;
}

/**
 * @note Address: 0x8008BBD0
 * @note Size: 0x38
 */
void JPAGenTexCrdMtxIdt(JPAEmitterWorkData*)
{
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, GX_IDENTITY, GX_FALSE, GX_PTIDENTITY);
}

/**
 * @note Address: 0x8008BC08
 * @note Size: 0x38
 */
void JPAGenTexCrdMtxAnm(JPAEmitterWorkData*)
{
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, GX_TEXMTX0, GX_FALSE, GX_PTIDENTITY);
}

/**
 * @note Address: 0x8008BC40
 * @note Size: 0x38
 */
void JPAGenTexCrdMtxPrj(JPAEmitterWorkData*)
{
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX2X4, GX_TG_POS, GX_TEXMTX0, GX_FALSE, GX_PTIDENTITY);
}

/**
 * @note Address: 0x8008BC78
 * @note Size: 0x198
 */
void JPAGenCalcTexCrdMtxAnm(JPAEmitterWorkData* workData)
{
	// Get the base shape from the resource
	JPABaseShape* baseShape = workData->mResource->getBsp();

	// Get the current tick count from the emitter
	f32 tickCount = workData->mEmitter->mCurrentFrame;

	// Calculate half of the tiling for S and T
	f32 halfTilingS = 0.5f * (1.0f + baseShape->getTilingS());
	f32 halfTilingT = 0.5f * (1.0f + baseShape->getTilingT());

	// Calculate the X and Y translations
	f32 transX = (tickCount * baseShape->getIncTransX()) + baseShape->getInitTransX();
	f32 transY = (tickCount * baseShape->getIncTransY()) + baseShape->getInitTransY();

	// Calculate the X and Y scales
	f32 scaleX = (tickCount * baseShape->getIncScaleX()) + baseShape->getInitScaleX();
	f32 scaleY = (tickCount * baseShape->getIncScaleY()) + baseShape->getInitScaleY();

	// Calculate the rotation
	s16 rotation = (tickCount * baseShape->getIncRot()) + baseShape->getInitRot();

	// Calculate the sine and cosine of the rotation
	f32 sinRotation = JMASSin(rotation);
	f32 cosRotation = JMASCos(rotation);

	// Initialize the transformation matrix
	Mtx transformationMatrix;

	// Fill the transformation matrix with calculated values
	transformationMatrix[0][0] = scaleX * cosRotation;
	transformationMatrix[0][1] = -scaleX * sinRotation;
	transformationMatrix[0][2] = 0.0f;
	transformationMatrix[0][3]
	    = (halfTilingS + (scaleX * ((sinRotation * (halfTilingT + transY)) - (cosRotation * (halfTilingS + transX)))));
	transformationMatrix[1][0] = scaleY * sinRotation;
	transformationMatrix[1][1] = scaleY * cosRotation;
	transformationMatrix[1][2] = 0.0f;
	transformationMatrix[1][3]
	    = (halfTilingT + (-scaleY * ((sinRotation * (halfTilingS + transX)) + (cosRotation * (halfTilingT + transY)))));
	transformationMatrix[2][0] = 0.0f;
	transformationMatrix[2][1] = 0.0f;
	transformationMatrix[2][2] = 1.0f;
	transformationMatrix[2][3] = 0.0f;

	// Load the transformation matrix into the texture matrix
	GXLoadTexMtxImm(transformationMatrix, GX_TEXMTX0, GX_MTX2x4);

	// Set the texture coordinate generation parameters
	GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX3X4, GX_TG_TEX0, GX_TEXMTX0, false, GX_PTIDENTITY);
}

/**
 * @note Address: 0x8008BE10
 * @note Size: 0x170
 */
void JPALoadCalcTexCrdMtxAnm(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	// Get the base shape from the resource
	JPABaseShape* baseShape = workData->mResource->getBsp();

	// Get the age of the particle
	f32 particleAge = particle->mAge;

	// Calculate half of the tiling for S and T
	f32 halfTilingS = 0.5f * (1.0f + baseShape->getTilingS());
	f32 halfTilingT = 0.5f * (1.0f + baseShape->getTilingT());

	// Calculate the X and Y translations
	f32 translationX = (particleAge * baseShape->getIncTransX()) + baseShape->getInitTransX();
	f32 translationY = (particleAge * baseShape->getIncTransY()) + baseShape->getInitTransY();

	// Calculate the X and Y scales
	f32 scaleX = (particleAge * baseShape->getIncScaleX()) + baseShape->getInitScaleX();
	f32 scaleY = (particleAge * baseShape->getIncScaleY()) + baseShape->getInitScaleY();

	// Calculate the rotation
	s16 rotation = (particleAge * baseShape->getIncRot()) + baseShape->getInitRot();

	// Calculate the sine and cosine of the rotation
	f32 sinRotation = JMASSin(rotation);
	f32 cosRotation = JMASCos(rotation);

	// Initialize the transformation matrix
	Mtx transformationMatrix;

	// Fill the transformation matrix with calculated values
	transformationMatrix[0][0] = scaleX * cosRotation;
	transformationMatrix[0][1] = -scaleX * sinRotation;
	transformationMatrix[0][2] = 0.0f;
	transformationMatrix[0][3]
	    = (halfTilingS + (scaleX * ((sinRotation * (halfTilingT + translationY)) - (cosRotation * (halfTilingS + translationX)))));
	transformationMatrix[1][0] = scaleY * sinRotation;
	transformationMatrix[1][1] = scaleY * cosRotation;
	transformationMatrix[1][2] = 0.0f;
	transformationMatrix[1][3]
	    = (halfTilingT + (-scaleY * ((sinRotation * (halfTilingS + translationX)) + (cosRotation * (halfTilingT + translationY)))));
	transformationMatrix[2][0] = 0.0f;
	transformationMatrix[2][1] = 0.0f;
	transformationMatrix[2][2] = 1.0f;
	transformationMatrix[2][3] = 0.0f;

	// Load the transformation matrix into the texture matrix
	GXLoadTexMtxImm(transformationMatrix, 0x1e, GX_MTX2x4);
}

/**
 * @note Address: 0x8008BF80
 * @note Size: 0x54
 */
void JPALoadTex(JPAEmitterWorkData* work)
{
	work->mResourceMgr->load(work->mResource->getTexIdx(work->mResource->getBsp()->getTexIdx()), GX_TEXMAP0);
}

/**
 * @note Address: 0x8008BFD4
 * @note Size: 0x50
 */
void JPALoadTexAnm(JPAEmitterWorkData* work)
{
	work->mResourceMgr->load(work->mResource->getTexIdx(work->mEmitter->mTexAnmIdx), GX_TEXMAP0);
}

/**
 * @note Address: 0x8008C024
 * @note Size: 0x4C
 * JPALoadTexAnm__FP18JPAEmitterWorkDataP15JPABaseParticle
 */
void JPALoadTexAnm(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	work->mResourceMgr->load(work->mResource->getTexIdx(ptcl->mTexAnmIdx), GX_TEXMAP0);
}

/**
 * @note Address: 0x8008C070
 * @note Size: 0x3C
 */
void JPACalcTexIdxNormal(JPAEmitterWorkData* work)
{
	JPABaseShape* shape = work->mResource->mBaseShape;
	u32 tick = shape->getTexAnmKeyNum() - 1 < work->mEmitter->mCurrentFrame ? shape->getTexAnmKeyNum() - 1 : work->mEmitter->mCurrentFrame;
	work->mEmitter->mTexAnmIdx = shape->getTexIdx(tick);
}

/**
 * @note Address: 0x8008C0AC
 * @note Size: 0x38
 */
void JPACalcTexIdxNormal(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPABaseShape* shape = work->mResource->mBaseShape;
	u8 tick             = shape->getTexAnmKeyNum() - 1 < ptcl->getAge() ? shape->getTexAnmKeyNum() - 1 : ptcl->getAge();
	ptcl->mTexAnmIdx    = shape->getTexIdx(tick);
}

/**
 * @note Address: 0x8008C0E4
 * @note Size: 0x38
 */
void JPACalcTexIdxRepeat(JPAEmitterWorkData* work)
{
	JPABaseShape* shape        = work->mResource->getBsp();
	work->mEmitter->mTexAnmIdx = shape->getTexIdx(work->mEmitter->mCurrentFrame % shape->getTexAnmKeyNum());
}

/**
 * @note Address: 0x8008C11C
 * @note Size: 0x44
 */
void JPACalcTexIdxRepeat(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPABaseShape* shape = work->mResource->mBaseShape;
	ptcl->mTexAnmIdx    = shape->getTexIdx(((int)shape->getTexLoopOfst(ptcl->mAnmRandom) + ptcl->mAge) % shape->getTexAnmKeyNum());
}

/**
 * @note Address: 0x8008C160
 * @note Size: 0x50
 */
void JPACalcTexIdxReverse(JPAEmitterWorkData* workData)
{
	// Get the base shape from the resource
	JPABaseShape* baseShape = workData->mResource->getBsp();

	// Get the current tick from the emitter
	int currentTick = workData->mEmitter->mCurrentFrame;

	// Calculate the number of keys
	int totalKeys = (int)baseShape->getTexAnmKeyNum() - 1;

	// Calculate the quotient and remainder of the current tick divided by the total keys
	int quotient  = currentTick / totalKeys;
	int remainder = currentTick % totalKeys;

	// Calculate the texture animation index
	workData->mEmitter->mTexAnmIdx = baseShape->getTexIdx(remainder + (quotient & 1) * (totalKeys - remainder * 2));
}

/**
 * @note Address: 0x8008C1B0
 * @note Size: 0x5C
 */
void JPACalcTexIdxReverse(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	// Get the base shape from the resource
	JPABaseShape* baseShape = workData->mResource->mBaseShape;

	// Calculate the current tick based on the particle's age and the texture loop offset
	s32 currentTick = baseShape->getTexLoopOfst(particle->mAnmRandom) + particle->mAge;

	// Calculate the total number of keys
	int totalKeys = (int)baseShape->getTexAnmKeyNum() - 1;

	// Calculate the quotient and remainder of the current tick divided by the total keys
	int quotient  = currentTick / totalKeys;
	int remainder = currentTick % totalKeys;

	// Calculate the texture animation index
	particle->mTexAnmIdx = baseShape->getTexIdx(remainder + (quotient & 1) * (totalKeys - remainder * 2));
}

/**
 * @note Address: 0x8008C20C
 * @note Size: 0x1C
 */
void JPACalcTexIdxMerge(JPAEmitterWorkData* workData)
{
	workData->mEmitter->mTexAnmIdx = workData->mResource->mBaseShape->getTexIdx();
}

/**
 * @note Address: 0x8008C228
 * @note Size: 0x78
 */
void JPACalcTexIdxMerge(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPABaseShape* shape = work->mResource->mBaseShape;
	int maxFrm          = shape->mData->mTexAnmNum;
	int tick            = (int)(maxFrm * ptcl->mTime) + shape->getTexLoopOfst(ptcl->mAnmRandom);
	ptcl->mTexAnmIdx    = shape->getTexIdx(tick % maxFrm);
}

/**
 * @note Address: 0x8008C2A0
 * @note Size: 0x1C
 */
void JPACalcTexIdxRandom(JPAEmitterWorkData* work)
{
	work->mEmitter->mTexAnmIdx = work->mResource->getBsp()->getTexIdx();
}

/**
 * @note Address: 0x8008C2BC
 * @note Size: 0x3C
 */
void JPACalcTexIdxRandom(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	JPABaseShape* shape = work->mResource->mBaseShape;
	ptcl->mTexAnmIdx    = shape->getTexIdx(((int)shape->getTexLoopOfst(ptcl->mAnmRandom)) % shape->getTexAnmKeyNum());
}

/**
 * @note Address: 0x8008C2F8
 * @note Size: 0x28
 */
void JPALoadPosMtxCam(JPAEmitterWorkData* work)
{
	GXLoadPosMtxImm(work->mPosCamMtx, GX_PNMTX0);
}

/**
 * @note Address: 0x8008C320
 * @note Size: 0x4
 */
void noLoadPrj(const JPAEmitterWorkData* workData, const Mtx mtx)
{
}

/**
 * @note Address: 0x8008C324
 * @note Size: 0x38
 * loadPrj__FPC18JPAEmitterWorkDataPA4_Cf
 */
void loadPrj(const JPAEmitterWorkData* workData, const Mtx p2)
{
	Mtx v1;
	PSMTXConcat(workData->mPrjMtx, p2, v1);
	GXLoadTexMtxImm(v1, 0x1E, GX_MTX3x4);
}

/**
 * @note Address: 0x8008C35C
 * @note Size: 0x1AC
 */
void loadPrjAnm(const JPAEmitterWorkData* workData, const Mtx transformationMatrix)
{
	// Get the base shape from the resource
	JPABaseShape* baseShape = workData->mResource->getBsp();

	// Get the age of the emitter
	f32 emitterAge = workData->mEmitter->getAge();

	// Calculate half of the tiling for S and T
	f32 halfTilingS = 0.5f * (1.0f + baseShape->getTilingS());
	f32 halfTilingT = 0.5f * (1.0f + baseShape->getTilingT());

	// Calculate the X and Y translations
	f32 translationX = (emitterAge * baseShape->getIncTransX()) + baseShape->getInitTransX();
	f32 translationY = (emitterAge * baseShape->getIncTransY()) + baseShape->getInitTransY();

	// Calculate the X and Y scales
	f32 scaleX = (emitterAge * baseShape->getIncScaleX()) + baseShape->getInitScaleX();
	f32 scaleY = (emitterAge * baseShape->getIncScaleY()) + baseShape->getInitScaleY();

	// Calculate the rotation
	s16 rotation = (emitterAge * baseShape->getIncRot()) + baseShape->getInitRot();

	// Calculate the sine and cosine of the rotation
	f32 sinRotation = JMASSin(rotation);
	f32 cosRotation = JMASCos(rotation);

	// Initialize the transformation matrix
	Mtx localTransformationMatrix;

	// Fill the transformation matrix with calculated values
	localTransformationMatrix[0][0] = scaleX * cosRotation;
	localTransformationMatrix[0][1] = -scaleX * sinRotation;
	localTransformationMatrix[0][2]
	    = (halfTilingS + (scaleX * ((sinRotation * (halfTilingT + translationY)) - (cosRotation * (halfTilingS + translationX)))));
	localTransformationMatrix[0][3] = 0.0f;
	localTransformationMatrix[1][0] = scaleY * sinRotation;
	localTransformationMatrix[1][1] = scaleY * cosRotation;
	localTransformationMatrix[1][2]
	    = (halfTilingT + (-scaleY * ((sinRotation * (halfTilingS + translationX)) + (cosRotation * (halfTilingT + translationY)))));
	localTransformationMatrix[1][3] = 0.0f;
	localTransformationMatrix[2][0] = 0.0f;
	localTransformationMatrix[2][1] = 0.0f;
	localTransformationMatrix[2][2] = 1.0f;
	localTransformationMatrix[2][3] = 0.0f;

	// Concatenate the local transformation matrix with the projection matrix
	PSMTXConcat(localTransformationMatrix, workData->mPrjMtx, localTransformationMatrix);

	// Concatenate the local transformation matrix with the passed transformation matrix
	PSMTXConcat(localTransformationMatrix, transformationMatrix, localTransformationMatrix);

	// Load the local transformation matrix into the texture matrix
	GXLoadTexMtxImm(localTransformationMatrix, 0x1e, GX_MTX3x4);
}

/**
 * @note Address: 0x8008C508
 * @note Size: 0xE8
 */
void JPADrawBillboard(JPAEmitterWorkData* work, JPABaseParticle* particle)
{
	if (particle->checkStatus(8) == 0) {
		JGeometry::TVec3f position;
		PSMTXMultVec(work->mPosCamMtx, (Vec*)&particle->mPosition, (Vec*)&position);
		Mtx mtx;
		mtx[0][0] = work->mGlobalPtclScl.x * particle->mParticleScaleX;
		mtx[0][3] = position.x;
		mtx[1][1] = work->mGlobalPtclScl.y * particle->mParticleScaleY;
		mtx[1][3] = position.y;
		mtx[2][2] = 1.0f;
		mtx[2][3] = position.z;
		mtx[2][1] = 0.0f;
		mtx[2][0] = 0.0f;
		mtx[1][2] = 0.0f;
		mtx[1][0] = 0.0f;
		mtx[0][2] = 0.0f;
		mtx[0][1] = 0.0f;
		GXLoadPosMtxImm(mtx, 0);
		p_prj[work->mProjectionType](work, mtx);
		GXCallDisplayList(jpa_dl, sizeof(jpa_dl));
	}
}

/**
 * @note Address: 0x8008C5F0
 * @note Size: 0x118
 */
void JPADrawRotBillboard(JPAEmitterWorkData* work, JPABaseParticle* particle)
{
	if (particle->checkStatus(8) == 0) {
		JGeometry::TVec3f position;
		PSMTXMultVec(work->mPosCamMtx, (Vec*)&particle->mPosition, (Vec*)&position);
		f32 sinRot    = JMASSin(particle->mRotateAngle);
		f32 cosRot    = JMASCos(particle->mRotateAngle);
		f32 particleX = work->mGlobalPtclScl.x * particle->mParticleScaleX;
		f32 particleY = work->mGlobalPtclScl.y * particle->mParticleScaleY;

		Mtx mtx;
		mtx[0][0] = cosRot * particleX;
		mtx[0][1] = -sinRot * particleY;
		mtx[0][3] = position.x;
		mtx[1][0] = sinRot * particleX;
		mtx[1][1] = cosRot * particleY;
		mtx[1][3] = position.y;
		mtx[2][2] = 1.0f;
		mtx[2][3] = position.z;
		mtx[2][1] = 0.0f;
		mtx[2][0] = 0.0f;
		mtx[1][2] = 0.0f;
		mtx[0][2] = 0.0f;
		GXLoadPosMtxImm(mtx, 0);
		p_prj[work->mProjectionType](work, mtx);
		GXCallDisplayList(jpa_dl, sizeof(jpa_dl));
	}
}

/**
 * @note Address: 0x8008C708
 * @note Size: 0xFC
 */
void JPADrawYBillboard(JPAEmitterWorkData* work, JPABaseParticle* particle)
{
	if (particle->checkStatus(8) == 0) {
		JGeometry::TVec3f position;
		PSMTXMultVec(work->mPosCamMtx, (Vec*)&particle->mPosition, (Vec*)&position);
		Mtx mtx;
		f32 particleY = work->mGlobalPtclScl.y * particle->mParticleScaleY;
		mtx[0][0]     = work->mGlobalPtclScl.x * particle->mParticleScaleX;
		mtx[0][3]     = position.x;
		mtx[1][1]     = work->mYBBCamMtx[1][1] * particleY;
		mtx[1][2]     = work->mYBBCamMtx[1][2];
		mtx[1][3]     = position.y;
		mtx[2][1]     = work->mYBBCamMtx[2][1] * particleY;
		mtx[2][2]     = work->mYBBCamMtx[2][2];
		mtx[2][3]     = position.z;
		mtx[2][0]     = 0.0f;
		mtx[1][0]     = 0.0f;
		mtx[0][2]     = 0.0f;
		mtx[0][1]     = 0.0f;
		GXLoadPosMtxImm(mtx, 0);
		p_prj[work->mProjectionType](work, mtx);
		GXCallDisplayList(jpa_dl, sizeof(jpa_dl));
	}
}

/**
 * @note Address: 0x8008C804
 * @note Size: 0x130
 */
void JPADrawRotYBillboard(JPAEmitterWorkData* work, JPABaseParticle* particle)
{
	if (particle->checkStatus(8) == 0) {
		JGeometry::TVec3f position;
		PSMTXMultVec(work->mPosCamMtx, (Vec*)&particle->mPosition, (Vec*)&position);
		f32 sinRot = JMASSin(particle->mRotateAngle);
		f32 cosRot = JMASCos(particle->mRotateAngle);
		Mtx mtx;
		f32 scaleX            = work->mGlobalPtclScl.x * particle->mParticleScaleX;
		f32 scaleY            = work->mGlobalPtclScl.y * particle->mParticleScaleY;
		f32 transformedWidth  = (f32)(sinRot * scaleX);
		f32 transformedHeight = (f32)(cosRot * scaleY);

		f32 boundsY11 = work->mYBBCamMtx[1][1];
		f32 boundsY21 = work->mYBBCamMtx[2][1];

		mtx[0][0] = (f32)(cosRot * scaleX);
		mtx[0][1] = (f32)(-sinRot * scaleY);
		mtx[0][2] = 0.0f;
		mtx[0][3] = position.x;
		mtx[1][0] = transformedWidth * boundsY11;
		mtx[1][1] = transformedHeight * boundsY11;
		mtx[1][2] = -boundsY21;
		mtx[1][3] = position.y;
		mtx[2][0] = transformedWidth * boundsY21;
		mtx[2][1] = transformedHeight * boundsY21;
		mtx[2][2] = boundsY11;
		mtx[2][3] = position.z;
		GXLoadPosMtxImm(mtx, 0);
		p_prj[work->mProjectionType](work, mtx);
		GXCallDisplayList(jpa_dl, sizeof(jpa_dl));
	}
}

/**
 * @note Address: 0x8008C934
 * @note Size: 0x1C
 */
void dirTypeVel(const JPAEmitterWorkData* workData, const JPABaseParticle* particle, JGeometry::TVec3f* direction)
{
	particle->getVelVec(*direction);
}

/**
 * @note Address: 0x8008C950
 * @note Size: 0x1C
 */
void dirTypePos(const JPAEmitterWorkData* workData, const JPABaseParticle* particle, JGeometry::TVec3<f32>* direction)
{
	*direction = particle->mLocalPosition;
}

/**
 * @note Address: 0x8008C96C
 * @note Size: 0x40
 */
void dirTypePosInv(const JPAEmitterWorkData* workData, const JPABaseParticle* particle, JGeometry::TVec3f* direction)
{
	dirTypePos(workData, particle, direction);
	direction->x = -direction->x;
	direction->y = -direction->y;
	direction->z = -direction->z;
}

/**
 * @note Address: 0x8008C9AC
 * @note Size: 0x1C
 */
void dirTypeEmtrDir(const JPAEmitterWorkData* workData, const JPABaseParticle* particle, JGeometry::TVec3f* direction)
{
	*direction = workData->mGlobalEmtrDir;
}

/**
 * @note Address: 0x8008C9C8
 * @note Size: 0xC0
 */
void dirTypePrevPtcl(const JPAEmitterWorkData* work, const JPABaseParticle* ptcl, JGeometry::TVec3f* direction)
{
	JGeometry::TVec3f vec;
	ptcl->getGlobalPosition(vec);
	JPANode<JPABaseParticle>* prev = work->mpCurNode->getPrev();

	if (prev != nullptr) {
		JPABaseParticle* particle = work->mpCurNode->getPrev()->getObject();
		particle->getGlobalPosition(*direction);
	} else {
		work->mEmitter->calcEmitterGlobalPosition(direction);
	}
	direction->sub(vec);
}

/**
 * @note Address: 0x8008CA88
 * @note Size: 0x40
 */
void rotTypeY(f32 p1, f32 p2, Mtx& mtx)
{
	mtx[0][0] = p2;
	mtx[0][1] = 0.0f;
	mtx[0][2] = -p1;
	mtx[0][3] = 0.0f;
	mtx[1][0] = 0.0f;
	mtx[1][1] = 1.0f;
	mtx[1][2] = 0.0f;
	mtx[1][3] = 0.0f;
	mtx[2][0] = p1;
	mtx[2][1] = 0.0f;
	mtx[2][2] = p2;
	mtx[2][3] = 0.0f;
}

/**
 * @note Address: 0x8008CAC8
 * @note Size: 0x40
 */
void rotTypeX(f32 p1, f32 p2, Mtx& mtx)
{
	mtx[0][0] = 1.0f;
	mtx[0][1] = 0.0f;
	mtx[0][2] = 0.0f;
	mtx[0][3] = 0.0f;
	mtx[1][0] = 0.0f;
	mtx[1][1] = p2;
	mtx[1][2] = -p1;
	mtx[1][3] = 0.0f;
	mtx[2][0] = 0.0f;
	mtx[2][1] = p1;
	mtx[2][2] = p2;
	mtx[2][3] = 0.0f;
}

/**
 * @note Address: 0x8008CB08
 * @note Size: 0x40
 */
void rotTypeZ(f32 p1, f32 p2, Mtx& mtx)
{
	mtx[0][0] = p2;
	mtx[0][1] = -p1;
	mtx[0][2] = 0.0f;
	mtx[0][3] = 0.0f;
	mtx[1][0] = p1;
	mtx[1][1] = p2;
	mtx[1][2] = 0.0f;
	mtx[1][3] = 0.0f;
	mtx[2][0] = 0.0f;
	mtx[2][1] = 0.0f;
	mtx[2][2] = 1.0f;
	mtx[2][3] = 0.0f;
}

/**
 * @note Address: 0x8008CB48
 * @note Size: 0x5C
 */
void rotTypeXYZ(f32 p1, f32 p2, Mtx& mtx)
{
	f32 diag = 0.33333299f * (1.0f - p2);
	f32 off1;
	f32 off2;
	off2 = diag + 0.57735f * p1;
	off1 = diag - 0.57735f * p1;
	diag += p2;
	mtx[0][0] = diag;
	mtx[0][1] = off1;
	mtx[0][2] = off2;
	mtx[0][3] = 0.0f;
	mtx[1][0] = off2;
	mtx[1][1] = diag;
	mtx[1][2] = off1;
	mtx[1][3] = 0.0f;
	mtx[2][0] = off1;
	mtx[2][1] = off2;
	mtx[2][2] = diag;
	mtx[2][3] = 0.0f;
}

/**
 * @note Address: 0x8008CBA4
 * @note Size: 0x4C
 */
void basePlaneTypeXY(Mtx mtx, f32 x, f32 y)
{
	mtx[0][0] *= x;
	mtx[1][0] *= x;
	mtx[2][0] *= x;
	mtx[0][1] *= y;
	mtx[1][1] *= y;
	mtx[2][1] *= y;
}

/**
 * @note Address: 0x8008CBF0
 * @note Size: 0x4C
 */
void basePlaneTypeXZ(Mtx mtx, f32 x, f32 z)
{
	mtx[0][0] *= x;
	mtx[1][0] *= x;
	mtx[2][0] *= x;
	mtx[0][2] *= z;
	mtx[1][2] *= z;
	mtx[2][2] *= z;
}

/**
 * @note Address: 0x8008CC3C
 * @note Size: 0x70
 */
void basePlaneTypeX(Mtx mtx, f32 xz, f32 y)
{
	mtx[0][0] *= xz;
	mtx[1][0] *= xz;
	mtx[2][0] *= xz;
	mtx[0][1] *= y;
	mtx[1][1] *= y;
	mtx[2][1] *= y;
	mtx[0][2] *= xz;
	mtx[1][2] *= xz;
	mtx[2][2] *= xz;
}

/**
 * @note Address: 0x8008CCAC
 * @note Size: 0x350
 */
void JPADrawDirection(JPAEmitterWorkData* emitterData, JPABaseParticle* particle)
{
	if (particle->checkStatus(8) == 0) {
		JGeometry::TVec3f directionVector;
		JGeometry::TVec3f crossProductVector;
		p_direction[emitterData->mDirType](emitterData, particle, &directionVector);
		if (!directionVector.isZero()) {
			directionVector.normalize();
			crossProductVector.cross(particle->mBaseAxis, directionVector);
			if (!crossProductVector.isZero()) {
				crossProductVector.normalize();
				particle->mBaseAxis.cross(directionVector, crossProductVector);
				particle->mBaseAxis.normalize();

				Mtx transformationMatrix;

				f32 scaleX = emitterData->mGlobalPtclScl.x * particle->mParticleScaleX;
				f32 scaleY = emitterData->mGlobalPtclScl.y * particle->mParticleScaleY;

				transformationMatrix[0][0] = particle->mBaseAxis.x;
				transformationMatrix[0][1] = directionVector.x;
				transformationMatrix[0][2] = crossProductVector.x;
				transformationMatrix[0][3] = particle->mPosition.x;
				transformationMatrix[1][0] = particle->mBaseAxis.y;
				transformationMatrix[1][1] = directionVector.y;
				transformationMatrix[1][2] = crossProductVector.y;
				transformationMatrix[1][3] = particle->mPosition.y;
				transformationMatrix[2][0] = particle->mBaseAxis.z;
				transformationMatrix[2][1] = directionVector.z;
				transformationMatrix[2][2] = crossProductVector.z;
				transformationMatrix[2][3] = particle->mPosition.z;

				p_plane[emitterData->mPlaneType](transformationMatrix, scaleX, scaleY);
				PSMTXConcat(emitterData->mPosCamMtx, transformationMatrix, transformationMatrix);
				GXLoadPosMtxImm(transformationMatrix, 0);
				p_prj[emitterData->mProjectionType](emitterData, transformationMatrix);
				GXCallDisplayList(p_dl[emitterData->mDLType], sizeof(jpa_dl));
			}
		}
	}
}
/**
 * @note Address: 0x8008CFFC
 * @note Size: 0x3FC
 */
void JPADrawRotDirection(JPAEmitterWorkData* work, JPABaseParticle* particle)
{
	if (particle->checkStatus(8) == 0) {
		f32 sinRot = JMASSin(particle->mRotateAngle);
		f32 cosRot = JMASCos(particle->mRotateAngle);
		JGeometry::TVec3<f32> direction;
		JGeometry::TVec3<f32> crossProduct;
		p_direction[work->mDirType](work, particle, &direction);
		if (!direction.isZero()) {
			direction.normalize();
			crossProduct.cross(particle->mBaseAxis, direction);
			if (!crossProduct.isZero()) {
				crossProduct.normalize();
				particle->mBaseAxis.cross(direction, crossProduct);
				particle->mBaseAxis.normalize();
				f32 particleX = work->mGlobalPtclScl.x * particle->mParticleScaleX;
				f32 particleY = work->mGlobalPtclScl.y * particle->mParticleScaleY;
				Mtx rotationMtx;
				Mtx transformationMtx;
				p_rot[work->mRotType](sinRot, cosRot, rotationMtx);
				p_plane[work->mPlaneType](rotationMtx, particleX, particleY);
				transformationMtx[0][0] = particle->mBaseAxis.x;
				transformationMtx[0][1] = direction.x;
				transformationMtx[0][2] = crossProduct.x;
				transformationMtx[0][3] = particle->mPosition.x;
				transformationMtx[1][0] = particle->mBaseAxis.y;
				transformationMtx[1][1] = direction.y;
				transformationMtx[1][2] = crossProduct.y;
				transformationMtx[1][3] = particle->mPosition.y;
				transformationMtx[2][0] = particle->mBaseAxis.z;
				transformationMtx[2][1] = direction.z;
				transformationMtx[2][2] = crossProduct.z;
				transformationMtx[2][3] = particle->mPosition.z;
				PSMTXConcat(transformationMtx, rotationMtx, rotationMtx);
				PSMTXConcat(work->mPosCamMtx, rotationMtx, transformationMtx);
				GXLoadPosMtxImm(transformationMtx, 0);
				p_prj[work->mProjectionType](work, transformationMtx);
				GXCallDisplayList(p_dl[work->mDLType], sizeof(jpa_dl));
			}
		}
	}
}

/**
 * @note Address: 0x8008D3F8
 * @note Size: 0x208
 */
void JPADrawDBillboard(JPAEmitterWorkData* work, JPABaseParticle* particle)
{
	if (particle->checkStatus(8) == 0) {
		JGeometry::TVec3<f32> direction;
		p_direction[work->mDirType](work, particle, &direction);
		JGeometry::TVec3<f32> cameraPos;
		cameraPos.set(work->mPosCamMtx[2][0], work->mPosCamMtx[2][1], work->mPosCamMtx[2][2]);
		direction.cross(direction, cameraPos);
		if (!direction.isZero()) {
			direction.normalize();
			PSMTXMultVecSR(work->mPosCamMtx, (Vec*)&direction, (Vec*)&direction);
			JGeometry::TVec3<f32> particlePos;
			PSMTXMultVec(work->mPosCamMtx, (Vec*)&particle->mPosition, (Vec*)&particlePos);
			f32 particleX = work->mGlobalPtclScl.x * particle->mParticleScaleX;
			f32 particleY = work->mGlobalPtclScl.y * particle->mParticleScaleY;
			Mtx transformMtx;
			transformMtx[0][0] = direction.x * particleX;
			transformMtx[0][1] = -direction.y * particleY;
			transformMtx[0][3] = particlePos.x;
			transformMtx[1][0] = direction.y * particleX;
			transformMtx[1][1] = direction.x * particleY;
			transformMtx[1][3] = particlePos.y;
			transformMtx[2][2] = 1.0f;
			transformMtx[2][3] = particlePos.z;
			transformMtx[2][1] = 0.0f;
			transformMtx[2][0] = 0.0f;
			transformMtx[0][2] = 0.0f;
			GXLoadPosMtxImm(transformMtx, 0);
			p_prj[work->mProjectionType](work, transformMtx);
			GXCallDisplayList(jpa_dl, sizeof(jpa_dl));
		}
	}
}

/**
 * @note Address: 0x8008D600
 * @note Size: 0x150
 */
void JPADrawRotation(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	if (ptcl->checkStatus(8) == 0) {
		f32 sinRot    = JMASSin(ptcl->mRotateAngle);
		f32 cosRot    = JMASCos(ptcl->mRotateAngle);
		f32 particleX = work->mGlobalPtclScl.x * ptcl->mParticleScaleX;
		f32 particleY = work->mGlobalPtclScl.y * ptcl->mParticleScaleY;
		Mtx mtx;
		p_rot[work->mRotType](sinRot, cosRot, mtx);
		p_plane[work->mPlaneType](mtx, particleX, particleY);
		mtx[0][3] = ptcl->mPosition.x;
		mtx[1][3] = ptcl->mPosition.y;
		mtx[2][3] = ptcl->mPosition.z;
		PSMTXConcat(work->mPosCamMtx, mtx, mtx);
		GXLoadPosMtxImm(mtx, 0);
		p_prj[work->mProjectionType](work, mtx);
		GXCallDisplayList(p_dl[work->mDLType], sizeof(jpa_dl));
	}
}

/**
 * @note Address: 0x8008D750
 * @note Size: 0x9C
 */
void JPADrawPoint(JPAEmitterWorkData* work, JPABaseParticle* ptcl)
{
	if (ptcl->checkStatus(8) == 0) {
		GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
		GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
		f32 zero = 0.0f;
		GXBegin(GX_POINTS, GX_VTXFMT1, 1);
		GXPosition3f32(ptcl->mPosition.x, ptcl->mPosition.y, ptcl->mPosition.z);
		GXTexCoord2f32(zero, zero);

		GXSetVtxDesc(GX_VA_POS, GX_INDEX8);
		GXSetVtxDesc(GX_VA_TEX0, GX_INDEX8);
	}
}

/**
 * @note Address: 0x8008D7EC
 * @note Size: 0x1B8
 */
void JPADrawLine(JPAEmitterWorkData* work, JPABaseParticle* particle)
{
	if (particle->checkStatus(8) == 0) {
		JGeometry::TVec3f position = particle->mPosition;
		JGeometry::TVec3f direction;
		particle->getVelVec(direction);
		if (!direction.isZero()) {
			direction.setLength(work->mGlobalPtclScl.y * (25.0f * particle->mParticleScaleY));
			direction.sub(position, direction);
			GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
			GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
			GXBegin(GX_LINES, GX_VTXFMT1, 2);
			f32 zero = 0.0f;
			f32 one  = 1.0f;
			GXPosition3f32(position.x, position.y, position.z);
			GXTexCoord2f32(zero, zero);
			GXPosition3f32(direction.x, direction.y, direction.z);
			GXTexCoord2f32(zero, one);

			GXSetVtxDesc(GX_VA_POS, GX_INDEX8);
			GXSetVtxDesc(GX_VA_TEX0, GX_INDEX8);
		}
	}
}

/**
 * @note Address: 0x8008D9A4
 * @note Size: 0x8
 */
static JPANode<JPABaseParticle>* getNext(JPANode<JPABaseParticle>* node)
{
	return node->getNext();
}

/**
 * @note Address: 0x8008D9AC
 * @note Size: 0x8
 */
static JPANode<JPABaseParticle>* getPrev(JPANode<JPABaseParticle>* node)
{
	return node->getPrev();
}

/**
 * @note Address: 0x8008D9B4
 * @note Size: 0x588
 */
void JPADrawStripe(JPAEmitterWorkData* work)
{
	JPABaseShape* shape = work->mResource->getBsp();
	u32 ptcl_num        = work->mpAlivePtcl->getNum();
	if (ptcl_num < 2) {
		return;
	}

	f32 coord  = 0.0f;
	f32 step   = 1.0f / (ptcl_num - 1.0f);
	f32 dVar14 = (1.0f + work->mPivot.x) * (25.0f * work->mGlobalPtclScl.x);
	f32 dVar13 = (1.0f - work->mPivot.x) * (25.0f * work->mGlobalPtclScl.x);
	Mtx matrix;
	f32 sin;
	f32 cos;
	JGeometry::TVec3f local_ec;
	JGeometry::TVec3f local_e0[2];
	JGeometry::TVec3f direction;
	JGeometry::TVec3f local_104;
	getNodeFunc node_func;
	JPANode<JPABaseParticle>* startNode;
	if (shape->isDrawFwdAhead()) {
		startNode = work->mpAlivePtcl->getLast();
		node_func = getPrev;
		coord     = 1.0f;
		step      = -step;
	} else {
		startNode = work->mpAlivePtcl->getFirst();
		node_func = getNext;
	}

	GXLoadPosMtxImm(work->mPosCamMtx, 0);
	p_prj[work->mProjectionType](work, work->mPosCamMtx);
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
	GXBegin(GX_TRIANGLESTRIP, GX_VTXFMT1, ptcl_num << 1);

	for (JPANode<JPABaseParticle>* node = startNode; node != work->mpAlivePtcl->getEnd(); node = node_func(node), coord += step) {
		work->mpCurNode           = node;
		JPABaseParticle* particle = node->getObject();
		local_ec.set(particle->mPosition);
		sin = JMASSin(particle->mRotateAngle);
		cos = JMASCos(particle->mRotateAngle);
		local_e0[0].set(-particle->mParticleScaleX * dVar14, 0.0f, 0.0f);
		local_e0[0].set(local_e0[0].x * cos, 0.0f, local_e0[0].x * sin);
		local_e0[1].set(particle->mParticleScaleX * dVar13, 0.0f, 0.0f);
		local_e0[1].set(local_e0[1].x * cos, 0.0f, local_e0[1].x * sin);
		p_direction[work->mDirType](work, particle, &direction);
		if (direction.isZero()) {
			direction.set(0.0f, 1.0f, 0.0f);
		} else {
			direction.normalize();
		}
		local_104.cross(particle->mBaseAxis, direction);
		if (local_104.isZero()) {
			local_104.set(1.0f, 0.0f, 0.0f);
		} else {
			local_104.normalize();
		}
		particle->mBaseAxis.cross(direction, local_104);
		particle->mBaseAxis.normalize();

		matrix[0][0] = local_104.x;
		matrix[0][1] = direction.x;
		matrix[0][2] = particle->mBaseAxis.x;
		matrix[0][3] = 0.0f;

		matrix[1][0] = local_104.y;
		matrix[1][1] = direction.y;
		matrix[1][2] = particle->mBaseAxis.y;
		matrix[1][3] = 0.0f;

		matrix[2][0] = local_104.z;
		matrix[2][1] = direction.z;
		matrix[2][2] = particle->mBaseAxis.z;
		matrix[2][3] = 0.0f;

		PSMTXMultVecArraySR(matrix, (f32*)local_e0, (f32*)local_e0, (f32*)2); // ???
		GXPosition3f32(local_e0[0].x + local_ec.x, local_e0[0].y + local_ec.y, local_e0[0].z + local_ec.z);

		f32 zero = 0.0f; // regswaps are mostly because of these needing to exist (they dont in TP)
		f32 one  = 1.0f;
		GXTexCoord2f32(zero, coord);
		GXPosition3f32(local_e0[1].x + local_ec.x, local_e0[1].y + local_ec.y, local_e0[1].z + local_ec.z);
		GXTexCoord2f32(one, coord);
	}
	GXSetVtxDesc(GX_VA_POS, GX_INDEX8);
	GXSetVtxDesc(GX_VA_TEX0, GX_INDEX8);
}

/**
 * @note Address: 0x8008DF3C
 * @note Size: 0x9AC
 */
void JPADrawStripeX(JPAEmitterWorkData* work)
{
	JPABaseShape* shape = work->mResource->getBsp();
	u32 ptcl_num        = work->mpAlivePtcl->getNum();
	if (ptcl_num < 2) {
		return;
	}

	f32 start_coord = 0.0f;
	f32 coord       = 0.0f;
	f32 step        = 1.0f / (ptcl_num - 1.0f);
	f32 local_154   = (1.0f + work->mPivot.x) * (25.0f * work->mGlobalPtclScl.x);
	f32 local_158   = (1.0f - work->mPivot.x) * (25.0f * work->mGlobalPtclScl.x);
	f32 local_15c   = (1.0f + work->mPivot.y) * (25.0f * work->mGlobalPtclScl.y);
	f32 local_160   = (1.0f - work->mPivot.y) * (25.0f * work->mGlobalPtclScl.y);
	Mtx matrix;
	f32 sin;
	f32 cos;
	JGeometry::TVec3f position;
	JGeometry::TVec3f local_a8[2];
	JGeometry::TVec3f direction;
	JGeometry::TVec3f local_cc;
	JPANode<JPABaseParticle>* startNode;
	getNodeFunc node_func;
	if (shape->isDrawFwdAhead()) {
		startNode   = work->mpAlivePtcl->getLast();
		node_func   = getPrev;
		start_coord = coord = 1.0f;
		step                = -step;
	} else {
		startNode = work->mpAlivePtcl->getFirst();
		node_func = getNext;
	}

	GXLoadPosMtxImm(work->mPosCamMtx, 0);
	p_prj[work->mProjectionType](work, work->mPosCamMtx);
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
	GXBegin(GX_TRIANGLESTRIP, GX_VTXFMT1, ptcl_num << 1);
	for (JPANode<JPABaseParticle>* node = startNode; node != work->mpAlivePtcl->getEnd(); node = node_func(node), coord += step) {
		work->mpCurNode           = node;
		JPABaseParticle* particle = node->getObject();
		position.set(particle->mPosition);
		sin = JMASSin(particle->mRotateAngle);
		cos = JMASCos(particle->mRotateAngle);
		local_a8[0].set(-particle->mParticleScaleX * local_154, 0.0f, 0.0f);
		local_a8[0].set(local_a8[0].x * cos, 0.0f, local_a8[0].x * sin);
		local_a8[1].set(particle->mParticleScaleX * local_158, 0.0f, 0.0f);
		local_a8[1].set(local_a8[1].x * cos, 0.0f, local_a8[1].x * sin);
		p_direction[work->mDirType](work, particle, &direction);
		if (direction.isZero()) {
			direction.set(0.0f, 1.0f, 0.0f);
		} else {
			direction.normalize();
		}
		local_cc.cross(particle->mBaseAxis, direction);
		if (local_cc.isZero()) {
			local_cc.set(1.0f, 0.0f, 0.0f);
		} else {
			local_cc.normalize();
		}
		particle->mBaseAxis.cross(direction, local_cc);
		particle->mBaseAxis.normalize();

		matrix[0][0] = local_cc.x;
		matrix[0][1] = direction.x;
		matrix[0][2] = particle->mBaseAxis.x;
		matrix[0][3] = 0.0f;

		matrix[1][0] = local_cc.y;
		matrix[1][1] = direction.y;
		matrix[1][2] = particle->mBaseAxis.y;
		matrix[1][3] = 0.0f;

		matrix[2][0] = local_cc.z;
		matrix[2][1] = direction.z;
		matrix[2][2] = particle->mBaseAxis.z;
		matrix[2][3] = 0.0f;
		PSMTXMultVecArraySR(matrix, (f32*)local_a8, (f32*)local_a8, (f32*)2); // ???
		GXPosition3f32(local_a8[0].x + position.x, local_a8[0].y + position.y, local_a8[0].z + position.z);
		f32 zero = 0.0f;
		f32 one  = 1.0f;
		GXTexCoord2f32(zero, coord);
		GXPosition3f32(local_a8[1].x + position.x, local_a8[1].y + position.y, local_a8[1].z + position.z);
		GXTexCoord2f32(one, coord);
	}

	coord = start_coord;
	GXBegin(GX_TRIANGLESTRIP, GX_VTXFMT1, ptcl_num << 1);
	for (JPANode<JPABaseParticle>* node = startNode; node != work->mpAlivePtcl->getEnd(); node = node_func(node), coord += step) {
		work->mpCurNode           = node;
		JPABaseParticle* particle = node->getObject();
		position.set(particle->mPosition);
		cos = JMASCos(particle->mRotateAngle);
		sin = -JMASSin(particle->mRotateAngle);

		local_a8[0].set(-particle->mParticleScaleY * local_15c, 0.0f, 0.0f);
		local_a8[0].set(local_a8[0].x * sin, 0.0f, local_a8[0].x * cos);
		local_a8[1].set(particle->mParticleScaleY * local_160, 0.0f, 0.0f);
		local_a8[1].set(local_a8[1].x * sin, 0.0f, local_a8[1].x * cos);

		p_direction[work->mDirType](work, particle, &direction);
		if (direction.isZero()) {
			direction.set(0.0f, 1.0f, 0.0f);
		} else {
			direction.normalize();
		}
		local_cc.cross(particle->mBaseAxis, direction);
		if (local_cc.isZero()) {
			local_cc.set(1.0f, 0.0f, 0.0f);
		} else {
			local_cc.normalize();
		}
		particle->mBaseAxis.cross(direction, local_cc);
		particle->mBaseAxis.normalize();

		matrix[0][0] = local_cc.x;
		matrix[0][1] = direction.x;
		matrix[0][2] = particle->mBaseAxis.x;
		matrix[0][3] = 0.0f;

		matrix[1][0] = local_cc.y;
		matrix[1][1] = direction.y;
		matrix[1][2] = particle->mBaseAxis.y;
		matrix[1][3] = 0.0f;

		matrix[2][0] = local_cc.z;
		matrix[2][1] = direction.z;
		matrix[2][2] = particle->mBaseAxis.z;
		matrix[2][3] = 0.0f;
		PSMTXMultVecArraySR(matrix, (f32*)local_a8, (f32*)local_a8, (f32*)2); // ???
		GXPosition3f32(local_a8[0].x + position.x, local_a8[0].y + position.y, local_a8[0].z + position.z);

		f32 zero = 0.0f;
		f32 one  = 1.0f;
		GXTexCoord2f32(zero, coord);
		GXPosition3f32(local_a8[1].x + position.x, local_a8[1].y + position.y, local_a8[1].z + position.z);
		GXTexCoord2f32(one, coord);
	}
	GXSetVtxDesc(GX_VA_POS, GX_INDEX8);
	GXSetVtxDesc(GX_VA_TEX0, GX_INDEX8);
}

/**
 * @note Address: 0x8008E8E8
 * @note Size: 0x3C
 */
void JPADrawEmitterCallBackB(JPAEmitterWorkData* workData)
{
	if (workData->mEmitter->mEmitterCallback != nullptr) {
		workData->mEmitter->mEmitterCallback->draw(workData->mEmitter);
	}
}

/**
 * @note Address: 0x8008E924
 * @note Size: 0x44
 */
void JPADrawParticleCallBack(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	if (workData->mEmitter->mParticleCallback != nullptr) {
		workData->mEmitter->mParticleCallback->draw(workData->mEmitter, particle);
	}
}

/**
 * @note Address: 0x8008E96C
 * @note Size: 0x284
 */
void makeColorTable(GXColor** colorTable, const JPAClrAnmKeyData* data, u8 a2, s16 size, JKRHeap* heap)
{
	GXColor* color_table = (GXColor*)JKRHeap::alloc((size + 1) * 4, 4, heap);

	f32 r_step, g_step, b_step, a_step;
	r_step = g_step = b_step = a_step = 0.0f;

	f32 r = data[0].color.r;
	f32 g = data[0].color.g;
	f32 b = data[0].color.b;
	f32 a = data[0].color.a;
	int j = 0;

	for (s16 i = 0; i < size + 1; i++) {
		if (i == data[j].index) {
			color_table[i] = data[j].color;

			r = data[j].color.r;
			g = data[j].color.g;
			b = data[j].color.b;
			a = data[j].color.a;
			j++;
			if (j < a2) {
				f32 base_step = 1.0f / (data[j].index - data[j - 1].index);

				r_step = base_step * ((f32)data[j].color.r - r);
				g_step = base_step * ((f32)data[j].color.g - g);
				b_step = base_step * ((f32)data[j].color.b - b);
				a_step = base_step * ((f32)data[j].color.a - a);
			} else {
				r_step = g_step = b_step = a_step = 0.0f;
			}
		} else {
			r += r_step;
			color_table[i].r = r;
			g += g_step;
			color_table[i].g = g;
			b += b_step;
			color_table[i].b = b;
			a += a_step;
			color_table[i].a = a;
		}
	}
	*colorTable = color_table;
}

/**
 * @note Address: 0x8008EBF0
 * @note Size: 0x114
 */
JPABaseShape::JPABaseShape(const u8* data, JKRHeap* heap)
{
	mData = (JPABaseShapeData*)data;

	if (isTexCrdAnm()) {
		mTexCrdMtxAnmTbl = (const void*)(data + sizeof(JPABaseShapeData));
	} else {
		mTexCrdMtxAnmTbl = NULL;
	}

	if (isTexAnm()) {
		u32 offs = sizeof(JPABaseShapeData);
		if (isTexCrdAnm())
			offs = sizeof(JPABaseShapeData) + 0x28;
		mTexIdxAnimTbl = (const u8*)(data + offs);
	} else {
		mTexIdxAnimTbl = nullptr;
	}

	if (isPrmAnm()) {
		makeColorTable(&mPrmClrAnmTbl, (JPAClrAnmKeyData*)(data + mData->mClrPrmAnmOffset), mData->mClrPrmKeyNum, mData->mClrAnmFrmMax,
		               heap);
	} else {
		mPrmClrAnmTbl = nullptr;
	}

	if (isEnvAnm()) {
		makeColorTable(&mEnvClrAnmTbl, (JPAClrAnmKeyData*)(data + mData->mClrEnvAnmOffset), mData->mClrEnvKeyNum, mData->mClrAnmFrmMax,
		               heap);
	} else {
		mEnvClrAnmTbl = nullptr;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x3F4
 */
void JPABaseShape::init_jpa(const u8*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8008ED04
 * @note Size: 0x140
 */
void JPABaseShape::setGX(JPAEmitterWorkData* work) const
{
	const GXTevColorArg* colorArg = getTevColorArg();
	const GXTevAlphaArg* alphaArg = getTevAlphaArg();
	GXSetBlendMode(getBlendMode(), getBlendSrc(), getBlendDst(), getLogicOp());
	GXSetZMode(getZEnable(), getZCmp(), getZUpd());
	GXSetAlphaCompare(getAlphaCmp0(), getAlphaRef0(), getAlphaOp(), getAlphaCmp1(), getAlphaRef1());
	GXSetTevColorIn(GX_TEVSTAGE0, colorArg[0], colorArg[1], colorArg[2], colorArg[3]);
	GXSetTevAlphaIn(GX_TEVSTAGE0, alphaArg[0], alphaArg[1], alphaArg[2], alphaArg[3]);
	GXSetTevDirect(GX_TEVSTAGE0);
	GXSetTevDirect(GX_TEVSTAGE1);
	GXSetZCompLoc(getZCompLoc());
}
