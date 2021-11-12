#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__20JSUMemoryInputStream
    __vt__20JSUMemoryInputStream:
        .4byte 0
        .4byte 0
        .4byte __dt__20JSUMemoryInputStreamFv
        .4byte getAvailable__20JSURandomInputStreamCFv
        .4byte skip__20JSURandomInputStreamFl
        .4byte readData__20JSUMemoryInputStreamFPvl
        .4byte getLength__20JSUMemoryInputStreamCFv
        .4byte getPosition__20JSUMemoryInputStreamCFv
        .4byte seekPos__20JSUMemoryInputStreamFl17JSUStreamSeekFrom
        .4byte 0
*/

/*
 * --INFO--
 * Address:	80026D5C
 * Size:	000014
 */
void JSUMemoryInputStream::setBuffer(const void*, long)
{
	/*
	stw      r4, 8(r3)
	li       r0, 0
	stw      r5, 0xc(r3)
	stw      r0, 0x10(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80026D70
 * Size:	000078
 */
void JSUMemoryInputStream::readData(void*, long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r6, 0x10(r3)
	lwz      r3, 0xc(r3)
	add      r0, r6, r31
	cmpw     r0, r3
	ble      lbl_80026DA4
	subf     r31, r6, r3

lbl_80026DA4:
	cmpwi    r31, 0
	ble      lbl_80026DCC
	lwz      r0, 8(r30)
	mr       r3, r4
	mr       r5, r31
	add      r4, r0, r6
	bl       memcpy
	lwz      r0, 0x10(r30)
	add      r0, r0, r31
	stw      r0, 0x10(r30)

lbl_80026DCC:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80026DE8
 * Size:	00007C
 */
void JSUMemoryInputStream::seekPos(long, JSUStreamSeekFrom)
{
	/*
	cmpwi    r5, 1
	lwz      r6, 0x10(r3)
	beq      lbl_80026E28
	bge      lbl_80026E04
	cmpwi    r5, 0
	bge      lbl_80026E10
	b        lbl_80026E30

lbl_80026E04:
	cmpwi    r5, 3
	bge      lbl_80026E30
	b        lbl_80026E18

lbl_80026E10:
	stw      r4, 0x10(r3)
	b        lbl_80026E30

lbl_80026E18:
	lwz      r0, 0xc(r3)
	subf     r0, r4, r0
	stw      r0, 0x10(r3)
	b        lbl_80026E30

lbl_80026E28:
	add      r0, r6, r4
	stw      r0, 0x10(r3)

lbl_80026E30:
	lwz      r0, 0x10(r3)
	cmpwi    r0, 0
	bge      lbl_80026E44
	li       r0, 0
	stw      r0, 0x10(r3)

lbl_80026E44:
	lwz      r0, 0x10(r3)
	lwz      r4, 0xc(r3)
	cmpw     r0, r4
	ble      lbl_80026E58
	stw      r4, 0x10(r3)

lbl_80026E58:
	lwz      r0, 0x10(r3)
	subf     r3, r6, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80026E64
 * Size:	000070
 */
JSUMemoryInputStream::~JSUMemoryInputStream()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80026EB8
	lis      r4, __vt__20JSUMemoryInputStream@ha
	addi     r0, r4, __vt__20JSUMemoryInputStream@l
	stw      r0, 0(r30)
	beq      lbl_80026EA8
	lis      r5, __vt__20JSURandomInputStream@ha
	li       r4, 0
	addi     r0, r5, __vt__20JSURandomInputStream@l
	stw      r0, 0(r30)
	bl       __dt__14JSUInputStreamFv

lbl_80026EA8:
	extsh.   r0, r31
	ble      lbl_80026EB8
	mr       r3, r30
	bl       __dl__FPv

lbl_80026EB8:
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
 * Address:	80026ED4
 * Size:	000008
 */
void JSUMemoryInputStream::getLength() const
{
	/*
	lwz      r3, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80026EDC
 * Size:	000008
 */
void JSUMemoryInputStream::getPosition() const
{
	/*
	lwz      r3, 0x10(r3)
	blr
	*/
}
