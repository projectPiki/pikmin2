#ifndef _P2JME_TRENDERINGPROCESSOR_H
#define _P2JME_TRENDERINGPROCESSOR_H

#include "types.h"
#include "JSystem/JMessage/TProcessor.h"
#include "JSystem/JMessage/TReference.h"
#include "JSystem/JUT/TColor.h"

struct JUTFont;
struct JUTTexture;
struct Matrixf;
struct J2DPane;

namespace P2JME {

struct TRenderingProcessorBase : public JMessage::TRenderingProcessor {
	TRenderingProcessorBase(const JMessage::TReference*);

	virtual ~TRenderingProcessorBase();              // _08 (weak)
	virtual void do_character(int);                  // _10 (weak)
	virtual bool do_tag(u32, const void*, u32);      // _14
	virtual void tagColor(const void*, u32);         // _48 (weak)
	virtual void tagSize(const void*, u32);          // _4C (weak)
	virtual void tagRuby(const void*, u32);          // _50 (weak)
	virtual void tagFont(const void*, u32);          // _54 (weak)
	virtual void tagImage(u16, const void*, u32);    // _58 (weak)
	virtual void tagColorEX(u16, const void*, u32);  // _5C (weak)
	virtual void tagControl(u16, const void*, u32);  // _60 (weak)
	virtual void tagPosition(u16, const void*, u32); // _64 (weak)

	// _00     = VTBL
	// _00-_38 = JMessage::TRenderingProcessor
};

struct TRenderingProcessor : public TRenderingProcessorBase {
	TRenderingProcessor(JMessage::TReference const*);

	virtual ~TRenderingProcessor();                            // _08 (weak)
	virtual void do_character(int);                            // _10
	virtual bool do_tag(u32, const void*, u32);                // _14
	virtual bool do_systemTagCode(u16, const void*, u32);      // _18
	virtual void do_select_begin(u32);                         // _1C
	virtual void do_select_end();                              // _20
	virtual void do_select_separate();                         // _24
	virtual void do_begin(const void*, const char*);           // _40
	virtual void tagColor(const void*, u32);                   // _48
	virtual void tagSize(const void*, u32);                    // _4C
	virtual void tagRuby(const void*, u32);                    // _50
	virtual void tagFont(const void*, u32);                    // _54
	virtual void tagImage(u16, const void*, u32);              // _58
	virtual void tagColorEX(u16, const void*, u32);            // _5C
	virtual void tagControl(u16, const void*, u32);            // _60
	virtual void tagPosition(u16, const void*, u32);           // _64
	virtual void update();                                     // _68 (weak)
	virtual void reset();                                      // _6C
	virtual void newParagraph();                               // _70
	virtual void doDrawImage(JUTTexture*, f32, f32, f32, f32); // _74
	virtual void doDrawRuby(f32, f32, f32, f32, int, bool);    // _78
	virtual void doDrawLetter(f32, f32, f32, f32, int, bool);  // _7C
	virtual void doTagControlAbtnWait();                       // _80 (weak)

	void setDrawLocate();
	void initRuby();
	void drawRuby();
	void setImageGX();
	void drawImage(JUTTexture*, f32, f32, f32, f32);
	void calcWidth(JUTFont*, int, f32, bool);
	void setLineWidth();
	void resetLineWidth();
	void setOnePageLine();
	void resetOnePageLine();
	void setPageInfo();
	void preProcCode(uint);
	void preProcID(uint, uint);
	void preProcCenteringCode(uint);
	void preProcCenteringID(uint, uint);
	void setFont(JUTFont*);
	void setTextBoxInfo(J2DPane*);

	// _00     = VTBL
	// _00-_38 = JMessage::TRenderingProcessor
	f32 _38;            // _38
	f32 _3C;            // _3C
	int _40;            // _40
	Matrixf* _44;       // _44
	Matrixf* _48;       // _48
	JUTFont* _4C;       // _4C
	JUTFont* m_jmeFont; // _50
	f32 _54;            // _54
	u32 _58;            // _58 - unknown type
	u8 _5C[0xB4];       // _5C - padding/unknown/in ghidra
};
} // namespace P2JME

#endif
