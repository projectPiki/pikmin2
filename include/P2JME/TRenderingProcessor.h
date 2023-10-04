#ifndef _P2JME_TRENDERINGPROCESSOR_H
#define _P2JME_TRENDERINGPROCESSOR_H

#include "types.h"
#include "JSystem/JMessage/TProcessor.h"
#include "JSystem/JMessage/TReference.h"
#include "JSystem/JUtility/TColor.h"
#include "JSystem/JGeometry.h"

struct JUTFont;
struct JUTTexture;
struct Matrixf;
struct J2DPane;

namespace P2JME {

struct TRenderingProcessorBase : public JMessage::TRenderingProcessor {
	TRenderingProcessorBase(const JMessage::TReference*);

	virtual ~TRenderingProcessorBase() { }           // _08 (weak)
	virtual void do_character(int);                  // _10 (weak)
	virtual bool do_tag(u32, const void*, u32);      // _14
	virtual bool tagColor(const void*, u32);         // _48 (weak)
	virtual bool tagSize(const void*, u32);          // _4C (weak)
	virtual bool tagRuby(const void*, u32);          // _50 (weak)
	virtual bool tagFont(const void*, u32);          // _54 (weak)
	virtual bool tagImage(u16, const void*, u32);    // _58 (weak)
	virtual bool tagColorEX(u16, const void*, u32);  // _5C (weak)
	virtual bool tagControl(u16, const void*, u32);  // _60 (weak)
	virtual bool tagPosition(u16, const void*, u32); // _64 (weak)

	// _00     = VTBL
	// _00-_38 = JMessage::TRenderingProcessor
};

struct TRenderingProcessor : public TRenderingProcessorBase {
	TRenderingProcessor(JMessage::TReference const*);

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
	virtual void doDrawRuby(f32, f32, f32, f32, int, bool);    // _78
	virtual void doDrawLetter(f32, f32, f32, f32, int, bool);  // _7C
	virtual bool doTagControlAbtnWait();                       // _80 (weak)

	void setDrawLocate();
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

	// these are used for Caption::onInit
	inline void initFlagsA()
	{
		mFlags &= 0xffffff8f;
		mFlags |= 0x20;
	}

	inline void initFlagsB()
	{
		mFlags &= 0xfffff8ff;
		mFlags |= 0x200;
	}

	// unused/inlined:
	void setDrawLocateX();
	void setDrawLocateY();
	void addDrawLines();
	void mf();
	void calcColorCoe(JUtility::TColor const&, JUtility::TColor*);
	void resetPageInfo();
	void preProcCenteringPre();
	void preProcCenteringPost();

	// _00     = VTBL
	// _00-_38 = JMessage::TRenderingProcessor
	f32 _38;                       // _38
	f32 _3C;                       // _3C
	int _40;                       // _40
	Matrixf* mMtx1;                // _44
	Matrixf* mMtx2;                // _48
	JUTFont* _4C;                  // _4C
	JUTFont* mRubyFont;            // _50
	f32 _54;                       // _54
	f32 _58;                       // _58
	int _5C;                       // _5C
	u32 _60;                       // _60
	u8 mColorData[0x14];           // _64
	f32 _78;                       // _78
	JGeometry::TBox2f mMesgBounds; // _7C
	u32 mFlags;                    // _8C
	JGeometry::TBox2f mLocate;     // _90
	// union {
	// 	u32 u32View;
	// 	u8 u8View[4];
	// } _A0;                // _A0
	u32 _A0;              // _A0
	u8 _A4;               // _A4
	u8 _A5;               // _A5
	u8 _A6;               // _A6
	u8 _A7;               // _A7
	f32* _A8;             // _A8
	u8* _AC;              // _AC
	u8* _B0;              // _B0
	f32 _B4;              // _B4
	s32 _B8;              // _B8
	f32 _BC;              // _BC
	f32 _C0;              // _C0
	f32 _C4;              // _C4
	f32 _C8;              // _C8
	JUtility::TColor _CC; // _CC
	JUtility::TColor _D0; // _D0
	JUtility::TColor _D4; // _D4
	JUtility::TColor _D8; // _D8
	u8 _DC;               // _DC
	f32 _E0;              // _E0
	f32 _E4;              // _E4
	f32 mFontWidth;       // _E8
	f32 mFontHeight;      // _EC
	u8 _F0;               // _F0
	u8 _F1;               // _F1
	u8 _F2;               // _F2
	u32 _F4;              // _F4
	u8 _F8;               // _F8
	u32 _FC;              // _FC
	u8* _100;             // _100
	f32 _104;             // _104
	f32 _108;             // _108
	u32 _10C;             // _10C
	u8 _110[48];          // _110, unknown
	f32 _140;             // _140

	static u32 cPageInfoBufferNum;
};
} // namespace P2JME

#endif
