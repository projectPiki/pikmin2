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

static u8 jpa_dl[32] = {
	0x80, 0x00, 0x04, 0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static u8 jpa_dl_x[32] = {
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
	{ GX_CC_C2, GX_CC_C0, GX_CC_TEXC, GX_CC_ZERO },    //
	{ GX_CC_ZERO, GX_CC_TEXC, GX_CC_C0, GX_CC_C2 },    //
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
void JPASetPointSize(JPAEmitterWorkData* workData) { GXSetPointSize(workData->mGlobalPtclScl.x * 25.0f, GX_TO_ONE); }

/**
 * @note Address: 0x8008B150
 * @note Size: 0x3C
 */
void JPASetLineWidth(JPAEmitterWorkData* workData) { GXSetLineWidth(workData->mGlobalPtclScl.x * 25.0f, GX_TO_ONE); }

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
void JPACalcClrIdxMerge(JPAEmitterWorkData* workData) { workData->mClrKeyFrame = 0; }

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
void JPACalcClrIdxRandom(JPAEmitterWorkData* workData) { workData->mClrKeyFrame = 0; }

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
void JPACalcPrm(JPAEmitterWorkData* work) { work->mResource->getBsp()->getPrmClr(work->mClrKeyFrame, &work->mEmitter->mPrmClr); }

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
void JPACalcEnv(JPAEmitterWorkData* work) { work->mResource->getBsp()->getEnvClr(work->mClrKeyFrame, &work->mEmitter->mEnvClr); }

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
	s32 rotation = (tickCount * baseShape->getIncRot()) + baseShape->getInitRot();

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
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	lwz      r5, 4(r3)
	lis      r8, 0x4330
	lwz      r4, 0(r3)
	lis      r3, sincosTable___5JMath@ha
	lwz      r9, 0x1c(r5)
	addi     r7, r3, sincosTable___5JMath@l
	lwz      r0, 0x100(r4)
	addi     r3, r1, 8
	lwz      r6, 0(r9)
	li       r4, 0x1e
	stw      r0, 0x3c(r1)
	li       r5, 1
	lwz      r0, 8(r6)
	stw      r8, 0x38(r1)
	rlwinm   r6, r0, 7, 0x1f, 0x1f
	lfd      f3, lbl_80516B58@sda21(r2)
	lfd      f0, 0x38(r1)
	rlwinm   r0, r0, 6, 0x1f, 0x1f
	lwz      r9, 4(r9)
	fsubs    f6, f0, f3
	stw      r6, 0x44(r1)
	lfs      f1, 0x24(r9)
	stw      r8, 0x40(r1)
	lfs      f0, 0x10(r9)
	lfd      f2, 0x40(r1)
	fmadds   f0, f6, f1, f0
	stw      r0, 0x4c(r1)
	fsubs    f2, f2, f3
	lfs      f7, lbl_80516B4C@sda21(r2)
	stw      r8, 0x48(r1)
	fctiwz   f0, f0
	lfd      f1, 0x48(r1)
	fadds    f2, f7, f2
	lfs      f5, lbl_80516B48@sda21(r2)
	fsubs    f1, f1, f3
	stfd     f0, 0x50(r1)
	fmuls    f11, f5, f2
	lfs      f3, 0x14(r9)
	lfs      f2, 0(r9)
	fadds    f4, f7, f1
	fmadds   f8, f6, f3, f2
	lwz      r0, 0x54(r1)
	lfs      f1, 0x18(r9)
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	fmuls    f12, f5, f4
	lfs      f0, 4(r9)
	add      r6, r7, r0
	fadds    f10, f11, f8
	fmadds   f4, f6, f1, f0
	lfs      f3, 0x1c(r9)
	lfs      f2, 8(r9)
	lfs      f1, 0x20(r9)
	lfs      f0, 0xc(r9)
	fmadds   f13, f6, f3, f2
	lfs      f9, 4(r6)
	fadds    f3, f12, f4
	fmadds   f31, f6, f1, f0
	lfsx     f8, r7, r0
	lfs      f5, lbl_80516B50@sda21(r2)
	fmuls    f1, f9, f10
	stfs     f7, 0x30(r1)
	fmuls    f0, f9, f3
	fmuls    f4, f13, f9
	stfs     f5, 0x10(r1)
	fmsubs   f1, f8, f3, f1
	fneg     f2, f13
	stfs     f5, 0x20(r1)
	fmuls    f3, f31, f8
	stfs     f4, 8(r1)
	fmadds   f4, f13, f1, f11
	fmuls    f6, f2, f8
	fmuls    f2, f31, f9
	stfs     f5, 0x28(r1)
	fneg     f1, f31
	fmadds   f0, f8, f10, f0
	stfs     f6, 0xc(r1)
	stfs     f4, 0x14(r1)
	fmadds   f0, f1, f0, f12
	stfs     f3, 0x18(r1)
	stfs     f2, 0x1c(r1)
	stfs     f0, 0x24(r1)
	stfs     f5, 0x2c(r1)
	stfs     f5, 0x34(r1)
	bl       GXLoadTexMtxImm
	li       r3, 0
	li       r4, 1
	li       r5, 4
	li       r6, 0x1e
	li       r7, 0
	li       r8, 0x7d
	bl       GXSetTexCoordGen2
	psq_l    f31, 104(r1), 0, qr0
	lwz      r0, 0x74(r1)
	lfd      f31, 0x60(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
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
	s32 rotation = (particleAge * baseShape->getIncRot()) + baseShape->getInitRot();

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

	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r8, 0x4330
	lfd      f1, lbl_80516B40@sda21(r2)
	stw      r0, 0x64(r1)
	lfd      f3, lbl_80516B58@sda21(r2)
	lwz      r5, 4(r3)
	lis      r3, sincosTable___5JMath@ha
	lha      r0, 0x80(r4)
	addi     r7, r3, sincosTable___5JMath@l
	lwz      r6, 0x1c(r5)
	addi     r3, r1, 8
	xoris    r0, r0, 0x8000
	stw      r8, 0x38(r1)
	lwz      r5, 0(r6)
	li       r4, 0x1e
	stw      r0, 0x3c(r1)
	lwz      r0, 8(r5)
	li       r5, 1
	lfd      f0, 0x38(r1)
	lwz      r9, 4(r6)
	rlwinm   r6, r0, 7, 0x1f, 0x1f
	fsubs    f10, f0, f1
	rlwinm   r0, r0, 6, 0x1f, 0x1f
	stw      r6, 0x44(r1)
	lfs      f1, 0x24(r9)
	stw      r8, 0x40(r1)
	lfs      f0, 0x10(r9)
	lfd      f2, 0x40(r1)
	fmadds   f0, f10, f1, f0
	stw      r0, 0x4c(r1)
	fsubs    f2, f2, f3
	lfs      f6, lbl_80516B4C@sda21(r2)
	stw      r8, 0x48(r1)
	fctiwz   f0, f0
	lfd      f1, 0x48(r1)
	fadds    f5, f6, f2
	lfs      f7, lbl_80516B48@sda21(r2)
	fsubs    f1, f1, f3
	stfd     f0, 0x50(r1)
	lfs      f0, 0(r9)
	fmuls    f11, f7, f5
	lwz      r0, 0x54(r1)
	fadds    f4, f6, f1
	lfs      f1, 0x14(r9)
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	add      r6, r7, r0
	lfs      f3, 0x18(r9)
	fmadds   f5, f10, f1, f0
	fmuls    f12, f7, f4
	lfs      f2, 4(r9)
	lfs      f1, 0x1c(r9)
	lfs      f0, 8(r9)
	fmadds   f2, f10, f3, f2
	fadds    f9, f11, f5
	fmadds   f13, f10, f1, f0
	lfs      f8, 4(r6)
	fadds    f5, f12, f2
	lfs      f1, 0x20(r9)
	lfs      f0, 0xc(r9)
	lfs      f4, lbl_80516B50@sda21(r2)
	fmadds   f10, f10, f1, f0
	lfsx     f7, r7, r0
	fmuls    f2, f13, f8
	stfs     f4, 0x10(r1)
	fmuls    f0, f8, f5
	fmuls    f1, f8, f9
	stfs     f2, 8(r1)
	fneg     f3, f13
	fmadds   f0, f7, f9, f0
	fmsubs   f2, f7, f5, f1
	stfs     f4, 0x20(r1)
	fmuls    f5, f3, f7
	fmuls    f1, f10, f7
	stfs     f4, 0x28(r1)
	fmadds   f3, f13, f2, f11
	fmuls    f2, f10, f8
	stfs     f5, 0xc(r1)
	stfs     f1, 0x18(r1)
	fneg     f1, f10
	stfs     f3, 0x14(r1)
	fmadds   f0, f1, f0, f12
	stfs     f2, 0x1c(r1)
	stfs     f0, 0x24(r1)
	stfs     f4, 0x2c(r1)
	stfs     f6, 0x30(r1)
	stfs     f4, 0x34(r1)
	bl       GXLoadTexMtxImm
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
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
void JPACalcTexIdxMerge(JPAEmitterWorkData* workData) { workData->mEmitter->mTexAnmIdx = workData->mResource->mBaseShape->getTexIdx(); }

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
void JPACalcTexIdxRandom(JPAEmitterWorkData* work) { work->mEmitter->mTexAnmIdx = work->mResource->getBsp()->getTexIdx(); }

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
void JPALoadPosMtxCam(JPAEmitterWorkData* work) { GXLoadPosMtxImm(work->mPosCamMtx, GX_PNMTX0); }

/**
 * @note Address: 0x8008C320
 * @note Size: 0x4
 */
void noLoadPrj(const JPAEmitterWorkData* workData, const Mtx mtx) { }

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
	s32 rotation = (emitterAge * baseShape->getIncRot()) + baseShape->getInitRot();

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
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	lwz      r7, 4(r3)
	lis      r8, 0x4330
	lwz      r6, 0(r3)
	mr       r10, r3
	lwz      r9, 0x1c(r7)
	lis      r5, sincosTable___5JMath@ha
	lwz      r0, 0x100(r6)
	mr       r31, r4
	lwz      r6, 0(r9)
	addi     r7, r5, sincosTable___5JMath@l
	stw      r0, 0x3c(r1)
	addi     r3, r1, 8
	lwz      r0, 8(r6)
	mr       r5, r3
	stw      r8, 0x38(r1)
	addi     r4, r10, 0x1b4
	rlwinm   r6, r0, 7, 0x1f, 0x1f
	lfd      f3, lbl_80516B58@sda21(r2)
	lfd      f0, 0x38(r1)
	rlwinm   r0, r0, 6, 0x1f, 0x1f
	lwz      r9, 4(r9)
	fsubs    f6, f0, f3
	stw      r6, 0x44(r1)
	lfs      f1, 0x24(r9)
	stw      r8, 0x40(r1)
	lfs      f0, 0x10(r9)
	lfd      f2, 0x40(r1)
	fmadds   f0, f6, f1, f0
	stw      r0, 0x4c(r1)
	fsubs    f2, f2, f3
	lfs      f7, lbl_80516B4C@sda21(r2)
	stw      r8, 0x48(r1)
	fctiwz   f0, f0
	lfd      f1, 0x48(r1)
	fadds    f2, f7, f2
	lfs      f5, lbl_80516B48@sda21(r2)
	fsubs    f1, f1, f3
	stfd     f0, 0x50(r1)
	fmuls    f11, f5, f2
	lfs      f3, 0x14(r9)
	lfs      f2, 0(r9)
	fadds    f4, f7, f1
	fmadds   f8, f6, f3, f2
	lwz      r0, 0x54(r1)
	lfs      f1, 0x18(r9)
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	fmuls    f12, f5, f4
	lfs      f0, 4(r9)
	add      r6, r7, r0
	fadds    f10, f11, f8
	fmadds   f5, f6, f1, f0
	lfs      f3, 0x1c(r9)
	lfs      f2, 8(r9)
	lfs      f1, 0x20(r9)
	lfs      f0, 0xc(r9)
	fmadds   f13, f6, f3, f2
	lfs      f9, 4(r6)
	fadds    f3, f12, f5
	fmadds   f31, f6, f1, f0
	lfsx     f8, r7, r0
	lfs      f4, lbl_80516B50@sda21(r2)
	fmuls    f1, f9, f10
	stfs     f7, 0x30(r1)
	fmuls    f0, f9, f3
	fmuls    f5, f13, f9
	stfs     f4, 0x14(r1)
	fmsubs   f1, f8, f3, f1
	fneg     f2, f13
	stfs     f4, 0x24(r1)
	fmuls    f3, f31, f8
	stfs     f5, 8(r1)
	fmadds   f5, f13, f1, f11
	fmuls    f6, f2, f8
	fmuls    f2, f31, f9
	stfs     f4, 0x28(r1)
	fneg     f1, f31
	fmadds   f0, f8, f10, f0
	stfs     f6, 0xc(r1)
	stfs     f5, 0x10(r1)
	fmadds   f0, f1, f0, f12
	stfs     f3, 0x18(r1)
	stfs     f2, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stfs     f4, 0x2c(r1)
	stfs     f4, 0x34(r1)
	bl       PSMTXConcat
	addi     r3, r1, 8
	mr       r4, r31
	mr       r5, r3
	bl       PSMTXConcat
	addi     r3, r1, 8
	li       r4, 0x1e
	li       r5, 0
	bl       GXLoadTexMtxImm
	psq_l    f31, 104(r1), 0, qr0
	lwz      r0, 0x74(r1)
	lfd      f31, 0x60(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
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
		JGeometry::TVec3f position;
		position.x = particle->mPosition.x;
		// JGeometry::setTVec3f(&particle->mPosition.x, &local_1c.x);
		JGeometry::TVec3f direction;
		particle->getVelVec(direction);
		if (!direction.isZero()) {
			// local_28.setLength(work->mGlobalPtclScl.y * (25.0f * particle->mParticleScaleY));
			// local_28.sub(local_1c, local_28);
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
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stfd     f28, 0x30(r1)
	psq_st   f28, 56(r1), 0, qr0
	stfd     f27, 0x20(r1)
	psq_st   f27, 40(r1), 0, qr0
	lwz      r0, 0x7c(r4)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_8008D96C
	lfs      f6, 0x28(r4)
	lis      r5, __float_epsilon@ha
	lwz      r7, 0(r4)
	fmuls    f0, f6, f6
	lfs      f5, 0x24(r4)
	lwz      r6, 4(r4)
	lwz      r0, 8(r4)
	fmadds   f2, f5, f5, f0
	lfs      f7, 0x2c(r4)
	lfs      f1, lbl_80516B68@sda21(r2)
	lfs      f0, __float_epsilon@l(r5)
	fmadds   f8, f7, f7, f2
	stw      r7, 8(r1)
	fmuls    f0, f1, f0
	stw      r6, 0xc(r1)
	fcmpo    cr0, f8, f0
	stw      r0, 0x10(r1)
	cror     2, 0, 2
	beq      lbl_8008D96C
	lfs      f1, lbl_80516B38@sda21(r2)
	fcmpo    cr0, f8, f0
	lfs      f0, 0x64(r4)
	lfs      f2, 0x148(r3)
	fmuls    f0, f1, f0
	fmuls    f3, f2, f0
	cror     2, 0, 2
	beq      lbl_8008D8DC
	lfs      f0, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f8, f0
	cror     2, 0, 2
	bne      lbl_8008D8AC
	b        lbl_8008D8CC

	lbl_8008D8AC:
	frsqrte  f4, f8
	lfs      f2, lbl_80516B48@sda21(r2)
	lfs      f0, lbl_80516B6C@sda21(r2)
	frsp     f4, f4
	fmuls    f1, f4, f4
	fmuls    f2, f2, f4
	fnmsubs  f0, f8, f1, f0
	fmuls    f8, f2, f0

	lbl_8008D8CC:
	fmuls    f0, f8, f3
	fmuls    f5, f5, f0
	fmuls    f6, f6, f0
	fmuls    f7, f7, f0

	lbl_8008D8DC:
	lfs      f0, 8(r1)
	li       r3, 9
	lfs      f31, 0xc(r1)
	li       r4, 1
	lfs      f30, 0x10(r1)
	fsubs    f29, f0, f5
	fsubs    f28, f31, f6
	fsubs    f27, f30, f7
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xa8
	li       r4, 1
	li       r5, 2
	bl       GXBegin
	lfs      f0, 8(r1)
	lis      r5, 0xCC008000@ha
	lfs      f1, lbl_80516B50@sda21(r2)
	li       r3, 9
	stfs     f0, 0xCC008000@l(r5)
	li       r4, 2
	lfs      f0, lbl_80516B4C@sda21(r2)
	stfs     f31, -0x8000(r5)
	stfs     f30, -0x8000(r5)
	stfs     f1, -0x8000(r5)
	stfs     f1, -0x8000(r5)
	stfs     f29, -0x8000(r5)
	stfs     f28, -0x8000(r5)
	stfs     f27, -0x8000(r5)
	stfs     f1, -0x8000(r5)
	stfs     f0, -0x8000(r5)
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 2
	bl       GXSetVtxDesc

	lbl_8008D96C:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	psq_l    f28, 56(r1), 0, qr0
	lfd      f28, 0x30(r1)
	psq_l    f27, 40(r1), 0, qr0
	lwz      r0, 0x74(r1)
	lfd      f27, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/**
 * @note Address: 0x8008D9A4
 * @note Size: 0x8
 */
static JPANode<JPABaseParticle>* getNext(JPANode<JPABaseParticle>* node) { return node->getNext(); }

/**
 * @note Address: 0x8008D9AC
 * @note Size: 0x8
 */
static JPANode<JPABaseParticle>* getPrev(JPANode<JPABaseParticle>* node) { return node->getPrev(); }

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

	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stfd     f31, 0x120(r1)
	psq_st   f31, 296(r1), 0, qr0
	stfd     f30, 0x110(r1)
	psq_st   f30, 280(r1), 0, qr0
	stfd     f29, 0x100(r1)
	psq_st   f29, 264(r1), 0, qr0
	stfd     f28, 0xf0(r1)
	psq_st   f28, 248(r1), 0, qr0
	stfd     f27, 0xe0(r1)
	psq_st   f27, 232(r1), 0, qr0
	stfd     f26, 0xd0(r1)
	psq_st   f26, 216(r1), 0, qr0
	stfd     f25, 0xc0(r1)
	psq_st   f25, 200(r1), 0, qr0
	stfd     f24, 0xb0(r1)
	psq_st   f24, 184(r1), 0, qr0
	stfd     f23, 0xa0(r1)
	psq_st   f23, 168(r1), 0, qr0
	stfd     f22, 0x90(r1)
	psq_st   f22, 152(r1), 0, qr0
	stmw     r24, 0x70(r1)
	mr       r30, r3
	lwz      r5, 0x1e4(r3)
	lwz      r3, 4(r3)
	lwz      r26, 8(r5)
	lwz      r3, 0x1c(r3)
	cmplwi   r26, 2
	blt      lbl_8008DED8
	lis      r4, 0x4330
	lwz      r3, 0(r3)
	stw      r26, 0x64(r1)
	lwz      r0, 8(r3)
	stw      r4, 0x60(r1)
	lfd      f1, lbl_80516B58@sda21(r2)
	rlwinm.  r0, r0, 0, 0xa, 0xa
	lfd      f0, 0x60(r1)
	lfs      f4, lbl_80516B4C@sda21(r2)
	fsubs    f3, f0, f1
	lfs      f5, 0x14c(r30)
	lfs      f1, lbl_80516B38@sda21(r2)
	lfs      f0, 0x144(r30)
	fadds    f2, f4, f5
	fsubs    f3, f3, f4
	fmuls    f1, f1, f0
	lfs      f26, lbl_80516B50@sda21(r2)
	fsubs    f0, f4, f5
	fdivs    f25, f4, f3
	fmuls    f24, f2, f1
	fmuls    f23, f0, f1
	beq      lbl_8008DAA4
	lis      r3, "getPrev__FP26JPANode<15JPABaseParticle>"@ha
	fmr      f26, f4
	addi     r0, r3, "getPrev__FP26JPANode<15JPABaseParticle>"@l
	fneg     f25, f25
	lwz      r25, 4(r5)
	mr       r31, r0
	b        lbl_8008DAB4

lbl_8008DAA4:
	lis      r3, "getNext__FP26JPANode<15JPABaseParticle>"@ha
	lwz      r25, 0(r5)
	addi     r0, r3, "getNext__FP26JPANode<15JPABaseParticle>"@l
	mr       r31, r0

lbl_8008DAB4:
	addi     r3, r30, 0x184
	li       r4, 0
	bl       GXLoadPosMtxImm
	lwz      r0, 0x210(r30)
	lis      r3, p_prj@ha
	addi     r5, r3, p_prj@l
	mr       r3, r30
	slwi     r0, r0, 2
	addi     r4, r30, 0x184
	lwzx     r12, r5, r0
	mtctr    r12
	bctrl
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 1
	bl       GXSetVtxDesc
	rlwinm   r5, r26, 1, 0x10, 0x1e
	li       r3, 0x98
	li       r4, 1
	bl       GXBegin
	lis      r5, sincosTable___5JMath@ha
	lis      r4, p_direction@ha
	lis      r3, __float_epsilon@ha
	lfs      f30, lbl_80516B50@sda21(r2)
	lfs      f31, lbl_80516B68@sda21(r2)
	mr       r24, r25
	lfs      f22, lbl_80516B4C@sda21(r2)
	addi     r26, r5, sincosTable___5JMath@l
	addi     r27, r4, p_direction@l
	addi     r28, r3, __float_epsilon@l
	lis      r29, 0xcc01
	b        lbl_8008DEB8

lbl_8008DB3C:
	stw      r24, 0x1e8(r30)
	addi     r25, r24, 8
	mr       r3, r30
	addi     r5, r1, 8
	lfs      f1, 0x68(r24)
	mr       r4, r25
	lhz      r0, 0x90(r24)
	fneg     f0, f1
	lfs      f29, 8(r24)
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	fmuls    f1, f1, f23
	add      r6, r26, r0
	lfs      f28, 0xc(r24)
	lfs      f27, 0x10(r24)
	fmuls    f0, f0, f24
	lfs      f4, 0(r6)
	lfs      f5, 4(r6)
	fmuls    f3, f0, f4
	stfs     f30, 0x18(r1)
	fmuls    f2, f0, f5
	stfs     f0, 0x14(r1)
	fmuls    f4, f1, f4
	fmuls    f0, f1, f5
	stfs     f30, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stfs     f30, 0x24(r1)
	stfs     f30, 0x28(r1)
	stfs     f2, 0x14(r1)
	stfs     f30, 0x18(r1)
	stfs     f3, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stfs     f30, 0x24(r1)
	stfs     f4, 0x28(r1)
	lwz      r0, 0x200(r30)
	slwi     r0, r0, 2
	lwzx     r12, r27, r0
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lfs      f0, 0xc(r1)
	fmuls    f2, f1, f1
	lfs      f3, 0x10(r1)
	fmuls    f1, f0, f0
	lfs      f0, 0(r28)
	fmuls    f3, f3, f3
	fmuls    f4, f31, f0
	fadds    f0, f2, f1
	fadds    f5, f3, f0
	fcmpo    cr0, f5, f4
	cror     2, 0, 2
	bne      lbl_8008DC20
	lfs      f1, lbl_80516B50@sda21(r2)
	lfs      f0, lbl_80516B4C@sda21(r2)
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	b        lbl_8008DC84

lbl_8008DC20:
	fcmpo    cr0, f5, f4
	cror     2, 0, 2
	beq      lbl_8008DC84
	lfs      f0, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f5, f0
	cror     2, 0, 2
	bne      lbl_8008DC40
	b        lbl_8008DC60

lbl_8008DC40:
	frsqrte  f3, f5
	lfs      f2, lbl_80516B48@sda21(r2)
	lfs      f0, lbl_80516B6C@sda21(r2)
	frsp     f3, f3
	fmuls    f1, f3, f3
	fmuls    f2, f2, f3
	fnmsubs  f0, f5, f1, f0
	fmuls    f5, f2, f0

lbl_8008DC60:
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	fmuls    f2, f2, f5
	fmuls    f1, f1, f5
	fmuls    f0, f0, f5
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)

lbl_8008DC84:
	lfs      f4, 0x54(r25)
	lfs      f6, 0x10(r1)
	lfs      f0, 0(r28)
	fmuls    f1, f4, f6
	lfs      f5, 0xc(r1)
	lfs      f3, 0x5c(r25)
	fmuls    f8, f31, f0
	lfs      f2, 8(r1)
	fmuls    f0, f3, f5
	fmsubs   f1, f3, f2, f1
	lfs      f7, 0x58(r25)
	fmuls    f2, f7, f2
	fmuls    f3, f1, f1
	fmsubs   f0, f7, f6, f0
	fmsubs   f2, f4, f5, f2
	fmadds   f3, f0, f0, f3
	fmadds   f7, f2, f2, f3
	fcmpo    cr0, f7, f8
	cror     2, 0, 2
	bne      lbl_8008DCE4
	lfs      f1, lbl_80516B50@sda21(r2)
	lfs      f0, lbl_80516B4C@sda21(r2)
	fmr      f2, f1
	b        lbl_8008DD30

lbl_8008DCE4:
	fcmpo    cr0, f7, f8
	cror     2, 0, 2
	beq      lbl_8008DD30
	lfs      f3, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f7, f3
	cror     2, 0, 2
	bne      lbl_8008DD04
	b        lbl_8008DD24

lbl_8008DD04:
	frsqrte  f6, f7
	lfs      f5, lbl_80516B48@sda21(r2)
	lfs      f3, lbl_80516B6C@sda21(r2)
	frsp     f6, f6
	fmuls    f4, f6, f6
	fmuls    f5, f5, f6
	fnmsubs  f3, f7, f4, f3
	fmuls    f7, f5, f3

lbl_8008DD24:
	fmuls    f0, f0, f7
	fmuls    f1, f1, f7
	fmuls    f2, f2, f7

lbl_8008DD30:
	lfs      f7, 0x10(r1)
	lfs      f6, 8(r1)
	fmuls    f3, f7, f1
	lfs      f8, 0xc(r1)
	fmuls    f4, f6, f2
	fmuls    f5, f8, f0
	fmsubs   f3, f8, f2, f3
	fmsubs   f4, f7, f0, f4
	fmsubs   f5, f6, f1, f5
	stfs     f3, 0x54(r25)
	stfs     f4, 0x58(r25)
	stfs     f5, 0x5c(r25)
	lfs      f4, 0x54(r25)
	lfs      f3, 0x58(r25)
	fmuls    f5, f4, f4
	lfs      f6, 0x5c(r25)
	fmuls    f4, f3, f3
	lfs      f3, 0(r28)
	fmuls    f6, f6, f6
	fmuls    f3, f31, f3
	fadds    f4, f5, f4
	fadds    f7, f6, f4
	fcmpo    cr0, f7, f3
	cror     2, 0, 2
	beq      lbl_8008DDEC
	lfs      f3, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f7, f3
	cror     2, 0, 2
	bne      lbl_8008DDA8
	b        lbl_8008DDC8

lbl_8008DDA8:
	frsqrte  f6, f7
	lfs      f5, lbl_80516B48@sda21(r2)
	lfs      f3, lbl_80516B6C@sda21(r2)
	frsp     f6, f6
	fmuls    f4, f6, f6
	fmuls    f5, f5, f6
	fnmsubs  f3, f7, f4, f3
	fmuls    f7, f5, f3

lbl_8008DDC8:
	lfs      f3, 0x54(r25)
	fmuls    f3, f3, f7
	stfs     f3, 0x54(r25)
	lfs      f3, 0x58(r25)
	fmuls    f3, f3, f7
	stfs     f3, 0x58(r25)
	lfs      f3, 0x5c(r25)
	fmuls    f3, f3, f7
	stfs     f3, 0x5c(r25)

lbl_8008DDEC:
	lfs      f4, 8(r1)
	addi     r4, r1, 0x14
	stfs     f0, 0x2c(r1)
	mr       r5, r4
	lfs      f3, 0xc(r1)
	addi     r3, r1, 0x2c
	stfs     f4, 0x30(r1)
	li       r6, 2
	lfs      f0, 0x10(r1)
	lfs      f4, 0x54(r25)
	stfs     f4, 0x34(r1)
	stfs     f30, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f3, 0x40(r1)
	lfs      f1, 0x58(r25)
	stfs     f1, 0x44(r1)
	stfs     f30, 0x48(r1)
	stfs     f2, 0x4c(r1)
	stfs     f0, 0x50(r1)
	lfs      f0, 0x5c(r25)
	stfs     f0, 0x54(r1)
	stfs     f30, 0x58(r1)
	bl       PSMTXMultVecArraySR
	lfs      f0, 0x14(r1)
	mr       r12, r31
	mr       r3, r24
	fadds    f0, f0, f29
	stfs     f0, -0x8000(r29)
	lfs      f0, 0x18(r1)
	fadds    f0, f0, f28
	stfs     f0, -0x8000(r29)
	lfs      f0, 0x1c(r1)
	fadds    f0, f0, f27
	stfs     f0, -0x8000(r29)
	stfs     f30, -0x8000(r29)
	stfs     f26, -0x8000(r29)
	lfs      f0, 0x20(r1)
	fadds    f0, f0, f29
	stfs     f0, -0x8000(r29)
	lfs      f0, 0x24(r1)
	fadds    f0, f0, f28
	stfs     f0, -0x8000(r29)
	lfs      f0, 0x28(r1)
	fadds    f0, f0, f27
	stfs     f0, -0x8000(r29)
	stfs     f22, -0x8000(r29)
	stfs     f26, -0x8000(r29)
	mtctr    r12
	bctrl
	fadds    f26, f26, f25
	mr       r24, r3

lbl_8008DEB8:
	cmplwi   r24, 0
	bne      lbl_8008DB3C
	li       r3, 9
	li       r4, 2
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 2
	bl       GXSetVtxDesc

lbl_8008DED8:
	psq_l    f31, 296(r1), 0, qr0
	lfd      f31, 0x120(r1)
	psq_l    f30, 280(r1), 0, qr0
	lfd      f30, 0x110(r1)
	psq_l    f29, 264(r1), 0, qr0
	lfd      f29, 0x100(r1)
	psq_l    f28, 248(r1), 0, qr0
	lfd      f28, 0xf0(r1)
	psq_l    f27, 232(r1), 0, qr0
	lfd      f27, 0xe0(r1)
	psq_l    f26, 216(r1), 0, qr0
	lfd      f26, 0xd0(r1)
	psq_l    f25, 200(r1), 0, qr0
	lfd      f25, 0xc0(r1)
	psq_l    f24, 184(r1), 0, qr0
	lfd      f24, 0xb0(r1)
	psq_l    f23, 168(r1), 0, qr0
	lfd      f23, 0xa0(r1)
	psq_l    f22, 152(r1), 0, qr0
	lfd      f22, 0x90(r1)
	lmw      r24, 0x70(r1)
	lwz      r0, 0x134(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
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
		local_a8[0].set(local_a8[0].x * cos, 0.0f, local_a8[0].x * sin);
		local_a8[1].set(particle->mParticleScaleY * local_160, 0.0f, 0.0f);
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
	GXSetVtxDesc(GX_VA_POS, GX_INDEX8);
	GXSetVtxDesc(GX_VA_TEX0, GX_INDEX8);
	/*
	stwu     r1, -0x160(r1)
	mflr     r0
	stw      r0, 0x164(r1)
	stfd     f31, 0x150(r1)
	psq_st   f31, 344(r1), 0, qr0
	stfd     f30, 0x140(r1)
	psq_st   f30, 328(r1), 0, qr0
	stfd     f29, 0x130(r1)
	psq_st   f29, 312(r1), 0, qr0
	stfd     f28, 0x120(r1)
	psq_st   f28, 296(r1), 0, qr0
	stfd     f27, 0x110(r1)
	psq_st   f27, 280(r1), 0, qr0
	stfd     f26, 0x100(r1)
	psq_st   f26, 264(r1), 0, qr0
	stfd     f25, 0xf0(r1)
	psq_st   f25, 248(r1), 0, qr0
	stfd     f24, 0xe0(r1)
	psq_st   f24, 232(r1), 0, qr0
	stfd     f23, 0xd0(r1)
	psq_st   f23, 216(r1), 0, qr0
	stfd     f22, 0xc0(r1)
	psq_st   f22, 200(r1), 0, qr0
	stfd     f21, 0xb0(r1)
	psq_st   f21, 184(r1), 0, qr0
	stfd     f20, 0xa0(r1)
	psq_st   f20, 168(r1), 0, qr0
	stfd     f19, 0x90(r1)
	psq_st   f19, 152(r1), 0, qr0
	stmw     r22, 0x68(r1)
	mr       r27, r3
	lwz      r5, 0x1e4(r3)
	lwz      r3, 4(r3)
	lwz      r31, 8(r5)
	lwz      r3, 0x1c(r3)
	cmplwi   r31, 2
	blt      lbl_8008E86C
	lis      r4, 0x4330
	lwz      r3, 0(r3)
	stw      r31, 0x64(r1)
	lwz      r0, 8(r3)
	stw      r4, 0x60(r1)
	lfd      f1, lbl_80516B58@sda21(r2)
	rlwinm.  r0, r0, 0, 0xa, 0xa
	lfd      f0, 0x60(r1)
	lfs      f6, lbl_80516B4C@sda21(r2)
	fsubs    f0, f0, f1
	lfs      f1, 0x14c(r27)
	lfs      f19, lbl_80516B50@sda21(r2)
	lfs      f7, 0x150(r27)
	fadds    f5, f6, f1
	fsubs    f0, f0, f6
	fsubs    f2, f6, f1
	lfs      f4, lbl_80516B38@sda21(r2)
	lfs      f3, 0x144(r27)
	fadds    f1, f6, f7
	fdivs    f31, f6, f0
	lfs      f0, 0x148(r27)
	fmuls    f3, f4, f3
	fmuls    f4, f4, f0
	fsubs    f0, f6, f7
	fmr      f25, f19
	fmuls    f24, f5, f3
	fmuls    f23, f2, f3
	fmuls    f20, f1, f4
	fmuls    f21, f0, f4
	beq      lbl_8008E068
	lis      r3, "getPrev__FP26JPANode<15JPABaseParticle>"@ha
	fmr      f25, f6
	addi     r0, r3, "getPrev__FP26JPANode<15JPABaseParticle>"@l
	fmr      f19, f6
	fneg     f31, f31
	lwz      r29, 4(r5)
	mr       r28, r0
	b        lbl_8008E078

lbl_8008E068:
	lis      r3, "getNext__FP26JPANode<15JPABaseParticle>"@ha
	lwz      r29, 0(r5)
	addi     r0, r3, "getNext__FP26JPANode<15JPABaseParticle>"@l
	mr       r28, r0

lbl_8008E078:
	addi     r3, r27, 0x184
	li       r4, 0
	bl       GXLoadPosMtxImm
	lwz      r0, 0x210(r27)
	lis      r3, p_prj@ha
	addi     r5, r3, p_prj@l
	mr       r3, r27
	slwi     r0, r0, 2
	addi     r4, r27, 0x184
	lwzx     r12, r5, r0
	mtctr    r12
	bctrl
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 1
	bl       GXSetVtxDesc
	slwi     r30, r31, 1
	rlwinm   r5, r31, 1, 0x10, 0x1e
	li       r3, 0x98
	li       r4, 1
	bl       GXBegin
	lis      r5, sincosTable___5JMath@ha
	lis      r4, p_direction@ha
	lis      r3, __float_epsilon@ha
	lfs      f29, lbl_80516B50@sda21(r2)
	lfs      f30, lbl_80516B68@sda21(r2)
	mr       r31, r29
	lfs      f22, lbl_80516B4C@sda21(r2)
	addi     r23, r5, sincosTable___5JMath@l
	addi     r24, r4, p_direction@l
	addi     r25, r3, __float_epsilon@l
	lis      r26, 0xcc01
	b        lbl_8008E480

lbl_8008E104:
	stw      r31, 0x1e8(r27)
	addi     r22, r31, 8
	mr       r3, r27
	addi     r5, r1, 8
	lfs      f1, 0x68(r31)
	mr       r4, r22
	lhz      r0, 0x90(r31)
	fneg     f0, f1
	lfs      f28, 8(r31)
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	fmuls    f1, f1, f23
	add      r6, r23, r0
	lfs      f27, 0xc(r31)
	lfs      f26, 0x10(r31)
	fmuls    f0, f0, f24
	lfs      f4, 0(r6)
	lfs      f5, 4(r6)
	fmuls    f3, f0, f4
	stfs     f29, 0x18(r1)
	fmuls    f2, f0, f5
	stfs     f0, 0x14(r1)
	fmuls    f4, f1, f4
	fmuls    f0, f1, f5
	stfs     f29, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stfs     f29, 0x24(r1)
	stfs     f29, 0x28(r1)
	stfs     f2, 0x14(r1)
	stfs     f29, 0x18(r1)
	stfs     f3, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stfs     f29, 0x24(r1)
	stfs     f4, 0x28(r1)
	lwz      r0, 0x200(r27)
	slwi     r0, r0, 2
	lwzx     r12, r24, r0
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lfs      f0, 0xc(r1)
	fmuls    f2, f1, f1
	lfs      f3, 0x10(r1)
	fmuls    f1, f0, f0
	lfs      f0, 0(r25)
	fmuls    f3, f3, f3
	fmuls    f4, f30, f0
	fadds    f0, f2, f1
	fadds    f5, f3, f0
	fcmpo    cr0, f5, f4
	cror     2, 0, 2
	bne      lbl_8008E1E8
	lfs      f1, lbl_80516B50@sda21(r2)
	lfs      f0, lbl_80516B4C@sda21(r2)
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	b        lbl_8008E24C

lbl_8008E1E8:
	fcmpo    cr0, f5, f4
	cror     2, 0, 2
	beq      lbl_8008E24C
	lfs      f0, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f5, f0
	cror     2, 0, 2
	bne      lbl_8008E208
	b        lbl_8008E228

lbl_8008E208:
	frsqrte  f3, f5
	lfs      f2, lbl_80516B48@sda21(r2)
	lfs      f0, lbl_80516B6C@sda21(r2)
	frsp     f3, f3
	fmuls    f1, f3, f3
	fmuls    f2, f2, f3
	fnmsubs  f0, f5, f1, f0
	fmuls    f5, f2, f0

lbl_8008E228:
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	fmuls    f2, f2, f5
	fmuls    f1, f1, f5
	fmuls    f0, f0, f5
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)

lbl_8008E24C:
	lfs      f4, 0x54(r22)
	lfs      f6, 0x10(r1)
	lfs      f0, 0(r25)
	fmuls    f1, f4, f6
	lfs      f5, 0xc(r1)
	lfs      f3, 0x5c(r22)
	fmuls    f8, f30, f0
	lfs      f2, 8(r1)
	fmuls    f0, f3, f5
	fmsubs   f1, f3, f2, f1
	lfs      f7, 0x58(r22)
	fmuls    f2, f7, f2
	fmuls    f3, f1, f1
	fmsubs   f0, f7, f6, f0
	fmsubs   f2, f4, f5, f2
	fmadds   f3, f0, f0, f3
	fmadds   f7, f2, f2, f3
	fcmpo    cr0, f7, f8
	cror     2, 0, 2
	bne      lbl_8008E2AC
	lfs      f1, lbl_80516B50@sda21(r2)
	lfs      f0, lbl_80516B4C@sda21(r2)
	fmr      f2, f1
	b        lbl_8008E2F8

lbl_8008E2AC:
	fcmpo    cr0, f7, f8
	cror     2, 0, 2
	beq      lbl_8008E2F8
	lfs      f3, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f7, f3
	cror     2, 0, 2
	bne      lbl_8008E2CC
	b        lbl_8008E2EC

lbl_8008E2CC:
	frsqrte  f6, f7
	lfs      f5, lbl_80516B48@sda21(r2)
	lfs      f3, lbl_80516B6C@sda21(r2)
	frsp     f6, f6
	fmuls    f4, f6, f6
	fmuls    f5, f5, f6
	fnmsubs  f3, f7, f4, f3
	fmuls    f7, f5, f3

lbl_8008E2EC:
	fmuls    f0, f0, f7
	fmuls    f1, f1, f7
	fmuls    f2, f2, f7

lbl_8008E2F8:
	lfs      f7, 0x10(r1)
	lfs      f6, 8(r1)
	fmuls    f3, f7, f1
	lfs      f8, 0xc(r1)
	fmuls    f4, f6, f2
	fmuls    f5, f8, f0
	fmsubs   f3, f8, f2, f3
	fmsubs   f4, f7, f0, f4
	fmsubs   f5, f6, f1, f5
	stfs     f3, 0x54(r22)
	stfs     f4, 0x58(r22)
	stfs     f5, 0x5c(r22)
	lfs      f4, 0x54(r22)
	lfs      f3, 0x58(r22)
	fmuls    f5, f4, f4
	lfs      f6, 0x5c(r22)
	fmuls    f4, f3, f3
	lfs      f3, 0(r25)
	fmuls    f6, f6, f6
	fmuls    f3, f30, f3
	fadds    f4, f5, f4
	fadds    f7, f6, f4
	fcmpo    cr0, f7, f3
	cror     2, 0, 2
	beq      lbl_8008E3B4
	lfs      f3, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f7, f3
	cror     2, 0, 2
	bne      lbl_8008E370
	b        lbl_8008E390

lbl_8008E370:
	frsqrte  f6, f7
	lfs      f5, lbl_80516B48@sda21(r2)
	lfs      f3, lbl_80516B6C@sda21(r2)
	frsp     f6, f6
	fmuls    f4, f6, f6
	fmuls    f5, f5, f6
	fnmsubs  f3, f7, f4, f3
	fmuls    f7, f5, f3

lbl_8008E390:
	lfs      f3, 0x54(r22)
	fmuls    f3, f3, f7
	stfs     f3, 0x54(r22)
	lfs      f3, 0x58(r22)
	fmuls    f3, f3, f7
	stfs     f3, 0x58(r22)
	lfs      f3, 0x5c(r22)
	fmuls    f3, f3, f7
	stfs     f3, 0x5c(r22)

lbl_8008E3B4:
	lfs      f4, 8(r1)
	addi     r4, r1, 0x14
	stfs     f0, 0x2c(r1)
	mr       r5, r4
	lfs      f3, 0xc(r1)
	addi     r3, r1, 0x2c
	stfs     f4, 0x30(r1)
	li       r6, 2
	lfs      f0, 0x10(r1)
	lfs      f4, 0x54(r22)
	stfs     f4, 0x34(r1)
	stfs     f29, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f3, 0x40(r1)
	lfs      f1, 0x58(r22)
	stfs     f1, 0x44(r1)
	stfs     f29, 0x48(r1)
	stfs     f2, 0x4c(r1)
	stfs     f0, 0x50(r1)
	lfs      f0, 0x5c(r22)
	stfs     f0, 0x54(r1)
	stfs     f29, 0x58(r1)
	bl       PSMTXMultVecArraySR
	lfs      f0, 0x14(r1)
	mr       r12, r28
	mr       r3, r31
	fadds    f0, f0, f28
	stfs     f0, -0x8000(r26)
	lfs      f0, 0x18(r1)
	fadds    f0, f0, f27
	stfs     f0, -0x8000(r26)
	lfs      f0, 0x1c(r1)
	fadds    f0, f0, f26
	stfs     f0, -0x8000(r26)
	stfs     f29, -0x8000(r26)
	stfs     f25, -0x8000(r26)
	lfs      f0, 0x20(r1)
	fadds    f0, f0, f28
	stfs     f0, -0x8000(r26)
	lfs      f0, 0x24(r1)
	fadds    f0, f0, f27
	stfs     f0, -0x8000(r26)
	lfs      f0, 0x28(r1)
	fadds    f0, f0, f26
	stfs     f0, -0x8000(r26)
	stfs     f22, -0x8000(r26)
	stfs     f25, -0x8000(r26)
	mtctr    r12
	bctrl
	fadds    f25, f25, f31
	mr       r31, r3

lbl_8008E480:
	cmplwi   r31, 0
	bne      lbl_8008E104
	fmr      f25, f19
	clrlwi   r5, r30, 0x10
	li       r3, 0x98
	li       r4, 1
	bl       GXBegin
	lis      r5, sincosTable___5JMath@ha
	lis      r4, p_direction@ha
	lis      r3, __float_epsilon@ha
	lfs      f24, lbl_80516B50@sda21(r2)
	lfs      f23, lbl_80516B68@sda21(r2)
	mr       r23, r29
	lfs      f22, lbl_80516B4C@sda21(r2)
	addi     r26, r5, sincosTable___5JMath@l
	addi     r31, r4, p_direction@l
	addi     r30, r3, __float_epsilon@l
	lis      r29, 0xcc01
	b        lbl_8008E84C

lbl_8008E4CC:
	stw      r23, 0x1e8(r27)
	addi     r22, r23, 8
	mr       r3, r27
	addi     r5, r1, 8
	lhz      r0, 0x90(r23)
	mr       r4, r22
	lfs      f1, 0x6c(r23)
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	lfs      f26, 8(r23)
	fneg     f0, f1
	add      r6, r26, r0
	lfs      f2, 0(r6)
	fmuls    f1, f1, f21
	lfs      f3, 4(r6)
	fneg     f5, f2
	fmuls    f0, f0, f20
	lfs      f27, 0xc(r23)
	lfs      f28, 0x10(r23)
	fmuls    f4, f1, f3
	stfs     f24, 0x18(r1)
	fmuls    f3, f0, f3
	fmuls    f2, f0, f5
	stfs     f0, 0x14(r1)
	fmuls    f0, f1, f5
	stfs     f24, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stfs     f24, 0x24(r1)
	stfs     f24, 0x28(r1)
	stfs     f2, 0x14(r1)
	stfs     f24, 0x18(r1)
	stfs     f3, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stfs     f24, 0x24(r1)
	stfs     f4, 0x28(r1)
	lwz      r0, 0x200(r27)
	slwi     r0, r0, 2
	lwzx     r12, r31, r0
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lfs      f0, 0xc(r1)
	fmuls    f2, f1, f1
	lfs      f3, 0x10(r1)
	fmuls    f1, f0, f0
	lfs      f0, 0(r30)
	fmuls    f3, f3, f3
	fmuls    f4, f23, f0
	fadds    f0, f2, f1
	fadds    f5, f3, f0
	fcmpo    cr0, f5, f4
	cror     2, 0, 2
	bne      lbl_8008E5B4
	lfs      f1, lbl_80516B50@sda21(r2)
	lfs      f0, lbl_80516B4C@sda21(r2)
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	b        lbl_8008E618

lbl_8008E5B4:
	fcmpo    cr0, f5, f4
	cror     2, 0, 2
	beq      lbl_8008E618
	lfs      f0, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f5, f0
	cror     2, 0, 2
	bne      lbl_8008E5D4
	b        lbl_8008E5F4

lbl_8008E5D4:
	frsqrte  f3, f5
	lfs      f2, lbl_80516B48@sda21(r2)
	lfs      f0, lbl_80516B6C@sda21(r2)
	frsp     f3, f3
	fmuls    f1, f3, f3
	fmuls    f2, f2, f3
	fnmsubs  f0, f5, f1, f0
	fmuls    f5, f2, f0

lbl_8008E5F4:
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	fmuls    f2, f2, f5
	fmuls    f1, f1, f5
	fmuls    f0, f0, f5
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)

lbl_8008E618:
	lfs      f4, 0x54(r22)
	lfs      f6, 0x10(r1)
	lfs      f0, 0(r30)
	fmuls    f1, f4, f6
	lfs      f5, 0xc(r1)
	lfs      f3, 0x5c(r22)
	fmuls    f8, f23, f0
	lfs      f2, 8(r1)
	fmuls    f0, f3, f5
	fmsubs   f1, f3, f2, f1
	lfs      f7, 0x58(r22)
	fmuls    f2, f7, f2
	fmuls    f3, f1, f1
	fmsubs   f0, f7, f6, f0
	fmsubs   f2, f4, f5, f2
	fmadds   f3, f0, f0, f3
	fmadds   f7, f2, f2, f3
	fcmpo    cr0, f7, f8
	cror     2, 0, 2
	bne      lbl_8008E678
	lfs      f1, lbl_80516B50@sda21(r2)
	lfs      f0, lbl_80516B4C@sda21(r2)
	fmr      f2, f1
	b        lbl_8008E6C4

lbl_8008E678:
	fcmpo    cr0, f7, f8
	cror     2, 0, 2
	beq      lbl_8008E6C4
	lfs      f3, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f7, f3
	cror     2, 0, 2
	bne      lbl_8008E698
	b        lbl_8008E6B8

lbl_8008E698:
	frsqrte  f6, f7
	lfs      f5, lbl_80516B48@sda21(r2)
	lfs      f3, lbl_80516B6C@sda21(r2)
	frsp     f6, f6
	fmuls    f4, f6, f6
	fmuls    f5, f5, f6
	fnmsubs  f3, f7, f4, f3
	fmuls    f7, f5, f3

lbl_8008E6B8:
	fmuls    f0, f0, f7
	fmuls    f1, f1, f7
	fmuls    f2, f2, f7

lbl_8008E6C4:
	lfs      f7, 0x10(r1)
	lfs      f6, 8(r1)
	fmuls    f3, f7, f1
	lfs      f8, 0xc(r1)
	fmuls    f4, f6, f2
	fmuls    f5, f8, f0
	fmsubs   f3, f8, f2, f3
	fmsubs   f4, f7, f0, f4
	fmsubs   f5, f6, f1, f5
	stfs     f3, 0x54(r22)
	stfs     f4, 0x58(r22)
	stfs     f5, 0x5c(r22)
	lfs      f4, 0x54(r22)
	lfs      f3, 0x58(r22)
	fmuls    f5, f4, f4
	lfs      f6, 0x5c(r22)
	fmuls    f4, f3, f3
	lfs      f3, 0(r30)
	fmuls    f6, f6, f6
	fmuls    f3, f23, f3
	fadds    f4, f5, f4
	fadds    f7, f6, f4
	fcmpo    cr0, f7, f3
	cror     2, 0, 2
	beq      lbl_8008E780
	lfs      f3, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f7, f3
	cror     2, 0, 2
	bne      lbl_8008E73C
	b        lbl_8008E75C

lbl_8008E73C:
	frsqrte  f6, f7
	lfs      f5, lbl_80516B48@sda21(r2)
	lfs      f3, lbl_80516B6C@sda21(r2)
	frsp     f6, f6
	fmuls    f4, f6, f6
	fmuls    f5, f5, f6
	fnmsubs  f3, f7, f4, f3
	fmuls    f7, f5, f3

lbl_8008E75C:
	lfs      f3, 0x54(r22)
	fmuls    f3, f3, f7
	stfs     f3, 0x54(r22)
	lfs      f3, 0x58(r22)
	fmuls    f3, f3, f7
	stfs     f3, 0x58(r22)
	lfs      f3, 0x5c(r22)
	fmuls    f3, f3, f7
	stfs     f3, 0x5c(r22)

lbl_8008E780:
	lfs      f4, 8(r1)
	addi     r4, r1, 0x14
	stfs     f0, 0x2c(r1)
	mr       r5, r4
	lfs      f3, 0xc(r1)
	addi     r3, r1, 0x2c
	stfs     f4, 0x30(r1)
	li       r6, 2
	lfs      f0, 0x10(r1)
	lfs      f4, 0x54(r22)
	stfs     f4, 0x34(r1)
	stfs     f24, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f3, 0x40(r1)
	lfs      f1, 0x58(r22)
	stfs     f1, 0x44(r1)
	stfs     f24, 0x48(r1)
	stfs     f2, 0x4c(r1)
	stfs     f0, 0x50(r1)
	lfs      f0, 0x5c(r22)
	stfs     f0, 0x54(r1)
	stfs     f24, 0x58(r1)
	bl       PSMTXMultVecArraySR
	lfs      f0, 0x14(r1)
	mr       r12, r28
	mr       r3, r23
	fadds    f0, f0, f26
	stfs     f0, -0x8000(r29)
	lfs      f0, 0x18(r1)
	fadds    f0, f0, f27
	stfs     f0, -0x8000(r29)
	lfs      f0, 0x1c(r1)
	fadds    f0, f0, f28
	stfs     f0, -0x8000(r29)
	stfs     f24, -0x8000(r29)
	stfs     f25, -0x8000(r29)
	lfs      f0, 0x20(r1)
	fadds    f0, f0, f26
	stfs     f0, -0x8000(r29)
	lfs      f0, 0x24(r1)
	fadds    f0, f0, f27
	stfs     f0, -0x8000(r29)
	lfs      f0, 0x28(r1)
	fadds    f0, f0, f28
	stfs     f0, -0x8000(r29)
	stfs     f22, -0x8000(r29)
	stfs     f25, -0x8000(r29)
	mtctr    r12
	bctrl
	fadds    f25, f25, f31
	mr       r23, r3

lbl_8008E84C:
	cmplwi   r23, 0
	bne      lbl_8008E4CC
	li       r3, 9
	li       r4, 2
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 2
	bl       GXSetVtxDesc

lbl_8008E86C:
	psq_l    f31, 344(r1), 0, qr0
	lfd      f31, 0x150(r1)
	psq_l    f30, 328(r1), 0, qr0
	lfd      f30, 0x140(r1)
	psq_l    f29, 312(r1), 0, qr0
	lfd      f29, 0x130(r1)
	psq_l    f28, 296(r1), 0, qr0
	lfd      f28, 0x120(r1)
	psq_l    f27, 280(r1), 0, qr0
	lfd      f27, 0x110(r1)
	psq_l    f26, 264(r1), 0, qr0
	lfd      f26, 0x100(r1)
	psq_l    f25, 248(r1), 0, qr0
	lfd      f25, 0xf0(r1)
	psq_l    f24, 232(r1), 0, qr0
	lfd      f24, 0xe0(r1)
	psq_l    f23, 216(r1), 0, qr0
	lfd      f23, 0xd0(r1)
	psq_l    f22, 200(r1), 0, qr0
	lfd      f22, 0xc0(r1)
	psq_l    f21, 184(r1), 0, qr0
	lfd      f21, 0xb0(r1)
	psq_l    f20, 168(r1), 0, qr0
	lfd      f20, 0xa0(r1)
	psq_l    f19, 152(r1), 0, qr0
	lfd      f19, 0x90(r1)
	lmw      r22, 0x68(r1)
	lwz      r0, 0x164(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
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
	GXColor* color_table = (GXColor*)JKRAllocFromHeap(heap, (size + 1) * 4, 4);

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
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  extsh     r6, r6
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  addi      r31, r6, 0x1
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  rlwinm    r3,r31,2,0,29
	  stw       r29, 0x34(r1)
	  mr        r29, r5
	  mr        r5, r7
	  stw       r28, 0x30(r1)
	  mr        r28, r4
	  li        r4, 0x4
	  bl        -0x6B3C8
	  lbz       r7, 0x3(r28)
	  lis       r10, 0x4330
	  lfs       f6, -0x7810(r2)
	  mr        r4, r28
	  lbz       r9, 0x4(r28)
	  mr        r5, r3
	  stw       r7, 0x14(r1)
	  fmr       f5, f6
	  lbz       r0, 0x2(r28)
	  fmr       f3, f6
	  stw       r10, 0x10(r1)
	  fmr       f4, f6
	  lbz       r8, 0x5(r28)
	  stw       r0, 0xC(r1)
	  rlwinm    r0,r29,0,24,31
	  lfd       f2, -0x7808(r2)
	  li        r6, 0
	  lfd       f1, 0x10(r1)
	  li        r7, 0
	  stw       r10, 0x8(r1)
	  fsubs     f7, f1, f2
	  lfd       f0, 0x8(r1)
	  stw       r9, 0x1C(r1)
	  fsubs     f0, f0, f2
	  stw       r10, 0x18(r1)
	  lfd       f1, 0x18(r1)
	  stw       r8, 0x24(r1)
	  fsubs     f8, f1, f2
	  stw       r10, 0x20(r1)
	  lfd       f1, 0x20(r1)
	  fsubs     f9, f1, f2
	  b         .loc_0x254

	.loc_0xC0:
	  lha       r8, 0x0(r4)
	  extsh     r9, r7
	  cmpw      r9, r8
	  bne-      .loc_0x1FC
	  lbz       r10, 0x3(r4)
	  lis       r12, 0x4330
	  lbz       r11, 0x2(r4)
	  addi      r6, r6, 0x1
	  lbz       r9, 0x4(r4)
	  cmpw      r6, r0
	  stw       r10, 0x1C(r1)
	  lbz       r8, 0x5(r4)
	  addi      r4, r4, 0x6
	  stw       r12, 0x18(r1)
	  lfd       f5, -0x7808(r2)
	  lfd       f1, 0x18(r1)
	  stb       r11, 0x0(r5)
	  fsubs     f7, f1, f5
	  stb       r10, 0x1(r5)
	  stb       r9, 0x2(r5)
	  stw       r9, 0x14(r1)
	  stw       r12, 0x10(r1)
	  lfd       f1, 0x10(r1)
	  stw       r11, 0x24(r1)
	  fsubs     f8, f1, f5
	  stw       r12, 0x20(r1)
	  lfd       f0, 0x20(r1)
	  stw       r8, 0xC(r1)
	  fsubs     f0, f0, f5
	  stw       r12, 0x8(r1)
	  lfd       f1, 0x8(r1)
	  stb       r8, 0x3(r5)
	  fsubs     f9, f1, f5
	  bge-      .loc_0x1E8
	  lha       r9, -0x6(r4)
	  lha       r8, 0x0(r4)
	  lbz       r11, 0x2(r4)
	  sub       r8, r8, r9
	  lbz       r10, 0x3(r4)
	  xoris     r8, r8, 0x8000
	  stw       r12, 0x20(r1)
	  lbz       r9, 0x4(r4)
	  stw       r8, 0x24(r1)
	  lfd       f2, -0x7820(r2)
	  lfd       f1, 0x20(r1)
	  lfs       f3, -0x7814(r2)
	  fsubs     f1, f1, f2
	  lbz       r8, 0x5(r4)
	  stw       r11, 0x1C(r1)
	  fdivs     f6, f3, f1
	  stw       r12, 0x18(r1)
	  lfd       f2, 0x18(r1)
	  stw       r10, 0x14(r1)
	  stw       r12, 0x10(r1)
	  lfd       f1, 0x10(r1)
	  fsubs     f3, f2, f5
	  stw       r9, 0xC(r1)
	  fsubs     f2, f1, f5
	  stw       r12, 0x8(r1)
	  fsubs     f4, f3, f0
	  lfd       f1, 0x8(r1)
	  fsubs     f3, f2, f7
	  stw       r8, 0x2C(r1)
	  fsubs     f2, f1, f5
	  stw       r12, 0x28(r1)
	  fmuls     f4, f6, f4
	  fmuls     f3, f6, f3
	  lfd       f1, 0x28(r1)
	  fsubs     f2, f2, f8
	  fsubs     f1, f1, f5
	  fmuls     f5, f6, f2
	  fsubs     f1, f1, f9
	  fmuls     f6, f6, f1
	  b         .loc_0x24C

	.loc_0x1E8:
	  lfs       f6, -0x7810(r2)
	  fmr       f5, f6
	  fmr       f3, f6
	  fmr       f4, f6
	  b         .loc_0x24C

	.loc_0x1FC:
	  fadds     f0, f0, f4
	  fadds     f7, f7, f3
	  fadds     f8, f8, f5
	  fctiwz    f2, f0
	  fctiwz    f1, f7
	  fadds     f9, f9, f6
	  stfd      f2, 0x28(r1)
	  fctiwz    f2, f8
	  stfd      f1, 0x20(r1)
	  fctiwz    f1, f9
	  lwz       r8, 0x2C(r1)
	  stfd      f2, 0x18(r1)
	  lwz       r9, 0x24(r1)
	  stb       r8, 0x0(r5)
	  lwz       r8, 0x1C(r1)
	  stb       r9, 0x1(r5)
	  stfd      f1, 0x10(r1)
	  stb       r8, 0x2(r5)
	  lwz       r8, 0x14(r1)
	  stb       r8, 0x3(r5)

	.loc_0x24C:
	  addi      r5, r5, 0x4
	  addi      r7, r7, 0x1

	.loc_0x254:
	  extsh     r8, r7
	  cmpw      r8, r31
	  blt+      .loc_0xC0
	  stw       r3, 0x0(r30)
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/**
 * @note Address: 0x8008EBF0
 * @note Size: 0x114
 */
JPABaseShape::JPABaseShape(const u8* data, JKRHeap* heap)
{
	mData = (const JPABaseShapeData*)data;

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
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r4, 0(r28)
	lis      r3, jpa_dl@ha
	addi     r31, r3, jpa_dl@l
	lhz      r0, 0x18(r4)
	addi     r3, r31, 0x80
	lwz      r9, 8(r4)
	addi     r7, r31, 0x8c
	rlwinm   r8, r0, 2, 0x1c, 0x1d
	rlwinm   r4, r0, 0, 0x1a, 0x1d
	rlwinm   r5, r0, 0x1c, 0x1a, 0x1d
	rlwinm   r10, r9, 0x15, 0x19, 0x1b
	addi     r30, r31, 0x124
	addi     r6, r31, 0xb4
	rlwinm   r0, r0, 0x18, 0x1a, 0x1d
	rlwinm   r9, r9, 0x12, 0x1b, 0x1b
	addi     r29, r31, 0x184
	lwzx     r3, r3, r8
	lwzx     r4, r7, r4
	add      r30, r30, r10
	lwzx     r5, r7, r5
	add      r29, r29, r9
	lwzx     r6, r6, r0
	bl       GXSetBlendMode
	lwz      r3, 0(r28)
	addi     r4, r31, 0xf4
	lbz      r5, 0x1d(r3)
	rlwinm   r0, r5, 1, 0x1b, 0x1d
	clrlwi   r3, r5, 0x1f
	lwzx     r4, r4, r0
	rlwinm   r5, r5, 0x1c, 0x1f, 0x1f
	bl       GXSetZMode
	lwz      r8, 0(r28)
	addi     r7, r31, 0xf4
	addi     r5, r31, 0x114
	lbz      r0, 0x1a(r8)
	lbz      r4, 0x1b(r8)
	rlwinm   r3, r0, 2, 0x1b, 0x1d
	rlwinm   r6, r0, 0x1f, 0x1c, 0x1d
	rlwinm   r0, r0, 0x1d, 0x1b, 0x1d
	lwzx     r5, r5, r6
	lwzx     r3, r7, r3
	lwzx     r6, r7, r0
	lbz      r7, 0x1c(r8)
	bl       GXSetAlphaCompare
	lwz      r4, 0(r30)
	li       r3, 0
	lwz      r5, 4(r30)
	lwz      r6, 8(r30)
	lwz      r7, 0xc(r30)
	bl       GXSetTevColorIn
	lwz      r4, 0(r29)
	li       r3, 0
	lwz      r5, 4(r29)
	lwz      r6, 8(r29)
	lwz      r7, 0xc(r29)
	bl       GXSetTevAlphaIn
	li       r3, 0
	bl       GXSetTevDirect
	li       r3, 1
	bl       GXSetTevDirect
	lwz      r3, 0(r28)
	lbz      r0, 0x1d(r3)
	rlwinm   r3, r0, 0x1b, 0x1f, 0x1f
	bl       GXSetZCompLoc
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
