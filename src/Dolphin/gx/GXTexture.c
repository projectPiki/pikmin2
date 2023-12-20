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

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
inline void __GXGetTexTileShift(GXTexFmt format, u32* widthTiles, u32* heightTiles)
{
	switch (format) {
	case GX_TF_I4:
	case GX_TF_C4:
	case GX_TF_CMPR:
	case GX_CTF_R4:
	case GX_CTF_Z4:
		*widthTiles  = 3;
		*heightTiles = 3;
		break;

	case GX_TF_I8:
	case GX_TF_IA4:
	case GX_TF_C8:
	case GX_TF_Z8:
	case GX_CTF_RA4:
	case GX_CTF_R8:
	case GX_CTF_G8:
	case GX_CTF_B8:
	case GX_CTF_RG8:
	case GX_CTF_Z8M:
	case GX_CTF_Z8L:
		*widthTiles  = 3;
		*heightTiles = 2;
		break;

	case GX_TF_IA8:
	case GX_TF_RGB565:
	case GX_TF_RGB5A3:
	case GX_TF_RGBA8:
	case GX_TF_C14X2:
	case GX_TF_Z16:
	case GX_TF_Z24X8:
	case GX_CTF_RA8:
	case GX_CTF_GB8:
	case 44:
	case GX_CTF_Z16L:
		*widthTiles  = 2;
		*heightTiles = 2;
		break;

	default:
		*heightTiles = 0;
		*widthTiles  = 0;
		break;
	}
}

/**
 * @note Address: 0x800E6F58
 * @note Size: 0x15C
 */
u32 GXGetTexBufferSize(u16 width, u16 height, u32 format, GXBool mipmap, u8 max_lod)
{
	u32 widthTiles, heightTiles, tileSize, bufferSize, numX, numY, i;

	__GXGetTexTileShift(format, &widthTiles, &heightTiles);

	if (format == GX_TF_RGBA8 || format == GX_TF_Z24X8) {
		tileSize = 0x40;
	} else {
		tileSize = 0x20;
	}

	if (mipmap == GX_TRUE) {

		bufferSize = 0;

		for (i = 0; i < max_lod; i++) {
			numX = GET_TILE_COUNT(width, widthTiles);
			numY = GET_TILE_COUNT(height, heightTiles);

			bufferSize += numX * numY * tileSize;
			if (width == 1 && height == 1) {
				break;
			}

			width  = (width > 1) ? (width >> 1) : 1;
			height = (height > 1) ? (height >> 1) : 1;
		}

	} else {
		numX       = GET_TILE_COUNT(width, widthTiles);
		numY       = GET_TILE_COUNT(height, heightTiles);
		bufferSize = numX * numY * tileSize;
	}

	return bufferSize;
}

/**
 * @note Address: 0x800E70B4
 * @note Size: 0xC8
 */
void __GetImageTileCount(GXTexFmt format, u16 width, u16 height, u32* a, u32* b, u32* c)
{
	u32 widthTiles, heightTiles;

	__GXGetTexTileShift(format, &widthTiles, &heightTiles);

	if (width <= 0) {
		width = 1;
	}

	if (height <= 0) {
		height = 1;
	}

	*a = GET_TILE_COUNT(width, widthTiles);
	*b = GET_TILE_COUNT(height, heightTiles);
	*c = (format == GX_TF_RGBA8 || format == GX_TF_Z24X8) ? 2 : 1;
}

/**
 * @note Address: 0x800E717C
 * @note Size: 0x24C
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
}

/**
 * @note Address: 0x800E73C8
 * @note Size: 0x48
 */
void GXInitTexObjCI(GXTexObj* obj, void* imagePtr, u16 width, u16 height, GXCITexFmt format, GXTexWrapMode sWrap, GXTexWrapMode tWrap,
                    GXBool useMIPmap, u32 tlutName)
{
	GXTexObjPriv* internal = (GXTexObjPriv*)obj;

	GXInitTexObj(obj, imagePtr, width, height, format, sWrap, tWrap, useMIPmap);

	internal->flags &= ~2;
	internal->tlutName = tlutName;
}

/**
 * @note Address: 0x800E7410
 * @note Size: 0x164
 */
void GXInitTexObjLOD(GXTexObj* obj, GXTexFilter minFilter, GXTexFilter maxFilter, f32 minLOD, f32 maxLOD, f32 lodBias, GXBool doBiasClamp,
                     GXBool doEdgeLOD, GXAnisotropy maxAniso)
{
	GXTexObjPriv* internal = (GXTexObjPriv*)obj;
	u8 reg1, reg2;
	if (lodBias < -4.0f) {
		lodBias = -4.0f;
	} else if (lodBias >= 4.0f) {
		lodBias = 3.99f;
	}

	GX_SET_REG(internal->mode0, lodBias * 32.0f, 15, 22);
	GX_SET_REG(internal->mode0, maxFilter == 1 ? 1 : 0, 27, 27);
	GX_SET_REG(internal->mode0, GX2HWFiltConv[minFilter], 24, 26);
	GX_SET_REG(internal->mode0, doEdgeLOD ? 0 : 1, 23, 23);
	GX_SET_REG(internal->mode0, 0, 14, 14);
	GX_SET_REG(internal->mode0, 0, 13, 13);
	GX_SET_REG(internal->mode0, maxAniso, 11, 12);
	GX_SET_REG(internal->mode0, doBiasClamp, 10, 10);

	if (minLOD < 0.0f) {
		minLOD = 0.0f;
	} else if (minLOD > 10.0f) {
		minLOD = 10.0f;
	}
	reg1 = minLOD * 16.0f;

	if (maxLOD < 0.0f) {
		maxLOD = 0.0f;
	} else if (maxLOD > 10.0f) {
		maxLOD = 10.0f;
	}
	reg2 = maxLOD * 16.0f;

	GX_SET_REG(internal->mode1, reg1, 24, 31);
	GX_SET_REG(internal->mode1, reg2, 16, 23);
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void GXInitTexObjData(GXTexObj* obj, void* imagePtr)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void GXInitTexObjWrapMode(GXTexObj* obj, GXTexWrapMode sWrap, GXTexWrapMode tWrap)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void GXInitTexObjTlut(GXTexObj* obj, u32 tlutName)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
void GXInitTexObjFilter(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void GXInitTexObjMaxLOD(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
void GXInitTexObjMinLOD(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
void GXInitTexObjLODBias(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void GXInitTexObjBiasClamp(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void GXInitTexObjEdgeLOD(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void GXInitTexObjMaxAniso(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void GXInitTexObjUserData(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void GXGetTexObjUserData(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
void GXGetTexObjAll(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void GXGetTexObjData(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void GXGetTexObjWidth(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void GXGetTexObjHeight(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E7574
 * @note Size: 0x8
 */
GXTexFmt GXGetTexObjFmt(GXTexObj* obj)
{
	GXTexObjPriv* pObj = (GXTexObjPriv*)obj;
	return pObj->format;
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void GXGetTexObjWrapS(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void GXGetTexObjWrapT(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E757C
 * @note Size: 0x18
 */
GXBool GXGetTexObjMipMap(GXTexObj* obj)
{
	GXTexObjPriv* internal = (GXTexObjPriv*)obj;
	return (internal->flags & 1) == 1;
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void GXGetTexObjLODAll(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void GXGetTexObjMinFilt(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void GXGetTexObjMagFilt(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void GXGetTexObjMinLOD(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void GXGetTexObjMaxLOD(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void GXGetTexObjLODBias(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void GXGetTexObjBiasClamp(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void GXGetTexObjEdgeLOD(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void GXGetTexObjMaxAniso(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void GXGetTexObjTlut(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E7594
 * @note Size: 0x17C
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
}

/**
 * @note Address: 0x800E7710
 * @note Size: 0x54
 */
void GXLoadTexObj(GXTexObj* obj, GXTexMapID map)
{
	GXTexRegion* ret = (GXTexRegion*)gx->texRegionCallback(obj, map);

	GXLoadTexObjPreLoaded(obj, ret, map);
}

/**
 * @note Address: 0x800E7764
 * @note Size: 0x38
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

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void GXGetTlutObjAll(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void GXGetTlutObjData(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void GXGetTlutObjFmt(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void GXGetTlutObjNumEntries(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E779C
 * @note Size: 0x98
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

/**
 * @note Address: 0x800E7834
 * @note Size: 0xF4
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

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
void GXInitTexPreLoadRegion(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x10C
 */
void GXGetTexRegionAll(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E7928
 * @note Size: 0x38
 */
void GXInitTlutRegion(GXTlutRegion* region, u32 memAddr, GXTlutSize tlutSize)
{
	GXTlutRegionPriv* internal = (GXTlutRegionPriv*)region;

	internal->unk0 = 0;
	GX_SET_REG(internal->unk0, (memAddr - 0x80000) >> 9, 22, 31);
	GX_SET_REG(internal->unk0, tlutSize, 11, 21);
	GX_SET_REG(internal->unk0, 0x65, 0, 7);
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void GXGetTlutRegionAll(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x12C
 */
void GXInvalidateTexRegion(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E7960
 * @note Size: 0x48
 */
void GXInvalidateTexAll(void)
{
	__GXFlushTextureState();
	GX_BP_LOAD_REG(0x66001000);
	GX_BP_LOAD_REG(0x66001100);
	__GXFlushTextureState();
}

/**
 * @note Address: 0x800E79A8
 * @note Size: 0x14
 */
GXTexRegionCallback GXSetTexRegionCallback(GXTexRegionCallback func)
{
	GXTexRegionCallback oldFunc = gx->texRegionCallback;

	gx->texRegionCallback = func;

	return oldFunc;
}

/**
 * @note Address: 0x800E79BC
 * @note Size: 0x14
 */
GXTlutRegionCallback GXSetTlutRegionCallback(GXTlutRegionCallback func)
{
	GXTlutRegionCallback oldFunc = gx->tlutRegionCallback;

	gx->tlutRegionCallback = func;

	return oldFunc;
}

/**
 * @note Address: N/A
 * @note Size: 0x264
 */
void GXPreLoadEntireTexture(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
void GXSetTexCoordScaleManually(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void GXSetTexCoordCylWrap(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void GXSetTexCoordBias(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E79D0
 * @note Size: 0xA0
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

/**
 * @note Address: 0x800E7A70
 * @note Size: 0x17C
 */
#pragma dont_inline on
void __GXSetSUTexRegs(void)
{
	u32 i;
	u32 b;
	u32 a;
	u32 c;
	u32 d;
	u32 stackFiller;
	if (gx->tcsManEnab != 0xff) {
		a = GX_GET_REG(gx->genMode, 18, 21) + 1;
		b = GX_GET_REG(gx->genMode, 13, 15);
		for (i = 0; i < b; i++) {
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

			if (!(gx->tcsManEnab & (1 << d))) {
				__SetSURegs(c, d);
			}
		}

		for (i = 0; i < a; i++) {
			u32* g = &gx->tref[i / 2];

			c = gx->texmapId[i] & ~0x100;

			if (i & 1) {
				d = GX_GET_REG(*g, 14, 16);
			} else {
				d = GX_GET_REG(*g, 26, 28);
			}

			if (c != 0xff && !(gx->tcsManEnab & (1 << d)) && gx->tevTcEnab & (1 << i)) {
				__SetSURegs(c, d);
			}
		}
	}
}
#pragma dont_inline reset

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void __GXGetSUTexSize(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800E7BEC
 * @note Size: 0x354
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
