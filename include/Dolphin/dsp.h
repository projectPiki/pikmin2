#ifndef _DOLPHIN_DSP_H
#define _DOLPHIN_DSP_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#define DSP_TASK_FLAG_CLEARALL 0x00000000
#define DSP_TASK_FLAG_ATTACHED 0x00000001
#define DSP_TASK_FLAG_CANCEL   0x00000002

#define DSP_TASK_STATE_INIT  0
#define DSP_TASK_STATE_RUN   1
#define DSP_TASK_STATE_YIELD 2
#define DSP_TASK_STATE_DONE  3

typedef void (*DSPCallback)(void* task);

typedef struct DSPTask {
	vu32 state;            // _00
	vu32 priority;         // _04
	vu32 flags;            // _08
	u16* iram_mmem_addr;   // _0C
	u32 iram_length;       // _10
	u32 iram_addr;         // _14
	u16* dram_mmem_addr;   // _18
	u32 dram_length;       // _1C
	u32 dram_addr;         // _20
	u16 dsp_init_vector;   // _24
	u16 dsp_resume_vector; // _26
	DSPCallback init_cb;   // _28
	DSPCallback res_cb;    // _2C
	DSPCallback done_cb;   // _30
	DSPCallback req_cb;    // _34
	struct DSPTask* next;  // _38
	struct DSPTask* prev;  // _3C
} DSPTask;

void __DSP_insert_task(DSPTask* task);
void __DSP_boot_task(DSPTask* task);
void __DSP_exec_task(DSPTask* curr, DSPTask* next);
void __DSP_remove_task(DSPTask* task);
void __DSP_add_task(DSPTask* task);

extern volatile u16 __DSPRegs[];
extern DSPTask* __DSP_tmp_task;
extern DSPTask* __DSP_last_task;
extern DSPTask* __DSP_first_task;
extern DSPTask* __DSP_curr_task;

void __DSP_debug_printf(char*, ...);

void DSPInit();
void DSPReset();
void DSPHalt();
void DSPSendMailToDSP(u32 mail);
u32 DSPCheckMailToDSP();
u32 DSPCheckMailFromDSP();
u32 DSPReadMailFromDSP();

#ifdef __cplusplus
}
#endif // ifdef __cplusplus

#endif
