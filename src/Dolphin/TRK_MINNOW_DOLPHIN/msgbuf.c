#include "PowerPC_EABI_Support/MetroTRK/trk.h"

MessageBuffer gTRKMsgBufs[3];

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void TRKSetBufferUsed(MessageBuffer* msg, BOOL state) { msg->isInUse = state; }

/**
 * @note Address: 0x800BC054
 * @note Size: 0x74
 */
DSError TRKInitializeMessageBuffers(void)
{
	int i;
	for (i = 0; i < 3; i++) {
		TRKInitializeMutex(&gTRKMsgBufs[i]);
		TRKAcquireMutex(&gTRKMsgBufs[i]);
		TRKSetBufferUsed(&gTRKMsgBufs[i], FALSE);
		TRKReleaseMutex(&gTRKMsgBufs[i]);
	}

	return DS_NoError;
}

/**
 * @note Address: 0x800BBF8C
 * @note Size: 0xC8
 */
DSError TRKGetFreeBuffer(int* msgID, MessageBuffer** outMsg)
{
	MessageBuffer* buf;
	DSError error = DS_NoMessageBufferAvailable;
	int i;

	*outMsg = nullptr;

	for (i = 0; i < 3; i++) {
		buf = TRKGetBuffer(i);

		TRKAcquireMutex(buf);
		if (!buf->isInUse) {
			TRKResetBuffer(buf, TRUE);
			TRKSetBufferUsed(buf, TRUE);
			error   = DS_NoError;
			*outMsg = buf;
			*msgID  = i;
			i       = 3; // why not break? weird choice
		}
		TRKReleaseMutex(buf);
	}

	if (error == DS_NoMessageBufferAvailable) {
		usr_puts_serial("ERROR : No buffer available\n");
	}

	return error;
}

/**
 * @note Address: 0x800BBF60
 * @note Size: 0x2C
 */
void* TRKGetBuffer(int idx)
{
	MessageBuffer* buf = nullptr;
	if (idx >= 0 && idx < 3) {
		buf = &gTRKMsgBufs[idx];
	}

	return buf;
}

/**
 * @note Address: 0x800BBEFC
 * @note Size: 0x64
 */
void TRKReleaseBuffer(int idx)
{
	MessageBuffer* msg;
	if (idx != -1 && idx >= 0 && idx < 3) {
		msg = &gTRKMsgBufs[idx];
		TRKAcquireMutex(msg);
		TRKSetBufferUsed(msg, FALSE);
		TRKReleaseMutex(msg);
	}
}

/**
 * @note Address: 0x800BBEBC
 * @note Size: 0x40
 */
void TRKResetBuffer(MessageBuffer* msg, BOOL keepData)
{
	msg->length   = 0;
	msg->position = 0;

	if (!keepData) {
		TRK_memset(msg->data, 0, 0x880);
	}
}

/**
 * @note Address: 0x800BBE8C
 * @note Size: 0x30
 */
DSError TRKSetBufferPosition(MessageBuffer* msg, u32 pos)
{
	DSError error = DS_NoError;

	if (pos > 0x880) {
		error = DS_MessageBufferOverflow;
	} else {
		msg->position = pos;
		// If the new position is past the current length,
		// update the length
		if (pos > msg->length) {
			msg->length = pos;
		}
	}

	return error;
}

/**
 * @note Address: 0x800BBDE8
 * @note Size: 0xA4
 */
DSError TRKAppendBuffer(MessageBuffer* msg, const void* data, size_t length)
{
	DSError error = DS_NoError; // r31
	u32 bytesLeft;

	// Return if no bytes to append
	if (length == 0) {
		return DS_NoError;
	}

	bytesLeft = 0x880 - msg->position;

	// If there isn't enough space left in the buffer, change the number
	// of bytes to append to the remaning number of bytes
	if (bytesLeft < length) {
		error  = DS_MessageBufferOverflow;
		length = bytesLeft;
	}

	if (length == 1) {
		// If the length of bytes to append is 1, just copy the byte over
		msg->data[msg->position] = ((u8*)data)[0];
	} else {
		// Otherwise, use memcpy
		TRK_memcpy(msg->data + msg->position, data, length);
	}

	// Update the position and length
	msg->position += length;
	msg->length = msg->position;

	return error;
}

/**
 * @note Address: 0x800BBD5C
 * @note Size: 0x8C
 */
DSError TRKReadBuffer(MessageBuffer* msg, void* data, size_t length)
{
	DSError error = DS_NoError;
	uint bytesLeft; // this has to be uint not u32 to match lmfao.

	// Return if no bytes to read
	if (length == 0) {
		return DS_NoError;
	}

	bytesLeft = msg->length - msg->position;

	// If the number of bytes to read exceeds the buffer length, change
	// the length to the remaining number of bytes
	if (length > bytesLeft) {
		error  = DS_MessageBufferReadError;
		length = bytesLeft;
	}

	TRK_memcpy(data, msg->data + msg->position, length);
	msg->position += length;
	return error;
}

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
void TRKAppendBuffer1_ui16(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xD8
 */
DSError TRKAppendBuffer1_ui32(MessageBuffer* buffer, const u32 data)
{
	u8* bigEndianData;
	u8* byteData;
	u8 swapBuffer[sizeof(data)];

	if (gTRKBigEndian) {
		bigEndianData = (u8*)&data;
	} else {
		byteData      = (u8*)&data;
		bigEndianData = swapBuffer;

		bigEndianData[0] = byteData[3];
		bigEndianData[1] = byteData[2];
		bigEndianData[2] = byteData[1];
		bigEndianData[3] = byteData[0];
	}

	return TRKAppendBuffer(buffer, (const void*)bigEndianData, sizeof(data));
}

/**
 * @note Address: 0x800BBC60
 * @note Size: 0xFC
 */
DSError TRKAppendBuffer1_ui64(MessageBuffer* buffer, const u64 data)
{
	u8* bigEndianData;
	u8* byteData;
	u8 swapBuffer[sizeof(data)];
	if (gTRKBigEndian) {
		bigEndianData = (u8*)&data;
	} else {
		byteData      = (u8*)&data;
		bigEndianData = swapBuffer;

		bigEndianData[0] = byteData[7];
		bigEndianData[1] = byteData[6];
		bigEndianData[2] = byteData[5];
		bigEndianData[3] = byteData[4];
		bigEndianData[4] = byteData[3];
		bigEndianData[5] = byteData[2];
		bigEndianData[6] = byteData[1];
		bigEndianData[7] = byteData[0];
	}

	return TRKAppendBuffer(buffer, (const void*)bigEndianData, sizeof(data));
}

/**
 * @note Address: N/A
 * @note Size: 0x128
 */
void TRKAppendBuffer1_ui128(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800BBBF8
 * @note Size: 0x68
 */
DSError TRKAppendBuffer_ui8(MessageBuffer* buffer, const u8* data, int count)
{
	DSError err;
	int i;

	for (i = 0, err = DS_NoError; err == DS_NoError && i < count; i++) {
		err = TRKAppendBuffer1_ui8(buffer, data[i]);
	}

	return err;
}

/**
 * @note Address: N/A
 * @note Size: 0xEC
 */
void TRKAppendBuffer_ui16(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800BBAFC
 * @note Size: 0xFC
 */
DSError TRKAppendBuffer_ui32(MessageBuffer* buffer, const u32* data, int count)
{
	DSError err;
	int i;

	for (i = 0, err = DS_NoError; err == DS_NoError && i < count; i++) {
		err = TRKAppendBuffer1_ui32(buffer, data[i]);
	}

	return err;
}

/**
 * @note Address: N/A
 * @note Size: 0x124
 */
void TRKAppendBuffer_ui64(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x154
 */
void TRKAppendBuffer_ui128(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
DSError TRKReadBuffer1_ui8(MessageBuffer* buffer, u8* data) { return TRKReadBuffer(buffer, (void*)data, 1); }

/**
 * @note Address: N/A
 * @note Size: 0xB8
 */
void TRKReadBuffer1_ui16(void)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
DSError TRKReadBuffer1_ui32(MessageBuffer* buffer, u32* data)
{
	DSError err;

	u8* bigEndianData;
	u8* byteData;
	u8 swapBuffer[sizeof(data)];

	if (gTRKBigEndian) {
		bigEndianData = (u8*)data;
	} else {
		bigEndianData = swapBuffer;
	}

	err = TRKReadBuffer(buffer, (void*)bigEndianData, sizeof(*data));

	if (!gTRKBigEndian && err == DS_NoError) {
		byteData = (u8*)data;

		byteData[0] = bigEndianData[3];
		byteData[1] = bigEndianData[2];
		byteData[2] = bigEndianData[1];
		byteData[3] = bigEndianData[0];
	}

	return err;
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800BBA14
 * @note Size: 0xE8
 */
DSError TRKReadBuffer1_ui64(MessageBuffer* buffer, u64* data)
{
	DSError err;

	u8* bigEndianData;
	u8* byteData;
	u8 swapBuffer[sizeof(data)];

	if (gTRKBigEndian) {
		bigEndianData = (u8*)data;
	} else {
		bigEndianData = swapBuffer;
	}

	err = TRKReadBuffer(buffer, (void*)bigEndianData, sizeof(*data));

	if (!gTRKBigEndian && err == 0) {
		byteData = (u8*)data;

		byteData[0] = bigEndianData[7];
		byteData[1] = bigEndianData[6];
		byteData[2] = bigEndianData[5];
		byteData[3] = bigEndianData[4];
		byteData[4] = bigEndianData[3];
		byteData[5] = bigEndianData[2];
		byteData[6] = bigEndianData[1];
		byteData[7] = bigEndianData[0];
	}

	return err;
}

/**
 * @note Address: N/A
 * @note Size: 0x128
 */
void TRKReadBuffer1_ui128(MessageBuffer* buffer, u8* p2, int p3)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800BB97C
 * @note Size: 0x98
 */
DSError TRKReadBuffer_ui8(MessageBuffer* buffer, u8* data, int count)
{
	DSError err;
	int i;

	for (i = 0, err = DS_NoError; err == DS_NoError && i < count; i++) {
		err = TRKReadBuffer1_ui8(buffer, &(data[i]));
	}

	return err;
}

/**
 * @note Address: N/A
 * @note Size: 0xE0
 */
void TRKReadBuffer_ui16(MessageBuffer* buffer, u8* p2, int p3)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800BB88C
 * @note Size: 0xF0
 */
DSError TRKReadBuffer_ui32(MessageBuffer* buffer, u32* data, int count)
{
	DSError err;
	s32 i;

	for (i = 0, err = DS_NoError; err == DS_NoError && i < count; i++) {
		err = TRKReadBuffer1_ui32(buffer, &(data[i]));
	}

	return err;
}

/**
 * @note Address: N/A
 * @note Size: 0x110
 */
void TRKReadBuffer_ui64(MessageBuffer* buffer, u8* p2, int p3)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x150
 */
void TRKReadBuffer_ui128(MessageBuffer* buffer, u8* p2, int p3)
{
	// UNUSED FUNCTION
}
