#include "types.h"
#include "JSystem/JSU/JSUStream.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__20JSURandomInputStream
    __vt__20JSURandomInputStream:
        .4byte 0
        .4byte 0
        .4byte __dt__20JSURandomInputStreamFv
        .4byte getAvailable__20JSURandomInputStreamCFv
        .4byte skip__20JSURandomInputStreamFl
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__14JSUInputStream
    __vt__14JSUInputStream:
        .4byte 0
        .4byte 0
        .4byte __dt__14JSUInputStreamFv
        .4byte 0
        .4byte skip__14JSUInputStreamFl
        .4byte 0
*/

/*
 * --INFO--
 * Address:	80026378
 * Size:	00005C
 */
JSUInputStream::~JSUInputStream() { }

/*
 * --INFO--
 * Address:	800263D4
 * Size:	000058
 */
void JSUInputStream::read(void* data, long length)
{
	int len = readData(data, length);
	if (len != length) {
		m_isEOFMaybe = m_isEOFMaybe | 1;
	}
	return;
}

/*
 * --INFO--
 * Address:	8002642C
 * Size:	0000B0
 */
char* JSUInputStream::read(char* str)
{
	u16 val;
	if (readData(&val, sizeof(val)) != sizeof(val)) {
		str[0] = '\0';
		m_isEOFMaybe |= 1;
		return nullptr;
	}

	int len  = readData(str, val);
	str[len] = '\0';
	if (len != val) {
		m_isEOFMaybe |= 1;
	}

	return str;
}


/*
 * --INFO--
 * Address:	800264DC
 * Size:	000088
 */
void JSUInputStream::skip(long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_8002653C

lbl_80026504:
	mr       r3, r29
	addi     r4, r1, 8
	lwz      r12, 0(r29)
	li       r5, 1
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 1
	beq      lbl_80026538
	lbz      r0, 4(r29)
	ori      r0, r0, 1
	stb      r0, 4(r29)
	b        lbl_80026544

lbl_80026538:
	addi     r31, r31, 1

lbl_8002653C:
	cmpw     r31, r30
	blt      lbl_80026504

lbl_80026544:
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Address:	80026564
 * Size:	00008C
 */
u32 JSURandomInputStream::align(long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	add      r4, r31, r3
	addi     r0, r31, -1
	addi     r4, r4, -1
	andc     r4, r4, r0
	subf.    r31, r3, r4
	beq      lbl_800265D4
	lwz      r12, 0(r30)
	mr       r3, r30
	li       r5, 0
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	cmpw     r3, r31
	beq      lbl_800265D4
	lbz      r0, 4(r30)
	ori      r0, r0, 1
	stb      r0, 4(r30)

lbl_800265D4:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
	return 0; // placeholder, delete this
}

/*
 * --INFO--
 * Address:	800265F0
 * Size:	00005C
 */
void JSURandomInputStream::skip(long offset)
{
	if (seekPos(offset, SEEK_CUR) != offset) {
		m_isEOFMaybe |= 1;
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	cmpw     r3, r31
	beq      lbl_80026634
	lbz      r0, 4(r30)
	ori      r0, r0, 1
	stb      r0, 4(r30)

lbl_80026634:
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
 * Address:	8002664C
 * Size:	0000BC
 */
size_t JSURandomInputStream::peek(void* buffer, long byteCount)
{
	int position   = getPosition();
	int dataLength = readData(buffer, byteCount);
	if (dataLength != byteCount) {
		m_isEOFMaybe |= 1;
	}
	if (dataLength != 0) {
		seekPos(position, SEEK_SET);
	}
	return dataLength;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r5
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	mr       r3, r28
	lwz      r12, 0(r28)
	mr       r30, r0
	mr       r4, r31
	mr       r5, r29
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	cmpw     r31, r29
	beq      lbl_800266C0
	lbz      r0, 4(r28)
	ori      r0, r0, 1
	stb      r0, 4(r28)

lbl_800266C0:
	cmpwi    r31, 0
	beq      lbl_800266E4
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 0
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl

lbl_800266E4:
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Address:	80026708
 * Size:	000044
 */
void JSURandomInputStream::seek(long offset, JSUStreamSeekFrom mode)
{
	seekPos(offset, mode);
	m_isEOFMaybe &= ~1;
}

/*
 * --INFO--
 * Address:	8002674C
 * Size:	00006C
 */
JSURandomInputStream::~JSURandomInputStream()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_800267A0
	lis      r3, __vt__20JSURandomInputStream@ha
	addi     r0, r3, __vt__20JSURandomInputStream@l
	stw      r0, 0(r31)
	beq      lbl_80026790
	lis      r3, __vt__14JSUInputStream@ha
	addi     r0, r3, __vt__14JSUInputStream@l
	stw      r0, 0(r31)
	beq      lbl_80026790
	lis      r3, __vt__10JSUIosBase@ha
	addi     r0, r3, __vt__10JSUIosBase@l
	stw      r0, 0(r31)

lbl_80026790:
	extsh.   r0, r4
	ble      lbl_800267A0
	mr       r3, r31
	bl       __dl__FPv

lbl_800267A0:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
