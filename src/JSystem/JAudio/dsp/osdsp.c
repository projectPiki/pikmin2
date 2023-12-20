#include "Dolphin/os.h"
#include "Dolphin/dsp.h"
#include "JSystem/JAudio/DSP.h"
#include "types.h"

/**
 * @note Address: 0x800AAC20
 * @note Size: 0x60
 */
DSPTaskInfo* DSPAddTask(DSPTaskInfo* task)
{
	int interrupts;
	interrupts = OSDisableInterrupts();
	__DSP_insert_task(task);
	task->state = DSP_TASK_STATE_INIT;
	task->flags = DSP_TASK_FLAG_ATTACHED;
	OSRestoreInterrupts(interrupts);
	return task;
}

/**
 * @note Address: 0x800AAC80
 * @note Size: 0x7C
 */
void DSPAddPriorTask(DSPTaskInfo* task)
{
	int interrupts;
	if (DSP_prior_task != nullptr) {
		OSReport("Already inited prior DSP task\n");
		return;
	}
	interrupts     = OSDisableInterrupts();
	DSP_prior_task = task;
	task->state    = DSP_TASK_STATE_INIT;
	task->flags    = DSP_TASK_FLAG_ATTACHED;
	__DSP_boot_task(task);
	OSRestoreInterrupts(interrupts);
}
