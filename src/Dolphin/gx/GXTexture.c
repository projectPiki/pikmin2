#include "Dolphin/gx.h"

u8 GXTexMode0Ids[8]  = { 0x80, 0x81, 0x82, 0x83, 0xA0, 0xA1, 0xA2, 0xA3 };
u8 GXTexMode1Ids[8]  = { 0x84, 0x85, 0x86, 0x87, 0xA4, 0xA5, 0xA6, 0xA7 };
u8 GXTexImage0Ids[8] = { 0x88, 0x89, 0x8a, 0x8b, 0xA8, 0xA9, 0xAa, 0xAb };
u8 GXTexImage1Ids[8] = { 0x8c, 0x8d, 0x8e, 0x8f, 0xAc, 0xAd, 0xAe, 0xAf };
u8 GXTexImage2Ids[8] = { 0x90, 0x91, 0x92, 0x93, 0xB0, 0xB1, 0xB2, 0xB3 };
u8 GXTexImage3Ids[8] = { 0x94, 0x95, 0x96, 0x97, 0xB4, 0xB5, 0xB6, 0xB7 };
u8 GXTexTlutIds[8]   = { 0x98, 0x99, 0x9a, 0x9b, 0xB8, 0xB9, 0xBa, 0xBb };

u8 GX2HWFiltConv[6] = { 0x00, 0x04, 0x01, 0x05, 0x02, 0x06 };

#define GET_TILE_COUNT(a, b) (((a) + (1 << (b)) - 1) >> (b))

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
inline void __GXGetTexTileShift(u32 format, u32* widthTiles, u32* heightTiles)
{
	switch (format) {
	case 0x0:
	case 0x8:
	case 0xE:
	case 0x20:
	case 0x30:
		*widthTiles  = 3;
		*heightTiles = 3;
		break;
	case 0x1:
	case 0x2:
	case 0x9:
	case 0x11:
	case 0x22:
	case 0x27:
	case 0x28:
	case 0x29:
	case 0x2A:
	case 0x39:
	case 0x3A:
		*widthTiles  = 3;
		*heightTiles = 2;
		break;
	case 0x3:
	case 0x4:
	case 0x5:
	case 0x6:
	case 0xA:
	case 0x13:
	case 0x16:
	case 0x23:
	case 0x2B:
	case 0x2C:
	case 0x3C:
		*widthTiles  = 2;
		*heightTiles = 2;
		break;
	default:
		*heightTiles = 0;
		*widthTiles  = 0;
		break;
	}
}

/*
 * --INFO--
 * Address:	800E6F58
 * Size:	00015C
 */
u32 GXGetTexBufferSize(u16 width, u16 height, u32 format, GXBool mipmap, u8 max_lod)
{
	u32 widthTiles, heightTiles, iVar4, iVar6;
	__GXGetTexTileShift(format, &widthTiles, &heightTiles);

	if (format == 6 || format == 0x16) {
		iVar4 = 0x40;
	} else {
		iVar4 = 0x20;
	}

	if (mipmap == GX_TRUE) {
		int i;
		iVar6 = 0;
		for (i = max_lod; i > 0; i -= 1) {
			iVar6 += iVar4 * (GET_TILE_COUNT(width, widthTiles) * GET_TILE_COUNT(height, heightTiles));
			if (width == 1 && height == 1) {
				break;
			}

			if (width > 1) {
				width = width >> 1;
			} else {
				width = 1;
			}

			if (height > 1) {
				height = height >> 1;
			} else {
				height = 1;
			}
		}
	} else {
		iVar6 = iVar4 * (GET_TILE_COUNT(width, widthTiles) * GET_TILE_COUNT(height, heightTiles));
	}

	return iVar6;
	/*
	.loc_0x0:
	  stwu      r1, -0x28(r1)
	  cmplwi    r5, 0x3C
	  stw       r31, 0x24(r1)
	  bgt-      .loc_0x4C
	  lis       r8, 0x804B
	  subi      r8, r8, 0x7AB0
	  rlwinm    r0,r5,2,0,29
	  lwzx      r0, r8, r0
	  mtctr     r0
	  bctr
	  li        r0, 0x3
	  li        r8, 0x3
	  b         .loc_0x54
	  li        r0, 0x3
	  li        r8, 0x2
	  b         .loc_0x54
	  li        r0, 0x2
	  li        r8, 0x2
	  b         .loc_0x54

	.loc_0x4C:
	  li        r8, 0
	  li        r0, 0

	.loc_0x54:
	  cmplwi    r5, 0x6
	  beq-      .loc_0x64
	  cmplwi    r5, 0x16
	  bne-      .loc_0x6C

	.loc_0x64:
	  li        r5, 0x40
	  b         .loc_0x70

	.loc_0x6C:
	  li        r5, 0x20

	.loc_0x70:
	  rlwinm    r6,r6,0,24,31
	  cmplwi    r6, 0x1
	  bne-      .loc_0x118
	  rlwinm    r9,r7,0,24,31
	  li        r6, 0x1
	  mtctr     r9
	  slw       r7, r6, r8
	  slw       r6, r6, r0
	  cmplwi    r9, 0
	  subi      r10, r6, 0x1
	  subi      r7, r7, 0x1
	  li        r31, 0
	  ble-      .loc_0x14C

	.loc_0xA4:
	  rlwinm    r11,r3,0,16,31
	  add       r6, r11, r10
	  rlwinm    r12,r4,0,16,31
	  sraw      r9, r6, r0
	  add       r6, r12, r7
	  sraw      r6, r6, r8
	  mullw     r6, r9, r6
	  mullw     r6, r5, r6
	  cmplwi    r11, 0x1
	  add       r31, r31, r6
	  bne-      .loc_0xD8
	  cmplwi    r12, 0x1
	  beq-      .loc_0x14C

	.loc_0xD8:
	  rlwinm    r3,r3,0,16,31
	  cmplwi    r3, 0x1
	  ble-      .loc_0xEC
	  srawi     r6, r11, 0x1
	  b         .loc_0xF0

	.loc_0xEC:
	  li        r6, 0x1

	.loc_0xF0:
	  rlwinm    r3,r4,0,16,31
	  cmplwi    r3, 0x1
	  rlwinm    r3,r6,0,16,31
	  ble-      .loc_0x108
	  srawi     r4, r12, 0x1
	  b         .loc_0x10C

	.loc_0x108:
	  li        r4, 0x1

	.loc_0x10C:
	  rlwinm    r4,r4,0,16,31
	  bdnz+     .loc_0xA4
	  b         .loc_0x14C

	.loc_0x118:
	  li        r6, 0x1
	  slw       r7, r6, r0
	  slw       r6, r6, r8
	  rlwinm    r9,r3,0,16,31
	  subi      r3, r7, 0x1
	  add       r7, r9, r3
	  rlwinm    r4,r4,0,16,31
	  subi      r3, r6, 0x1
	  sraw      r6, r7, r0
	  add       r0, r4, r3
	  sraw      r0, r0, r8
	  mullw     r0, r6, r0
	  mullw     r31, r5, r0

	.loc_0x14C:
	  mr        r3, r31
	  lwz       r31, 0x24(r1)
	  addi      r1, r1, 0x28
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E70B4
 * Size:	0000C8
 */
void __GetImageTileCount(GXTexFmt format, u16 width, u16 height, u32* a, u32* b, u32* c)
{
	u32 widthTiles, heightTiles, var_r0;
	int var_r10;

	__GXGetTexTileShift(format, &widthTiles, &heightTiles);

	if (width <= 0) {
		width = 1;
	}

	if (height <= 0) {
		height = 1;
	}

	var_r10 = GX_TRUE;

	*a = GET_TILE_COUNT(width, widthTiles);
	*b = GET_TILE_COUNT(height, heightTiles);

	if (format != 6 && format != 0x16) {
		var_r10 = GX_FALSE;
	}

	if (var_r10 != 0) {
		var_r0 = 2;
	} else {
		var_r0 = 1;
	}

	*c = var_r0;
	/*
	.loc_0x0:
	  cmplwi    r3, 0x3C
	  bgt-      .loc_0x44
	  lis       r9, 0x804B
	  subi      r9, r9, 0x79BC
	  rlwinm    r0,r3,2,0,29
	  lwzx      r0, r9, r0
	  mtctr     r0
	  bctr
	  li        r11, 0x3
	  li        r12, 0x3
	  b         .loc_0x4C
	  li        r11, 0x3
	  li        r12, 0x2
	  b         .loc_0x4C
	  li        r11, 0x2
	  li        r12, 0x2
	  b         .loc_0x4C

	.loc_0x44:
	  li        r12, 0
	  li        r11, 0

	.loc_0x4C:
	  rlwinm.   r0,r4,0,16,31
	  bne-      .loc_0x58
	  li        r4, 0x1

	.loc_0x58:
	  rlwinm.   r0,r5,0,16,31
	  bne-      .loc_0x64
	  li        r5, 0x1

	.loc_0x64:
	  li        r10, 0x1
	  slw       r9, r10, r11
	  rlwinm    r4,r4,0,16,31
	  subi      r0, r9, 0x1
	  add       r0, r4, r0
	  sraw      r0, r0, r11
	  slw       r4, r10, r12
	  stw       r0, 0x0(r6)
	  rlwinm    r5,r5,0,16,31
	  subi      r0, r4, 0x1
	  add       r0, r5, r0
	  sraw      r0, r0, r12
	  cmpwi     r3, 0x6
	  stw       r0, 0x0(r7)
	  beq-      .loc_0xAC
	  cmpwi     r3, 0x16
	  beq-      .loc_0xAC
	  li        r10, 0

	.loc_0xAC:
	  cmpwi     r10, 0
	  beq-      .loc_0xBC
	  li        r0, 0x2
	  b         .loc_0xC0

	.loc_0xBC:
	  li        r0, 0x1

	.loc_0xC0:
	  stw       r0, 0x0(r8)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E717C
 * Size:	00024C
 */
void GXInitTexObj(GXTexObj* obj, void* imagePtr, u16 width, u16 height, GXTexFmt format, GXTexWrapMode sWrap, GXTexWrapMode tWrap,
                  GXBool useMIPmap)
{
	u32 imageBase;
	u16 a, b;
	u32 c, d;

	GXTexObjPriv* internal = (GXTexObjPriv*)obj;
	memset(internal, 0, sizeof(*internal));

	GX_SET_REG(internal->mode0, sWrap, 30, 31);
	GX_SET_REG(internal->mode0, tWrap, 28, 29);
	GX_SET_REG(internal->mode0, GX_TRUE, 27, 27);

	if (useMIPmap) {
		u32 maxDimSize;
		internal->flags |= 1;
		if (format == 8 || format == 9 || format == 10) {
			GX_SET_REG(internal->mode0, 5, 24, 26);
		} else {
			GX_SET_REG(internal->mode0, 6, 24, 26);
		}

		maxDimSize = width > height ? 31 - __cntlzw(width) : 31 - __cntlzw(height);

		GX_SET_REG(internal->mode1, (maxDimSize)*16.f, 16, 23);
	} else {
		GX_SET_REG(internal->mode0, 4, 24, 26);
	}

	internal->format = format;
	GX_SET_REG(internal->image0, width - 1, 22, 31);
	GX_SET_REG(internal->image0, height - 1, 12, 21);

	GX_SET_REG(internal->image0, format & 0xf, 8, 11);
	imageBase = (u32)imagePtr >> 5;
	GX_SET_REG(internal->image3, imageBase, 11, 31);

	switch (format & 0xf) {
	case 0:
	case 8:
		internal->loadFormat = 1;
		a                    = 3;
		b                    = 3;
		break;
	case 1:
	case 2:
	case 9:
		internal->loadFormat = 2;
		a                    = 3;
		b                    = 2;
		break;
	case 3:
	case 4:
	case 5:
	case 10:
		internal->loadFormat = 2;
		a                    = 2;
		b                    = 2;
		break;
	case 6:
		internal->loadFormat = 3;
		a                    = 2;
		b                    = 2;
		break;
	case 0xe:
		internal->loadFormat = 0;
		a                    = 3;
		b                    = 3;
		break;
	default:
		internal->loadFormat = 2;
		a                    = 2;
		b                    = 2;
		break;
	}

	internal->loadCount = (GET_TILE_COUNT(width, a) * GET_TILE_COUNT(height, b)) & 0x7fff;

	internal->flags |= 2;

	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x60(r1)
	  stmw      r24, 0x40(r1)
	  addi      r27, r4, 0
	  addi      r28, r5, 0
	  addi      r31, r3, 0
	  addi      r29, r6, 0
	  addi      r30, r7, 0
	  addi      r24, r8, 0
	  addi      r25, r9, 0
	  addi      r26, r10, 0
	  li        r4, 0
	  li        r5, 0x20
	  bl        -0xE2100
	  lwz       r3, 0x0(r31)
	  rlwimi    r3,r24,0,30,31
	  rlwinm.   r0,r26,0,24,31
	  stw       r3, 0x0(r31)
	  li        r3, 0x1
	  lwz       r0, 0x0(r31)
	  rlwimi    r0,r25,2,28,29
	  stw       r0, 0x0(r31)
	  lwz       r0, 0x0(r31)
	  rlwimi    r0,r3,4,27,27
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x108
	  lbz       r3, 0x1F(r31)
	  subi      r0, r30, 0x8
	  cmplwi    r0, 0x2
	  ori       r0, r3, 0x1
	  stb       r0, 0x1F(r31)
	  bgt-      .loc_0x98
	  lwz       r3, 0x0(r31)
	  li        r0, 0x5
	  rlwimi    r3,r0,5,24,26
	  stw       r3, 0x0(r31)
	  b         .loc_0xA8

	.loc_0x98:
	  lwz       r3, 0x0(r31)
	  li        r0, 0x6
	  rlwimi    r3,r0,5,24,26
	  stw       r3, 0x0(r31)

	.loc_0xA8:
	  rlwinm    r3,r28,0,16,31
	  rlwinm    r0,r29,0,16,31
	  cmplw     r3, r0
	  ble-      .loc_0xC4
	  cntlzw    r0, r3
	  subfic    r0, r0, 0x1F
	  b         .loc_0xCC

	.loc_0xC4:
	  cntlzw    r0, r0
	  subfic    r0, r0, 0x1F

	.loc_0xCC:
	  stw       r0, 0x3C(r1)
	  lis       r0, 0x4330
	  lfd       f1, -0x6CE8(r2)
	  stw       r0, 0x38(r1)
	  lfs       f2, -0x6CF0(r2)
	  lfd       f0, 0x38(r1)
	  lwz       r3, 0x4(r31)
	  fsubs     f0, f0, f1
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwimi    r3,r0,8,16,23
	  stw       r3, 0x4(r31)
	  b         .loc_0x118

	.loc_0x108:
	  lwz       r3, 0x0(r31)
	  li        r0, 0x4
	  rlwimi    r3,r0,5,24,26
	  stw       r3, 0x0(r31)

	.loc_0x118:
	  stw       r30, 0x14(r31)
	  rlwinm    r7,r28,0,16,31
	  rlwinm    r4,r30,0,28,31
	  subi      r0, r7, 0x1
	  lwz       r3, 0x8(r31)
	  rlwimi    r3,r0,0,22,31
	  stw       r3, 0x8(r31)
	  rlwinm    r5,r29,0,16,31
	  subi      r0, r5, 0x1
	  lwz       r3, 0x8(r31)
	  rlwimi    r3,r0,10,12,21
	  cmplwi    r4, 0xE
	  stw       r3, 0x8(r31)
	  lwz       r0, 0x8(r31)
	  rlwimi    r0,r30,20,8,11
	  stw       r0, 0x8(r31)
	  lwz       r0, 0xC(r31)
	  rlwimi    r0,r27,27,11,31
	  stw       r0, 0xC(r31)
	  bgt-      .loc_0x1E4
	  lis       r3, 0x804B
	  subi      r3, r3, 0x78C8
	  rlwinm    r0,r4,2,0,29
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r0, 0x1
	  stb       r0, 0x1E(r31)
	  li        r0, 0x3
	  li        r6, 0x3
	  b         .loc_0x1F4
	  li        r0, 0x2
	  stb       r0, 0x1E(r31)
	  li        r0, 0x3
	  li        r6, 0x2
	  b         .loc_0x1F4
	  li        r0, 0x2
	  stb       r0, 0x1E(r31)
	  li        r0, 0x2
	  li        r6, 0x2
	  b         .loc_0x1F4
	  li        r0, 0x3
	  stb       r0, 0x1E(r31)
	  li        r0, 0x2
	  li        r6, 0x2
	  b         .loc_0x1F4
	  li        r0, 0
	  stb       r0, 0x1E(r31)
	  li        r0, 0x3
	  li        r6, 0x3
	  b         .loc_0x1F4

	.loc_0x1E4:
	  li        r0, 0x2
	  stb       r0, 0x1E(r31)
	  li        r0, 0x2
	  li        r6, 0x2

	.loc_0x1F4:
	  rlwinm    r8,r0,0,16,31
	  li        r4, 0x1
	  slw       r3, r4, r8
	  rlwinm    r6,r6,0,16,31
	  subi      r0, r3, 0x1
	  slw       r3, r4, r6
	  add       r4, r7, r0
	  subi      r0, r3, 0x1
	  sraw      r3, r4, r8
	  add       r0, r5, r0
	  sraw      r0, r0, r6
	  mullw     r0, r3, r0
	  rlwinm    r0,r0,0,17,31
	  sth       r0, 0x1C(r31)
	  lbz       r0, 0x1F(r31)
	  ori       r0, r0, 0x2
	  stb       r0, 0x1F(r31)
	  lwz       r0, 0x64(r1)
	  lmw       r24, 0x40(r1)
	  addi      r1, r1, 0x60
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E73C8
 * Size:	000048
 */
void GXInitTexObjCI(GXTexObj* obj, void* imagePtr, u16 width, u16 height, GXCITexFmt format, GXTexWrapMode sWrap, GXTexWrapMode tWrap,
                    GXBool useMIPmap, u32 tlutName)
{
	GXTexObjPriv* internal = (GXTexObjPriv*)obj;

	GXInitTexObj(obj, imagePtr, width, height, format, sWrap, tWrap, useMIPmap);

	internal->flags &= ~2;
	internal->tlutName = tlutName;
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stw       r31, 0x2C(r1)
	  lwz       r31, 0x38(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  bl        -0x268
	  lbz       r0, 0x1F(r30)
	  rlwinm    r0,r0,0,31,29
	  stb       r0, 0x1F(r30)
	  stw       r31, 0x18(r30)
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E7410
 * Size:	000164
 */
void GXInitTexObjLOD(GXTexObj* obj, GXTexFilter minFilter, GXTexFilter maxFilter, f32 minLOD, f32 maxLOD, f32 lodBias, GXBool doBiasClamp,
                     GXBool doEdgeLOD, GXAnisotropy maxAniso)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  lfs       f0, -0x6CE0(r2)
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x18
	  fmr       f3, f0
	  b         .loc_0x2C

	.loc_0x18:
	  lfs       f0, -0x6CDC(r2)
	  fcmpo     cr0, f3, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x2C
	  lfs       f3, -0x6CD8(r2)

	.loc_0x2C:
	  lfs       f0, -0x6CD4(r2)
	  cmpwi     r5, 0x1
	  lwz       r5, 0x0(r3)
	  fmuls     f0, f0, f3
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwimi    r5,r0,9,15,22
	  stw       r5, 0x0(r3)
	  bne-      .loc_0x5C
	  li        r0, 0x1
	  b         .loc_0x60

	.loc_0x5C:
	  li        r0, 0

	.loc_0x60:
	  lwz       r5, 0x0(r3)
	  rlwimi    r5,r0,4,27,27
	  rlwinm.   r0,r7,0,24,31
	  stw       r5, 0x0(r3)
	  subi      r5, r13, 0x7CC8
	  lbzx      r0, r5, r4
	  lwz       r4, 0x0(r3)
	  rlwimi    r4,r0,5,24,26
	  stw       r4, 0x0(r3)
	  beq-      .loc_0x90
	  li        r4, 0
	  b         .loc_0x94

	.loc_0x90:
	  li        r4, 0x1

	.loc_0x94:
	  lwz       r0, 0x0(r3)
	  rlwimi    r0,r4,8,23,23
	  li        r5, 0
	  stw       r0, 0x0(r3)
	  lwz       r4, 0x0(r3)
	  rlwimi    r4,r5,17,14,14
	  stw       r4, 0x0(r3)
	  lwz       r4, 0x0(r3)
	  rlwimi    r4,r5,18,13,13
	  stw       r4, 0x0(r3)
	  lwz       r4, 0x0(r3)
	  rlwimi    r4,r8,19,11,12
	  stw       r4, 0x0(r3)
	  lwz       r4, 0x0(r3)
	  rlwimi    r4,r6,21,10,10
	  stw       r4, 0x0(r3)
	  lfs       f0, -0x6CD0(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xE8
	  fmr       f1, f0
	  b         .loc_0xF8

	.loc_0xE8:
	  lfs       f0, -0x6CCC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xF8
	  fmr       f1, f0

	.loc_0xF8:
	  lfs       f3, -0x6CF0(r2)
	  lfs       f0, -0x6CD0(r2)
	  fmuls     f1, f3, f1
	  fcmpo     cr0, f2, f0
	  fctiwz    f1, f1
	  stfd      f1, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  bge-      .loc_0x120
	  fmr       f2, f0
	  b         .loc_0x130

	.loc_0x120:
	  lfs       f0, -0x6CCC(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x130
	  fmr       f2, f0

	.loc_0x130:
	  lfs       f0, -0x6CF0(r2)
	  lwz       r4, 0x4(r3)
	  rlwimi    r4,r0,0,24,31
	  fmuls     f0, f0, f2
	  stw       r4, 0x4(r3)
	  fctiwz    f0, f0
	  lwz       r4, 0x4(r3)
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwimi    r4,r0,8,16,23
	  stw       r4, 0x4(r3)
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void GXInitTexObjData(GXTexObj* obj, void* imagePtr)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void GXInitTexObjWrapMode(GXTexObj* obj, GXTexWrapMode sWrap, GXTexWrapMode tWrap)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GXInitTexObjTlut(GXTexObj* obj, u32 tlutName)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void GXInitTexObjFilter(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void GXInitTexObjMaxLOD(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void GXInitTexObjMinLOD(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void GXInitTexObjLODBias(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void GXInitTexObjBiasClamp(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void GXInitTexObjEdgeLOD(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void GXInitTexObjMaxAniso(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GXInitTexObjUserData(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GXGetTexObjUserData(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void GXGetTexObjAll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void GXGetTexObjData(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void GXGetTexObjWidth(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void GXGetTexObjHeight(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E7574
 * Size:	000008
 */
GXTexFmt GXGetTexObjFmt(GXTexObj* obj)
{
	GXTexObjPriv* pObj = (GXTexObjPriv*)obj;
	return pObj->format;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void GXGetTexObjWrapS(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void GXGetTexObjWrapT(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E757C
 * Size:	000018
 */
GXBool GXGetTexObjMipMap(GXTexObj* obj)
{
	GXTexObjPriv* internal = (GXTexObjPriv*)obj;
	return (internal->flags & 1) == 1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void GXGetTexObjLODAll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void GXGetTexObjMinFilt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void GXGetTexObjMagFilt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void GXGetTexObjMinLOD(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void GXGetTexObjMaxLOD(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void GXGetTexObjLODBias(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void GXGetTexObjBiasClamp(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void GXGetTexObjEdgeLOD(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void GXGetTexObjMaxAniso(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GXGetTexObjTlut(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E7594
 * Size:	00017C
 */

void GXLoadTexObjPreLoaded(GXTexObj* obj, GXTexRegion* region, GXTexMapID map)
{
	u8 stackManipulation[0x18];

	GXTexObjPriv* internalObj       = (GXTexObjPriv*)obj;
	GXTexRegionPriv* internalRegion = (GXTexRegionPriv*)region;

	GX_SET_REG(internalObj->mode0, GXTexMode0Ids[map], 0, 7);
	GX_SET_REG(internalObj->mode1, GXTexMode1Ids[map], 0, 7);
	GX_SET_REG(internalObj->image0, GXTexImage0Ids[map], 0, 7);

	GX_SET_REG(internalRegion->unk0, GXTexImage1Ids[map], 0, 7);
	GX_SET_REG(internalRegion->unk4, GXTexImage2Ids[map], 0, 7);

	GX_SET_REG(internalObj->image3, GXTexImage3Ids[map], 0, 7);

	GX_BP_LOAD_REG(internalObj->mode0);
	GX_BP_LOAD_REG(internalObj->mode1);
	GX_BP_LOAD_REG(internalObj->image0);
	GX_BP_LOAD_REG(internalRegion->unk0);
	GX_BP_LOAD_REG(internalRegion->unk4);
	GX_BP_LOAD_REG(internalObj->image3);

	if ((internalObj->flags & 2) == 0) {
		GXTlutObjPriv* tlut = (GXTlutObjPriv*)gx->tlutRegionCallback(internalObj->tlutName);
		GX_SET_REG(tlut->unk4, GXTexTlutIds[map], 0, 7);

		GX_BP_LOAD_REG(tlut->unk4);
	}

	gx->tImage0[map] = internalObj->image0;
	gx->tMode0[map]  = internalObj->mode0;

	gx->dirtyState |= GX_DIRTY_SU_TEX;
	gx->bpSentNot = GX_FALSE;

	// GX_SET_REG(internalObj->mode1, GXTexImage0Ids[map], 0, 7);

	// GX_BP_LOAD_REG(GXTexTlutIds[map]);
	/*
	.loc_0x0:
	  mflr      r0
	  subi      r7, r13, 0x7CF0
	  stw       r0, 0x4(r1)
	  subi      r6, r13, 0x7CE8
	  stwu      r1, -0x40(r1)
	  stw       r31, 0x3C(r1)
	  addi      r31, r5, 0
	  subi      r5, r13, 0x7D00
	  stw       r30, 0x38(r1)
	  addi      r30, r3, 0
	  stw       r29, 0x34(r1)
	  lis       r29, 0xCC01
	  stw       r28, 0x30(r1)
	  li        r28, 0x61
	  lbzx      r0, r5, r31
	  lwz       r5, 0x0(r3)
	  subi      r3, r13, 0x7CF8
	  rlwimi    r5,r0,24,0,7
	  stw       r5, 0x0(r30)
	  subi      r5, r13, 0x7CE0
	  lbzx      r0, r3, r31
	  subi      r3, r13, 0x7CD8
	  lwz       r8, 0x4(r30)
	  rlwimi    r8,r0,24,0,7
	  stw       r8, 0x4(r30)
	  lbzx      r0, r7, r31
	  lwz       r7, 0x8(r30)
	  rlwimi    r7,r0,24,0,7
	  stw       r7, 0x8(r30)
	  lbzx      r0, r6, r31
	  lwz       r6, 0x0(r4)
	  rlwimi    r6,r0,24,0,7
	  stw       r6, 0x0(r4)
	  lbzx      r0, r5, r31
	  lwz       r5, 0x4(r4)
	  rlwimi    r5,r0,24,0,7
	  stw       r5, 0x4(r4)
	  lbzx      r0, r3, r31
	  lwz       r3, 0xC(r30)
	  rlwimi    r3,r0,24,0,7
	  stw       r3, 0xC(r30)
	  stb       r28, -0x8000(r29)
	  lwz       r0, 0x0(r30)
	  stw       r0, -0x8000(r29)
	  stb       r28, -0x8000(r29)
	  lwz       r0, 0x4(r30)
	  stw       r0, -0x8000(r29)
	  stb       r28, -0x8000(r29)
	  lwz       r0, 0x8(r30)
	  stw       r0, -0x8000(r29)
	  stb       r28, -0x8000(r29)
	  lwz       r0, 0x0(r4)
	  stw       r0, -0x8000(r29)
	  stb       r28, -0x8000(r29)
	  lwz       r0, 0x4(r4)
	  stw       r0, -0x8000(r29)
	  stb       r28, -0x8000(r29)
	  lwz       r0, 0xC(r30)
	  stw       r0, -0x8000(r29)
	  lbz       r0, 0x1F(r30)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x12C
	  lwz       r4, -0x6D70(r2)
	  lwz       r3, 0x18(r30)
	  lwz       r12, 0x4CC(r4)
	  mtlr      r12
	  blrl
	  subi      r4, r13, 0x7CD0
	  lwz       r5, 0x4(r3)
	  lbzx      r0, r4, r31
	  rlwimi    r5,r0,24,0,7
	  stw       r5, 0x4(r3)
	  stb       r28, -0x8000(r29)
	  lwz       r0, 0x4(r3)
	  stw       r0, -0x8000(r29)

	.loc_0x12C:
	  lwz       r5, -0x6D70(r2)
	  rlwinm    r4,r31,2,0,29
	  lwz       r3, 0x8(r30)
	  li        r0, 0
	  add       r4, r5, r4
	  stw       r3, 0x514(r4)
	  lwz       r3, 0x0(r30)
	  stw       r3, 0x534(r4)
	  lwz       r3, 0x5AC(r5)
	  ori       r3, r3, 0x1
	  stw       r3, 0x5AC(r5)
	  sth       r0, 0x2(r5)
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  addi      r1, r1, 0x40
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E7710
 * Size:	000054
 */
void GXLoadTexObj(GXTexObj* obj, GXTexMapID map)
{
	GXTexRegion* ret = (GXTexRegion*)gx->texRegionCallback(obj, map);

	GXLoadTexObjPreLoaded(obj, ret, map);
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  addi      r31, r4, 0
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0
	  lwz       r5, -0x6D70(r2)
	  lwz       r12, 0x4C8(r5)
	  mtlr      r12
	  blrl
	  addi      r4, r3, 0
	  addi      r3, r30, 0
	  addi      r5, r31, 0
	  bl        -0x1B4
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E7764
 * Size:	000038
 */
void GXInitTlutObj(GXTlutObj* obj, void* table, GXTlutFmt format, u16 numEntries)
{
	GXTlutObjPriv* internal = (GXTlutObjPriv*)obj;

	internal->unk0 = 0;

	GX_SET_REG(internal->unk0, format, 20, 21);
	GX_SET_REG(internal->unk4, (u32)table >> 5, 11, 31);
	GX_SET_REG(internal->unk4, 100, 0, 7);

	internal->numEntries = numEntries;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void GXGetTlutObjAll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void GXGetTlutObjData(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void GXGetTlutObjFmt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GXGetTlutObjNumEntries(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E779C
 * Size:	000098
 */
void GXLoadTlut(GXTlutObj* obj, u32 tlutName)
{
	GXTlutObjPriv* internal = (GXTlutObjPriv*)obj;
	GXTlutRegionPriv* ret   = (GXTlutRegionPriv*)gx->tlutRegionCallback(tlutName);
	u32 reg;

	__GXFlushTextureState();

	GX_BP_LOAD_REG(internal->unk4);
	GX_BP_LOAD_REG(ret->unk0);

	__GXFlushTextureState();

	reg = ret->unk0;
	GX_SET_REG(internal->unk0, reg, 22, 31);

	ret->tlutObj = *internal;
}

/*
 * --INFO--
 * Address:	800E7834
 * Size:	0000F4
 */
void GXInitTexCacheRegion(GXTexRegion* region, GXBool is32bMIPmap, u32 memEven, GXTexCacheSize sizeEven, u32 memOdd, GXTexCacheSize sizeOdd)
{
	GXTexRegionPriv* internal = (GXTexRegionPriv*)region;

	u32 reg;
	switch (sizeEven) {
	case 0:
		reg = 3;
		break;
	case 1:
		reg = 4;
		break;
	case 2:
		reg = 5;
		break;
	}

	internal->unk0 = 0;

	GX_SET_REG(internal->unk0, memEven >> 5, 17, 31);
	GX_SET_REG(internal->unk0, reg, 14, 16);
	GX_SET_REG(internal->unk0, reg, 11, 13);
	GX_SET_REG(internal->unk0, 0, 10, 10);

	switch (sizeOdd) {
	case 0:
		reg = 3;
		break;
	case 1:
		reg = 4;
		break;
	case 2:
		reg = 5;
		break;
	case 3:
		reg = 0;
		break;
	}

	internal->unk4 = 0;
	GX_SET_REG(internal->unk4, memOdd >> 5, 17, 31);
	GX_SET_REG(internal->unk4, reg, 14, 16);
	GX_SET_REG(internal->unk4, reg, 11, 13);

	internal->unkC = is32bMIPmap;
	internal->unkD = 1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void GXInitTexPreLoadRegion(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void GXGetTexRegionAll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E7928
 * Size:	000038
 */
void GXInitTlutRegion(GXTlutRegion* region, u32 memAddr, GXTlutSize tlutSize)
{
	GXTlutRegionPriv* internal = (GXTlutRegionPriv*)region;

	internal->unk0 = 0;
	GX_SET_REG(internal->unk0, (memAddr - 0x80000) >> 9, 22, 31);
	GX_SET_REG(internal->unk0, tlutSize, 11, 21);
	GX_SET_REG(internal->unk0, 0x65, 0, 7);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void GXGetTlutRegionAll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void GXInvalidateTexRegion(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E7960
 * Size:	000048
 */
void GXInvalidateTexAll(void)
{
	__GXFlushTextureState();
	GX_BP_LOAD_REG(0x66001000);
	GX_BP_LOAD_REG(0x66001100);
	__GXFlushTextureState();
}

/*
 * --INFO--
 * Address:	800E79A8
 * Size:	000014
 */
GXTexRegionCallback GXSetTexRegionCallback(GXTexRegionCallback func)
{
	GXTexRegionCallback oldFunc = gx->texRegionCallback;

	gx->texRegionCallback = func;

	return oldFunc;
}

/*
 * --INFO--
 * Address:	800E79BC
 * Size:	000014
 */
GXTlutRegionCallback GXSetTlutRegionCallback(GXTlutRegionCallback func)
{
	GXTlutRegionCallback oldFunc = gx->tlutRegionCallback;

	gx->tlutRegionCallback = func;

	return oldFunc;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000264
 */
void GXPreLoadEntireTexture(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void GXSetTexCoordScaleManually(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void GXSetTexCoordCylWrap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void GXSetTexCoordBias(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E79D0
 * Size:	0000A0
 */
void __SetSURegs(u32 texImgIndex, u32 setUpRegIndex)
{
	u16 a1, a2;
	GXBool b, c;

	a1 = GX_GET_REG(gx->tImage0[texImgIndex], 22, 31);
	// a2 = GX_GET_REG(gx->tImage0[texImgIndex], 12, 21);
	a2 = (gx->tImage0[texImgIndex] & (0x3ff << 10)) >> 10;

	GX_SET_REG(gx->suTs0[setUpRegIndex], a1, 16, 31);
	GX_SET_REG(gx->suTs1[setUpRegIndex], a2, 16, 31);

	b = GX_GET_REG(gx->tMode0[texImgIndex], 30, 31) == 1;
	c = GX_GET_REG(gx->tMode0[texImgIndex], 28, 29) == 1;

	GX_SET_REG(gx->suTs0[setUpRegIndex], b, 15, 15);
	GX_SET_REG(gx->suTs1[setUpRegIndex], c, 15, 15);

	GX_BP_LOAD_REG(gx->suTs0[setUpRegIndex]);
	GX_BP_LOAD_REG(gx->suTs1[setUpRegIndex]);

	gx->bpSentNot = GX_FALSE;
}

/*
 * --INFO--
 * Address:	800E7A70
 * Size:	00017C
 */
// #pragma dont_inline on
static void __GXSetSUTexRegs(void)
{
	if (gx->tcsManEnab != 0xff) {
		u32 c, d;
		int i;
		u32 b = gx->genMode;
		for (i = 0; i < ((b >> 0x10) & 7); i++) {
			switch (i) {
			case 0:
				c = GX_GET_REG(gx->iref, 29, 31);
				d = GX_GET_REG(gx->iref, 26, 28);
				break;
			case 1:
				c = GX_GET_REG(gx->iref, 23, 25);
				d = GX_GET_REG(gx->iref, 20, 22);
				break;
			case 2:
				c = GX_GET_REG(gx->iref, 17, 19);
				d = GX_GET_REG(gx->iref, 14, 16);
				break;
			case 3:
				c = GX_GET_REG(gx->iref, 11, 13);
				d = GX_GET_REG(gx->iref, 8, 10);
				break;
			}

			if ((gx->tcsManEnab & (1 << d)) == 0) {
				__SetSURegs(c, d);
			}
		}

		for (i = 0; i < ((b >> 0x10) & 0xf); i++) {
			u32 uVar1;
			if (i % 2 == 0)
			{
				uVar1 = GX_GET_REG(gx->tref[i], 31, 29);
			}
			else
			{
				uVar1 = GX_GET_REG(gx->tref[i], 28, 26);
			}

			if (gx->texmapId[i] && gx->tcsManEnab != 0xff && (gx->genMode & (1 << (uVar1 & 7))) == 0) {
				__SetSURegs(c, d);
			}
		}
	}
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stmw      r27, 0x14(r1)
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x594(r3)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x168
	  lwz       r0, 0x204(r3)
	  li        r31, 0
	  rlwinm    r3,r0,22,28,31
	  addi      r30, r3, 0x1
	  rlwinm    r27,r0,16,29,31
	  b         .loc_0xD4

	.loc_0x38:
	  cmpwi     r31, 0x2
	  beq-      .loc_0x88
	  bge-      .loc_0x54
	  cmpwi     r31, 0
	  beq-      .loc_0x60
	  bge-      .loc_0x74
	  b         .loc_0xAC

	.loc_0x54:
	  cmpwi     r31, 0x4
	  bge-      .loc_0xAC
	  b         .loc_0x9C

	.loc_0x60:
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x120(r3)
	  rlwinm    r29,r0,0,29,31
	  rlwinm    r28,r0,29,29,31
	  b         .loc_0xAC

	.loc_0x74:
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x120(r3)
	  rlwinm    r29,r0,26,29,31
	  rlwinm    r28,r0,23,29,31
	  b         .loc_0xAC

	.loc_0x88:
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x120(r3)
	  rlwinm    r29,r0,20,29,31
	  rlwinm    r28,r0,17,29,31
	  b         .loc_0xAC

	.loc_0x9C:
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x120(r3)
	  rlwinm    r29,r0,14,29,31
	  rlwinm    r28,r0,11,29,31

	.loc_0xAC:
	  lwz       r3, -0x6D70(r2)
	  li        r0, 0x1
	  slw       r0, r0, r28
	  lwz       r3, 0x594(r3)
	  and.      r0, r3, r0
	  bne-      .loc_0xD0
	  addi      r3, r29, 0
	  addi      r4, r28, 0
	  bl        -0x16C

	.loc_0xD0:
	  addi      r31, r31, 0x1

	.loc_0xD4:
	  cmplw     r31, r27
	  blt+      .loc_0x38
	  li        r31, 0
	  addi      r27, r31, 0
	  b         .loc_0x160

	.loc_0xE8:
	  lwz       r5, -0x6D70(r2)
	  addi      r3, r27, 0x554
	  rlwinm    r4,r31,1,0,29
	  lwzx      r3, r5, r3
	  rlwinm.   r0,r31,0,31,31
	  addi      r4, r4, 0x100
	  add       r4, r5, r4
	  rlwinm    r29,r3,0,24,22
	  beq-      .loc_0x118
	  lwz       r0, 0x0(r4)
	  rlwinm    r28,r0,17,29,31
	  b         .loc_0x120

	.loc_0x118:
	  lwz       r0, 0x0(r4)
	  rlwinm    r28,r0,29,29,31

	.loc_0x120:
	  cmplwi    r29, 0xFF
	  beq-      .loc_0x158
	  li        r4, 0x1
	  lwz       r3, 0x594(r5)
	  slw       r0, r4, r28
	  and.      r0, r3, r0
	  bne-      .loc_0x158
	  lwz       r3, 0x598(r5)
	  slw       r0, r4, r31
	  and.      r0, r3, r0
	  beq-      .loc_0x158
	  addi      r3, r29, 0
	  addi      r4, r28, 0
	  bl        -0x1F4

	.loc_0x158:
	  addi      r27, r27, 0x4
	  addi      r31, r31, 0x1

	.loc_0x160:
	  cmplw     r31, r30
	  blt+      .loc_0xE8

	.loc_0x168:
	  lmw       r27, 0x14(r1)
	  lwz       r0, 0x2C(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void __GXGetSUTexSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E7BEC
 * Size:	000354
 */
void __GXSetTmemConfig(u32 config)
{
	switch (config) {
	case 2:
		GX_BP_LOAD_REG(0x8c0d8000);
		GX_BP_LOAD_REG(0x900dc000);

		GX_BP_LOAD_REG(0x8d0d8800);
		GX_BP_LOAD_REG(0x910dc800);

		GX_BP_LOAD_REG(0x8e0d9000);
		GX_BP_LOAD_REG(0x920dd000);

		GX_BP_LOAD_REG(0x8f0d9800);
		GX_BP_LOAD_REG(0x930dd800);

		GX_BP_LOAD_REG(0xac0da000);
		GX_BP_LOAD_REG(0xb00dc400);

		GX_BP_LOAD_REG(0xad0da800);
		GX_BP_LOAD_REG(0xb10dcc00);

		GX_BP_LOAD_REG(0xae0db000);
		GX_BP_LOAD_REG(0xb20dd400);

		GX_BP_LOAD_REG(0xaf0db800);
		GX_BP_LOAD_REG(0xb30ddc00);
		break;
	case 1:
		GX_BP_LOAD_REG(0x8c0d8000);
		GX_BP_LOAD_REG(0x900dc000);

		GX_BP_LOAD_REG(0x8d0d8800);
		GX_BP_LOAD_REG(0x910dc800);

		GX_BP_LOAD_REG(0x8e0d9000);
		GX_BP_LOAD_REG(0x920dd000);

		GX_BP_LOAD_REG(0x8f0d9800);
		GX_BP_LOAD_REG(0x930dd800);

		GX_BP_LOAD_REG(0xac0da000);
		GX_BP_LOAD_REG(0xb00de000);

		GX_BP_LOAD_REG(0xad0da800);
		GX_BP_LOAD_REG(0xb10de800);

		GX_BP_LOAD_REG(0xae0db000);
		GX_BP_LOAD_REG(0xb20df000);

		GX_BP_LOAD_REG(0xaf0db800);
		GX_BP_LOAD_REG(0xb30df800);

		break;
	case 0:
	default:
		GX_BP_LOAD_REG(0x8c0d8000);
		GX_BP_LOAD_REG(0x900dc000);

		GX_BP_LOAD_REG(0x8d0d8400);
		GX_BP_LOAD_REG(0x910dc400);

		GX_BP_LOAD_REG(0x8e0d8800);
		GX_BP_LOAD_REG(0x920dc800);

		GX_BP_LOAD_REG(0x8f0d8c00);
		GX_BP_LOAD_REG(0x930dcc00);

		GX_BP_LOAD_REG(0xac0d9000);
		GX_BP_LOAD_REG(0xb00dd000);

		GX_BP_LOAD_REG(0xad0d9400);
		GX_BP_LOAD_REG(0xb10dd400);

		GX_BP_LOAD_REG(0xae0d9800);
		GX_BP_LOAD_REG(0xb20dd800);

		GX_BP_LOAD_REG(0xaf0d9c00);
		GX_BP_LOAD_REG(0xb30ddc00);

		break;
	}
}
