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
	GXTexRegion TexRegions0[GX_MAX_TEXMAP]; // _208
	GXTexRegion TexRegions1[GX_MAX_TEXMAP]; // _288
	GXTexRegion TexRegions2[GX_MAX_TEXMAP]; // _308

	// Texture lookup table regions
	GXTlutRegion TlutRegions[GX_MAX_TLUT_ALL]; // _388
	GXTexRegionCallback texRegionCallback;     // _4C8
	GXTlutRegionCallback tlutRegionCallback;   // _4CC

	// Command processor vars
	GXAttrType nrmType; // _4D0
	GXBool hasNrms;     // _4D4
	GXBool hasBiNrms;   // _4D5
	u32 projType;       // _4D8
	f32 projMtx[6];     // _4DC

	// Viewport parms
	f32 vpLeft;  // _4F4
	f32 vpTop;   // _4F8
	f32 vpWd;    // _4FC
	f32 vpHt;    // _500
	f32 vpNearz; // _504
	f32 vpFarz;  // _508
	f32 zOffset; // _50C
	f32 zScale;  // _510

	// Texture regs
	u32 tImage0[8];   // _514
	u32 tMode0[8];    // _534
	u32 texmapId[16]; // _554
	u32 tcsManEnab;   // _594
	u32 tevTcEnab;    // _598

	// Performance metrics
	GXPerf0 perf0; // _59C
	GXPerf1 perf1; // _5A0
	u32 perfSel;   // _5A4

	// Flags
	GXBool inDispList;    // _5A8
	GXBool dlSaveContext; // _5A9
	GXBool abtWaitPECopy; // _5AA
	u8 dirtyVAT;          // _5AB
	u32 dirtyState;       // _5AC
} GXData;
extern GXData* const __GXData; // NB: this is const in SMG1 decomp.

#define gx __GXData

////////////////////////////////////////////

///////////// REGISTER DEFINES /////////////
// Declare registers.
extern void* __cpReg;
extern void* __piReg;
extern void* __memReg;
extern void* __peReg;

// Define register addresses.
#define GX_CP_ADDR  (0x0C000000)
#define GX_PE_ADDR  (0x0C001000)
#define GX_PI_ADDR  (0x0C003000)
#define GX_MEM_ADDR (0x0C004000)

// i hate writing out the damn volatile shit so many times
#define GX_GET_MEM_REG(offset) (*(vu16*)((vu16*)(__memReg) + (offset)))
#define GX_GET_CP_REG(offset)  (*(vu16*)((vu16*)(__cpReg) + (offset)))
#define GX_GET_PE_REG(offset)  (*(vu16*)((vu16*)(__peReg) + (offset)))
#define GX_GET_PI_REG(offset)  (*(vu32*)((vu32*)(__piReg) + (offset)))

#define GX_SET_MEM_REG(offset, val) (*(vu16*)((vu16*)(__memReg) + (offset)) = val)
#define GX_SET_CP_REG(offset, val)  (*(vu16*)((vu16*)(__cpReg) + (offset)) = val)
#define GX_SET_PE_REG(offset, val)  (*(vu16*)((vu16*)(__peReg) + (offset)) = val)
#define GX_SET_PI_REG(offset, val)  (*(vu32*)((vu32*)(__piReg) + (offset)) = val)

// Useful reading register inlines
static inline u32 GXReadMEMReg(u32 addrLo, u32 addrHi)
{
	u32 hiStart, hiNew, lo;
	hiStart = GX_GET_MEM_REG(addrHi);
	do {
		hiNew   = hiStart;
		lo      = GX_GET_MEM_REG(addrLo);
		hiStart = GX_GET_MEM_REG(addrHi);
	} while (hiStart != hiNew);

	return ((hiStart << 16) | lo);
}

static inline u32 GXReadCPReg(u32 addrLo, u32 addrHi)
{
	u32 hiStart, hiNew, lo;
	hiStart = GX_GET_CP_REG(addrHi);
	do {
		hiNew   = hiStart;
		lo      = GX_GET_CP_REG(addrLo);
		hiStart = GX_GET_CP_REG(addrHi);
	} while (hiStart != hiNew);

	return ((hiStart << 16) | lo);
}

static inline u32 GXReadPEReg(u32 addrLo, u32 addrHi)
{
	u32 hiStart, hiNew, lo;
	hiStart = GX_GET_PE_REG(addrHi);
	do {
		hiNew   = hiStart;
		lo      = GX_GET_PE_REG(addrLo);
		hiStart = GX_GET_PE_REG(addrHi);
	} while (hiStart != hiNew);

	return ((hiStart << 16) | lo);
}

static inline u32 GXReadPIReg(u32 addrLo, u32 addrHi)
{
	u32 hiStart, hiNew, lo;
	hiStart = GX_GET_PI_REG(addrHi);
	do {
		hiNew   = hiStart;
		lo      = GX_GET_PI_REG(addrLo);
		hiStart = GX_GET_PI_REG(addrHi);
	} while (hiStart != hiNew);

	return ((hiStart << 16) | lo);
}

////////////////////////////////////////////

/////////// OTHER USEFUL DEFINES ///////////
// useful define to check first two GXData members together
// used in GXDisplayList, saves having a union in the struct
#define GX_CHECK_FLUSH() (!(*(u32*)(&gx->vNumNot)))

// do the damn rlwimi thing
#define FAST_FLAG_SET(regOrg, newFlag, shift, size)                                                                \
	do {                                                                                                           \
		(regOrg) = (u32)__rlwimi((int)(regOrg), (int)(newFlag), (shift), (32 - (shift) - (size)), (31 - (shift))); \
	} while (0);

////////////////////////////////////////////

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
