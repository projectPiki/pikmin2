#ifndef _DOLPHIN_PPCARCH_H
#define _DOLPHIN_PPCARCH_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

u32 PPCMfmsr();
void PPCMtmsr(u32 newMSR);
// u32 PPCOrMsr(u32 value);
void PPCOrMsr();
u32 PPCMfhid0();
void PPCMthid0(u32 newHID0);
u32 PPCMfl2cr();
void PPCMtl2cr(u32 newL2cr);
void PPCMtdec(u32 newDec);
void PPCSync();
void PPCHalt();
u32 PPCMffpscr();
void PPCMtfpscr(u32 newFPSCR);
u32 PPCMfhid2();
void PPCMthid2(u32 newhid2);
u32 PPCMfwpar();
void PPCMtwpar(u32 newwpar);
void PPCEnableSpeculation();
void PPCDisableSpeculation();
void PPCSetFpIEEEMode();
void PPCSetFpNonIEEEMode();

#ifdef __cplusplus
}
#endif

#endif
