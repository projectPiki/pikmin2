#ifndef _PSM_ENEMYSPECIAL_H
#define _PSM_ENEMYSPECIAL_H

#include "PSM/EnemyBase.h"
#include "types.h"

namespace PSM {
/**
 * @size = 0x100
 */
struct EnemyBoss : public EnemyBase {
	EnemyBoss(Game::EnemyBase* gameObj);

	virtual ~EnemyBoss();                                            // _14 (weak)
	virtual CreatureCastType getCastType() { return CCT_EnemyBoss; } // _1C (weak)
	virtual void exec();                                             // _20
	virtual void onCalcOn();                                         // _28
	virtual bool judgeNearWithPlayer(const Vec&, const Vec&, f32,
	                                 f32);    // _34
	virtual void onPlayingSe(u32, JAISound*); // _38
	virtual void setKilled();                 // _C8
	virtual void jumpRequest(u16)     = 0;    // _D4
	virtual void postPikiAttack(bool) = 0;    // _D8
	virtual void updateDisappearing();        // _DC
	virtual void onDeathMotionTop();          // _E0
	virtual void onAppear() { }               // _E4 (weak)
	virtual void onAppear1st() { }            // _E8 (weak)
	virtual void onDisappear() { }            // _EC (weak)

	void calcDistance();
	void setAppearFlag(bool);
	void dyingFrameWork();
	bool isOnDisappearing();

	// _00     = VTBL 1
	// _28     = VTBL 2
	// _00-_E0 = EnemyBase
	f32 mNaviDistance;        // _E0
	u16 mDisappearTimer;      // _E4
	u32 _E8;                  // _E8
	JSULink<EnemyBoss> mLink; // _EC
	bool mAppearFlag;         // _FC
	bool mIsFirstAppear;      // _FD
	u8 _FE;                   // _FE - unknown
	u8 mHasReset;             // _FF
};

/**
 * @size = 0x11C
 */
struct EnemyMidBoss : public EnemyBoss {
	// Representation of the different states of m_boss.bms
	enum BossBgmState {
		BossBgm_InactiveLoop      = 0, // only beginning part of main loop
		BossBgm_MainLoop          = 1,
		BossBgm_AttackPrep        = 2,
		BossBgm_Attack            = 3,
		BossBgm_Flick             = 4,
		BossBgm_Attack2           = 5, // the 3 alternate attacks dont seem to be called directly
		BossBgm_Attack3           = 6,
		BossBgm_Attack4           = 7,
		BossBgm_AttackLong        = 8,
		BossBgm_Appear            = 9,
		BossBgm_Defeated          = 10,
		BossBgm_WaterwraithEscape = 11,
		BossBgm_WaterwraithFlick  = 12,
	};

	EnemyMidBoss(Game::EnemyBase*);

	virtual ~EnemyMidBoss();                                            // _14 (weak)
	virtual CreatureCastType getCastType() { return CCT_EnemyMidBoss; } // _1C (weak)
	virtual void onCalcOn();                                            // _28
	virtual void jumpRequest(u16);                                      // _D4
	virtual void postPikiAttack(bool);                                  // _D8
	virtual void onAppear1st();                                         // _E8

	// _00      = VTBL 1
	// _28      = VTBL 2
	// _00-_100 = EnemyBoss
	u32 mNumLinks;                 // _100
	f32 _104;                      // _104
	JSULink<PSM::EnemyBoss> mLink; // _108
	u8 _118;                       // _118
};

/**
 * @size = 0x11E
 */
struct EnemyBigBoss : public EnemyMidBoss {
	// Representation of the different states of l_boss.bms
	enum BossBgmState {
		BigBossBgm_Null           = 0, // crashes game?
		BigBossBgm_4Weapons       = 1,
		BigBossBgm_AttackPrep     = 2,
		BigBossBgm_FlareCannon    = 3,
		BigBossBgm_NoWeaponsFlick = 4,
		BigBossBgm_ComedyBomb     = 5,
		BigBossBgm_MonsterPump    = 6,
		BigBossBgm_ShockTherapist = 7,
		BigBossBgm_3Weapons       = 8,
		BigBossBgm_2Weapons       = 9,
		BigBossBgm_1Weapon        = 10,
		BigBossBgm_NoWeapons      = 11,
		BigBossBgm_Intro          = 12, // Unused intro to TD theme
		BigBossBgm_Defeated       = 13,
	};

	EnemyBigBoss(Game::EnemyBase*);

	virtual ~EnemyBigBoss();                                            // _14 (weak)
	virtual CreatureCastType getCastType() { return CCT_EnemyBigBoss; } // _1C (weak)
	virtual void jumpRequest(u16);                                      // _D4
	virtual void onDeathMotionTop();                                    // _E0
	virtual void onAppear1st();                                         // _E8

	static EnemyBigBoss* sBigBoss;

	// _00      = VTBL 1
	// _28      = VTBL 2
	// _00-_11C = EnemyMidBoss
	u16 mCurrBgmState; // _11C
};

} // namespace PSM

#endif
