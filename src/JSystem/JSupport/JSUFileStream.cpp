#include "JSystem/JKR/JKRFile.h"
#include "JSystem/JSupport/JSUStream.h"
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
*/

/*
 * __ct
 *
 * --INFO--
 * Address:	80026EE4
 * Size:	000044
 * Matches
 */
JSUFileInputStream::JSUFileInputStream(JKRFile* file)
{
	m_object = file;
	m_length = 0;
}

/*
 * --INFO--
 * Address:	80026F28
 * Size:	0000E0
 * Matches
 */
int JSUFileInputStream::readData(void* buffer, long byteCount)
{
	int readBytes = 0;
	if (((JKRFile*)m_object)->_18) {
		if ((u32)(m_length + byteCount) > ((JKRFile*)m_object)->getFileSize()) {
			byteCount = ((JKRFile*)m_object)->getFileSize() - m_length;
		}
		if (byteCount > 0) {
			readBytes = ((JKRFile*)m_object)->readData(buffer, byteCount, m_length);
			if (readBytes < 0) {
				return 0;
			} else {
				m_length += readBytes;
			}
		}
	}
	return readBytes;
}

/*
 * --INFO--
 * Address:	80027008
 * Size:	0000E8
 * Matches
 */
int JSUFileInputStream::seekPos(long offset, JSUStreamSeekFrom mode)
{
	u32 originalLength = m_length;
	switch (mode) {
	case SEEK_SET:
		m_length = offset;
		break;
	case SEEK_END:
		m_length = ((JKRFile*)m_object)->getFileSize() - offset;
		break;
	case SEEK_CUR:
		m_length += offset;
		break;
	default:
		break;
	}
	if (0 > m_length) {
		m_length = 0;
	}
	if (m_length > ((JKRFile*)m_object)->getFileSize()) {
		m_length = ((JKRFile*)m_object)->getFileSize();
	}
	return m_length - originalLength;
}

/*
 * --INFO--
 * Address:	800270F0
 * Size:	000030
 * Weak function. Found in JSUStream.h
 * Matches
 */
// int JSUFileInputStream::getLength() const { return ((JKRFile*)m_object)->getFileSize(); }

/*
 * --INFO--
 * Address:	80027120
 * Size:	000008
 * Weak function. Found in JSUStream.h
 * Matches
 */
// int JSUFileInputStream::getPosition() const { return m_length; }
