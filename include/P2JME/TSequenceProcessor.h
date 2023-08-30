#ifndef _P2JME_TSEQUENCEPROCESSOR_H
#define _P2JME_TSEQUENCEPROCESSOR_H

#include "types.h"
#include "JSystem/JMessage/TProcessor.h"
#include "Controller.h"
#include "BitFlag.h"

namespace P2JME {
struct TSequenceProcessor : public JMessage::TSequenceProcessor {
	TSequenceProcessor(const JMessage::TReference*, JMessage::TControl*);

	virtual ~TSequenceProcessor() { }                     // _08 (weak)
	virtual void do_character(int);                       // _10
	virtual bool do_tag(u32, const void*, u32);           // _14
	virtual bool do_systemTagCode(u16, const void*, u32); // _18
	virtual void do_begin(const void*, const char*);      // _40
	virtual void do_end();                                // _44
	virtual bool do_isReady();                            // _48
	virtual bool do_jump_isReady();                       // _4C
	virtual void do_jump(const void*, const char*);       // _50
	virtual void do_branch_query(u16);                    // _54
	virtual int do_branch_queryResult();                  // _58
	virtual void do_branch(const void*, const char*);     // _5C
	virtual void doResetAbtnWaitSE();                     // _60
	virtual void doCharacterSEStart() { }                 // _64 (weak)
	virtual void doCharacterSE(int) { }                   // _68 (weak)
	virtual void doCharacterSEEnd() { }                   // _6C (weak)
	virtual void doFastForwardSE() { }                    // _70 (weak)
	virtual void reset();                                 // _74

	bool tagControl(u16, const void*, u32);
	void setAbtnWait();
	void resetAbtnWait();

	// _00     = VTBL
	// _00-_4C = JMessage::TSequenceProcessor
	f32 _4C;                  // _4C
	f32 _50;                  // _50
	Controller* mController1; // _54
	Controller* mController2; // _58
	int _5C;                  // _5C
	u32 _60;                  // _60
	u32 _64;                  // _64
	BitFlag<u32> mFlags;      // _68
	u8 _6C;                   // _6C
	s8 _6D;                   // _6D
	s8 _6E;                   // _6E
	s8 _6F;                   // _6F
};

struct TSeqProcNoSeq : public TSequenceProcessor {
	TSeqProcNoSeq(const JMessage::TReference* ref, JMessage::TControl* owner)
	    : TSequenceProcessor(ref, owner)
	{
	}
	virtual ~TSeqProcNoSeq() { }               // _08 (weak)
	virtual bool do_isReady() { return true; } // _48 (weak)

	// _00     = VTBL
	// _00-_70 = TSequenceProcessor
};
} // namespace P2JME

#endif
