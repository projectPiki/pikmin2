#ifndef _P2JME_TSEQUENCEPROCESSOR_H
#define _P2JME_TSEQUENCEPROCESSOR_H

#include "types.h"
#include "JSystem/JMessage/TProcessor.h"
#include "Controller.h"
#include "BitFlag.h"

namespace P2JME {
struct TSequenceProcessor : public JMessage::TSequenceProcessor {
	TSequenceProcessor(const JMessage::TReference*, JMessage::TControl*);

	virtual ~TSequenceProcessor() { }                                          // _08 (weak)
	virtual void do_character(int);                                            // _10
	virtual bool do_tag(unsigned long, const void*, unsigned long);            // _14
	virtual bool do_systemTagCode(unsigned short, const void*, unsigned long); // _18
	virtual void do_begin(const void*, const char*);                           // _40
	virtual void do_end();                                                     // _44
	virtual bool do_isReady();                                                 // _48
	virtual bool do_jump_isReady();                                            // _4C
	virtual void do_jump(const void*, const char*);                            // _50
	virtual void do_branch_query(unsigned short);                              // _54
	virtual int do_branch_queryResult();                                       // _58
	virtual void do_branch(const void*, const char*);                          // _5C
	virtual void doResetAbtnWaitSE();                                          // _60
	virtual void doCharacterSEStart() { }                                      // _64 (weak)
	virtual void doCharacterSE(int) { }                                        // _68 (weak)
	virtual void doCharacterSEEnd() { }                                        // _6C (weak)
	virtual void doFastForwardSE() { }                                         // _70 (weak)
	virtual void reset();                                                      // _74

	bool tagControl(unsigned short, const void*, unsigned long);
	void setAbtnWait();
	void resetAbtnWait();

	float _4C;        // _4C
	float _50;        // _50
	Controller* _54;  // _54
	Controller* _58;  // _58
	int _5C;          // _5C
	u32 _60;          // _60
	u32 _64;          // _64
	BitFlag<u32> _68; // _68
	s8 _6C;           // _6C
	s8 _6D;           // _6D
	s8 _6E;           // _6E
	s8 _6F;           // _6F
};
} // namespace P2JME

#endif
