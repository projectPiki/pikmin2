#include "Dolphin/gx.h"
#include "Dolphin/math.h"

#define GX_LARGE_NUMBER 1.0e+18f;

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
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0
	  stw       r30, 0x18(r1)
	  addi      r30, r3, 0
	  lfs       f0, -0x6D38(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x38
	  lfs       f0, -0x6D34(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x3C

	.loc_0x38:
	  li        r31, 0

	.loc_0x3C:
	  lfs       f2, -0x6D30(r2)
	  lfs       f0, -0x6D2C(r2)
	  fmuls     f1, f2, f1
	  fdivs     f1, f1, f0
	  bl        -0x16C40
	  cmplwi    r31, 0x6
	  bgt-      .loc_0x160
	  lis       r3, 0x804B
	  subi      r3, r3, 0x7AD0
	  rlwinm    r0,r31,2,0,29
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lfs       f0, -0x6D28(r2)
	  lfs       f4, -0x6D24(r2)
	  fmuls     f3, f0, f1
	  lfs       f6, -0x6D38(r2)
	  b         .loc_0x16C
	  lfs       f2, -0x6D20(r2)
	  fneg      f0, f1
	  lfs       f6, -0x6D38(r2)
	  fsubs     f1, f2, f1
	  fdivs     f1, f2, f1
	  fmr       f4, f1
	  fmuls     f3, f0, f1
	  b         .loc_0x16C
	  lfs       f2, -0x6D20(r2)
	  fneg      f0, f1
	  lfs       f3, -0x6D38(r2)
	  fsubs     f1, f2, f1
	  fdivs     f1, f2, f1
	  fmr       f6, f1
	  fmuls     f4, f0, f1
	  b         .loc_0x16C
	  lfs       f4, -0x6D20(r2)
	  lfs       f2, -0x6D1C(r2)
	  fsubs     f3, f4, f1
	  fsubs     f0, f1, f2
	  fmuls     f3, f3, f3
	  fmuls     f0, f1, f0
	  fdivs     f1, f4, f3
	  fmuls     f3, f1, f0
	  fmuls     f4, f2, f1
	  fneg      f6, f1
	  b         .loc_0x16C
	  lfs       f5, -0x6D20(r2)
	  lfs       f3, -0x6D18(r2)
	  fsubs     f4, f5, f1
	  lfs       f2, -0x6D14(r2)
	  fadds     f0, f5, f1
	  fmuls     f4, f4, f4
	  fmuls     f0, f2, f0
	  fdivs     f4, f5, f4
	  fmuls     f2, f3, f4
	  fmuls     f4, f0, f4
	  fmr       f6, f2
	  fmuls     f3, f2, f1
	  b         .loc_0x16C
	  lfs       f5, -0x6D20(r2)
	  lfs       f0, -0x6D1C(r2)
	  fsubs     f4, f5, f1
	  lfs       f2, -0x6D14(r2)
	  fmuls     f3, f0, f1
	  lfs       f0, -0x6D10(r2)
	  fmuls     f2, f2, f1
	  fmuls     f4, f4, f4
	  fmuls     f1, f3, f1
	  fdivs     f3, f5, f4
	  fmuls     f1, f3, f1
	  fmuls     f4, f2, f3
	  fmuls     f6, f0, f3
	  fsubs     f3, f5, f1
	  b         .loc_0x16C

	.loc_0x160:
	  lfs       f4, -0x6D38(r2)
	  lfs       f3, -0x6D20(r2)
	  fmr       f6, f4

	.loc_0x16C:
	  stfs      f3, 0x10(r30)
	  stfs      f4, 0x14(r30)
	  stfs      f6, 0x18(r30)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
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

	pObj->lpos[0] = vx * mag;
	pObj->lpos[1] = vy * mag;
	pObj->lpos[2] = vz * mag;

	pObj->ldir[0] = nX * -GX_LARGE_NUMBER;
	pObj->ldir[1] = nY * -GX_LARGE_NUMBER;
	pObj->ldir[2] = nZ * -GX_LARGE_NUMBER;
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  fneg      f0, f1
	  fneg      f4, f2
	  lfs       f5, -0x6D20(r2)
	  fmuls     f8, f0, f0
	  lfs       f6, -0x6D38(r2)
	  fsubs     f5, f5, f3
	  fmuls     f7, f4, f4
	  fmuls     f9, f5, f5
	  fadds     f7, f8, f7
	  fadds     f7, f9, f7
	  fcmpu     cr0, f6, f7
	  fmr       f10, f7
	  beq-      .loc_0xA8
	  fcmpo     cr0, f10, f6
	  ble-      .loc_0x9C
	  fsqrte    f7, f10
	  lfd       f9, -0x6D08(r2)
	  lfd       f8, -0x6D00(r2)
	  fmul      f6, f7, f7
	  fmul      f7, f9, f7
	  fmul      f6, f10, f6
	  fsub      f6, f8, f6
	  fmul      f7, f7, f6
	  fmul      f6, f7, f7
	  fmul      f7, f9, f7
	  fmul      f6, f10, f6
	  fsub      f6, f8, f6
	  fmul      f7, f7, f6
	  fmul      f6, f7, f7
	  fmul      f7, f9, f7
	  fmul      f6, f10, f6
	  fsub      f6, f8, f6
	  fmul      f6, f7, f6
	  fmul      f6, f10, f6
	  frsp      f6, f6
	  stfs      f6, 0x18(r1)
	  lfs       f7, 0x18(r1)
	  b         .loc_0xA0

	.loc_0x9C:
	  fmr       f7, f10

	.loc_0xA0:
	  lfs       f6, -0x6D20(r2)
	  fdivs     f10, f6, f7

	.loc_0xA8:
	  fmuls     f6, f0, f10
	  fmuls     f4, f4, f10
	  fmuls     f0, f5, f10
	  stfs      f6, 0x34(r3)
	  stfs      f4, 0x38(r3)
	  stfs      f0, 0x3C(r3)
	  lfs       f0, -0x6CF8(r2)
	  fmuls     f4, f0, f1
	  fmuls     f1, f0, f2
	  fmuls     f0, f0, f3
	  stfs      f4, 0x28(r3)
	  stfs      f1, 0x2C(r3)
	  stfs      f0, 0x30(r3)
	  addi      r1, r1, 0x20
	  blr
	*/
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

	asm
	{
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
	/*
	.loc_0x0:
	  cmpwi     r3, 0x3
	  beq-      .loc_0x88
	  bge-      .loc_0x24
	  cmpwi     r3, 0x1
	  beq-      .loc_0x50
	  bge-      .loc_0x6C
	  cmpwi     r3, 0
	  bge-      .loc_0x34
	  blr

	.loc_0x24:
	  cmpwi     r3, 0x5
	  beq-      .loc_0xAC
	  bgelr-
	  b         .loc_0xA0

	.loc_0x34:
	  lwz       r3, -0x6D70(r2)
	  li        r5, 0
	  lwz       r0, 0x0(r4)
	  lwz       r3, 0xA8(r3)
	  rlwinm    r7,r0,0,0,23
	  rlwimi    r7,r3,0,24,31
	  b         .loc_0xBC

	.loc_0x50:
	  lwz       r3, -0x6D70(r2)
	  li        r5, 0x1
	  lwz       r0, 0x0(r4)
	  lwz       r3, 0xAC(r3)
	  rlwinm    r7,r0,0,0,23
	  rlwimi    r7,r3,0,24,31
	  b         .loc_0xBC

	.loc_0x6C:
	  lwz       r3, -0x6D70(r2)
	  li        r5, 0
	  lbz       r0, 0x3(r4)
	  lwz       r3, 0xA8(r3)
	  rlwimi    r3,r0,0,24,31
	  addi      r7, r3, 0
	  b         .loc_0xBC

	.loc_0x88:
	  lwz       r3, -0x6D70(r2)
	  li        r5, 0x1
	  lbz       r0, 0x3(r4)
	  lwz       r7, 0xAC(r3)
	  rlwimi    r7,r0,0,24,31
	  b         .loc_0xBC

	.loc_0xA0:
	  lwz       r7, 0x0(r4)
	  li        r5, 0
	  b         .loc_0xBC

	.loc_0xAC:
	  lwz       r7, 0x0(r4)
	  li        r5, 0x1
	  b         .loc_0xBC
	  blr

	.loc_0xBC:
	  li        r0, 0x10
	  lwz       r4, -0x6D70(r2)
	  lis       r6, 0xCC01
	  stb       r0, -0x8000(r6)
	  addi      r3, r5, 0x100A
	  rlwinm    r0,r5,2,0,29
	  stw       r3, -0x8000(r6)
	  li        r5, 0x1
	  add       r3, r4, r0
	  stw       r7, -0x8000(r6)
	  sth       r5, 0x2(r4)
	  stw       r7, 0xA8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E6D74
 * Size:	0000F0
 */
void GXSetChanMatColor(GXChannelID channel, GXColor color)
{
	/*
	.loc_0x0:
	  cmpwi     r3, 0x3
	  beq-      .loc_0x88
	  bge-      .loc_0x24
	  cmpwi     r3, 0x1
	  beq-      .loc_0x50
	  bge-      .loc_0x6C
	  cmpwi     r3, 0
	  bge-      .loc_0x34
	  blr

	.loc_0x24:
	  cmpwi     r3, 0x5
	  beq-      .loc_0xAC
	  bgelr-
	  b         .loc_0xA0

	.loc_0x34:
	  lwz       r3, -0x6D70(r2)
	  li        r5, 0
	  lwz       r0, 0x0(r4)
	  lwz       r3, 0xB0(r3)
	  rlwinm    r7,r0,0,0,23
	  rlwimi    r7,r3,0,24,31
	  b         .loc_0xBC

	.loc_0x50:
	  lwz       r3, -0x6D70(r2)
	  li        r5, 0x1
	  lwz       r0, 0x0(r4)
	  lwz       r3, 0xB4(r3)
	  rlwinm    r7,r0,0,0,23
	  rlwimi    r7,r3,0,24,31
	  b         .loc_0xBC

	.loc_0x6C:
	  lwz       r3, -0x6D70(r2)
	  li        r5, 0
	  lbz       r0, 0x3(r4)
	  lwz       r3, 0xB0(r3)
	  rlwimi    r3,r0,0,24,31
	  addi      r7, r3, 0
	  b         .loc_0xBC

	.loc_0x88:
	  lwz       r3, -0x6D70(r2)
	  li        r5, 0x1
	  lbz       r0, 0x3(r4)
	  lwz       r7, 0xB4(r3)
	  rlwimi    r7,r0,0,24,31
	  b         .loc_0xBC

	.loc_0xA0:
	  lwz       r7, 0x0(r4)
	  li        r5, 0
	  b         .loc_0xBC

	.loc_0xAC:
	  lwz       r7, 0x0(r4)
	  li        r5, 0x1
	  b         .loc_0xBC
	  blr

	.loc_0xBC:
	  li        r0, 0x10
	  lwz       r4, -0x6D70(r2)
	  lis       r6, 0xCC01
	  stb       r0, -0x8000(r6)
	  addi      r3, r5, 0x100C
	  rlwinm    r0,r5,2,0,29
	  stw       r3, -0x8000(r6)
	  li        r5, 0x1
	  add       r3, r4, r0
	  stw       r7, -0x8000(r6)
	  sth       r5, 0x2(r4)
	  stw       r7, 0xB0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E6E64
 * Size:	00003C
 */
void GXSetNumChans(u8 count)
{
	/*
	.loc_0x0:
	  lwz       r6, -0x6D70(r2)
	  rlwinm    r5,r3,0,24,31
	  li        r4, 0x10
	  lwz       r0, 0x204(r6)
	  rlwimi    r0,r3,4,25,27
	  lis       r3, 0xCC01
	  stw       r0, 0x204(r6)
	  li        r0, 0x1009
	  stb       r4, -0x8000(r3)
	  stw       r0, -0x8000(r3)
	  stw       r5, -0x8000(r3)
	  lwz       r0, 0x5AC(r6)
	  ori       r0, r0, 0x4
	  stw       r0, 0x5AC(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E6EA0
 * Size:	0000B8
 */
void GXSetChanCtrl(GXChannelID channel, GXBool doEnable, GXColorSrc ambSrc, GXColorSrc matSrc, u32 mask, GXDiffuseFn diffFunc,
                   GXAttnFn attnFunc)
{
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
