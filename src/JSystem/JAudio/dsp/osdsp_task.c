#include "JSystem/JAudio/DSP.h"
#include "Dolphin/hw_regs.h"

static volatile u8 DSP_prior_yield;
static int AUDIO_UPDATE_REQUEST;
DSPTaskInfo* DSP_prior_task;
static u32 sync_stack[3];

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void DebugPrint_TaskInfo(DSPTaskInfo* task)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void Check_Broken(DSPTaskInfo* task)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void Check_PriorBroken()
{
	// UNUSED FUNCTION
}

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus
/*
 * --INFO--
 * Address:	800AAD00
 * Size:	000304
 */
void __DSPHandler(__OSInterrupt interrupt, OSContext* context)
{
	OSContext funcContext;
	__DSPRegs[5] = ((u16)(__DSPRegs[5]) & ~0x28) | 0x80;
	OSClearContext(&funcContext);
	OSSetCurrentContext(&funcContext);

	if (DSP_prior_yield == 1 || DSP_prior_yield == 0) {
		__DSP_curr_task = DSP_prior_task;
	}

	while (DSPCheckMailFromDSP() == 0)
		;
	u32 mail = DSPReadMailFromDSP();

	if ((__DSP_curr_task->flags & 2) && mail == 0xDCD10002) {
		mail = 0xDCD10003;
	}

	switch (mail) {
	case 0xDCD10000:
		__DSP_curr_task->state = 1;
		if (__DSP_curr_task == DSP_prior_task) {
			DSP_prior_yield = 1;
		}
		if (__DSP_curr_task->init_cb != nullptr) {
			__DSP_curr_task->init_cb(__DSP_curr_task);
		}
		break;
	case 0xDCD10001:
		__DSP_curr_task->state = 1;
		if (__DSP_curr_task == DSP_prior_task) {
			DSP_prior_yield = 1;
			Dsp_Update_Request();
		}
		if (__DSP_curr_task->res_cb != nullptr) {
			__DSP_curr_task->res_cb(__DSP_curr_task);
		}
		break;
	case 0xDCD10002:
		DSPSendMailToDSP(0xCDD10001);
		while (DSPCheckMailToDSP() != 0)
			;
		__DSP_curr_task->state = 2;
		if (__DSP_curr_task->next == nullptr && AUDIO_UPDATE_REQUEST) {
			__DSP_exec_task(__DSP_curr_task, DSP_prior_task);
			AUDIO_UPDATE_REQUEST = 0;
			__DSP_curr_task      = DSP_prior_task;
		} else {
			__DSP_exec_task(__DSP_curr_task, __DSP_curr_task->next);
			__DSP_curr_task = __DSP_curr_task->next;
		}
		break;
	case 0xDCD10003:
		if (__DSP_curr_task->done_cb) {
			__DSP_curr_task->done_cb(__DSP_curr_task);
		}
		DSPSendMailToDSP(0xCDD10001);
		while (DSPCheckMailToDSP() != 0)
			;
		__DSP_curr_task->state = 3;
		if (__DSP_curr_task->next == nullptr) {
			__DSP_exec_task(nullptr, DSP_prior_task);
			__DSP_remove_task(__DSP_curr_task);
			__DSP_curr_task = DSP_prior_task;
		} else {
			__DSP_exec_task(nullptr, __DSP_curr_task->next);
			__DSP_curr_task = __DSP_curr_task->next;
			__DSP_remove_task(__DSP_curr_task->prev);
		}
		break;
	case 0xDCD10004:
		if (__DSP_curr_task->req_cb != nullptr) {
			__DSP_curr_task->req_cb(__DSP_curr_task);
		}
		break;
	case 0xDCD10005:
		if (__DSP_first_task == nullptr || AUDIO_UPDATE_REQUEST) {
			DSPSendMailToDSP(0xCDD10003);
			while (DSPCheckMailToDSP() != 0)
				;
			AUDIO_UPDATE_REQUEST = 0;
			__DSP_curr_task      = DSP_prior_task;
			Dsp_Update_Request();
		} else {
			DSP_prior_yield = 3;
			DSPSendMailToDSP(0xCDD10001);
			while (DSPCheckMailToDSP() != 0)
				;
			__DSP_exec_task(DSP_prior_task, __DSP_first_task);
			__DSP_curr_task = __DSP_first_task;
		}
		break;
	}

	OSClearContext(&funcContext);
	OSSetCurrentContext(context);
}
#ifdef __cplusplus
}
#endif // ifdef __cplusplus

/*
 * --INFO--
 * Address:	800AB020
 * Size:	000050
 */
void DsyncFrame2(u32 p1, u32 p2, u32 p3)
{
	if (DSP_prior_yield != TRUE) {
		sync_stack[0]        = p1;
		sync_stack[1]        = p2;
		sync_stack[2]        = p3;
		AUDIO_UPDATE_REQUEST = TRUE;
	} else {
		DsyncFrame(p1, p2, p3);
		AUDIO_UPDATE_REQUEST = FALSE;
	}
}

/*
 * --INFO--
 * Address:	800AB080
 * Size:	000040
 */
static void Dsp_Update_Request()
{
	if (AUDIO_UPDATE_REQUEST != 0) {
		DsyncFrame2(sync_stack[0], sync_stack[1], sync_stack[2]);
	}
}

/*
 * --INFO--
 * Address:	800AB0C0
 * Size:	000014
 */
BOOL Dsp_Running_Check() { return (DSP_prior_yield == TRUE) ? TRUE : FALSE; }

/*
 * --INFO--
 * Address:	800AB0E0
 * Size:	00000C
 */
void Dsp_Running_Start() { DSP_prior_yield = 1; }
