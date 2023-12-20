#include "PowerPC_EABI_Support/MetroTRK/custconn/CircleBuffer.h"

/**
 * @note Address: 0x800C11F4
 * @note Size: 0x8
 */
u32 CBGetBytesAvailableForRead(CircleBuffer* cb) { return cb->mBytesToRead; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
u32 CBGetBytesAvailableForWrite(CircleBuffer* cb) { return cb->mBytesToWrite; }

/**
 * @note Address: 0x800C11A4
 * @note Size: 0x50
 */
void CircleBufferInitialize(CircleBuffer* cb, u8* buf, u32 size)
{
	cb->mStartPtr     = buf;
	cb->mSize         = size;
	cb->mReadPtr      = cb->mStartPtr;
	cb->mWritePtr     = cb->mStartPtr;
	cb->mBytesToRead  = 0;
	cb->mBytesToWrite = cb->mSize;
	MWInitializeCriticalSection(&cb->mSection);
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void CircleBufferTerminate(CircleBuffer* cb)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800C109C
 * @note Size: 0x108
 */
int CircleBufferWriteBytes(CircleBuffer* cb, u8* buf, u32 size)
{
	int availSize;

	if (size > cb->mBytesToWrite) {
		return -1;
	}
	MWEnterCriticalSection(&cb->mSection);
	availSize = cb->mSize - (cb->mWritePtr - cb->mStartPtr);
	if (availSize >= size) {
		memcpy(cb->mWritePtr, buf, size);
		cb->mWritePtr += size;
	} else {
		memcpy(cb->mWritePtr, buf, availSize);
		memcpy(cb->mStartPtr, buf + availSize, size - availSize);
		cb->mWritePtr = cb->mStartPtr + size - availSize;
	}

	if (cb->mSize == (cb->mWritePtr - cb->mStartPtr)) {
		cb->mWritePtr = cb->mStartPtr;
	}

	cb->mBytesToWrite -= size;
	cb->mBytesToRead += size;
	MWExitCriticalSection(&cb->mSection);
	return 0;
}

/**
 * @note Address: 0x800C0F94
 * @note Size: 0x108
 */
int CircleBufferReadBytes(CircleBuffer* cb, u8* buf, u32 size)
{
	int availSize;

	if (size > cb->mBytesToRead) {
		return -1;
	}
	MWEnterCriticalSection(&cb->mSection);
	availSize = cb->mSize - (cb->mReadPtr - cb->mStartPtr);
	if (size < availSize) {
		memcpy(buf, cb->mReadPtr, size);
		cb->mReadPtr += size;
	} else {
		memcpy(buf, cb->mReadPtr, availSize);
		memcpy(buf + availSize, cb->mStartPtr, size - availSize);
		cb->mReadPtr = cb->mStartPtr + size - availSize;
	}

	if (cb->mSize == (cb->mReadPtr - cb->mStartPtr)) {
		cb->mReadPtr = cb->mStartPtr;
	}

	cb->mBytesToWrite += size;
	cb->mBytesToRead -= size;
	MWExitCriticalSection(&cb->mSection);
	return 0;
}
