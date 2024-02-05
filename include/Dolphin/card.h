#ifndef _DOLPHIN_CARD_H
#define _DOLPHIN_CARD_H

#include "Dolphin/dsp.h"
#include "Dolphin/os.h"
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

//////////// BASIC CARD DEFINES ////////////
// Encodings.
#define CARD_ENCODE_ANSI 0u
#define CARD_ENCODE_SJIS 1u

// Sizes.
#define CARD_WORKAREA_SIZE (5 * 8 * 1024) // 0xA000 (5 * 0x2000)
#define CARD_READ_SIZE     (512)
#define CARD_MAX_FILE      (127)
#define CARD_COMMENT_SIZE  (64)
#define CARD_FILENAME_MAX  (32)
#define CARD_ICON_MAX      (8)
#define CARD_ICON_WIDTH    (32)
#define CARD_ICON_HEIGHT   (32)
#define CARD_BANNER_WIDTH  (96)
#define CARD_BANNER_HEIGHT (32)

////////////////////////////////////////////

//////////////// CARD TYPES ////////////////
// Forward declarations.
typedef struct CARDFileInfo CARDFileInfo;
typedef struct CARDStat CARDStat;
typedef struct CARDDir CARDDir;
typedef struct CARDDirCheck CARDDirCheck;
typedef struct CARDControl CARDControl;
typedef struct CARDID CARDID;
typedef struct CARDHeaderBlock CARDHeaderBlock;
typedef struct CARDDirectoryBlock CARDDirectoryBlock;
typedef struct CARDFatBlock CARDFatBlock;
typedef struct CARDMemoryCard CARDMemoryCard;

// CARD callback function type.
typedef void (*CARDCallback)(s32 channel, s32 result);

// Struct for storing basic file information (size 0x12).
struct CARDFileInfo {
	s32 chan;   // _00, channel.
	s32 fileNo; // _04, file number.
	s32 offset; // _08
	s32 length; // _0C
	u16 iBlock; // _10
};

// Struct for managing CARD status (size 0x70).
struct CARDStat {
	char fileName[CARD_FILENAME_MAX]; // _00
	u32 length;                       // _20
	u32 time;                         // _24, secs since 01/01/2000 00:00.
	u8 gameName[4];                   // _28
	u8 company[2];                    // _2C
	u8 bannerFormat;                  // _2E
	u32 iconAddr;                     // _30
	u16 iconFormat;                   // _34
	u16 iconSpeed;                    // _36
	u32 commentAddr;                  // _38
	u32 offsetBanner;                 // _3C
	u32 offsetBannerTlut;             // _40
	u32 offsetIcon[CARD_ICON_MAX];    // _44
	u32 offsetIconTlut;               // _64
	u32 offsetData;                   // _68
	u32 reserved_6C;                  // _6C
};

// CARD directory entry information (size 0x40).
// NB: we had this called CARDDirEntry before.
struct CARDDir {
	u8 gameName[4];                 // _00
	u8 company[2];                  // _04
	u8 reserved_06;                 // _06
	u8 bannerFormat;                // _07, CARDBannerFlag, see enum.
	u8 fileName[CARD_FILENAME_MAX]; // _08
	u32 time;                       // _28, secs since 01/01/2000, 00:00.
	u32 iconAddr;                   // _2C, 0xFFFFFFFF if unused.
	u16 iconFormat;                 // _30
	u16 iconSpeed;                  // _32
	u8 permission;                  // _34, CARDFilePermissions, see enum.
	u8 copyTimes;                   // _35, # times copied from one card to another.
	u16 startBlock;                 // _36
	u16 length;                     // _38, length of file in blocks.
	u16 reserved_3A;                // _3A
	u32 commentAddr;                // _3C
};

// Struct for DirectoryBlock-specific checksum information (size 0x40).
// Replaces the last CARDDir in CARDDirectoryBlock.
struct CARDDirCheck {
	u8 padding[0x3A]; // _00
	s16 checkCode;    // _3A
	u16 checkSum;     // _3C
	u16 checkSumInv;  // _3E
};

// Struct for CARD information (size 0x110).
// NB: we had this as CARDBlock previously.
struct CARDControl {
	BOOL attached;                  // _00
	s32 result;                     // _04
	u16 size;                       // _08, size in Mbits.
	u16 pageSize;                   // _0A, program size in bytes.
	s32 sectorSize;                 // _0C, erase size in bytes.
	u16 cBlock;                     // _10, # blocks.
	u16 vendorID;                   // _12, 0xC243 for MX, 0xECE6 for Samsung
	s32 latency;                    // _14, read latency in bytes.
	u8 id[0xC];                     // _18
	int mountStep;                  // _24
	int formatStep;                 // _28
	u32 scramble;                   // _2C, for __CARDUnlock().
	DSPTaskInfo task;               // _30
	CARDMemoryCard* workArea;       // _80, void* in docs.
	CARDDirectoryBlock* currentDir; // _84, CARDDir* in docs.
	CARDFatBlock* currentFat;       // _88, u16* in docs.
	OSThreadQueue threadQueue;      // _8C, for sync functions.
	u8 cmd[9];                      // _94, for DMA mode commands.
	s32 cmdlen;                     // _A0
	u32 mode;                       // _A4
	int retry;                      // _A8
	int repeat;                     // _AC, for multi xfer
	u32 addr;                       // _B0
	void* buffer;                   // _B4
	s32 xferred;                    // _B8, for statistics.
	u16 freeNo;                     // _BC
	u16 startBlock;                 // _BE
	CARDFileInfo* fileInfo;         // _C0
	CARDCallback extCallback;       // _C4
	CARDCallback txCallback;        // _C8
	CARDCallback exiCallback;       // _CC
	CARDCallback apiCallback;       // _D0
	CARDCallback xferCallback;      // _D4
	CARDCallback eraseCallback;     // _D8
	CARDCallback unlockCallback;    // _DC
	OSAlarm alarm;                  // _E0, for timeout.
	u32 cid;                        // _108
	const DVDDiskID* diskID;        // _10C
};

// CARD identification struct (size 0x200).
// NB: we had this as part of CARDHeaderBlock before.
struct CARDID {
	u8 serial[0x20];   // _00, flashID(0xC), timebase(8), counterBias(4), lang(4), XXX(4).
	u16 deviceID;      // _20
	u16 size;          // _22
	u16 encode;        // _24
	u8 padding[0x1D4]; // _26
	s16 checkCode;     // _1FA
	u16 checkSum;      // _1FC
	u16 checkSumInv;   // _1FE
};

// Header block for CARDMemoryCard (size 0x2000).
// NB: fabricated - this is just void*.
struct CARDHeaderBlock {
	CARDID id;         // _000
	u8 buffer[0x1E00]; // _200
};

// Directory information block for CARDMemoryCard (size 0x2000).
// NB: fabricated - this is just CARDDir* (with a cast for the last one).
struct CARDDirectoryBlock {
	CARDDir entries[CARD_MAX_FILE]; // _0000
	CARDDirCheck check;             // _1FC0
};

// File allocation table struct for CARDMemoryCard (size 0x2000).
// NB: fabricated - this is just u16*.
struct CARDFatBlock {
	u16 checkSum;        // _00
	u16 checkSumInv;     // _02
	u16 checkCode;       // _04
	u16 freeBlocks;      // _06
	u16 lastAllocBlock;  // _08
	u16 allocMap[0xFFB]; // _0A
};

// Struct for working area of memory card (size 0xA000).
// NB: fabricated - this is just void*.
struct CARDMemoryCard {
	CARDHeaderBlock header;            // _0000
	CARDDirectoryBlock dirBlock;       // _2000
	CARDDirectoryBlock dirBlockBackup; // _4000
	CARDFatBlock blockAllocMap;        // _6000
	CARDFatBlock blockAllocMapBackup;  // _8000
};

// Struct for use in CARDUnlock.
typedef struct CARDDecodeParameters {
	u8* inputAddr;   // _00
	u32 inputLength; // _04
	u32 aramAddr;    // _08
	u8* outputAddr;  // _0C
} CARDDecodeParameters;

// Enum for 'permission' in CARDDir.
typedef enum { FilePermPublic = 0x2, FilePermNoCopy = 0x4, FilePermNoMove = 0x8 } CARDFilePermissions;

// Enum for banner format in CARDDir.
typedef enum { BannerColorCI8 = 0x1, BannerPresent = 0x2, IconAnimationPingPong = 0x4 } CARDBannerFlag;

// Managers for both memory card slots (A and B).
extern CARDControl __CARDBlock[2];

// Other CARD information.
extern DVDDiskID __CARDDiskNone;
extern u16 __CARDVendorID;
extern u8 __CARDPermMask;

////////////////////////////////////////////

////////////// CARD FUNCTIONS //////////////
// Basic CARD functions.
void CARDInit();

// CARD checking functions.
s32 CARDCheck(s32 channel);
s32 CARDCheckExAsync(s32 channel, s32* xferBytes, CARDCallback callback);

// CARD BIOS functions.
s32 CARDFreeBlocks(s32 channel, s32* byteNotUsed, s32* filesNotUsed);

// CARD mounting functions.
BOOL CARDProbe(s32 channel);
s32 CARDProbeEx(s32 channel, s32* memSize, s32* sectorSize);
s32 CARDMountAsync(s32 channel, CARDMemoryCard* workArea, CARDCallback detachCallback, CARDCallback attachCallback);
s32 CARDMount(s32 channel, CARDMemoryCard* workArea, CARDCallback detachCallback);
s32 CARDUnmount(s32 channel);

// CARD formatting functions.
s32 CARDFormat(s32 channel);

// CARD open/close.
s32 CARDOpen(s32 channel, char* fileName, CARDFileInfo* fileInfo);
s32 CARDClose(CARDFileInfo* fileInfo);

// CARD create/read/write functions.
s32 CARDCreate(s32 channel, char* fileName, u32 size, CARDFileInfo* fileInfo);
s32 CARDCreateAsync(s32 channel, char* fileName, u32 size, CARDFileInfo* fileInfo, CARDCallback callback);
s32 CARDRead(CARDFileInfo* fileInfo, void* addr, s32 length, s32 offset);
s32 CARDReadAsync(CARDFileInfo* fileInfo, void* addr, s32 length, s32 offset, CARDCallback callback);
s32 CARDWrite(CARDFileInfo* fileInfo, void* addr, s32 length, s32 offset);
s32 CARDWriteAsync(CARDFileInfo* fileInfo, void* addr, s32 length, s32 offset, CARDCallback callback);

// CARD status functions.
s32 CARDGetStatus(s32 channel, s32 fileNo, CARDStat* state);
s32 CARDSetStatus(s32 channel, s32 fileNo, CARDStat* state);
s32 CARDSetStatusAsync(s32 channel, s32 fileNo, CARDStat* state, CARDCallback callback);

// CARD serial functions.
s32 CARDGetSerialNo(s32 channel, u64* serialNo);

// NB: steal more functions from prime as required.

////////////////////////////////////////////

////////// PRIVATE CARD FUNCTIONS //////////
// Handlers and callbacks.
void __CARDDefaultApiCallback(s32 channel, s32 result);
void __CARDSyncCallback(s32 channel, s32 result);
void __CARDExtHandler(s32 channel, OSContext* context);
void __CARDExiHandler(s32 channel, OSContext* context);
void __CARDTxHandler(s32 channel, OSContext* context);
void __CARDUnlockedHandler(s32 channel, OSContext* context);

// Other CARD BIOS functions.
s32 __CARDEnableInterrupt(s32 channel, BOOL enable);
s32 __CARDReadStatus(s32 channel, u8* status);
s32 __CARDClearStatus(s32 channel);
s32 __CARDStart(s32 channel, CARDCallback txCallback, CARDCallback exiCallback);
s32 __CARDReadSegment(s32 channel, CARDCallback callback);
s32 __CARDWritePage(s32 channel, CARDCallback callback);
s32 __CARDEraseSector(s32 channel, u32 addr, CARDCallback callback);
u16 __CARDGetFontEncode();
void __CARDSetDiskID(const DVDDiskID* diskID);
s32 __CARDGetControlBlock(s32 channel, CARDControl** card);
s32 __CARDPutControlBlock(CARDControl* card, s32 result);
s32 __CARDSync(s32 channel);
void __CARDCheckSum(void* data, int length, u16* checksum, u16* checksumInv);

CARDDirectoryBlock* __CARDGetDirBlock(CARDControl* card);
CARDFatBlock* __CARDGetFatBlock(CARDControl* card);

////////////////////////////////////////////

//////////// OTHER CARD DEFINES ////////////
// Icon animation modes.
#define CARD_MODE_NORMAL 0
#define CARD_MODE_FAST   1

// Result codes.
#define CARD_RESULT_UNLOCKED    1
#define CARD_RESULT_READY       0
#define CARD_RESULT_BUSY        -1
#define CARD_RESULT_WRONGDEVICE -2
#define CARD_RESULT_NOCARD      -3
#define CARD_RESULT_NOFILE      -4
#define CARD_RESULT_IOERROR     -5
#define CARD_RESULT_BROKEN      -6
#define CARD_RESULT_EXIST       -7
#define CARD_RESULT_NOENT       -8
#define CARD_RESULT_INSSPACE    -9
#define CARD_RESULT_NOPERM      -10
#define CARD_RESULT_LIMIT       -11
#define CARD_RESULT_NAMETOOLONG -12
#define CARD_RESULT_ENCODING    -13
#define CARD_RESULT_CANCELED    -14
#define CARD_RESULT_FATAL_ERROR -128

// Icon status codes.
#define CARD_STAT_ICON_NONE   0
#define CARD_STAT_ICON_C8     1
#define CARD_STAT_ICON_RGB5A3 2
#define CARD_STAT_ICON_MASK   3

// Banner status codes.
#define CARD_STAT_BANNER_NONE   0
#define CARD_STAT_BANNER_C8     1
#define CARD_STAT_BANNER_RGB5A3 2
#define CARD_STAT_BANNER_MASK   3

// Animation status codes.
#define CARD_STAT_ANIM_LOOP   0x00
#define CARD_STAT_ANIM_BOUNCE 0x04
#define CARD_STAT_ANIM_MASK   0x04

// Animation speed status codes.
#define CARD_STAT_SPEED_END    0
#define CARD_STAT_SPEED_FAST   1
#define CARD_STAT_SPEED_MIDDLE 2
#define CARD_STAT_SPEED_SLOW   3
#define CARD_STAT_SPEED_MASK   3

// CARD attribute codes.
#define CARD_ATTR_PUBLIC  0x04u
#define CARD_ATTR_NO_COPY 0x08u
#define CARD_ATTR_NO_MOVE 0x10u
#define CARD_ATTR_GLOBAL  0x20u
#define CARD_ATTR_COMPANY 0x40u

// Private info defines.
#define CARD_FAT_AVAIL       0x0000u
#define CARD_FAT_CHECKSUM    0x0000u
#define CARD_FAT_CHECKSUMINV 0x0001u
#define CARD_FAT_CHECKCODE   0x0002u
#define CARD_FAT_FREEBLOCKS  0x0003u
#define CARD_FAT_LASTSLOT    0x0004u

#define CARD_PAGE_SIZE 128u
#define CARD_SEG_SIZE  512u

#define CARD_NUM_SYSTEM_BLOCK  5
#define CARD_SYSTEM_BLOCK_SIZE (8 * 1024u)

#define CARD_MAX_MOUNT_STEP (CARD_NUM_SYSTEM_BLOCK + 2)

// Useful conversion macros.
#define TRUNC(n, a)  (((u32)(n)) & ~((a)-1))
#define OFFSET(n, a) (((u32)(n)) & ((a)-1))

#define CARDIsValidBlockNo(card, iBlock) (CARD_NUM_SYSTEM_BLOCK <= (iBlock) && (iBlock) < (card)->cBlock)

#define __CARDGetDirCheck(dir) ((CARDDirCheck*)&(dir)[CARD_MAX_FILE])

#define CARDGetBannerFormat(stat)    (((stat)->bannerFormat) & CARD_STAT_BANNER_MASK)
#define CARDGetIconAnim(stat)        (((stat)->bannerFormat) & CARD_STAT_ANIM_MASK)
#define CARDGetIconFormat(stat, n)   (((stat)->iconFormat >> (2 * (n))) & CARD_STAT_ICON_MASK)
#define CARDGetIconSpeed(stat, n)    (((stat)->iconSpeed >> (2 * (n))) & CARD_STAT_SPEED_MASK)
#define CARDSetBannerFormat(stat, f) ((stat)->bannerFormat = (u8)(((stat)->bannerFormat & ~CARD_STAT_BANNER_MASK) | (f)))

#define CARDSetIconAnim(stat, f) ((stat)->bannerFormat = (u8)(((stat)->bannerFormat & ~CARD_STAT_ANIM_MASK) | (f)))

#define CARDSetIconFormat(stat, n, f) \
	((stat)->iconFormat = (u16)(((stat)->iconFormat & ~(CARD_STAT_ICON_MASK << (2 * (n)))) | ((f) << (2 * (n)))))

#define CARDSetIconSpeed(stat, n, f) \
	((stat)->iconSpeed = (u16)(((stat)->iconSpeed & ~(CARD_STAT_SPEED_MASK << (2 * (n)))) | ((f) << (2 * (n)))))

#define CARDSetIconAddress(stat, addr)    ((stat)->iconAddr = (u32)(addr))
#define CARDSetCommentAddress(stat, addr) ((stat)->commentAddr = (u32)(addr))
#define CARDGetFileNo(fileInfo)           ((fileInfo)->fileNo)

#define CARDGetDirectoryBlock(card, i) ((CARDDirectoryBlock*)((u8*)card->workArea + (1 + i) * CARD_SYSTEM_BLOCK_SIZE))
#define CARDGetFatBlock(card, i)       ((CARDFatBlock*)((u8*)card->workArea + (3 + i) * CARD_SYSTEM_BLOCK_SIZE))

////////////////////////////////////////////
#ifdef __cplusplus
}
#endif // ifdef __cplusplus

#endif
