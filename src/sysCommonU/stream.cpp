#include "types.h"
#include "stream.h"
#include "Dolphin/string.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80499660
    lbl_80499660:
        .asciz "stream.cpp"
        .skip 0x1
    .global lbl_8049966C
    lbl_8049966C:
        .asciz "Reached EOF\n"
        .skip 0x3
    .global readByteTokErr
    readByteTokErr:
        .asciz "readByte:Token Error\n"
        .skip 0x2
    .global readShortTokErr
    readShortTokErr:
        .asciz "readShort:Token Error\n"
        .skip 0x1
    .global readIntTokErr
    readIntTokErr:
        .asciz "readInt:Token Error\n"
        .skip 0x3
    .global readFloatTokErr
    readFloatTokErr:
        .asciz "readFloat:Token Error\n"
        .skip 0x1
    .global "assert@3391"
    "assert@3391":
        .asciz "P2Assert"
        .skip 0x3
        .asciz "can not use readFixedString in text mode\n"
        .skip 0x2
        .asciz "can not use writeFixedString in text mode\n"
        .skip 0x1
    .global lbl_80499740
    lbl_80499740:
        .asciz "RamStream::read out of bounds (pos=%d,bound=%d)\n"
        .skip 0x3
    .global lbl_80499774
    lbl_80499774:
        .asciz "RamStream::write out of bounds (pos=%d,bound=%d)\n"
        .skip 0x2

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__9RamStream
    __vt__9RamStream:
        .4byte 0
        .4byte 0
        .4byte read__9RamStreamFPvi
        .4byte write__9RamStreamFPvi
        .4byte eof__9RamStreamFv
        .4byte getPending__6StreamFv
    .global __vt__6Stream
    __vt__6Stream:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte eof__6StreamFv
        .4byte getPending__6StreamFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805202E0
    lbl_805202E0:
        .4byte 0x23202573
        .4byte 0x0D0A0000
    .global lbl_805202E8
    lbl_805202E8:
        .4byte 0x7B0D0A00
    .global lbl_805202EC
    lbl_805202EC:
        .4byte 0x7D0D0A00
    .global lbl_805202F0
    lbl_805202F0:
        .4byte 0x25640000
    .global lbl_805202F4
    lbl_805202F4:
        .4byte 0x25660000
    .global lbl_805202F8
    lbl_805202F8:
        .4byte 0x20000000
    .global lbl_805202FC
    lbl_805202FC:
        .4byte 0x25642000
    .global lbl_80520300
    lbl_80520300:
        .4byte 0x25662000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
Stream::Stream()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
Stream::Stream(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void Stream::differentEndian()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
bool Stream::isSpace(char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void Stream::skipSpace()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80413DEC
 * Size:	000008
 */
bool Stream::eof() { return false; }

/*
 * --INFO--
 * Address:	........
 * Size:	000214
 */
void Stream::copyToTextBuffer()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80413DF4
 * Size:	000228
 */
char* Stream::getNextToken()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	lwz      r0, 0xc(r3)
	cmpwi    r0, 0
	bne      lbl_80413E20
	li       r3, 0
	b        lbl_80414004

lbl_80413E20:
	li       r30, 0
	stw      r30, 0x10(r31)
	lwz      r0, 0xc(r31)
	cmpwi    r0, 1
	bne      lbl_80413EDC
	b        lbl_80413EC0

lbl_80413E38:
	mr       r3, r31
	bl       _readByte__6StreamFv
	clrlwi.  r0, r30, 0x18
	extsb    r4, r3
	beq      lbl_80413E64
	cmpwi    r4, 0xd
	beq      lbl_80413E5C
	cmpwi    r4, 0xa
	bne      lbl_80413EC0

lbl_80413E5C:
	li       r30, 0
	b        lbl_80413EC0

lbl_80413E64:
	cmpwi    r4, 0x23
	bne      lbl_80413E74
	li       r30, 1
	b        lbl_80413EC0

lbl_80413E74:
	cmpwi    r4, 0xd
	li       r0, 0
	beq      lbl_80413EB0
	cmpwi    r4, 0x20
	beq      lbl_80413EB0
	cmpwi    r4, 0xa
	beq      lbl_80413EB0
	cmpwi    r4, 9
	beq      lbl_80413EB0
	cmpwi    r4, 0x23
	beq      lbl_80413EB0
	cmpwi    r4, 0x7b
	beq      lbl_80413EB0
	cmpwi    r4, 0x7d
	bne      lbl_80413EB4

lbl_80413EB0:
	li       r0, 1

lbl_80413EB4:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80413EC0
	b        lbl_80413EE0

lbl_80413EC0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80413E38

lbl_80413EDC:
	li       r4, 0

lbl_80413EE0:
	lwz      r3, 0x10(r31)
	addi     r0, r3, 1
	add      r3, r31, r3
	stw      r0, 0x10(r31)
	stb      r4, 0x14(r3)
	b        lbl_80413FC8

lbl_80413EF8:
	mr       r3, r31
	bl       _readByte__6StreamFv
	extsb    r5, r3
	li       r0, 0
	cmpwi    r5, 0xd
	beq      lbl_80413F40
	cmpwi    r5, 0x20
	beq      lbl_80413F40
	cmpwi    r5, 0xa
	beq      lbl_80413F40
	cmpwi    r5, 9
	beq      lbl_80413F40
	cmpwi    r5, 0x23
	beq      lbl_80413F40
	cmpwi    r5, 0x7b
	beq      lbl_80413F40
	cmpwi    r5, 0x7d
	bne      lbl_80413F44

lbl_80413F40:
	li       r0, 1

lbl_80413F44:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80413FAC
	lwz      r3, 0x10(r31)
	cmpwi    r5, 0x23
	li       r4, 0
	addi     r0, r3, 1
	add      r3, r31, r3
	stw      r0, 0x10(r31)
	stb      r4, 0x14(r3)
	bne      lbl_80414000
	b        lbl_80413F8C

lbl_80413F70:
	mr       r3, r31
	bl       _readByte__6StreamFv
	extsb    r0, r3
	cmpwi    r0, 0xd
	beq      lbl_80414000
	cmpwi    r0, 0xa
	beq      lbl_80414000

lbl_80413F8C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80413F70
	b        lbl_80414000

lbl_80413FAC:
	lwz      r4, 0x10(r31)
	extsb.   r0, r5
	addi     r3, r4, 1
	addi     r0, r4, 0x14
	stw      r3, 0x10(r31)
	stbx     r5, r31, r0
	beq      lbl_80414000

lbl_80413FC8:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80413EF8
	lis      r3, lbl_80499660@ha
	lis      r5, lbl_8049966C@ha
	addi     r3, r3, lbl_80499660@l
	li       r4, 0x62
	addi     r5, r5, lbl_8049966C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80414000:
	addi     r3, r31, 0x14

lbl_80414004:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8041401C
 * Size:	000084
 */
void Stream::textBeginGroup(char* groupName)
{
	if (m_isTextMode) {
		textWriteTab(m_tabCount);
		textWriteText("# %s\r\n", groupName);
		textWriteTab(m_tabCount);
		textWriteText("{\r\n");
		m_tabCount++;
	}
}

/*
 * --INFO--
 * Address:	804140A0
 * Size:	000058
 */
void Stream::textEndGroup()
{
	if (m_isTextMode) {
		m_tabCount--;
		textWriteTab(m_tabCount);
		textWriteText("}\r\n");
	}
}

/*
 * --INFO--
 * Address:	804140F8
 * Size:	0000E4
 */
void Stream::printf(char*, ...)
{
	/*
	stwu     r1, -0x490(r1)
	mflr     r0
	stw      r0, 0x494(r1)
	stw      r31, 0x48c(r1)
	stw      r30, 0x488(r1)
	stw      r29, 0x484(r1)
	stw      r28, 0x480(r1)
	mr       r28, r3
	bne      cr1, lbl_8041413C
	stfd     f1, 0x28(r1)
	stfd     f2, 0x30(r1)
	stfd     f3, 0x38(r1)
	stfd     f4, 0x40(r1)
	stfd     f5, 0x48(r1)
	stfd     f6, 0x50(r1)
	stfd     f7, 0x58(r1)
	stfd     f8, 0x60(r1)

lbl_8041413C:
	addi     r11, r1, 0x498
	addi     r0, r1, 8
	lis      r12, 0x200
	stw      r3, 8(r1)
	addi     r31, r1, 0x68
	addi     r3, r1, 0x74
	stw      r5, 0x10(r1)
	mr       r5, r31
	stw      r4, 0xc(r1)
	stw      r6, 0x14(r1)
	stw      r7, 0x18(r1)
	stw      r8, 0x1c(r1)
	stw      r9, 0x20(r1)
	stw      r10, 0x24(r1)
	stw      r12, 0x68(r1)
	stw      r11, 0x6c(r1)
	stw      r0, 0x70(r1)
	bl       vsprintf
	addi     r3, r1, 0x74
	bl       strlen
	or.      r31, r3, r3
	ble      lbl_804141BC
	addi     r30, r1, 0x74
	li       r29, 0
	b        lbl_804141B4

lbl_804141A0:
	lbz      r4, 0(r30)
	mr       r3, r28
	bl       _writeByte__6StreamFUc
	addi     r30, r30, 1
	addi     r29, r29, 1

lbl_804141B4:
	cmpw     r29, r31
	blt      lbl_804141A0

lbl_804141BC:
	lwz      r0, 0x494(r1)
	lwz      r31, 0x48c(r1)
	lwz      r30, 0x488(r1)
	lwz      r29, 0x484(r1)
	lwz      r28, 0x480(r1)
	mtlr     r0
	addi     r1, r1, 0x490
	blr
	*/
}

/*
 * --INFO--
 * Address:	804141DC
 * Size:	0000EC
 */
void Stream::textWriteText(char*, ...)
{
	/*
	stwu     r1, -0x490(r1)
	mflr     r0
	stw      r0, 0x494(r1)
	stw      r31, 0x48c(r1)
	stw      r30, 0x488(r1)
	stw      r29, 0x484(r1)
	stw      r28, 0x480(r1)
	mr       r28, r3
	bne      cr1, lbl_80414220
	stfd     f1, 0x28(r1)
	stfd     f2, 0x30(r1)
	stfd     f3, 0x38(r1)
	stfd     f4, 0x40(r1)
	stfd     f5, 0x48(r1)
	stfd     f6, 0x50(r1)
	stfd     f7, 0x58(r1)
	stfd     f8, 0x60(r1)

lbl_80414220:
	stw      r3, 8(r1)
	stw      r4, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r7, 0x18(r1)
	stw      r8, 0x1c(r1)
	stw      r9, 0x20(r1)
	stw      r10, 0x24(r1)
	lwz      r0, 0xc(r28)
	cmpwi    r0, 0
	beq      lbl_804142A8
	addi     r6, r1, 0x498
	addi     r0, r1, 8
	lis      r3, 0x200
	stw      r6, 0x6c(r1)
	addi     r5, r1, 0x68
	stw      r3, 0x68(r1)
	addi     r3, r1, 0x74
	stw      r0, 0x70(r1)
	bl       vsprintf
	addi     r3, r1, 0x74
	bl       strlen
	or.      r31, r3, r3
	ble      lbl_804142A8
	addi     r30, r1, 0x74
	li       r29, 0
	b        lbl_804142A0

lbl_8041428C:
	lbz      r4, 0(r30)
	mr       r3, r28
	bl       _writeByte__6StreamFUc
	addi     r30, r30, 1
	addi     r29, r29, 1

lbl_804142A0:
	cmpw     r29, r31
	blt      lbl_8041428C

lbl_804142A8:
	lwz      r0, 0x494(r1)
	lwz      r31, 0x48c(r1)
	lwz      r30, 0x488(r1)
	lwz      r29, 0x484(r1)
	lwz      r28, 0x480(r1)
	mtlr     r0
	addi     r1, r1, 0x490
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void Stream::writePadding(ulong)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void Stream::skipPadding(ulong)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804142C8
 * Size:	0000C4
 */
void Stream::skipReading(ulong byteCount)
{
	if (m_isTextMode == true) {
		while (!eof()) {
			uchar next = _readByte();
			if (next == '\r' || next == '\n') {
				return;
			}
		}
	} else {
		for (int i = 0; i < byteCount && !eof(); i++) {
			readByte();
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0xc(r3)
	cmpwi    r0, 1
	bne      lbl_80414338
	b        lbl_80414318

lbl_804142F8:
	mr       r3, r29
	bl       _readByte__6StreamFv
	extsb    r0, r3
	cmpwi    r0, 0xd
	beq      lbl_80414370
	cmpwi    r0, 0xa
	bne      lbl_80414318
	b        lbl_80414370

lbl_80414318:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_804142F8
	b        lbl_80414370

lbl_80414338:
	li       r31, 0
	b        lbl_8041434C

lbl_80414340:
	mr       r3, r29
	bl       readByte__6StreamFv
	addi     r31, r31, 1

lbl_8041434C:
	cmplw    r31, r30
	bge      lbl_80414370
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80414340

lbl_80414370:
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
 * --INFO--
 * Address:	8041438C
 * Size:	0000A8
 */
void Stream::skipReadingText()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xc(r3)
	cmpwi    r0, 1
	bne      lbl_80414404
	b        lbl_804143D0

lbl_804143B0:
	mr       r3, r31
	bl       _readByte__6StreamFv
	extsb    r0, r3
	cmpwi    r0, 0xd
	beq      lbl_80414420
	cmpwi    r0, 0xa
	bne      lbl_804143D0
	b        lbl_80414420

lbl_804143D0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_804143B0
	b        lbl_80414420
	b        lbl_80414404

lbl_804143F4:
	mr       r3, r31
	bl       readByte__6StreamFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80414420

lbl_80414404:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_804143F4

lbl_80414420:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void Stream::_read(void*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void Stream::_write(void*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80414434
 * Size:	000068
 */
void Stream::textWriteTab(int tabCount)
{
	if (m_isTextMode == 1) {
		for (int i = 0; i < tabCount; i++) {
			_writeByte('\t');
		}
	}
}

/*
 * --INFO--
 * Address:	8041449C
 * Size:	000278
 */
uchar Stream::readByte()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_80499660@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_80499660@l
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	lwz      r0, 0xc(r3)
	cmpwi    r0, 1
	bne      lbl_804146F4
	cmpwi    r0, 0
	bne      lbl_804144DC
	li       r30, 0
	b        lbl_804146B8

lbl_804144DC:
	li       r29, 0
	stw      r29, 0x10(r30)
	lwz      r0, 0xc(r30)
	cmpwi    r0, 1
	bne      lbl_80414598
	b        lbl_8041457C

lbl_804144F4:
	mr       r3, r30
	bl       _readByte__6StreamFv
	clrlwi.  r0, r29, 0x18
	extsb    r4, r3
	beq      lbl_80414520
	cmpwi    r4, 0xd
	beq      lbl_80414518
	cmpwi    r4, 0xa
	bne      lbl_8041457C

lbl_80414518:
	li       r29, 0
	b        lbl_8041457C

lbl_80414520:
	cmpwi    r4, 0x23
	bne      lbl_80414530
	li       r29, 1
	b        lbl_8041457C

lbl_80414530:
	cmpwi    r4, 0xd
	li       r0, 0
	beq      lbl_8041456C
	cmpwi    r4, 0x20
	beq      lbl_8041456C
	cmpwi    r4, 0xa
	beq      lbl_8041456C
	cmpwi    r4, 9
	beq      lbl_8041456C
	cmpwi    r4, 0x23
	beq      lbl_8041456C
	cmpwi    r4, 0x7b
	beq      lbl_8041456C
	cmpwi    r4, 0x7d
	bne      lbl_80414570

lbl_8041456C:
	li       r0, 1

lbl_80414570:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8041457C
	b        lbl_8041459C

lbl_8041457C:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_804144F4

lbl_80414598:
	li       r4, 0

lbl_8041459C:
	lwz      r3, 0x10(r30)
	addi     r0, r3, 1
	add      r3, r30, r3
	stw      r0, 0x10(r30)
	stb      r4, 0x14(r3)
	b        lbl_80414684

lbl_804145B4:
	mr       r3, r30
	bl       _readByte__6StreamFv
	extsb    r5, r3
	li       r0, 0
	cmpwi    r5, 0xd
	beq      lbl_804145FC
	cmpwi    r5, 0x20
	beq      lbl_804145FC
	cmpwi    r5, 0xa
	beq      lbl_804145FC
	cmpwi    r5, 9
	beq      lbl_804145FC
	cmpwi    r5, 0x23
	beq      lbl_804145FC
	cmpwi    r5, 0x7b
	beq      lbl_804145FC
	cmpwi    r5, 0x7d
	bne      lbl_80414600

lbl_804145FC:
	li       r0, 1

lbl_80414600:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80414668
	lwz      r3, 0x10(r30)
	cmpwi    r5, 0x23
	li       r4, 0
	addi     r0, r3, 1
	add      r3, r30, r3
	stw      r0, 0x10(r30)
	stb      r4, 0x14(r3)
	bne      lbl_804146B4
	b        lbl_80414648

lbl_8041462C:
	mr       r3, r30
	bl       _readByte__6StreamFv
	extsb    r0, r3
	cmpwi    r0, 0xd
	beq      lbl_804146B4
	cmpwi    r0, 0xa
	beq      lbl_804146B4

lbl_80414648:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041462C
	b        lbl_804146B4

lbl_80414668:
	lwz      r4, 0x10(r30)
	extsb.   r0, r5
	addi     r3, r4, 1
	addi     r0, r4, 0x14
	stw      r3, 0x10(r30)
	stbx     r5, r30, r0
	beq      lbl_804146B4

lbl_80414684:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_804145B4
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x62
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804146B4:
	addi     r30, r30, 0x14

lbl_804146B8:
	cmplwi   r30, 0
	bne      lbl_804146D4
	addi     r3, r31, 0
	addi     r5, r31, 0x1c
	li       r4, 0x104
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804146D4:
	mr       r3, r30
	addi     r5, r1, 8
	addi     r4, r2, lbl_805202F0@sda21
	crclr    6
	bl       sscanf
	lwz      r0, 8(r1)
	clrlwi   r3, r0, 0x18
	b        lbl_804146F8

lbl_804146F4:
	bl       _readByte__6StreamFv

lbl_804146F8:
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
 * --INFO--
 * Address:	80414714
 * Size:	000050
 */
uchar Stream::_readByte()
{
	char buffer[1];
	read(buffer, 1);
	m_position++;
	return buffer[0];
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r5, 1
	stw      r0, 0x24(r1)
	addi     r4, r1, 8
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r31)
	addi     r0, r3, 1
	stw      r0, 8(r31)
	lbz      r3, 8(r1)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80414764
 * Size:	00032C
 */
short Stream::readShort()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, lbl_80499660@ha
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	addi     r31, r4, lbl_80499660@l
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r29, 0x24(r1)
	lwz      r0, 0xc(r3)
	cmpwi    r0, 1
	bne      lbl_80414A30
	cmpwi    r0, 0
	bne      lbl_804147A4
	li       r30, 0
	b        lbl_804149EC

lbl_804147A4:
	li       r29, 0
	stw      r29, 0x10(r30)
	lwz      r0, 0xc(r30)
	cmpwi    r0, 1
	bne      lbl_80414884
	b        lbl_80414868

lbl_804147BC:
	mr       r3, r30
	addi     r4, r1, 8
	lwz      r12, 0(r30)
	li       r5, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r30)
	clrlwi.  r0, r29, 0x18
	addi     r0, r3, 1
	stw      r0, 8(r30)
	lbz      r0, 8(r1)
	extsb    r4, r0
	beq      lbl_8041480C
	cmpwi    r4, 0xd
	beq      lbl_80414804
	cmpwi    r4, 0xa
	bne      lbl_80414868

lbl_80414804:
	li       r29, 0
	b        lbl_80414868

lbl_8041480C:
	cmpwi    r4, 0x23
	bne      lbl_8041481C
	li       r29, 1
	b        lbl_80414868

lbl_8041481C:
	cmpwi    r4, 0xd
	li       r0, 0
	beq      lbl_80414858
	cmpwi    r4, 0x20
	beq      lbl_80414858
	cmpwi    r4, 0xa
	beq      lbl_80414858
	cmpwi    r4, 9
	beq      lbl_80414858
	cmpwi    r4, 0x23
	beq      lbl_80414858
	cmpwi    r4, 0x7b
	beq      lbl_80414858
	cmpwi    r4, 0x7d
	bne      lbl_8041485C

lbl_80414858:
	li       r0, 1

lbl_8041485C:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80414868
	b        lbl_80414888

lbl_80414868:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_804147BC

lbl_80414884:
	li       r4, 0

lbl_80414888:
	lwz      r3, 0x10(r30)
	addi     r0, r3, 1
	add      r3, r30, r3
	stw      r0, 0x10(r30)
	stb      r4, 0x14(r3)
	b        lbl_804149B8

lbl_804148A0:
	mr       r3, r30
	addi     r4, r1, 0xa
	lwz      r12, 0(r30)
	li       r5, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r30)
	li       r0, 0
	addi     r3, r3, 1
	stw      r3, 8(r30)
	lbz      r3, 0xa(r1)
	extsb    r5, r3
	cmpwi    r5, 0xd
	beq      lbl_8041490C
	cmpwi    r5, 0x20
	beq      lbl_8041490C
	cmpwi    r5, 0xa
	beq      lbl_8041490C
	cmpwi    r5, 9
	beq      lbl_8041490C
	cmpwi    r5, 0x23
	beq      lbl_8041490C
	cmpwi    r5, 0x7b
	beq      lbl_8041490C
	cmpwi    r5, 0x7d
	bne      lbl_80414910

lbl_8041490C:
	li       r0, 1

lbl_80414910:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8041499C
	lwz      r3, 0x10(r30)
	cmpwi    r5, 0x23
	li       r4, 0
	addi     r0, r3, 1
	add      r3, r30, r3
	stw      r0, 0x10(r30)
	stb      r4, 0x14(r3)
	bne      lbl_804149E8
	b        lbl_8041497C

lbl_8041493C:
	mr       r3, r30
	addi     r4, r1, 9
	lwz      r12, 0(r30)
	li       r5, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r30)
	addi     r0, r3, 1
	stw      r0, 8(r30)
	lbz      r0, 9(r1)
	extsb    r0, r0
	cmpwi    r0, 0xd
	beq      lbl_804149E8
	cmpwi    r0, 0xa
	beq      lbl_804149E8

lbl_8041497C:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041493C
	b        lbl_804149E8

lbl_8041499C:
	lwz      r4, 0x10(r30)
	extsb.   r0, r5
	addi     r3, r4, 1
	addi     r0, r4, 0x14
	stw      r3, 0x10(r30)
	stbx     r5, r30, r0
	beq      lbl_804149E8

lbl_804149B8:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_804148A0
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x62
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804149E8:
	addi     r30, r30, 0x14

lbl_804149EC:
	cmplwi   r30, 0
	bne      lbl_80414A08
	addi     r3, r31, 0
	addi     r5, r31, 0x34
	li       r4, 0x11c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80414A08:
	mr       r3, r30
	addi     r5, r1, 0x10
	addi     r4, r2, lbl_805202F0@sda21
	crclr    6
	bl       sscanf
	lwz      r3, 0x10(r1)
	clrlwi   r0, r3, 0x10
	sth      r3, 0xc(r1)
	extsh    r3, r0
	b        lbl_80414A74

lbl_80414A30:
	lwz      r12, 0(r3)
	addi     r4, r1, 0xc
	li       r5, 2
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r30)
	addi     r0, r3, 2
	stw      r0, 8(r30)
	lwz      r0, 4(r30)
	cmpwi    r0, 1
	beq      lbl_80414A6C
	lhz      r3, 0xc(r1)
	addi     r0, r1, 0xc
	sthbrx   r3, 0, r0

lbl_80414A6C:
	lhz      r0, 0xc(r1)
	extsh    r3, r0

lbl_80414A74:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80414A90
 * Size:	00031C
 */
int Stream::readInt()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_80499660@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_80499660@l
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r29, 0x14(r1)
	lwz      r0, 0xc(r3)
	cmpwi    r0, 1
	bne      lbl_80414D50
	cmpwi    r0, 0
	bne      lbl_80414AD0
	li       r30, 0
	b        lbl_80414D18

lbl_80414AD0:
	li       r29, 0
	stw      r29, 0x10(r30)
	lwz      r0, 0xc(r30)
	cmpwi    r0, 1
	bne      lbl_80414BB0
	b        lbl_80414B94

lbl_80414AE8:
	mr       r3, r30
	addi     r4, r1, 8
	lwz      r12, 0(r30)
	li       r5, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r30)
	clrlwi.  r0, r29, 0x18
	addi     r0, r3, 1
	stw      r0, 8(r30)
	lbz      r0, 8(r1)
	extsb    r4, r0
	beq      lbl_80414B38
	cmpwi    r4, 0xd
	beq      lbl_80414B30
	cmpwi    r4, 0xa
	bne      lbl_80414B94

lbl_80414B30:
	li       r29, 0
	b        lbl_80414B94

lbl_80414B38:
	cmpwi    r4, 0x23
	bne      lbl_80414B48
	li       r29, 1
	b        lbl_80414B94

lbl_80414B48:
	cmpwi    r4, 0xd
	li       r0, 0
	beq      lbl_80414B84
	cmpwi    r4, 0x20
	beq      lbl_80414B84
	cmpwi    r4, 0xa
	beq      lbl_80414B84
	cmpwi    r4, 9
	beq      lbl_80414B84
	cmpwi    r4, 0x23
	beq      lbl_80414B84
	cmpwi    r4, 0x7b
	beq      lbl_80414B84
	cmpwi    r4, 0x7d
	bne      lbl_80414B88

lbl_80414B84:
	li       r0, 1

lbl_80414B88:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80414B94
	b        lbl_80414BB4

lbl_80414B94:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80414AE8

lbl_80414BB0:
	li       r4, 0

lbl_80414BB4:
	lwz      r3, 0x10(r30)
	addi     r0, r3, 1
	add      r3, r30, r3
	stw      r0, 0x10(r30)
	stb      r4, 0x14(r3)
	b        lbl_80414CE4

lbl_80414BCC:
	mr       r3, r30
	addi     r4, r1, 0xa
	lwz      r12, 0(r30)
	li       r5, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r30)
	li       r0, 0
	addi     r3, r3, 1
	stw      r3, 8(r30)
	lbz      r3, 0xa(r1)
	extsb    r5, r3
	cmpwi    r5, 0xd
	beq      lbl_80414C38
	cmpwi    r5, 0x20
	beq      lbl_80414C38
	cmpwi    r5, 0xa
	beq      lbl_80414C38
	cmpwi    r5, 9
	beq      lbl_80414C38
	cmpwi    r5, 0x23
	beq      lbl_80414C38
	cmpwi    r5, 0x7b
	beq      lbl_80414C38
	cmpwi    r5, 0x7d
	bne      lbl_80414C3C

lbl_80414C38:
	li       r0, 1

lbl_80414C3C:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80414CC8
	lwz      r3, 0x10(r30)
	cmpwi    r5, 0x23
	li       r4, 0
	addi     r0, r3, 1
	add      r3, r30, r3
	stw      r0, 0x10(r30)
	stb      r4, 0x14(r3)
	bne      lbl_80414D14
	b        lbl_80414CA8

lbl_80414C68:
	mr       r3, r30
	addi     r4, r1, 9
	lwz      r12, 0(r30)
	li       r5, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r30)
	addi     r0, r3, 1
	stw      r0, 8(r30)
	lbz      r0, 9(r1)
	extsb    r0, r0
	cmpwi    r0, 0xd
	beq      lbl_80414D14
	cmpwi    r0, 0xa
	beq      lbl_80414D14

lbl_80414CA8:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80414C68
	b        lbl_80414D14

lbl_80414CC8:
	lwz      r4, 0x10(r30)
	extsb.   r0, r5
	addi     r3, r4, 1
	addi     r0, r4, 0x14
	stw      r3, 0x10(r30)
	stbx     r5, r30, r0
	beq      lbl_80414D14

lbl_80414CE4:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80414BCC
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x62
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80414D14:
	addi     r30, r30, 0x14

lbl_80414D18:
	cmplwi   r30, 0
	bne      lbl_80414D34
	addi     r3, r31, 0
	addi     r5, r31, 0x4c
	li       r4, 0x132
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80414D34:
	mr       r3, r30
	addi     r5, r1, 0xc
	addi     r4, r2, lbl_805202F0@sda21
	crclr    6
	bl       sscanf
	lwz      r3, 0xc(r1)
	b        lbl_80414D90

lbl_80414D50:
	lwz      r12, 0(r3)
	addi     r4, r1, 0xc
	li       r5, 4
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r30)
	addi     r0, r3, 4
	stw      r0, 8(r30)
	lwz      r0, 4(r30)
	cmpwi    r0, 1
	beq      lbl_80414D8C
	lwz      r3, 0xc(r1)
	addi     r0, r1, 0xc
	stwbrx   r3, 0, r0

lbl_80414D8C:
	lwz      r3, 0xc(r1)

lbl_80414D90:
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
 * --INFO--
 * Address:	80414DAC
 * Size:	000328
 */
float Stream::readFloat()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, lbl_80499660@ha
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	addi     r31, r4, lbl_80499660@l
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r29, 0x24(r1)
	lwz      r0, 0xc(r3)
	cmpwi    r0, 1
	bne      lbl_8041506C
	cmpwi    r0, 0
	bne      lbl_80414DEC
	li       r30, 0
	b        lbl_80415034

lbl_80414DEC:
	li       r29, 0
	stw      r29, 0x10(r30)
	lwz      r0, 0xc(r30)
	cmpwi    r0, 1
	bne      lbl_80414ECC
	b        lbl_80414EB0

lbl_80414E04:
	mr       r3, r30
	addi     r4, r1, 8
	lwz      r12, 0(r30)
	li       r5, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r30)
	clrlwi.  r0, r29, 0x18
	addi     r0, r3, 1
	stw      r0, 8(r30)
	lbz      r0, 8(r1)
	extsb    r4, r0
	beq      lbl_80414E54
	cmpwi    r4, 0xd
	beq      lbl_80414E4C
	cmpwi    r4, 0xa
	bne      lbl_80414EB0

lbl_80414E4C:
	li       r29, 0
	b        lbl_80414EB0

lbl_80414E54:
	cmpwi    r4, 0x23
	bne      lbl_80414E64
	li       r29, 1
	b        lbl_80414EB0

lbl_80414E64:
	cmpwi    r4, 0xd
	li       r0, 0
	beq      lbl_80414EA0
	cmpwi    r4, 0x20
	beq      lbl_80414EA0
	cmpwi    r4, 0xa
	beq      lbl_80414EA0
	cmpwi    r4, 9
	beq      lbl_80414EA0
	cmpwi    r4, 0x23
	beq      lbl_80414EA0
	cmpwi    r4, 0x7b
	beq      lbl_80414EA0
	cmpwi    r4, 0x7d
	bne      lbl_80414EA4

lbl_80414EA0:
	li       r0, 1

lbl_80414EA4:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80414EB0
	b        lbl_80414ED0

lbl_80414EB0:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80414E04

lbl_80414ECC:
	li       r4, 0

lbl_80414ED0:
	lwz      r3, 0x10(r30)
	addi     r0, r3, 1
	add      r3, r30, r3
	stw      r0, 0x10(r30)
	stb      r4, 0x14(r3)
	b        lbl_80415000

lbl_80414EE8:
	mr       r3, r30
	addi     r4, r1, 0xa
	lwz      r12, 0(r30)
	li       r5, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r30)
	li       r0, 0
	addi     r3, r3, 1
	stw      r3, 8(r30)
	lbz      r3, 0xa(r1)
	extsb    r5, r3
	cmpwi    r5, 0xd
	beq      lbl_80414F54
	cmpwi    r5, 0x20
	beq      lbl_80414F54
	cmpwi    r5, 0xa
	beq      lbl_80414F54
	cmpwi    r5, 9
	beq      lbl_80414F54
	cmpwi    r5, 0x23
	beq      lbl_80414F54
	cmpwi    r5, 0x7b
	beq      lbl_80414F54
	cmpwi    r5, 0x7d
	bne      lbl_80414F58

lbl_80414F54:
	li       r0, 1

lbl_80414F58:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80414FE4
	lwz      r3, 0x10(r30)
	cmpwi    r5, 0x23
	li       r4, 0
	addi     r0, r3, 1
	add      r3, r30, r3
	stw      r0, 0x10(r30)
	stb      r4, 0x14(r3)
	bne      lbl_80415030
	b        lbl_80414FC4

lbl_80414F84:
	mr       r3, r30
	addi     r4, r1, 9
	lwz      r12, 0(r30)
	li       r5, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r30)
	addi     r0, r3, 1
	stw      r0, 8(r30)
	lbz      r0, 9(r1)
	extsb    r0, r0
	cmpwi    r0, 0xd
	beq      lbl_80415030
	cmpwi    r0, 0xa
	beq      lbl_80415030

lbl_80414FC4:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80414F84
	b        lbl_80415030

lbl_80414FE4:
	lwz      r4, 0x10(r30)
	extsb.   r0, r5
	addi     r3, r4, 1
	addi     r0, r4, 0x14
	stw      r3, 0x10(r30)
	stbx     r5, r30, r0
	beq      lbl_80415030

lbl_80415000:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80414EE8
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x62
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80415030:
	addi     r30, r30, 0x14

lbl_80415034:
	cmplwi   r30, 0
	bne      lbl_80415050
	addi     r3, r31, 0
	addi     r5, r31, 0x64
	li       r4, 0x144
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80415050:
	mr       r3, r30
	addi     r5, r1, 0x10
	addi     r4, r2, lbl_805202F4@sda21
	crclr    6
	bl       sscanf
	lfs      f1, 0x10(r1)
	b        lbl_804150B8

lbl_8041506C:
	lwz      r12, 0(r3)
	addi     r4, r1, 0x10
	li       r5, 4
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r30)
	addi     r0, r3, 4
	stw      r0, 8(r30)
	lwz      r0, 4(r30)
	cmpwi    r0, 1
	beq      lbl_804150B4
	lwz      r3, 0x10(r1)
	addi     r0, r1, 0xc
	stw      r3, 0xc(r1)
	stwbrx   r3, 0, r0
	lfs      f0, 0xc(r1)
	stfs     f0, 0x10(r1)

lbl_804150B4:
	lfs      f1, 0x10(r1)

lbl_804150B8:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	804150D4
 * Size:	0004F8
 */
char* Stream::readString(char*, int)
{
	/*
	stwu     r1, -0x430(r1)
	mflr     r0
	stw      r0, 0x434(r1)
	stmw     r24, 0x410(r1)
	mr       r26, r3
	lis      r3, lbl_80499660@ha
	mr       r27, r4
	mr       r28, r5
	addi     r31, r3, lbl_80499660@l
	lwz      r0, 0xc(r26)
	cmpwi    r0, 1
	bne      lbl_80415450
	cmpwi    r0, 0
	bne      lbl_80415114
	li       r30, 0
	b        lbl_8041535C

lbl_80415114:
	li       r29, 0
	stw      r29, 0x10(r26)
	lwz      r0, 0xc(r26)
	cmpwi    r0, 1
	bne      lbl_804151F4
	b        lbl_804151D8

lbl_8041512C:
	mr       r3, r26
	addi     r4, r1, 8
	lwz      r12, 0(r26)
	li       r5, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r26)
	clrlwi.  r0, r29, 0x18
	addi     r0, r3, 1
	stw      r0, 8(r26)
	lbz      r0, 8(r1)
	extsb    r4, r0
	beq      lbl_8041517C
	cmpwi    r4, 0xd
	beq      lbl_80415174
	cmpwi    r4, 0xa
	bne      lbl_804151D8

lbl_80415174:
	li       r29, 0
	b        lbl_804151D8

lbl_8041517C:
	cmpwi    r4, 0x23
	bne      lbl_8041518C
	li       r29, 1
	b        lbl_804151D8

lbl_8041518C:
	cmpwi    r4, 0xd
	li       r0, 0
	beq      lbl_804151C8
	cmpwi    r4, 0x20
	beq      lbl_804151C8
	cmpwi    r4, 0xa
	beq      lbl_804151C8
	cmpwi    r4, 9
	beq      lbl_804151C8
	cmpwi    r4, 0x23
	beq      lbl_804151C8
	cmpwi    r4, 0x7b
	beq      lbl_804151C8
	cmpwi    r4, 0x7d
	bne      lbl_804151CC

lbl_804151C8:
	li       r0, 1

lbl_804151CC:
	clrlwi.  r0, r0, 0x18
	bne      lbl_804151D8
	b        lbl_804151F8

lbl_804151D8:
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041512C

lbl_804151F4:
	li       r4, 0

lbl_804151F8:
	lwz      r3, 0x10(r26)
	addi     r0, r3, 1
	add      r3, r26, r3
	stw      r0, 0x10(r26)
	stb      r4, 0x14(r3)
	b        lbl_80415328

lbl_80415210:
	mr       r3, r26
	addi     r4, r1, 0xa
	lwz      r12, 0(r26)
	li       r5, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r26)
	li       r0, 0
	addi     r3, r3, 1
	stw      r3, 8(r26)
	lbz      r3, 0xa(r1)
	extsb    r5, r3
	cmpwi    r5, 0xd
	beq      lbl_8041527C
	cmpwi    r5, 0x20
	beq      lbl_8041527C
	cmpwi    r5, 0xa
	beq      lbl_8041527C
	cmpwi    r5, 9
	beq      lbl_8041527C
	cmpwi    r5, 0x23
	beq      lbl_8041527C
	cmpwi    r5, 0x7b
	beq      lbl_8041527C
	cmpwi    r5, 0x7d
	bne      lbl_80415280

lbl_8041527C:
	li       r0, 1

lbl_80415280:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8041530C
	lwz      r3, 0x10(r26)
	cmpwi    r5, 0x23
	li       r4, 0
	addi     r0, r3, 1
	add      r3, r26, r3
	stw      r0, 0x10(r26)
	stb      r4, 0x14(r3)
	bne      lbl_80415358
	b        lbl_804152EC

lbl_804152AC:
	mr       r3, r26
	addi     r4, r1, 9
	lwz      r12, 0(r26)
	li       r5, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r26)
	addi     r0, r3, 1
	stw      r0, 8(r26)
	lbz      r0, 9(r1)
	extsb    r0, r0
	cmpwi    r0, 0xd
	beq      lbl_80415358
	cmpwi    r0, 0xa
	beq      lbl_80415358

lbl_804152EC:
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_804152AC
	b        lbl_80415358

lbl_8041530C:
	lwz      r4, 0x10(r26)
	extsb.   r0, r5
	addi     r3, r4, 1
	addi     r0, r4, 0x14
	stw      r3, 0x10(r26)
	stbx     r5, r26, r0
	beq      lbl_80415358

lbl_80415328:
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80415210
	addi     r3, r31, 0
	addi     r5, r31, 0xc
	li       r4, 0x62
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80415358:
	addi     r30, r26, 0x14

lbl_8041535C:
	mr       r3, r30
	bl       strlen
	cmplwi   r27, 0
	mr       r26, r3
	beq      lbl_80415394
	cmpw     r28, r26
	bge      lbl_8041538C
	addi     r3, r31, 0
	addi     r5, r31, 0x7c
	li       r4, 0x160
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8041538C:
	mr       r3, r27
	b        lbl_8041539C

lbl_80415394:
	addi     r3, r26, 1
	bl       __nwa__FUl

lbl_8041539C:
	addic.   r0, r26, 1
	li       r7, 0
	ble      lbl_804155B8
	addi     r0, r26, 1
	addi     r4, r26, -7
	cmpwi    r0, 8
	ble      lbl_8041541C
	addi     r0, r4, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r4, 0
	ble      lbl_8041541C

lbl_804153CC:
	add      r4, r30, r7
	add      r5, r3, r7
	lbz      r0, 0(r4)
	addi     r7, r7, 8
	stb      r0, 0(r5)
	lbz      r0, 1(r4)
	stb      r0, 1(r5)
	lbz      r0, 2(r4)
	stb      r0, 2(r5)
	lbz      r0, 3(r4)
	stb      r0, 3(r5)
	lbz      r0, 4(r4)
	stb      r0, 4(r5)
	lbz      r0, 5(r4)
	stb      r0, 5(r5)
	lbz      r0, 6(r4)
	stb      r0, 6(r5)
	lbz      r0, 7(r4)
	stb      r0, 7(r5)
	bdnz     lbl_804153CC

lbl_8041541C:
	addi     r6, r26, 1
	add      r5, r30, r7
	subf     r0, r7, r6
	add      r4, r3, r7
	mtctr    r0
	cmpw     r7, r6
	bge      lbl_804155B8

lbl_80415438:
	lbz      r0, 0(r5)
	addi     r5, r5, 1
	stb      r0, 0(r4)
	addi     r4, r4, 1
	bdnz     lbl_80415438
	b        lbl_804155B8

lbl_80415450:
	addi     r30, r1, 0xc
	li       r29, 0
	mr       r25, r30
	li       r24, 0
	b        lbl_804154AC

lbl_80415464:
	mr       r3, r26
	addi     r4, r1, 0xb
	lwz      r12, 0(r26)
	li       r5, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r26)
	addi     r0, r3, 1
	stw      r0, 8(r26)
	lbz      r0, 0xb(r1)
	stb      r0, 0(r25)
	lbz      r0, 0(r25)
	extsb.   r0, r0
	beq      lbl_804154D0
	addi     r29, r29, 1
	addi     r25, r25, 1
	addi     r24, r24, 1

lbl_804154AC:
	cmpwi    r24, 0x400
	blt      lbl_80415464
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80415464

lbl_804154D0:
	cmplwi   r27, 0
	beq      lbl_804154FC
	cmpw     r28, r29
	bge      lbl_804154F4
	addi     r3, r31, 0
	addi     r5, r31, 0x7c
	li       r4, 0x174
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804154F4:
	mr       r3, r27
	b        lbl_80415504

lbl_804154FC:
	addi     r3, r29, 1
	bl       __nwa__FUl

lbl_80415504:
	cmpwi    r29, 0
	mr       r6, r3
	li       r5, 0
	ble      lbl_804155B0
	cmpwi    r29, 8
	addi     r4, r29, -8
	ble      lbl_80415584
	addi     r0, r4, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r4, 0
	ble      lbl_80415584

lbl_80415534:
	lbz      r4, 0(r30)
	addi     r5, r5, 8
	lbz      r0, 1(r30)
	stb      r4, 0(r6)
	lbz      r4, 2(r30)
	stb      r0, 1(r6)
	lbz      r0, 3(r30)
	stb      r4, 2(r6)
	lbz      r4, 4(r30)
	stb      r0, 3(r6)
	lbz      r0, 5(r30)
	stb      r4, 4(r6)
	lbz      r4, 6(r30)
	stb      r0, 5(r6)
	lbz      r0, 7(r30)
	addi     r30, r30, 8
	stb      r4, 6(r6)
	stb      r0, 7(r6)
	addi     r6, r6, 8
	bdnz     lbl_80415534

lbl_80415584:
	addi     r4, r1, 0xc
	subf     r0, r5, r29
	add      r4, r4, r5
	mtctr    r0
	cmpw     r5, r29
	bge      lbl_804155B0

lbl_8041559C:
	lbz      r0, 0(r4)
	addi     r4, r4, 1
	stb      r0, 0(r6)
	addi     r6, r6, 1
	bdnz     lbl_8041559C

lbl_804155B0:
	li       r0, 0
	stb      r0, 0(r6)

lbl_804155B8:
	lmw      r24, 0x410(r1)
	lwz      r0, 0x434(r1)
	mtlr     r0
	addi     r1, r1, 0x430
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00064C
 */
char* Stream::readFixedString()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804155CC
 * Size:	0000A4
 */
void Stream::writeString(char* string)
{
	int length = strlen(string);
	for (int i = 0; i < length; i++) {
		_writeByte(*string);
		string++;
	}
	if (m_isTextMode == 1) {
		printf(" ");
	} else {
		_writeByte('\0');
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r3, r29
	bl       strlen
	mr       r30, r3
	mr       r31, r29
	li       r29, 0
	b        lbl_8041561C

lbl_80415608:
	lbz      r4, 0(r31)
	mr       r3, r28
	bl       _writeByte__6StreamFUc
	addi     r29, r29, 1
	addi     r31, r31, 1

lbl_8041561C:
	cmpw     r29, r30
	blt      lbl_80415608
	lwz      r0, 0xc(r28)
	cmpwi    r0, 1
	bne      lbl_80415644
	mr       r3, r28
	addi     r4, r2, lbl_805202F8@sda21
	crclr    6
	bl       printf__6StreamFPce
	b        lbl_80415650

lbl_80415644:
	mr       r3, r28
	li       r4, 0
	bl       _writeByte__6StreamFUc

lbl_80415650:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void Stream::writeFixedString(char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80415670
 * Size:	000070
 */
void Stream::writeByte(uchar c)
{
	uchar buffer = c;
	if (m_isTextMode == 1) {
		printf("%d ", c);
	} else {
		write(&buffer, 1);
		m_position++;
	}
}

/*
 * --INFO--
 * Address:	804156E0
 * Size:	000050
 */
void Stream::_writeByte(uchar c)
{
	uchar buffer = c;
	write(&buffer, 1);
	m_position++;
}

/*
 * --INFO--
 * Address:	80415730
 * Size:	000090
 */
void Stream::writeShort(short)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	sth      r4, 8(r1)
	lwz      r0, 0xc(r3)
	cmpwi    r0, 1
	bne      lbl_80415768
	extsh    r5, r4
	addi     r4, r2, lbl_805202FC@sda21
	crclr    6
	bl       printf__6StreamFPce
	b        lbl_804157AC

lbl_80415768:
	lwz      r0, 4(r31)
	cmpwi    r0, 1
	beq      lbl_80415784
	extsh    r3, r4
	rlwinm   r0, r3, 0x18, 0x18, 0x1f
	rlwimi   r0, r3, 8, 0x10, 0x17
	sth      r0, 8(r1)

lbl_80415784:
	mr       r3, r31
	addi     r4, r1, 8
	lwz      r12, 0(r31)
	li       r5, 2
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r31)
	addi     r0, r3, 2
	stw      r0, 8(r31)

lbl_804157AC:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	804157C0
 * Size:	000088
 */
void Stream::writeInt(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r4, 8(r1)
	lwz      r0, 0xc(r3)
	cmpwi    r0, 1
	bne      lbl_804157F8
	mr       r5, r4
	addi     r4, r2, lbl_805202FC@sda21
	crclr    6
	bl       printf__6StreamFPce
	b        lbl_80415834

lbl_804157F8:
	lwz      r0, 4(r31)
	cmpwi    r0, 1
	beq      lbl_8041580C
	addi     r0, r1, 8
	stwbrx   r4, 0, r0

lbl_8041580C:
	mr       r3, r31
	addi     r4, r1, 8
	lwz      r12, 0(r31)
	li       r5, 4
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r31)
	addi     r0, r3, 4
	stw      r0, 8(r31)

lbl_80415834:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80415848
 * Size:	0000B0
 */
void Stream::writeFloat(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stfs     f1, 8(r1)
	lwz      r0, 0xc(r3)
	cmpwi    r0, 1
	bne      lbl_80415880
	frsp     f1, f1
	addi     r4, r2, lbl_80520300@sda21
	crset    6
	bl       printf__6StreamFPce
	b        lbl_804158E4

lbl_80415880:
	lwz      r0, 4(r31)
	cmpwi    r0, 1
	beq      lbl_804158C0
	lwz      r6, 8(r1)
	addi     r0, r1, 0xc
	addi     r4, r1, 0xc
	li       r5, 4
	stwbrx   r6, 0, r0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r31)
	addi     r0, r3, 4
	stw      r0, 8(r31)
	b        lbl_804158E4

lbl_804158C0:
	lwz      r12, 0(r3)
	addi     r4, r1, 8
	li       r5, 4
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r31)
	addi     r0, r3, 4
	stw      r0, 8(r31)

lbl_804158E4:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	804158F8
 * Size:	000050
 */
RamStream::RamStream(void*, int)
{
	/*
	lis      r6, __vt__6Stream@ha
	li       r0, 1
	addi     r6, r6, __vt__6Stream@l
	stw      r6, 0(r3)
	li       r6, 0
	stw      r0, 4(r3)
	stw      r6, 8(r3)
	stw      r6, 0xc(r3)
	lwz      r0, 0xc(r3)
	cmpwi    r0, 1
	bne      lbl_80415928
	stw      r6, 0x414(r3)

lbl_80415928:
	lis      r6, __vt__9RamStream@ha
	li       r0, 0
	addi     r6, r6, __vt__9RamStream@l
	stw      r6, 0(r3)
	stw      r4, 0x418(r3)
	stw      r5, 0x41c(r3)
	stw      r0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void RamStream::set(uchar*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80415948
 * Size:	000094
 */
void RamStream::read(void*, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_804159A8
	lis      r3, lbl_80499660@ha
	lis      r4, lbl_80499740@ha
	addi     r5, r4, lbl_80499740@l
	lwz      r6, 8(r29)
	lwz      r7, 0x41c(r29)
	addi     r3, r3, lbl_80499660@l
	li       r4, 0x20b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804159A8:
	lwz      r4, 0x418(r29)
	mr       r3, r30
	lwz      r0, 8(r29)
	mr       r5, r31
	add      r4, r4, r0
	bl       memcpy
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
 * --INFO--
 * Address:	804159DC
 * Size:	000094
 */
void RamStream::write(void*, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80415A3C
	lis      r3, lbl_80499660@ha
	lis      r4, lbl_80499774@ha
	addi     r5, r4, lbl_80499774@l
	lwz      r6, 8(r29)
	lwz      r7, 0x41c(r29)
	addi     r3, r3, lbl_80499660@l
	li       r4, 0x216
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80415A3C:
	lwz      r3, 0x418(r29)
	mr       r4, r30
	lwz      r0, 8(r29)
	mr       r5, r31
	add      r3, r3, r0
	bl       memcpy
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
 * --INFO--
 * Address:	80415A70
 * Size:	00002C
 */
bool RamStream::eof()
{
	/*
	lwz      r5, 0x41c(r3)
	cmpwi    r5, -1
	beq      lbl_80415A94
	lwz      r0, 8(r3)
	srwi     r3, r5, 0x1f
	srawi    r4, r0, 0x1f
	subfc    r0, r5, r0
	adde     r3, r4, r3
	blr

lbl_80415A94:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80415A9C
 * Size:	000008
 */
u32 Stream::getPending() { return 0x0; }
