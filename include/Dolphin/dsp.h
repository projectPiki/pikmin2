#ifndef _DOLPHIN_DSP_H
#define _DOLPHIN_DSP_H

#include "types.h"
#include "Dolphin/OS/OSUtil.h"
#include "Dolphin/OS/OSContext.h"
#include "Dolphin/OS/OSInterrupt.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

//////////////// DSP TYPES /////////////////
typedef struct STRUCT_DSP_TASK DSPTaskInfo;

// Digital signal processor callback.
typedef void (*DSPCallback)(void* task);

// Struct for digital signal processing information (size 0x50).
struct STRUCT_DSP_TASK {
	vu32 state;            // _00, state of task.
	vu32 priority;         // _04
	vu32 flags;            // _08
	u16* iram_mmem_addr;   // _0C, IRAM image info.
	u32 iram_length;       // _10
	u32 iram_addr;         // _14
	u16* dram_mmem_addr;   // _18, DRAM image info.
	u32 dram_length;       // _1C
	u32 dram_addr;         // _20
	u16 dsp_init_vector;   // _24, start vector on first exec.
	u16 dsp_resume_vector; // _26, start vector on resume.
	DSPCallback init_cb;   // _28, callbacks for states.
	DSPCallback res_cb;    // _2C
	DSPCallback done_cb;   // _30
	DSPCallback req_cb;    // _34
	DSPTaskInfo* next;     // _38, linked list.
	DSPTaskInfo* prev;     // _3C
	OSTime t_context;      // _40
	OSTime t_task;         // _48
};

// Task information storage.
extern DSPTaskInfo* __DSP_tmp_task;
extern DSPTaskInfo* __DSP_last_task;
extern DSPTaskInfo* __DSP_first_task;
extern DSPTaskInfo* __DSP_curr_task;

// Useful defines.
#define DSP_TASK_FLAG_CLEARALL 0x00000000
#define DSP_TASK_FLAG_ATTACHED 0x00000001
#define DSP_TASK_FLAG_CANCEL   0x00000002

#define DSP_TASK_STATE_INIT  0
#define DSP_TASK_STATE_RUN   1
#define DSP_TASK_STATE_YIELD 2
#define DSP_TASK_STATE_DONE  3

#define DSPGetTaskState(t)       (t->state) // u32
#define DSPGetTaskPriority(t)    (t->priority) // u32
#define DSPSetTaskPriority(t, x) (t->priority |= x) // x should be u32

////////////////////////////////////////////

////////////// DSP FUNCTIONS ///////////////
// Private functions.
void __DSP_exec_task(DSPTaskInfo* curr, DSPTaskInfo* next);
void __DSP_boot_task(DSPTaskInfo* task);
void __DSP_remove_task(DSPTaskInfo* task);
void __DSP_insert_task(DSPTaskInfo* task);
void __DSP_debug_printf(const char* format, ...);

// Basic DSP functions.
void DSPInit();
void DSPAssertInt();
void DSPSendMailToDSP(u32 mail);
u32 DSPReadMailFromDSP();
u32 DSPCheckMailToDSP();
u32 DSPCheckMailFromDSP();

// Used/defined in JSystem.
DSPTaskInfo* DSPAddTask(DSPTaskInfo* task);
void __DSPHandler(__OSInterrupt interrupt, OSContext* context);

// Unused/inlined in P2.
void __DSP_add_task(DSPTaskInfo* task);
void DSPHalt();
void DSPReset();

////////////////////////////////////////////

#ifdef __cplusplus
}
#endif // ifdef __cplusplus

#endif
