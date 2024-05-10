#include "Dolphin/gd.h"
#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DGD.h"
#include "types.h"

/**
 * @note Address: 0x80074440
 * @note Size: 0x170
 */
void J3DGDSetGenMode(u8 texGenNum, u8 colorChanNum, u8 tevNum, u8 indTevNum, GXCullMode cullMode)
{
	static u8 cm2hw[4] = { 0, 2, 1, 3 };
	__GDCheckOverflowed(10);
	J3DGDWriteBPCmd(0x07FC3F | 0xFE << 24);
	J3DGDWriteBPCmd(texGenNum << 0 | colorChanNum << 4 | (tevNum - 1) << 10 | cm2hw[cullMode] << 14 | indTevNum << 16 | 0x00 << 24);
}

// static u8 cm2hw$576[4]; // unused... not to be confused with the used version, cm2hw$551
static u8 J3DGDTexMode0Ids[8]  = { 0x80, 0x81, 0x82, 0x83, 0xA0, 0xA1, 0xA2, 0xA3 };
static u8 J3DGDTexMode1Ids[8]  = { 0x84, 0x85, 0x86, 0x87, 0xA4, 0xA5, 0xA6, 0xA7 };
static u8 J3DGDTexImage0Ids[8] = { 0x88, 0x89, 0x8A, 0x8B, 0xA8, 0xA9, 0xAA, 0xAB };
// static u8 J3DGDTexImage1Ids[8]; // unused
// static u8 J3DGDTexImage2Ids[8]; // unused
static u8 J3DGDTexImage3Ids[8] = { 0x94, 0x95, 0x96, 0x97, 0xB4, 0xB5, 0xB6, 0xB7 };
static u8 J3DGDTexTlutIds[8]   = { 0x98, 0x99, 0x9A, 0x9B, 0xB8, 0xB9, 0xBA, 0xBB };
static u8 GX2HWFiltConv[6]     = { 0, 4, 1, 5, 2, 6 };
// static u8 HW2GXFiltConv[8]; // unused
static u8 J3DTexImage1Ids[8] = { 0x8C, 0x8D, 0x8E, 0x8F, 0xAC, 0xAD, 0xAE, 0xAF };
static u8 J3DTexImage2Ids[8] = { 0x90, 0x91, 0x92, 0x93, 0xB0, 0xB1, 0xB2, 0xB3 };

/**
 * @note Address: 0x800745B0
 * @note Size: 0x15C
 */
void J3DGDSetGenMode_3Param(u8 texGenNum, u8 tevNum, u8 indTevNum)
{
	__GDCheckOverflowed(10);
	J3DGDWriteBPCmd(0x073C0F | 0xFE << 24);
	J3DGDWriteBPCmd(texGenNum | (tevNum - 1) << 10 | indTevNum << 16 | 0x00 << 24);
}

inline u16 __GDLightID2Index(GXLightID id)
{
	u16 lightIdx = (31 - __cntlzw(id));
	if (lightIdx > 7)
		lightIdx = 0;
	return lightIdx;
}

inline u16 __GDLightID2Offset(GXLightID id) { return __GDLightID2Index(id) * 0x10; }

/**
 * @note Address: 0x8007470C
 * @note Size: 0x318
 */
void J3DGDSetLightAttn(GXLightID id, f32 a0, f32 a1, f32 a2, f32 k0, f32 k1, f32 k2)
{
	J3DGDWriteXFCmdHdr(0x0604 + __GDLightID2Offset(id), 6);
	J3DGDWrite_f32(a0);
	J3DGDWrite_f32(a1);
	J3DGDWrite_f32(a2);
	J3DGDWrite_f32(k0);
	J3DGDWrite_f32(k1);
	J3DGDWrite_f32(k2);
}

/**
 * @note Address: 0x80074A24
 * @note Size: 0x110
 */
void J3DGDSetLightColor(GXLightID id, GXColor color)
{
	J3DGDWriteXFCmd(0x0603 + __GDLightID2Offset(id), (color.r << 24) | (color.g << 16) | (color.b << 8) | (color.a << 0));
}

/**
 * @note Address: 0x80074B34
 * @note Size: 0x1EC
 */
void J3DGDSetLightPos(GXLightID id, f32 x, f32 y, f32 z)
{
	J3DGDWriteXFCmdHdr(0x060A + __GDLightID2Offset(id), 3);
	J3DGDWrite_f32(x);
	J3DGDWrite_f32(y);
	J3DGDWrite_f32(z);
}

/**
 * @note Address: 0x80074D20
 * @note Size: 0x1EC
 */
void J3DGDSetLightDir(GXLightID id, f32 x, f32 y, f32 z)
{
	J3DGDWriteXFCmdHdr(0x060D + __GDLightID2Offset(id), 3);
	J3DGDWrite_f32(x);
	J3DGDWrite_f32(y);
	J3DGDWrite_f32(z);
}

/**
 * @note Address: 0x80074F0C
 * @note Size: 0x548
 */
void J3DGDSetVtxAttrFmtv(GXVtxFmt fmt, const GXVtxAttrFmtList* vtxAttr, bool forceNBT)
{
	GXCompCnt posCompCnt   = GX_POS_XYZ;
	GXCompType posCompType = GX_F32;
	u32 posCompShift       = 0;

	GXCompCnt nrmCount = GX_NRM_XYZ;
	GXCompType nrmType = GX_F32;
	bool nbt3          = false;

	GXCompCnt clr0CompCnt   = GX_CLR_RGBA;
	GXCompType clr0CompType = GX_RGBA8;
	GXCompCnt clr1CompCnt   = GX_CLR_RGBA;
	GXCompType clr1CompType = GX_RGBA8;

	GXCompCnt tex0CompCnt   = GX_TEX_ST;
	GXCompType tex0CompType = GX_F32;
	u32 tex0CompShift       = 0;
	GXCompCnt tex1CompCnt   = GX_TEX_ST;
	GXCompType tex1CompType = GX_F32;
	u32 tex1CompShift       = 0;
	GXCompCnt tex2CompCnt   = GX_TEX_ST;
	GXCompType tex2CompType = GX_F32;
	u32 tex2CompShift       = 0;
	GXCompCnt tex3CompCnt   = GX_TEX_ST;
	GXCompType tex3CompType = GX_F32;
	u32 tex3CompShift       = 0;
	GXCompCnt tex4CompCnt   = GX_TEX_ST;
	GXCompType tex4CompType = GX_F32;
	u32 tex4CompShift       = 0;
	GXCompCnt tex5CompCnt   = GX_TEX_ST;
	GXCompType tex5CompType = GX_F32;
	u32 tex5CompShift       = 0;
	GXCompCnt tex6CompCnt   = GX_TEX_ST;
	GXCompType tex6CompType = GX_F32;
	u32 tex6CompShift       = 0;
	GXCompCnt tex7CompCnt   = GX_TEX_ST;
	GXCompType tex7CompType = GX_F32;
	u32 tex7CompShift       = 0;

	for (; vtxAttr->mAttr != GX_VA_NULL; vtxAttr++) {
		switch (vtxAttr->mAttr) {
		case GX_VA_POS:
			posCompCnt   = vtxAttr->mCount;
			posCompType  = vtxAttr->mType;
			posCompShift = vtxAttr->mFrac;
			break;
		case GX_VA_NRM:
		case GX_VA_NBT:
			nrmType = vtxAttr->mType;
			if (vtxAttr->mCount == GX_NRM_NBT3) {
				nrmCount = GX_NRM_NBT;
				nbt3     = true;
			} else {
				// possible fakematch? need to cast vtxAttr->mCount to int to put value in r0 temporarily
				// nrmCount = forceNBT ? GX_NRM_NBT : vtxAttr->mCount;
				nrmCount = (GXCompCnt)(forceNBT ? GX_NRM_NBT : (int)(vtxAttr->mCount));
				nbt3     = false;
			}
			break;
		case GX_VA_CLR0:
			clr0CompCnt  = vtxAttr->mCount;
			clr0CompType = vtxAttr->mType;
			break;
		case GX_VA_CLR1:
			clr1CompCnt  = vtxAttr->mCount;
			clr1CompType = vtxAttr->mType;
			break;
		case GX_VA_TEX0:
			tex0CompCnt   = vtxAttr->mCount;
			tex0CompType  = vtxAttr->mType;
			tex0CompShift = vtxAttr->mFrac;
			break;
		case GX_VA_TEX1:
			tex1CompCnt   = vtxAttr->mCount;
			tex1CompType  = vtxAttr->mType;
			tex1CompShift = vtxAttr->mFrac;
			break;
		case GX_VA_TEX2:
			tex2CompCnt   = vtxAttr->mCount;
			tex2CompType  = vtxAttr->mType;
			tex2CompShift = vtxAttr->mFrac;
			break;
		case GX_VA_TEX3:
			tex3CompCnt   = vtxAttr->mCount;
			tex3CompType  = vtxAttr->mType;
			tex3CompShift = vtxAttr->mFrac;
			break;
		case GX_VA_TEX4:
			tex4CompCnt   = vtxAttr->mCount;
			tex4CompType  = vtxAttr->mType;
			tex4CompShift = vtxAttr->mFrac;
			break;
		case GX_VA_TEX5:
			tex5CompCnt   = vtxAttr->mCount;
			tex5CompType  = vtxAttr->mType;
			tex5CompShift = vtxAttr->mFrac;
			break;
		case GX_VA_TEX6:
			tex6CompCnt   = vtxAttr->mCount;
			tex6CompType  = vtxAttr->mType;
			tex6CompShift = vtxAttr->mFrac;
			break;
		case GX_VA_TEX7:
			tex7CompCnt   = vtxAttr->mCount;
			tex7CompType  = vtxAttr->mType;
			tex7CompShift = vtxAttr->mFrac;
			break;
		default:
			break;
		}
	}

	GDOverflowCheck(18);

	J3DGDWriteCPCmd(0x70 + fmt, (posCompCnt << 0) | (posCompType << 1) | (posCompShift << 4) | (nrmCount << 9) | (nrmType << 10)
	                                | (clr0CompCnt << 13) | (clr0CompType << 14) | (clr1CompCnt << 17) | (clr1CompType << 18)
	                                | (tex0CompCnt << 21) | (tex0CompType << 22) | (tex0CompShift << 25) | (1 << 30) | (nbt3 << 31));

	J3DGDWriteCPCmd(0x80 + fmt, (tex1CompCnt << 0) | (tex1CompType << 1) | (tex1CompShift << 4) | (tex2CompCnt << 9) | (tex2CompType << 10)
	                                | (tex2CompShift << 13) | (tex3CompCnt << 18) | (tex3CompType << 19) | (tex3CompShift << 22)
	                                | (tex4CompCnt << 27) | (tex4CompType << 28) | (1 << 31));

	J3DGDWriteCPCmd(0x90 + fmt, (tex4CompShift << 0) | (tex5CompCnt << 5) | (tex5CompType << 6) | (tex5CompShift << 9) | (tex6CompCnt << 14)
	                                | (tex6CompType << 15) | (tex6CompShift << 18) | (tex7CompCnt << 23) | (tex7CompType << 24)
	                                | (tex7CompShift << 27));
}

/**
 * @note Address: 0x80075454
 * @note Size: 0x1D0
 */
void J3DGDSetTexCoordGen(GXTexGenType type, GXTexGenSrc src)
{
	// looks very similar to /src/Dolphin/gx/GXAttr.c : GXSetTexCoordGen2
	u32 form        = 0;
	u32 proj        = 0;
	u32 row         = 5;
	u32 embossSrc   = 5;
	u32 embossLight = 0;

	switch (src) {
	case GX_TG_POS:
		row  = 0;
		form = 1;
		break;
	case GX_TG_NRM:
		row  = 1;
		form = 1;
		break;
	case GX_TG_BINRM:
		row  = 3;
		form = 1;
		break;
	case GX_TG_TANGENT:
		row  = 4;
		form = 1;
		break;
	case GX_TG_COLOR0:
		row = 2;
		break;
	case GX_TG_COLOR1:
		row = 2;
		break;
	case GX_TG_TEX0:
		row = 5;
		break;
	case GX_TG_TEX1:
		row = 6;
		break;
	case GX_TG_TEX2:
		row = 7;
		break;
	case GX_TG_TEX3:
		row = 8;
		break;
	case GX_TG_TEX4:
		row = 9;
		break;
	case GX_TG_TEX5:
		row = 10;
		break;
	case GX_TG_TEX6:
		row = 11;
		break;
	case GX_TG_TEX7:
		row = 12;
		break;
	case GX_TG_TEXCOORD0:
		embossSrc = 0;
		break;
	case GX_TG_TEXCOORD1:
		embossSrc = 1;
		break;
	case GX_TG_TEXCOORD2:
		embossSrc = 2;
		break;
	case GX_TG_TEXCOORD3:
		embossSrc = 3;
		break;
	case GX_TG_TEXCOORD4:
		embossSrc = 4;
		break;
	case GX_TG_TEXCOORD5:
		embossSrc = 5;
		break;
	case GX_TG_TEXCOORD6:
		embossSrc = 6;
		break;
	}

	switch (type) {
	case GX_TG_MTX3X4:
		src = (GXTexGenSrc)0;
		break;
	case GX_TG_MTX2X4:
		src  = (GXTexGenSrc)0;
		proj = 1;
		break;
	case GX_TG_BUMP0:
	case GX_TG_BUMP1:
	case GX_TG_BUMP2:
	case GX_TG_BUMP3:
	case GX_TG_BUMP4:
	case GX_TG_BUMP5:
	case GX_TG_BUMP6:
	case GX_TG_BUMP7:
		src         = (GXTexGenSrc)1;
		embossLight = type - GX_TG_BUMP0;
		break;
	case GX_TG_SRTG:
		if (src == GX_TG_COLOR0)
			src = (GXTexGenSrc)2;
		else
			src = (GXTexGenSrc)3;
		break;
	}

	u32 val = (embossLight << 15) | ((embossSrc << 12) | ((row << 7) | (src << 4) | (form << 2) | (proj << 1)));
	J3DGDWrite_u32(val);
	/*
	cmplwi   r4, 0x14
	li       r7, 0
	li       r8, 0
	li       r9, 5
	li       r10, 5
	li       r11, 0
	bgt      lbl_8007553C
	lis      r5, lbl_804A208C@ha
	slwi     r0, r4, 2
	addi     r5, r5, lbl_804A208C@l
	lwzx     r0, r5, r0
	mtctr    r0
	bctr
	.global  lbl_80075488

lbl_80075488:
	li       r9, 0
	li       r7, 1
	b        lbl_8007553C
	.global  lbl_80075494

lbl_80075494:
	li       r9, 1
	li       r7, 1
	b        lbl_8007553C
	.global  lbl_800754A0

lbl_800754A0:
	li       r9, 3
	li       r7, 1
	b        lbl_8007553C
	.global  lbl_800754AC

lbl_800754AC:
	li       r9, 4
	li       r7, 1
	b        lbl_8007553C
	.global  lbl_800754B8

lbl_800754B8:
	li       r9, 2
	b        lbl_8007553C
	.global  lbl_800754C0

lbl_800754C0:
	li       r9, 2
	b        lbl_8007553C
	.global  lbl_800754C8

lbl_800754C8:
	li       r9, 5
	b        lbl_8007553C
	.global  lbl_800754D0

lbl_800754D0:
	li       r9, 6
	b        lbl_8007553C
	.global  lbl_800754D8

lbl_800754D8:
	li       r9, 7
	b        lbl_8007553C
	.global  lbl_800754E0

lbl_800754E0:
	li       r9, 8
	b        lbl_8007553C
	.global  lbl_800754E8

lbl_800754E8:
	li       r9, 9
	b        lbl_8007553C
	.global  lbl_800754F0

lbl_800754F0:
	li       r9, 0xa
	b        lbl_8007553C
	.global  lbl_800754F8

lbl_800754F8:
	li       r9, 0xb
	b        lbl_8007553C
	.global  lbl_80075500

lbl_80075500:
	li       r9, 0xc
	b        lbl_8007553C
	.global  lbl_80075508

lbl_80075508:
	li       r10, 0
	b        lbl_8007553C
	.global  lbl_80075510

lbl_80075510:
	li       r10, 1
	b        lbl_8007553C
	.global  lbl_80075518

lbl_80075518:
	li       r10, 2
	b        lbl_8007553C
	.global  lbl_80075520

lbl_80075520:
	li       r10, 3
	b        lbl_8007553C
	.global  lbl_80075528

lbl_80075528:
	li       r10, 4
	b        lbl_8007553C
	.global  lbl_80075530

lbl_80075530:
	li       r10, 5
	b        lbl_8007553C
	.global  lbl_80075538

lbl_80075538:
	li       r10, 6

lbl_8007553C:
	cmpwi    r3, 1
	beq      lbl_80075564
	bge      lbl_80075554
	cmpwi    r3, 0
	bge      lbl_8007556C
	b        lbl_80075598

lbl_80075554:
	cmpwi    r3, 0xa
	beq      lbl_80075584
	bge      lbl_80075598
	b        lbl_80075578

lbl_80075564:
	li       r6, 0
	b        lbl_80075598

lbl_8007556C:
	li       r6, 0
	li       r8, 1
	b        lbl_80075598

lbl_80075578:
	addi     r11, r3, -2
	li       r6, 1
	b        lbl_80075598

lbl_80075584:
	cmpwi    r4, 0x13
	bne      lbl_80075594
	li       r6, 2
	b        lbl_80075598

lbl_80075594:
	li       r6, 3

lbl_80075598:
	slwi     r0, r7, 2
	slwi     r3, r8, 1
	slwi     r5, r6, 4
	lwz      r4, __GDCurrentDL@sda21(r13)
	or       r0, r3, r0
	slwi     r6, r9, 7
	or       r5, r5, r0
	lwz      r3, 8(r4)
	or       r5, r6, r5
	slwi     r7, r10, 0xc
	addi     r0, r3, 1
	slwi     r6, r11, 0xf
	or       r5, r7, r5
	stw      r0, 8(r4)
	or       r7, r6, r5
	srwi     r0, r7, 0x18
	stb      r0, 0(r3)
	rlwinm   r6, r7, 0x10, 0x18, 0x1f
	rlwinm   r5, r7, 0x18, 0x18, 0x1f
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r6, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r5, 0(r3)
	lwz      r4, __GDCurrentDL@sda21(r13)
	lwz      r3, 8(r4)
	addi     r0, r3, 1
	stw      r0, 8(r4)
	stb      r7, 0(r3)
	blr
	*/
}

/**
 * @note Address: 0x80075624
 * @note Size: 0x1FC
 */
void J3DGDSetTexCoordScale2(GXTexCoordID id, u16 scaleS, u8 biasS, u8 wrapS, u16 scaleT, u8 biasT, u8 wrapT)
{
	GDOverflowCheck(15);
	J3DGDWriteBPCmd(0xFE03FFFF);
	J3DGDWriteBPCmd((scaleS - 1) | (biasS << 16) | (wrapS << 17) | (0x30 + id * 2) << 24);
	J3DGDWriteBPCmd((scaleT - 1) | (biasT << 16) | (wrapT << 17) | (0x31 + id * 2) << 24);
}

/**
 * @note Address: 0x80075820
 * @note Size: 0x1AC
 */
void J3DGDSetTexLookupMode(GXTexMapID id, GXTexWrapMode wrapS, GXTexWrapMode wrapT, GXTexFilter minFilter, GXTexFilter magFilter,
                           f32 minLOD, f32 maxLOD, f32 lodBias, u8 biasClamp, u8 edgeLOD, GXAnisotropy maxAniso)
{
	J3DGDWriteBPCmd((wrapS) << 0 | (wrapT) << 2 | (magFilter == GX_LINEAR) << 4 | (GX2HWFiltConv[minFilter]) << 5 | (!edgeLOD) << 8
	                | ((u8)(lodBias * 32.0f)) << 9 | (maxAniso) << 19 | (biasClamp) << 21 | (J3DGDTexMode0Ids[id] << 24));
	J3DGDWriteBPCmd(((u8)(minLOD * 16.0f)) << 0 | ((u8)(maxLOD * 16.0f)) << 8 | (J3DGDTexMode1Ids[id] << 24));
}

/**
 * @note Address: 0x800759CC
 * @note Size: 0xA8
 */
void J3DGDSetTexImgAttr(GXTexMapID id, u16 w, u16 h, GXTexFmt fmt)
{
	J3DGDWriteBPCmd((w - 1) | ((h - 1) << 10) | (fmt << 20) | (J3DGDTexImage0Ids[id] << 24));
}

/**
 * @note Address: 0x80075A74
 * @note Size: 0x90
 */
void J3DGDSetTexImgPtr(GXTexMapID id, void* tex) { J3DGDWriteBPCmd((OSCachedToPhysical(tex) >> 5) | (J3DGDTexImage3Ids[id] << 24)); }

/**
 * @note Address: 0x80075B04
 * @note Size: 0xD4
 */
void J3DGDSetTexImgPtrRaw(GXTexMapID id, u32 addr)
{
	GDOverflowCheck(5);
	J3DGDWriteBPCmd(addr | (J3DGDTexImage3Ids[id] << 24));
}

/**
 * @note Address: 0x80075BD8
 * @note Size: 0x98
 */
void J3DGDSetTexTlut(GXTexMapID id, u32 addr, GXTlutFmt fmt)
{
	J3DGDWriteBPCmd(((addr - 0x80000) >> 9) | fmt << 10 | J3DGDTexTlutIds[id] << 24);
}

/**
 * @note Address: 0x80075C70
 * @note Size: 0x2C8
 */
void J3DGDLoadTlut(void* tex, u32 addr, GXTlutSize size)
{
	J3DGDWriteBPCmd(0xFFFF00 | 0xFE << 24);
	J3DGDWriteBPCmd(0x0F << 24);

	J3DGDWriteBPCmd((OSCachedToPhysical(tex) >> 5) | 0x64 << 24);
	J3DGDWriteBPCmd(((addr - 0x80000) >> 9) | size << 10 | 0x65 << 24);

	J3DGDWriteBPCmd(0xFFFF00 | 0xFE << 24);
	J3DGDWriteBPCmd(0x0F << 24);
}

/**
 * @note Address: 0x80075F38
 * @note Size: 0x2D8
 */
void J3DGDSetIndTexMtx(GXIndTexMtxID id, Mtx23 mtx, s8 exp)
{
	s32 mtx32[6];
	u32 idx;

	switch (id) {
	case GX_ITM_0:
	case GX_ITM_1:
	case GX_ITM_2:
		idx = (u32)(id - GX_ITM_0);
		break;
	case GX_ITM_S0:
	case GX_ITM_S1:
	case GX_ITM_S2:
		idx = (u32)(id - GX_ITM_S0);
		break;
	case GX_ITM_T0:
	case GX_ITM_T1:
	case GX_ITM_T2:
		idx = (u32)(id - GX_ITM_T0);
		break;
	default:
		idx = 0;
		break;
	}

	exp += 17;

	mtx32[0] = (s32)(mtx[0][0] * 1024.0f) & 0x7FF;
	mtx32[1] = (s32)(mtx[1][0] * 1024.0f) & 0x7FF;

	mtx32[2] = (s32)(mtx[0][1] * 1024.0f) & 0x7FF;
	mtx32[3] = (s32)(mtx[1][1] * 1024.0f) & 0x7FF;

	mtx32[4] = (s32)(mtx[0][2] * 1024.0f) & 0x7FF;
	mtx32[5] = (s32)(mtx[1][2] * 1024.0f) & 0x7FF;

	GDOverflowCheck(15);

	J3DGDWriteBPCmd((mtx32[0] << 0) | (mtx32[1] << 11) | (((exp >> 0) & 0x03) << 22) | (0x06 + idx * 3) << 24);
	J3DGDWriteBPCmd((mtx32[2] << 0) | (mtx32[3] << 11) | (((exp >> 2) & 0x03) << 22) | (0x07 + idx * 3) << 24);
	J3DGDWriteBPCmd((mtx32[4] << 0) | (mtx32[5] << 11) | (((exp >> 4) & 0x03) << 22) | (0x08 + idx * 3) << 24);
}

/**
 * @note Address: 0x80076210
 * @note Size: 0xF0
 */
void J3DGDSetIndTexCoordScale(GXIndTexStageID id, GXIndTexScale s0, GXIndTexScale t0, GXIndTexScale s1, GXIndTexScale t1)
{
	GDOverflowCheck(5);
	J3DGDWriteBPCmd((s0) | (t0 << 4) | (s1 << 8) | (t1 << 12) | ((0x25 + (id >> 1)) << 24));
}

/**
 * @note Address: 0x80076300
 * @note Size: 0x1F8
 */
void J3DGDSetIndTexOrder(u32 num, GXTexCoordID tc0, GXTexMapID tm0, GXTexCoordID tc1, GXTexMapID tm1, GXTexCoordID tc2, GXTexMapID tm2,
                         GXTexCoordID tc3, GXTexMapID tm3)
{
	GDOverflowCheck(10);
	J3DGDWriteBPCmd(((tm0 & 0x07) << 0) | ((tc0 & 0x07) << 3) | ((tm1 & 0x07) << 6) | ((tc1 & 0x07) << 9) | ((tm2 & 0x07) << 12)
	                | ((tc2 & 0x07) << 15) | ((tm3 & 0x07) << 18) | ((tc3 & 0x07) << 21) | (0x27 << 24));

	u32 mask = 0;
	for (u32 i = 0; i < num; i++) {
		switch (i) {
		case 0:
			mask |= (1 << (tm0 & 0x07));
			break;
		case 1:
			mask |= (1 << (tm1 & 0x07));
			break;
		case 2:
			mask |= (1 << (tm2 & 0x07));
			break;
		case 3:
			mask |= (1 << (tm3 & 0x07));
			break;
		}
	}
	J3DGDWriteBPCmd((mask) | (0x0F << 24));
}

/**
 * @note Address: 0x800764F8
 * @note Size: 0x188
 */
void J3DGDSetTevOrder(GXTevStageID stage, GXTexCoordID coord1, GXTexMapID map1, GXChannelID color1, GXTexCoordID coord2, GXTexMapID map2,
                      GXChannelID color2)
{
	static u8 c2r[] = { 0, 1, 0, 1, 0, 1, 7, 5, 6, 0, 0, 0, 0, 0, 0, 7 };

	GXTexCoordID r31 = coord1 >= 8 ? GX_TEXCOORD0 : coord1;
	GXTexCoordID r30 = coord2 >= 8 ? GX_TEXCOORD0 : coord2;
	GDOverflowCheck(5);
	J3DGDWriteBPCmd(((map1 & 7) << 0) | (r31 << 3) | ((map1 != GX_TEXMAP_NULL && (map1 & GX_TEX_DISABLE) == 0) << 6)
	                | (c2r[color1 & 0xf] << 7) | ((map2 & 7) << 12) | (r30 << 15)
	                | ((map2 != GX_TEXMAP_NULL && (map2 & GX_TEX_DISABLE) == 0) << 18) | (c2r[color2 & 0xf] << 19)
	                | ((stage / 2 + 0x28) << 24));
}

/**
 * @note Address: 0x80076680
 * @note Size: 0x168
 */
void J3DGDSetTevKColor(GXTevKColorID id, GXColor color)
{
	u32 r0 = (color.r << 0) | (color.a << 12) | (1 << 23) | ((0xe0 + id * 2) << 24);
	u32 r1 = (color.b << 0) | (color.g << 12) | (1 << 23) | ((0xe1 + id * 2) << 24);

	GDOverflowCheck(10);
	J3DGDWriteBPCmd(r0);
	J3DGDWriteBPCmd(r1);
}

/**
 * @note Address: 0x800767E8
 * @note Size: 0x234
 */
void J3DGDSetTevColorS10(GXTevRegID id, GXColorS10 color)
{
	u32 r0 = ((color.r & 0x7FF) << 0) | ((color.a & 0x7FF) << 12) | ((0xe0 + id * 2) << 24);
	u32 r1 = ((color.b & 0x7FF) << 0) | ((color.g & 0x7FF) << 12) | ((0xe1 + id * 2) << 24);

	GDOverflowCheck(20);
	J3DGDWriteBPCmd(r0);
	J3DGDWriteBPCmd(r1);

	/* wtf? */
	J3DGDWriteBPCmd(r1);
	J3DGDWriteBPCmd(r1);
}

/**
 * @note Address: 0x80076A1C
 * @note Size: 0x360
 */
void J3DGDSetFog(GXFogType type, f32 startZ, f32 endZ, f32 nearZ, f32 farZ, GXColor color)
{
	f32 A, B, C;
	if (farZ == nearZ || endZ == startZ) {
		A = 0.0f;
		B = 0.5f;
		C = 0.0f;
	} else {
		A = (farZ * nearZ) / ((farZ - nearZ) * (endZ - startZ));
		B = farZ / (farZ - nearZ);
		C = startZ / (endZ - startZ);
	}

	f32 mantissa = B;
	u32 exponent = 1;
	while (mantissa > 1.0) {
		mantissa /= 2.0f;
		exponent++;
	}

	while (mantissa > 0.0f && mantissa < 0.5) {
		mantissa *= 2.0f;
		exponent--;
	}

	f32 tA         = A / (1 << exponent);
	u32 mantissa32 = (u32)(mantissa * 8388638.0f);

	u32 A32 = *(u32*)&tA;
	u32 C32 = *(u32*)&C;

	J3DGDWriteBPCmd((A32 >> 12) | (0xee << 24));
	J3DGDWriteBPCmd(mantissa32 | (0xef << 24));
	J3DGDWriteBPCmd(exponent | (0xf0 << 24));
	J3DGDWriteBPCmd((C32 >> 12) | (type << 21) | (0xf1 << 24));
	J3DGDWriteBPCmd(color.b << 0 | color.g << 8 | color.r << 16 | (0xf2 << 24));
}

/**
 * @note Address: 0x80076D7C
 * @note Size: 0x13C
 */
void J3DGDSetFogRangeAdj(u8 enabled, u16 center, GXFogAdjTable* fogAdjTable)
{
	if (enabled) {
		for (s32 i = 0; i < 10; i += 2) {
			J3DGDWriteBPCmd((0xe9 + i / 2) << 24 | fogAdjTable->fogVals[i + 1] << 12 | fogAdjTable->fogVals[i] << 0);
		}
	}

	u32 reg = (0xe8 << 24) | (center + 342) << 0 | enabled << 10;
	J3DGDWriteBPCmd(reg);
}

/**
 * @note Address: 0x80076EB8
 * @note Size: 0x80
 */
void J3DFifoLoadPosMtxImm(Mtx mtx, u32 idx)
{
	GX_WRITE_U8(GX_FIFO_CMD_LOAD_XF_REG);
	GX_WRITE_U16(11);
	GX_WRITE_U16((u16)idx * 4);
	GX_WRITE_U32(*(u32*)&(mtx[0][0]));
	GX_WRITE_U32(*(u32*)&(mtx[0][1]));
	GX_WRITE_U32(*(u32*)&(mtx[0][2]));
	GX_WRITE_U32(*(u32*)&(mtx[0][3]));
	GX_WRITE_U32(*(u32*)&(mtx[1][0]));
	GX_WRITE_U32(*(u32*)&(mtx[1][1]));
	GX_WRITE_U32(*(u32*)&(mtx[1][2]));
	GX_WRITE_U32(*(u32*)&(mtx[1][3]));
	GX_WRITE_U32(*(u32*)&(mtx[2][0]));
	GX_WRITE_U32(*(u32*)&(mtx[2][1]));
	GX_WRITE_U32(*(u32*)&(mtx[2][2]));
	GX_WRITE_U32(*(u32*)&(mtx[2][3]));
}

/**
 * @note Address: 0x80076F38
 * @note Size: 0x6C
 */
void J3DFifoLoadNrmMtxImm(Mtx mtx, u32 idx)
{
	GX_WRITE_U8(GX_FIFO_CMD_LOAD_XF_REG);
	GX_WRITE_U16(8);
	GX_WRITE_U16(idx * 3 + 0x400);
	GX_WRITE_U32(*(u32*)&(mtx[0][0]));
	GX_WRITE_U32(*(u32*)&(mtx[0][1]));
	GX_WRITE_U32(*(u32*)&(mtx[0][2]));
	GX_WRITE_U32(*(u32*)&(mtx[1][0]));
	GX_WRITE_U32(*(u32*)&(mtx[1][1]));
	GX_WRITE_U32(*(u32*)&(mtx[1][2]));
	GX_WRITE_U32(*(u32*)&(mtx[2][0]));
	GX_WRITE_U32(*(u32*)&(mtx[2][1]));
	GX_WRITE_U32(*(u32*)&(mtx[2][2]));
}

/**
 * @note Address: 0x80076FA4
 * @note Size: 0x6C
 */
void J3DFifoLoadNrmMtxImm3x3(Mtx33 mtx, u32 idx)
{
	GX_WRITE_U8(GX_FIFO_CMD_LOAD_XF_REG);
	GX_WRITE_U16(8);
	GX_WRITE_U16(idx * 3 + 0x400);
	GX_WRITE_U32(*(u32*)&(mtx[0][0]));
	GX_WRITE_U32(*(u32*)&(mtx[0][1]));
	GX_WRITE_U32(*(u32*)&(mtx[0][2]));
	GX_WRITE_U32(*(u32*)&(mtx[1][0]));
	GX_WRITE_U32(*(u32*)&(mtx[1][1]));
	GX_WRITE_U32(*(u32*)&(mtx[1][2]));
	GX_WRITE_U32(*(u32*)&(mtx[2][0]));
	GX_WRITE_U32(*(u32*)&(mtx[2][1]));
	GX_WRITE_U32(*(u32*)&(mtx[2][2]));
}

/**
 * @note Address: 0x80077010
 * @note Size: 0x98
 */
static inline void WriteF32ToGX(f32* p)
{
	u32 _t = *(volatile u32*)p;
	GX_WRITE_U32(_t);
}

void J3DFifoLoadNrmMtxToTexMtx(Mtx mtx, u32 idx)
{
	GX_WRITE_U8(GX_FIFO_CMD_LOAD_XF_REG);
	GX_WRITE_U16(11);
	GX_WRITE_U16((u16)idx * 4);

	WriteF32ToGX(&(mtx[0][0]));
	WriteF32ToGX(&(mtx[0][1]));
	WriteF32ToGX(&(mtx[0][2]));
	f32 x = 0.0f;
	WriteF32ToGX(&x);

	WriteF32ToGX(&(mtx[1][0]));
	WriteF32ToGX(&(mtx[1][1]));
	WriteF32ToGX(&(mtx[1][2]));
	f32 y = 0.0f;
	WriteF32ToGX(&y);

	WriteF32ToGX(&(mtx[2][0]));
	WriteF32ToGX(&(mtx[2][1]));
	WriteF32ToGX(&(mtx[2][2]));
	f32 z = 0.0f;
	WriteF32ToGX(&z);
}

/**
 * @note Address: 0x800770A8
 * @note Size: 0x98
 */
void J3DFifoLoadNrmMtxToTexMtx3x3(Mtx33 mtx, u32 idx)
{
	GX_WRITE_U8(GX_FIFO_CMD_LOAD_XF_REG);
	GX_WRITE_U16(11);
	GX_WRITE_U16((u16)idx * 4);

	WriteF32ToGX(&(mtx[0][0]));
	WriteF32ToGX(&(mtx[0][1]));
	WriteF32ToGX(&(mtx[0][2]));
	f32 x = 0.0f;
	WriteF32ToGX(&x);

	WriteF32ToGX(&(mtx[1][0]));
	WriteF32ToGX(&(mtx[1][1]));
	WriteF32ToGX(&(mtx[1][2]));
	f32 y = 0.0f;
	WriteF32ToGX(&y);

	WriteF32ToGX(&(mtx[2][0]));
	WriteF32ToGX(&(mtx[2][1]));
	WriteF32ToGX(&(mtx[2][2]));
	f32 z = 0.0f;
	WriteF32ToGX(&z);
}

/**
 * @note Address: 0x80077140
 * @note Size: 0x80
 */
void J3DFifoLoadTexCached(GXTexMapID id, u32 p2, GXTexCacheSize size1, u32 p4, GXTexCacheSize size2)
{
	GX_WRITE_U8(GX_FIFO_CMD_LOAD_BP_REG);
	u32 id3 = size1 + 3;
	GX_WRITE_U32(J3DTexImage1Ids[id] << 24 | (id3 << 18 | (p2 >> 5 | id3 << 15)));

	if (size2 != GX_TEXCACHE_NONE && p4 < 0x100000) {
		GX_WRITE_U8(GX_FIFO_CMD_LOAD_BP_REG);
		u32 size3 = size2 + 3;
		GX_WRITE_U32(J3DTexImage2Ids[id] << 24 | (size3 << 18 | (p4 >> 5 | size3 << 15)));
	}
}
