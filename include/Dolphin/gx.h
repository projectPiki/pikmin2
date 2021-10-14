#ifndef _DOLPHIN_GX_H
#define _DOLPHIN_GX_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

void GXSetZMode(uint, uint, uint);
void GXSetBlendMode(uint, uint, uint, uint);
void GXSetNumTexGens(uint);
void GXSetNumChans(uint);
void GXSetNumTevStages(uint);
void GXSetTevOrder(uint, uint, uint, int);
void GXSetTevOp(int, int);
void GXSetTevSwapMode(int, uint, uint);
void GXSetTevSwapModeTable(int, uint, uint, uint, uint);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif