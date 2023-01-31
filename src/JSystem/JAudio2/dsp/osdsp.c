#include "Dolphin/os.h"
#include "JSystem/JAudio2/DSP.h"
#include "types.h"

/*
 * --INFO--
 * Address:	800AAC20
 * Size:	000060
 */
STRUCT_DSP_TASK* DSPAddTask(STRUCT_DSP_TASK* task)
{
	int interrupts;
	interrupts = OSDisableInterrupts();
	__DSP_insert_task(task);
	task->_00 = 0;
	task->_08 = 1;
	OSRestoreInterrupts(interrupts);
	return task;
}

/*
 * --INFO--
 * Address:	800AAC80
 * Size:	00007C
 */
void DSPAddPriorTask__FP15STRUCT_DSP_TASK(STRUCT_DSP_TASK* task)
{
	int interrupts;
	if (DSP_prior_task != nullptr) {
		OSReport("Already inited prior DSP task\n");
		return;
	}
	interrupts     = OSDisableInterrupts();
	DSP_prior_task = task;
	task->_00      = 0;
	task->_08      = 1;
	__DSP_boot_task(task);
	OSRestoreInterrupts(interrupts);
}
