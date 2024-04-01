#ifndef _JSYSTEM_J3D_J3DTYPES_H
#define _JSYSTEM_J3D_J3DTYPES_H

#include "Dolphin/gx.h"
#include "Dolphin/vec.h"
#include "JSystem/J3D/J3DGXColor.h"
#include "JSystem/J3D/J3DGD.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JMath.h"
#include "types.h"

// TODO: Make a bitmask enum
/**
 * @fabricatedName
 */
typedef u32 J3DModelLoaderFlags;
#define J3DMLF_MtxCalc_SoftImage          0x00000001
#define J3DMLF_MtxCalc_Maya               0x00000002
#define J3DMLF_03                         0x00000004
#define J3DMLF_04                         0x00000008
#define J3DMLF_UseConcatViewShapeMatrices 0x00000010
#define J3DMLF_06                         0x00000020
#define J3DMLF_07                         0x00000040
#define J3DMLF_08                         0x00000080
#define J3DMLF_09                         0x00000100
#define J3DMLF_10                         0x00000200
#define J3DMLF_11                         0x00000400
#define J3DMLF_12                         0x00000800
#define J3DMLF_13                         0x00001000
#define J3DMLF_14                         0x00002000
#define J3DMLF_15                         0x00004000
#define J3DMLF_16                         0x00008000
#define J3DMLF_17                         0x00010000
#define J3DMLF_18                         0x00020000
#define J3DMLF_19                         0x00040000
#define J3DMLF_20                         0x00080000
#define J3DMLF_21                         0x00100000
#define J3DMLF_22                         0x00200000
#define J3DMLF_23                         0x00400000
#define J3DMLF_24                         0x00800000
#define J3DMLF_25                         0x01000000
#define J3DMLF_26                         0x02000000
#define J3DMLF_27                         0x04000000
#define J3DMLF_28                         0x08000000
#define J3DMLF_29                         0x10000000
#define J3DMLF_30                         0x20000000
#define J3DMLF_31                         0x40000000
#define J3DMLF_32                         0x80000000

enum JBlockType {
	JBT_ColorAmbientOn = 'CLAB',
	JBT_ColorNull      = 'CLNL',
	JBT_ColorLightOff  = 'CLOF',
	JBT_ColorLightOn   = 'CLON',
	JBT_IndFull        = 'IBLF',
	JBT_IndNull        = 'IBLN',
	JBT_PETexEdge      = 'PEED',
	JBT_PEFogOff       = 'PEFG',
	JBT_PEFull         = 'PEFL',
	JBT_PENull         = 'PENL',
	JBT_PEOpa          = 'PEOP',
	JBT_PEXlu          = 'PEXL',
	JBT_TexGen4        = 'TGB4',
	JBT_TexGenBasic    = 'TGBC',
	JBT_TexGenNull     = 'TGNL',
	JBT_TexGenPatched  = 'TGPT',
	JBT_Tev16          = 'TV16',
	JBT_Tev1           = 'TVB1',
	JBT_Tev2           = 'TVB2',
	JBT_Tev4           = 'TVB4',
	JBT_Tev8           = 'TVB8',
	JBT_TevNull        = 'TVNL',
	JBT_TevPatched     = 'TVPT'
};

enum J3DErrType { JET_Success = 0, JET_NoMatAnm, JET_LockedModelData, JET_NullBinRes, JET_OutOfMemory, JET_InvalidArg, JET_InvalidData };

extern u8 j3dTevSwapTableTable[1024];

struct J3DAlphaCompInfo {
	u8 _00[0x8]; // _00
};

struct J3DAlphaComp {
	inline J3DAlphaComp(J3DAlphaCompInfo& info)
	{
		_00 = (info._00[0] * 0x20) + (info._00[2] * 8) + (info._00[3]);
		_02 = info._00[1];
		_03 = info._00[4];
	}

	inline J3DAlphaComp()
	{
		_00 = -1;
		_02 = 0;
		_03 = 0;
	}

	u16 _00; // _00
	u8 _02;  // _02
	u8 _03;  // _03
};

struct J3DBlendInfo {
	u8 _00; // _00
	u8 _01; // _01
	u8 _02; // _02
	u8 _03; // _03
};

extern const J3DBlendInfo j3dDefaultBlendInfo;

struct J3DBlend {
	/** @fabricated */
	inline J3DBlend()
	    : _00(j3dDefaultBlendInfo._00)
	    , _01(j3dDefaultBlendInfo._01)
	    , _02(j3dDefaultBlendInfo._02)
	    , _03(j3dDefaultBlendInfo._03)
	{
	}

	/** @fabricated */
	inline J3DBlend(const J3DBlendInfo& info)
	    : _00(info._00)
	    , _01(info._01)
	    , _02(info._02)
	    , _03(info._03)
	{
	}

	u8 _00; // _00
	u8 _01; // _01
	u8 _02; // _02
	u8 _03; // _03
};

struct J3DZModeInfo {
	u8 _00; // _00
	u8 _01; // _01
	u8 _02; // _02
	u8 _03; // _03 - unknown/padding
};

extern const u16 j3dDefaultZModeID;

struct J3DZMode {
	/** @fabricated */
	J3DZMode()
	    : _00(j3dDefaultZModeID)
	{
	}

	/** @fabricated */
	J3DZMode(const J3DZModeInfo& info)
	    : _00(info._01 * 2 + info._00 * 0x10 + info._02)
	{
	}
	u16 _00; // _00
};

struct J3DColorChanInfo {
	u8 mEnable;    // _00
	u8 mMatSrc;    // _01
	u8 mLightMask; // _02
	u8 mDiffuseFn; // _03
	u8 mAttnFn;    // _04
	u8 mAmbSrc;    // _05
	u8 _06;        // _06
	u8 _07;        // _07
};

extern const J3DColorChanInfo j3dDefaultColorChanInfo;

inline u16 calcColorChanID(u16 enable, u8 matSrc, u8 lightMask, u8 diffuseFn, u8 attnFn, u8 ambSrc)
{
	u32 reg = 0;
	reg     = reg & ~0x0002 | enable << 1;
	reg     = reg & ~0x0001 | matSrc;
	reg     = reg & ~0x0040 | ambSrc << 6;
	reg     = reg & ~0x0004 | bool(lightMask & 0x01) << 2;
	reg     = reg & ~0x0008 | bool(lightMask & 0x02) << 3;
	reg     = reg & ~0x0010 | bool(lightMask & 0x04) << 4;
	reg     = reg & ~0x0020 | bool(lightMask & 0x08) << 5;
	reg     = reg & ~0x0800 | bool(lightMask & 0x10) << 11;
	reg     = reg & ~0x1000 | bool(lightMask & 0x20) << 12;
	reg     = reg & ~0x2000 | bool(lightMask & 0x40) << 13;
	reg     = reg & ~0x4000 | bool(lightMask & 0x80) << 14;
	reg     = reg & ~0x0180 | (attnFn == GX_AF_SPEC ? 0 : diffuseFn) << 7;
	reg     = reg & ~0x0200 | (attnFn != GX_AF_NONE) << 9;
	reg     = reg & ~0x0400 | (attnFn != GX_AF_SPEC) << 10;
	return reg;
}

inline u32 setChanCtrlMacro(u8 enable, GXColorSrc ambSrc, GXColorSrc matSrc, u32 lightMask, GXDiffuseFn diffuseFn, GXAttnFn attnFn)
{
	u32 ret = matSrc << 0; // Putting this as a separate statement fixes codegen, but regalloc is still wrong
	return ret | enable << 1 | (lightMask & 0x0F) << 2 | ambSrc << 6 | ((attnFn == GX_AF_SPEC) ? GX_DF_NONE : diffuseFn) << 7
	     | (attnFn != GX_AF_NONE) << 9 | (attnFn != GX_AF_SPEC) << 10 | (lightMask >> 4 & 0x0F) << 11;
}

struct J3DColorChan {
	J3DColorChan() { setColorChanInfo(j3dDefaultColorChanInfo); }

	J3DColorChan(const J3DColorChanInfo& info)
	{
		mChanCtrl = calcColorChanID(info.mEnable, info.mMatSrc, info.mLightMask, info.mDiffuseFn, info.mAttnFn,
		                            info.mAmbSrc == 0xFF ? 0 : info.mAmbSrc);
	}

	J3DColorChan(u16 id)
	    : mChanCtrl(id)
	{
	}

	void setColorChanInfo(const J3DColorChanInfo& info)
	{
		// Bug: It compares info.mAmbSrc (an 8 bit integer) with 0xFFFF instead of 0xFF.
		// This inline is only called by the default constructor J3DColorChan().
		// The J3DColorChan(const J3DColorChanInfo&) constructor does not call this inline, and instead duplicates the
		// same logic but without the bug.
		// See J3DMaterialFactory::newColorChan - both the bugged and correct behavior are present there, as it calls
		// both constructors.
		mChanCtrl = calcColorChanID(info.mEnable, info.mMatSrc, info.mLightMask, info.mDiffuseFn, info.mAttnFn,
		                            info.mAmbSrc == 0xFFFF ? 0 : info.mAmbSrc);
	}

	GXAttnFn getAttnFn()
	{
		u8 attnFnTbl[] = { GX_AF_NONE, GX_AF_SPEC, GX_AF_NONE, GX_AF_SPOT };
		return GXAttnFn(attnFnTbl[mChanCtrl >> 9 & 0x03]);
	}
	GXDiffuseFn getDiffuseFn() { return GXDiffuseFn(mChanCtrl >> 7 & 3); }
	u8 getLightMask() { return ((mChanCtrl >> 2 & 0x0f) | (mChanCtrl >> 11 & 0x0f) << 4); }
	void setLightMask(u8 mask)
	{
		mChanCtrl = (mChanCtrl & ~0x003c) | ((mask & 0x0F) << 2);
		mChanCtrl = (mChanCtrl & ~0x7800) | ((mask & 0xF0) << 7);
	}
	GXColorSrc getMatSrc() { return GXColorSrc(mChanCtrl >> 0 & 0x01); }
	GXColorSrc getAmbSrc() { return GXColorSrc(mChanCtrl >> 6 & 0x01); }
	u8 getEnable() { return !!(mChanCtrl & 0x02); }
	void load()
	{
		// something in here is not quite right still
		J3DGDWrite_u32(setChanCtrlMacro(getEnable(), getAmbSrc(), getMatSrc(), getLightMask(), getDiffuseFn(), getAttnFn()));
	}

	u16 mChanCtrl; // _00
};

// IDK what the structure of this is meant to be
struct J3DIndTevStageInfo {
	u8 mIndStage;  // _00
	u8 mIndFormat; // _01
	u8 mBiasSel;   // _02
	u8 mMtxSel;    // _03
	u8 mWrapS;     // _04
	u8 mWrapT;     // _05
	u8 mPrev;      // _06
	u8 mLod;       // _07
	u8 mAlphaSel;  // _08
};

extern const J3DIndTevStageInfo j3dDefaultIndTevStageInfo;

struct J3DIndTevStage {
	J3DIndTevStage()
	{
		mInfo = 0;
		setIndTevStageInfo(j3dDefaultIndTevStageInfo);
	}

	void setIndStage(u8 stage) { mInfo = mInfo & ~0x03 | stage; }
	void setIndFormat(u8 format) { mInfo = mInfo & ~0x0C | format << 2; }
	void setBiasSel(u8 sel) { mInfo = mInfo & ~0x70 | sel << 4; }
	void setAlphaSel(u8 sel) { mInfo = mInfo & ~0x0180 | sel << 7; }
	void setMtxSel(u8 sel) { mInfo = mInfo & ~0x1E00 | sel << 9; }
	void setWrapS(u8 wrap) { mInfo = mInfo & ~0xE000 | wrap << 13; }
	void setWrapT(u8 wrap) { mInfo = mInfo & ~0x070000 | wrap << 16; }
	void setLod(u8 lod) { mInfo = mInfo & ~0x080000 | lod << 19; }
	void setPrev(u8 prev) { mInfo = mInfo & ~0x100000 | prev << 20; }

	void setIndTevStageInfo(const J3DIndTevStageInfo& info)
	{
		setIndStage(info.mIndStage);
		setIndFormat(info.mIndFormat);
		setBiasSel(info.mBiasSel);
		setMtxSel(info.mMtxSel);
		setWrapS(info.mWrapS);
		setWrapT(info.mWrapT);
		setPrev(info.mPrev);
		setLod(info.mLod);
		setAlphaSel(info.mAlphaSel);
	}

	void load(u32 p1) { J3DGDWriteBPCmd(mInfo | (p1 + 16) << 24); }

	u32 mInfo; // _00, bitflag
};

struct J3DLightObj {
	JGeometry::TVec3f mPosition;  // _00
	JGeometry::TVec3f mDirection; // _0C
	_GXColor _18;                 // _18
	f32 _1C;                      // _1C
	f32 _20;                      // _20
	f32 _24;                      // _24
	f32 _28;                      // _28
	f32 _2C;                      // _2C
	f32 _30;                      // _30

	void load(u32) const;
};

struct J3DTevOrderInfo {
	inline J3DTevOrderInfo& operator=(const J3DTevOrderInfo& other)
	{
		mTexCoordID = other.mTexCoordID;
		mTexMapID   = other.mTexMapID;
		mChannelID  = other.mChannelID;
		return *this;
	}

	u8 mTexCoordID; // _00
	u8 mTexMapID;   // _01
	u8 mChannelID;  // _02
	u8 _03;         // _03 - unknown/padding
};

extern const J3DTevOrderInfo j3dDefaultTevOrderInfoNull;

struct J3DTevOrder : public J3DTevOrderInfo {
	J3DTevOrder() { *(J3DTevOrderInfo*)this = j3dDefaultTevOrderInfoNull; }

	/** @fabricated */
	inline J3DTevOrder(const J3DTevOrderInfo& info) { *(J3DTevOrderInfo*)this = info; }

	inline void setTexCoordID(GXTexCoordID id) { mTexCoordID = id; }
	inline void setTexMapID(GXTexMapID id) { mTexMapID = id; }
	inline void setChannelID(u8 id) { mChannelID = id; }

	J3DTevOrderInfo& getTevOrderInfo() { return *this; }
	u8 getTexMap() { return mTexMapID; }
};

// TODO: Determine if this needs packing pragmas to make it exactly 1 bytes
/**
 * @size{0x1}
 */
struct J3DTevSwapModeTable {
	J3DTevSwapModeTable();

	u8 getR() { return j3dTevSwapTableTable[mTevSwapID * 4]; }
	u8 getG() { return j3dTevSwapTableTable[mTevSwapID * 4 + 1]; }
	u8 getB() { return j3dTevSwapTableTable[mTevSwapID * 4 + 2]; }
	u8 getA() { return j3dTevSwapTableTable[mTevSwapID * 4 + 3]; }

	u8 mTevSwapID; // _00
};

struct J3DTevStage {
	J3DTevStage();
	J3DTevStage(const struct J3DTevStageInfo&);

	/** @fabricated */
	inline J3DTevStage& operator=(const J3DTevStage& other)
	{
		_01 = other._01;
		_02 = other._02;
		_03 = other._03;
		_05 = other._05;
		_06 = other._06;
		_07 = other._07;
		return *this;
	}

	void setTevStageInfo(const J3DTevStageInfo&);

	void load(u32) const
	{
		J3DGDWriteBPCmd(*(u32*)&_00);
		J3DGDWriteBPCmd(*(u32*)&_04);
	}

	u8 _00; // _00
	u8 _01; // _01
	u8 _02; // _02
	u8 _03; // _03
	u8 _04; // _04
	u8 _05; // _05
	u8 _06; // _06
	u8 _07; // _07
};

struct J3DDefaultTexCoordInfo {
	u8 mTexGenType; // _00
	u8 mTexGenSrc;  // _01
	u8 mTexGenMtx;  // _02
	u8 mPadding;    // _03
};

extern const J3DDefaultTexCoordInfo j3dDefaultTexCoordInfo[8];

struct J3DTexCoordInfo {

	// void operator=(J3DTexCoordInfo const& other) { *(u32*)this = *(u32*)&other; }

	u8 getTexGenType() { return mTexGenType; }
	u8 getTexGenSrc() { return mTexGenSrc; }
	u32 getTexGenMtx() { return mTexGenMtx & 0xFF; }
	void setTexGenMtx(u8 mtx) { mTexGenMtx = mtx; }

	u8 mTexGenType; // _00
	u8 mTexGenSrc;  // _01
	u8 mTexGenMtx;  // _02
};

struct J3DTexCoord : public J3DTexCoordInfo {

	J3DTexCoord();
	void setTexCoordInfo(J3DTexCoordInfo* info) { *(J3DTexCoordInfo*)this = *info; }

	void operator=(const J3DTexCoord& other) { *(J3DTexCoordInfo*)this = *(J3DTexCoordInfo*)&other; }

	u8 getTexGenType() { return mTexGenType; }
	u8 getTexGenSrc() { return mTexGenSrc; }
	u8 getTexGenMtx() { return mTexGenMtx & 0xFF; }
	u16 getTexMtxReg() { return mTexMtxReg & 0xFF; }

	void resetTexMtxReg() { mTexMtxReg = mTexGenMtx; }

	// _00-_04 = J3DTexCoordInfo
	u16 mTexMtxReg; // _04
};

struct J3DTextureSRTInfo {
	f32 mScaleX;       // _00
	f32 mScaleY;       // _04
	s16 mRotation;     // _08
	f32 mTranslationX; // _0C
	f32 mTranslationY; // _10
};

// hate this but whatever's in here can't have constructors bc of J3DTransform
struct J3DTransformInfo {
	inline J3DTransformInfo& operator=(const J3DTransformInfo& b)
	{
		mScale       = b.mScale;
		mRotation    = b.mRotation;
		mTranslation = b.mTranslation;
		return *this;
	}

	Vec mScale;       // _00
	SVec mRotation;   // _0C
	Vec mTranslation; // _14
};

extern const J3DTransformInfo j3dDefaultTransformInfo;

struct J3DNBTScaleInfo {
	inline void operator=(const J3DNBTScaleInfo& other)
	{
		mHasScale = other.mHasScale;
		mScale    = other.mScale;
	}

	u8 mHasScale; // _00
	Vec mScale;   // _04
};

extern const J3DNBTScaleInfo j3dDefaultNBTScaleInfo;

struct J3DNBTScale : public J3DNBTScaleInfo {
	J3DNBTScale() { *(J3DNBTScaleInfo*)this = j3dDefaultNBTScaleInfo; }

	J3DNBTScale(const J3DNBTScaleInfo& info) { *(J3DNBTScaleInfo*)this = info; }

	Vec* getScale() { return &mScale; }
};

struct J3DTexCoordScaleInfo {
	u16 _00; // _00
	u16 _02; // _02
	u16 _04; // _04
	u16 _06; // _06
};

void patchTexNo_PtrToIdx(u32 texID, const u16& idx);

void loadNBTScale(J3DNBTScale&);

void loadTexCoordGens(u32, J3DTexCoord*);

inline void loadTexCoordScale(GXTexCoordID coord, const J3DTexCoordScaleInfo& info)
{
	J3DGDSetTexCoordScale2(coord, info._00, info._04 == 1, 0, info._02, info._06 == 1, 0);
}

inline void loadTevColor(u32 reg, const J3DGXColorS10& color) { J3DGDSetTevColorS10(GXTevRegID(reg + 1), (GXColorS10)color); }

inline void loadTevKColor(u32 reg, const J3DGXColor& color) { J3DGDSetTevKColor(GXTevKColorID(reg), (GXColor)color); }

inline void loadZCompLoc(u8 compLoc) { J3DGDSetZCompLoc(compLoc); }

enum J3DTexDiffFlag { TexDiff_0 = 0, TexDiff_1 };

enum J3DDeformAttachFlag { DeformAttach_0 = 0, DeformAttach_1 = 1 };

extern const GXColor j3dDefaultColInfo;
extern const GXColor j3dDefaultAmbInfo;
extern const u8 j3dDefaultColorChanNum;
// extern const J3DGXColor j3dDefaultTevColor;
// extern const J3DGXColorS10 j3dDefaultTevKColor;
extern const GXColorS10 j3dDefaultTevColor;
extern const GXColor j3dDefaultTevKColor;

extern const u8 j3dDefaultTevSwapTableID;

#endif
