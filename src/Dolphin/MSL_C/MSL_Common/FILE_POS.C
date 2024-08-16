#include "types.h"

#ifndef _MSL_WIDE_CHAR
#define _MSL_WIDE_CHAR
#endif

#include "PowerPC_EABI_Support/MSL_C/MSL_Common/critical_regions.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/FILE_POS.h"
#include "errno.h"

// define standard C file pointer location names
#define SEEK_SET (0)
#define SEEK_CUR (1)
#define SEEK_END (2)

/**
 * @note Address: 0x800C6BE0
 * @note Size: 0xE4
 */
int ftell(FILE* stream)
{
	int retval;

	__begin_critical_region(stdin_access);
	retval = (s32)_ftell(stream);
	__end_critical_region(stdin_access);
	return retval;
}

/**
 * @note Address: N/A
 * @note Size: 0xAC
 */
int _ftell(FILE* file)
{
	int charsInUndoBuffer = 0;
	int position;

	u8 tmp_kind = file->mMode.file_kind;
	if (!(tmp_kind == __disk_file || tmp_kind == __console_file) || file->mState.error) {
		errno = EFPOS;
		return -1;
	}

	if (file->mState.io_state == __neutral)
		return (file->mPosition);

	position = file->mBufferPosition + (file->mBufferPtr - file->mBuffer);

	if (file->mState.io_state >= __rereading) {
		charsInUndoBuffer = file->mState.io_state - __rereading + 1;
		position -= charsInUndoBuffer;
	}

	if (!file->mMode.binary_io) {
		int n = file->mBufferPtr - file->mBuffer - charsInUndoBuffer;
		u8* p = (u8*)file->mBuffer;

		while (n--)
			if (*p++ == '\n')
				position++;
	}

	return (position);
}

/**
 * @note Address: 0x800C6970
 * @note Size: 0x270
 */
int _fseek(FILE* file, u32 offset, int whence)
{
	int bufferCode;
	int pos;
	int adjust;
	u32 state;
	int buffLen;

	char* ptr;

	if (file->mMode.file_kind != __disk_file || file->mState.error != 0) {
		errno = EFPOS;
		return -1;
	}

	if (file->mState.io_state == __writing) {
		if (__flush_buffer(file, nullptr) != 0) {
			file->mState.error  = 1;
			file->mBufferLength = 0;
			errno               = EFPOS;
			return -1;
		}
	}

	if (whence == SEEK_CUR) {
		whence = SEEK_SET;
		adjust = 0;
		if ((file->mMode.file_kind != __disk_file && file->mMode.file_kind != __console_file) || file->mState.error != 0) {
			errno = EFPOS;
			pos   = -1;
		} else {
			state = file->mState.io_state;
			if (state == __neutral) {
				pos = file->mPosition;
			} else {
				pos     = file->mBufferPosition;
				ptr     = file->mBuffer;
				buffLen = (file->mBufferPtr - ptr);
				pos += buffLen;
				if ((state >= __rereading)) {
					adjust = (state - 2);
					pos -= adjust;
				}

				if (file->mMode.binary_io == 0) {
					int i;
					for (i = (buffLen - adjust); i != 0; i--) {
						u8 c = *ptr;
						ptr++;
						if (c == 10) {
							pos++;
						}
					}
				}
			}
		}
		offset += pos;
	}

	if ((whence != SEEK_END) && (file->mMode.io_mode != 3)
	    && (file->mState.io_state == __reading || file->mState.io_state == __rereading)) {
		if ((offset >= file->mPosition) || !(offset >= file->mBufferPosition)) {
			file->mState.io_state = __neutral;
		} else {
			file->mBufferPtr      = file->mBuffer + (offset - file->mBufferPosition);
			file->mBufferLength   = file->mPosition - offset;
			file->mState.io_state = __reading;
		}
	} else {
		file->mState.io_state = __neutral;
	}

	if (file->mState.io_state == __neutral) {
		if (file->positionFunc != nullptr && (int)file->positionFunc(file->mHandle, &offset, whence, file->ref_con)) {
			file->mState.error  = 1;
			file->mBufferLength = 0;
			errno               = EFPOS;
			return -1;
		} else {
			file->mState.eof    = 0;
			file->mPosition     = offset;
			file->mBufferLength = 0;
		}
	}

	return 0;
}

/**
 * @note Address: 0x800C6904
 * @note Size: 0x6C
 */
int fseek(FILE* stream, u32 offset, int whence)
{
	int code;
	__begin_critical_region(stdin_access);
	code = _fseek(stream, offset, whence); // 0 if successful, -1 if error
	__end_critical_region(stdin_access);
	return code;
}
