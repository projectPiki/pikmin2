#ifndef _P2JME_TRENDERINGPROCESSOR_H
#define _P2JME_TRENDERINGPROCESSOR_H

#include "types.h"
#include "JSystem/JMessage/TProcessor.h"
#include "JSystem/JMessage/TReference.h"
#include "JSystem/JUtility/TColor.h"
#include "JSystem/JGeometry.h"
#include "BitFlag.h"

struct JUTFont;
struct JUTTexture;
struct Matrixf;
struct J2DPane;

namespace P2JME {

enum TRenderingFlags {
	TProcFlag_Unk0 = 1 << 0, // 0x1
	// ...
	TProcFlag_Unk4 = 1 << 4, // 0x10
	TProcFlag_Unk5 = 1 << 5, // 0x20
	TProcFlag_Unk6 = 1 << 6, // 0x40
	// ...
	TProcFlag_Unk8  = 1 << 8,  // 0x100
	TProcFlag_Unk9  = 1 << 9,  // 0x200
	TProcFlag_Unk10 = 1 << 10, // 0x400
	// ...
	TProcFlag_PageFinished = 1 << 28, // 0x10000000
};

struct TRenderingProcessorBase : public JMessage::TRenderingProcessor {
	TRenderingProcessorBase(const JMessage::TReference* ref);

	virtual ~TRenderingProcessorBase() { }                           // _08 (weak)
	virtual void do_character(int) { }                               // _10 (weak)
	virtual bool do_tag(u32, const void*, u32);                      // _14
	virtual bool tagColor(const void*, u32) { return true; }         // _48 (weak)
	virtual bool tagSize(const void*, u32) { return true; }          // _4C (weak)
	virtual bool tagRuby(const void*, u32) { return true; }          // _50 (weak)
	virtual bool tagFont(const void*, u32) { return true; }          // _54 (weak)
	virtual bool tagImage(u16, const void*, u32) { return true; }    // _58 (weak)
	virtual bool tagColorEX(u16, const void*, u32) { return true; }  // _5C (weak)
	virtual bool tagControl(u16, const void*, u32) { return true; }  // _60 (weak)
	virtual bool tagPosition(u16, const void*, u32) { return true; } // _64 (weak)

	// _00     = VTBL
	// _00-_38 = JMessage::TRenderingProcessor
};

struct TRenderingProcessor : public TRenderingProcessorBase {
	struct LineWidthInfo {
		u8 mStartIndex; // _00
		u8 mEndIndex;   // _01
	};

	TRenderingProcessor(JMessage::TReference const* ref);

	virtual ~TRenderingProcessor() { }                         // _08 (weak)
	virtual void do_character(int);                            // _10
	virtual bool do_tag(u32, const void*, u32);                // _14
	virtual bool do_systemTagCode(u16, const void*, u32);      // _18
	virtual void do_select_begin(u32);                         // _1C
	virtual void do_select_end();                              // _20
	virtual void do_select_separate();                         // _24
	virtual void do_begin(const void*, const char*);           // _40
	virtual bool tagColor(const void*, u32);                   // _48
	virtual bool tagSize(const void*, u32);                    // _4C
	virtual bool tagRuby(const void*, u32);                    // _50
	virtual bool tagFont(const void*, u32);                    // _54
	virtual bool tagImage(u16, const void*, u32);              // _58
	virtual bool tagColorEX(u16, const void*, u32);            // _5C
	virtual bool tagControl(u16, const void*, u32);            // _60
	virtual bool tagPosition(u16, const void*, u32);           // _64
	virtual void update();                                     // _68 (weak)
	virtual void reset();                                      // _6C
	virtual void newParagraph();                               // _70
	virtual void doDrawImage(JUTTexture*, f32, f32, f32, f32); // _74
	virtual f32 doDrawRuby(f32, f32, f32, f32, int, bool);     // _78
	virtual f32 doDrawLetter(f32, f32, f32, f32, int, bool);   // _7C
	virtual bool doTagControlAbtnWait();                       // _80 (weak)

	void initRuby();
	void drawRuby();
	void setImageGX();
	void drawImage(JUTTexture*, f32, f32, f32, f32);
	f32 calcWidth(JUTFont*, int, f32, bool);
	void setLineWidth();
	void resetLineWidth();
	void setOnePageLine();
	void resetOnePageLine();
	void setPageInfo();
	void preProcCode(uint);
	void preProcID(uint, uint);
	void preProcCenteringCode(uint);
	void preProcCenteringID(uint, uint);
	void setFont(JUTFont* font);
	void setTextBoxInfo(J2DPane*);

	void setDrawLocate() // weak function
	{
		setDrawLocateX();
		setDrawLocateY();
	}

	// these are used for Caption::onInit
	inline void initFlagsA()
	{
		mFlags.typeView &= ~(TProcFlag_Unk4 | TProcFlag_Unk5 | TProcFlag_Unk6);
		mFlags.typeView |= TProcFlag_Unk5;
	}

	inline void initFlagsB()
	{
		// not cooperating with set/unset
		mFlags.typeView &= ~(TProcFlag_Unk8 | TProcFlag_Unk9 | TProcFlag_Unk10);
		mFlags.typeView |= TProcFlag_Unk9;
	}

	// unused/inlined:
	inline void setLocate(s32 x, s32 y)
	{
		mLocate.setX(x);
		mLocate.setY(y);
		sizeof(TRenderingProcessor);
	}

	void setDrawLocateX();
	void setDrawLocateY();
	void addDrawLines();
	void mf();
	void calcColorCoe(JUtility::TColor const&, JUtility::TColor*);
	void resetPageInfo();
	void preProcCenteringPre();
	void preProcCenteringPost();

	static const u32 cPageInfoBufferNum;

	inline void checkPageInfoNum() { P2ASSERTLINE(490, mPageInfoNum < cPageInfoBufferNum); }

	inline u8 getParagraphNum() { return mParagraphNum; }

	// _00     = VTBL
	// _00-_38 = JMessage::TRenderingProcessor
	f32 mTextBoxWidth;                  // _38
	f32 mTextBoxHeight;                 // _3C
	int mInfoIndex;                     // _40
	Matrixf* mMtx1;                     // _44
	Matrixf* mMtx2;                     // _48
	JUTFont* mMainFont;                 // _4C
	JUTFont* mRubyFont;                 // _50
	f32 mXOffset;                       // _54
	f32 mYOffset;                       // _58
	JUtility::TColor mImageColorA;      // _5C
	JUtility::TColor mImageColorB;      // _60
	JUtility::TColor mColorData1;       // _64
	JUtility::TColor mColorData2;       // _68
	JUtility::TColor mColorData3;       // _6C
	JUtility::TColor mColorData4;       // _70
	JUtility::TColor mColorData5;       // _74
	f32 mBaseAlphaModifier;             // _78
	JGeometry::TBox2f mMesgBounds;      // _7C
	BitFlag<u32> mFlags;                // _8C
	JGeometry::TBox2f mLocate;          // _90
	u32 mSelectSeparateNum;             // _A0
	u8 mCurrLine;                       // _A4
	u8 mParagraphNum;                   // _A5
	u8 mPageInfoNum;                    // _A6
	f32* mLineWidths;                   // _A8
	u8* mOnePageLines;                  // _AC
	LineWidthInfo* mLineWidthInfos;     // _B0
	f32 _B4;                            // _B4
	s32 mCharacterNum;                  // _B8
	f32 mActiveCharWidth;               // _BC
	f32 mActiveLineHeight;              // _C0
	f32 mCharacterWidth;                // _C4
	f32 mLineHeight;                    // _C8
	JUtility::TColor mDefaultBlack;     // _CC
	JUtility::TColor mDefaultWhite;     // _D0
	JUtility::TColor mDefaultCharColor; // _D4
	JUtility::TColor mDefaultGradColor; // _D8
	u8 mMatrixType;                     // _DC
	f32 mFontWidthAdjusted;             // _E0
	f32 mFontHeightAdjusted;            // _E4
	f32 mFontWidth;                     // _E8
	f32 mFontHeight;                    // _EC
	u8 mCurrColorIndex;                 // _F0
	u8 mSecondaryColorIndex;            // _F1
	u8 mDoDrawRuby;                     // _F2
	u32 mRubyStartCharIndex;            // _F4
	u8 mRubyCurrentStringSize;          // _F8
	u32 mRubyBufferCurrentSize;         // _FC
	char* mRubyBuffer;                  // _100
	f32 mRubyCurrentXPos;               // _104
	f32 mRubyCurrentYPos;               // _108
	f32 mRubyWidthModifier;             // _10C
};

} // namespace P2JME

#endif
