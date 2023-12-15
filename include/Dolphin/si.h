#ifndef _DOLPHIN_SI_H
#define _DOLPHIN_SI_H

#include "types.h"
#include "Dolphin/os.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

///////////////// SI TYPES /////////////////
// SI callback function type.
typedef void (*SICallback)(s32 chan, u32 sr, OSContext* context);
typedef void (*SITypeAndStatusCallback)(s32 chan, u32 type);

// Struct for SI information transfer (size 0x20).
typedef struct SIPacket {
	s32 chan;            // _00
	void* output;        // _04
	u32 outputBytes;     // _08
	void* input;         // _0C
	u32 inputBytes;      // _10
	SICallback callback; // _14
	OSTime fire;         // _18
} SIPacket;

// Struct for 'Si' object in SIBios.c (size 0x14).
typedef struct SIControl {
	s32 chan;            // _00
	u32 poll;            // _04
	u32 inputBytes;      // _08
	void* input;         // _0C
	SICallback callback; // _10
} SIControl;

// Struct to set and store flags (size 0x4).
typedef struct SICommFlags {
	u32 tcint : 1;
	u32 tcintmsk : 1;
	u32 comerr : 1;
	u32 rdstint : 1;
	u32 rdstintmsk : 1;
	u32 pad0 : 4;
	u32 outlngth : 7;
	u32 pad1 : 1;
	u32 inlngth : 7;
	u32 pad2 : 5;
	u32 channel : 2;
	u32 tstart : 1;
} SICommFlags;

// Union to control setting flags or overall word value (size 0x4).
typedef union SIComm {
	u32 val;
	SICommFlags flags;
} SIComm;

////////////////////////////////////////////

/////////////// SI FUNCTIONS ///////////////
BOOL SIBusy();
BOOL SIIsChanBusy(s32 chan);

BOOL SIRegisterPollingHandler(__OSInterruptHandler handler);
BOOL SIUnregisterPollingHandler(__OSInterruptHandler handler);

void SIInit(void);
u32 SIGetStatus(s32 chan);
void SISetCommand(s32 chan, u32 command);
void SITransferCommands(void);
u32 SISetXY(u32 x, u32 y);
u32 SIEnablePolling(u32 poll);
u32 SIDisablePolling(u32 poll);
BOOL SIGetResponse(s32 chan, void* data);
BOOL SITransfer(s32 chan, void* output, u32 outputBytes, void* input, u32 inputBytes, SICallback callback, OSTime delay);
u32 SIGetType(s32 chan);
u32 SIGetTypeAsync(s32 chan, SITypeAndStatusCallback callback);
u32 SIDecodeType(u32 type);
u32 SIProbe(s32 chan);

////////////////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
