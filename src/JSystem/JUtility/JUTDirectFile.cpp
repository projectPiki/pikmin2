#include "JSystem/JUtility/JUTDirectFile.h"
#include "Dolphin/os.h"

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
int JUTDirectFile::fetch32byte()
{
	// Calculate the remaining bytes to read, limit it to the buffer size if necessary
	mToRead = mLength - ALIGN_PREV(mPos, DVD_MIN_TRANSFER_SIZE);
	if (mToRead > JUTDF_BUFSIZE) {
		mToRead = JUTDF_BUFSIZE;
	}

	// Enable interrupts, read data asynchronously from the DVD into the buffer, then restore the previous interrupt state
	int interrupts = OSEnableInterrupts();
	int readRes    = DVDReadAsync(&mFileInfo, mSectorStart, ALIGN_NEXT(mToRead, DVD_MIN_TRANSFER_SIZE),
                               ALIGN_PREV(mPos, DVD_MIN_TRANSFER_SIZE), nullptr);
	OSRestoreInterrupts(interrupts);

	// If the read operation failed, return -1. Otherwise, wait for the command block to finish and return the number of bytes read
	if (!readRes) {
		return -1;
	} else {
		interrupts = OSEnableInterrupts();
		while (DVDGetCommandBlockStatus(&mFileInfo.cBlock)) {
			;
		}
		OSRestoreInterrupts(interrupts);
		return mToRead;
	}
}

/**
 * @note Address: 0x8002982C
 * @note Size: 0x24
 */
JUTDirectFile::JUTDirectFile()
{
	mLength      = 0;
	mPos         = 0;
	mToRead      = 0;
	mSectorStart = (u8*)ALIGN_NEXT((u32)mBuffer, DVD_MIN_TRANSFER_SIZE);
	mIsOpen      = false;
}

/**
 * @note Address: 0x80029850
 * @note Size: 0x44
 */
JUTDirectFile::~JUTDirectFile() { mIsOpen = false; }

/**
 * @note Address: 0x80029894
 * @note Size: 0xA8
 */
bool JUTDirectFile::fopen(const char* filename)
{
	// If filename is null, return false
	if (!filename) {
		return false;
	}

	// Enable interrupts, open the DVD file, then restore the previous interrupt state
	int dvdInterrupt = OSEnableInterrupts();
	int dvdOpenCode  = DVDOpen(const_cast<char*>(filename), &mFileInfo);
	OSRestoreInterrupts(dvdInterrupt);

	// If the DVD open operation failed, return
	if (!dvdOpenCode) {
		mIsOpen = false;
		return false;
	}

	// Enable interrupts, get the file length, then restore the previous interrupt state
	int getFileInterrupt = OSEnableInterrupts();
	mLength              = mFileInfo.length;
	OSRestoreInterrupts(getFileInterrupt);

	mPos    = 0;
	mIsOpen = true;
	return true;
}
/**
 * @note Address: 0x8002993C
 * @note Size: 0x60
 */
void JUTDirectFile::fclose()
{
	if (mIsOpen) {
		int interrupts = OSEnableInterrupts();
		DVDClose(&mFileInfo);
		OSRestoreInterrupts(interrupts);
		mIsOpen = false;
	}
}

/**
 * @note Address: 0x8002999C
 * @note Size: 0x230
 * Gets data of length 'len' and stores in 'buf'.
 * Returns actual length gotten in bytes, or -1 if error.
 */
int JUTDirectFile::fgets(void* buf, int len)
{
	// Check if the file is open
	if (!mIsOpen) {
		return -1;
	}

	// If len is 0, return 0
	if (len == 0) {
		return 0;
	}

	// If len is 1, return 1
	if (len == 1) {
		return 1;
	}

	// Check if the buffer is null
	if (!buf) {
		return -1;
	}

	// Check if the current position is greater than or equal to the length of the file
	if (mPos >= mLength) {
		return -1;
	}

	int readMax   = len - 1;  // Maximum number of bytes to read
	u8* byteBuf   = (u8*)buf; // Buffer to store the read bytes
	int readCount = 0;        // Number of bytes read

	// Read data from the file until the end of the file is reached
	while (mPos < mLength) {
		// If there's nothing left to read and fetch32byte() returns an error, return -1
		if (mToRead == 0 && fetch32byte() < 0) {
			return -1;
		}

		// Calculate the chunk size to read
		u32 currPos   = mPos & (JUTDF_BUFSIZE - 1);
		u32 chunkSize = (mToRead - currPos);
		if (readCount + chunkSize > readMax) {
			chunkSize = len - readCount - 1;
		}

		// Read bytes from the file until the end of a line is reached
		BOOL isAtEnd = FALSE;
		for (int i = 0; i < chunkSize; i++) {
			u8 byte    = mSectorStart[currPos++];
			*byteBuf++ = byte;
			if (byte == '\n') {
				chunkSize = i + 1;
				isAtEnd   = TRUE;
				break;
			}
		}

		// If the current position exceeds the buffer size, stop reading
		if (currPos >= JUTDF_BUFSIZE) {
			mToRead = 0;
		}

		// if we hit the end of a line, set final byte to 0 and stop reading
		if (isAtEnd == TRUE) {
			readCount += chunkSize;
			*byteBuf = 0;
			mPos += chunkSize;
			break;
		}

		// Update the read count and the current position
		readCount += chunkSize;
		mPos += chunkSize;

		// If the maximum number of bytes to read is reached, stop reading
		if (readCount >= readMax) {
			*byteBuf = 0;
			break;
		}
	}

	// If the end of the file is reached, set the final byte to 0
	if (mPos >= mLength) {
		*byteBuf = 0;
	}

	// Return the number of bytes read
	return readCount;
}