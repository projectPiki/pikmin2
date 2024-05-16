#include "types.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/ansi_files.h"

/**
 * @note Address: 0x800C6748
 * @note Size: 0x1BC
 */
int fclose(FILE* file)
{
	int flush_result, close_result;

	if (file == nullptr)
		return (-1);
	if (file->mMode.file_kind == __closed_file)
		return (0);

	flush_result = fflush(file);

	close_result = (*file->closeFunc)(file->mHandle);

	file->mMode.file_kind = __closed_file;
	file->mHandle         = 0;

	if (file->mState.free_buffer)
		free(file->mBuffer);
	return ((flush_result || close_result) ? -1 : 0);
}

/**
 * @note Address: 0x800C6610
 * @note Size: 0x138
 */
int fflush(FILE* file)
{
	int pos;

	if (file == nullptr) {
		return __flush_all();
	}

	if (file->mState.error != 0 || file->mMode.file_kind == __closed_file) {
		return -1;
	}

	if (file->mMode.io_mode == 1) {
		return 0;
	}

	if (file->mState.io_state >= __rereading) {
		file->mState.io_state = __reading;
	}

	if (file->mState.io_state == __reading) {
		file->mBufferLength = 0;
	}

	if (file->mState.io_state != __writing) {
		file->mState.io_state = __neutral;
		return 0;
	}

	if (file->mMode.file_kind != __disk_file) {
		pos = 0;
	} else {
		pos = ftell(file);
	}

	if (__flush_buffer(file, 0) != 0) {
		file->mState.error  = 1;
		file->mBufferLength = 0;
		return -1;
	}

	file->mState.io_state = __neutral;
	file->mPosition       = pos;
	file->mBufferLength   = 0;
	return 0;
}
