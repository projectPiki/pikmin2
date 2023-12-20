#include "Dolphin/os.h"
#include "Dolphin/ai.h"

static void* SaveStart = nullptr;
static void* SaveEnd   = nullptr;
static BOOL Prepared;

extern u32 BOOT_REGION_START AT_ADDRESS(0x812FDFF0); //(*(u32 *)0x812fdff0)
extern u32 BOOT_REGION_END AT_ADDRESS(0x812FDFEC);   //(*(u32 *)0x812fdfec)
extern u32 OS_RESET_CODE AT_ADDRESS(0x800030F0);
extern u8 OS_REBOOT_BOOL AT_ADDRESS(0x800030E2); // unknown function, set to true by __OSReboot

extern void* __OSSavedRegionStart;
extern void* __OSSavedRegionEnd;

// Struct for Apploader header (size 0x20).
typedef struct _ApploaderHeader {
	char date[16];  // _00
	u32 entry;      // _10
	u32 size;       // _14
	u32 rebootSize; // _18
	u32 reserved2;  // _1C
} ApploaderHeader;

static ApploaderHeader Header ATTRIBUTE_ALIGN(32);

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
BOOL IsStreamEnabled(void)
{
	if (DVDGetCurrentDiskID()->streaming) {
		return TRUE;
	}
	return FALSE;
}

/**
 * @note Address: 0x800EFF4C
 * @note Size: 0x10
 */
ASM static void Run(register u32 addr)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc

	sync
	isync
	mtlr addr
	blr
#endif // clang-format on
}

/**
 * @note Address: N/A
 * @note Size: 0xD8
 */
void ReadApploader(OSTime time1)
{
	if (!DVDCheckDisk() || OSGetTime() - time1 > OS_TIMER_CLOCK) {
		__OSDoHotReset(0);
	}
}

/**
 * @note Address: 0x800EFF5C
 * @note Size: 0xC
 */
static void Callback(void) { Prepared = TRUE; }

/**
 * @note Address: 0x800EFF68
 * @note Size: 0x330
 */
void __OSReboot(u32 resetCode, u32 bootDol)
{
	OSContext exceptionContext;
	OSTime time1;
	DVDCommandBlock dvdCmd;
	DVDCommandBlock dvdCmd2;
	DVDCommandBlock dvdCmd3;
	u32 numBytes;
	u32 offset;
	OSDisableInterrupts();
	OS_RESET_CODE     = resetCode;
	OS_REBOOT_BOOL    = TRUE;
	BOOT_REGION_START = (u32)SaveStart;
	BOOT_REGION_END   = (u32)SaveEnd;
	OSClearContext(&exceptionContext);
	OSSetCurrentContext(&exceptionContext);
	DVDInit();
	DVDSetAutoInvalidation(TRUE);
	DVDResume();

	Prepared = FALSE;
	__DVDPrepareResetAsync(Callback);

	__OSMaskInterrupts(0xffffffe0);
	__OSUnmaskInterrupts(0x400);
	OSEnableInterrupts();

	time1 = OSGetTime();
	while (Prepared != TRUE) {
		ReadApploader(time1);
	};

	if (!__OSIsGcam) {
		if (IsStreamEnabled()) {
			AISetStreamVolLeft(0);
			AISetStreamVolRight(0);
			DVDCancelStreamAsync(&dvdCmd, nullptr);
			time1 = OSGetTime();
			while (DVDGetCommandBlockStatus(&dvdCmd)) {
				ReadApploader(time1);
			}

			AISetStreamPlayState(0);
		}
	}

	DVDReadAbsAsyncPrio(&dvdCmd2, Header.date, 32, 0x2440, nullptr, 0);

	time1 = OSGetTime();
	while (DVDGetCommandBlockStatus(&dvdCmd2)) {
		ReadApploader(time1);
	}

	offset   = Header.size + 0x20;
	numBytes = OSRoundUp32B(Header.rebootSize);
	DVDReadAbsAsyncPrio(&dvdCmd3, (void*)(OS_BOOTROM_ADDR), numBytes, offset + 0x2440, nullptr, 0);

	time1 = OSGetTime();
	while (DVDGetCommandBlockStatus(&dvdCmd3)) {
		ReadApploader(time1);
	}

	ICInvalidateRange((void*)(OS_BOOTROM_ADDR), numBytes);
	OSDisableInterrupts();
	ICFlashInvalidate();
	Run(OS_BOOTROM_ADDR);
}

/**
 * @note Address: 0x800F0298
 * @note Size: 0xC
 */
void OSSetSaveRegion(void* start, void* end)
{
	SaveStart = start;
	SaveEnd   = end;
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void OSGetSaveRegion(void** start, void** end)
{
	*start = SaveStart;
	*end   = SaveEnd;
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void OSGetSavedRegion(void** start, void** end)
{
	*start = __OSSavedRegionStart;
	*end   = __OSSavedRegionEnd;
}
