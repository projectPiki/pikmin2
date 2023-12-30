#ifndef _JSYSTEM_J2D_J2DPRINT_H
#define _JSYSTEM_J2D_J2DPRINT_H

#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/JUtility/TColor.h"
#include "JSystem/JUtility/JUTFont.h"
#include "types.h"
struct J2DPrint {
	struct TSize {
		f32 mWidth; // _00
		f32 _04;    // _04
	};

	J2DPrint(JUTFont*, f32);
	J2DPrint(JUTFont*, JUtility::TColor, JUtility::TColor);
	J2DPrint(JUTFont*, f32, f32, JUtility::TColor, JUtility::TColor, JUtility::TColor, JUtility::TColor);
	J2DPrint(JUTFont*, f32, f32);                                     // unused/inlined
	J2DPrint(JUTFont*, f32, f32, JUtility::TColor, JUtility::TColor); // unused/inlined

	virtual ~J2DPrint(); // _08
	// virtual void _0C() = 0; // _0C - possibly

	void initiate();
	void private_initiate(JUTFont*, f32, f32, JUtility::TColor, JUtility::TColor, JUtility::TColor, JUtility::TColor, bool);
	JUTFont* setFont(JUTFont* font);
	static const u8* setBuffer(u32);
	void setFontSize();
	void locate(f32, f32);
	f32 print(f32, f32, char const*, ...);
	f32 print(f32, f32, u8, const char*, ...);
	f32 getWidth(const char*, ...);
	void printReturn(const char*, f32, f32, J2DTextBoxHBinding, J2DTextBoxVBinding, f32, f32, u8);
	f32 parse(const u8*, int, int, u16*, J2DPrint::TSize&, u8, bool);
	void doCtrlCode(int);
	void doEscapeCode(const u8**, u8);
	void initchar();
	void getNumberS32(const u8**, s32, s32, int);
	void getNumberF32(const u8**, f32, f32, int);

	// unused/inlined:
	void setBuffer(char*, u32);
	void putChar(int);
	void putChar(f32, f32, int);
	void print(const char*, ...);
	void print(u8, const char*, ...);
	void getSize(TSize&, const char*, ...);
	void getHeight(const char*, ...);

	/** @fabricated */
	inline void setFontSize(f32 p1, f32 p2)
	{
		mGlyphWidth  = (p1 > 0.0f) ? p1 : 0.0f;
		mGlyphHeight = (p2 > 0.0f) ? p2 : 0.0f;
	}

	static const u8* mStrBuff;
	static size_t mStrBuffSize;
	static bool mHeapFlag;
	static bool mBufferNotEnough;

	// _00 VTBL
	JUTFont* mFont;                    // _04
	JUtility::TColor mActiveCharColor; // _08, all these "Active" values are just copies of stuff later in the struct
	JUtility::TColor mActiveGradColor; // _0C, they are copied to from the main ones in initchar
	f32 mActiveScaleX;                 // _10
	f32 mActiveScaleY;                 // _14
	f32 mActiveGlyphWidth;             // _18
	f32 mActiveGlyphHeight;            // _1C
	s16 mActiveFontWidth;              // _20
	u8 _22;                            // _22
	f32 mPositionX;                    // _24
	f32 mPositionY;                    // _28
	f32 mCursorX;                      // _2C, same as position?
	f32 mCursorY;                      // _30
	f32 mRotation;                     // _34
	JUtility::TColor mColorWhite;      // _38
	JUtility::TColor mColorBlack;      // _3C
	JUtility::TColor mCharColor;       // _40
	JUtility::TColor mGradientColor;   // _44
	f32 mFontScaleX;                   // _48
	f32 mFontScaleY;                   // _4C
	f32 mGlyphWidth;                   // _50
	f32 mGlyphHeight;                  // _54
	s16 mFontWidth;                    // _58
	u8 _5A;                            // _5A
};

#endif
