#ifndef _DOLPHIN_GXTEV_H
#define _DOLPHIN_GXTEV_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#include "Dolphin/GX/GXEnum.h"
#include "Dolphin/GX/GXTypes.h"

////// TEXTURE ENVIRONMENT FUNCTIONS ///////
extern void GXSetTevOp(GXTevStageID stage, GXTevMode mode);
extern void GXSetTevColorIn(GXTevStageID stage, GXTevColorArg a, GXTevColorArg b, GXTevColorArg c, GXTevColorArg d);
extern void GXSetTevAlphaIn(GXTevStageID stage, GXTevAlphaArg a, GXTevAlphaArg b, GXTevAlphaArg c, GXTevAlphaArg d);
extern void GXSetTevColorOp(GXTevStageID stage, GXTevOp op, GXTevBias bias, GXTevScale scale, GXBool doClamp, GXTevRegID outReg);
extern void GXSetTevAlphaOp(GXTevStageID stage, GXTevOp op, GXTevBias bias, GXTevScale scale, GXBool doClamp, GXTevRegID outReg);

extern void GXSetTevColor(GXTevRegID reg, GXColor color);
extern void GXSetTevColorS10(GXTevRegID reg, GXColorS10 color);

extern void GXSetTevKColor(GXTevKColorID id, GXColor color);
extern void GXSetTevKColorSel(GXTevStageID stage, GXTevKColorSel sel);
extern void GXSetTevKAlphaSel(GXTevStageID stage, GXTevKAlphaSel sel);

extern void GXSetTevSwapMode(GXTevStageID stage, GXTevSwapSel rasSel, GXTevSwapSel texSel);
extern void GXSetTevSwapModeTable(GXTevSwapSel table, GXTevColorChan red, GXTevColorChan green, GXTevColorChan blue, GXTevColorChan alpha);

extern void GXSetAlphaCompare(GXCompare comp0, u8 ref0, GXAlphaOp op, GXCompare comp1, u8 ref1);
extern void GXSetTevOrder(GXTevStageID stage, GXTexCoordID coord, GXTexMapID map, GXChannelID color);
extern void GXSetZTexture(GXZTexOp op, GXTexFmt format, u32 bias);
extern void GXSetNumTevStages(u8 count);

// Unused/inlined in P2.
extern void GXSetTevClampMode(GXTevStageID stage, GXTevClampMode mode);

////////////////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
