#include "types.h"
#include "Dolphin/OS.h"
#include "Dolphin/vi.h"

extern u32 SISetXY(int x, int y);

struct tvformat {
	u16 mTvShort;
	u8 mTvByte;
};

u16 _viRegList : 0xCC00206C;

static u32 SamplingRate;
static struct tvformat XYNTSC[12] = { 0x00F6, 0x02, 0x000F, 0x12, 0x001E, 0x09, 0x002C, 0x06, 0x0034, 0x05, 0x0041, 0x04,
	                                  0x0057, 0x03, 0x0057, 0x03, 0x0057, 0x03, 0x0083, 0x02, 0x0083, 0x02, 0x0083, 0x02 };
static struct tvformat XYPAL[12]  = { 0x0128, 0x02, 0x000F, 0x15, 0x001D, 0x0B, 0x002D, 0x07, 0x0034, 0x06, 0x003F, 0x05,
                                     0x004E, 0x04, 0x0068, 0x03, 0x0068, 0x03, 0x0068, 0x03, 0x0068, 0x03, 0x009C, 0x02 };

/**
 * @brief Sets the controller port sampling rate in milliseconds.
 *
 * All the attached controller devices share the same sampling rate setting.
 * Since the sampling rate is controlled by the Flipper's video clock, the actual sampling rate set differs from the one specified.
 *
 * @param msec The desired sampling rate in milliseconds. If the value is greater than 11, it will be set to 11.
 *
 * @note Address: 0x800F675C
 * @note Size: 0xE4
 */
void SISetSamplingRate(u32 msec)
{
	BOOL interruptState;
	u16 viRegList;
	int xScale;
	struct tvformat* format; // r4

	if (msec > 11) {
		msec = 11;
	}

	interruptState = OSDisableInterrupts();
	SamplingRate   = msec;

	switch (VIGetTvFormat()) {
	case VI_NTSC:
	case VI_MPAL:
	case VI_EURGB60:
		format = XYNTSC;
		break;
	case VI_PAL:
		format = XYPAL;
		break;
	default:
		OSReport("SISetSamplingRate: unknown TV format. Use default.");
		msec   = 0;
		format = XYNTSC;
		break;
	}

	viRegList = (_viRegList);
	if ((viRegList & 1) != 0) {
		xScale = 2;
	} else {
		xScale = 1;
	}

	SISetXY(xScale * format[msec].mTvShort, format[msec].mTvByte);
	OSRestoreInterrupts(interruptState);
}

/**
 * @note Address: 0x800F6840
 * @note Size: 0x24
 */
void SIRefreshSamplingRate(void) { SISetSamplingRate(SamplingRate); }
