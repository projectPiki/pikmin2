#include "PowerPC_EABI_Support/MSL_C/MSL_Common/ansi_files.h"
#include "types.h"

/*
 * --INFO--
 * Address:	800C6224
 * Size:	000034
 */
void __prep_buffer(FILE* file)

{
	file->mBufferPtr      = file->mBuffer;
	file->mBufferLength   = file->mBufferSize;
	file->mBufferLength   = file->mBufferLength - (file->mPosition & file->mBufferAlignment);
	file->mBufferPosition = file->mPosition;
	return;
}

/*
 * --INFO--
 * Address:	800C6160
 * Size:	0000C4
 */
int __flush_buffer(FILE* file, size_t* length)
{
	size_t bufferLen;
	int writeCode;

	bufferLen = file->mBufferPtr - file->mBuffer;
	if (bufferLen) {
		file->mBufferLength = bufferLen;
		writeCode           = file->writeFunc(file->mHandle, file->mBuffer, &file->mBufferLength, file->ref_con);
		if (length) {
			*length = file->mBufferLength;
		}
		if (writeCode) {
			return writeCode;
		}
		file->mPosition += file->mBufferLength;
	}

	file->mBufferPtr      = file->mBuffer;
	file->mBufferLength   = file->mBufferSize;
	file->mBufferLength   = file->mBufferLength - (file->mPosition & file->mBufferAlignment);
	file->mBufferPosition = file->mPosition;
	return 0;
}
