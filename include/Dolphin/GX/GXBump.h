#ifndef _DOLPHIN_GXBUMP_H
#define _DOLPHIN_GXBUMP_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#include "Dolphin/GX/GXEnum.h"
#include "Dolphin/GX/GXTypes.h"
#include "Dolphin/mtx.h"

////////////// BUMP FUNCTIONS //////////////
// Flush functions.
extern void __GXFlushTextureState();

// Indirect texture functions.
extern void GXSetTevIndirect(GXTevStageID tevStage, GXIndTexStageID indStage, GXIndTexFormat format, GXIndTexBiasSel bias,
                             GXIndTexMtxID mtx, GXIndTexWrap sWrap, GXIndTexWrap tWrap, GXBool doAddPrev, GXBool isIndLOD,
                             GXIndTexAlphaSel alpha);
extern void GXSetIndTexMtx(GXIndTexMtxID mtx, const Mtx23 offsets, s8 scale);
extern void GXSetIndTexCoordScale(GXIndTexStageID stage, GXIndTexScale sScale, GXIndTexScale tScale);
extern void GXSetIndTexOrder(GXIndTexStageID stage, GXTexCoordID texCoord, GXTexMapID texMap);
extern void GXSetNumIndStages(u8 stageCount);
extern void __GXSetIndirectMask(u32 mask);

// Convenience functions.
extern void GXSetTevDirect(GXTevStageID stage);
extern void GXSetTevIndWarp(GXTevStageID tevStage, GXIndTexStageID indStage, GXBool isSignedOffset, GXBool isReplaceMode,
                            GXIndTexMtxID mtx);

// Unused/inlined in P2.
extern void GXSetTevIndTile(GXTevStageID tevStage, GXIndTexStageID indStage, u16 sTileSize, u16 tTileSize, u16 sTileSpacing,
                            u16 tTileSpacing, GXIndTexFormat format, GXIndTexMtxID mtx, GXIndTexBiasSel bias, GXIndTexAlphaSel alpha);
extern void GXSetTevIndBumpST(GXTevStageID tevStage, GXIndTexStageID indStage, GXIndTexMtxID mtx);
extern void GXSetTevIndBumpXYZ(GXTevStageID tevStage, GXIndTexStageID indStage, GXIndTexMtxID mtx);
extern void GXSetTevIndRepeat(GXTevStageID stage);

////////////////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
