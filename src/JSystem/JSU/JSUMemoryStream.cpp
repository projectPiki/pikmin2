#include "types.h"
#include "JSystem/JSU/JSUStream.h"

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
void JSUMemoryInputStream::setBuffer(const void* buffer, long length)
{
	m_object   = const_cast<void*>(buffer);
	m_length   = length;
	m_position = 0;
}

/*
 * --INFO--
 * Address:	80026D70
 * Size:	000078
 */
size_t JSUMemoryInputStream::readData(void*, long)
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
int JSUMemoryInputStream::seekPos(long offset, JSUStreamSeekFrom mode)
{
	ulong originalPosition = m_position;
	switch (mode) {
	case SEEK_SET:
		m_position = offset;
		break;
	case SEEK_END:
		m_position = m_length - offset;
		break;
	case SEEK_CUR:
		m_position += offset;
		break;
	default:
		break;
	}
	if (0 > m_position) {
		m_position = 0;
	}
	if (m_position > m_length) {
		m_position = m_length;
	}
	return m_position - originalPosition;
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
int JSUMemoryInputStream::getLength() const { return m_length; }

/*
 * --INFO--
 * Address:	80026EDC
 * Size:	000008
 */
int JSUMemoryInputStream::getPosition() const { return m_position; }
