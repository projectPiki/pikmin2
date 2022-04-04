#include "types.h"
#include "JSystem/JSupport/JSUStream.h"

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
s32 JSUInputStream::read(void* data, long length)
{
	int len = readData(data, length);
	if (len != length) {
		m_isEOFMaybe |= 1;
	}
	return len;
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
s32 JSUInputStream::skip(long val)
{
	char unk;
	int i;
	for (i = 0; val > i; i++) {
		if (readData(&unk, sizeof(unk)) != sizeof(unk)) {
			m_isEOFMaybe |= 1;
			break;
		}
	}
	return i;
}

/*
 * --INFO--
 * Address:	80026564
 * Size:	00008C
 */
u32 JSURandomInputStream::align(s32 arg0)
{
	int th_var;
	s32 one_var;
	s32 newtemp;
	s32 seekPosTmp;

	one_var = getPosition();
	th_var  = (arg0 - 1 + one_var) & ~(arg0 - 1) /*- one_var*/;
	newtemp = th_var - one_var;
	if (newtemp != 0) {
		seekPosTmp = seekPos(th_var, SEEK_SET);
		if (seekPosTmp != newtemp) {
			m_isEOFMaybe |= 1;
		}
	}
	return newtemp;
}

/*
 * --INFO--
 * Address:	800265F0
 * Size:	00005C
 */
s32 JSURandomInputStream::skip(long offset)
{
	long tmp = seekPos(offset, SEEK_CUR);
	if (tmp != offset) {
		m_isEOFMaybe |= 1;
	}
	return tmp;
}

/*
 * --INFO--
 * Address:	8002664C
 * Size:	0000BC
 */
size_t JSURandomInputStream::peek(void* buffer, long byteCount)
{
	int dataLength;
	int position;
	position   = getPosition();
	dataLength = readData(buffer, byteCount);
	if (dataLength != byteCount) {
		m_isEOFMaybe |= 1;
	}
	if (dataLength != 0) {
		seekPos(position, SEEK_SET);
	}
	return dataLength;
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
