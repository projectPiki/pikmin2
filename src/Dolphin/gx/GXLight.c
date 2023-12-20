#include "Dolphin/gx.h"
#include "Dolphin/math.h"

/*
 * --INFO--
 * Address:	800E6870
 * Size:	00001C
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

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void GXInitLightAttnA(GXLightObj* obj, f32 a0, f32 a1, f32 a2)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void GXGetLightAttnA(GXLightObj* obj, f32* a0, f32* a1, f32* a2)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void GXInitLightAttnK(GXLightObj* obj, f32 k0, f32 k1, f32 k2)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void GXGetLightAttnK(GXLightObj* obj, f32* k0, f32* k1, f32* k2)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E688C
 * Size:	000190
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

/*
 * --INFO--
 * Address:	800E6A1C
 * Size:	0000D0
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

/*
 * --INFO--
 * Address:	800E6AEC
 * Size:	000010
 */
void GXInitLightPos(GXLightObj* obj, f32 x, f32 y, f32 z)
{
	GXLightObjPriv* pObj = (GXLightObjPriv*)obj;
	pObj->lpos[0]        = x;
	pObj->lpos[1]        = y;
	pObj->lpos[2]        = z;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void GXGetLightPos(GXLightObj* obj, f32* x, f32* y, f32* z)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E6AFC
 * Size:	00001C
 */
void GXInitLightDir(GXLightObj* obj, f32 nX, f32 nY, f32 nZ)
{
	GXLightObjPriv* pObj = (GXLightObjPriv*)obj;
	pObj->ldir[0]        = -nX;
	pObj->ldir[1]        = -nY;
	pObj->ldir[2]        = -nZ;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void GXGetLightDir(GXLightObj* obj, f32* nX, f32* nY, f32* nZ)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E6B18
 * Size:	0000E4
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

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void GXInitSpecularDirHA(GXLightObj* obj, f32 nX, f32 nY, f32 nZ, f32 hX, f32 hY, f32 hZ)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E6BFC
 * Size:	00000C
 */
void GXInitLightColor(GXLightObj* obj, GXColor color)
{
	GXLightObjPriv* pObj = (GXLightObjPriv*)obj;
	pObj->color          = color;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
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

/*
 * --INFO--
 * Address:	800E6C08
 * Size:	00007C
 */
void GXLoadLightObjImm(GXLightObj* obj, GXLightID light)
{
	u32 addr;
	u32 idx;
	GXLightObjPriv* pObj = (GXLightObjPriv*)obj;

	idx = 31 - __cntlzw(light);
	idx &= 7;

	addr = 0x600 + idx * 0x10;

	GX_WRITE_U8(16);
	GX_WRITE_U32(addr | (0x10 - 1) << 16);
	PushLight(pObj, (void*)GXFIFO_ADDR);
	__GXData->bpSentNot = 1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void GXLoadLightObjIndx(u32 objIndex, GXLightID light)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E6C84
 * Size:	0000F0
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

/*
 * --INFO--
 * Address:	800E6D74
 * Size:	0000F0
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

/*
 * --INFO--
 * Address:	800E6E64
 * Size:	00003C
 */
void GXSetNumChans(u8 count)
{
	GX_SET_REG(gx->genMode, count, 25, 27);
	GX_XF_LOAD_REG(GX_XF_REG_NUMCOLORS, count);
	gx->dirtyState |= GX_DIRTY_GEN_MODE;
}

/*
 * --INFO--
 * Address:	800E6EA0
 * Size:	0000B8
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

	// these lines do identical things. The first one is wrong, but wrangles the code
	/*filler*/ GX_SET_REG(reg, 0, GX_XF_CLR0CTRL_LMASKHI_ST, GX_XF_CLR0CTRL_LMASKHI_END);
	reg &= ~GX_REG_MASK(GX_XF_CLR0CTRL_LMASKHI_ST, GX_XF_CLR0CTRL_LMASKHI_END);

	GX_SET_REG(reg, mask, GX_XF_CLR0CTRL_LMASKHI_ST, GX_XF_CLR0CTRL_LMASKHI_END);

	reg &= ~GX_REG_MASK(GX_XF_CLR0CTRL_LMASKLO_ST, GX_XF_CLR0CTRL_LMASKLO_END);
	GX_SET_REG(reg, mask >> 4, GX_XF_CLR0CTRL_LMASKLO_ST, GX_XF_CLR0CTRL_LMASKLO_END);

	GX_XF_LOAD_REG(GX_XF_REG_COLOR0CNTRL + colorID, reg);

	if (channel == GX_COLOR0A0) {
		GX_XF_LOAD_REG(GX_XF_REG_ALPHA0CNTRL, reg);
	} else if (channel == GX_COLOR1A1) {
		GX_XF_LOAD_REG(GX_XF_REG_ALPHA1CNTRL, reg);
	}

	gx->bpSentNot = GX_TRUE;
	/*
	.loc_0x0:
	  rlwinm    r0,r4,0,24,31
	  li        r4, 0
	  rlwimi    r4,r0,1,30,30
	  addi      r10, r4, 0
	  rlwimi    r10,r6,0,31,31
	  cmpwi     r9, 0
	  rlwimi    r10,r5,6,25,25
	  rlwinm    r6,r3,0,30,31
	  bne-      .loc_0x28
	  li        r8, 0

	.loc_0x28:
	  subfic    r4, r9, 0x2
	  subic     r0, r4, 0x1
	  subfe     r5, r0, r4
	  neg       r4, r9
	  subic     r0, r4, 0x1
	  rlwimi    r10,r8,7,23,24
	  rlwimi    r10,r5,9,22,22
	  subfe     r0, r0, r4
	  rlwimi    r10,r0,10,21,21
	  addi      r0, r6, 0x100E
	  rlwinm    r6,r10,0,30,25
	  rlwimi    r6,r7,2,26,29
	  rlwinm    r6,r6,0,21,16
	  li        r5, 0x10
	  lis       r4, 0xCC01
	  stb       r5, -0x8000(r4)
	  rlwimi    r6,r7,7,17,20
	  cmpwi     r3, 0x4
	  stw       r0, -0x8000(r4)
	  stw       r6, -0x8000(r4)
	  bne-      .loc_0x90
	  stb       r5, -0x8000(r4)
	  li        r0, 0x1010
	  stw       r0, -0x8000(r4)
	  stw       r6, -0x8000(r4)
	  b         .loc_0xA8

	.loc_0x90:
	  cmpwi     r3, 0x5
	  bne-      .loc_0xA8
	  stb       r5, -0x8000(r4)
	  li        r0, 0x1011
	  stw       r0, -0x8000(r4)
	  stw       r6, -0x8000(r4)

	.loc_0xA8:
	  lwz       r3, -0x6D70(r2)
	  li        r0, 0x1
	  sth       r0, 0x2(r3)
	  blr
	*/
}
