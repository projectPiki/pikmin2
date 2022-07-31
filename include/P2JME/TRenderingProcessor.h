#ifndef _P2JME_TRENDERINGPROCESSOR_H
#define _P2JME_TRENDERINGPROCESSOR_H

#include "JSystem/JMessage/TProcessor.h"
#include "JSystem/JMessage/TReference.h"
#include "types.h"

struct JUTFont;
struct JUTTexture;

namespace P2JME {

struct TRenderingProcessorBase : JMessage::TRenderingProcessor {
	// virtual ~TRenderingProcessorBase();                                   // _08 (weak)
	// virtual void do_character(int);                                       // _10 (weak)
	// virtual void do_tag(unsigned long, const void*, unsigned long);       // _14
	// virtual void tagColor(const void*, unsigned long);                    // _48 (weak)
	// virtual void tagSize(const void*, unsigned long);                     // _4C (weak)
	// virtual void tagRuby(const void*, unsigned long);                     // _50 (weak)
	// virtual void tagFont(const void*, unsigned long);                     // _54 (weak)
	// virtual void tagImage(unsigned short, const void*, unsigned long);    // _58 (weak)
	// virtual void tagColorEX(unsigned short, const void*, unsigned long);  // _5C (weak)
	// virtual void tagControl(unsigned short, const void*, unsigned long);  // _60 (weak)
	// virtual void tagPosition(unsigned short, const void*, unsigned long); // _64 (weak)

	TRenderingProcessorBase(const JMessage::TReference*);
};

struct TRenderingProcessor : TRenderingProcessorBase {
	// virtual ~TRenderingProcessor();                                             // _08
	// virtual void do_character(int);                                             // _10
	// virtual void do_tag(unsigned long, const void*, unsigned long);             // _14
	// virtual void do_systemTagCode(unsigned short, const void*, unsigned long);  // _18
	// virtual void do_select_begin(unsigned long);                                // _1C
	// virtual void do_select_end();                                               // _20
	// virtual void do_select_separate();                                          // _24
	// virtual void do_begin(const void*, const char*);                            // _40
	// virtual void tagColor(const void*, unsigned long);                    		// _48 (weak)
	// virtual void tagSize(const void*, unsigned long);                     		// _4C (weak)
	// virtual void tagRuby(const void*, unsigned long);                     		// _50 (weak)
	// virtual void tagFont(const void*, unsigned long);                     		// _54 (weak)
	// virtual void tagImage(unsigned short, const void*, unsigned long);    		// _58 (weak)
	// virtual void tagColorEX(unsigned short, const void*, unsigned long);  		// _5C (weak)
	// virtual void tagControl(unsigned short, const void*, unsigned long);  		// _60 (weak)
	// virtual void tagPosition(unsigned short, const void*, unsigned long); 		// _64 (weak)
	// virtual void update();														// _68 (weak)
	// virtual void reset();														// _6C
	// virtual void newParagraph();												// _70
	// virtual void doDrawImage(JUTTexture*, float, float, float, float);			// _74
	// virtual void doDrawRuby(float, float, float, float, int, bool);				// _78
	// virtual void doDrawLetter(float, float, float, float, int, bool);			// _7C
	// virtual void doTagControlAbtnWait();										// _80 (weak)

	TRenderingProcessor(JMessage::TReference const*);

	void init();
	void setFont(JUTFont*); // TODO: code is _4C = arg1
	void preProcID(unsigned int, unsigned int);

	u8 _00[0x4C];       // _00
	JUTFont* _4C;       // _4C
	JUTFont* m_jmeFont; // _50
	u8 _54[0xBC];       // _54
};
} // namespace P2JME

#endif
