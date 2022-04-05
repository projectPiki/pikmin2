#include "Dolphin/stl.h"
#include "JSystem/JSupport/JSUStream.h"
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
*/

/*
 * --INFO--
 * Address:	80026D5C
 * Size:	000014
 * Matches
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
 * Matches
 */
int JSUMemoryInputStream::readData(void* data, long length)
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
 * Matches
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
 * Weak function. Found in JSUStream.h
 * Matches
 */
// JSUMemoryInputStream::~JSUMemoryInputStream()

/*
 * --INFO--
 * Address:	80026ED4
 * Size:	000008
 * Weak function. Found in JSUStream.h
 * Matches
 */
// int JSUMemoryInputStream::getLength() const { return m_length; }

/*
 * --INFO--
 * Address:	80026EDC
 * Size:	000008
 * Weak function. Found in JSUStream.h
 * Matches
 */
// int JSUMemoryInputStream::getPosition() const { return m_position; }
