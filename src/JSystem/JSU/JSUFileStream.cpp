#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__18JSUFileInputStream
    __vt__18JSUFileInputStream:
        .4byte 0
        .4byte 0
        .4byte __dt__18JSUFileInputStreamFv
        .4byte getAvailable__20JSURandomInputStreamCFv
        .4byte skip__20JSURandomInputStreamFl
        .4byte readData__18JSUFileInputStreamFPvl
        .4byte getLength__18JSUFileInputStreamCFv
        .4byte getPosition__18JSUFileInputStreamCFv
        .4byte seekPos__18JSUFileInputStreamFl17JSUStreamSeekFrom
        .4byte 0
*/

/*
 * --INFO--
 * Address:	80026EE4
 * Size:	000044
 */
JSUFileInputStream::JSUFileInputStream(JKRFile*)
{
	/*
	lis      r5, __vt__10JSUIosBase@ha
	lis      r7, __vt__14JSUInputStream@ha
	addi     r0, r5, __vt__10JSUIosBase@l
	lis      r6, __vt__20JSURandomInputStream@ha
	stw      r0, 0(r3)
	li       r8, 0
	lis      r5, __vt__18JSUFileInputStream@ha
	addi     r7, r7, __vt__14JSUInputStream@l
	stb      r8, 4(r3)
	addi     r6, r6, __vt__20JSURandomInputStream@l
	addi     r0, r5, __vt__18JSUFileInputStream@l
	stw      r7, 0(r3)
	stw      r6, 0(r3)
	stw      r0, 0(r3)
	stw      r4, 8(r3)
	stw      r8, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80026F28
 * Size:	0000E0
 */
void JSUFileInputStream::readData(void*, long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r3, 8(r3)
	lbz      r0, 0x18(r3)
	cmplwi   r0, 0
	beq      lbl_80026FE4
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xc(r28)
	add      r0, r0, r30
	cmplw    r0, r3
	ble      lbl_80026FA0
	lwz      r3, 8(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xc(r28)
	subf     r30, r0, r3

lbl_80026FA0:
	cmpwi    r30, 0
	ble      lbl_80026FE4
	lwz      r3, 8(r28)
	mr       r4, r29
	mr       r5, r30
	lwz      r6, 0xc(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	bge      lbl_80026FD8
	li       r3, 0
	b        lbl_80026FE8

lbl_80026FD8:
	lwz      r0, 0xc(r28)
	add      r0, r0, r31
	stw      r0, 0xc(r28)

lbl_80026FE4:
	mr       r3, r31

lbl_80026FE8:
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
 * Address:	80027008
 * Size:	0000E8
 */
void JSUFileInputStream::seekPos(long, JSUStreamSeekFrom)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	cmpwi    r5, 1
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r31, 0xc(r3)
	beq      lbl_80027078
	bge      lbl_80027044
	cmpwi    r5, 0
	bge      lbl_80027050
	b        lbl_80027080

lbl_80027044:
	cmpwi    r5, 3
	bge      lbl_80027080
	b        lbl_80027058

lbl_80027050:
	stw      r30, 0xc(r29)
	b        lbl_80027080

lbl_80027058:
	lwz      r3, 8(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	subf     r0, r30, r3
	stw      r0, 0xc(r29)
	b        lbl_80027080

lbl_80027078:
	add      r0, r31, r30
	stw      r0, 0xc(r29)

lbl_80027080:
	lwz      r0, 0xc(r29)
	cmpwi    r0, 0
	bge      lbl_80027094
	li       r0, 0
	stw      r0, 0xc(r29)

lbl_80027094:
	lwz      r3, 8(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xc(r29)
	cmpw     r0, r3
	ble      lbl_800270CC
	lwz      r3, 8(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r29)

lbl_800270CC:
	lwz      r0, 0xc(r29)
	subf     r3, r31, r0
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
 * Address:	800270F0
 * Size:	000030
 */
void JSUFileInputStream::getLength() const
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lwz      r3, 8(r3)
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80027120
 * Size:	000008
 */
void JSUFileInputStream::getPosition() const
{
	/*
	lwz      r3, 0xc(r3)
	blr
	*/
}
