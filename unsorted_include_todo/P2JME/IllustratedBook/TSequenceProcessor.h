#ifndef _P2JME_ILLUSTRATEDBOOK_TSEQUENCEPROCESSOR_H
#define _P2JME_ILLUSTRATEDBOOK_TSEQUENCEPROCESSOR_H

namespace JMessage {
struct TProcessor {
	virtual void _00() = 0;                      // _00
	virtual void do_reset();                     // _04
	virtual void _08() = 0;                      // _08
	virtual void _0C() = 0;                      // _0C
	virtual void _10() = 0;                      // _10
	virtual void do_select_begin(unsigned long); // _14
	virtual void do_select_end();                // _18
	virtual void do_select_separate();           // _1C

	// _00 VTBL
};
} // namespace JMessage

namespace P2JME {
struct TSeqProcNoSeq {
	virtual void _00() = 0;    // _00
	virtual void _04() = 0;    // _04
	virtual void _08() = 0;    // _08
	virtual void _0C() = 0;    // _0C
	virtual void _10() = 0;    // _10
	virtual void _14() = 0;    // _14
	virtual void _18() = 0;    // _18
	virtual void _1C() = 0;    // _1C
	virtual void _20() = 0;    // _20
	virtual void _24() = 0;    // _24
	virtual void _28() = 0;    // _28
	virtual void _2C() = 0;    // _2C
	virtual void _30() = 0;    // _30
	virtual void _34() = 0;    // _34
	virtual void _38() = 0;    // _38
	virtual void _3C() = 0;    // _3C
	virtual void do_isReady(); // _40

	// _00 VTBL
};
} // namespace P2JME

namespace P2JME {
namespace IllustratedBook {
	struct TSequenceProcessor : public TProcessor, public TSeqProcNoSeq {
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
} // namespace IllustratedBook
} // namespace P2JME

#endif
