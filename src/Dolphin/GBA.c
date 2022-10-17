#include "Dolphin/gba.h"
#include "Dolphin/dsp.h"
#include "Dolphin/os.h"

#define OS_BASE_CACHED            0x80000000
#define OS_BUS_CLOCK_SPEED_ADDR   0xF8
#define OSPhysicalToCached(paddr) ((void*)((u32)(paddr)-OS_BASE_CACHED))

char* __GBAVersion                      = "<< Dolphin SDK - GBA\trelease build: Dec  3 2003 18:41:55 (0x2301) >>";
static OSFunctionInfo ResetFunctionInfo = { OnReset, 0x7E };
static SecParam SecParams[4];
GBA __GBA[4];
static BOOL Initialized;
BOOL __GBAReset;

/*
 * --INFO--
 * Address:	800FEB2C
 * Size:	000054
 */
static void ShortCommandProc(int portIndex)
{
	GBA* port = &__GBA[portIndex];
	if (port->_20 != 0) {
		return;
	}
	if ((port->_05 != 0) || (port->_06 != 4)) {
		port->_20 = 1;
		return;
	}
	*port->_14 = port->_07 & 0x3A;
}

/*
 * --INFO--
 * Address:	800FEB80
 * Size:	0000C0
 */
void GBAInit(void)
{
	u64 busClockSpeed;
	int i;
	GBA* gba;

	if (Initialized == FALSE) {
		Initialized = TRUE;
		OSRegisterVersion(__GBAVersion);
		busClockSpeed = (((*(u32*)0x800000F8 / 4) / 125000) * 60) / 8;
		for (i = 0; i < 4; i++) {
			gba      = &__GBA[i];
			gba->_34 = busClockSpeed;
			gba->_30 = 0;
			OSInitThreadQueue(&gba->_24);
			gba->m_secParam = &SecParams[i];
		}
		OSInitAlarm();
		DSPInit();
		__GBAReset = FALSE;
		OSRegisterResetFunction(&ResetFunctionInfo);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
int GBAGetStatusAsync(int portIndex, u8* p2)
{
	// UNUSED FUNCTION
	GBA* gba = &__GBA[portIndex];
	if (gba->m_syncCallback) {
		return 2;
	}
	gba->_00[0]         = 0;
	gba->_14            = p2;
	gba->m_syncCallback = __GBASyncCallback;
	return __GBATransfer(portIndex, 1, 3, ShortCommandProc);
}

/*
 * --INFO--
 * Address:	800FEC40
 * Size:	000090
 */
int GBAGetStatus(int portIndex, u8* p2)
{
	int status = GBAGetStatusAsync(portIndex, p2);
	return (status != 0) ? status : __GBASync(portIndex);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
int GBAResetAsync(int portIndex, u8* p2)
{
	// UNUSED FUNCTION
	GBA* gba = &__GBA[portIndex];
	if (gba->m_syncCallback) {
		return 2;
	}
	gba->_00[0]         = 0xFF;
	gba->_14            = p2;
	gba->m_syncCallback = __GBASyncCallback;
	return __GBATransfer(portIndex, 1, 3, ShortCommandProc);
}

/*
 * --INFO--
 * Address:	800FECD0
 * Size:	000090
 */
int GBAReset(int portIndex, u8* p2)
{
	int status = GBAResetAsync(portIndex, p2);
	return (status != 0) ? status : __GBASync(portIndex);
}

/*
 * --INFO--
 * Address:	800FED60
 * Size:	000010
 */
static int OnReset(void)
{
	__GBAReset = TRUE;
	return 1;
}
