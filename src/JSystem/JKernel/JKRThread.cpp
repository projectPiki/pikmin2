#include "Dolphin/os.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JKernel/JKRThread.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

JSUList<JKRThread> JKRThread::sThreadList(false);
JSUList<JKRTask> JKRTask::sTaskList;
OSMessageQueue JKRTask::sEndMsgQueue; // THIS ISN'T EVEN USED. needed bc of .comm bug lol. lmao.

JKRThreadSwitch* JKRThreadSwitch::sManager;
u32 JKRThreadSwitch::sTotalCount;
OSTime JKRThreadSwitch::sTotalStart;

/*
 * --INFO--
 * Address:	80025638
 * Size:	0000B8
 * __ct__9JKRThreadFUlii
 */
JKRThread::JKRThread(u32 stackSize, int msgCount, int threadPriority)
    : JKRDisposer()
    , mLink(this)
    , mLoadInfo()
{
	JKRHeap* heap = JKRHeap::findFromRoot(this);
	if (heap == nullptr) {
		heap = JKRHeap::sSystemHeap;
	}
	setCommon_heapSpecified(heap, stackSize, threadPriority);
	setCommon_mesgQueue(mHeap, msgCount);
}

/*
 * --INFO--
 * Address:	800256F0
 * Size:	0000A0
 * __ct__9JKRThreadFP7JKRHeapUlii
 */
JKRThread::JKRThread(JKRHeap* heap, u32 stackSize, int msgCount, int threadPriority)
    : JKRDisposer()
    , mLink(this)
    , mLoadInfo()
{
	if (heap == nullptr) {
		heap = JKRHeap::sCurrentHeap;
	}
	setCommon_heapSpecified(heap, stackSize, threadPriority);
	setCommon_mesgQueue(mHeap, msgCount);
}

/*
 * --INFO--
 * Address:	80025790
 * Size:	0000A8
 * __ct__9JKRThreadFP8OSThreadi
 */
JKRThread::JKRThread(OSThread* thread, int msgCount)
    : JKRDisposer()
    , mLink(this)
    , mLoadInfo()
{
	mHeap      = nullptr;
	mThread    = thread;
	mStackSize = (u32)thread->stackEnd - (u32)thread->stackBase;
	mStack     = thread->stackBase;
	setCommon_mesgQueue(JKRHeap::sSystemHeap, msgCount);
}

/*
 * --INFO--
 * Address:	80025838
 * Size:	0000D8
 * __dt__9JKRThreadFv
 */
JKRThread::~JKRThread()
{
	sThreadList.remove(&mLink);
	if (mHeap != nullptr) {
		if (!OSIsThreadTerminated(mThread)) {
			OSDetachThread(mThread);
			OSCancelThread(mThread);
		}
		JKRHeap::free(mStack, mHeap);
		JKRHeap::free(mThread, mHeap);
	}
	JKRHeap::free(mMsgBuffer, nullptr);
}

/*
 * --INFO--
 * Address:	80025910
 * Size:	000070
 */
void JKRThread::setCommon_mesgQueue(JKRHeap* heap, int msgCount)
{
	mMsgCount  = msgCount;
	mMsgBuffer = (OSMessage*)JKRHeap::alloc(mMsgCount << 2, 0, heap);
	OSInitMessageQueue(&mMsgQueue, (void**)mMsgBuffer, mMsgCount);
	JKRThread::sThreadList.append(&mLink);
	mCurrentHeap      = 0;
	mCurrentHeapError = 0;
}

/*
 * --INFO--
 * Address:	80025980
 * Size:	000090
 */
BOOL JKRThread::setCommon_heapSpecified(JKRHeap* heap, u32 stackSize, int threadPriority)
{
	mHeap      = heap;
	mStackSize = stackSize & ~0x1F;
	mStack     = JKRHeap::alloc(mStackSize, 0x20, mHeap);
	mThread    = (OSThread*)JKRHeap::alloc(sizeof(OSThread), 0x20, mHeap);
	return OSCreateThread(mThread, &JKRThread::start, this, (void*)((u32)mStack + mStackSize), mStackSize, threadPriority, 1);
}

/*
 * --INFO--
 * Address:	80025A10
 * Size:	00002C
 */
void* JKRThread::start(void* thread) { return static_cast<JKRThread*>(thread)->run(); }

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
JKRThread::TLoad* JKRThread::searchThreadLoad(OSThread* osThread)
{
	JSUList<JKRThread>& threadList = getList();
	JSUListIterator<JKRThread> iterator;
	for (iterator = threadList.getFirst(); iterator != threadList.getEnd(); ++iterator) {
		JKRThread* thread = iterator.getObject();
		if (thread->mThread == osThread) {
			return &thread->mLoadInfo;
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	80025A44
 * Size:	000184
 */
void JKRThreadSwitch::loopProc()
{
	if (0 >= _10) {
		return;
	}
	++_0C;
	if (_0C < _10) {
		return;
	}
	OSDisableInterrupts();
	OSDisableScheduler();
	JKRThread::TLoad* v1 = JKRThread::searchThreadLoad(OSGetCurrentThread());

	_0C = 0;
	_18 = OSGetTime() - getTotalStart();
	if (v1 != nullptr) {
		v1->mCost += OSGetTick() - v1->mLastTick;
	}
	if (_20 != 0) {
		draw(_24, _20);
	} else {
		draw(_24);
	}
	for (JSULink<JKRThread>* link = JKRThread::sThreadList.getFirst(); link != nullptr; link = link->getNext()) {
		JKRThread* thread              = link->getObject();
		thread->mLoadInfo.mSwitchCount = 0;
		thread->mLoadInfo.mCost        = 0;
		thread->mLoadInfo.mLastTick    = 0;
	}
	sTotalCount = 0;
	sTotalStart = OSGetTime();
	if (v1 != nullptr) {
		v1->mLastTick = OSGetTick();
	}
	OSEnableScheduler();
	OSEnableInterrupts();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000154
 * __ct__7JKRTaskFiiUl
 */
JKRTask::JKRTask(int msgCount, int threadPriority, size_t stackSize)
    : JKRThread(stackSize, msgCount, threadPriority)
    , _7C(this)
    , _94(nullptr)
{
	// UNUSED FUNCTION
	OSResumeThread(mThread);
}

/*
 * --INFO--
 * Address:	80025BC8
 * Size:	000110
 * __dt__7JKRTaskFv
 */
JKRTask::~JKRTask() { sTaskList.remove(&_7C); }

/*
 * --INFO--
 * Address:	80025CD8
 * Size:	0002A4
 */
JKRTask* JKRTask::create(int msgCount, int threadPriority, size_t stackSize, JKRHeap* heap)
{
	if (heap == nullptr) {
		heap = JKRHeap::sCurrentHeap;
	}
	JKRTask* task = new (heap, 0) JKRTask(msgCount, threadPriority, stackSize);
	if (task == nullptr) {
		return nullptr;
	}
	task->_8C = new (heap, 0) Message[msgCount];
	task->_90 = msgCount;
	if (task->_8C == nullptr) {
		delete task;
		return nullptr;
	}
	for (int i = 0; i < msgCount; i++) {
		task->_8C[i]._00 = nullptr;
	}
	sTaskList.append(&task->_7C);
	return task;
}

/*
 * --INFO--
 * Address:	80025F7C
 * Size:	00009C
 * run__7JKRTaskFv
 */
void* JKRTask::run()
{
	Message* msg;
	OSInitFastCast();
	while (true) {
		msg = (Message*)waitMessageBlock();
		if (msg->_00 != nullptr) {
			msg->_00(msg->_04);
			if (_94 != nullptr) {
				OSSendMessage(_94, msg->_08, OS_MESSAGE_NOBLOCK);
			}
		}
		msg->_00 = nullptr;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
JKRTask::Message* JKRTask::searchBlank()
{
	for (int i = 0; i < _90; i++) {
		if (_8C[i]._00 == nullptr) {
			return _8C + i;
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	80026018
 * Size:	0000B0
 */
bool JKRTask::request(RequestCallback callback, void* p2, void* p3)
{
	Message* msg = searchBlank();
	if (msg == nullptr) {
		return false;
	}
	msg->_00        = callback;
	msg->_04        = p2;
	msg->_08        = p3;
	bool sendResult = (OSSendMessage(&mMsgQueue, msg, OS_MESSAGE_NOBLOCK));
	if (!sendResult) {
		msg->_00 = nullptr;
	}
	return sendResult;
}
