#ifndef _JMESSAGE_TSEQUENCEPROCESSOR_H
#define _JMESSAGE_TSEQUENCEPROCESSOR_H

/*
    __vt__Q28JMessage18TSequenceProcessor:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28JMessage18TSequenceProcessorFv
    .4byte do_reset__Q28JMessage10TProcessorFv
    .4byte do_character__Q28JMessage10TProcessorFi
    .4byte do_tag__Q28JMessage10TProcessorFUlPCvUl
    .4byte do_systemTagCode__Q28JMessage10TProcessorFUsPCvUl
    .4byte do_select_begin__Q28JMessage10TProcessorFUl
    .4byte do_select_end__Q28JMessage10TProcessorFv
    .4byte do_select_separate__Q28JMessage10TProcessorFv
    .4byte do_reset___Q28JMessage18TSequenceProcessorFPCc
    .4byte do_setBegin_isReady___Q28JMessage18TSequenceProcessorCFv
    .4byte do_begin___Q28JMessage18TSequenceProcessorFPCvPCc
    .4byte do_end___Q28JMessage18TSequenceProcessorFv
    .4byte do_tag___Q28JMessage18TSequenceProcessorFUlPCvUl
    .4byte do_systemTagCode___Q28JMessage18TSequenceProcessorFUsPCvUl
    .4byte do_begin__Q28JMessage18TSequenceProcessorFPCvPCc
    .4byte do_end__Q28JMessage18TSequenceProcessorFv
    .4byte do_isReady__Q28JMessage18TSequenceProcessorFv
    .4byte do_jump_isReady__Q28JMessage18TSequenceProcessorFv
    .4byte do_jump__Q28JMessage18TSequenceProcessorFPCvPCc
    .4byte do_branch_query__Q28JMessage18TSequenceProcessorFUs
    .4byte do_branch_queryResult__Q28JMessage18TSequenceProcessorFv
    .4byte do_branch__Q28JMessage18TSequenceProcessorFPCvPCc
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
};
} // namespace JMessage

namespace JMessage {
struct TSequenceProcessor : public TProcessor {
	virtual ~TSequenceProcessor();                                              // _08
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

	TSequenceProcessor(const JMessage::TReference*, JMessage::TControl*);
	void process(const char*);
	void on_isReady();
	void on_jump_isReady();
	void on_jump(const void*, const char*);
	void on_branch_queryResult();
	void on_branch(const void*, const char*);
	void process_onJump_limited_(const JMessage::TSequenceProcessor*);
	void process_onJump_(const JMessage::TSequenceProcessor*);
	void process_onBranch_limited_(const JMessage::TSequenceProcessor*, unsigned long);
	void process_onBranch_(const JMessage::TSequenceProcessor*, unsigned long);
};
} // namespace JMessage

#endif
