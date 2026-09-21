#include "Dolphin/OS/OSMessage.h"
#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASCalc.h"
#include "JSystem/JAudio/JAS/JASHeap.h"
#include "JSystem/JAudio/JAS/JASKernel.h"
#include "JSystem/JAudio/JAS/JASMutexLock.h"
#include "JSystem/JAudio/JAS/JASThread.h"
#include "JSystem/JKernel/JKRThread.h"

/**
 * @note Address: 0x800A8840
 * @note Size: 0x60
 */
JASTaskThread::JASTaskThread(int threadPriority, int msgCount, u32 stackSize)
    : JKRThread(JASDram, stackSize, msgCount, threadPriority)
    , _84(0)
{
	OSInitThreadQueue(&_7C);
}

/**
 * @note Address: 0x800A88A0
 * @note Size: 0x128
 */
JASTaskThread::~JASTaskThread()
{
	OSMessage msg;
	BOOL received;
	while (true) {
		msg = waitMessage(&received);
		if (!received) {
			return;
		}
		JASCmdHeap* heap = JASKernel::getCommandHeap();
		heap->free(msg);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x198
 */
JASCmdHeap::Header* JASTaskThread::allocCallStack(RunFunction cmd, const void* msg, u32 msgLength)
{
	// UNUSED FUNCTION
	// TODO: Wrong.
	size_t fullLength          = msgLength + 8;
	JASCmdHeap::Header* header = (JASCmdHeap::Header*)JASKernel::getCommandHeap()->alloc(fullLength);
	if (header == nullptr) {
		return nullptr;
	}
	header->mMsgLength = 1;
	JASCalc::bcopy(msg, header + 1, msgLength);
	header->mCommand = cmd;
	return header;
}

/**
 * @note Address: N/A
 * @note Size: 0x184
 */
void* JASTaskThread::allocCallStack(RunFunction cmd, void* data)
{
	JASCmdHeap* heap;
	JASThreadCallStack* callStack;
	heap      = JASKernel::getCommandHeap();
	callStack = (JASThreadCallStack*)heap->alloc(0xc);
	if (callStack == nullptr) {
		return nullptr;
	}
	callStack->_04         = 0;
	callStack->mVoidBuffer = data;
	callStack->mRunFunc    = cmd;
	return callStack;
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A89C8
 * @note Size: 0x260
 */
int JASTaskThread::sendCmdMsg(RunFunction cmd, const void* msg, u32 msgLength)
{
	void* header = allocCallStack(cmd, msg, msgLength);
	if (header == nullptr) {
		return FALSE;
	}
	BOOL sendResult = sendMessage(header);
	if (!sendResult) {
		JASKernel::getCommandHeap()->free(header);
	}
	return sendResult;
}

/**
 * @note Address: 0x800A8C28
 * @note Size: 0x234
 */
int JASTaskThread::sendCmdMsg(RunFunction func, void* p2)
{
	void* pvVar1;

	pvVar1 = allocCallStack(func, p2);
	if (pvVar1 == NULL) {
		return 0;
	}
	int iVar2 = sendMessage(pvVar1);
	if (iVar2 == 0) {
		JASCmdHeap* heap = JASKernel::getCommandHeap();
		heap->free(pvVar1);
	}
	return iVar2;
}

/**
 * @note Address: 0x800A8E5C
 * @note Size: 0x148
 */
void* JASTaskThread::run()
{
	OSInitFastCast();
	do {
		JASThreadCallStack* callStack = static_cast<JASThreadCallStack*>(waitMessageBlock());
		if (_84) {
			OSSleepThread(&_7C);
		}
		if (callStack->_04) {
			callStack->mRunFunc(callStack->mByteBuffer);
		} else {
			callStack->mRunFunc(callStack->mVoidBuffer);
		}
		JASCmdHeap* heap = JASKernel::getCommandHeap();
		heap->free(callStack);
	} while (true);
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
void JASTaskThread::pause(bool)
{
	// UNUSED FUNCTION
}
