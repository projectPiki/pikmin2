#ifndef _JMESSAGE_TRENDERINGPROCESSOR_H
#define _JMESSAGE_TRENDERINGPROCESSOR_H

/*
    __vt__Q28JMessage19TRenderingProcessor:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28JMessage19TRenderingProcessorFv
    .4byte do_reset__Q28JMessage10TProcessorFv
    .4byte do_character__Q28JMessage10TProcessorFi
    .4byte do_tag__Q28JMessage10TProcessorFUlPCvUl
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
*/

namespace JMessage {
struct TProcessor {
	virtual ~TProcessor();                                                     // _08
	virtual void do_reset();                                                   // _0C
	virtual void do_character(int);                                            // _10
	virtual void do_tag(unsigned long, const void*, unsigned long);            // _14
	virtual void do_systemTagCode(unsigned short, const void*, unsigned long); // _18
	virtual void do_select_begin(unsigned long);                               // _1C
	virtual void do_select_end();                                              // _20
	virtual void do_select_separate();                                         // _24
	virtual void do_reset_(const char*);                                       // _28
	virtual void do_setBegin_isReady_() const;                                 // _2C

	// _00 VTBL
};
} // namespace JMessage

namespace JMessage {
struct TRenderingProcessor : public TProcessor {
	virtual ~TRenderingProcessor();                                             // _08
	virtual void do_reset_(const char*);                                        // _28
	virtual void do_begin_(const void*, const char*);                           // _30
	virtual void do_end_();                                                     // _34
	virtual void do_tag_(unsigned long, const void*, unsigned long);            // _38
	virtual void do_systemTagCode_(unsigned short, const void*, unsigned long); // _3C
	virtual void do_begin(const void*, const char*);                            // _40
	virtual void do_end();                                                      // _44

	// _00 VTBL
};
} // namespace JMessage

#endif
