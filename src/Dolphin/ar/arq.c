#include "Dolphin/ar.h"

const char* __ARQVersion = "<< Dolphin SDK - ARQ\trelease build: Nov 26 2003 05:19:43 (0x2301) >>";

static ARQRequest* __ARQRequestQueueHi;
static ARQRequest* __ARQRequestTailHi;
static ARQRequest* __ARQRequestQueueLo;
static ARQRequest* __ARQRequestTailLo;
static ARQRequest* __ARQRequestPendingHi;
static ARQRequest* __ARQRequestPendingLo;
static ARQCallback __ARQCallbackHi;
static ARQCallback __ARQCallbackLo;
static u32 __ARQChunkSize;

static volatile BOOL __ARQ_init_flag = FALSE;

void __ARQPopTaskQueueHi(void);
void __ARQServiceQueueLo(void);
void __ARQCallbackHack(void);
void __ARQInterruptServiceRoutine(void);
void __ARQInitTempQueue(void);
void __ARQPushTempQueue(ARQRequest* task);

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void __ARQPopTaskQueueHi()
{
	if (__ARQRequestQueueHi) {
		if (__ARQRequestQueueHi->type == ARQ_TYPE_MRAM_TO_ARAM) {
			ARStartDMA(__ARQRequestQueueHi->type, __ARQRequestQueueHi->source, __ARQRequestQueueHi->dest, __ARQRequestQueueHi->length);
		} else {
			ARStartDMA(__ARQRequestQueueHi->type, __ARQRequestQueueHi->dest, __ARQRequestQueueHi->source, __ARQRequestQueueHi->length);
		}

		__ARQCallbackHi = __ARQRequestQueueHi->callback;

		__ARQRequestPendingHi = __ARQRequestQueueHi;

		__ARQRequestQueueHi = __ARQRequestQueueHi->next;
	}
}

/*
 * --INFO--
 * Address:	800D41BC
 * Size:	000100
 */
void __ARQServiceQueueLo()
{

	if ((__ARQRequestPendingLo == nullptr) && (__ARQRequestQueueLo)) {
		__ARQRequestPendingLo = __ARQRequestQueueLo;
		__ARQRequestQueueLo   = __ARQRequestQueueLo->next;
	}

	if (__ARQRequestPendingLo) {
		if (__ARQRequestPendingLo->length <= __ARQChunkSize) {

			if (__ARQRequestPendingLo->type == ARQ_TYPE_MRAM_TO_ARAM) {
				ARStartDMA(__ARQRequestPendingLo->type, __ARQRequestPendingLo->source, __ARQRequestPendingLo->dest,
				           __ARQRequestPendingLo->length);
			} else {
				ARStartDMA(__ARQRequestPendingLo->type, __ARQRequestPendingLo->dest, __ARQRequestPendingLo->source,
				           __ARQRequestPendingLo->length);
			}

			__ARQCallbackLo = __ARQRequestPendingLo->callback;

		} else if (__ARQRequestPendingLo->type == ARQ_TYPE_MRAM_TO_ARAM) {
			ARStartDMA(__ARQRequestPendingLo->type, __ARQRequestPendingLo->source, __ARQRequestPendingLo->dest, __ARQChunkSize);

		} else {
			ARStartDMA(__ARQRequestPendingLo->type, __ARQRequestPendingLo->dest, __ARQRequestPendingLo->source, __ARQChunkSize);
		}

		__ARQRequestPendingLo->length -= __ARQChunkSize;
		__ARQRequestPendingLo->source += __ARQChunkSize;
		__ARQRequestPendingLo->dest += __ARQChunkSize;
	}
}

/*
 * --INFO--
 * Address:	800D42BC
 * Size:	000004
 */
void __ARQCallbackHack() { }

/*
 * --INFO--
 * Address:	800D42C0
 * Size:	0000CC
 */
void __ARQInterruptServiceRoutine()
{
	if (__ARQCallbackHi) {
		(*__ARQCallbackHi)((u32)__ARQRequestPendingHi);
		__ARQRequestPendingHi = nullptr;
		__ARQCallbackHi       = nullptr;

	} else if (__ARQCallbackLo) {
		(*__ARQCallbackLo)((u32)__ARQRequestPendingLo);
		__ARQRequestPendingLo = nullptr;
		__ARQCallbackLo       = nullptr;
	}

	__ARQPopTaskQueueHi();

	if (__ARQRequestPendingHi == nullptr) {
		__ARQServiceQueueLo();
	}
}

/*
 * --INFO--
 * Address:	800D438C
 * Size:	000070
 */
void ARQInit()
{
	if (__ARQ_init_flag == TRUE) {
		return;
	}

	OSRegisterVersion(__ARQVersion);

	__ARQRequestQueueHi = __ARQRequestQueueLo = nullptr;
	__ARQChunkSize                            = ARQ_CHUNK_SIZE_DEFAULT;
	ARRegisterDMACallback(&__ARQInterruptServiceRoutine);
	__ARQRequestPendingHi = nullptr;
	__ARQRequestPendingLo = nullptr;
	__ARQCallbackHi       = nullptr;
	__ARQCallbackLo       = nullptr;

	__ARQ_init_flag = TRUE;
}

/*
 * --INFO--
 * Address:	800D43FC
 * Size:	00015C
 */
void ARQPostRequest(ARQRequest* task, u32 owner, u32 type, u32 priority, u32 source, u32 dest, u32 length, ARQCallback callback)
{
	BOOL enabled;

	task->next   = nullptr;
	task->owner  = owner;
	task->type   = type;
	task->source = source;
	task->dest   = dest;
	task->length = length;

	if (callback) {
		task->callback = callback;
	} else {
		task->callback = (ARQCallback)&__ARQCallbackHack;
	}

	enabled = OSDisableInterrupts();

	switch (priority) {
	case ARQ_PRIORITY_LOW:
		if (__ARQRequestQueueLo) {
			__ARQRequestTailLo->next = task;
		} else {
			__ARQRequestQueueLo = task;
		}
		__ARQRequestTailLo = task;

		break;

	case ARQ_PRIORITY_HIGH:
		if (__ARQRequestQueueHi) {
			__ARQRequestTailHi->next = task;
		} else {
			__ARQRequestQueueHi = task;
		}

		__ARQRequestTailHi = task;

		break;
	}

	if ((__ARQRequestPendingHi == nullptr) && (__ARQRequestPendingLo == nullptr)) {
		__ARQPopTaskQueueHi();

		if (__ARQRequestPendingHi == nullptr) {
			__ARQServiceQueueLo();
		}
	}

	OSRestoreInterrupts(enabled);
}
