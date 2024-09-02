#ifndef _P2JME_TSEQUENCEPROCESSOR_H
#define _P2JME_TSEQUENCEPROCESSOR_H

#include "types.h"
#include "JSystem/JMessage/TProcessor.h"
#include "Controller.h"
#include "BitFlag.h"

namespace P2JME {
struct TSequenceProcessor : public JMessage::TSequenceProcessor {
	TSequenceProcessor(const JMessage::TReference*, JMessage::TControl*);

	enum seqProcFlags {
		SeqProc_IsActive        = 0x1, // Active when text is being written
		SeqProc_IsWaitingPressA = 0x2, // Text page finished, waiting for confirmation
		SeqProc_IsWriting       = 0x4, // Set while text is writing, unset when waiting for press A
		SeqProc_IsForceFinish   = 0x8, // Pressed B to force finish page
	};

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

	inline void setFlag(u8 flag) { mFlags.typeView |= flag; }
	inline void resetFlag(u8 flag) { mFlags.typeView &= ~flag; }
	inline bool isFlag(u8 flag) const { return mFlags.typeView & flag; }

	// _00     = VTBL
	// _00-_4C = JMessage::TSequenceProcessor
	f32 mPageFinishWaitDuration; // _4C, how long to delay input after a text page finishes, usually 0.11f
	f32 mPageFinishWaitTimer;    // _50, set to above value on page finish, must be 0 to proceed
	Controller* mController1;    // _54
	Controller* mController2;    // _58
	int mCharactersWritten;      // _5C, increments for each character written, when 0 the start sound will play
	u32 mUnused0;                // _60
	u32 mUnused1;                // _64
	BitFlag<u32> mFlags;         // _68
	u8 mFastSeType;              // _6C, when 1 or 2, the ship voice uses the "fast" setting
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
