#ifndef _JSYSTEM_J2D_J2DTYPES_H
#define _JSYSTEM_J2D_J2DTYPES_H
/**
 * Header for J2D POD and nearly POD types, as well as defines, typedefs, and enums that aren't specific to a particular non-POD type.
 */
#include "Dolphin/vec.h"
#include "JSystem/J2D/J2DGXColorS10.h"
#include "JSystem/J2D/J2DIndBlock.h"
#include "JSystem/JUT/JUTTexture.h"
#include "JSystem/JUT/TColor.h"
#include "types.h"

enum J2DBinding {
	Binding_F = 0xF,
};

enum J2DMirror {
	Mirror_0 = 0x0,
};

struct J2DAlphaComp {
	u16 _00; // _00
	u8 _02;  // _02
	u8 _03;  // _03
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

	u8 m_type;
	u8 m_srcFactor;
	u8 m_destFactor;
};

struct J2DColorChanInfo {
	u8 _00;
	u8 _01;
};

extern const J2DColorChanInfo j2dDefaultColorChanInfo;

/**
 * @size{0x2}
 */
struct J2DColorChan {
	J2DColorChan() { m_data = j2dDefaultColorChanInfo._01; }

	u16 m_data; // _00
};

struct J2DTevOrderInfo {
	u8 _00; // _00
	u8 _01; // _01
	u8 _02; // _02
};

struct J2DTevOrder {
	J2DTevOrder();

	/** @fabricated */
	J2DTevOrder(u8 p1, u8 p2, u8 p3)
	    : _00(p1)
	    , _01(p2)
	    , _02(p3)
	{
	}

	u8 _00; // _00
	u8 _01; // _01
	u8 _02; // _02
	u8 _03; // _03
};

struct J2DTevStage {
	J2DTevStage();

	u8 _00; // _00
	u8 _01; // _01
	u8 _02; // _02
	u8 _03; // _03
	u8 _04; // _04
	u8 _05; // _05
	u8 _06; // _06
	u8 _07; // _07
};

struct J2DTevSwapModeInfo {
};

struct J2DTevSwapModeTable {
	J2DTevSwapModeTable();

	u8 m_data; // _00
};

struct J2DIndTevStage {
	J2DIndTevStage();

	void load(u8);

	JUTTexture* m_texture; // _00
};

struct J2DTexCoord {
	J2DTexCoord();

	u8 _00; // _00
	u8 _01; // _01
	u8 _02; // _02
	u8 _03; // _03 - padding?
};

struct J2DTextureSRTInfo {
	f32 _00; // _00
	f32 _04; // _04
	f32 _08; // _08
	f32 _0C; // _0C
	f32 _10; // _10
};

extern const JUtility::TColor j2dDefaultColInfo;
extern const J2DTevOrderInfo j2dDefaultTevOrderInfoNull;
extern const J2DIndTexOrder j2dDefaultIndTexOrderNull;
extern const J2DGXColorS10 j2dDefaultTevColor;
extern const J2DIndTexCoordScale j2dDefaultIndTexCoordScaleInfo;
extern const JUtility::TColor j2dDefaultTevKColor;

// extern const J2DTexCoordInfo j2dDefaultTexCoordInfo[8];

#endif
