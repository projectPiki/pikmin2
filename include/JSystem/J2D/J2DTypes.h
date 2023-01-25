#ifndef _JSYSTEM_J2D_J2DTYPES_H
#define _JSYSTEM_J2D_J2DTYPES_H
/**
 * Header for J2D POD and nearly POD types, as well as defines, typedefs, and enums that aren't specific to a particular non-POD type.
 */
#include "Dolphin/vec.h"
#include "JSystem/J2D/J2DGXColorS10.h"
#include "JSystem/J2D/J2DIndBlock.h"
#include "JSystem/JUT/TColor.h"
#include "types.h"

struct JUTTexture;

enum J2DBinding {
	J2DBIND_Unk15 = 15,
};

enum J2DMirror {
	J2DMIRROR_Unk0 = 0,
};

extern u16 j2dDefaultAlphaCmp;

struct J2DAlphaCompInfo {
	// TODO: work out what goes in this
};

struct J2DAlphaComp {
	/** @fabricated */
	J2DAlphaComp()
	    : m_alphaComp(j2dDefaultAlphaCmp)
	    , m_ref0(0)
	    , m_ref1(0)
	{
	}

	u16 m_alphaComp; // _00
	u8 m_ref0;       // _02
	u8 m_ref1;       // _03
};

struct J2DBlendInfo {
	J2DBlendInfo() { }

	J2DBlendInfo(u8 type, u8 srcFactor, u8 destFactor)
	{
		m_type       = type;
		m_srcFactor  = srcFactor;
		m_destFactor = destFactor;
	}

	void operator=(J2DBlendInfo const& other)
	{
		m_type       = other.m_type;
		m_srcFactor  = other.m_srcFactor;
		m_destFactor = other.m_destFactor;
	}

	u8 m_type;       // _00
	u8 m_srcFactor;  // _01
	u8 m_destFactor; // _02
};

extern J2DBlendInfo j2dDefaultBlendInfo;

struct J2DBlend {
	J2DBlend() { m_blendInfo = j2dDefaultBlendInfo; }

	J2DBlendInfo m_blendInfo; // _00
	u8 m_op;                  // _03
};

struct J2DColorChanInfo {
	u8 _00; // _00, should these be one u16?
	u8 _01; // _01
};

extern J2DColorChanInfo j2dDefaultColorChanInfo;

/**
 * @size{0x2}
 */
struct J2DColorChan {
	J2DColorChan() { m_data = j2dDefaultColorChanInfo._01; }

	u16 m_data; // _00, should this be J2DColorChanInfo?
};

struct J2DTevOrderInfo {
	u8 m_texCoord; // _00
	u8 m_texMap;   // _01
	u8 m_color;    // _02
};

extern J2DTevOrderInfo j2dDefaultTevOrderInfoNull;

struct J2DTevOrder {
	J2DTevOrder() { m_tevOrderInfo = j2dDefaultTevOrderInfoNull; }

	/** @fabricated */
	inline J2DTevOrder(u8 texCoord, u8 texMap, u8 color)
	{
		m_tevOrderInfo.m_texCoord = texCoord;
		m_tevOrderInfo.m_texMap   = texMap;
		m_tevOrderInfo.m_color    = color;
	}

	/** @fabricated */
	inline J2DTevOrder& operator=(const J2DTevOrderInfo& other)
	{
		m_tevOrderInfo = other;
		return *this;
	}

	/** @fabricated */
	inline J2DTevOrder& operator=(const J2DTevOrder& other)
	{
		m_tevOrderInfo = other.m_tevOrderInfo;
		return *this;
	}

	inline GXChannelID getColor() const { return (GXChannelID)m_tevOrderInfo.m_color; }
	inline GXTexMapID getTexMap() const { return (GXTexMapID)m_tevOrderInfo.m_texMap; }
	inline GXTexCoordID getTexCoord() const { return (GXTexCoordID)m_tevOrderInfo.m_texCoord; }

	J2DTevOrderInfo m_tevOrderInfo; // _00
	u8 _03;                         // _03
};

struct J2DTevStageInfo {
	u8 _00;   // _00
	bool _01; // _01
	u8 _02;   // _02
	bool _03; // _03
	u8 _04;   // _04
	u8 _05;   // _05
	u8 _06;   // _06
	u8 _07;   // _07
	bool _08; // _08
	u8 _09;   // _09
	u8 _0A;   // _0A
	u8 _0B;   // _0B
	u8 _0C;   // _0C
	u8 _0D;   // _0D
	u8 _0E;   // _0E
	u8 _0F;   // _0F
	u8 _10;   // _10
	bool _11; // _11
	u8 _12;   // _12
	u8 _13;   // _13
};

#pragma reverse_bitfields on
struct J2DTevStage_0x1 {
	// LSB
	u8 _0 : 2;
	u8 _2 : 1;
	u8 _3 : 1;
	u8 _4 : 2;
	u8 _6 : 2;
	// MSB
};

struct J2DTevStage_0x4 {
	// LSB
	u8 _0 : 1;
	u8 _1 : 3;
	u8 _4 : 3;
	u8 _7 : 3;
	u8 _A : 3;
	u8 _D : 3;
	u8 _10 : 2;
	u8 _12 : 1;
	u8 _13 : 1;
	u8 _14 : 2;
	u8 _16 : 2;
	// u8 _2 : 2;
	// u8 _0 : 2;
	// MSB
};
struct J2DTevStage {
	J2DTevStage();

	void setTevStageInfo(const J2DTevStageInfo& info);

	/** @fabricated */
	inline J2DTevStage& operator=(const J2DTevStage& other)
	{
		_01            = other._01;
		_02            = other._02;
		_03            = other._03;
		_04.asBytes[1] = other._04.asBytes[1];
		_04.asBytes[2] = other._04.asBytes[2];
		_04.asBytes[3] = other._04.asBytes[3];
		return *this;
	}

	u8 _00;              // _00
	J2DTevStage_0x1 _01; // _01
	u8 _02;              // _02
	u8 _03;              // _03
	// u8 _04;              // _04
	union {
		J2DTevStage_0x4 asStruct;
		u8 asBytes[4];
	} _04; // _04

	// J2DTevStage_0x1 _05; // _05
	// J2DTevStage_0x6 _06; // _06

	// struct J2DTevStage_0x1 {
	// 	// MSB
	// 	u8 _6 : 2;
	// 	u8 _4 : 2;
	// 	bool _3 : 1;
	// 	bool _2 : 1;
	// 	u8 _0 : 2;
	// 	// LSB
	// } _01;               // _01
	// u8 _02;              // _02
	// u8 _03;              // _03
	// u8 _04;              // _04
	// J2DTevStage_0x1 _05; // _05
	// struct J2DTevStage_0x6 {
	// 	// MSB
	// 	u8 _D : 3;
	// 	u8 _A : 3;
	// 	u8 _7 : 3;
	// 	u8 _4 : 3;
	// 	u8 _1 : 3;
	// 	u8 _0 : 1;
	// 	// u8 _2 : 2;
	// 	// u8 _0 : 2;
	// 	// LSB
	// } _06; // _06
};

struct J2DTevSwapModeInfo {
	u8 _00;
	u8 _01;
};

struct J2DTevSwapModeTableInfo {
	// TODO: work out what goes in this
};

// struct TwoBit {
// 	u8 _00 : 2;
// };

struct J2DTevSwapModeTable {
	J2DTevSwapModeTable();

	/** @fabricated */
	inline J2DTevSwapModeTable(u8 p1, u8 p2, u8 p3, u8 p4)
	{
		_0 = p1;
		_2 = p2;
		_4 = p3;
		_6 = p4;
	}

	// // LSB
	u8 _0 : 2;
	u8 _2 : 2;
	u8 _4 : 2;
	u8 _6 : 2;
	// // MSB

	// LSB
	// TwoBit _0[4];
	// MSB
};
#pragma reverse_bitfields reset

struct J2DIndTevStage {
	J2DIndTevStage();

	void load(u8);

	GXIndTexStageID getIndStage() const { return (GXIndTexStageID)(m_flags & 0x03); }
	GXIndTexFormat getIndFormat() const { return (GXIndTexFormat)((m_flags >> 2) & 0x03); }
	GXIndTexBiasSel getBiasSel() const { return (GXIndTexBiasSel)((m_flags >> 4) & 0x07); }
	GXIndTexWrap getWrapS() const { return (GXIndTexWrap)((m_flags >> 8) & 0x07); }
	GXIndTexWrap getWrapT() const { return (GXIndTexWrap)((m_flags >> 11) & 0x07); }
	GXIndTexMtxID getMtxSel() const { return (GXIndTexMtxID)((m_flags >> 16) & 0x0F); }
	GXBool getPrev() const { return (GXBool)((m_flags >> 20) & 0x01); }
	GXBool getLod() const { return (GXBool)((m_flags >> 21) & 0x01); }
	GXIndTexAlphaSel getAlphaSel() const { return (GXIndTexAlphaSel)((m_flags >> 22) & 0x03); }

	u32 m_flags; // _00
};

struct J2DTexCoordInfo {
	u8 m_texGenType; // _00
	u8 m_texGenSrc;  // _01
	u8 m_texGenMtx;  // _02

	u8 _03; // _03 - padding?
};

struct J2DTexCoord {
	J2DTexCoord();
	// J2DTexCoordInfo _00;

	J2DTexCoordInfo m_texCoordInfo; // _00
};

struct J2DTextureSRTInfo {
	f32 _00; // _00
	f32 _04; // _04
	f32 _08; // _08
	f32 _0C; // _0C
	f32 _10; // _10
};

extern J2DTexCoordInfo j2dDefaultTexCoordInfo[8];
extern J2DTevStageInfo j2dDefaultTevStageInfo;
extern u32 j2dDefaultColInfo;
// j2dDefaultTevOrderInfoNull declared earlier in file.
extern J2DIndTexOrder j2dDefaultIndTexOrderNull;
extern J2DGXColorS10 j2dDefaultTevColor;
extern J2DIndTexCoordScale j2dDefaultIndTexCoordScaleInfo;
extern JUtility::TColor j2dDefaultTevKColor;
extern J2DTevSwapModeInfo j2dDefaultTevSwapMode;
extern u8 j2dDefaultTevSwapModeTable[4];
// j2dDefaultBlendInfo declared earlier in file.
extern const u8 j2dDefaultDither;
// j2dDefaultColorChanInfo declared earlier in file.
extern u8 j2dDefaultTevSwapTable;
// j2dDefaultAlphaCmp declared earlier in file.

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
