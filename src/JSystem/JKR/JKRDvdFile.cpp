#include "Dolphin/os.h"
#include "types.h"
#include "Dolphin/dvd.h"
#include "JSystem/JKR/JKRFile.h"
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
    , m_Link(this)
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
    , m_Link(this)
{
	initiate();
	m_FileOpen = open(path);
	if (m_FileOpen)
		return;
}

/*
 * __ct__10JKRDvdFileFl
 *
 * --INFO--
 * Address:	8001D1DC
 * Size:	0000B0
 */
JKRDvdFile::JKRDvdFile(s32 entrynum) : JKRFile(), m_Link(this) {
    initiate();

    m_FileOpen = open(entrynum);
    if(m_FileOpen)
        return;
}

/*
 * __dt__10JKRDvdFileFv
 *
 * --INFO--
 * Address:	8001D28C
 * Size:	00009C
 */
JKRDvdFile::~JKRDvdFile() {
    close(); 
}

/*
 * --INFO--
 * Address:	8001D328
 * Size:	00006C
 */
void JKRDvdFile::initiate()
{
	_98 = this;
	OSInitMutex(&_1C);
	OSInitMutex(&_34);
	OSInitMessageQueue(&_C0, &_E0, 1);
	OSInitMessageQueue(&_9C, &_BC, 1);
	m_Thread = nullptr;
	_50 = nullptr;
	_58 = 0;
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
	if (!m_FileOpen) {
		m_FileOpen = DVDOpen(path, &m_dvdPlayer);
		if (m_FileOpen) {
			sDvdList.append(&m_Link);
			DVDGetCommandBlockStatus(&m_dvdPlayer);
		}
	}
	return m_FileOpen;
}

/*
 * open__10JKRDvdFileFl
 *
 * --INFO--
 * Address:	8001D40C
 * Size:	000078
 */
bool JKRDvdFile::open(long fileNumber)
{
	if (!m_FileOpen) {
		m_FileOpen = DVDFastOpen(fileNumber, &m_dvdPlayer);
		if (m_FileOpen) {
			sDvdList.append(&m_Link);
			DVDGetCommandBlockStatus(&m_dvdPlayer);
		}
	}
	return m_FileOpen;
}

/*
 * --INFO--
 * Address:	8001D484
 * Size:	00007C
 */
void JKRDvdFile::close()
{
	if (m_FileOpen) {
		if (DVDClose(&m_dvdPlayer)) {
			m_FileOpen = false;
			sDvdList.remove(&m_Link);
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
int JKRDvdFile::readData(void * addr,s32 length, s32 offset) {
    OSLockMutex(&_1C);
    s32 retAddr;
    if(m_Thread != nullptr) {
        OSUnlockMutex(&_1C);
        return -1;
    }
    else {
        m_Thread = OSGetCurrentThread();
        retAddr = -1;
        if (DVDReadAsyncPrio(&m_dvdPlayer, addr, length, offset, doneProcess, 2))
        {
            retAddr = (s32)sync();
        }
        m_Thread = nullptr;
        OSUnlockMutex(&_1C);
    }
    return retAddr;
}
/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
// inline int JKRDvdFile::readDataAsync(void* buffer, long byteCount, long
// startOffset)
// {
// 	long result;
// 	OSLockMutex(&_1C);
// 	if (_F4) {
// 		OSUnlockMutex(&_1C);
// 		result = -1;
// 	} else {
// 		_F4 = OSGetCurrentThread();
// 		result = -1;
// 		if (DVDReadAsyncPrio(&m_dvdPlayer, buffer, byteCount, startOffset,
// (DVDDoneReadCallback*)doneProcess, 2)) { 			result = (long)this;
// sync();
// 		}
// 		_F4 = nullptr;
// 		OSUnlockMutex(&_1C);
// 	}
// 	return result;
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	stw      r0, 0x24(r1)
// 	stw      r31, 0x1c(r1)
// 	mr       r31, r6
// 	stw      r30, 0x18(r1)
// 	mr       r30, r5
// 	stw      r29, 0x14(r1)
// 	mr       r29, r4
// 	stw      r28, 0x10(r1)
// 	mr       r28, r3
// 	addi     r3, r28, 0x1c
// 	bl       OSLockMutex
// 	lwz      r0, 0xf4(r28)
// 	cmplwi   r0, 0
// 	beq      lbl_8001D550
// 	addi     r3, r28, 0x1c
// 	bl       OSUnlockMutex
// 	li       r3, -1
// 	b        lbl_8001D5A4

// lbl_8001D550:
// 	bl       OSGetCurrentThread
// 	lis      r4, doneProcess__10JKRDvdFileFlP11DVDFileInfo@ha
// 	stw      r3, 0xf4(r28)
// 	addi     r7, r4, doneProcess__10JKRDvdFileFlP11DVDFileInfo@l
// 	mr       r6, r31
// 	mr       r4, r29
// 	mr       r5, r30
// 	addi     r3, r28, 0x5c
// 	li       r31, -1
// 	li       r8, 2
// 	bl       DVDReadAsyncPrio
// 	cmpwi    r3, 0
// 	beq      lbl_8001D590
// 	mr       r3, r28
// 	bl       sync__10JKRDvdFileFv
// 	mr       r31, r3

// lbl_8001D590:
// 	li       r0, 0
// 	addi     r3, r28, 0x1c
// 	stw      r0, 0xf4(r28)
// 	bl       OSUnlockMutex
// 	mr       r3, r31

// lbl_8001D5A4:
// 	lwz      r0, 0x24(r1)
// 	lwz      r31, 0x1c(r1)
// 	lwz      r30, 0x18(r1)
// 	lwz      r29, 0x14(r1)
// 	lwz      r28, 0x10(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8001D5C4
 * Size:	000008
 */
int JKRDvdFile::writeData(const void* p1, long p2, long p3) { return writeDataAsync(p1, p2, p3); }

/*
 * --INFO--
 * Address:	8001D5CC
 * Size:	000054
 */
long JKRDvdFile::sync()
{
	void* buffer[1];
	OSLockMutex(&_1C);
	OSReceiveMessage(&_C0, buffer, OS_MESSAGE_BLOCKING);
	m_Thread = nullptr;
	OSUnlockMutex(&_1C);
	return (u32)*buffer;
}

/*
 * --INFO--
 * Address:	8001D620
 * Size:	000030
 */
BOOL JKRDvdFile::doneProcess(long p1, DVDFileInfo* info) { 
	JKRDvdFile * dvdFile = reinterpret_cast<JKRDvdFile *>(info->_3C);
	return OSSendMessage(&dvdFile->_C0, (void*)p1, OS_MESSAGE_NON_BLOCKING); }

/*
 * --INFO--
 * Address:	8001D650
 * Size:	000008
 */
// int JKRDvdFile::getFileSize() const { return m_dvdPlayer.m_fileSize; }

/*
 * --INFO--
 * Address:	8001D658
 * Size:	000044
 */

