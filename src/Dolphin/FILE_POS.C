#include "types.h"

#ifndef _MSL_WIDE_CHAR
#define _MSL_WIDE_CHAR
#endif

#include "Dolphin/critical_regions.h"
#include "Dolphin/FILE_POS.h"
#include "errno.h"

/*
 * --INFO--
 * Address:	800C6904
 * Size:	00006C
 */
int fseek(FILE* stream, u32 offset, int whence)
{
	int code;
	__begin_critical_region(2);
	code = _fseek(stream, offset, whence); // 0 if successful, -1 if error
	__end_critical_region(2);
	return code;
}

/*
 * --INFO--
 * Address:	800C6970
 * Size:	000270
 */
int _fseek(FILE* file, u32 offset, int whence)
{
	int bufferCode;
	int pos;
	int adjust;
	u32 state;
	int buffLen;

	char* ptr;

	if (file->m_mode.file_kind != 1 || file->m_state.error != 0) {
		errno = 0x28;
		return -1;
	}

	if (file->m_state.io_state == 1) {
		if (__flush_buffer(file, nullptr) != 0) {
			file->m_state.error  = 1;
			file->m_bufferLength = 0;
			errno                = 0x28;
			return -1;
		}
	}

	if (whence == SEEK_CUR) {
		whence = SEEK_SET;
		adjust = 0;
		if ((file->m_mode.file_kind != 1 && file->m_mode.file_kind != 2) || file->m_state.error != 0) {
			errno = 0x28;
			pos   = -1;
		} else {
			state = file->m_state.io_state;
			if (state == 0) {
				pos = file->m_position;
			} else {
				pos     = file->m_bufferPosition;
				ptr     = file->m_buffer;
				buffLen = (file->m_bufferPtr - ptr);
				pos += buffLen;
				if ((state >= 3)) {
					adjust = (state - 2);
					pos -= adjust;
				}

				if (file->m_mode.binary_io == 0) {
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

	if ((whence != SEEK_END) && (file->m_mode.io_mode != 3) && (file->m_state.io_state == 2 || file->m_state.io_state == 3)) {
		if ((offset >= file->m_position) || !(offset >= file->m_bufferPosition)) {
			file->m_state.io_state = 0;
		} else {
			file->m_bufferPtr      = file->m_buffer + (offset - file->m_bufferPosition);
			file->m_bufferLength   = file->m_position - offset;
			file->m_state.io_state = 2;
		}
	} else {
		file->m_state.io_state = 0;
	}

	if (file->m_state.io_state == 0) {
		if (file->positionFunc != nullptr && (int)file->positionFunc(file->m_handle, &offset, whence, file->ref_con)) {
			file->m_state.error  = 1;
			file->m_bufferLength = 0;
			errno                = 0x28;
			return -1;
		} else {
			file->m_state.eof    = 0;
			file->m_position     = offset;
			file->m_bufferLength = 0;
		}
	}

	return 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
int _ftell(FILE* file)
{
	int charsInUndoBuffer = 0;
	int position;

	u8 tmp_kind = file->m_mode.file_kind;
	if (!(tmp_kind == __disk_file || tmp_kind == __console_file) || file->m_state.error) {
		errno = 0x28;
		return -1;
	}

	if (file->m_state.io_state == __neutral)
		return (file->m_position);

	position = file->m_bufferPosition + (file->m_bufferPtr - file->m_buffer);

	if (file->m_state.io_state >= __rereading) {
		charsInUndoBuffer = file->m_state.io_state - __rereading + 1;
		position -= charsInUndoBuffer;
	}

	if (!file->m_mode.binary_io) {
		int n = file->m_bufferPtr - file->m_buffer - charsInUndoBuffer;
		u8* p = (u8*)file->m_buffer;

		while (n--)
			if (*p++ == '\n')
				position++;
	}

	return (position);
}

/*
 * --INFO--
 * Address:	800C6BE0
 * Size:	0000E4
 */
int ftell(FILE* stream)
{
	int retval;

	__begin_critical_region(2);
	retval = (long)_ftell(stream);
	__end_critical_region(2);
	return retval;
}
