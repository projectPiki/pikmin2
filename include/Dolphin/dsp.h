#ifndef _DOLPHIN_DSP_H
#define _DOLPHIN_DSP_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

typedef struct DSPTask {
	s32 _00;             // _00
	u32 _04;             // _04
	u32 _08;             // _08
	u32 _0C;             // _0C
	u32 _10;             // _10
	unknown _14;         // _14
	u32 _18;             // _18
	u32 _1C;             // _1C
	u32 _20;             // _20
	u16 _24;             // _24
	u16 _26;             // _26
	void* _28;           // _28
	unknown _2C;         // _2C
	void* _30;           // _30
	void* _34;           // _34
	struct DSPTask* _38; // _38
	struct DSPTask* _3C; // _3C
} DSPTask;

extern volatile u16 __DSPRegs[];
extern DSPTask* __DSP_tmp_task;
extern DSPTask* __DSP_last_task;
extern DSPTask* __DSP_first_task;
extern DSPTask* __DSP_curr_task;

void __DSP_debug_printf(char*, ...);

void DSPInit();

#ifdef __cplusplus
}
#endif // ifdef __cplusplus

#endif
