#ifndef _JMESSAGE_TPROCESSOR_H
#define _JMESSAGE_TPROCESSOR_H

/*
    __vt__Q28JMessage10TProcessor:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28JMessage10TProcessorFv
    .4byte do_reset__Q28JMessage10TProcessorFv
    .4byte do_character__Q28JMessage10TProcessorFi
    .4byte do_tag__Q28JMessage10TProcessorFUlPCvUl
    .4byte do_systemTagCode__Q28JMessage10TProcessorFUsPCvUl
    .4byte do_select_begin__Q28JMessage10TProcessorFUl
    .4byte do_select_end__Q28JMessage10TProcessorFv
    .4byte do_select_separate__Q28JMessage10TProcessorFv
    .4byte 0
    .4byte do_setBegin_isReady___Q28JMessage10TProcessorCFv
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace JMessage {
struct TProcessor {
	virtual ~TProcessor();                                          // _00
	virtual void do_reset();                                        // _04
	virtual void do_character(int);                                 // _08
	virtual void do_tag(unsigned long, const void*, unsigned long); // _0C
	virtual void do_systemTagCode(unsigned short, const void*,
	                              unsigned long); // _10
	virtual void do_select_begin(unsigned long);  // _14
	virtual void do_select_end();                 // _18
	virtual void do_select_separate();            // _1C
	virtual void _20() = 0;                       // _20
	virtual void do_setBegin_isReady_() const;    // _24
	virtual void _28() = 0;                       // _28
	virtual void _2C() = 0;                       // _2C
	virtual void _30() = 0;                       // _30
	virtual void _34() = 0;                       // _34

	// _00 VTBL
};
} // namespace JMessage

#endif
