#ifndef _PSM_ENEMYSPECIAL_H
#define _PSM_ENEMYSPECIAL_H

#include "PSM/EnemyBase.h"
#include "types.h"

namespace PSM {
/**
 * @size = 0x100
 */
struct EnemyBoss : public EnemyBase {
	virtual ~EnemyBoss();                   // _14 (weak)
	virtual CreatureCastType getCastType(); // _1C (weak)
	virtual void exec();                    // _20
	virtual void onCalcOn();                // _28
	virtual bool judgeNearWithPlayer(const Vec&, const Vec&, float,
	                                 float);            // _34
	virtual void onPlayingSe(unsigned long, JAISound*); // _38
	virtual void setKilled();                           // _C8
	virtual void jumpRequest(u16)     = 0;              // _D4
	virtual void postPikiAttack(bool) = 0;              // _D8
	virtual void updateDisappearing();                  // _DC
	virtual void onDeathMotionTop();                    // _E0
	virtual void onAppear();                            // _E4 (weak)
	virtual void onAppear1st();                         // _E8 (weak)
	virtual void onDisappear();                         // _EC (weak)

	void calcDistance();
	void setAppearFlag(bool);
	void dyingFramework();
	void isOnDisappearing();

	float _E0;            // _E0
	u16 m_disappearTimer; // _E4
	int _E8;              // _E8
	JSUPtrLink _EC;       // _EC - could be JSULink<PSM::EnemyBoss>
	bool m_appearFlag;    // _FC
	u8 _FD;               // _FD - possibly didAppearSoundPlay flag
	u8 _FE;               // _FE - unknown
	u8 _FF;               // _FF - possibly padding
};

/**
 * @size = 0x11C
 */
struct EnemyMidBoss : public EnemyBoss {
	EnemyMidBoss(Game::EnemyBase*);

	virtual ~EnemyMidBoss();                // _14 (weak)
	virtual CreatureCastType getCastType(); // _1C (weak)
	virtual void onCalcOn();                // _28
	virtual void jumpRequest(u16);          // _D4
	virtual void postPikiAttack(bool);      // _D8
	virtual void onAppear1st();             // _E8

	u8 _100[0x4];    // _100 - unknown
	float _104;      // _104
	JSUPtrLink _108; // _108 - could be JSULink<PSM::EnemyBoss>
	u8 _118;         // _118
	u8 _119[0x3];    // _119 - unknown
};

/**
 * @size = 0x11E
 */
struct EnemyBigBoss : public EnemyMidBoss {
	EnemyBigBoss(Game::EnemyBase*);

	virtual ~EnemyBigBoss();                // _14 (weak)
	virtual CreatureCastType getCastType(); // _1C (weak)
	virtual void jumpRequest(u16);          // _D4
	virtual void onDeathMotionTop();        // _E0
	virtual void onAppear1st();             // _E8

	u16 _11C; // _11C
};

} // namespace PSM

#endif
