#ifndef _DOLPHIN_GX_H
#define _DOLPHIN_GX_H

// TODO: Finish GX enums
// #pragma reverse_bitfields on

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#include "Dolphin/vi.h"
#include "Dolphin/mtx.h"
#include "Dolphin/GXEnum.h"

// Pack value into bitfield
#define GX_BITFIELD_SET(field, pos, size, value) (field) = __rlwimi((field), (value), 31 - (pos) - (size) + 1, (pos), (pos) + (size)-1)

typedef struct _GXColor {
	u8 r, g, b, a;
} GXColor;
typedef GXColor _SDK_GXColor; // this might be a wrapper in Pikmin 2? IDK.

typedef struct _GXColorS10 {
	s16 r, g, b, a;
} GXColorS10;
typedef GXColorS10 _SDK_GXColorS10; // this might be a wrapper in Pikmin 2? IDK.

typedef struct _GXFogAdjTable {
	u16 _00[10];
} GXFogAdjTable;
typedef GXFogAdjTable _SDK_GXFogAdjTable;

typedef struct _GXRenderModeObj {
	VITVMode viTVmode; // _00
	u16 fbWidth;       // _04
	u16 efbHeight;     // _06
	u16 xfbHeight;     // _08
	u16 viXOrigin;     // _0A
	u16 viYOrigin;     // _0C
	u16 viWidth;       // _0E
	u16 viHeight;      // _10
	VIXFBMode xFBmode; // _14

	u8 field_rendering;       // _18
	u8 aa;                    // _19
	u8 sample_pattern[12][2]; // _1C
	u8 vfilter[7];            // _34
} GXRenderModeObj;

extern GXRenderModeObj GXNtsc240Ds;
extern GXRenderModeObj GXNtsc240DsAa;
extern GXRenderModeObj GXNtsc240Int;
extern GXRenderModeObj GXNtsc240IntAa;
extern GXRenderModeObj GXNtsc480IntDf;
extern GXRenderModeObj GXNtsc480Int;
extern GXRenderModeObj GXNtsc480IntAa;
extern GXRenderModeObj GXNtsc480Prog;
extern GXRenderModeObj GXNtsc480ProgSoft;
extern GXRenderModeObj GXNtsc480ProgAa;

extern GXRenderModeObj GXMpal240Ds;
extern GXRenderModeObj GXMpal240DsAa;
extern GXRenderModeObj GXMpal240Int;
extern GXRenderModeObj GXMpal240IntAa;
extern GXRenderModeObj GXMpal480IntDf;
extern GXRenderModeObj GXMpal480Int;
extern GXRenderModeObj GXMpal480IntAa;

extern GXRenderModeObj GXPal264Ds;
extern GXRenderModeObj GXPal264DsAa;
extern GXRenderModeObj GXPal264Int;
extern GXRenderModeObj GXPal264IntAa;
extern GXRenderModeObj GXPal528IntDf;
extern GXRenderModeObj GXPal528Int;
extern GXRenderModeObj GXPal524IntAa;

extern GXRenderModeObj GXEurgb60Hz240Ds;
extern GXRenderModeObj GXEurgb60Hz240DsAa;
extern GXRenderModeObj GXEurgb60Hz240Int;
extern GXRenderModeObj GXEurgb60Hz240IntAa;
extern GXRenderModeObj GXEurgb60Hz480IntDf;
extern GXRenderModeObj GXEurgb60Hz480Int;
extern GXRenderModeObj GXEurgb60Hz480IntAa;
extern GXRenderModeObj GXRmHW;

typedef struct GXTexObj {
	u32 _00;
	u32 _04;
	u32 _08;
	u32 _0c;
	u8 _10;
	u8 _11;
	u8 _12;
	u8 _13;
	u32 format_14;
	u32 tlut_name_18;
	u16 _1c;
	s8 _1e;
	s8 mipmap_1f;
} GXTexObj;

typedef struct _GXVtxDescList {
	s32 _00;
	u32 _04;
} GXVtxDescList;

typedef union _ControlRegister {
	u32 value;
	struct {
		u32 bpEnable : 27;
		u32 gpLinkEnable : 1;
		u32 fifoUnderflowIRQEnable : 1;
		u32 fifoOverflowIRQEnable : 1;
		u32 cpIRQEnable : 1;
		u32 gpFifoReadEnable : 1;
		// u32
		// bpEnable : 1,
		// gpLinkEnable : 1,
		// fifoUnderflowIRQEnable : 1,
		// fifoOverflowIRQEnable : 1,
		// cpIRQEnable : 1,
		// gpFifoReadEnable : 1;
	} bits;
} ControlRegister;

// typedef struct _ControlRegister {
// 	u32
// 	gpFifoReadEnable : 1,
// 	cpIRQEnable : 1,
// 	fifoOverflowIRQEnable : 1,
// 	fifoUnderflowIRQEnable : 1,
// 	gpLinkEnable : 1,
// 	bpEnable : 27;
// } ControlRegister;

// typedef struct _ControlRegister {
// 	u32
// 	gpFifoReadEnable : 1,
// 	cpIRQEnable : 1,
// 	fifoOverflowIRQEnable : 1,
// 	fifoUnderflowIRQEnable : 1,
// 	gpLinkEnable : 1,
// 	bpEnable : 1;
// } ControlRegister;

// typedef struct _ControlRegister {
// 	u32
// 	bpEnable : 27,
// 	gpLinkEnable : 1,
// 	fifoUnderflowIRQEnable : 1,
// 	fifoOverflowIRQEnable : 1,
// 	cpIRQEnable : 1,
// 	gpFifoReadEnable : 1;
// } ControlRegister;

/**
 * @size{0x5B0}
 */
typedef struct _GXData {
	u16 _000[2]; // _000
	u8 _004[4];  // _004
	/* CPControl. Gets written to __cpReg->controlRegister. */
	// union {
	// 	u32 value;
	// 	ControlRegister bits;
	// 	// struct {
	// 	// 	u32
	// 	// 		bpEnable : 1,
	// 	// 		gpLinkEnable : 1,
	// 	// 		fifoUnderflowIRQEnable : 1,
	// 	// 		fifoOverflowIRQEnable : 1,
	// 	// 		cpIRQEnable : 1,
	// 	// 		gpFifoReadEnable : 1;
	// 	// 		// gpFifoReadEnable : 1,
	// 	// 		// cpIRQEnable : 1,
	// 	// 		// fifoOverflowIRQEnable : 1,
	// 	// 		// fifoUnderflowIRQEnable : 1,
	// 	// 		// gpLinkEnable : 1,
	// 	// 		// bpEnable : 1;
	// 	// } bits;
	// } controlRegister;
	ControlRegister controlRegister; // _008
	// u32 controlRegister;
	/* Probably CPStatus. */
	u32 _00C;        // _00C
	u8 _010[0x6C];   // _010
	u32 _07C;        // _07C
	u8 _080[0x28];   // _080
	GXColor _0A8[2]; // _0A8
	GXColor _0B0[2]; // _0B0
	u32 _0B8[2];     // _0B8
	u32 _0C0;        // _0C0
	u32 _0C4;        // _0C4
	u32 _0C8[2];     // _0C8
	u8 _0D0[0x18];   // _0D0
	u32 _0E8[2];     // _0E8
	u8 _0F0[0x18];   // _0F0
	u32 _108[2];     // _108
	u8 _110[0x10];   // _110
	u32 _120;        // _120
	u32 _124;        // _124
	u32 _128;        // _128
	u32 _12C;        // _12C
	u8 _130[0x40];   // _130
	u32 _170;        // _170
	u32 _174;        // _174
	u32 _178;        // _178
	u32 _17C;        // _17C
	u8 _180[0x50];   // _180
	u32 _1D0;        // _1D0
	u8 _1D4[0x30];   // _1D4
	u32 _204;        // _204
	u8 _208[0x4C];   // _208
	u32 _254;        // _254
	u8 _258[0x354];  // _258
	u32 _5AC;        // _5AC
} GXData;
extern GXData* __GXData;

typedef enum _CPStatus {
	GX_FIFO_OVERFLOW        = 0x1,
	GX_FIFO_UNDERFLOW       = 0x2,
	GP_IS_IDLE_FOR_READING  = 0x4,
	GP_IS_IDLE_FOR_COMMANDS = 0x8,
	BP_INTERRUPT            = 0x10
} CPStatus;

typedef enum _CPControl {
	GP_FIFO_READ_ENABLE             = 0x1,
	CP_IRQ_ENABLE_MAYBE             = 0x2,
	FIFO_OVERFLOW_IRQ_ENABLE_MAYBE  = 0x4,
	FIFO_UNDERFLOW_IRQ_ENABLE_MAYBE = 0x8,
	GP_LINK_ENABLE                  = 0x10,
	BP_ENABLE                       = 0x20
} CPControl;

typedef enum _CPClear { CLEAR_FIFO_OVERFLOW = 0x1, CLEAR_FIFO_UNDERFLOW = 0x2 } CPClear;

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

typedef struct __GXLightObj {
	u32 reserved[3];
	u32 Color;   // light color
	f32 a[3];    // angle-attenuation coefficients
	f32 k[3];    // distance-attenuation coefficients
	f32 lpos[3]; // diffuse: position;  specular: direction
	f32 ldir[3]; // diffuse: direction; specular: half-angle
} GXLightObj;

typedef struct _GXTexRegion {
	u8 _00[0x10]; // _00
} GXTexRegion;

void __GXSetDirtyState();
void __GXSendFlushPrim();

void GXAbortFrame();
void GXFlush();
void GXInvalidateVtxCache(void);
void GXSetNumTexGens(u8);
void GXInitSpecularDir(GXLightObj* lt_obj, f32 nx, f32 ny, f32 nz);
void GXInitSpecularDirHA(GXLightObj* lt_obj, f32 nx, f32 ny, f32 nz, f32 hx, f32 hy, f32 hz);
void GXInitLightAttn(GXLightObj* lt_obj, f32 a0, f32 a1, f32 a2, f32 k0, f32 k1, f32 k2);
void GXInitLightAttnA(GXLightObj* lt_obj, f32 a0, f32 a1, f32 a2);
void GXInitLightAttnK(GXLightObj* lt_obj, f32 k0, f32 k1, f32 k2);
void GXInitLightSpot(GXLightObj* lt_obj, f32 cutoff, GXSpotFn spot_func);
void GXInitLightPos(GXLightObj* lt_obj, f32 x, f32 y, f32 z);
void GXInitLightColor(GXLightObj* lt_obj, GXColor color);
void GXInitLightDir(GXLightObj* lt_obj, f32 nx, f32 ny, f32 nz);
void GXInitLightDistAttn(GXLightObj* lt_obj, f32 ref_distance, f32 ref_brightness, GXDistAttnFn dist_func);
void GXLoadLightObjImm(GXLightObj* lt_obj, GXLightID light);
void GXLoadLightObjIndx(u32 lt_obj_indx, GXLightID light);
void GXSetChanAmbColor(GXChannelID chan, GXColor amb_color);
void GXSetChanMatColor(GXChannelID chan, GXColor mat_color);
void GXSetNumChans(u32);
void GXSetChanCtrl(GXChannelID chan, GXBool enable, GXColorSrc amb_src, GXColorSrc mat_src, GXLightID light_mask, GXDiffuseFn diff_fn,
                   GXAttnFn attn_fn);
void GXSetNumIndStages(u8 num);
void GXSetNumTevStages(u32);
void GXSetTevDirect(GXTevStageID);
void GXSetTevOrder(GXTevStageID, GXTexCoordID, GXTexMapID, GXChannelID);
void GXSetTevOp(GXTevStageID, GXTevMode);
void GXSetTevColor(GXTevRegID, GXColor);
void GXSetTevColorS10(GXTevRegID, GXColorS10);
void GXSetTevSwapMode(GXTevStageID, u32, u32);
void GXSetTevSwapModeTable(GXTevSwapSel, u32, u32, u32, u32);
void GXSetTevColorIn(GXTevStageID, GXTevColorArg, GXTevColorArg, GXTevColorArg, GXTevColorArg);
void GXSetTevAlphaIn(GXTevStageID, GXTevAlphaArg, GXTevAlphaArg, GXTevAlphaArg, GXTevAlphaArg);
void GXSetTevColorOp(GXTevStageID, GXTevOp, GXTevBias, GXTevScale, GXBool, GXTevRegID);
void GXSetTevAlphaOp(GXTevStageID, GXTevOp, GXTevBias, GXTevScale, GXBool, GXTevRegID);
void GXSetTevKColor(GXTevKColorID, GXColor);
void GXSetTevKColorSel(GXTevStageID, GXTevKColorSel);
void GXSetTevKAlphaSel(GXTevStageID, u32); // params might not be right
void GXSetVtxAttrFmt(GXVtxFmt, GXAttr, GXCompCnt, GXCompType, uint);
void GXClearVtxDesc();
void GXSetVtxDesc(GXAttr, GXAttrType);
void GXSetIndTexOrder(GXIndTexStageID, GXTexCoordID, GXTexMapID);
void GXSetIndTexCoordScale(GXIndTexStageID, GXIndTexScale, GXIndTexScale);
void GXSetIndTexMtx(GXIndTexMtxID, const Mtx23, s8);
void GXSetTevIndWarp(GXTevStageID, GXIndTexStageID, u8, u8, GXIndTexMtxID);
void GXBeginDisplayList(void*, u32 dlSize);
u32 GXEndDisplayList(void);
void GXCallDisplayList(void*, u32 byteCnt);

void GXInitTexCacheRegion(GXTexRegion* region, GXBool is_32b_mipmap, u32 tmem_even, GXTexCacheSize size_even, u32 tmem_odd,
                          GXTexCacheSize size_odd);

void GXSetFog(GXFogType type, f32 startz, f32 endz, f32 nearz, f32 farz, GXColor color);

void GXInitFogAdjTable(GXFogAdjTable* table, u16 width, f32 projmtx[4][4]);

void GXSetFogRangeAdj(GXBool enable, u16 center, GXFogAdjTable* table);

void GXSetBlendMode(GXBlendMode type, GXBlendFactor src_factor, GXBlendFactor dst_factor, GXLogicOp op);

void GXSetColorUpdate(GXBool update_enable);
void GXSetAlphaUpdate(GXBool update_enable);
void GXSetAlphaCompare(GXCompare, u8, GXAlphaOp, GXCompare, u8);
void GXSetZTexture(GXZTexOp op, GXTexFmt fmt, u32 bias);
void GXSetDispCopyGamma(GXGamma update_enable);
void GXSetZMode(GXBool compare_enable, GXCompare func, GXBool update_enable);
void GXSetCullMode(GXCullMode);
void GXSetCurrentMtx(u32);

void GXSetZCompLoc(GXBool before_tex);
void GXSetPixelFmt(GXPixelFmt pix_fmt, GXZFmt16 z_fmt);
void GXSetDither(GXBool dither);
void GXSetDstAlpha(GXBool enable, u8 alpha);
void GXSetFieldMask(GXBool odd_mask, GXBool even_mask);
void GXSetFieldMode(GXBool field_mode, GXBool half_aspect_ratio);

void GXSetTevIndirect(GXTevStageID tevStage, GXIndTexStageID texStage, GXIndTexFormat texFmt, GXIndTexBiasSel biasSel, GXIndTexMtxID mtxID,
                      GXIndTexWrap wrapS, GXIndTexWrap wrapT, u8 addPrev, u8 utcLod, GXIndTexAlphaSel alphaSel);

#define GX_FIFO_OBJ_SIZE 128

typedef struct {
	void* base;        // _00
	void* end;         // _04
	u32 size;          // _08
	u32 highWatermark; // _0C
	u32 lowWatermark;  // _10
	void* readPtr;     // _14
	void* writePtr;    // _18
	s32 rwDistance;    // _1C
	u8 _20[0x60];      // _20
} GXFifoObj;

void GXInitFifoBase(GXFifoObj* fifo, void* base, u32 size);
void GXInitFifoPtrs(GXFifoObj* fifo, void* readPtr, void* writePtr);
void GXInitFifoLimits(GXFifoObj* fifo, u32 highWatermark, u32 lowWatermark);
void GXSaveCPUFifo(GXFifoObj* fifo);

void GXReadXfRasMetric(u32*, u32*, u32*, u32*);
void GXGetGPStatus(GXBool* overhi, GXBool* underlow, GXBool* readIdle, GXBool* cmdIdle, GXBool* brkpt);

void GXSetCPUFifo(GXFifoObj* fifo);
void GXSetGPFifo(GXFifoObj* fifo);
void GXSaveCPUFifo(GXFifoObj* fifo);
void GXSaveGPFifo(GXFifoObj* fifo);

void __GXSaveCPUFifoAux(GXFifoObj* fifo);
void __GXFifoReadEnable();
void __GXFifoReadDisable();
void __GXFifoLink(u8);
void __GXWriteFifoIntEnable(u32, u32);
void __GXWriteFifoIntReset(u32, u32);

void GXGetScissor(u32*, u32*, u32*, u32*);
void GXSetScissor(u32, u32, u32, u32);
void GXSetProjection(Mtx, GXProjectionType);

typedef void GXBreakpointCallback(void);

GXBreakpointCallback* GXSetBreakPtCallback(GXBreakpointCallback*);

typedef void GXDrawDoneCallback(void);

GXDrawDoneCallback* GXSetDrawDoneCallback(GXDrawDoneCallback*);
void GXSetDrawDone();
void GXDrawDone();
void GXPixModeSync();

void GXCopyDisp(void*, GXBool); // TODO: Confirm types

typedef struct GXTlutObj {
	u32 _00; // _00
	u32 _04; // _04
	u16 _08; // _08
} GXTlutObj;

// TODO: Figure this out
typedef struct GXTlutRegion {
	u32 _00;     // _00
	u8 _04[0xC]; // _04
} GXTlutRegion;

typedef struct _GXVtxAttrFmtList {
	GXAttr mAttrib;       // _00
	GXCompCnt mCompCnt;   // _04
	GXCompType mCompType; // _08
	u8 mCompShift;        // _0C
} GXVtxAttrFmtList;       // Size: 0x10

typedef GXTlutRegion* GXTlutRegionCallback(GXTlut);

void GXInvalidateTexAll(void);

void GXInitTlutObj(GXTlutObj*, const u8*, GXTlutFmt, u16);
// TODO: Params aren't fully worked out yet.
void GXInitTlutRegion(u32*, int, u32);
void GXLoadTlut(GXTlutObj*, GXTlut);
void GXSetTlutRegionCallback(GXTlutRegionCallback*);

GXTlutRegion* __GXDefaultTlutRegionCallback(GXTlut);
void GXInitTexObj(GXTexObj*, void*, u16, u16, GXTexFmt, GXTexWrapMode, GXTexWrapMode, GXBool);
void GXInitTexObjLOD(GXTexObj*, GXTexFilter, GXTexFilter, float, float, float, GXBool, GXBool, GXAnisotropy);
void GXLoadTexObj(GXTexObj*, GXTexMapID);
void GXBegin(GXPrimitive, GXVtxFmt, u16);

void GXLoadPosMtxImm(Mtx, int);
void GXLoadNrmMtxImm(Mtx, int);
void GXLoadTexMtxImm(Mtx, u32, GXTexMtxType);

void GXSetTexCoordGen2(GXTexCoordID, GXTexGenType, GXTexGenSrc, u32, GXBool, u32);
void GXSetLineWidth(u8, GXTexOffset);
// TODO: Types
void GXSetPointSize(u8, s32);

u16 GXGetNumXfbLines(float, u16);
float GXGetYScaleFactor(u16, u16);

u32 GXSetDispCopyYScale(f32 vscale);
void GXSetDispCopySrc(u16 left, u16 top, u16 wd, u16 ht);
void GXSetTexCopySrc(u16 left, u16 top, u16 wd, u16 ht);
void GXSetDispCopyDst(u16 wd, u16 ht);

void GXSetViewport(float, float, float, float, float, float);
void GXSetTevKColor(GXTevKColorID, GXColor);
void GXSetClipMode(GXClipMode);
void GXSetCopyClamp(GXFBClamp clamp);
void GXSetCoPlanar(GXBool);

void GXSetCopyClear(GXColor clear_clr, u32 clear_z);
void GXSetCopyFilter(GXBool aa, const u8 sample_pattern[12][2], GXBool vf, const u8 vfilter[7]);

void GXSetArray(int, Mtx*, size_t); // TODO: Correct types.

// added GXPosition and GXFifo from smb-decomp/GXVert.h, thanks to encounter for doing this!
// need to confirm these are the same for Pikmin 2 - currently used by plugProjectNishimuraU/MapUnit.cpp in
// UnitInfo::draw()

#define GXFIFO_ADDR 0xCC008000

typedef union {
	u8 u8;
	u16 u16;
	u32 u32;
	u64 u64;
	s8 s8;
	s16 s16;
	s32 s32;
	s64 s64;
	f32 f32;
	f64 f64;
} PPCWGPipe;

#ifdef __MWERKS__
PPCWGPipe GXWGFifo : GXFIFO_ADDR;
#else
extern PPCWGPipe GXWGFifo;
#endif

inline void GXSetWasteFlags()
{
	GXData* data = __GXData;
	data->_5AC |= 0x3;
	data->_000[1] = 0;
}

static inline void GXPosition2f32(const f32 x, const f32 y)
{
	GXWGFifo.f32 = x;
	GXWGFifo.f32 = y;
}

static inline void GXPosition3s16(const s16 x, const s16 y, const s16 z)
{
	GXWGFifo.s16 = x;
	GXWGFifo.s16 = y;
	GXWGFifo.s16 = z;
}

static inline void GXPosition3f32(const f32 x, const f32 y, const f32 z)
{
	GXWGFifo.f32 = x;
	GXWGFifo.f32 = y;
	GXWGFifo.f32 = z;
}

static inline void GXNormal3f32(const f32 x, const f32 y, const f32 z)
{
	GXWGFifo.f32 = x;
	GXWGFifo.f32 = y;
	GXWGFifo.f32 = z;
}

static inline void GXColor1u32(u32 c) { GXWGFifo.u32 = c; }

static inline void GXColor4u8(const u8 r, const u8 g, const u8 b, const u8 a)
{
	GXWGFifo.u8 = r;
	GXWGFifo.u8 = g;
	GXWGFifo.u8 = b;
	GXWGFifo.u8 = a;
}

static inline void GXTexCoord2s8(const s8 u, const s8 v)
{
	GXWGFifo.s8 = u;
	GXWGFifo.s8 = v;
}

static inline void GXTexCoord2u8(u8 s, u8 t)
{
	GXWGFifo.u8 = s;
	GXWGFifo.u8 = t;
}

static inline void GXPosition2u16(u16 x, u16 y)
{
	GXWGFifo.u16 = x;
	GXWGFifo.u16 = y;
}

static inline void GXTexCoord2s16(const s16 u, const s16 v)
{
	GXWGFifo.s16 = u;
	GXWGFifo.s16 = v;
}

static inline void GXTexCoord2f32(const f32 u, const f32 v)
{
	GXWGFifo.f32 = u;
	GXWGFifo.f32 = v;
}

static inline void GXEnd(void) { }

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
// #pragma reverse_bitfields reset
