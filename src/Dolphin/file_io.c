#include "types.h"
#include "Dolphin/ansi_files.h"

/*
 * --INFO--
 * Address:	800C6610
 * Size:	000138
 */
int fflush(FILE* file)
{
	int pos;

	if (file == nullptr) {
		return __flush_all();
	}

	if (file->m_state.error != 0 || file->m_mode.file_kind == __closed_file) {
		return -1;
	}

	if (file->m_mode.io_mode == 1) {
		return 0;
	}

	if (file->m_state.io_state >= 3) {
		file->m_state.io_state = 2;
	}

	if (file->m_state.io_state == 2) {
		file->m_bufferLength = 0;
	}

	if (file->m_state.io_state != 1) {
		file->m_state.io_state = 0;
		return 0;
	}

	if (file->m_mode.file_kind != __disk_file) {
		pos = 0;
	} else {
		pos = ftell(file);
	}

	if (__flush_buffer(file, 0) != 0) {
		file->m_state.error  = 1;
		file->m_bufferLength = 0;
		return -1;
	}

	file->m_state.io_state = 0;
	file->m_position       = pos;
	file->m_bufferLength   = 0;
	return 0;
}

/*
 * --INFO--
 * Address:	800C6748
 * Size:	0001BC
 */
int fclose(FILE* file)
{
	int flush_result, close_result;

	if (file == nullptr)
		return (-1);
	if (file->m_mode.file_kind == __closed_file)
		return (0);

	flush_result = fflush(file);

	close_result = (*file->closeFunc)(file->m_handle);

	file->m_mode.file_kind = __closed_file;
	file->m_handle         = 0;

	if (file->m_state.free_buffer)
		free(file->m_buffer);
	return ((flush_result || close_result) ? -1 : 0);
}
