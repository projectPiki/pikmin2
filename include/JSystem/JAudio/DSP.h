#ifndef _JSYSTEM_DSP_H
#define _JSYSTEM_DSP_H

#include "types.h"
#include "Dolphin/dsp.h"

// dspproc.c
void DSPReleaseHalt2(u32 msg);
static void setup_callback(u16 p1);
void DsetupTable(u32 p1, u32 p2, u32 p3, u32 p4, u32 p5);
void DsetMixerLevel(f32 mixerLevel);
void DsyncFrame(u32 p1, u32 p2, u32 p3);

// dsptask.c
static void DspHandShake();
void DspBoot(DSPCallback callback);
static void DspInitWork();
int DspStartWork(u32 p1, void (*p2)(u16));
void DspFinishWork(u16 p1);

// osdsp.c
void DSPAddPriorTask(DSPTaskInfo* task);

// osdsp_task.c
void DsyncFrame2(u32 p1, u32 p2, u32 p3);
static void Dsp_Update_Request();
BOOL Dsp_Running_Check();
void Dsp_Running_Start();

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

void DSPReleaseHalt2(u32 msg);
u16 DSP_CreateMap2(u32 msg);
int DSPSendCommands2(u32* msgs, u32 param_1, void (*param_2)(u16));
void DsetupTable(u32 param_0, u32 param_1, u32 param_2, u32 param_3, u32 param_4);
void DsetMixerLevel(f32 level);

extern DSPTaskInfo* DSP_prior_task;

#endif
