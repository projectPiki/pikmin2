#include "JSystem/JAudio/JAS/JASAudioThread.h"
#include "Dolphin/dsp.h"
#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASDsp.h"
#include "JSystem/JAudio/JAS/JASHeap.h"
#include "JSystem/JAudio/JAS/JASKernel.h"
#include "JSystem/JAudio/JAS/JASDriver.h"
#include "JSystem/JAudio/JAS/JASGenericMemPool.h"
#include "JSystem/JAudio/JAS/JASChannel.h"
#include "JSystem/JKernel/JKRThread.h"

JASAudioThread* JASAudioThread::sAudioThread;
OSThreadQueue JASAudioThread::sThreadQueue;
u32 JASAudioThread::sVFrameCounter;
volatile int JASAudioThread::snIntCount;
bool JASAudioThread::sbPauseFlag;

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
JASAudioThread::JASAudioThread(int stackSize, int msgCount, u32 threadPriority)
    : JKRThread(JASDram, stackSize, msgCount, threadPriority)
{
}

/**
 * @note Address: 0x800A5B88
 * @note Size: 0x74
 */
void JASAudioThread::create(s32 threadPriority)
{
	sAudioThread = new (JASDram, 0) JASAudioThread(0x1000, 0x10, threadPriority);
	OSResumeThread(sAudioThread->mThread);
}

/**
 * @note Address: 0x800A5BFC
 * @note Size: 0x38
 */
void JASAudioThread::stop()
{
	if (sAudioThread) {
		OSJamMessage(&sAudioThread->mMsgQueue, (void*)AUDIOMSG_Stop, OS_MESSAGE_BLOCK);
	}
}

/**
 * @note Address: 0x800A5C34
 * @note Size: 0x17C
 */
void* JASAudioThread::run()
{
	OSInitFastCast();
	JASDriver::initAI(DMACallback);
	JASDsp::boot(DSPCallback);
	JASDsp::initBuffer();
	JASDSPChannel::initAll();

	JASSingletonHolder<JASMemPool<JASChannel, JASThreadingModel::SingleThreaded>, JASCreationPolicy::NewFromRootHeap>::getInstance()
	    ->newMemPool(0x118, 0x48);
	JASDriver::startDMA();

	while (true) {
		OSMessage msg;
		OSReceiveMessage(&mMsgQueue, &msg, OS_MESSAGE_BLOCK);
		switch ((int)msg) {
		case AUDIOMSG_DMA:
			if (sbPauseFlag) {
				JASDriver::stopDMA();
				OSSleepThread(&sThreadQueue);
			}
			sVFrameCounter++;
			JASDriver::updateDac();
			JASDriver::updateDacCallback();
			break;

		case AUDIOMSG_DSP:
			snIntCount--;
			if (snIntCount == 0) {
				JASKernel::probeFinish(7);
				JASDriver::finishDSPFrame();
			} else {
				JASKernel::probeStart(2, "SFR_DSP");
				JASDriver::updateDSP();
				JASKernel::probeFinish(2);
			}
			break;

		case AUDIOMSG_Stop:
			OSExitThread(nullptr);
			break;
		}
	}
}

/**
 * @note Address: 0x800A5DB0
 * @note Size: 0x48
 */
void JASAudioThread::DMACallback()
{
	JASKernel::probeFinish(4);
	JASKernel::probeStart(4, "UPDATE-DAC");
	OSSendMessage(&sAudioThread->mMsgQueue, (void*)AUDIOMSG_DMA, OS_MESSAGE_NOBLOCK);
}

/**
 * @note Address: 0x800A5DF8
 * @note Size: 0x64
 */
void JASAudioThread::DSPCallback(void*)
{
	while (DSPCheckMailFromDSP() == 0) { }

	u32 mail = DSPReadMailFromDSP();
	if (mail >> 0x10 == 0xF355) {
		if ((mail & 0xFF00) == 0xFF00) {
			OSSendMessage(&sAudioThread->mMsgQueue, (void*)AUDIOMSG_DSP, OS_MESSAGE_NOBLOCK);
		} else {
			JASDsp::finishWork(mail);
		}
	}
}
