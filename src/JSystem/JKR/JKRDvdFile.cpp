#include "Dolphin/os.h"
#include "types.h"
#include "Dolphin/dvd.h"
#include "JSystem/JKR/JKRFile.h"
#include "JSystem/JSupport/JSUList.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_JKRDvdFile_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80473608
    lbl_80473608:
        .4byte 0x4A4B5244
        .4byte 0x76644669
        .4byte 0x6C652E63
        .4byte 0x70700000
    .global lbl_80473618
    lbl_80473618:
        .4byte 0x63616E6E
        .4byte 0x6F742063
        .4byte 0x6C6F7365
        .4byte 0x20445644
        .4byte 0x2066696C
        .4byte 0x650A0000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__10JKRDvdFile
    __vt__10JKRDvdFile:
        .4byte 0
        .4byte 0
        .4byte __dt__10JKRDvdFileFv
        .4byte open__10JKRDvdFileFPCc
        .4byte close__10JKRDvdFileFv
        .4byte readData__10JKRDvdFileFPvll
        .4byte writeData__10JKRDvdFileFPCvll
        .4byte getFileSize__10JKRDvdFileCFv
        .4byte open__10JKRDvdFileFl
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sDvdList__10JKRDvdFile
    sDvdList__10JKRDvdFile:
        .skip 0xC
*/

/*
 * __ct__10JKRDvdFileFv
 *
 * --INFO--
 * Address:	8001D0B8
 * Size:	000074
 */
JKRDvdFile::JKRDvdFile()
    : JKRFile()
    , _E4(this)
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
    , _E4(this)
{
	initiate();
	_18 = open(path);
	check();
	if (_18 == 0) {
		check();
	} else {
		check();
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r0, r29
	mr       r30, r0
	bl       __ct__11JKRDisposerFv
	lis      r4, __vt__7JKRFile@ha
	lis      r3, __vt__10JKRDvdFile@ha
	addi     r0, r4, __vt__7JKRFile@l
	li       r5, 0
	stw      r0, 0(r30)
	addi     r0, r3, __vt__10JKRDvdFile@l
	mr       r4, r29
	addi     r3, r29, 0xe4
	stb      r5, 0x18(r30)
	stw      r0, 0(r29)
	bl       __ct__10JSUPtrLinkFPv
	mr       r3, r29
	bl       initiate__10JKRDvdFileFv
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	stb      r3, 0x18(r29)
	lbz      r0, 0x18(r29)
	cmplwi   r0, 0
	beq      lbl_8001D1BC
	mr       r3, r29
	b        lbl_8001D1C0

lbl_8001D1BC:
	mr       r3, r29

lbl_8001D1C0:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * __ct__10JKRDvdFileFl
 *
 * --INFO--
 * Address:	8001D1DC
 * Size:	0000B0
 */
JKRDvdFile::JKRDvdFile(long fileNumber)
    : JKRFile()
    , _E4(this)
{
	initiate();
	_18 = open(fileNumber);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r0, r29
	mr       r30, r0
	bl       __ct__11JKRDisposerFv
	lis      r4, __vt__7JKRFile@ha
	lis      r3, __vt__10JKRDvdFile@ha
	addi     r0, r4, __vt__7JKRFile@l
	li       r5, 0
	stw      r0, 0(r30)
	addi     r0, r3, __vt__10JKRDvdFile@l
	mr       r4, r29
	addi     r3, r29, 0xe4
	stb      r5, 0x18(r30)
	stw      r0, 0(r29)
	bl       __ct__10JSUPtrLinkFPv
	mr       r3, r29
	bl       initiate__10JKRDvdFileFv
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	stb      r3, 0x18(r29)
	lbz      r0, 0x18(r29)
	cmplwi   r0, 0
	beq      lbl_8001D26C
	mr       r3, r29
	b        lbl_8001D270

lbl_8001D26C:
	mr       r3, r29

lbl_8001D270:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * __dt__10JKRDvdFileFv
 *
 * --INFO--
 * Address:	8001D28C
 * Size:	00009C
 */
JKRDvdFile::~JKRDvdFile()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8001D30C
	lis      r4, __vt__10JKRDvdFile@ha
	addi     r0, r4, __vt__10JKRDvdFile@l
	stw      r0, 0(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addic.   r0, r30, 0xe4
	beq      lbl_8001D2DC
	addi     r3, r30, 0xe4
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8001D2DC:
	cmplwi   r30, 0
	beq      lbl_8001D2FC
	lis      r4, __vt__7JKRFile@ha
	mr       r3, r30
	addi     r0, r4, __vt__7JKRFile@l
	li       r4, 0
	stw      r0, 0(r30)
	bl       __dt__11JKRDisposerFv

lbl_8001D2FC:
	extsh.   r0, r31
	ble      lbl_8001D30C
	mr       r3, r30
	bl       __dl__FPv

lbl_8001D30C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
	_F4 = nullptr;
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
u8 JKRDvdFile::open(const char* path)
{
	if (!_18) {
		_18 = DVDOpen(path, &m_dvdPlayer);
		if (_18) {
			sDvdList.append(&_E4);
			DVDGetCommandBlockStatus(&m_dvdPlayer);
		}
	}
	return _18;
}

/*
 * open__10JKRDvdFileFl
 *
 * --INFO--
 * Address:	8001D40C
 * Size:	000078
 */
u8 JKRDvdFile::open(long fileNumber)
{
	if (!_18) {
		_18 = DVDFastOpen(fileNumber, &m_dvdPlayer);
		if (_18) {
			sDvdList.append(&_E4);
			DVDGetCommandBlockStatus(&m_dvdPlayer);
		}
	}
	return _18;
}

/*
 * --INFO--
 * Address:	8001D484
 * Size:	00007C
 */
void JKRDvdFile::close()
{
	if (_18) {
		if (DVDClose(&m_dvdPlayer)) {
			_18 = 0;
			sDvdList.remove(&_E4);
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
int JKRDvdFile::readData(void* buffer, long byteCount, long startOffset) { return readDataAsync(buffer, byteCount, startOffset); }

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
	OSMessage buffer[1];
	OSLockMutex(&_1C);
	OSReceiveMessage(&_C0, buffer, OS_MESSAGE_BLOCKING);
	_F4 = nullptr;
	OSUnlockMutex(&_1C);
	return (u32)*buffer;
}

/*
 * --INFO--
 * Address:	8001D620
 * Size:	000030
 */
BOOL JKRDvdFile::doneProcess(long p1, DVDFileInfo* info)
{
	return OSSendMessage(&(reinterpret_cast<JKRDvdFile*>(info->_3C))->_C0, (OSMessage)p1, 0);
}

/*
 * --INFO--
 * Address:	8001D650
 * Size:	000008
 */
int JKRDvdFile::getFileSize() const
{
	return m_dvdPlayer.m_fileSize;
	/*
	lwz      r3, 0x90(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001D658
 * Size:	000044
 */
void __sinit_JKRDvdFile_cpp(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, sDvdList__10JKRDvdFile@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, sDvdList__10JKRDvdFile@l
	bl       initiate__10JSUPtrListFv
	lis      r3, sDvdList__10JKRDvdFile@ha
	lis      r4, "__dt__21JSUList<10JKRDvdFile>Fv"@ha
	lis      r5, lbl_804EFF40@ha
	addi     r3, r3, sDvdList__10JKRDvdFile@l
	addi     r4, r4, "__dt__21JSUList<10JKRDvdFile>Fv"@l
	addi     r5, r5, lbl_804EFF40@l
	bl       __register_global_object
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	8001D69C
//  * Size:	000054
//  */
// template<> JSUList<JKRDvdFile>::~JSUList()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_8001D6D4
// 	li       r4, 0
// 	bl       __dt__10JSUPtrListFv
// 	extsh.   r0, r31
// 	ble      lbl_8001D6D4
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_8001D6D4:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }
