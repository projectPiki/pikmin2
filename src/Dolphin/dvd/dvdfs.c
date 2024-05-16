#include "types.h"
#include "Dolphin/dvd.h"
#include "Dolphin/os.h"

typedef struct FSTEntry FSTEntry;

struct FSTEntry {
	uint isDirAndStringOff;
	uint parentOrPosition;
	uint nextEntryOrLength;
};

static OSBootInfo* BootInfo;
static FSTEntry* FstStart;
static char* FstStringStart;
static u32 MaxEntryNum;
static u32 currentDirectory = 0;
OSThreadQueue __DVDThreadQueue;
u32 __DVDLongFileNameFlag = 0;

static void cbForReadAsync(s32 result, DVDCommandBlock* block);
static void cbForReadSync(s32 result, DVDCommandBlock* block);
static void cbForSeekAsync(s32 result, DVDCommandBlock* block);
static void cbForSeekSync(s32 result, DVDCommandBlock* block);
static void cbForPrepareStreamAsync(s32 result, DVDCommandBlock* block);
static void cbForPrepareStreamSync(s32 result, DVDCommandBlock* block);

#ifndef offsetof
#define offsetof(type, memb) ((u32) & ((type*)0)->memb)
#endif

/**
 * @note Address: 0x800DC12C
 * @note Size: 0x38
 */
void __DVDFSInit()
{
	BootInfo = (OSBootInfo*)OSPhysicalToCached(0);
	FstStart = (FSTEntry*)BootInfo->FSTLocation;

	if (FstStart) {
		MaxEntryNum    = FstStart[0].nextEntryOrLength;
		FstStringStart = (char*)&(FstStart[MaxEntryNum]);
	}
}

/* For convenience */
#define entryIsDir(i)   (((FstStart[i].isDirAndStringOff & 0xff000000) == 0) ? FALSE : TRUE)
#define stringOff(i)    (FstStart[i].isDirAndStringOff & ~0xff000000)
#define parentDir(i)    (FstStart[i].parentOrPosition)
#define nextDir(i)      (FstStart[i].nextEntryOrLength)
#define filePosition(i) (FstStart[i].parentOrPosition)
#define fileLength(i)   (FstStart[i].nextEntryOrLength)

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
static BOOL isSame(const char* path, const char* string)
{
	while (*string != '\0') {
		if (tolower(*path++) != tolower(*string++)) {
			return FALSE;
		}
	}

	if ((*path == '/') || (*path == '\0')) {
		return TRUE;
	}

	return FALSE;
}

/**
 * @note Address: 0x800DC164
 * @note Size: 0x2F4
 */
s32 DVDConvertPathToEntrynum(char* pathPtr)
{
	const char* ptr;
	char* stringPtr;
	BOOL isDir;
	u32 length;
	u32 dirLookAt;
	u32 i;
	const char* origPathPtr = pathPtr;
	const char* extentionStart;
	BOOL illegal;
	BOOL extention;

	dirLookAt = currentDirectory;

	while (1) {

		if (*pathPtr == '\0') {
			return (s32)dirLookAt;
		} else if (*pathPtr == '/') {
			dirLookAt = 0;
			pathPtr++;
			continue;
		} else if (*pathPtr == '.') {
			if (*(pathPtr + 1) == '.') {
				if (*(pathPtr + 2) == '/') {
					dirLookAt = parentDir(dirLookAt);
					pathPtr += 3;
					continue;
				} else if (*(pathPtr + 2) == '\0') {
					return (s32)parentDir(dirLookAt);
				}
			} else if (*(pathPtr + 1) == '/') {
				pathPtr += 2;
				continue;
			} else if (*(pathPtr + 1) == '\0') {
				return (s32)dirLookAt;
			}
		}

		if (__DVDLongFileNameFlag == 0) {
			extention = FALSE;
			illegal   = FALSE;

			for (ptr = pathPtr; (*ptr != '\0') && (*ptr != '/'); ptr++) {
				if (*ptr == '.') {
					if ((ptr - pathPtr > 8) || (extention == TRUE)) {
						illegal = TRUE;
						break;
					}
					extention      = TRUE;
					extentionStart = ptr + 1;

				} else if (*ptr == ' ')
					illegal = TRUE;
			}

			if ((extention == TRUE) && (ptr - extentionStart > 3))
				illegal = TRUE;

			if (illegal)
				OSErrorLine(387,
				            "DVDConvertEntrynumToPath(possibly DVDOpen or DVDChangeDir or DVDOpenDir): "
				            "specified directory or file (%s) doesn't match standard 8.3 format. This is a "
				            "temporary restriction and will be removed soon\n",
				            origPathPtr);
		} else {
			for (ptr = pathPtr; (*ptr != '\0') && (*ptr != '/'); ptr++)
				;
		}

		isDir  = (*ptr == '\0') ? FALSE : TRUE;
		length = (u32)(ptr - pathPtr);

		ptr = pathPtr;

		for (i = dirLookAt + 1; i < nextDir(dirLookAt); i = entryIsDir(i) ? nextDir(i) : (i + 1)) {
			if ((entryIsDir(i) == FALSE) && (isDir == TRUE)) {
				continue;
			}

			stringPtr = FstStringStart + stringOff(i);

			if (isSame(ptr, stringPtr) == TRUE) {
				goto next_hier;
			}
		}

		return -1;

	next_hier:
		if (!isDir) {
			return (s32)i;
		}

		dirLookAt = i;
		pathPtr += length + 1;
	}
}

/**
 * @note Address: 0x800DC458
 * @note Size: 0x74
 */
BOOL DVDFastOpen(s32 entrynum, DVDFileInfo* fileInfo)
{
	if ((entrynum < 0) || (entrynum >= MaxEntryNum) || entryIsDir(entrynum)) {
		return FALSE;
	}

	fileInfo->startAddr    = filePosition(entrynum);
	fileInfo->length       = fileLength(entrynum);
	fileInfo->callback     = (DVDCallback)NULL;
	fileInfo->cBlock.state = DVD_STATE_END;

	return TRUE;
}

/**
 * @note Address: 0x800DC4CC
 * @note Size: 0xC8
 */
BOOL DVDOpen(char* fileName, DVDFileInfo* fileInfo)
{
	s32 entry;
	char currentDir[128];

	entry = DVDConvertPathToEntrynum(fileName);

	if (0 > entry) {
		DVDGetCurrentDir(currentDir, 128);
		OSReport("Warning: DVDOpen(): file '%s' was not found under %s.\n", fileName, currentDir);
		return FALSE;
	}

	if (entryIsDir(entry)) {
		return FALSE;
	}

	fileInfo->startAddr    = filePosition(entry);
	fileInfo->length       = fileLength(entry);
	fileInfo->callback     = (DVDCallback)NULL;
	fileInfo->cBlock.state = DVD_STATE_END;

	return TRUE;
}

/**
 * @note Address: 0x800DC594
 * @note Size: 0x24
 */
BOOL DVDClose(DVDFileInfo* fileInfo)
{
	DVDCancel(&(fileInfo->cBlock));
	return TRUE;
}

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
static u32 myStrncpy(char* dest, char* src, u32 maxlen)
{
	u32 i = maxlen;

	while ((i > 0) && (*src != 0)) {
		*dest++ = *src++;
		i--;
	}

	return (maxlen - i);
}

/**
 * @note Address: 0x800DC5B8
 * @note Size: 0x160
 */
static u32 entryToPath(u32 entry, char* path, u32 maxlen)
{
	char* name;
	u32 loc;

	if (entry == 0) {
		return 0;
	}

	name = FstStringStart + stringOff(entry);

	loc = entryToPath(parentDir(entry), path, maxlen);

	if (loc == maxlen) {
		return loc;
	}

	*(path + loc++) = '/';

	loc += myStrncpy(path + loc, name, maxlen - loc);

	return loc;
}

/**
 * @note Address: 0x800DC718
 * @note Size: 0x154
 */
static BOOL DVDConvertEntrynumToPath(s32 entrynum, char* path, u32 maxlen)
{
	u32 loc;

	loc = entryToPath((u32)entrynum, path, maxlen);

	if (loc == maxlen) {
		path[maxlen - 1] = '\0';
		return FALSE;
	}

	if (entryIsDir(entrynum)) {
		if (loc == maxlen - 1) {
			path[loc] = '\0';
			return FALSE;
		}

		path[loc++] = '/';
	}

	path[loc] = '\0';
	return TRUE;
}

/**
 * @note Address: 0x800DC86C
 * @note Size: 0xC4
 */
BOOL DVDGetCurrentDir(char* path, u32 maxlen) { return DVDConvertEntrynumToPath((s32)currentDirectory, path, maxlen); }

/**
 * @note Address: 0x800DC930
 * @note Size: 0x60
 */
BOOL DVDChangeDir(char* dirName)
{
	s32 entry;
	entry = DVDConvertPathToEntrynum(dirName);
	if ((entry < 0) || (entryIsDir(entry) == FALSE)) {
		return FALSE;
	}

	currentDirectory = (u32)entry;

	return TRUE;
}

/**
 * @note Address: 0x800DC990
 * @note Size: 0xC0
 */
BOOL DVDReadAsyncPrio(DVDFileInfo* fileInfo, void* addr, s32 length, s32 offset, DVDCallback callback, s32 prio)
{

	if (!((0 <= offset) && (offset <= fileInfo->length))) {
		OSErrorLine(750, "DVDReadAsync(): specified area is out of the file  ");
	}

	if (!((0 <= offset + length) && (offset + length < fileInfo->length + DVD_MIN_TRANSFER_SIZE))) {
		OSErrorLine(756, "DVDReadAsync(): specified area is out of the file  ");
	}

	fileInfo->callback = callback;
	DVDReadAbsAsyncPrio(&(fileInfo->cBlock), addr, length, (s32)(fileInfo->startAddr + offset), cbForReadAsync, prio);

	return TRUE;
}

/**
 * @note Address: 0x800DCA50
 * @note Size: 0x30
 */
static void cbForReadAsync(s32 result, DVDCommandBlock* block)
{
	DVDFileInfo* fileInfo;

	fileInfo = (DVDFileInfo*)((char*)block - offsetof(DVDFileInfo, cBlock));
	if (fileInfo->callback) {
		(fileInfo->callback)(result, fileInfo);
	}
}

/**
 * @note Address: 0x800DCA80
 * @note Size: 0x118
 */
s32 DVDReadPrio(DVDFileInfo* fileInfo, void* addr, s32 length, s32 offset, s32 prio)
{
	BOOL result;
	DVDCommandBlock* block;
	s32 state;
	BOOL enabled;
	s32 retVal;

	if (!((0 <= offset) && (offset <= fileInfo->length))) {
		OSErrorLine(820, "DVDRead(): specified area is out of the file  ");
	}

	if (!((0 <= offset + length) && (offset + length < fileInfo->length + DVD_MIN_TRANSFER_SIZE))) {
		OSErrorLine(826, "DVDRead(): specified area is out of the file  ");
	}

	block = &(fileInfo->cBlock);

	result = DVDReadAbsAsyncPrio(block, addr, length, (s32)(fileInfo->startAddr + offset), cbForReadSync, prio);

	if (result == FALSE) {
		return -1;
	}

	enabled = OSDisableInterrupts();

	while (TRUE) {
		state = ((volatile DVDCommandBlock*)block)->state;

		if (state == DVD_STATE_END) {
			retVal = (s32)block->transferredSize;
			break;
		}
		if (state == DVD_STATE_FATAL_ERROR) {
			retVal = DVD_RESULT_FATAL_ERROR;
			break;
		}
		if (state == DVD_STATE_CANCELED) {
			retVal = DVD_RESULT_CANCELED;
			break;
		}

		OSSleepThread(&__DVDThreadQueue);
	}

	OSRestoreInterrupts(enabled);
	return retVal;
}

/**
 * @note Address: 0x800DCB98
 * @note Size: 0x24
 */
static void cbForReadSync(s32 result, DVDCommandBlock* block) { OSWakeupThread(&__DVDThreadQueue); }

/**
 * @note Address: N/A
 * @note Size: 0x98
 */
BOOL DVDSeekAsyncPrio(DVDFileInfo* fileInfo, s32 offset, DVDCallback callback, s32 prio)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
static void cbForSeekAsync(s32 result, DVDCommandBlock* block)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xAC
 */
s32 DVDSeekPrio(DVDFileInfo* fileInfo, s32 offset, s32 prio)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
static void cbForSeekSync(s32 result, DVDCommandBlock* block)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
s32 DVDGetFileInfoStatus(DVDFileInfo* fileInfo)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
BOOL DVDFastOpenDir(s32 entrynum, DVDDir* dir)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800DCBBC
 * @note Size: 0xC0
 */
BOOL DVDOpenDir(char* dirName, DVDDir* dir)
{
	s32 entry;
	char currentDir[128];
	entry = DVDConvertPathToEntrynum(dirName);

	if (entry < 0) {
		DVDGetCurrentDir(currentDir, 128);
		OSReport("Warning: DVDOpenDir(): file '%s' was not found under %s.\n", dirName, currentDir);
		return FALSE;
	}

	if (!entryIsDir(entry)) {
		return FALSE;
	}

	dir->entryNum = (u32)entry;
	dir->location = (u32)entry + 1;
	dir->next     = nextDir(entry);

	return TRUE;
}

/**
 * @note Address: 0x800DCC7C
 * @note Size: 0xA4
 */
BOOL DVDReadDir(DVDDir* dir, DVDDirEntry* dirent)
{
	u32 loc = dir->location;
	if ((loc <= dir->entryNum) || (dir->next <= loc))
		return FALSE;

	dirent->entryNum = loc;
	dirent->isDir    = entryIsDir(loc);
	dirent->name     = FstStringStart + stringOff(loc);

	dir->location = entryIsDir(loc) ? nextDir(loc) : (loc + 1);

	return TRUE;
}

/**
 * @note Address: 0x800DCD20
 * @note Size: 0x8
 */
BOOL DVDCloseDir(DVDDir* dir) { return TRUE; }

/**
 * @note Address: N/A
 * @note Size: 0x10
 */
void DVDRewindDir(DVDDir* dir) { dir->location = dir->entryNum + 1; }

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
void* DVDGetFSTLocation() { return BootInfo->FSTLocation; }

/**
 * @note Address: N/A
 * @note Size: 0xEC
 */
BOOL DVDPrepareStreamAsync(DVDFileInfo* fileInfo, u32 length, u32 offset, DVDCallback callback)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
static void cbForPrepareStreamAsync(s32 result, DVDCommandBlock* block)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x144
 */
void DVDPrepareStream()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
static void cbForPrepareStreamSync(s32 result, DVDCommandBlock* block)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
s32 DVDGetTransferredSize(DVDFileInfo* fileinfo)
{
	// UNUSED FUNCTION
}
