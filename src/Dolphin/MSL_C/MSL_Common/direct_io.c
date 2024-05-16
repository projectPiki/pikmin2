#include "types.h"

#ifndef _MSL_WIDE_CHAR
#define _MSL_WIDE_CHAR
#endif

#include "wchar.h"
#include "stdio.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/stdio_api.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/misc_io.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/critical_regions.h"

// define standard C file pointer location names
#define SEEK_SET (0)
#define SEEK_CUR (1)
#define SEEK_END (2)

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
void fread(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x350
 */
void __fread(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800C6594
 * @note Size: 0x7C
 */
size_t fwrite(const void* pPtr, size_t memb_size, size_t num_memb, FILE* pFile)
{
	size_t retval;

	__begin_critical_region(stdin_access);
	retval = __fwrite(pPtr, memb_size, num_memb, pFile);
	__end_critical_region(stdin_access);

	return retval;
}

/**
 * @note Address: 0x800C6288
 * @note Size: 0x30C
 */
size_t __fwrite(const void* pPtr, size_t memb_size, size_t num_memb, FILE* pFile)
{
	u8* cur_ptr;
	size_t num_bytes, rem_bytes, bytes_written;
	int res, buff;

	if (fwide(pFile, 0) == 0) {
		fwide(pFile, -1);
	}

	rem_bytes = memb_size * num_memb;

	if (rem_bytes == 0 || pFile->mState.error || pFile->mMode.file_kind == __closed_file) {
		return 0;
	}

	if (pFile->mMode.file_kind == __console_file) {
		__stdio_atexit();
	}

	buff = (!pFile->mMode.binary_io || pFile->mMode.buffer_mode == 2 || pFile->mMode.buffer_mode == 1);

	if (pFile->mState.io_state == __neutral && pFile->mMode.io_mode & 2) {
		if (pFile->mMode.io_mode & 4) {
			if (fseek(pFile, 0, SEEK_END)) {
				return 0;
			}
		}

		pFile->mState.io_state = __writing;
		__prep_buffer(pFile);
	}

	if (pFile->mState.io_state != __writing) {
		pFile->mState.error  = 1;
		pFile->mBufferLength = 0;
		return 0;
	}

	cur_ptr       = (u8*)pPtr;
	bytes_written = 0;

	if (rem_bytes && (pFile->mBufferPtr != pFile->mBuffer || buff)) {
		pFile->mBufferLength = pFile->mBufferSize - (pFile->mBufferPtr - pFile->mBuffer);

		do {
			u8* nw    = 0;
			num_bytes = pFile->mBufferLength;

			if (num_bytes > rem_bytes) {
				num_bytes = rem_bytes;
			}

			if (pFile->mMode.buffer_mode == 1 && num_bytes) {
				if ((nw = (u8*)__memrchr(cur_ptr, '\n', num_bytes)) != 0) {
					num_bytes = nw + 1 - cur_ptr;
				}
			}

			if (num_bytes != 0) {
				memcpy(pFile->mBufferPtr, cur_ptr, num_bytes);
				cur_ptr += num_bytes;
				bytes_written += num_bytes;
				rem_bytes -= num_bytes;
				pFile->mBufferPtr += num_bytes;
				pFile->mBufferLength -= num_bytes;
			}

			if (pFile->mBufferLength == 0 || nw != 0 || (!pFile->mMode.buffer_mode)) {
				res = __flush_buffer(pFile, 0);

				if (res != 0) {
					pFile->mState.error  = 1;
					pFile->mBufferLength = 0;
					rem_bytes            = 0;
					break;
				}
			}

		} while (rem_bytes && buff);
	}

	if (rem_bytes && buff == 0) {
		u8* save_buf     = (u8*)pFile->mBuffer;
		size_t save_size = pFile->mBufferSize;

		pFile->mBuffer     = (char*)cur_ptr;
		pFile->mBufferSize = rem_bytes;
		pFile->mBufferPtr  = (char*)cur_ptr + rem_bytes;

		if (__flush_buffer(pFile, &num_bytes) != 0) {
			pFile->mState.error  = 1;
			pFile->mBufferLength = 0;
		}

		bytes_written += num_bytes;

		pFile->mBuffer     = (char*)save_buf;
		pFile->mBufferSize = save_size;
		__prep_buffer(pFile);
		pFile->mBufferLength = 0;
	}

	if (pFile->mMode.buffer_mode != 2) {
		pFile->mBufferLength = 0;
	}

	return (bytes_written + memb_size - 1) / memb_size;
}
