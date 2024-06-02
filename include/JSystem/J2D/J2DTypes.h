#ifndef _JSYSTEM_J2D_J2DTYPES_H
#define _JSYSTEM_J2D_J2DTYPES_H
/**
 * Header for J2D POD and nearly POD types, as well as defines, typedefs, and enums that aren't specific to a particular non-POD type.
 */
#include "Dolphin/vec.h"
#include "JSystem/J2D/J2DGXColorS10.h"
#include "JSystem/J2D/J2DIndBlock.h"
#include "JSystem/JUtility/TColor.h"
#include "types.h"

struct JUTTexture;

enum J2DBinding {
	J2DBIND_Bottom = 1,
	J2DBIND_Top    = 2,
	J2DBIND_Right  = 4,
	J2DBIND_Left   = 8,
	J2DBIND_Unk15  = 15,
};

enum J2DMirror {
	J2DMIRROR_Unk0 = 0,
	J2DMIRROR_Y    = 1,
	J2DMIRROR_X    = 2,
};

extern const u16 j2dDefaultAlphaCmp;

struct J2DAlphaCompInfo {
	u8 _00;   // _00
	u8 _01;   // _01
	u8 mRef0; // _02
	u8 mRef1; // _03
	u8 _04;   // _04
	u8 _05;   // _05
	u8 _06;   // _06
	u8 _07;   // _07
};

inline u16 J2DCalcAlphaCmp(s32 param_1, u32 param_2, u32 param_3) { return ((param_1) << 5) | ((param_2) << 3) | (param_3 & 0xff); }

struct J2DAlphaComp {
	J2DAlphaComp()
	{
		mAlphaCmp = j2dDefaultAlphaCmp;
		mRef0     = 0;
		mRef1     = 0;
	}
	J2DAlphaComp(const J2DAlphaCompInfo& info)
	{
		mAlphaCmp = J2DCalcAlphaCmp(info._00, info.mRef0, info.mRef1);
		mRef0     = info._01;
		mRef1     = info._04;
	}
	u8 getComp0() { return mAlphaCmp >> 5 & 7; }
	u8 getRef0() { return mRef0; }
	u8 getOp() { return mAlphaCmp >> 3 & 3; }
	u8 getComp1() { return mAlphaCmp & 7; }
	u8 getRef1() { return mRef1; }

	u16 mAlphaCmp; // _00
	u8 mRef0;      // _02
	u8 mRef1;      // _03
};

// struct J2DBlendInfo {
// 	u8 mType;       // _00
// 	u8 mSrcFactor;  // _01
// 	u8 mDestFactor; // _02
// };

// extern J2DBlendInfo j2dDefaultBlendInfo;

// struct J2DBlend {
// 	J2DBlend()
// 	{
// 		mType       = j2dDefaultBlendInfo.mType;
// 		mSrcFactor  = j2dDefaultBlendInfo.mSrcFactor;
// 		mDestFactor = j2dDefaultBlendInfo.mDestFactor;
// 	}

// 	J2DBlend(u8 type, u8 srcFactor, u8 destFactor, u8 op)
// 	{
// 		mType       = type;
// 		mSrcFactor  = srcFactor;
// 		mDestFactor = destFactor;
// 		mOp         = op;
// 	}

// 	void operator=(J2DBlend const& other)
// 	{
// 		mType       = other.mType;
// 		mSrcFactor  = other.mSrcFactor;
// 		mDestFactor = other.mDestFactor;
// 		mOp         = other.mOp;
// 	}

// 	inline void set(J2DBlend blend)
// 	{
// 		mType       = blend.mType;
// 		mSrcFactor  = blend.mSrcFactor;
// 		mDestFactor = blend.mDestFactor;
// 		mOp         = blend.mOp;
// 	}

// 	inline void set(J2DBlendInfo info)
// 	{
// 		mType = info.mType;
// 		mSrcFactor = info.mSrcFactor;
// 		mDestFactor = info.mDestFactor;
// 		mOp = 0;
// 	}

//     u8 getType() { return mBlendInfo.mType; }
//     u8 getSrcFactor() { return mBlendInfo.mSrcFactor; }
//     u8 getDstFactor() { return mBlendInfo.mDestFactor; }
//     u8 getOp() { return mBlendInfo.mOp; }

// 	u8 mType;       // _00
// 	u8 mSrcFactor;  // _01
// 	u8 mDestFactor; // _02
// 	u8 mOp;         // _03
// };

struct J2DGrafBlend {
	u8 mType;       // _00
	u8 mSrcFactor;  // _01
	u8 mDestFactor; // _02
};

struct J2DBlendInfo {
	// J2DBlendInfo() { }

	void operator=(J2DBlendInfo const& other)
	{
		mType       = other.mType;
		mSrcFactor  = other.mSrcFactor;
		mDestFactor = other.mDestFactor;
		mOp         = other.mOp;
	}

	// J2DBlendInfo(u8 type, u8 src, u8 dst, u8 op)
	// {
	// 	mType       = type;
	// 	mSrcFactor  = src;
	// 	mDestFactor = dst;
	// 	mOp         = op;
	// }

	u8 mType;       // _00
	u8 mSrcFactor;  // _01
	u8 mDestFactor; // _02
	u8 mOp;         // _03
};

extern const J2DBlendInfo j2dDefaultBlendInfo;

struct J2DBlend : public J2DBlendInfo {
	J2DBlend() { *(J2DBlendInfo*)this = j2dDefaultBlendInfo; }
	J2DBlend(const J2DBlendInfo& info) { *(J2DBlendInfo*)this = info; }
	J2DBlend(u8 type, u8 src, u8 dst, u8 op)
	{
		mType       = type;
		mSrcFactor  = src;
		mDestFactor = dst;
		mOp         = op;
	}
	void setBlendInfo(const J2DBlendInfo& info) { *(J2DBlendInfo*)this = info; }
	u8 getType() { return mType; }
	u8 getSrcFactor() { return mSrcFactor; }
	u8 getDstFactor() { return mDestFactor; }
	u8 getOp() { return mOp; }

	inline void set(J2DBlend blend)
	{
		mType       = blend.mType;
		mSrcFactor  = blend.mSrcFactor;
		mDestFactor = blend.mDestFactor;
		mOp         = blend.mOp;
	}

	// _00 = J2DBlendInfo
};

struct J2DColorChanInfo {
	u8 _00; // _00
	u8 _01; // _01
	u8 _02; // _02, padding?
	u8 _03; // _03, padding?
};

inline u8 J2DCalcColorChanID(u8 id) { return id; }
extern const J2DColorChanInfo j2dDefaultColorChanInfo;

/**
 * @size{0x2}
 */
struct J2DColorChan {
	J2DColorChan() { setColorChanInfo(j2dDefaultColorChanInfo); }
	J2DColorChan(const J2DColorChanInfo& info) { mColorChan = J2DCalcColorChanID(info._01); }
	void setColorChanInfo(const J2DColorChanInfo& info) { mColorChan = J2DCalcColorChanID(info._01); }
	u16 getMatSrc() const { return mColorChan & 1; }

	u16 mColorChan; // _00
};

struct J2DTevOrderInfo {
	u8 mTexCoord; // _00
	u8 mTexMap;   // _01
	u8 mColor;    // _02
	u8 _03;       // _03

	J2DTevOrderInfo& operator=(const J2DTevOrderInfo& other)
	{
		mTexCoord = other.mTexCoord;
		mTexMap   = other.mTexMap;
		mColor    = other.mColor;
		return *this;
	}
};

extern const J2DTevOrderInfo j2dDefaultTevOrderInfoNull;

struct J2DTevOrder {
	J2DTevOrder() { mTevOrderInfo = j2dDefaultTevOrderInfoNull; }

	J2DTevOrder(const J2DTevOrderInfo& info) { *(J2DTevOrderInfo*)this = info; }

	/** @fabricated */
	inline J2DTevOrder(u8 texCoord, u8 texMap, u8 color)
	{
		mTevOrderInfo.mTexCoord = texCoord;
		mTevOrderInfo.mTexMap   = texMap;
		mTevOrderInfo.mColor    = color;
	}

	/** @fabricated */
	inline J2DTevOrder& operator=(const J2DTevOrderInfo& other)
	{
		mTevOrderInfo = other;
		return *this;
	}

	/** @fabricated */
	inline J2DTevOrder& operator=(const J2DTevOrder& other)
	{
		mTevOrderInfo = other.mTevOrderInfo;
		return *this;
	}

	void setTevOrderInfo(const J2DTevOrderInfo& info) { mTevOrderInfo = info; }
	inline GXChannelID getColor() const { return (GXChannelID)mTevOrderInfo.mColor; }
	inline GXTexMapID getTexMap() const { return (GXTexMapID)mTevOrderInfo.mTexMap; }
	inline GXTexCoordID getTexCoord() const { return (GXTexCoordID)mTevOrderInfo.mTexCoord; }

	J2DTevOrderInfo mTevOrderInfo; // _00
};

struct J2DTevStageInfo {
	u8 _00;     // _00
	u8 mColorA; // _01
	u8 mColorB; // _02
	u8 mColorC; // _03
	u8 mColorD; // _04
	u8 mCOp;    // _05
	u8 mCBias;  // _06
	u8 mCScale; // _07
	u8 mCClamp; // _08
	u8 mCReg;   // _09
	u8 mAlphaA; // _0A
	u8 mAlphaB; // _0B
	u8 mAlphaC; // _0C
	u8 mAlphaD; // _0D
	u8 mAOp;    // _0E
	u8 mABias;  // _0F
	u8 mAScale; // _10
	u8 mAClamp; // _11
	u8 mAReg;   // _12
	u8 _13;     // _13
};

struct J2DTevSwapModeInfo {
	u8 mRasSel; // _00
	u8 mTexSel; // _01
	u8 _02;     // _02
	u8 _03;     // _03
};

struct J2DTevSwapModeTableInfo {
	u8 mR; // _00
	u8 mG; // _01
	u8 mB; // _02
	u8 mA; // _03
};

inline u8 J2DCalcTevSwapTable(u32 r, u32 g, u32 b, u32 a) { return (r << 6) + (g << 4) + (b << 2) + a; }

extern const J2DTevSwapModeInfo j2dDefaultTevSwapMode;
extern const J2DTevSwapModeTableInfo j2dDefaultTevSwapModeTable;
extern const u8 j2dDefaultTevSwapTable;

struct J2DTevSwapModeTable {
	J2DTevSwapModeTable() { _00 = j2dDefaultTevSwapTable; }

	J2DTevSwapModeTable(const J2DTevSwapModeTableInfo& info) { _00 = J2DCalcTevSwapTable(info.mR, info.mG, info.mB, info.mA); }

	void setTevSwapModeTableInfo(const J2DTevSwapModeTableInfo& info)
	{
		u8 r = info.mR;
		u8 g = info.mG;
		u8 b = info.mB;
		u8 a = info.mA;
		_00  = J2DCalcTevSwapTable(r, g, b, a);
	}

	u8 getR() { return _00 >> 6 & 3; }
	u8 getG() { return _00 >> 4 & 3; }
	u8 getB() { return _00 >> 2 & 3; }
	u8 getA() { return _00 & 3; }

	u8 _00; // _00
};

struct J2DTevStage {
	J2DTevStage(J2DTevStageInfo const& info)
	{
		setTevStageInfo(info);
		setTevSwapModeInfo(j2dDefaultTevSwapMode);
		// TODO: this is here to force this to not inline - it's probably (actually) an inline depth issue.
		// clang-format off
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; 
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; 
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; 
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; 
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; 
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; 
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; 
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; 
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; 
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; 
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; 
		(void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0; (void*)0;
		// clang-format on
	}

	J2DTevStage();

	void setTevStageInfo(J2DTevStageInfo const&);

	void setStageNo(u32 param_0)
	{
		_00 = (param_0 << 1) - 0x40;
		_04 = (param_0 << 1) - 0x3f;
	}

	void setTevSwapModeInfo(const J2DTevSwapModeInfo& swapInfo)
	{
		setTexSel(swapInfo.mTexSel);
		setRasSel(swapInfo.mRasSel);
	}

	void setTexSel(u8 texSel) { _07 = (_07 & ~0xC) | (texSel << 2); }

	void setRasSel(u8 rasSel) { _07 = (_07 & ~0x3) | (u8)rasSel; }

	void setColorABCD(u8 a, u8 b, u8 c, u8 d)
	{
		setTevColorAB(a, b);
		setTevColorCD(c, d);
	}

	void setTevColorAB(u8 a, u8 b) { _02 = a << 4 | b; }
	void setTevColorCD(u8 c, u8 d) { _03 = c << 4 | d; }

	void setTevColorOp(u8 op, u8 bias, u8 scale, u8 clamp, u8 reg)
	{
		_01 = _01 & ~0x04 | op << 2;
		if (op <= 1) {
			_01 = _01 & ~0x30 | scale << 4;
			_01 = _01 & ~0x03 | bias;
		} else {
			_01 = _01 & ~0x30 | (op >> 1 & 3) << 4;
			_01 = _01 & ~0x03 | 3;
		}
		_01 = _01 & ~0x08 | clamp << 3;
		_01 = _01 & ~0xc0 | reg << 6;
	}

	void setAlphaABCD(u8 a, u8 b, u8 c, u8 d)
	{
		setAlphaA(a);
		setAlphaB(b);
		setAlphaC(c);
		setAlphaD(d);
	}

	void setAlphaA(u8 a) { _06 = _06 & ~0xe0 | a << 5; }
	void setAlphaB(u8 b) { _06 = _06 & ~0x1c | b << 2; }
	void setAlphaC(u8 c)
	{
		_06 = _06 & ~0x03 | c >> 1;
		_07 = _07 & ~0x80 | c << 7;
	}
	void setAlphaD(u8 d) { _07 = _07 & ~0x70 | d << 4; }
	void setTevAlphaOp(u8 op, u8 bias, u8 scale, u8 clamp, u8 reg)
	{
		_05 = _05 & ~0x04 | op << 2;
		if (op <= 1) {
			_05 = _05 & ~0x03 | bias;
			_05 = _05 & ~0x30 | scale << 4;
		} else {
			_05 = _05 & ~0x30 | (op >> 1 & 3) << 4;
			_05 = _05 & ~0x03 | 3;
		}
		_05 = _05 & ~0x08 | clamp << 3;
		_05 = _05 & ~0xc0 | reg << 6;
	}

	u8 getColorA() { return (_02 & 0xf0) >> 4; }
	u8 getColorB() { return _02 & 0x0f; }
	u8 getColorC() { return (_03 & 0xf0) >> 4; }
	u8 getColorD() { return _03 & 0x0f; }
	u8 getAlphaA() { return (_06 & 0xe0) >> 5; }
	u8 getAlphaB() { return (_06 & 0x1c) >> 2; }
	u8 getAlphaC() { return (_06 & 0x03) << 1 | (_07 & 0x80) >> 7; }
	u8 getAlphaD() { return (_07 & 0x70) >> 4; }
	u8 getCOp()
	{
		if (getCBias() != 3) {
			return (_01 & 4) >> 2;
		}
		return ((_01 & 4) >> 2) + 8 + ((_01 & 0x30) >> 3);
	}
	u8 getCBias() { return _01 & 0x03; }
	u8 getCScale() { return (_01 & 0x30) >> 4; }
	u8 getCClamp() { return (_01 & 0x08) >> 3; }
	u8 getCReg() { return (_01 & 0xc0) >> 6; }
	u8 getAOp()
	{
		if (getABias() != 3) {
			return (_05 & 4) >> 2;
		}
		return ((_05 & 4) >> 2) + 8 + ((_05 & 0x30) >> 3);
	}
	u8 getABias() { return _05 & 0x03; }
	u8 getAScale() { return (_05 & 0x30) >> 4; }
	u8 getAClamp() { return (_05 & 0x08) >> 3; }
	u8 getAReg() { return (_05 & 0xc0) >> 6; }
	u8 getRasSel() { return _07 & 3; }
	u8 getTexSel() { return (_07 & 0x0c) >> 2; }

	void operator=(J2DTevStage const& other)
	{
		_01 = other._01;
		_02 = other._02;
		_03 = other._03;
		_05 = other._05;
		_06 = other._06;
		_07 = other._07;
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

struct J2DIndTevStageInfo {
	inline void operator=(const J2DIndTevStageInfo& other)
	{
		mIndStage  = other.mIndStage;
		mIndFormat = other.mIndFormat;
		mBiasSel   = other.mBiasSel;
		mMtxSel    = other.mMtxSel;
		mWrapS     = other.mWrapS;
		mWrapT     = other.mWrapT;
		mPrev      = other.mPrev;
		mLod       = other.mLod;
		mAlphaSel  = other.mAlphaSel;
	}

	u8 mIndStage;  // _00
	u8 mIndFormat; // _01
	u8 mBiasSel;   // _02
	u8 mMtxSel;    // _03
	u8 mWrapS;     // _04
	u8 mWrapT;     // _05
	u8 mPrev;      // _06
	u8 mLod;       // _07
	u8 mAlphaSel;  // _08
	u8 _09;        // _09
	u8 _0A;        // _0A
	u8 _0B;        // _0B
};

inline u32 J2DCalcIndTevStage(J2DIndTevStageInfo info)
{
	return (info.mAlphaSel << 22) | (info.mLod << 21) | (info.mPrev << 20) | (info.mMtxSel << 16) | (info.mWrapT << 11) | (info.mWrapS << 8)
	     | (info.mBiasSel << 4) | (info.mIndFormat << 2) | (info.mIndStage);
}

extern const J2DIndTevStageInfo j2dDefaultIndTevStageInfo;

struct J2DIndTevStage {
	J2DIndTevStage() { mFlags = J2DCalcIndTevStage(j2dDefaultIndTevStageInfo); }

	J2DIndTevStage(const J2DIndTevStageInfo& info) { mFlags = J2DCalcIndTevStage(info); }

	void load(u8);

	GXIndTexStageID getIndStage() const { return (GXIndTexStageID)u8(mFlags & 0x03); }
	GXIndTexFormat getIndFormat() const { return (GXIndTexFormat)u8((mFlags >> 2) & 0x03); }
	GXIndTexBiasSel getBiasSel() const { return (GXIndTexBiasSel)u8((mFlags >> 4) & 0x07); }
	GXIndTexWrap getWrapS() const { return (GXIndTexWrap)u8((mFlags >> 8) & 0x07); }
	GXIndTexWrap getWrapT() const { return (GXIndTexWrap)u8((mFlags >> 11) & 0x07); }
	GXIndTexMtxID getMtxSel() const { return (GXIndTexMtxID)u8((mFlags >> 16) & 0x0F); }
	GXBool getPrev() const { return (GXBool)u8((mFlags >> 20) & 0x01); }
	GXBool getLod() const { return (GXBool)u8((mFlags >> 21) & 0x01); }
	GXIndTexAlphaSel getAlphaSel() const { return (GXIndTexAlphaSel)u8((mFlags >> 22) & 0x03); }

	void setIndTevStageInfo(const J2DIndTevStageInfo& info) { mFlags = J2DCalcIndTevStage(info); }

	u32 mFlags; // _00
};

struct J2DTexCoordInfo {
	u8 mTexGenType; // _00
	u8 mTexGenSrc;  // _01
	u8 mTexGenMtx;  // _02

	u8 _03; // _03 - padding?

	J2DTexCoordInfo& operator=(const J2DTexCoordInfo& other)
	{
		this->mTexGenType = other.mTexGenType;
		this->mTexGenSrc  = other.mTexGenSrc;
		this->mTexGenMtx  = other.mTexGenMtx;
		return *this;
	}
};

extern const J2DTexCoordInfo j2dDefaultTexCoordInfo[8];

struct J2DTexCoord {
	J2DTexCoord() { mTexCoordInfo = j2dDefaultTexCoordInfo[0]; }
	// J2DTexCoordInfo _00;

	J2DTexCoord(const J2DTexCoordInfo& info) { *(J2DTexCoordInfo*)this = info; }

	void setTexCoordInfo(const J2DTexCoordInfo& info) { mTexCoordInfo = info; }
	s32 getTexGenType() { return mTexCoordInfo.mTexGenType; }
	s32 getTexGenSrc() { return mTexCoordInfo.mTexGenSrc; }
	s32 getTexGenMtx() { return mTexCoordInfo.mTexGenMtx; }

	void setTexGenMtx(u8 mtx) { mTexCoordInfo.mTexGenMtx = mtx; }

	J2DTexCoordInfo mTexCoordInfo; // _00
};

struct J2DTextureSRTInfo {
	f32 mScaleX;       // _00
	f32 mScaleY;       // _04
	f32 mRotationDeg;  // _08, rotation in degrees
	f32 mTranslationX; // _0C
	f32 mTranslationY; // _10
};

extern const J2DTevStageInfo j2dDefaultTevStageInfo;
extern const GXColor j2dDefaultColInfo;
extern const GXColorS10 j2dDefaultTevColor;
extern const GXColor j2dDefaultTevKColor;

extern const u8 j2dDefaultDither;

enum J2DTextBoxHBinding {
	J2DHBIND_Center = 0,
	J2DHBIND_Right  = 1,
	J2DHBIND_Left   = 2,
};

enum J2DTextBoxVBinding {
	J2DVBIND_Center = 0,
	J2DVBIND_Bottom = 1,
	J2DVBIND_Top    = 2,
};

// extern const J2DTexCoordInfo j2dDefaultTexCoordInfo[8];

#endif
