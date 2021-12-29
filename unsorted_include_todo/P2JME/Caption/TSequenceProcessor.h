#ifndef _P2JME_CAPTION_TSEQUENCEPROCESSOR_H
#define _P2JME_CAPTION_TSEQUENCEPROCESSOR_H

/*
    __vt__Q35P2JME7Caption18TSequenceProcessor:
    .4byte 0
    .4byte 0
    .4byte __dt__Q35P2JME7Caption18TSequenceProcessorFv
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
    .4byte do_isReady__Q35P2JME7Caption18TSequenceProcessorFv
    .4byte do_jump_isReady__Q25P2JME18TSequenceProcessorFv
    .4byte do_jump__Q25P2JME18TSequenceProcessorFPCvPCc
    .4byte do_branch_query__Q25P2JME18TSequenceProcessorFUs
    .4byte do_branch_queryResult__Q25P2JME18TSequenceProcessorFv
    .4byte do_branch__Q25P2JME18TSequenceProcessorFPCvPCc
    .4byte doResetAbtnWaitSE__Q35P2JME7Caption18TSequenceProcessorFv
    .4byte doCharacterSEStart__Q35P2JME7Caption18TSequenceProcessorFv
    .4byte doCharacterSE__Q35P2JME7Caption18TSequenceProcessorFi
    .4byte doCharacterSEEnd__Q35P2JME7Caption18TSequenceProcessorFv
    .4byte doFastForwardSE__Q35P2JME6Window18TSequenceProcessorFv
    .4byte reset__Q25P2JME18TSequenceProcessorFv
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

	// _00 VTBL
};
} // namespace JMessage

namespace P2JME {
namespace Caption {
	struct TSequenceProcessor : public TProcessor {
		virtual ~TSequenceProcessor();                                  // _00
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
		                               unsigned long);    // _34
		virtual void do_begin(const void*, const char*);  // _38
		virtual void do_end();                            // _3C
		virtual void do_isReady();                        // _40
		virtual void do_jump_isReady();                   // _44
		virtual void do_jump(const void*, const char*);   // _48
		virtual void do_branch_query(unsigned short);     // _4C
		virtual void do_branch_queryResult();             // _50
		virtual void do_branch(const void*, const char*); // _54
		virtual void doResetAbtnWaitSE();                 // _58
		virtual void doCharacterSEStart();                // _5C
		virtual void doCharacterSE(int);                  // _60
		virtual void doCharacterSEEnd();                  // _64
		virtual void doFastForwardSE();                   // _68
		virtual void reset();                             // _6C

		// _00 VTBL
	};
} // namespace Caption
} // namespace P2JME

#endif
