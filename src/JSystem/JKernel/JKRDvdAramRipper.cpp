#include "JSystem/JKernel/JKRDvdAramRipper.h"
#include "Dolphin/os.h"
#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JKernel/JKRFile.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JSupport/JSUStream.h"
#include "JSystem/JKernel/JKRDecomp.h"
#include "stl/limits.h"
#include "stl/mem.h"
#include "types.h"

JSUList<JKRADCommand> JKRDvdAramRipper::sDvdAramAsyncList;

bool JKRDvdAramRipper::errorRetry    = true;
int JKRDvdAramRipper::sSZSBufferSize = 0x400;

static OSMutex decompMutex;
static u8* szpBuf;
static u8* szpEnd;
static u8* refBuf;
static u8* refEnd;
static u8* refCurrent;
static u8* dmaBuf;
static u8* dmaEnd;
static u8* dmaCurrent;
static u32 srcOffset;
static u32 transLeft;
static u8* srcLimit;
static JKRDvdFile* srcFile;
static u32 fileOffset;
static int readCount;
static u32 maxDest;
static bool isInitMutex;
static u32* tsPtr;
static u32 tsArea;

// forward declaring static funcs
static int decompSZS_subroutine(u8*, u32);
static u8* firstSrcData();
static u8* nextSrcData(u8*);
static u32 dmaBufferFlush(u32);

/**
 * @note Address: 0x8001D6F0
 * @note Size: 0x9C
 * loadToAram__16JKRDvdAramRipperFPCcUl15JKRExpandSwitchUlUlPUl
 */
JKRAramBlock* JKRDvdAramRipper::loadToAram(const char* path, u32 addr, JKRExpandSwitch expandSwitch, u32 offset, u32 size, u32* sizePtr)
{
	JKRDvdFile file;
	if (!file.open(path)) {
		return nullptr;
	}
	return loadToAram(&file, addr, expandSwitch, offset, size, sizePtr);
}

/**
 * @note Address: 0x8001D78C
 * @note Size: 0x9C
 * loadToAram__16JKRDvdAramRipperFlUl15JKRExpandSwitchUlUlPUl
 */
JKRAramBlock* JKRDvdAramRipper::loadToAram(s32 entryNum, u32 addr, JKRExpandSwitch expandSwitch, u32 offset, u32 size, u32* sizePtr)
{
	JKRDvdFile file;
	if (!file.open(entryNum)) {
		return nullptr;
	}
	return loadToAram(&file, addr, expandSwitch, offset, size, sizePtr);
}

/**
 * @note Address: 0x8001D828
 * @note Size: 0xA4
 * loadToAram__16JKRDvdAramRipperFP10JKRDvdFileUl15JKRExpandSwitchUlUlPUl
 */
JKRAramBlock* JKRDvdAramRipper::loadToAram(JKRDvdFile* file, u32 addr, JKRExpandSwitch expandSwitch, u32 offset, u32 size, u32* sizePtr)
{
	JKRADCommand* command = loadToAram_Async(file, addr, expandSwitch, nullptr, offset, size, sizePtr);
	syncAram(command, FALSE);
	if (command->mStatus < 0) {
		delete command;
		return nullptr;
	}
	if (addr) {
		delete command;
		return reinterpret_cast<JKRAramBlock*>(std::numeric_limits<size_t>::max());
	}
	JKRAramBlock* outBlock = command->mBlock;
	delete command;
	return outBlock;
}

/**
 * @note Address: 0x8001D8CC
 * @note Size: 0xAC
 * loadToAram_Async__16JKRDvdAramRipperFP10JKRDvdFileUl15JKRExpandSwitchPFUl_vUlUlPUl
 */
JKRADCommand* JKRDvdAramRipper::loadToAram_Async(JKRDvdFile* file, u32 addr, JKRExpandSwitch expandSwitch, LoadCallback callback,
                                                 u32 offset, u32 size, u32* sizePtr)
{
	JKRADCommand* command  = new (JKRHeap::sSystemHeap, -4) JKRADCommand();
	command->mDvdFile      = file;
	command->mAddress      = addr;
	command->mBlock        = nullptr;
	command->mExpandSwitch = expandSwitch;
	command->mCallBack     = callback;
	command->mFileOffset   = offset;
	command->mSize         = size;
	command->mSizePtr      = sizePtr;
	if (!callCommand_Async(command)) {
		delete command;
		return nullptr;
	}
	return command;
}

/**
 * @note Address: 0x8001D978
 * @note Size: 0x350
 */
JKRADCommand* JKRDvdAramRipper::callCommand_Async(JKRADCommand* command)
{
	bool isCmdTrdNull          = true;
	JKRDvdFile* dvdFile        = command->mDvdFile;
	JKRCompression compression = COMPRESSION_None;
	OSLockMutex(&dvdFile->mAramMutex);

	s32 uncompressedSize;
	if (command->mSizePtr) {
		*command->mSizePtr = 0;
	}

	if (dvdFile->mCommandThread) {
		isCmdTrdNull = false;

	} else {
		dvdFile->mCommandThread    = OSGetCurrentThread();
		JSUFileInputStream* stream = new (JKRGetSystemHeap(), -4) JSUFileInputStream(dvdFile);
		dvdFile->mInputStream      = stream;
		u32 size                   = dvdFile->getFileSize();
		if (command->mSize && size > command->mSize) {
			size = command->mSize;
		}
		size = ALIGN_NEXT(size, 0x20);
		if (command->mExpandSwitch == Switch_1) {
			u8 buffer[0x40];
			u8* bufPtr = (u8*)ALIGN_NEXT((u32)buffer, 0x20);
			while (true) {
				if (DVDReadPrio(dvdFile->getFileInfo(), bufPtr, 0x20, 0, 2) >= 0) {
					break;
				}

				if (errorRetry == false) {
					delete stream;
					return nullptr;
				}

				VIWaitForRetrace();
			}
			DCInvalidateRange(bufPtr, 0x20);
			compression      = JKRCheckCompressed(bufPtr);
			u32 expSize      = JKRDecompExpandSize(bufPtr);
			uncompressedSize = expSize;

			if (command->mSize && expSize > command->mSize) {
				uncompressedSize = command->mSize;
			}
		}

		if (compression == COMPRESSION_None) {
			command->mExpandSwitch = Switch_0;
		}

		if (command->mExpandSwitch == Switch_1) {
			if (command->mAddress == 0 && command->mBlock == nullptr) {
				command->mBlock = JKRAram::getAramHeap()->alloc(uncompressedSize, JKRAramHeap::AM_Head);
				if (command->mBlock) {
					command->mAddress = command->mBlock->mAddress;
				}
				dvdFile->mBlock = command->mBlock;
			}

			if (command->mBlock) {
				command->mAddress = command->mBlock->mAddress;
			}

			if (command->mAddress == 0) {
				dvdFile->mCommandThread = nullptr;
				return nullptr;
			}
		} else {
			if (command->mAddress == 0 && !command->mBlock) {
				command->mBlock = JKRAram::getAramHeap()->alloc(size, JKRAramHeap::AM_Head);
			}

			if (command->mBlock) {
				command->mAddress = command->mBlock->mAddress;
			}

			if (command->mAddress == 0) {
				dvdFile->mCommandThread = nullptr;
				return nullptr;
			}
		}

		if (compression == COMPRESSION_None) {
			command->mStreamCommand = JKRAramStream::write_StreamToAram_Async(stream, command->mAddress, size - command->mFileOffset,
			                                                                  command->mFileOffset, command->mSizePtr);
		} else if (compression == COMPRESSION_YAY0) {
			command->mStreamCommand = JKRAramStream::write_StreamToAram_Async(stream, command->mAddress, size - command->mFileOffset,
			                                                                  command->mFileOffset, command->mSizePtr);
		} else if (compression == COMPRESSION_YAZ0) {
			command->mStreamCommand = nullptr;
			JKRDecompressFromDVDToAram(command->mDvdFile, command->mAddress, size, uncompressedSize, command->mFileOffset, 0,
			                           command->mSizePtr);
		}

		if (!command->mCallBack) {
			sDvdAramAsyncList.append(command);
		} else {
			command->mCallBack((u32)command);
		}
	}

	OSUnlockMutex(&dvdFile->mAramMutex);
	return isCmdTrdNull == true ? command : nullptr;
}

/**
 * @note Address: 0x8001DD38
 * @note Size: 0xE0
 */
bool JKRDvdAramRipper::syncAram(JKRADCommand* command, BOOL isNonBlocking)
{
	JKRDvdFile* file = command->mDvdFile;
	OSLockMutex(&file->mAramMutex);
	JKRAramStreamCommand* streamCommand = command->mStreamCommand;
	if (streamCommand) {
		streamCommand    = JKRAramStream::sync(streamCommand, isNonBlocking);
		command->mStatus = -(streamCommand == nullptr);
		if (isNonBlocking && streamCommand == nullptr) {
			OSUnlockMutex(&file->mAramMutex);
			return false;
		}
	}
	sDvdAramAsyncList.remove(command);
	if (command->mStreamCommand != nullptr) {
		delete command->mStreamCommand;
	}
	delete file->mInputStream;
	file->mCommandThread = nullptr;
	OSUnlockMutex(&file->mAramMutex);
	return true;
}

/**
 * @note Address: 0x8001DE18
 * @note Size: 0x40
 * __ct__12JKRADCommandFv
 */
JKRADCommand::JKRADCommand()
    : JSULink<JKRADCommand>(this)
    , mStatus(0)
    , mDoDeleteFile(false)
{
}

/**
 * @note Address: 0x8001DE58
 * @note Size: 0x8C
 * __dt__12JKRADCommandFv
 */
JKRADCommand::~JKRADCommand()
{
	if (mDoDeleteFile == true) {
		delete mDvdFile;
	}
}

/**
 * @note Address: 0x8001DEE4
 * @note Size: 0x178
 */
int JKRDecompressFromDVDToAram(JKRDvdFile* dvdFile, u32 dmaAddr, u32 fileSize, u32 decompressedSize, u32 inFileOffset, u32 inSrcOffset,
                               u32* inTSPtr)
{
	BOOL interrupt = OSDisableInterrupts();
	if (!isInitMutex) {
		OSInitMutex(&decompMutex);
		isInitMutex = true;
	}
	OSRestoreInterrupts(interrupt);
	OSLockMutex(&decompMutex);

	u32 bufferSize = JKRDvdAramRipper::getSZSBufferSize();
	szpBuf         = (u8*)JKRAllocFromSysHeap(bufferSize, 32);

	szpEnd = szpBuf + bufferSize;

	refBuf = (u8*)JKRAllocFromSysHeap(0x1120, 0);

	refEnd     = refBuf + 0x1120;
	refCurrent = refBuf;

	dmaBuf = (u8*)JKRAllocFromSysHeap(0x100, 32);

	dmaEnd     = dmaBuf + 0x100;
	dmaCurrent = dmaBuf;

	srcFile    = dvdFile;
	srcOffset  = inSrcOffset;
	transLeft  = fileSize - inSrcOffset;
	fileOffset = inFileOffset;
	readCount  = 0;
	maxDest    = decompressedSize;
	inTSPtr    = inTSPtr ? inTSPtr : &tsArea;
	tsPtr      = inTSPtr;
	*inTSPtr   = 0;
	u8* first  = firstSrcData();
	int result = first ? decompSZS_subroutine(first, dmaAddr) : -1;
	JKRFree(szpBuf);
	JKRFree(refBuf);
	JKRFree(dmaBuf);
	OSUnlockMutex(&decompMutex);
	return result;
}

/**
 * @note Address: 0x8001E05C
 * @note Size: 0x280
 */
static int decompSZS_subroutine(u8* src, u32 dmaAddr)
{
	u32 endPtr;
	u8* copySource;
	s32 validBitCount = 0;
	s32 currCodeByte  = 0;
	s32 numBytes;

	u32 ts       = 0;
	u32 dmaStart = dmaAddr;

	if (src[0] != 'Y' || src[1] != 'a' || src[2] != 'z' || src[3] != '0') {
		return -1;
	}

	SYaz0Header* header = (SYaz0Header*)src;
	endPtr              = dmaAddr + (header->mLength - fileOffset);
	if (endPtr > dmaAddr + maxDest) {
		endPtr = dmaAddr + maxDest;
	}

	src += 0x10;

	do {
		if (validBitCount == 0) {
			if ((src > srcLimit) && transLeft) {
				src = nextSrcData(src);
			}

			currCodeByte  = *src++;
			validBitCount = 8;
		}
		if (currCodeByte & 0x80) {
			if (readCount >= fileOffset) {
				dmaAddr++;
				*dmaCurrent++ = *src;
				ts++;
				if (dmaCurrent == dmaEnd) {
					dmaStart += dmaBufferFlush(dmaStart);
				}

				if (dmaAddr == endPtr) {
					break;
				}
			}
			*(refCurrent++) = *src;
			if (refCurrent == refEnd) {
				refCurrent = refBuf;
			}

			src++;

			readCount++;
		} else {
			int t0     = src[0];
			int t1     = src[1];
			copySource = refCurrent - (t1 | (t0 & 0x0f) << 8) - 1;
			numBytes   = t0 >> 4;
			src += 2;
			if (copySource < refBuf)
				copySource = copySource + (refEnd - refBuf);

			if (numBytes == 0) {
				numBytes = *src++ + 0x12;
			} else {
				numBytes += 2;
			}

			do {
				if (readCount >= fileOffset) {
					dmaAddr++;
					*(dmaCurrent++) = *copySource;
					ts++;
					if (dmaCurrent == dmaEnd) {
						dmaStart += dmaBufferFlush(dmaStart);
					}

					if (dmaAddr == endPtr) {
						break;
					}
				}
				*(refCurrent++) = *copySource;
				if (refCurrent == refEnd) {
					refCurrent = refBuf;
				}

				copySource++;

				if (copySource == refEnd) {
					copySource = refBuf;
				}

				readCount++;
				numBytes--;
			} while (numBytes != 0);
		}
		currCodeByte <<= 1;
		validBitCount--;
	} while (dmaAddr < endPtr);

	dmaBufferFlush(dmaStart);
	*tsPtr = ts;

	return 0;
}

/**
 * @note Address: 0x8001E2DC
 * @note Size: 0xB4
 */
static u8* firstSrcData()
{
	srcLimit      = szpEnd - 0x19;
	u8* buf       = szpBuf;
	u32 max       = (szpEnd - szpBuf);
	u32 transSize = MIN(transLeft, max);

	while (true) {
		if (0 <= DVDReadPrio(srcFile->getFileInfo(), buf, transSize, 0, 2)) {
			break;
		}
		if (!JKRDvdAramRipper::isErrorRetry()) {
			return nullptr;
		}
		VIWaitForRetrace();
	}
	srcOffset += transSize;
	transLeft -= transSize;
	return buf;
}

/**
 * @note Address: 0x8001E390
 * @note Size: 0xEC
 */
static u8* nextSrcData(u8* src)
{
	u32 limit = szpEnd - src;
	u8* buf;
	if (IS_NOT_ALIGNED(limit, 0x20)) {
		buf = szpBuf + 0x20 - (limit & (0x20 - 1));
	} else {
		buf = szpBuf;
	}

	memcpy(buf, src, limit);
	u32 transSize = (u32)(szpEnd - (buf + limit));
	if (transSize > transLeft) {
		transSize = transLeft;
	}

	while (true) {
		int result = DVDReadPrio(srcFile->getFileInfo(), (buf + limit), transSize, srcOffset, 2);
		if (result >= 0) {
			break;
		}

		if (!JKRDvdAramRipper::isErrorRetry()) {
			return nullptr;
		}

		VIWaitForRetrace();
	}

	srcOffset += transSize;
	transLeft -= transSize;
	if (transLeft == 0) {
		srcLimit = transSize + (buf + limit);
	}

	return buf;
}

/**
 * @note Address: 0x8001E47C
 * @note Size: 0x68
 */
static u32 dmaBufferFlush(u32 src)
{
	if (dmaCurrent == dmaBuf) {
		return 0;
	} else {
		u32 length = ALIGN_NEXT((u32)(dmaCurrent - dmaBuf), 32);
		JKRAramPiece::orderSync(0, (u32)dmaBuf, src, length, nullptr);
		dmaCurrent = dmaBuf;
		return length;
	}
}
