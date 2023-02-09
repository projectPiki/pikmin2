#ifndef _JSYSTEM_DSP_H
#define _JSYSTEM_DSP_H

#include "types.h"
#include "Dolphin/dsp.h"

// dspproc.c
void DSPReleaseHalt2(u32 msg);
void setup_callback(u16 p1);
void DsetupTable(u32 p1, u32 p2, u32 p3, u32 p4, u32 p5);
void DsetMixerLevel(f32 mixerLevel);
void DsyncFrame(u32 p1, u32 p2, u32 p3);

// dsptask.c
void DspHandShake(void* a1);
void DspBoot(DSPCallback callback);
void DSPSendCommands2(u32* p1, u32 p2, void (*p3)(u16));
void DspInitWork();
void DspStartWork(u32 p1, void (*p2)(u16));
void DspFinishWork(u16 p1);

// osdsp.c
#ifdef __cplusplus
extern "C" {
STRUCT_DSP_TASK* DSPAddTask(STRUCT_DSP_TASK* task);
}
#endif // ifdef __cplusplus
void DSPAddPriorTask(DSPTaskInfo* task);

// osdsp_task.c
void DsyncFrame2(u32 p1, u32 p2, u32 p3);
void Dsp_Update_Request();
BOOL Dsp_Running_Check();
void DSP_Running_Start();

// unused/inlined in dspproc.c:
void DSPReleaseHalt3(u32 p1, u16 p2);
void DSPSendCommands(u32* p1, u32 p2);
void DSPReleaseHalt();
void DSPWaitFinish();
void Dswap(u32 p1, u32 p2, u32 p3);
void Dmix(u32 p1, u32 p2, u32 p3, s16 p4);
void Dcopy(u32 p1, u32 p2, u32 p3);
void DloadBuffer1(u32 p1, u32 p2);
void DloadBuffer(u32 p1, u32 p2, u32 p3);
void DsaveBuffer(u16 p1, u32 p2, u32 p3);
void wait_callback(u16 p1);
void DwaitFrame();
void DiplSec(u32 p1, void (*p2)(u16));
void DagbSec(u32 p1, void (*p2)(u16));
void dummy_callback(u16 p1);
void DsetDolbyDelay(u32 p1, u16 p2);

extern u8 DSP_prior_yield;
extern DSPTaskInfo* DSP_prior_task;

#endif
