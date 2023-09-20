#ifndef _DOLPHIN_GBA_H
#define _DOLPHIN_GBA_H

#include "Dolphin/os.h"
#include "Dolphin/db.h"
#include "Dolphin/dsp.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

/////////// GBA TYPES ////////////

typedef void (*GBASyncCallback)(int chan, int ret);
typedef void (*GBAProcHandler)(int chan);

// Struct for SecParam (size 0x40).
typedef struct GBASecParam {
	u8 readbuf[4];    // _00
	int paletteColor; // _04
	int paletteSpeed; // _08
	int length;       // _0C
	u32* output;      // _10
	u8 _pad0[0xC];    // _14
	u32 keyA;         // _20
	int keyB;         // _24
	u8 _pad1[0x18];   // _28
} GBASecParam;

// Struct for GBA boot information (size 0x68).
typedef struct GBABootInfo {
	int paletteColor;         // _00
	int paletteSpeed;         // _04
	u8* program;              // _08
	int length;               // _0C
	u8* status;               // _10
	GBASyncCallback callback; // _14
	u8 readbuf[4];            // _18
	u8 writebuf[4];           // _1C
	int i;                    // _20
	OSTick start;             // _24
	OSTime begin;             // _28
	int firstXfer;            // _30
	int curOffset;            // _34
	u32 crc;                  // _38
	u32 dummyWord[7];         // _3C
	u32 keyA;                 // _58
	int keyB;                 // _5C
	u32 initialCode;          // _60
	int realLength;           // _64
} GBABootInfo;

// Struct for main GBA information (size 0x100).
typedef struct GBAControl {
	u8 output[5];              // _00
	u8 input[5];               // _05
	int outputBytes;           // _0C
	int inputBytes;            // _10
	u8* status;                // _14
	u8* ptr;                   // _18
	GBASyncCallback callback;  // _1C
	int ret;                   // _20
	OSThreadQueue threadQueue; // _24
	OSTime delay;              // _30
	GBAProcHandler proc;       // _38
	GBABootInfo bootInfo;      // _40
	DSPTaskInfo task;          // _A8
	GBASecParam* param;        // _F8
} GBAControl;

//////////////////////////////////

///////// GBA FUNCTIONS //////////
void GBAInit();
BOOL __GBATransfer(int portIndex, u32, u32, GBAProcHandler);
int __GBASync(int portIndex);
void __GBASyncCallback(int portIndex, int);
BOOL OnReset();
void ShortCommandProc(int portIndex);
void ReadProc(int portIndex);
int GBAReset(int portIndex, u8* p2);
int GBAGetStatus(int portIndex, u8* p2);
int GBARead(int portIndex, u8* p2, u8* p3);
int GBAWrite(int portIndex, u8* p2, u8* p3);

static inline GBAProcHandler getGBAHandler(GBAControl* gba) { return gba->proc; }

//////////////////////////////////

//////// GBA DECLARATIONS ////////

extern GBAControl __GBA[4];
extern BOOL __GBAReset;

//////////////////////////////////

#ifdef __cplusplus
}
#endif // ifdef __cplusplus

#endif
