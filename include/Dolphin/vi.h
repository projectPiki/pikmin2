#ifndef _DOLPHIN_VI_H
#define _DOLPHIN_VI_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

////// VIDEO INTERFACE DEFINES /////
// Display pixel size.
#define VI_DISPLAY_PIX_SZ 2

// Interlacing types
#define VI_INTERLACE     0
#define VI_NON_INTERLACE 1
#define VI_PROGRESSIVE   2

// Video output formats
#define VI_NTSC      0
#define VI_PAL       1
#define VI_MPAL      2
#define VI_DEBUG     3
#define VI_DEBUG_PAL 4
#define VI_EURGB60   5

// Conversion to TVMode used in enums
#define VI_TVMODE(FMT, INT) (((FMT) << 2) + (INT))

// Fields
#define VI_FIELD_ABOVE 1
#define VI_FIELD_BELOW 0

// Max screen dimensions
// NTSC
#define VI_MAX_WIDTH_NTSC  720
#define VI_MAX_HEIGHT_NTSC 480

// PAL
#define VI_MAX_WIDTH_PAL  720
#define VI_MAX_HEIGHT_PAL 574

// MPAL
#define VI_MAX_WIDTH_MPAL  720
#define VI_MAX_HEIGHT_MPAL 480

// EU RGB60 (same as NTSC)
#define VI_MAX_WIDTH_EURGB60  VI_MAX_WIDTH_NTSC
#define VI_MAX_HEIGHT_EURGB60 VI_MAX_HEIGHT_NTSC

// Conversion to padded FB width from screen width
#define VIPadFrameBufferWidth(width) ((u16)(((u16)(width) + 15) & ~15))

////////////////////////////////////

/////// VIDEO INTERFACE TYPES //////
// Retrace callback function type.
typedef void (*VIRetraceCallback)(u32 retraceCount);

// TV Modes
typedef enum {
	// NTSC
	VI_TVMODE_NTSC_INT  = VI_TVMODE(VI_NTSC, VI_INTERLACE),     // 0
	VI_TVMODE_NTSC_DS   = VI_TVMODE(VI_NTSC, VI_NON_INTERLACE), // 1
	VI_TVMODE_NTSC_PROG = VI_TVMODE(VI_NTSC, VI_PROGRESSIVE),   // 2

	// PAL
	VI_TVMODE_PAL_INT = VI_TVMODE(VI_PAL, VI_INTERLACE),     // 4
	VI_TVMODE_PAL_DS  = VI_TVMODE(VI_PAL, VI_NON_INTERLACE), // 5

	// MPAL
	VI_TVMODE_MPAL_INT = VI_TVMODE(VI_MPAL, VI_INTERLACE),     // 8
	VI_TVMODE_MPAL_DS  = VI_TVMODE(VI_MPAL, VI_NON_INTERLACE), // 9

	// Debug
	VI_TVMODE_DEBUG_INT = VI_TVMODE(VI_DEBUG, VI_INTERLACE), // 12

	// Debug PAL
	VI_TVMODE_DEBUG_PAL_INT = VI_TVMODE(VI_DEBUG_PAL, VI_INTERLACE),     // 16
	VI_TVMODE_DEBUG_PAL_DS  = VI_TVMODE(VI_DEBUG_PAL, VI_NON_INTERLACE), // 17

	// EU RGB60
	VI_TVMODE_EURGB60_INT = VI_TVMODE(VI_EURGB60, VI_INTERLACE),     // 20
	VI_TVMODE_EURGB60_DS  = VI_TVMODE(VI_EURGB60, VI_NON_INTERLACE), // 21
} VITVMode;

// External frame buffer modes (single and double?)
typedef enum {
	VI_XFBMODE_SF = 0,
	VI_XFBMODE_DF = 1,
} VIXFBMode;

////////////////////////////////////

///// VIDEO INTERFACE FUNCTIONS ////
// Basic VI functions.
void VIInit(void);
void VIFlush(void);
void VIWaitForRetrace(void);

// Configure functions.
void VIConfigure(const struct _GXRenderModeObj* obj);

// Retrace callbacks.
VIRetraceCallback VISetPreRetraceCallback(VIRetraceCallback callback);
VIRetraceCallback VISetPostRetraceCallback(VIRetraceCallback callback);

// Getters and setters
void VISetNextFrameBuffer(void* fb);
void* VIGetCurrentFrameBuffer();

void VISetBlack(BOOL isBlack);

u32 VIGetRetraceCount(void);
u32 VIGetNextField(void);
u32 VIGetCurrentLine(void);
u32 VIGetTvFormat(void);

u32 VIGetDTVStatus(void);

// Unused/stripped in P2.
void VIConfigurePan(u16 panPosX, u16 panPosY, u16 panSizeX, u16 panSizeY);
void* VIGetNextFrameBuffer();
void VISetNextRightFrameBuffer(void* fb);
void VISet3D(); // unsure on arguments

////////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
