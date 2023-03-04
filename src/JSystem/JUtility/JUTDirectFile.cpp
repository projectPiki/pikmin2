#include "JSystem/JUtility/JUTDirectFile.h"
#include "Dolphin/os.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
int JUTDirectFile::fetch32byte() // not the right size, currently 0xA0
{
	int interrupts = OSEnableInterrupts();
	int readRes    = DVDReadAsyncPrio(&mFileInfo, _820, _824 + 31, _82C, nullptr, 2);
	OSRestoreInterrupts(interrupts);
	if (!readRes) {
		return -1;
	} else {
		interrupts = OSEnableInterrupts();
		while (DVDGetCommandBlockStatus(&mFileInfo.cBlock)) {
			;
		}
		OSRestoreInterrupts(interrupts);
		return _824;
	}
}

/*
 * --INFO--
 * Address:	8002982C
 * Size:	000024
 */
JUTDirectFile::JUTDirectFile()
{
	_828    = 0;
	_82C    = 0;
	_824    = 0;
	_820    = (void*)((u32) & (_00[0x1F]) & ~0x1F); // hmm.
	mIsOpen = false;
}

/*
 * --INFO--
 * Address:	80029850
 * Size:	000044
 */
JUTDirectFile::~JUTDirectFile() { mIsOpen = false; }

/*
 * --INFO--
 * Address:	80029894
 * Size:	0000A8
 */
bool JUTDirectFile::fopen(const char* filename)
{
	if (!filename) {
		return false;
	}

	int interrupts = OSEnableInterrupts();
	int dvdRes     = DVDOpen(const_cast<char*>(filename), &mFileInfo);
	OSRestoreInterrupts(interrupts);

	if (!dvdRes) {
		mIsOpen = false;
		return false;
	}

	int interrupts2 = OSEnableInterrupts();
	_828            = mFileInfo.length;
	OSRestoreInterrupts(interrupts2);

	_82C    = 0;
	mIsOpen = true;
	return true;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000270
 */
void JUTDirectFile::fread(void*, u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002993C
 * Size:	000060
 */
void JUTDirectFile::fclose()
{
	if (mIsOpen) {
		int interrupts = OSEnableInterrupts();
		DVDClose(&mFileInfo);
		OSRestoreInterrupts(interrupts);
		mIsOpen = false;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JUTDirectFile::setPos(u32)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00013C
 */
void JUTDirectFile::fgetc()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002999C
 * Size:	000230
 */
int JUTDirectFile::fgets(void* p1, int p2)
{
	if (!mIsOpen) {
		return -1;
	}

	if (!p2) {
		return 0;
	}

	if (p2 == 1) {
		return 1;
	}

	if (!p1) {
		return -1;
	}

	if (_82C >= _828) {
		return -1;
	}
	int idx;
	u8* array   = (u8*)p1;
	idx         = p2 - 1;
	int counter = 0;

	while (_82C < _828) {
		if (!_824) {
			_824 = _82C - _828;

			if (_824 > 0x800) {
				_824 = 0x800;
			}

			if (fetch32byte() < 0) {
				return -1;
			}
		}

		u32 counter2 = _82C;
		u32 max      = (_824 - counter2);
		if (counter + max > idx) {
			max = p2 - counter - 1;
		}

		int check = 0;
		for (int i = 0; i < max; i++) {
			int val2 = ((u8*)_820)[counter2];
			counter2++;
			*array++ = val2;
			if (val2 == 10) {
				max   = i + 1;
				check = 1;
				break;
			}
		}
		if (counter2 >= 0x800) {
			_824 = 0;
		}

		if (check == 1) {
			counter += max;
			array[0] = 0;
			_82C += max;
			break;
		}

		counter += max;
		_82C += max;
		if (counter >= idx) {
			array[0] = 0;
			break;
		}
	}

	if (_82C >= _828) {
		array[0] = 0;
	}

	return counter;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r27, r3
	mr       r28, r5
	lbz      r0, 0x830(r3)
	cmplwi   r0, 0
	bne      lbl_800299C8
	li       r3, -1
	b        lbl_80029BB8

lbl_800299C8:
	cmpwi    r28, 0
	bne      lbl_800299D8
	li       r3, 0
	b        lbl_80029BB8

lbl_800299D8:
	cmpwi    r28, 1
	bne      lbl_800299E8
	li       r3, 1
	b        lbl_80029BB8

lbl_800299E8:
	cmplwi   r4, 0
	bne      lbl_800299F8
	li       r3, -1
	b        lbl_80029BB8

lbl_800299F8:
	lwz      r3, 0x82c(r27)
	lwz      r0, 0x828(r27)
	cmplw    r3, r0
	blt      lbl_80029A10
	li       r3, -1
	b        lbl_80029BB8

lbl_80029A10:
	mr       r30, r4
	addi     r31, r28, -1
	li       r29, 0
	b        lbl_80029B8C

lbl_80029A20:
	lwz      r0, 0x824(r27)
	cmplwi   r0, 0
	bne      lbl_80029ACC
	rlwinm   r0, r3, 0, 0, 0x1a
	subf     r0, r0, r4
	stw      r0, 0x824(r27)
	lwz      r0, 0x824(r27)
	cmplwi   r0, 0x800
	ble      lbl_80029A4C
	li       r0, 0x800
	stw      r0, 0x824(r27)

lbl_80029A4C:
	bl       OSEnableInterrupts
	lwz      r4, 0x824(r27)
	mr       r25, r3
	lwz      r0, 0x82c(r27)
	addi     r3, r27, 0x834
	addi     r5, r4, 0x1f
	lwz      r4, 0x820(r27)
	rlwinm   r6, r0, 0, 0, 0x1a
	li       r7, 0
	rlwinm   r5, r5, 0, 0, 0x1a
	li       r8, 2
	bl       DVDReadAsyncPrio
	mr       r26, r3
	mr       r3, r25
	bl       OSRestoreInterrupts
	cmpwi    r26, 0
	bne      lbl_80029A98
	li       r0, -1
	b        lbl_80029ABC

lbl_80029A98:
	bl       OSEnableInterrupts
	mr       r25, r3

lbl_80029AA0:
	addi     r3, r27, 0x834
	bl       DVDGetCommandBlockStatus
	cmpwi    r3, 0
	bne      lbl_80029AA0
	mr       r3, r25
	bl       OSRestoreInterrupts
	lwz      r0, 0x824(r27)

lbl_80029ABC:
	cmpwi    r0, 0
	bge      lbl_80029ACC
	li       r3, -1
	b        lbl_80029BB8

lbl_80029ACC:
	lwz      r3, 0x82c(r27)
	lwz      r0, 0x824(r27)
	clrlwi   r4, r3, 0x15
	subf     r5, r4, r0
	add      r0, r29, r5
	cmplw    r0, r31
	ble      lbl_80029AF0
	subf     r3, r29, r28
	addi     r5, r3, -1

lbl_80029AF0:
	li       r6, 0
	li       r7, 0
	mtctr    r5
	cmplwi   r5, 0
	ble      lbl_80029B34

lbl_80029B04:
	lwz      r3, 0x820(r27)
	lbzx     r0, r3, r4
	addi     r4, r4, 1
	cmpwi    r0, 0xa
	stb      r0, 0(r30)
	addi     r30, r30, 1
	bne      lbl_80029B2C
	addi     r5, r7, 1
	li       r6, 1
	b        lbl_80029B34

lbl_80029B2C:
	addi     r7, r7, 1
	bdnz     lbl_80029B04

lbl_80029B34:
	cmplwi   r4, 0x800
	blt      lbl_80029B44
	li       r0, 0
	stw      r0, 0x824(r27)

lbl_80029B44:
	cmpwi    r6, 1
	bne      lbl_80029B68
	li       r0, 0
	add      r29, r29, r5
	stb      r0, 0(r30)
	lwz      r0, 0x82c(r27)
	add      r0, r0, r5
	stw      r0, 0x82c(r27)
	b        lbl_80029B9C

lbl_80029B68:
	lwz      r0, 0x82c(r27)
	add      r29, r29, r5
	cmpw     r29, r31
	add      r0, r0, r5
	stw      r0, 0x82c(r27)
	blt      lbl_80029B8C
	li       r0, 0
	stb      r0, 0(r30)
	b        lbl_80029B9C

lbl_80029B8C:
	lwz      r3, 0x82c(r27)
	lwz      r4, 0x828(r27)
	cmplw    r3, r4
	blt      lbl_80029A20

lbl_80029B9C:
	lwz      r3, 0x82c(r27)
	lwz      r0, 0x828(r27)
	cmplw    r3, r0
	blt      lbl_80029BB4
	li       r0, 0
	stb      r0, 0(r30)

lbl_80029BB4:
	mr       r3, r29

lbl_80029BB8:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}
