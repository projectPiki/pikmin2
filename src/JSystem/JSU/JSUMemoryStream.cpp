#include "Dolphin/stl.h"
#include "JSystem/JSU/JSUStream.h"
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
void JSUMemoryInputStream::setBuffer(const void* buffer, long length)
{
	m_object   = buffer;
	m_length   = length;
	m_position = 0;
}

/*
 * --INFO--
 * Address:	80026D70
 * Size:	000078
 */
size_t JSUMemoryInputStream::readData(void* data, long length)
{
	if (m_position + length > m_length) {
		length = m_length - m_position;
	}
	if (length > 0) {
		memcpy(data, (void*)((int)m_object + m_position), length);
		m_position += length;
	}
	return length;
}

/*
 * --INFO--
 * Address:	80026DE8
 * Size:	00007C
 */
int JSUMemoryInputStream::seekPos(long offset, JSUStreamSeekFrom mode)
{
	u32 originalPosition = m_position;
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
// JSUMemoryInputStream::~JSUMemoryInputStream()
// {
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
// }

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
