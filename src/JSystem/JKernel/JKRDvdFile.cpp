#include "Dolphin/os.h"
#include "types.h"
#include "Dolphin/dvd.h"
#include "JSystem/JKernel/JKRFile.h"
#include "JSystem/JSupport/JSUList.h"

JSUList<JKRDvdFile> JKRDvdFile::sDvdList;

/*
 * __ct__10JKRDvdFileFv
 *
 * --INFO--
 * Address:	8001D0B8
 * Size:	000074
 */
JKRDvdFile::JKRDvdFile()
    : JKRFile()
    , mLink(this)
{
	initiate();
}

/*
 * __ct__10JKRDvdFileFPCc
 *
 * --INFO--
 * Address:	8001D12C
 * Size:	0000B0
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

/*
 * __ct__10JKRDvdFileFl
 *
 * --INFO--
 * Address:	8001D1DC
 * Size:	0000B0
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

/*
 * __dt__10JKRDvdFileFv
 *
 * --INFO--
 * Address:	8001D28C
 * Size:	00009C
 */
JKRDvdFile::~JKRDvdFile() { close(); }

/*
 * --INFO--
 * Address:	8001D328
 * Size:	00006C
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

/*
 * open__10JKRDvdFileFPCc
 *
 * --INFO--
 * Address:	8001D394
 * Size:	000078
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

/*
 * open__10JKRDvdFileFl
 *
 * --INFO--
 * Address:	8001D40C
 * Size:	000078
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

/*
 * --INFO--
 * Address:	8001D484
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	8001D500
 * Size:	0000C4
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

/*
 * --INFO--
 * Address:	8001D5C4
 * Size:	000008
 */
int JKRDvdFile::writeData(const void* addr, s32 length, s32 offset) { return writeDataAsync(addr, length, offset); }

/*
 * --INFO--
 * Address:	8001D5CC
 * Size:	000054
 */
long JKRDvdFile::sync()
{
	void* buffer[1];
	OSLockMutex(&mDvdMutex);
	OSReceiveMessage(&mMessageQueue2, buffer, OS_MESSAGE_BLOCK);
	mThread = nullptr;
	OSUnlockMutex(&mDvdMutex);
	return (u32)*buffer;
}

/*
 * --INFO--
 * Address:	8001D620
 * Size:	000030
 */
void JKRDvdFile::doneProcess(s32 result, DVDFileInfo* info)
{
	JKRDvdFile* dvdFile = static_cast<JKRDVDFileInfo*>(info)->mFile;
	OSSendMessage(&dvdFile->mMessageQueue2, (void*)result, OS_MESSAGE_NOBLOCK);
}
