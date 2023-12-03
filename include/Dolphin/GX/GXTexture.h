#ifndef _DOLPHIN_GXTEXTURE_H
#define _DOLPHIN_GXTEXTURE_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#include "Dolphin/GX/GXEnum.h"
#include "Dolphin/GX/GXTypes.h"

//////////// TEXTURE CALLBACKS /////////////

typedef GXTexRegion* (*GXTexRegionCallback)(const GXTexObj* t_obj, GXTexMapID id);
typedef GXTlutRegion* (*GXTlutRegionCallback)(u32 idx);

////////////////////////////////////////////

////////////// TEXTURE MODES ///////////////
// Texture mode IDs.
extern u8 GXTexMode0Ids[8];
extern u8 GXTexMode1Ids[8];
extern u8 GXTexImage0Ids[8];
extern u8 GXTexImage1Ids[8];
extern u8 GXTexImage2Ids[8];
extern u8 GXTexImage3Ids[8];
extern u8 GXTexTlutIds[8];

// Filter conversion arrays (HW2GX unused in P2).
extern u8 GX2HWFiltConv[6];
// extern u8 HW2GXFiltConv[8];

////////////////////////////////////////////

//////////// TEXTURE FUNCTIONS /////////////
// Init functions.
extern void GXInitTexObj(GXTexObj* obj, void* imagePtr, u16 width, u16 height, GXTexFmt format, GXTexWrapMode sWrap, GXTexWrapMode tWrap,
                         GXBool useMIPmap);
extern void GXInitTexObjCI(GXTexObj* obj, void* imagePtr, u16 width, u16 height, GXCITexFmt format, GXTexWrapMode sWrap,
                           GXTexWrapMode tWrap, GXBool useMIPmap, u32 tlutName);
extern void GXInitTexObjLOD(GXTexObj* obj, GXTexFilter minFilter, GXTexFilter maxFilter, f32 minLOD, f32 maxLOD, f32 lodBias,
                            GXBool doBiasClamp, GXBool doEdgeLOD, GXAnisotropy maxAniso);

// Get functions.
extern GXTexFmt GXGetTexObjFmt(GXTexObj* obj);
extern GXBool GXGetTexObjMipMap(GXTexObj* obj);
extern u32 GXGetTexBufferSize(u16 width, u16 height, u32 format, GXBool mipmap, u8 max_lod);

// Load functions.
extern void GXLoadTexObjPreLoaded(GXTexObj* obj, GXTexRegion* region, GXTexMapID map);
extern void GXLoadTexObj(GXTexObj* obj, GXTexMapID map);

// Tlut functions.
extern void GXInitTlutObj(GXTlutObj* obj, void* table, GXTlutFmt format, u16 numEntries);
extern void GXLoadTlut(GXTlutObj* obj, u32 tlutName);

// Region functions.
extern void GXInitTexCacheRegion(GXTexRegion* region, GXBool is32bMIPmap, u32 memEven, GXTexCacheSize sizeEven, u32 memOdd,
                                 GXTexCacheSize sizeOdd);
extern void GXInitTlutRegion(GXTlutRegion* region, u32 memAddr, GXTlutSize tlutSize);

// Other functions.
extern void GXInvalidateTexAll();
extern GXTexRegionCallback GXSetTexRegionCallback(GXTexRegionCallback func);
extern GXTlutRegionCallback GXSetTlutRegionCallback(GXTlutRegionCallback func);

// Unknown arg functions.
// TODO: work these out.
extern void __SetSURegs();
extern void __GXSetSUTexRegs();
extern void __GXSetTmemConfig(u32 config);

// Unused/inlined in P2.
extern void GXInitTexObjData(GXTexObj* obj, void* imagePtr);
extern void GXInitTexObjWrapMode(GXTexObj* obj, GXTexWrapMode sWrap, GXTexWrapMode tWrap);
extern void GXInitTexObjTlut(GXTexObj* obj, u32 tlutName);
// TODO: finish filling these out for reference purposes.

extern void __GetImageTileCount(GXTexFmt format, u16 width, u16 height, u32* a, u32* b, u32* c);

////////////////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
