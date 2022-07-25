#ifndef _P2JME_WINDOW_TSEQUENCEPROCESSOR_H
#define _P2JME_WINDOW_TSEQUENCEPROCESSOR_H

/*
    __vt__Q35P2JME6Window18TSequenceProcessor:
    .4byte 0
    .4byte 0
    .4byte __dt__Q35P2JME6Window18TSequenceProcessorFv
    .4byte do_reset__Q28JMessage10TProcessorFv
    .4byte do_character__Q25P2JME18TSequenceProcessorFi
    .4byte do_tag__Q25P2JME18TSequenceProcessorFUlPCvUl
    .4byte do_systemTagCode__Q25P2JME18TSequenceProcessorFUsPCvUl
    .4byte do_select_begin__Q28JMessage10TProcessorFUl
    .4byte do_select_end__Q28JMessage10TProcessorFv
    .4byte do_select_separate__Q28JMessage10TProcessorFv
    .4byte do_reset___Q28JMessage18TSequenceProcessorFPCc
    .4byte do_setBegin_isReady___Q28JMessage18TSequenceProcessorCFv
    .4byte do_begin___Q28JMessage18TSequenceProcessorFPCvPCc
    .4byte do_end___Q28JMessage18TSequenceProcessorFv
    .4byte do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl
    .4byte do_systemTagCode___Q28JMessage18TSequenceProcessorFUsPCvUl
    .4byte do_begin__Q25P2JME18TSequenceProcessorFPCvPCc
    .4byte do_end__Q25P2JME18TSequenceProcessorFv
    .4byte do_isReady__Q25P2JME18TSequenceProcessorFv
    .4byte do_jump_isReady__Q25P2JME18TSequenceProcessorFv
    .4byte do_jump__Q25P2JME18TSequenceProcessorFPCvPCc
    .4byte do_branch_query__Q25P2JME18TSequenceProcessorFUs
    .4byte do_branch_queryResult__Q25P2JME18TSequenceProcessorFv
    .4byte do_branch__Q25P2JME18TSequenceProcessorFPCvPCc
    .4byte doResetAbtnWaitSE__Q25P2JME18TSequenceProcessorFv
    .4byte doCharacterSEStart__Q35P2JME6Window18TSequenceProcessorFv
    .4byte doCharacterSE__Q35P2JME6Window18TSequenceProcessorFi
    .4byte doCharacterSEEnd__Q35P2JME6Window18TSequenceProcessorFv
    .4byte doFastForwardSE__Q35P2JME6Window18TSequenceProcessorFv
    .4byte reset__Q25P2JME18TSequenceProcessorFv
*/

namespace JMessage {
struct TProcessor {
	virtual ~TProcessor();                                                     // _08 (inline)
	virtual void do_reset();                                                   // _0C
	virtual void do_character(int);                                            // _10
	virtual void do_tag(unsigned long, const void*, unsigned long);            // _14
	virtual void do_systemTagCode(unsigned short, const void*, unsigned long); // _18
	virtual void do_select_begin(unsigned long);                               // _1C
	virtual void do_select_end();                                              // _20
	virtual void do_select_separate();                                         // _24
};
} // namespace JMessage

namespace P2JME {
namespace Window {
struct TSequenceProcessor : public TProcessor {
	virtual ~TSequenceProcessor();                                              // _08 (inline)
	virtual void do_character(int);                                             // _10
	virtual void do_tag(unsigned long, const void*, unsigned long);             // _14
	virtual void do_systemTagCode(unsigned short, const void*, unsigned long);  // _18
	virtual void do_reset_(const char*);                                        // _28
	virtual void do_setBegin_isReady_() const;                                  // _2C
	virtual void do_begin_(const void*, const char*);                           // _30
	virtual void do_end_();                                                     // _34
	virtual void do_tag_(unsigned long, const void*, unsigned long);            // _38
	virtual void do_systemTagCode_(unsigned short, const void*, unsigned long); // _3C
	virtual void do_begin(const void*, const char*);                            // _40
	virtual void do_end();                                                      // _44
	virtual void do_isReady();                                                  // _48
	virtual void do_jump_isReady();                                             // _4C
	virtual void do_jump(const void*, const char*);                             // _50
	virtual void do_branch_query(unsigned short);                               // _54
	virtual void do_branch_queryResult();                                       // _58
	virtual void do_branch(const void*, const char*);                           // _5C
	virtual void doResetAbtnWaitSE();                                           // _60
	virtual void doCharacterSEStart();                                          // _64
	virtual void doCharacterSE(int);                                            // _68
	virtual void doCharacterSEEnd();                                            // _6C
	virtual void doFastForwardSE();                                             // _70
	virtual void reset();                                                       // _74

	TSequenceProcessor(JMessage::TReference*, JMessage::TControl*);
};
} // namespace Window
} // namespace P2JME

#endif
