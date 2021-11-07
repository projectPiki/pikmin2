#ifndef _JMESSAGE_TSEQUENCEPROCESSOR_H
#define _JMESSAGE_TSEQUENCEPROCESSOR_H

namespace JMessage {
struct TProcessor {
	virtual void _00() = 0;                                         // _00
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

namespace JMessage {
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

	// _00 VTBL
};
} // namespace JMessage

#endif
