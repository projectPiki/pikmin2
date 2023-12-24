#include "Dolphin/gx.h"
#include "math.h"

/**
 * @note Address: 0x800E6870
 * @note Size: 0x1C
 */
void GXInitLightAttn(GXLightObj* obj, f32 a0, f32 a1, f32 a2, f32 k0, f32 k1, f32 k2)
{
	GXLightObjPriv* pObj = (GXLightObjPriv*)obj;
	pObj->a[0]           = a0;
	pObj->a[1]           = a1;
	pObj->a[2]           = a2;

	pObj->k[0] = k0;
	pObj->k[1] = k1;
	pObj->k[2] = k2;
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void GXInitLightAttnA(GXLightObj* obj, f32 a0, f32 a1, f32 a2)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void GXGetLightAttnA(GXLightObj* obj, f32* a0, f32* a1, f32* a2)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void GXInitLightAttnK(GXLightObj* obj, f32 k0, f32 k1, f32 k2)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void GXGetLightAttnK(GXLightObj* obj, f32* k0, f32* k1, f32* k2)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E688C
 * @note Size: 0x190
 */
void GXInitLightSpot(GXLightObj* obj, f32 cutoff, GXSpotFn spotFunc)
{
	f32 a0, a1, a2, r, d, cr;
	GXLightObjPriv* pObj = (GXLightObjPriv*)obj;

	if (cutoff <= 0.0f || cutoff > 90.0f) {
		spotFunc = GX_SP_OFF;
	}

	r  = cutoff * PI / 180.0f;
	cr = cosf(r);

	switch (spotFunc) {
	case GX_SP_FLAT:
		a0 = -1000.0f * cr;
		a1 = 1000.0f;
		a2 = 0.0f;
		break;
	case GX_SP_COS:
		a1 = 1.0f / (1.0f - cr);
		a0 = -cr * a1;
		a2 = 0.0f;
		break;
	case GX_SP_COS2:
		a2 = 1.0f / (1.0f - cr);
		a0 = 0.0f;
		a1 = -cr * a2;
		break;
	case GX_SP_SHARP:
		d  = 1.0F / ((1.0F - cr) * (1.0F - cr));
		a0 = cr * (cr - 2.0F) * d;
		a1 = 2.0F * d;
		a2 = -d;
		break;
	case GX_SP_RING1:
		d  = 1.0f / ((1.0f - cr) * (1.0F - cr));
		a2 = -4.0f * d;
		a0 = a2 * cr;
		a1 = 4.0f * (1.0f + cr) * d;
		break;
	case GX_SP_RING2:
		d  = 1.0f / ((1.0f - cr) * (1.0F - cr));
		a0 = 1.0f - 2.0f * cr * cr * d;
		a1 = 4.0f * cr * d;
		a2 = -2.0f * d;
		break;
	case GX_SP_OFF:
	default:
		a0 = 1.0f;
		a1 = 0.0f;
		a2 = 0.0f;
		break;
	}

	pObj->a[0] = a0;
	pObj->a[1] = a1;
	pObj->a[2] = a2;
}

/**
 * @note Address: 0x800E6A1C
 * @note Size: 0xD0
 */
void GXInitLightDistAttn(GXLightObj* obj, f32 refDist, f32 refBrightness, GXDistAttnFn distFunc)
{
	f32 k0, k1, k2;
	GXLightObjPriv* pObj = (GXLightObjPriv*)obj;

	if (refDist < 0.0F) {
		distFunc = GX_DA_OFF;
	}

	if (refBrightness <= 0.0F || refBrightness >= 1.0F) {
		distFunc = GX_DA_OFF;
	}

	switch (distFunc) {
	case GX_DA_GENTLE:
		k0 = 1.0F;
		k1 = (1.0F - refBrightness) / (refBrightness * refDist);
		k2 = 0.0F;
		break;
	case GX_DA_MEDIUM:
		k0 = 1.0f;
		k1 = 0.5f * (1.0f - refBrightness) / (refBrightness * refDist);
		k2 = 0.5f * (1.0f - refBrightness) / (refBrightness * refDist * refDist);
		break;
	case GX_DA_STEEP:
		k0 = 1.0f;
		k1 = 0.0f;
		k2 = (1.0f - refBrightness) / (refBrightness * refDist * refDist);
		break;
	case GX_DA_OFF:
	default:
		k0 = 1.0f;
		k1 = 0.0f;
		k2 = 0.0f;
		break;
	}

	pObj->k[0] = k0;
	pObj->k[1] = k1;
	pObj->k[2] = k2;
}

/**
 * @note Address: 0x800E6AEC
 * @note Size: 0x10
 */
void GXInitLightPos(GXLightObj* obj, f32 x, f32 y, f32 z)
{
	GXLightObjPriv* pObj = (GXLightObjPriv*)obj;
	pObj->lpos[0]        = x;
	pObj->lpos[1]        = y;
	pObj->lpos[2]        = z;
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void GXGetLightPos(GXLightObj* obj, f32* x, f32* y, f32* z)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E6AFC
 * @note Size: 0x1C
 */
void GXInitLightDir(GXLightObj* obj, f32 nX, f32 nY, f32 nZ)
{
	GXLightObjPriv* pObj = (GXLightObjPriv*)obj;
	pObj->ldir[0]        = -nX;
	pObj->ldir[1]        = -nY;
	pObj->ldir[2]        = -nZ;
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
void GXGetLightDir(GXLightObj* obj, f32* nX, f32* nY, f32* nZ)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E6B18
 * @note Size: 0xE4
 */
void GXInitSpecularDir(GXLightObj* obj, f32 nX, f32 nY, f32 nZ)
{
	f32 mag;
	f32 vx, vy, vz;
	GXLightObjPriv* pObj = (GXLightObjPriv*)obj;

	vx  = -nX;
	vy  = -nY;
	vz  = (-nZ + 1.0F);
	mag = vx * vx + vy * vy + vz * vz;

	if (mag != 0.0f) {
		mag = 1.0f / dolsqrtf(mag);
	}

	pObj->ldir[0] = vx * mag;
	pObj->ldir[1] = vy * mag;
	pObj->ldir[2] = vz * mag;

	pObj->lpos[0] = nX * -GX_LARGE_NUMBER;
	pObj->lpos[1] = nY * -GX_LARGE_NUMBER;
	pObj->lpos[2] = nZ * -GX_LARGE_NUMBER;
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void GXInitSpecularDirHA(GXLightObj* obj, f32 nX, f32 nY, f32 nZ, f32 hX, f32 hY, f32 hZ)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E6BFC
 * @note Size: 0xC
 */
void GXInitLightColor(GXLightObj* obj, GXColor color)
{
	GXLightObjPriv* pObj = (GXLightObjPriv*)obj;
	pObj->color          = color;
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void GXGetLightColor(GXLightObj* obj, GXColor* color)
{
	// UNUSED FUNCTION
}

static inline void PushLight(const register GXLightObjPriv* lt_obj, register void* dest)
{
	register u32 zero, color;
	register f32 a0_a1, a2_k0, k1_k2;
	register f32 px_py, pz_dx, dy_dz;
#ifdef __MWERKS__ // clang-format off
	asm {
		lwz     color, 12(lt_obj)
		xor     zero, zero, zero
		psq_l   a0_a1, 16(lt_obj), 0, 0
		psq_l   a2_k0, 24(lt_obj), 0, 0
		psq_l   k1_k2, 32(lt_obj), 0, 0
		psq_l   px_py, 40(lt_obj), 0, 0
		psq_l   pz_dx, 48(lt_obj), 0, 0
		psq_l   dy_dz, 56(lt_obj), 0, 0

		stw     zero,  0(dest)
		stw     zero,  0(dest)
		stw     zero,  0(dest)
		stw     color, 0(dest)
		psq_st  a0_a1, 0(dest), 0, 0
		psq_st  a2_k0, 0(dest), 0, 0
		psq_st  k1_k2, 0(dest), 0, 0
		psq_st  px_py, 0(dest), 0, 0
		psq_st  pz_dx, 0(dest), 0, 0
		psq_st  dy_dz, 0(dest), 0, 0
	}
#endif // clang-format on
}

/**
 * @note Address: 0x800E6C08
 * @note Size: 0x7C
 */
void GXLoadLightObjImm(GXLightObj* obj, GXLightID light)
{
	u32 addr;
	u32 idx;
	GXLightObjPriv* pObj = (GXLightObjPriv*)obj;

	idx = 31 - __cntlzw(light);
	idx &= 7;

	addr = 0x600 + idx * 0x10;

	GX_XF_LOAD_REG_HDR(addr | (0x10 - 1) << 16);

	PushLight(pObj, (void*)GXFIFO_ADDR);
	__GXData->bpSentNot = 1;
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void GXLoadLightObjIndx(u32 objIndex, GXLightID light)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E6C84
 * @note Size: 0xF0
 */
void GXSetChanAmbColor(GXChannelID channel, GXColor color)
{
	u32 reg;
	u32 rgb;
	u32 colorID;
	u8 alpha;

	switch (channel) {
	case GX_COLOR0:
		rgb     = gx->ambColor[GX_COLOR0];
		reg     = GX_SET_TRUNC(GXCOLOR_AS_U32(color) & ~0xff, rgb, 24, 31);
		colorID = GX_COLOR0;
		break;
	case GX_COLOR1:
		rgb     = gx->ambColor[GX_COLOR1];
		reg     = GX_SET_TRUNC(GXCOLOR_AS_U32(color) & ~0xff, rgb, 24, 31);
		colorID = GX_COLOR1;
		break;
	case GX_ALPHA0:
		reg     = gx->ambColor[GX_COLOR0];
		reg     = GX_SET_TRUNC(reg, color.a, 24, 31);
		colorID = GX_COLOR0;
		break;
	case GX_ALPHA1:
		reg     = gx->ambColor[GX_COLOR1];
		reg     = GX_SET_TRUNC(reg, color.a, 24, 31);
		colorID = GX_COLOR1;
		break;
	case GX_COLOR0A0:
		reg     = GXCOLOR_AS_U32(color);
		colorID = GX_COLOR0;
		break;
	case GX_COLOR1A1:
		reg     = GXCOLOR_AS_U32(color);
		colorID = GX_COLOR1;
		break;
	default:
		return;
	}

	GX_XF_LOAD_REG(GX_XF_REG_AMBIENT0 + colorID, reg);
	gx->bpSentNot         = GX_TRUE;
	gx->ambColor[colorID] = reg;
}

/**
 * @note Address: 0x800E6D74
 * @note Size: 0xF0
 */
void GXSetChanMatColor(GXChannelID channel, GXColor color)
{
	u32 reg = 0;
	u32 rgb;
	GXChannelID colorID;

	switch (channel) {
	case GX_COLOR0:
		rgb     = gx->matColor[GX_COLOR0];
		reg     = GX_SET_TRUNC(GXCOLOR_AS_U32(color) & ~0xff, rgb, 24, 31);
		colorID = GX_COLOR0;
		break;
	case GX_COLOR1:
		rgb     = gx->matColor[GX_COLOR1];
		reg     = GX_SET_TRUNC(GXCOLOR_AS_U32(color) & ~0xff, rgb, 24, 31);
		colorID = GX_COLOR1;
		break;
	case GX_ALPHA0:
		reg     = gx->matColor[GX_COLOR0];
		reg     = GX_SET_TRUNC(reg, color.a, 24, 31);
		colorID = GX_COLOR0;
		break;
	case GX_ALPHA1:
		reg     = gx->matColor[GX_COLOR1];
		reg     = GX_SET_TRUNC(reg, color.a, 24, 31);
		colorID = GX_COLOR1;
		break;
	case GX_COLOR0A0:
		reg     = GXCOLOR_AS_U32(color);
		colorID = GX_COLOR0;
		break;
	case GX_COLOR1A1:
		reg     = GXCOLOR_AS_U32(color);
		colorID = GX_COLOR1;
		break;
	default:
		return;
	}

	GX_XF_LOAD_REG(GX_XF_REG_MATERIAL0 + colorID, reg);
	gx->bpSentNot         = GX_TRUE;
	gx->matColor[colorID] = reg;
}

/**
 * @note Address: 0x800E6E64
 * @note Size: 0x3C
 */
void GXSetNumChans(u8 count)
{
	GX_SET_REG(gx->genMode, count, 25, 27);
	GX_XF_LOAD_REG(GX_XF_REG_NUMCOLORS, count);
	gx->dirtyState |= GX_DIRTY_GEN_MODE;
}

/**
 * @note Address: 0x800E6EA0
 * @note Size: 0xB8
 */
void GXSetChanCtrl(GXChannelID channel, GXBool doEnable, GXColorSrc ambSrc, GXColorSrc matSrc, u32 mask, GXDiffuseFn diffFunc,
                   GXAttnFn attnFunc)
{
	const u32 colorID = (u32)channel & 0x3;
	u32 reg           = 0;

	GX_SET_REG(reg, doEnable, GX_XF_CLR0CTRL_LIGHT_ST, GX_XF_CLR0CTRL_LIGHT_END);
	GX_SET_REG(reg, matSrc, GX_XF_CLR0CTRL_MTXSRC_ST, GX_XF_CLR0CTRL_MTXSRC_END);
	GX_SET_REG(reg, ambSrc, GX_XF_CLR0CTRL_AMBSRC_ST, GX_XF_CLR0CTRL_AMBSRC_END);
	GX_SET_REG(reg, (attnFunc == GX_AF_SPEC ? GX_DF_NONE : diffFunc), GX_XF_CLR0CTRL_DIFATTN_ST, GX_XF_CLR0CTRL_DIFATTN_END);
	GX_SET_REG(reg, (attnFunc != GX_AF_NONE), GX_XF_CLR0CTRL_ATTNENABLE_ST, GX_XF_CLR0CTRL_ATTNENABLE_END);
	GX_SET_REG(reg, (attnFunc != GX_AF_SPEC), GX_XF_CLR0CTRL_ATTNSEL_ST, GX_XF_CLR0CTRL_ATTNSEL_END);

	// why are we unmasking bits we're about to overwrite?

	reg = (reg & ~(0xf << 2)) | ((mask & 0xf) << 2);

	reg = (reg & ~(0xf << 11)) | (((mask >> 4) & 0xf) << 11);

	GX_XF_LOAD_REG(GX_XF_REG_COLOR0CNTRL + colorID, reg);

	if (channel == GX_COLOR0A0) {
		GX_XF_LOAD_REG(GX_XF_REG_ALPHA0CNTRL, reg);
	} else if (channel == GX_COLOR1A1) {
		GX_XF_LOAD_REG(GX_XF_REG_ALPHA1CNTRL, reg);
	}

	gx->bpSentNot = GX_TRUE;
}
