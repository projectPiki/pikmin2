#ifndef _DOLPHIN_PPCARCH_H
#define _DOLPHIN_PPCARCH_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define HID0              0x3f0
#define HID0_ICE          0x8000
#define HID0_ICFI         0x800
#define HID0_DCE          0x4000
#define HID2              0x398
#define HID2_LCE_BIT      3
#define MSR_ME            0x1000
#define LC_BASE_PREFIX    (0xE000)
#define LC_BASE           (LC_BASE_PREFIX << 16)
#define DBAT3L            3
#define DBAT3U            3
#define DMA_U             0x39a
#define DMA_L             0x39b
#define DMA_L_STORE       0
#define DMA_L_TRIGGER     2
#define LC_MAX_DMA_BLOCKS 128
#define LC_MAX_DMA_BYTES  0x1000

#define LCGetBase() ((void*)LC_BASE)

#define MSR_IR 0x00000020 // instruction relocate
#define MSR_DR 0x00000010 // data relocate

#define HID2_DCHERR 0x00800000 // ERROR: dcbz_l cache hit
#define HID2_DNCERR 0x00400000 // ERROR: DMA access to normal cache
#define HID2_DCMERR 0x00200000 // ERROR: DMA cache miss error
#define HID2_DQOERR 0x00100000 // ERROR: DMA queue overflow
#define HID2_DCHEE  0x00080000 // dcbz_l cache hit error enable
#define HID2_DNCEE  0x00040000 // DMA access to normal cache error enable
#define HID2_DCMEE  0x00020000 // DMA cache miss error error enable
#define HID2_DQOEE  0x00010000 // DMA queue overflow error enable

#define L2CR_L2E  0x80000000 // L2 Enable
#define L2CR_L2I  0x00200000 // Global invalidate
#define L2CR_L2IP 0x00000001 // L2 global invalidate in progress

#define SRR1_DMA_BIT  0x00200000
#define SRR1_L2DP_BIT 0x00100000

#define FPSCR_FX     0x80000000 // Exception summary
#define FPSCR_FEX    0x40000000 // Enabled exception summary
#define FPSCR_VX     0x20000000 // Invalid operation
#define FPSCR_OX     0x10000000 // Overflow exception
#define FPSCR_UX     0x08000000 // Underflow exception
#define FPSCR_ZX     0x04000000 // Zero divide exception
#define FPSCR_XX     0x02000000 // Inexact exception
#define FPSCR_VXSNAN 0x01000000 // SNaN
#define FPSCR_VXISI  0x00800000 // Infinity - Infinity
#define FPSCR_VXIDI  0x00400000 // Infinity / Infinity
#define FPSCR_VXZDZ  0x00200000 // 0 / 0
#define FPSCR_VXIMZ  0x00100000 // Infinity * 0
#define FPSCR_VXVC   0x00080000 // Invalid compare
#define FPSCR_FR     0x00040000 // Fraction rounded
#define FPSCR_FI     0x00020000 // Fraction inexact
#define FPSCR_VXSOFT 0x00000400 // Software request
#define FPSCR_VXSQRT 0x00000200 // Invalid square root
#define FPSCR_VXCVI  0x00000100 // Invalid integer convert
#define FPSCR_VE     0x00000080 // Invalid operation exception enable
#define FPSCR_OE     0x00000040 // Overflow exception enable
#define FPSCR_UE     0x00000020 // Underflow exception enable
#define FPSCR_ZE     0x00000010 // Zero divide exception enable
#define FPSCR_XE     0x00000008 // Inexact exception enable
#define FPSCR_NI     0x00000004 // Non-IEEE mode

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
