#ifndef _DOLPHIN_SI_H
#define _DOLPHIN_SI_H

#include "types.h"
#include "Dolphin/os.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

///////////////// SI TYPES /////////////////
// SI callback function type.
typedef void (*SICallback)(int chan, u32 sr, OSContext* context);
typedef void (*SITypeAndStatusCallback)(int chan, u32 type);

// Struct for SI information transfer (size 0x20).
typedef struct SIPacket {
	int chan;            // _00
	void* output;        // _04
	u32 outputBytes;     // _08
	void* input;         // _0C
	u32 inputBytes;      // _10
	SICallback callback; // _14
	OSTime fire;         // _18
} SIPacket;

// Struct for 'Si' object in SIBios.c (size 0x14).
typedef struct SIControl {
	int chan;            // _00
	u32 poll;            // _04
	u32 inputBytes;      // _08
	void* input;         // _0C
	SICallback callback; // _10
} SIControl;

////////////////////////////////////////////

/////////////// SI FUNCTIONS ///////////////
BOOL SIBusy();
BOOL SIIsChanBusy(int chan);

BOOL SIRegisterPollingHandler(__OSInterruptHandler handler);
BOOL SIUnregisterPollingHandler(__OSInterruptHandler handler);

void SIInit(void);
u32 SIGetStatus(int chan);
void SISetCommand(int chan, u32 command);
void SITransferCommands(void);
u32 SISetXY(u32 x, u32 y);
u32 SIEnablePolling(u32 poll);
u32 SIDisablePolling(u32 poll);
BOOL SIGetResponse(int chan, void* data);
BOOL SITransfer(int chan, void* output, u32 outputBytes, void* input, u32 inputBytes, SICallback callback, OSTime delay);
u32 SIGetType(int chan);
u32 SIGetTypeAsync(int chan, SITypeAndStatusCallback callback);
u32 SIDecodeType(u32 type);
u32 SIProbe(int chan);

////////////////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
