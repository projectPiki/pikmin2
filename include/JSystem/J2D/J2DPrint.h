#ifndef _JSYSTEM_J2D_J2DPRINT_H
#define _JSYSTEM_J2D_J2DPRINT_H

#include "types.h"
#include "JSystem/JUtility.h"
#include "JSystem/JUT/JUTFont.h"

struct J2DPrint {
	J2DPrint(JUTFont*, float);
	virtual ~J2DPrint(); // _00
	// virtual void _04() = 0; // _04

	inline void setColor40(JUtility::TColor color) { color_0x40 = color; }
	inline void setColor44(JUtility::TColor color) { color_0x44 = color; }
	inline void setColors4x(JUtility::TColor color1, JUtility::TColor color2)
	{
		color_0x40 = color2;
		color_0x44 = color1;
	}

	// _00 VTBL
	struct JUTFont* font;
	struct JUtility::TColor color_0x8;
	struct JUtility::TColor color_0xc;
	float float_0x10;
	float float_0x14;
	float float_0x18;
	float float_0x1c;
	short short_0x20;
	u8 unknown1_0x22;
	u8 field13_0x23;
	float float_0x24;
	float float_0x28;
	float float_0x2c;
	float float_0x30;
	float float_0x34;
	struct JUtility::TColor color_0x38;
	struct JUtility::TColor color_0x3c;
	// struct JUtility::TColor color_0x40[2];
	struct JUtility::TColor color_0x40;
	struct JUtility::TColor color_0x44;
	float float_0x48;
	float float_0x4c;
	float float_0x50;
	float float_0x54;
	short short_0x58;
	u8 unknown1_0x5a;

	void initiate();
	JUTFont* setFont(JUTFont*);
	double print(float, float, char const*, ...);
};

#endif
