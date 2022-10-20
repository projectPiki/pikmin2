#include "Dolphin/ansi_files.h"
#include "types.h"

/*
 * --INFO--
 * Address:	800C6160
 * Size:	0000C4
 */
int __flush_buffer(FILE* file, size_t* length)
{
	size_t bufferLen;
	int writeCode;

	bufferLen = file->m_bufferPtr - file->m_buffer;
	if (bufferLen) {
		file->m_bufferLength = bufferLen;
		writeCode            = file->writeFunc(file->m_handle, file->m_buffer, &file->m_bufferLength, file->ref_con);
		if (length) {
			*length = file->m_bufferLength;
		}
		if (writeCode) {
			return writeCode;
		}
		file->m_position += file->m_bufferLength;
	}

	file->m_bufferPtr      = file->m_buffer;
	file->m_bufferLength   = file->m_bufferSize;
	file->m_bufferLength   = file->m_bufferLength - (file->m_position & file->m_bufferAlignment);
	file->m_bufferPosition = file->m_position;
	return 0;
}

/*
 * --INFO--
 * Address:	800C6224
 * Size:	000034
 */
void __prep_buffer(FILE* file)

{
	file->m_bufferPtr      = file->m_buffer;
	file->m_bufferLength   = file->m_bufferSize;
	file->m_bufferLength   = file->m_bufferLength - (file->m_position & file->m_bufferAlignment);
	file->m_bufferPosition = file->m_position;
	return;
}
