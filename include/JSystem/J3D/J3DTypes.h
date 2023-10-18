#ifndef _JSYSTEM_J3D_J3DTYPES_H
#define _JSYSTEM_J3D_J3DTYPES_H

#include "Dolphin/gx.h"
#include "Dolphin/vec.h"
#include "JSystem/J3D/J3DGXColor.h"
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

struct J3DAlphaComp {
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

struct J3DColorChan {
	J3DColorChan();

	u16 _00;
};

// IDK what the structure of this is meant to be
struct J3DIndTevStageInfo {
	u8 _00 : 2;
};

extern const J3DIndTevStageInfo j3dDefaultIndTevStageInfo[12];

struct J3DIndTevStage {
	J3DIndTevStage();

	u32 _00 : 10;
	// u32 _01 : 1;
	// u32 _02 : 1;
	// u32 _03 : 1;
	// u32 _04 : 1;
	// u32 _05 : 1;
	// u32 _06 : 1;
	// u32 _07 : 1;
	// u32 _08 : 1;
	// u32 _09 : 1;
	// u32 _0A : 1;
	u32 _0B : 1;
	u32 _0C : 1;
	u32 _0D : 3;
	u32 _10 : 3;
	u32 _13 : 4;
	u32 _17 : 2;
	u32 _19 : 3;
	u32 _1C : 2;
	u32 _1E : 2;
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
	// inline GXTexCoordID getTexCoordID() const { return (GXTexCoordID)mData[0]; }
	// inline GXTexMapID getTexMapID() const { return (GXTexMapID)mData[1]; }
	// inline u8 getChannelID() const { return mData[2]; }
	u8 mData[3]; // _00

	// inline GXTexCoordID getTexCoordID() const { return (GXTexCoordID)mTexCoordID; }
	// inline GXTexMapID getTexMapID() const { return (GXTexMapID)mTexMapID; }
	// inline u8 getChannelID() const { return mChannelID; }

	// u8 mTexCoordID; // _00
	// u8 mTexMapID;   // _01
	// u8 mChannelID;  // _02

	// u8 _03;          // _03 - unknown/padding
};

extern const J3DTevOrderInfo j3dDefaultTevOrderInfoNull;

struct J3DTevOrder {
	J3DTevOrder()
	// : mData(j3dDefaultTevOrderInfoNull.mData)
	// : mTexCoordID(j3dDefaultTevOrderInfoNull.mTexCoordID)
	// , mTexMapID(j3dDefaultTevOrderInfoNull.mTexMapID)
	// , mChannelID(j3dDefaultTevOrderInfoNull.mChannelID)
	{
		// for (int i = 0; i < 3; i++) {
		// 	mData[i] = j3dDefaultTevOrderInfoNull.mData[i];
		// }
		const J3DTevOrderInfo& info = j3dDefaultTevOrderInfoNull;
		mTexCoordID                 = info.mData[0];
		mTexMapID                   = info.mData[1];
		mChannelID                  = info.mData[2];
		// mTexCoordID                = info.mTexCoordID;
		// mTexMapID                  = info.mTexMapID;
		// mChannelID                 = info.mChannelID;
		// setTexCoordID(info.getTexCoordID());
		// setTexMapID(info.getTexMapID());
		// setChannelID(info.getChannelID());

		// *this = static_cast<const J3DTevOrder>(j3dDefaultTevOrderInfoNull);
		// setTexCoordID(j3dDefaultTevOrderInfoNull.getTexCoordID());
		// setTexMapID(j3dDefaultTevOrderInfoNull.getTexMapID());
		// setChannelID(j3dDefaultTevOrderInfoNull.getChannelID());
	}

	/** @fabricated */
	inline J3DTevOrder(const J3DTevOrderInfo& info)
	    // : mTexCoordID(info.mTexCoordID)
	    // , mTexMapID(info.mTexMapID)
	    // , mChannelID(info.mChannelID)
	    : mTexCoordID(info.mData[0])
	    , mTexMapID(info.mData[1])
	    , mChannelID(info.mData[2])
	{
		// for (int i = 0; i < 3; i++) {
		// 	mData[i] = info.mData[i];
		// }
	}

	/** @fabricated */
	inline J3DTevOrder& operator=(const J3DTevOrder& other)
	{
		mTexCoordID = other.mTexCoordID;
		mTexMapID   = other.mTexMapID;
		mChannelID  = other.mChannelID;
		// for (int i = 0; i < 3; i++) {
		// 	mData[i] = other.mData[i];
		// }
		return *this;
	}

	inline void setTexCoordID(GXTexCoordID id) { mTexCoordID = id; }
	inline void setTexMapID(GXTexMapID id) { mTexMapID = id; }
	inline void setChannelID(u8 id) { mChannelID = id; }

	u8 mTexCoordID; // _00
	u8 mTexMapID;   // _01
	u8 mChannelID;  // _02
	u8 _03;

	// inline void setTexCoordID(GXTexCoordID id) { mData[0] = id; }
	// inline void setTexMapID(GXTexMapID id) { mData[1] = id; }
	// inline void setChannelID(u8 id) { mData[2] = id; }

	// u8 mData[3]; // _00
};

// TODO: Determine if this needs packing pragmas to make it exactly 1 bytes
/**
 * @size{0x1}
 */
struct J3DTevSwapModeTable {
	J3DTevSwapModeTable();

	u8 _00;
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
	u8 mTexGenType; // _00
	u8 mTexGenSrc;  // _01
	u8 mTexGenMtx;  // _02
	void operator=(J3DTexCoordInfo const& other) { *(u32*)this = *(u32*)&other; }
};

struct J3DTexCoord : public J3DTexCoordInfo {

	J3DTexCoord();
	void setTexCoordInfo(J3DTexCoordInfo* param_1) { *(J3DTexCoordInfo*)this = *param_1; }

	u8 getTexGenType() { return mTexGenType; }
	u8 getTexGenSrc() { return mTexGenSrc; }
	u8 getTexGenMtx() { return mTexGenMtx & 0xff; }
	u16 getTexMtxReg() { return mTexMtxReg & 0xff; }

	void resetTexMtxReg() { mTexMtxReg = mTexGenMtx; }

	u16 mTexMtxReg; // _04
};

struct J3DTextureSRTInfo {
	f32 mScaleX;       // _00
	f32 mScaleY;       // _04
	s16 mRotation;     // _08
	f32 mTranslationX; // _0C
	f32 mTranslationY; // _10
};

struct J3DTransformInfo {
	JGeometry::TVec3f mScale;        // _00
	JGeometry::TVec3<s16> mRotation; // _0C
	JGeometry::TVec3f mTranslation;  // _14
};

extern const J3DTransformInfo j3dDefaultTransformInfo;

struct J3DNBTScaleInfo {
	u8 _00;                // _00
	JGeometry::TVec3f _04; // _04

	// f32 _08; // _08
	// f32 _0C; // _0C
};

extern const J3DNBTScaleInfo j3dDefaultNBTScaleInfo;

struct J3DNBTScale {
	inline J3DNBTScale()
	    : _00(j3dDefaultNBTScaleInfo._00)
	    , _04(j3dDefaultNBTScaleInfo._04)
	{
		// _04.x = j3dDefaultNBTScaleInfo._04;
		// _04.y = j3dDefaultNBTScaleInfo._08;
		// _04.z = j3dDefaultNBTScaleInfo._0C;
	}

	/** @fabricated */
	inline J3DNBTScale(const J3DNBTScaleInfo& info)
	    : _00(info._00)
	    , _04(info._04)
	{
		// _04.x = info._04;
		// _04.y = info._08;
		// _04.z = info._0C;
	}

	u8 _00; // _00
	JGeometry::TVec3f _04;
};
void loadNBTScale(J3DNBTScale&);

void loadTexCoordGens(u32, J3DTexCoord*);

enum J3DTexDiffFlag { TexDiff_0 = 0, TexDiff_1 };

enum J3DDeformAttachFlag { DeformAttach_0 = 0, DeformAttach_1 = 1 };

extern const GXColor j3dDefaultColInfo;
extern const u32 j3dDefaultAmbInfo;
extern const u8 j3dDefaultColorChanNum;
// extern const J3DGXColor j3dDefaultTevColor;
// extern const J3DGXColorS10 j3dDefaultTevKColor;
extern const GXColorS10 j3dDefaultTevColor;
extern const GXColor j3dDefaultTevKColor;

extern const u8 j3dDefaultTevSwapTableID;

#endif
