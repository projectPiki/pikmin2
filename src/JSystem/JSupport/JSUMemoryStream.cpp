#include "JSystem/JSupport/JSUStream.h"
#include "mem.h"
#include "types.h"

/**
 * @note Address: 0x80026D5C
 * @note Size: 0x14
 */
void JSUMemoryInputStream::setBuffer(const void* buffer, s32 length)
{
	mObject   = buffer;
	mLength   = length;
	mPosition = 0;
}

/**
 * @note Address: 0x80026D70
 * @note Size: 0x78
 */
int JSUMemoryInputStream::readData(void* data, s32 length)
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

/**
 * @note Address: 0x80026DE8
 * @note Size: 0x7C
 */
int JSUMemoryInputStream::seekPos(s32 offset, JSUStreamSeekFrom mode)
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
