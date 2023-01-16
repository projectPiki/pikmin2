#ifndef _JSYSTEM_J3D_J3DGD_H
#define _JSYSTEM_J3D_J3DGD_H

#include "Dolphin/gx.h"
#include "Dolphin/gd.h"

#ifndef _GXTlutSize
typedef int _GXTlutSize;
#endif

#ifndef _GXFogType
typedef GXFogType _GXFogType;
#endif

#ifndef _GXFogAdjTable
typedef GXFogAdjTable _GXFogAdjTable;
#endif

#ifndef _GXTexCacheSize
typedef u32 _GXTexCacheSize;
#endif

void J3DGDSetGenMode(unsigned char, unsigned char, unsigned char, unsigned char, _GXCullMode);
void J3DGDSetGenMode_3Param(unsigned char, unsigned char, unsigned char);
void J3DGDSetLightAttn(_GXLightID, f32, f32, f32, f32, f32, f32);
void J3DGDSetLightColor(_GXLightID, _GXColor);
void J3DGDSetLightPos(_GXLightID, f32, f32, f32);
void J3DGDSetLightDir(_GXLightID, f32, f32, f32);
void J3DGDSetVtxAttrFmtv(_GXVtxFmt, const _GXVtxAttrFmtList*, bool);
void J3DGDSetTexCoordGen(_GXTexGenType, _GXTexGenSrc);
void J3DGDSetTexCoordScale2(_GXTexCoordID, unsigned short, unsigned char, unsigned char, unsigned short, unsigned char, unsigned char);
void J3DGDSetTexLookupMode(_GXTexMapID, _GXTexWrapMode, _GXTexWrapMode, _GXTexFilter, _GXTexFilter, f32, f32, f32, unsigned char,
                           unsigned char, _GXAnisotropy);
void J3DGDSetTexImgAttr(_GXTexMapID, unsigned short, unsigned short, _GXTexFmt);
void J3DGDSetTexImgPtr(_GXTexMapID, void*);
void J3DGDSetTexImgPtrRaw(_GXTexMapID, unsigned long);
void J3DGDSetTexTlut(_GXTexMapID, unsigned long, _GXTlutFmt);
void J3DGDSetIndTexCoordScale(_GXIndTexStageID, _GXIndTexScale, _GXIndTexScale, _GXIndTexScale, _GXIndTexScale);
void J3DGDSetIndTexOrder(unsigned long, _GXTexCoordID, _GXTexMapID, _GXTexCoordID, _GXTexMapID, _GXTexCoordID, _GXTexMapID, _GXTexCoordID,
                         _GXTexMapID);
void J3DGDSetTevOrder(_GXTevStageID, _GXTexCoordID, _GXTexMapID, _GXChannelID, _GXTexCoordID, _GXTexMapID, _GXChannelID);
void J3DGDSetTevKColor(_GXTevKColorID, _GXColor);
void J3DGDSetTevColorS10(_GXTevRegID, _GXColorS10);
void J3DGDSetFog(_GXFogType, f32, f32, f32, f32, _GXColor);
void J3DGDSetFogRangeAdj(unsigned char, unsigned short, _GXFogAdjTable*);

void J3DGDLoadTlut(void*, unsigned long, _GXTlutSize);
void J3DGDLoadTexMtxImm(f32 (*)[4], u32, _GXTexMtxType);
void J3DGDLoadPostTexMtxImm(f32 (*)[4], u32);

void J3DGDSetIndTexMtx(_GXIndTexMtxID, f32 (*)[3], char);
void J3DFifoLoadTexCached(_GXTexMapID, unsigned long, _GXTexCacheSize, unsigned long, _GXTexCacheSize);
void J3DFifoLoadPosMtxImm(f32 (*)[4], u32);
void J3DFifoLoadNrmMtxImm(f32 (*)[4], u32);
void J3DFifoLoadNrmMtxImm3x3(f32 (*)[3], u32);
void J3DFifoLoadNrmMtxToTexMtx(f32 (*)[4], u32);
void J3DFifoLoadNrmMtxToTexMtx3x3(f32 (*)[3], u32);

#endif
