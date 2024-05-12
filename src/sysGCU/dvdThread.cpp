#include "AppThread.h"
#include "Dolphin/OS/OSMessage.h"
#include "Dolphin/OS/OSMutex.h"
#include "Dolphin/OS/OSThread.h"
#include "DvdThreadCommand.h"
#include "IDelegate.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "stl/string.h"
#include "P2Macros.h"

/**
 * @note Address: 0x80424818
 * @note Size: 0x80
 */
DvdThreadCommand::DvdThreadCommand()
    : mLink(this)
{
	mCallBack       = nullptr;
	mLoadType       = DvdThreadCommand::LT_Archive;
	mArcPath        = nullptr;
	mMountedArchive = nullptr;
	_10             = 32;
	mHeapDirection  = EHD_Unknown1;
	mMode           = CM_Initialized;
	OSInitMutex(&mMutex);
	mHeap = nullptr;
	OSInitMessageQueue(&mMsgQueue, &mMsgBuffer, 1);
}

/**
 * @note Address: 0x80424898
 * @note Size: 0x20
 */
void DvdThreadCommand::loadUseCallBack(IDelegate* cb)
{
	mCallBack       = cb;
	mLoadType       = DvdThreadCommand::LT_Callback;
	mArcPath        = nullptr;
	mMountedArchive = nullptr;
	mMode           = CM_Initialized;
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void DvdThreadCommand::invokeCallBack()
{
	P2ASSERTLINE(132, mCallBack);
	mCallBack->invoke();
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
bool DvdThreadCommand::checkExp(const char* path) const
{
	u32 counter;
	u32 pathLen     = strlen(mArcPath);
	u32 len         = pathLen - 1;
	const char* str = &mArcPath[len];

	// Find the last '.' in the path
	do {
		if (str[0] == '.') {
			break;
		}
		str--;
		len--;
	} while (true);

	char newStr[4];
	if (pathLen - 1 - len < 4) {
		counter = 0;
		for (counter; pathLen > (len + counter); counter++) {
			newStr[counter] = mArcPath[counter + 1 + len];
		}

		newStr[counter] = 0;

	} else {
		newStr[0] = 0;
	}

	return strcmp(path, newStr) == 0;
}

/**
 * @note Address: 0x804248B8
 * @note Size: 0x4C
 */
DvdThread::DvdThread(u32 stackSize, int msgCount, int threadPriority)
    : AppThread(stackSize, msgCount, threadPriority)
    , mCommandList()
{
	OSResumeThread(mThread);
}

/**
 * @note Address: 0x80424904
 * @note Size: 0x194
 */
void* DvdThread::run()
{
	while (true) {
		// Wait for a message
		OSMessage msg;
		OSReceiveMessage(&mMsgQueue, &msg, OS_MESSAGE_BLOCK);

		DvdThreadCommand* cmd = static_cast<DvdThreadCommand*>(msg);
		OSLockMutex(&cmd->mMutex);

		// Process the command
		cmd->mMode = DvdThreadCommand::CM_Processing;

		if (cmd->mLoadType == DvdThreadCommand::LT_Archive) {
			cmd->checkExp("arc");
		}

		// Load the data
		switch (cmd->mLoadType) {
		case DvdThreadCommand::LT_Callback:
			cmd->invokeCallBack();
			break;
		case DvdThreadCommand::LT_Archive:
			loadArchive(cmd);
			break;
		case DvdThreadCommand::LT_File:
			loadFile(cmd);
			break;
		}

		// Finish the command
		cmd->mMode = DvdThreadCommand::CM_Completed;

		// Send a message to the main thread (DVD THREAD LOAD FINISHED)
		OSSendMessage(&cmd->mMsgQueue, (OSMessage)'DTLF', OS_MESSAGE_NOBLOCK);

		// Remove the command from the list
		mCommandList.remove(&cmd->mLink);
		OSUnlockMutex(&cmd->mMutex);
	}
}

/**
 * @note Address: 0x80424A98
 * @note Size: 0x9C
 */
void DvdThread::loadArchive(DvdThreadCommand* cmd)
{
	JKRHeap* currentHeap = cmd->mHeap->becomeCurrentHeap();
	JKRArchive* arc      = JKRMountArchive(cmd->mArcPath, JKRArchive::EMM_Mem, cmd->mHeap,
                                      (cmd->mHeapDirection == 1 ? JKRArchive::EMD_Head : JKRArchive::EMD_Tail));
	P2ASSERTLINE(275, arc);
	cmd->mMountedArchive = arc;
	currentHeap->becomeCurrentHeap();
}

/**
 * @note Address: 0x80424B34
 * @note Size: 0x108
 */
void DvdThread::loadFile(DvdThreadCommand* cmd)
{
	int heapSize         = (cmd->mHeapDirection == DvdThreadCommand::EHD_Unknown1) ? 0x20 : -0x20;
	JKRHeap* currentHeap = cmd->mHeap->becomeCurrentHeap();
	char* path           = cmd->getArcPath();
	JKRDvdFile* file     = new (JKRGetSystemHeap(), 0) JKRDvdFile(path);
	P2ASSERTLINE(346, file);
	int fileSize = file->getFileSize();
	u8* data     = new (heapSize) u8[fileSize];
	file->readData(data, fileSize, 0);
	delete file;
	cmd->mMountedArchive = (JKRArchive*)data;
	currentHeap->becomeCurrentHeap();
}

/**
 * @note Address: 0x80424C3C
 * @note Size: 0x60
 */
void DvdThread::sendCommand(DvdThreadCommand* cmd)
{
	cmd->mMode = DvdThreadCommand::CM_Initialized;
	mCommandList.append(&cmd->mLink);

	while (!OSSendMessage(&mMsgQueue, (OSMessage)cmd, OS_MESSAGE_NOBLOCK)) {
		;
	}
}

/**
 * @note Address: 0x80424C9C
 * @note Size: 0xB0
 */
bool DvdThread::sync(DvdThreadCommand* cmd, DvdThread::ESyncBlockFlag blockFlag)
{
	bool result = false;
	if (blockFlag == BLOCKFLAG_Unk0) {
		while (cmd->mMode != DvdThreadCommand::CM_Completed) {
			OSMessage msg;
			OSReceiveMessage(&cmd->mMsgQueue, &msg, OS_MESSAGE_BLOCK);
			P2ASSERTLINE(396, (u32)msg == 'DTLF');
		}

		result = true;
	} else if (cmd->mMode == DvdThreadCommand::CM_Completed) {
		result = true;
	}

	return result;
}

/**
 * @note Address: 0x80424D4C
 * @note Size: 0xCC
 */
int DvdThread::syncAll(DvdThread::ESyncBlockFlag blockFlag)
{
	int failCount = 0;
	for (JSUListIterator<DvdThreadCommand> iterator(mCommandList.getFirst()); iterator != nullptr; iterator++) {
		DvdThreadCommand* cmd = iterator.getObject();
		if (!sync(cmd, blockFlag)) {
			failCount++;
		}
	}

	return failCount;
}
