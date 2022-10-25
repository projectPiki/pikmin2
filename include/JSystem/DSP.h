#ifndef _JSYSTEM_DSP_H
#define _JSYSTEM_DSP_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

typedef struct _STRUCT_DSP_TASK {
	s32 _00;                      // _00
	u32 _04;                      // _04
	u32 _08;                      // _08
	u32 _0C;                      // _0C
	u32 _10;                      // _10
	u32 _14;                      // _14
	u32 _18;                      // _18
	u32 _1C;                      // _1C
	u32 _20;                      // _20
	u16 _24;                      // _24
	u16 _26;                      // _26
	void* _28;                    // _28
	u32 _2C;                      // _2C
	void* _30;                    // _30
	void* _34;                    // _34
	struct _STRUCT_DSP_TASK* _38; // _38
	struct _STRUCT_DSP_TASK* _3C; // _3C
} STRUCT_DSP_TASK;

// dspproc.c
void DSPReleaseHalt2(u32 msg);
void setup_callback(unsigned short p1);
void DsetupTable(unsigned long p1, unsigned long p2, unsigned long p3, unsigned long p4, unsigned long p5);
void DsetMixerLevel(float mixerLevel);
void DsyncFrame(unsigned long p1, unsigned long p2, unsigned long p3);

// dsptask.c
void DspHandShake(void* a1);
void DspBoot(void (*p1)(void*));
void DSPSendCommands2(unsigned long* p1, unsigned long p2, void (*p3)(unsigned short));
void DspInitWork();
void DspStartWork(unsigned long p1, void (*p2)(unsigned short));
void DspFinishWork(unsigned short p1);

// osdsp.c
void DSPAddTask(void);
void DSPAddPriorTask(STRUCT_DSP_TASK*);

// unused/inlined in dspproc.c:
void DSPReleaseHalt3(u32 p1, u16 p2);
void DSPSendCommands(u32* p1, u32 p2);
void DSPReleaseHalt();
void DSPWaitFinish();
void Dswap(u32 p1, u32 p2, u32 p3);
void Dmix(unsigned long p1, unsigned long p2, unsigned long p3, short p4);
void Dcopy(unsigned long p1, unsigned long p2, unsigned long p3);
void DloadBuffer1(unsigned long p1, unsigned long p2);
void DloadBuffer(u32 p1, u32 p2, u32 p3);
void DsaveBuffer(unsigned short p1, unsigned long p2, unsigned long p3);
void wait_callback(unsigned short p1);
void DwaitFrame();
void DiplSec(unsigned long p1, void (*p2)(unsigned short));
void DagbSec(unsigned long p1, void (*p2)(unsigned short));
void dummy_callback(unsigned short p1);
void DsetDolbyDelay(unsigned long p1, unsigned short p2);

#ifdef __cplusplus
}
#endif // ifdef __cplusplus

#endif
