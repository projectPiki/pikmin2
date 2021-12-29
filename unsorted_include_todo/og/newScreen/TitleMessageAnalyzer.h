#ifndef _OG_NEWSCREEN_TITLEMESSAGEANALYZER_H
#define _OG_NEWSCREEN_TITLEMESSAGEANALYZER_H

/*
    __vt__Q32og9newScreen20TitleMessageAnalyzer:
    .4byte 0
    .4byte 0
    .4byte __dt__Q32og9newScreen20TitleMessageAnalyzerFv
    .4byte do_reset__Q28JMessage10TProcessorFv
    .4byte do_character__Q32og9newScreen20TitleMessageAnalyzerFi
    .4byte do_tag__Q25P2JME23TRenderingProcessorBaseFUlPCvUl
    .4byte do_systemTagCode__Q28JMessage10TProcessorFUsPCvUl
    .4byte do_select_begin__Q28JMessage10TProcessorFUl
    .4byte do_select_end__Q28JMessage10TProcessorFv
    .4byte do_select_separate__Q28JMessage10TProcessorFv
    .4byte do_reset___Q28JMessage19TRenderingProcessorFPCc
    .4byte do_setBegin_isReady___Q28JMessage10TProcessorCFv
    .4byte do_begin___Q28JMessage19TRenderingProcessorFPCvPCc
    .4byte do_end___Q28JMessage19TRenderingProcessorFv
    .4byte do_tag___Q28JMessage19TRenderingProcessorFUlPCvUl
    .4byte do_systemTagCode___Q28JMessage19TRenderingProcessorFUsPCvUl
    .4byte do_begin__Q28JMessage19TRenderingProcessorFPCvPCc
    .4byte do_end__Q28JMessage19TRenderingProcessorFv
    .4byte tagColor__Q25P2JME8AnalyzerFPCvUl
    .4byte tagSize__Q25P2JME8AnalyzerFPCvUl
    .4byte tagRuby__Q25P2JME8AnalyzerFPCvUl
    .4byte tagFont__Q25P2JME8AnalyzerFPCvUl
    .4byte tagImage__Q25P2JME8AnalyzerFUsPCvUl
    .4byte tagColorEX__Q25P2JME8AnalyzerFUsPCvUl
    .4byte tagControl__Q25P2JME8AnalyzerFUsPCvUl
    .4byte tagPosition__Q25P2JME8AnalyzerFUsPCvUl
    .4byte 0
*/

namespace JMessage {
struct TProcessor {
	virtual void _00() = 0;  // _00
	virtual void do_reset(); // _04
	virtual void _08() = 0;  // _08
	virtual void _0C() = 0;  // _0C
	virtual void do_systemTagCode(unsigned short, const void*,
	                              unsigned long); // _10
	virtual void do_select_begin(unsigned long);  // _14
	virtual void do_select_end();                 // _18
	virtual void do_select_separate();            // _1C
	virtual void _20() = 0;                       // _20
	virtual void do_setBegin_isReady_() const;    // _24

	// _00 VTBL
};
} // namespace JMessage

namespace P2JME {
struct TRenderingProcessorBase {
	virtual void _00() = 0;                                         // _00
	virtual void _04() = 0;                                         // _04
	virtual void _08() = 0;                                         // _08
	virtual void do_tag(unsigned long, const void*, unsigned long); // _0C

	// _00 VTBL
};
} // namespace P2JME

namespace JMessage {
struct TRenderingProcessor {
	virtual void _00() = 0;                                          // _00
	virtual void _04() = 0;                                          // _04
	virtual void _08() = 0;                                          // _08
	virtual void _0C() = 0;                                          // _0C
	virtual void _10() = 0;                                          // _10
	virtual void _14() = 0;                                          // _14
	virtual void _18() = 0;                                          // _18
	virtual void _1C() = 0;                                          // _1C
	virtual void do_reset_(const char*);                             // _20
	virtual void _24() = 0;                                          // _24
	virtual void do_begin_(const void*, const char*);                // _28
	virtual void do_end_();                                          // _2C
	virtual void do_tag_(unsigned long, const void*, unsigned long); // _30
	virtual void do_systemTagCode_(unsigned short, const void*,
	                               unsigned long);   // _34
	virtual void do_begin(const void*, const char*); // _38
	virtual void do_end();                           // _3C

	// _00 VTBL
};
} // namespace JMessage

namespace P2JME {
struct Analyzer {
	virtual void _00() = 0;                                               // _00
	virtual void _04() = 0;                                               // _04
	virtual void _08() = 0;                                               // _08
	virtual void _0C() = 0;                                               // _0C
	virtual void _10() = 0;                                               // _10
	virtual void _14() = 0;                                               // _14
	virtual void _18() = 0;                                               // _18
	virtual void _1C() = 0;                                               // _1C
	virtual void _20() = 0;                                               // _20
	virtual void _24() = 0;                                               // _24
	virtual void _28() = 0;                                               // _28
	virtual void _2C() = 0;                                               // _2C
	virtual void _30() = 0;                                               // _30
	virtual void _34() = 0;                                               // _34
	virtual void _38() = 0;                                               // _38
	virtual void _3C() = 0;                                               // _3C
	virtual void tagColor(const void*, unsigned long);                    // _40
	virtual void tagSize(const void*, unsigned long);                     // _44
	virtual void tagRuby(const void*, unsigned long);                     // _48
	virtual void tagFont(const void*, unsigned long);                     // _4C
	virtual void tagImage(unsigned short, const void*, unsigned long);    // _50
	virtual void tagColorEX(unsigned short, const void*, unsigned long);  // _54
	virtual void tagControl(unsigned short, const void*, unsigned long);  // _58
	virtual void tagPosition(unsigned short, const void*, unsigned long); // _5C

	// _00 VTBL
};
} // namespace P2JME

namespace og {
namespace newScreen {
	struct TitleMessageAnalyzer : public TProcessor,
	                              public TRenderingProcessorBase,
	                              public TRenderingProcessor,
	                              public Analyzer {
		virtual ~TitleMessageAnalyzer();                                // _00
		virtual void do_reset();                                        // _04
		virtual void do_character(int);                                 // _08
		virtual void do_tag(unsigned long, const void*, unsigned long); // _0C
		virtual void do_systemTagCode(unsigned short, const void*,
		                              unsigned long);                    // _10
		virtual void do_select_begin(unsigned long);                     // _14
		virtual void do_select_end();                                    // _18
		virtual void do_select_separate();                               // _1C
		virtual void do_reset_(const char*);                             // _20
		virtual void do_setBegin_isReady_() const;                       // _24
		virtual void do_begin_(const void*, const char*);                // _28
		virtual void do_end_();                                          // _2C
		virtual void do_tag_(unsigned long, const void*, unsigned long); // _30
		virtual void do_systemTagCode_(unsigned short, const void*,
		                               unsigned long);     // _34
		virtual void do_begin(const void*, const char*);   // _38
		virtual void do_end();                             // _3C
		virtual void tagColor(const void*, unsigned long); // _40
		virtual void tagSize(const void*, unsigned long);  // _44
		virtual void tagRuby(const void*, unsigned long);  // _48
		virtual void tagFont(const void*, unsigned long);  // _4C
		virtual void tagImage(unsigned short, const void*,
		                      unsigned long); // _50
		virtual void tagColorEX(unsigned short, const void*,
		                        unsigned long); // _54
		virtual void tagControl(unsigned short, const void*,
		                        unsigned long); // _58
		virtual void tagPosition(unsigned short, const void*,
		                         unsigned long); // _5C
		virtual void _60() = 0;                  // _60

		// _00 VTBL
	};
} // namespace newScreen
} // namespace og

#endif
