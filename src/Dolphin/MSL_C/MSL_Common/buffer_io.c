#include "PowerPC_EABI_Support/MSL_C/MSL_Common/ansi_files.h"

/**
 * @note Address: 0x800C6224
 * @note Size: 0x34
 */
void __prep_buffer(FILE* file)

{
	file->mBufferPtr      = file->mBuffer;
	file->mBufferLength   = file->mBufferSize;
	file->mBufferLength   = file->mBufferLength - (file->mPosition & file->mBufferAlignment);
	file->mBufferPosition = file->mPosition;
	return;
}

/**
 * @note Address: 0x800C6160
 * @note Size: 0xC4
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
