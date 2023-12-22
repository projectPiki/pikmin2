#include "JSystem/JKernel/JKRFile.h"
#include "JSystem/JSupport/JSUStream.h"
#include "types.h"

/**
 * __ct
 *
 * @note Address: 0x80026EE4
 * @note Size: 0x44
 * Matches
 */
JSUFileInputStream::JSUFileInputStream(JKRFile* file)
{
	mObject = file;
	mLength = 0;
}

/**
 * @note Address: 0x80026F28
 * @note Size: 0xE0
 * Matches
 */
int JSUFileInputStream::readData(void* buffer, s32 byteCount)
{
	int readBytes = 0;
	if (((JKRFile*)mObject)->mFileOpen) {
		if ((u32)(mLength + byteCount) > ((JKRFile*)mObject)->getFileSize()) {
			byteCount = ((JKRFile*)mObject)->getFileSize() - mLength;
		}
		if (byteCount > 0) {
			readBytes = ((JKRFile*)mObject)->readData(buffer, byteCount, mLength);
			if (readBytes < 0) {
				return 0;
			} else {
				mLength += readBytes;
			}
		}
	}
	return readBytes;
}

/**
 * @note Address: 0x80027008
 * @note Size: 0xE8
 * Matches
 */
int JSUFileInputStream::seekPos(s32 offset, JSUStreamSeekFrom mode)
{
	u32 originalLength = mLength;
	switch (mode) {
	case SEEK_SET:
		mLength = offset;
		break;
	case SEEK_END:
		mLength = ((JKRFile*)mObject)->getFileSize() - offset;
		break;
	case SEEK_CUR:
		mLength += offset;
		break;
	default:
		break;
	}
	if (0 > mLength) {
		mLength = 0;
	}
	if (mLength > ((JKRFile*)mObject)->getFileSize()) {
		mLength = ((JKRFile*)mObject)->getFileSize();
	}
	return mLength - originalLength;
}

/**
 * @note Address: 0x800270F0
 * @note Size: 0x30
 * Weak function. Found in JSUStream.h
 * Matches
 */
// int JSUFileInputStream::getLength() const { return ((JKRFile*)mObject)->getFileSize(); }

/**
 * @note Address: 0x80027120
 * @note Size: 0x8
 * Weak function. Found in JSUStream.h
 * Matches
 */
// int JSUFileInputStream::getPosition() const { return mLength; }
