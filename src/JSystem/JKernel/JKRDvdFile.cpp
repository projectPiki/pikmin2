#include "Dolphin/os.h"
#include "types.h"
#include "Dolphin/dvd.h"
#include "JSystem/JKernel/JKRFile.h"
#include "JSystem/JSupport/JSUList.h"

JSUList<JKRDvdFile> JKRDvdFile::sDvdList;

/**
 * __ct__10JKRDvdFileFv
 *
 * @note Address: 0x8001D0B8
 * @note Size: 0x74
 */
JKRDvdFile::JKRDvdFile()
    : JKRFile()
    , mLink(this)
{
	initiate();
}

/**
 * __ct__10JKRDvdFileFPCc
 *
 * @note Address: 0x8001D12C
 * @note Size: 0xB0
 */
JKRDvdFile::JKRDvdFile(const char* path)
    : JKRFile()
    , mLink(this)
{
	initiate();
	mFileOpen = open(path);
	if (mFileOpen)
		return;
}

/**
 * __ct__10JKRDvdFileFl
 *
 * @note Address: 0x8001D1DC
 * @note Size: 0xB0
 */
JKRDvdFile::JKRDvdFile(s32 entryNum)
    : JKRFile()
    , mLink(this)
{
	initiate();

	mFileOpen = open(entryNum);
	if (mFileOpen)
		return;
}

/**
 * __dt__10JKRDvdFileFv
 *
 * @note Address: 0x8001D28C
 * @note Size: 0x9C
 */
JKRDvdFile::~JKRDvdFile() { close(); }

/**
 * @note Address: 0x8001D328
 * @note Size: 0x6C
 */
void JKRDvdFile::initiate()
{
	mDvdFile = this;
	OSInitMutex(&mDvdMutex);
	OSInitMutex(&mAramMutex);
	OSInitMessageQueue(&mMessageQueue2, &mMessage2, 1);
	OSInitMessageQueue(&mMessageQueue1, &mMessage1, 1);
	mThread        = nullptr;
	mCommandThread = nullptr;
	_58            = 0;
}

/**
 * open__10JKRDvdFileFPCc
 *
 * @note Address: 0x8001D394
 * @note Size: 0x78
 */
bool JKRDvdFile::open(const char* path)
{
	if (!mFileOpen) {
		mFileOpen = DVDOpen((char*)path, &mDvdPlayer);
		if (mFileOpen) {
			sDvdList.append(&mLink);
			DVDGetCommandBlockStatus(&mDvdPlayer.cBlock);
		}
	}
	return mFileOpen;
}

/**
 * open__10JKRDvdFileFl
 *
 * @note Address: 0x8001D40C
 * @note Size: 0x78
 */
bool JKRDvdFile::open(s32 entryNum)
{
	if (!mFileOpen) {
		mFileOpen = DVDFastOpen(entryNum, &mDvdPlayer);
		if (mFileOpen) {
			sDvdList.append(&mLink);
			DVDGetCommandBlockStatus(&mDvdPlayer.cBlock);
		}
	}
	return mFileOpen;
}

/**
 * @note Address: 0x8001D484
 * @note Size: 0x7C
 */
void JKRDvdFile::close()
{
	if (mFileOpen) {
		if (DVDClose(&mDvdPlayer)) {
			mFileOpen = false;
			sDvdList.remove(&mLink);
		} else {
			OSErrorLine(213, "cannot close DVD file\n");
		}
	}
}

/**
 * @note Address: 0x8001D500
 * @note Size: 0xC4
 */
int JKRDvdFile::readData(void* addr, s32 length, s32 offset)
{
	OSLockMutex(&mDvdMutex);
	s32 retAddr;
	if (mThread != nullptr) {
		OSUnlockMutex(&mDvdMutex);
		return -1;
	} else {
		mThread = OSGetCurrentThread();
		retAddr = -1;
		if (DVDReadAsyncPrio(&mDvdPlayer, addr, length, offset, doneProcess, 2)) {
			retAddr = (s32)sync();
		}
		mThread = nullptr;
		OSUnlockMutex(&mDvdMutex);
	}
	return retAddr;
}

/**
 * @note Address: 0x8001D5C4
 * @note Size: 0x8
 */
int JKRDvdFile::writeData(const void* addr, s32 length, s32 offset) { return writeDataAsync(addr, length, offset); }

/**
 * @note Address: 0x8001D5CC
 * @note Size: 0x54
 */
s32 JKRDvdFile::sync()
{
	void* buffer[1];
	OSLockMutex(&mDvdMutex);
	OSReceiveMessage(&mMessageQueue2, buffer, OS_MESSAGE_BLOCK);
	mThread = nullptr;
	OSUnlockMutex(&mDvdMutex);
	return (u32)*buffer;
}

/**
 * @note Address: 0x8001D620
 * @note Size: 0x30
 */
void JKRDvdFile::doneProcess(s32 result, DVDFileInfo* info)
{
	JKRDvdFile* dvdFile = static_cast<JKRDVDFileInfo*>(info)->mFile;
	OSSendMessage(&dvdFile->mMessageQueue2, (void*)result, OS_MESSAGE_NOBLOCK);
}
