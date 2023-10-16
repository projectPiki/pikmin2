#include "JSystem/JSupport/JSUStream.h"
#include "mem.h"
#include "types.h"

/*
 * --INFO--
 * Address:	80026D5C
 * Size:	000014
 * Matches
 */
void JSUMemoryInputStream::setBuffer(const void* buffer, long length)
{
	mObject   = buffer;
	mLength   = length;
	mPosition = 0;
}

/*
 * --INFO--
 * Address:	80026D70
 * Size:	000078
 * Matches
 */
int JSUMemoryInputStream::readData(void* data, long length)
{
	if (mPosition + length > mLength) {
		length = mLength - mPosition;
	}
	if (length > 0) {
		memcpy(data, (void*)((int)mObject + mPosition), length);
		mPosition += length;
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
	u32 originalPosition = mPosition;
	switch (mode) {
	case SEEK_SET:
		mPosition = offset;
		break;
	case SEEK_END:
		mPosition = mLength - offset;
		break;
	case SEEK_CUR:
		mPosition += offset;
		break;
	default:
		break;
	}
	if (0 > mPosition) {
		mPosition = 0;
	}
	if (mPosition > mLength) {
		mPosition = mLength;
	}
	return mPosition - originalPosition;
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
// int JSUMemoryInputStream::getLength() const { return mLength; }

/*
 * --INFO--
 * Address:	80026EDC
 * Size:	000008
 * Weak function. Found in JSUStream.h
 * Matches
 */
// int JSUMemoryInputStream::getPosition() const { return mPosition; }
