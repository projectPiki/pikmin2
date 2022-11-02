#ifndef _PSM_BOSSSEQ_H
#define _PSM_BOSSSEQ_H

#include "PSSystem/PSBgm.h"

namespace PSM {
struct MiddleBossSeq : public PSSystem::JumpBgmSeq {
	MiddleBossSeq(const char*, const JAInter::SoundInfo&, PSSystem::DirectorMgrBase*);

	virtual ~MiddleBossSeq();                  // _08 (weak)
	virtual void exec();                       // _2C
	virtual void requestJumpBgmQuickly(u16);   // _50
	virtual void requestJumpBgmOnBeat(u16);    // _54
	virtual void requestJumpBgmEveryBeat(u16); // _58
	virtual void onJump(u16);                  // _60
	virtual void jumpCheck(u16);               // _64

	// _10      = VTBL
	// _00-_134 = PSSystem::JumpBgmSeq
	u32 _134; // _134, unknown
	u32 _138; // _138
	s16 _13C; // _13C
	s16 _13E; // _13E
	u8 _140;  // _140
};

struct BigBossSeq : public MiddleBossSeq {
	BigBossSeq(const char*, const JAInter::SoundInfo&, PSSystem::DirectorMgrBase*);

	virtual ~BigBossSeq();                  // _08 (weak)
	virtual void onJump(unsigned short);    // _60
	virtual void jumpCheck(unsigned short); // _64

	// _10      = VTBL
	// _00-_144 = MiddleBossSeq
};

} // namespace PSM

#endif
