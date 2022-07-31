#ifndef _JSYSTEM_JMESSAGE_TPROCESSOR_H
#define _JSYSTEM_JMESSAGE_TPROCESSOR_H

namespace JMessage {

struct TReference;

struct TProcessor {
	// virtual ~TProcessor();                                                      // _08
	// virtual void do_reset();                                                    // _0C
	// virtual void do_character(int);                                             // _10
	// virtual void do_tag(unsigned long, const void*, unsigned long);             // _14
	// virtual void do_systemTagCode(unsigned short, const void*, unsigned long);  // _18
	// virtual void do_select_begin(unsigned long);                                // _1C
	// virtual void do_select_end();                                               // _20
	// virtual void do_select_separate();                                          // _24
	// virtual void do_reset_(const char*);                                        // _28
	// virtual void do_setBegin_isReady_() const;                                  // _2C
	// virtual void do_begin_(const void*, const char*);                           // _30
	// virtual void do_end_();                                                     // _34
	// virtual void do_tag_(unsigned long, const void*, unsigned long);            // _38
	// virtual void do_systemTagCode_(unsigned short, const void*, unsigned long); // _3C

	void reset_(const char*);
	void setBegin_messageID(unsigned long, unsigned long, bool*);
};

struct TSequenceProcessor {
};

struct TRenderingProcessor : public TProcessor {
	// virtual ~TRenderingProcessor();                                             // _08
	// virtual void do_reset_(const char*);                                        // _28
	// virtual void do_begin_(const void*, const char*);                           // _30
	// virtual void do_end_();                                                     // _34
	// virtual void do_tag_(unsigned long, const void*, unsigned long);            // _38
	// virtual void do_systemTagCode_(unsigned short, const void*, unsigned long); // _3C
	// virtual void do_begin(const void*, const char*);                            // _40
	// virtual void do_end();                                                      // _44

	TRenderingProcessor(const JMessage::TReference*);
	void process(const char*);
};
} // namespace JMessage

#endif
