#ifndef _JSYSTEM_J2D_J2DPRINT_H
#define _JSYSTEM_J2D_J2DPRINT_H

#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/JUT/TColor.h"
#include "JSystem/JUT/JUTFont.h"
#include "types.h"
struct J2DPrint {
	struct TSize;

	J2DPrint(JUTFont*, float);
	J2DPrint(JUTFont*, JUtility::TColor, JUtility::TColor);
	J2DPrint(JUTFont*, float, float, JUtility::TColor, JUtility::TColor, JUtility::TColor, JUtility::TColor);
	J2DPrint(JUTFont*, float, float);                                     // unused/inlined
	J2DPrint(JUTFont*, float, float, JUtility::TColor, JUtility::TColor); // unused/inlined

	virtual ~J2DPrint(); // _08
	// virtual void _0C() = 0; // _0C - possibly

	void initiate();
	void private_initiate(JUTFont*, float, float, JUtility::TColor, JUtility::TColor, JUtility::TColor, JUtility::TColor, bool);
	JUTFont* setFont(JUTFont* font);
	void setBuffer(u32);
	void setFontSize();
	void locate(float, float);
	double print(float, float, char const*, ...);
	void print(float, float, u8, const char*, ...);
	void getWidth(const char*, ...);
	void printReturn(const char*, float, float, J2DTextBoxHBinding, J2DTextBoxVBinding, float, float, u8);
	void parse(const u8*, int, int, u16*, J2DPrint::TSize&, u8, bool);
	void doCtrlCode(int);
	void doEscapeCode(const u8**, u8);
	void initchar();
	void getNumberS32(const u8**, long, long, int);
	void getNumberF32(const u8**, float, float, int);

	// unused/inlined:
	void setBuffer(char*, u32);
	void putChar(int);
	void putChar(float, float, int);
	void print(const char*, ...);
	void print(u8, const char*, ...);
	void getSize(TSize&, const char*, ...);
	void getHeight(const char*, ...);

	/** @fabricated */
	inline void setFontSize(float p1, float p2)
	{
		m_glyphWidth  = (p1 > 0.0f) ? p1 : 0.0f;
		m_glyphHeight = (p2 > 0.0f) ? p2 : 0.0f;
	}

	// _00 VTBL
	JUTFont* m_font;      // _04
	JUtility::TColor _08; // _08
	JUtility::TColor _0C; // _0C
	float _10;            // _10
	float _14;            // _14
	float _18;            // _18
	float _1C;            // _1C
	short _20;            // _20
	u8 _22;               // _22 - could be padding
	u8 _23;               // _23 - could be padding
	float _24;            // _24
	float _28;            // _28
	float _2C;            // _2C
	float _30;            // _30
	float _34;            // _34
	JUtility::TColor _38; // _38
	JUtility::TColor _3C; // _3C
	JUtility::TColor _40; // _40
	JUtility::TColor _44; // _44
	float _48;            // _48
	float _4C;            // _4C
	float m_glyphWidth;   // _50
	float m_glyphHeight;  // _54
	short _58;            // _58
	u8 _5A;               // _5A
};

#endif
