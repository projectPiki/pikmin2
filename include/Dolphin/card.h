#ifndef _DOLPHIN_CARD_H
#define _DOLPHIN_CARD_H

#include "Dolphin/dsp.h"
#include "Dolphin/os.h"
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

typedef struct CARDMemoryCard CARDMemoryCard;

typedef void CARDBlockDoneWriteCallback(int slotIndex, int p2);
typedef void CARDBlockC4Callback(int slotIndex, int p2);
typedef void CARDBlockC8Callback(int slotIndex, int p2);
typedef void CARDBlockD4Callback(int slotIndex, int p2);
typedef void CARDBlockD8Callback(int slotIndex, int p2);
typedef void CARDSyncCallback(int slotIndex, int p2);

/**
 * Bitmask for CARDDirectoryEntry[0x7].
 * Default is BannerColorRGB5A3, BannerNone, IconAnimationForward, for bits 0, 1, and 2, respectively.
 */
typedef enum { BannerColorCI8 = 0x1, BannerPresent = 0x2, IconAnimationPingPong = 0x4 } CARDBannerFlag;

/**
 * Bitmask for CARDDirectoryEntry[0x34]
 */
typedef enum { FilePermPublic = 0x2, FilePermNoCopy = 0x4, FilePermNoMove = 0x8 } CARDFilePermissions;

typedef struct {
	u32 cardSlot; // _00
	unknown _04;  // _04
	s32 _08;      // _08
	s32 _0C;      // _0C
	u16 _10;      // _10
} CARDFileInfo;

typedef struct {
	u8 _000[6];                // _000
	u64 formatTimestamp;       // _00C
	u8 uniqueCardIDMaybe[0xC]; // _014
	u8 _020[2];                // _020
	u16 sizeOfCardInMbits;     // _022
	u16 encoding;              // _024
	u8 _026[0x1D4];            // _026
	u16 updateCounter;         // _1FA
	u16 checksum1;             // _1FC
	u16 checksum2;             // _1FE
	u8 _200[0x1E00];           // _200
} CARDHeaderBlock;

/*
 * @size{0x2000}
 */
typedef struct {
	u16 checksum1;
	u16 checksum2;
	u16 updateCounter;
	u16 freeBlocks;
	u16 lastAllocatedBlock;
	u16 allocationMap[0xFFB];
} CARDFatBlock;

/**
 * @size{0x40}
 */
typedef struct {
	u8 gameCode[4];              // _00
	u8 makerCode[2];             // _04
	u8 reserved_06;              // _06
	u8 bannerFormatAndAnimation; // _07 // CARDBannerFlag
	u8 fileName[32];             // _08
	u32 lastModifiedTimestamp;   // _28 // seconds since 12am, 2000-01-01.
	s32 imageDataOffset;         // _2C
	/**
	 * 2bits per icon:
	 *   00 = no icon
	 *   01 = CI8 with same palette as previous frame
	 *   10 = RGB5A3
	 *   11 = CI8 with unique color palette after itself
	 */
	u16 iconFormat; // _30
	/**
	 * 2 bits per icon:
	 *   00 = no icon
	 *   01 = 4 frames
	 *   10 = 8 frames
	 *   11 = 12 frames
	 */
	u16 animationSpeed; // _32
	u8 filePermissions; // _34 // CARDFilePermissions
	/**
	 * Tracks how many times the file has been copied from one memory card to another.
	 */
	u8 copyCounter;                // _35
	u16 blockNoOfFirstBlockOfFile; // _36
	u16 fileLengthInBlocks;        // _38
	s16 reserved_3A;               // _3A
	/**
	 * Each file has two 32 character strings which the IPL displays at the bottom of the memory card screen, next to the banner.
	 * The two strings (64 bytes) must fit within one block (8192 bytes), they are not allowed to cross sector boundaries.
	 */
	char* fileDataComments; // _3C
} CARDDirectoryEntry;

/**
 * @size{0x2000}
 */
typedef struct {
	/** the doc says max 127, but... */
	CARDDirectoryEntry directoryEntriesA[63]; // _0000
	u8 padding_FC0[0x3A];                     // _0FC0
	/** ...this is supposedly at 0xffa? */
	u16 updateCounter; // _0FFA
	u16 checksum1;     // _0FFC
	u16 checksum2;     // _0FFE
	/** Maybe the rest of the 127 come afterwards??? */
	CARDDirectoryEntry directoryEntriesB[64]; // _1000
} CARDDirectoryBlock;

typedef struct {
	unknown _000;                                  // _000
	int _004;                                      // _004
	u16 _008;                                      // _008
	u8 _00A[2];                                    // _00A
	u32 _00C;                                      // _00C
	u16 _010;                                      // _010
	u8 _012[2];                                    // _012
	u32 _014;                                      // _014
	u8 _018[0xC];                                  // _018
	s32 _024;                                      // _024
	unknown _028;                                  // _028
	u32 _02C;                                      // _02C
	DSPTask _030;                                  // _030
	u8 _070[0x10];                                 // _070
	CARDMemoryCard* _080;                          // _080
	CARDDirectoryBlock* _084;                      // _084
	CARDFatBlock* _088;                            // _088
	OSThreadQueue _08C;                            // _08C
	u8 _094;                                       // _094
	u8 _095;                                       // _095
	u8 _096;                                       // _096
	u8 _097[9];                                    // _097
	s32 _0A0;                                      // _0A0
	s32 _0A4;                                      // _0A4
	s32 _0A8;                                      // _0A8
	u8 _0AC[8];                                    // _0AC
	u8* _0B4;                                      // _0B4
	u8 _0B8[4];                                    // _0B8
	u16 _0BC;                                      // _0BC
	u16 _0BE;                                      // _0BE
	CARDFileInfo* _0C0;                            // _0C0
	CARDBlockC4Callback* _0C4;                     // _0C4
	CARDBlockC8Callback* _0C8;                     // _0C8
	CARDBlockDoneWriteCallback* doneWriteCallback; // _0CC
	CARDSyncCallback* _0D0;                        // _0D0
	CARDBlockD4Callback* _0D4;                     // _0D4
	CARDBlockD8Callback* _0D8;                     // _0D8
	void* _0DC;                                    // _0DC
	OSAlarm _0E0;                                  // _0E0
	u16 _108;                                      // _108
	u8 _10A[2];                                    // _10A
	u8* _10C;                                      // _10C
} CARDBlock;

/**
 * Structure representing the entirety of the first 5 memory card blocks.
 */
struct CARDMemoryCard {
	CARDHeaderBlock header;                  // _0000
	CARDDirectoryBlock directoryBlock;       // _2000
	CARDDirectoryBlock directoryBlockBackup; // _4000
	CARDFatBlock blockAllocationMap;         // _6000
	CARDFatBlock blockAllocationMapBackup;   // _8000
};

/**
 * TODO: Finish this struct.
 */
typedef struct {
	u8 _00[0x20];
	u8 todo[0x4C];
} CARDStat;

extern CARDBlock __CARDBlock[2];

void CARDInit();

int __CARDReadStatus(int slotIndex, u8* buffer);
int __CARDClearStatus(int slotIndex);
int __CARDStart(int slotIndex, CARDBlockC8Callback* c8Callback, CARDBlockDoneWriteCallback* doneWriteCallback);
int __CARDReadSegment(int slotIndex, CARDBlockC8Callback* c8Callback);
int __CARDWritePage(int slotIndex, CARDBlockDoneWriteCallback* doneWriteCallback);
int __CARDEraseSector(int slotIndex, unknown p2, CARDBlockDoneWriteCallback* doneWriteCallback);
u16 __CARDGetFontEncode();
void __CARDSetDiskID(u8* diskID);
int __CARDGetControlBlock(int slotIndex, CARDBlock** outBlock);
int __CARDPutControlBlock(CARDBlock* block, unknown p2);
int CARDFreeBlocks(int slotIndex, unknown p2, unknown p3);
int __CARDSync(int slotIndex);
void __CARDSyncCallback(int slotIndex, int p2);

void __CARDCheckSum(u16* dataToChecksum, u32 byteCount, u16* checksum1, u16* checksum2);

#ifdef __cplusplus
}
#endif // ifdef __cplusplus

#endif
