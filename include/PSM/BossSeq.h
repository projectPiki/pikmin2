#ifndef _PSM_BOSSSEQ_H
#define _PSM_BOSSSEQ_H

#include "PSSystem/PSSeq.h"

namespace PSM {
struct EnemyBoss;

struct MiddleBossSeq : public PSSystem::JumpBgmSeq {
	MiddleBossSeq(const char* bmsFileName, const JAInter::SoundInfo& info, PSSystem::DirectorMgrBase* directorMgr);

	virtual ~MiddleBossSeq();                  // _08 (weak)
	virtual void exec();                       // _2C
	virtual void requestJumpBgmQuickly(u16);   // _50
	virtual void requestJumpBgmOnBeat(u16);    // _54
	virtual void requestJumpBgmEveryBeat(u16); // _58
	virtual void onJump(u16 track);            // _60
	virtual u16 jumpCheck(u16 track);          // _64

	// _10      = VTBL
	// _00-_134 = PSSystem::JumpBgmSeq
	EnemyBoss* mCurrBossObj; // _134
	u32 mAvoidJumpMaxTime;   // _138
	u16 mCurrentAttackMixId; // _13C
	u16 mAvoidJumpTimer;     // _13E
	u8 _140;                 // _140
};

struct BigBossSeq : public MiddleBossSeq {
	BigBossSeq(const char* bmsFileName, const JAInter::SoundInfo& info, PSSystem::DirectorMgrBase* directorMgr);

	virtual ~BigBossSeq() { }         // _08 (weak)
	virtual void onJump(u16 track);   // _60
	virtual u16 jumpCheck(u16 track); // _64

	// _10      = VTBL
	// _00-_144 = MiddleBossSeq
};

} // namespace PSM

#endif
