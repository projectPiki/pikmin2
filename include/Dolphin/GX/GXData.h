#ifndef _DOLPHIN_GXDATA_H
#define _DOLPHIN_GXDATA_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#include "Dolphin/GX/GXEnum.h"
#include "Dolphin/GX/GXTypes.h"
#include "Dolphin/GX/GXTexture.h"

/////////////// CONTROL ENUMS //////////////
typedef enum _CPStatus {
	GX_FIFO_OVERFLOW        = 0x1,
	GX_FIFO_UNDERFLOW       = 0x2,
	GP_IS_IDLE_FOR_READING  = 0x4,
	GP_IS_IDLE_FOR_COMMANDS = 0x8,
	BP_INTERRUPT            = 0x10,
} CPStatus;

typedef enum _CPControl {
	GP_FIFO_READ_ENABLE             = 0x1,
	CP_IRQ_ENABLE_MAYBE             = 0x2,
	FIFO_OVERFLOW_IRQ_ENABLE_MAYBE  = 0x4,
	FIFO_UNDERFLOW_IRQ_ENABLE_MAYBE = 0x8,
	GP_LINK_ENABLE                  = 0x10,
	BP_ENABLE                       = 0x20,
} CPControl;

typedef enum _CPClear {
	CLEAR_FIFO_OVERFLOW  = 0x1,
	CLEAR_FIFO_UNDERFLOW = 0x2,
} CPClear;

////////////////////////////////////////////

////////////// GXDATA STRUCTS //////////////
// size: 0x5B0
typedef struct _GXData {
	// Bypass and vertex info
	u16 vNumNot;   // _000, !(# flush verts to send)
	u16 bpSentNot; // _002, !(bypass reg sent last?)
	u16 vNum;      // _004, # flush verts to send
	u16 vLim;      // _006, max vert size

	// Command process (CP) regs
	u32 cpEnable; // _008
	u32 cpStatus; // _00C
	u32 cpClr;    // _010
	u32 vcdLo;    // _014
	u32 vcdHi;    // _018
	u32 vatA[8];  // _01C
	u32 vatB[8];  // _03C
	u32 vatC[8];  // _05C
	u32 lpSize;   // _07C
	u32 matIdxA;  // _080
	u32 matIdxB;  // _084

	// Index loading base/stride regs (pos, nrm, tex, light)
	u32 indexBase[4];   // _088
	u32 indexStride[4]; // _098

	// Transform and lighting regs
	u32 ambColor[2]; // _0A8
	u32 matColor[2]; // _0B0

	// Setup regs
	u32 suTs0[8]; // _0B8
	u32 suTs1[8]; // _0D8
	u32 suScis0;  // _0F8
	u32 suScis1;  // _0FC

	// Raster regs
	u32 tref[8]; // _100
	u32 iref;    // _120

	// Bump/Indirect texture regs
	u32 bpMask;       // _124
	u32 IndTexScale0; // _128
	u32 IndTexScale1; // _12C

	// Tev regs
	u32 tevc[16];   // _130
	u32 teva[16];   // _170
	u32 tevKsel[8]; // _1B0

	// Performance regs
	u32 cmode0; // _1D0
	u32 cmode1; // _1D4
	u32 zmode;  // _1D8
	u32 peCtrl; // _1DC

	// Display copy regs
	u32 cpDispSrc;    // _1E0
	u32 cpDispSize;   // _1E4
	u32 cpDispStride; // _1E8
	u32 cpDisp;       // _1EC

	// Texture copy regs
	u32 cpTexSrc;    // _1F0
	u32 cpTexSize;   // _1F4
	u32 cpTexStride; // _1F8
	u32 cpTex;       // _1FC
	GXBool cpTexZ;   // _200

	// General raster mode
	u32 genMode; // _204

	// Texture regions
	GXTexRegion TexRegions[8];   // _208
	GXTexRegion TexRegionsCI[4]; // _288
	u32 nextTexRgn;              // _2C8
	u32 nextTexRgnCI;            // _2CC

	// Texture lookup table regions
	GXTlutRegion TlutRegions[20];            // _2D0
	GXTexRegionCallback texRegionCallback;   // _410
	GXTlutRegionCallback tlutRegionCallback; // _414

	// Command processor vars
	GXAttrType nrmType; // _418
	GXBool hasNrms;     // _41C
	GXBool hasBiNrms;   // _41D
	u32 projType;       // _420
	f32 projMtx[6];     // _424

	// Viewport parms
	f32 vpLeft;  // _43C
	f32 vpTop;   // _440
	f32 vpWd;    // _444
	f32 vpHt;    // _448
	f32 vpNearz; // _44C
	f32 vpFarz;  // _450
	u8 fgRange;  // _454
	f32 fgSideX; // _458

	// Texture regs
	u32 tImage0[8];   // _45C
	u32 tMode0[8];    // _47C
	u32 texmapId[16]; // _49C
	u32 tcsManEnab;   // _4DC
	u32 tevTcEnab;    // _4E0

	// Performance metrics
	GXPerf0 perf0; // _4E4
	GXPerf1 perf1; // _4E8
	u32 perfSel;   // _4EC

	u8 _4F0[0xB8]; // _4F0, unknown padding, lives somewhere before dirtyState

	// Flags
	GXBool inDispList;    // _5A8
	GXBool dlSaveContext; // _5A9
	u8 dirtyVAT;          // _5AA
	u32 dirtyState;       // _5AC

	// union {
	// 	s16 s[2];
	// 	u32 w;
	// } _000;                          // _000
	// u16 _004;                        // _004
	// u16 _006;                        // _006
	// ControlRegister controlRegister; // _008
	// u32 _00C;                        // _00C, probably CPStatus
	// u32 _010;                        // _010
	// u32 _014;                        // _014
	// u8 _018[0x64];                   // _018
	// u32 _07C;                        // _07C
	// u8 _080[0x28];                   // _080
	// GXColor _0A8[2];                 // _0A8
	// GXColor _0B0[2];                 // _0B0
	// u32 _0B8[2];                     // _0B8
	// u32 _0C0;                        // _0C0
	// u32 _0C4;                        // _0C4
	// u32 _0C8[2];                     // _0C8
	// u8 _0D0[0x18];                   // _0D0
	// u32 _0E8[2];                     // _0E8
	// u8 _0F0[0x18];                   // _0F0
	// u32 _108[2];                     // _108
	// u8 _110[0x10];                   // _110
	// u32 _120;                        // _120
	// u32 _124;                        // _124
	// u32 _128;                        // _128
	// u32 _12C;                        // _12C
	// u8 _130[0x40];                   // _130
	// u32 _170;                        // _170
	// u32 _174;                        // _174
	// u32 _178;                        // _178
	// u32 _17C;                        // _17C
	// u8 _180[0x50];                   // _180
	// u32 _1D0;                        // _1D0
	// u8 _1D4[0x30];                   // _1D4
	// u32 _204;                        // _204
	// u8 _208[0x4C];                   // _208
	// u32 _254;                        // _254
	// u8 _258[0x354];                  // _258
	// u32 _5AC;                        // _5AC
} GXData;
extern GXData* const __GXData; // NB: this is const in SMG1 decomp.

#define gx __GXData

////////////////////////////////////////////

///////////// REGISTER STRUCTS /////////////
typedef struct _CPReg {
	u16 statusRegister;        // _00 /* CPStatus */
	u16 controlRegister;       // _02 /* CPControl */
	u16 clearRegister;         // _04 /* CPClear */
	u16 _06;                   // _06
	u16 _08;                   // _08
	u16 _0A;                   // _0A
	u16 _0C;                   // _0C
	u16 tokenRegister;         // _0E
	u16 boundingBoxLeft;       // _10
	u16 boundingBoxRight;      // _12
	u16 boundingBoxTop;        // _14
	u16 boundingBoxBottom;     // _16
	u16 _18;                   // _18
	u16 _1A;                   // _1A
	u16 _1C;                   // _1C
	u16 _1E;                   // _1E
	u16 cpFIFOBaseLo;          // _20
	u16 cpFIFOBaseHi;          // _22
	u16 cpFIFOEndLo;           // _24
	u16 cpFIFOEndHi;           // _26
	u16 cpFIFOHighWatermarkLo; // _28
	u16 cpFIFOHighWatermarkHi; // _2A
	u16 cpFIFOLowWatermarkLo;  // _2C
	u16 cpFIFOLowWatermarkHi;  // _2E
	u16 cpFIFORWDistanceLo;    // _30
	u16 cpFIFORWDistanceHi;    // _32
	u16 cpFIFOWritePointerLo;  // _34
	u16 cpFIFOWritePointerHi;  // _36
	u16 cpFIFOReadPointerLo;   // _38
	u16 cpFIFOReadPointerHi;   // _3A
	u16 cpFIFOBPLo;            // _3C
	u16 cpFIFOBPHi;            // _3E
	u8 _40[0x40];              // _40
} CPReg;
extern CPReg* __cpReg;

typedef struct _PIReg {
	u32 INTSR;                       // _00
	u32 INTMR;                       // _04
	u32 _08;                         // _08
	u32 fifoBase;                    // _0C
	u32 fifoEnd;                     // _10
	u32 cpuFIFOCurrentWritePtrMaybe; // _14
	u32 _18;                         // _18
	u32 _1C;                         // _1C
	u32 _20;                         // _20
	u32 resetMaybe;                  // _24
	u32 _28;                         // _28
	u32 _2C;                         // _2C
	u32 _30;                         // _30
	u32 _34;                         // _34
	u32 _38;                         // _38
	u32 _3C;                         // _3C
	u32 _40;                         // _40
	u32 _44;                         // _44
	u32 _48;                         // _48
	u32 _4C;                         // _4C
	u32 _50;                         // _50
	u32 _54;                         // _54
	u32 _58;                         // _58
	u32 _5C;                         // _5C
	u32 _60;                         // _60
	u32 _64;                         // _64
	u32 _68;                         // _68
	u32 _6C;                         // _6C
	u32 _70;                         // _70
	u32 _74;                         // _74
	u32 _78;                         // _78
	u32 _7C;                         // _7C
	u32 _80;                         // _80
	u32 _84;                         // _84
	u32 _88;                         // _88
	u32 _8C;                         // _8C
	u32 _90;                         // _90
	u32 _94;                         // _94
	u32 _98;                         // _98
	u32 _9C;                         // _9C
	u32 _A0;                         // _A0
	u32 _A4;                         // _A4
	u32 _A8;                         // _A8
	u32 _AC;                         // _AC
	u32 _B0;                         // _B0
	u32 _B4;                         // _B4
	u32 _B8;                         // _B8
	u32 _BC;                         // _BC
	u32 _C0;                         // _C0
	u32 _C4;                         // _C4
	u32 _C8;                         // _C8
	u32 _CC;                         // _CC
	u32 _D0;                         // _D0
	u32 _D4;                         // _D4
	u32 _D8;                         // _D8
	u32 _DC;                         // _DC
	u32 _E0;                         // _E0
	u32 _E4;                         // _E4
	u32 _E8;                         // _E8
	u32 _EC;                         // _EC
	u32 _F0;                         // _F0
	u32 _F4;                         // _F4
	u32 _F8;                         // _F8
	u32 _FC;                         // _FC
} PIReg;
extern PIReg* __piReg;

////////////////////////////////////////////

// useful define to check first two GXData members together
// used in GXDisplayList, saves having a union in the struct
#define GX_CHECK_FLUSH() (!(*(u32*)(&gx->vNumNot)))

static inline void GXSetWasteFlags()
{
	GXData* data = __GXData;
	data->dirtyState |= 0x3;
	data->bpSentNot = GX_FALSE;
}

////////////////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
