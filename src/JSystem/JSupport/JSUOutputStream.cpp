#include "types.h"
#include "string.h"
#include "JSystem/JSupport/JSUStream.h"

/**
 * @note Address: N/A
 * @note Size: 0x5C
 * Unused function.
 */
JSUOutputStream::~JSUOutputStream() { }

/**
 * @note Address: 0x800261E0
 * @note Size: 0x58
 */
int JSUOutputStream::write(const void* data, s32 length)
{
	int len = writeData(data, length);
	if (len != length) {
		mIsEOFMaybe |= 1;
	}
	return len;
}

/**
 * @note Address: 0x80026238
 * @note Size: 0xF8
 */
void JSUOutputStream::write(const char* str)
{
	if (str == nullptr) {
		u16 val = 0;
		if (writeData(&val, 2) != sizeof(val)) {
			mIsEOFMaybe |= 1;
		}
	} else {
		int len = strlen((char*)str);
		if ((s32)len >= 0x10000) {
			mIsEOFMaybe |= 2;
		} else {
			u16 val = len;
			if (writeData(&val, 2) != sizeof(val) || (writeData(str, len) != len)) {
				mIsEOFMaybe |= 1;
			}
		}
	}
	return;
}
