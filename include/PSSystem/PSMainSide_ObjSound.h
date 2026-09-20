#ifndef _PSSYSTEM_PSMAINSIDE_OBJSOUND_H
#define _PSSYSTEM_PSMAINSIDE_OBJSOUND_H

#include "P2Macros.h"
#include "JSystem/JAudio/JAI/JAIAnimeSound.h"
#include "PSM/Creature.h"
#include "PSM/BattleLink.h"
#include "PSM/KehaiLink.h"
#include "types.h"
#include "PSM/DirectorLink.h"
#include "PSM/EventBase.h"
#include "PSM/ObjBase.h"
#include "PSM/CreatureObj.h"
#include "PSGame/PSSe.h"
#include "PSGame/SeMgr.h"

namespace Game {
struct Pellet;
} // namespace Game

namespace PSM {
struct CreatureAnime : public Creature, public JAIAnimeSound {
	CreatureAnime(Game::Creature*, u8);

	// vtable 1 (JKRDisposer, _10)
	// vtable 2 (Creature, _28)
	virtual void frameEnd_onPlaySe();      // _18
	virtual CreatureCastType getCastType() // _1C (weak)
	{
		return CCT_CreatureAnime;
	}
	virtual void exec();                    // _20
	virtual JAInter::Object* getJAIObject() // _24 (weak)
	{
		return static_cast<JAInter::Object*>(this);
	}
	virtual void onCalcOn();                 // _18
	virtual JAISound** getHandleArea(u8 idx) // _2C
	{
		return &mSounds[idx];
	}
	// vtable 3 (JAIAnimeSound + self, _28)
	virtual JAISound* startSound(u32, u32);                            // _88
	virtual void startSound(u8, u32, u32);                             // _8C
	virtual void startSound(JAISound**, u32, u32);                     // _90
	virtual void startAnimSound(u32, JAISound**, JAInter::Actor*, u8); // _94
	virtual void playActorAnimSound(JAInter::Actor*, f32, u8);         // _98
	virtual void onCalcTurnOn();                                       // _9C
	virtual void onCalcTurnOff();                                      // _A0

	void setAnime(JAIAnimeSoundData* data, u32 flag, f32 loopStartFrame, f32 loopEndFrame);

	// _10     = VTBL 1
	// _28     = VTBL 2
	// _00-_30 = Creature
	// _30-_AC = JAIAnimeSound
	f32 _AC;      // _AC
	f32 _B0;      // _B0
	bool mActive; // _B4
};
} // namespace PSM

namespace Game {
struct EnemyBase;
} // namespace Game

namespace PSM {
/**
 * @size = 0xE0
 */
struct EnemyBase : public CreatureAnime, public BattleLink, public KehaiLink {
	EnemyBase(Game::EnemyBase*, u8);

	// vtable 2 (CreatureAnime, _28)
	// virtual ~EnemyBase() { }               // _14 (weak)
	virtual CreatureCastType getCastType() // _1C (weak)
	{
		return CCT_Enemy;
	}
	virtual void onCalcOn();                           // _28
	virtual JAISound* startSoundInner(StartSoundArg&); // _30
	virtual bool judgeNearWithPlayer(const Vec&, const Vec&, f32,
	                                 f32); // _34
	// vtable 3 (CreatureAnime)
	virtual void startAnimSound(u32, JAISound**, JAInter::Actor*,
	                            u8); // _94 (weak)
	virtual void onCalcTurnOn();     // _9C
	virtual void onCalcTurnOff();    // _A0
	// vtable 4 (BattleLink)
	// vtable 5 (KehaiLink + self)
	virtual void battleOff();    // _C4 (weak)
	virtual void setKilled() { } // _C8 (weak)
	virtual void updateKehai();  // _CC
	virtual void updateBattle(); // _D0

	bool calcKehai();

	// _00-_10 	= JSUPtrLink (+ vtable 1)
	// _10-_28	= JKRDisposer
	// _28		= VTABLE 2
	// _2C-_30	= Game::Creature* (or Game::EnemyBase*, etc)
	// _30-_AC	= JAIAnimeSound
	// _AC-_B8	= CreatureAnime
	// _B8-_CC 	= BattleLink
	// _CC-_E0	= KehaiLink
};

/**
 * @size = 0xE0
 */
struct EnemyNotAggressive : public EnemyBase {
	EnemyNotAggressive(Game::EnemyBase*, u8);

	// vtable 2 (CreatureAnime, _28)
	virtual CreatureCastType getCastType() { return CCT_EnemyNotAggressive; } // _1C (weak)
	// vtable 3 (CreatureAnime)
	// vtable 4 (BattleLink)
	// vtable 5 (KehaiLink + self)
	virtual void battleOff() { }    // _C4 (weak)
	virtual void updateKehai() { }  // _CC (weak)
	virtual void updateBattle() { } // _D0
	virtual void kehaiOn() { }      // _D4 (weak)
	virtual void kehaiOff() { }     // _D8 (weak)
	virtual void battleOn() { }     // _DC (weak)
};

/**
 * @size = 0xE0
 */
struct EnemyBig : public EnemyBase {
	inline EnemyBig(Game::EnemyBase* enemy, u8 a)
	    : EnemyBase(enemy, a)
	{
	}

	// virtual ~EnemyBig() { }                 // _14 (weak)
	virtual CreatureCastType getCastType() { return CCT_EnemyBig; } // _1C (weak)
	virtual bool judgeNearWithPlayer(const Vec&, const Vec&, f32,
	                                 f32); // _34
};

/**
 * @size = 0xE0
 */
struct EnemyHekoi : public EnemyBase {
	inline EnemyHekoi(Game::EnemyBase* enemy, u8 a)
	    : EnemyBase(enemy, a)
	{
	}

	// virtual ~EnemyHekoi() { }              // _04
	virtual CreatureCastType getCastType() // _0C
	{
		return CCT_EnemyHekoi;
	}
};

/**
 * @size = 0xE0
 */
struct Enemy_SpecialChappy : public EnemyBig {
	inline Enemy_SpecialChappy(Game::EnemyBase* enemy, u8 a)
	    : EnemyBig(enemy, a)
	{
	}

	// virtual ~Enemy_SpecialChappy();           // _14 (weak)
	virtual void onPlayingSe(u32, JAISound*); // _38
};

} // namespace PSM

namespace PSM {
/**
 * @size = 0x100
 */
struct EnemyBoss : public EnemyBase {
	EnemyBoss(Game::EnemyBase* gameObj);

	// virtual ~EnemyBoss();                                         // _14 (weak)
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

	// virtual ~EnemyMidBoss();                                         // _14 (weak)
	virtual CreatureCastType getCastType() { return CCT_EnemyMidBoss; } // _1C (weak)
	virtual void onCalcOn();                                            // _28
	virtual void jumpRequest(u16);                                      // _D4
	virtual void postPikiAttack(bool);                                  // _D8
	virtual void onAppear1st();                                         // _E8

	static inline bool isSecondaryAttackTrack(u16 track)
	{
		return track == EnemyMidBoss::BossBgm_Attack2 || track == EnemyMidBoss::BossBgm_Attack3 || track == EnemyMidBoss::BossBgm_Attack4;
	}

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

namespace PSM {
struct ActorDirector_TrackOn;
struct Otakara;

struct EventLink : public DirectorLink {
	inline EventLink(void* p1)
	    : DirectorLink(p1)
	{
	}

	virtual ListDirectorActor* getListDirectorActor(); // _08

	// _00-_10  = JSUPtrLink
	// _10      = VTABLE
};

struct OtakaraEventLink : public DirectorLink {
	inline OtakaraEventLink(Game::Pellet* gameObj)
	    : DirectorLink(gameObj)
	{
	}

	virtual ListDirectorActor* getListDirectorActor(); // _08
	virtual void eventFinish();                        // _18
	virtual bool is2PBattle() { return false; }        // _1C (weak)

	// _00-_10  = JSUPtrLink
	// _10      = VTABLE
};

struct OtakaraEventLink_2PBattle : public OtakaraEventLink {
	inline OtakaraEventLink_2PBattle(Game::Pellet* gameObj)
	    : OtakaraEventLink(gameObj)
	{
	}

	virtual ListDirectorActor* getListDirectorActor(); // _08
	virtual void eventStart();                         // _0C
	virtual void eventRestart();                       // _10
	virtual void eventStop();                          // _14
	virtual void eventFinish();                        // _18
	virtual bool is2PBattle() { return true; }         // _1C (weak)

	Otakara* getPSOtakara();
	bool isAvoidCase();
	ActorDirector_TrackOn* getTargetDirector();
};
} // namespace PSM

namespace Game {
namespace PelletOtakara {
struct Object;
}

namespace PelletItem {
struct Object;
}
struct Onyon;
} // namespace Game

namespace PSM {
struct Otakara : public EventBase {
	inline Otakara(Game::Creature* gameObj)
	    : EventBase(gameObj, 2)
	    , mBedamaType(PSMBedama_None)
	    , mOnyon(nullptr)
	    , mEventLink(gameObj)
	    , mOtaEvent(nullptr)
	{
	}

	enum BedamaType {
		PSMBedama_None   = 0,
		PSMBedama_Cherry = 1,
		PSMBedama_Red    = 2,
		PSMBedama_Blue   = 3,
		PSMBedama_Yellow = 4,
	};

	// vtable 1 (JSUPtrLink, _10)
	// vtable 2 (JKRDisposer -> ObjBase -> Creature, _28)
	virtual ~Otakara();                                            // _14 (thunks at _10 and _48)
	virtual CreatureCastType getCastType() { return CCT_Otakara; } // _1C (weak)

	// vtable 3 (JAInter::ObjectBase -> JAInter::Object + self, _28)
	virtual void otakaraEventStart();   // _88
	virtual void otakaraEventRestart(); // _8C
	virtual void otakaraEventStop();    // _90
	virtual void otakaraEventFinish();  // _94

	void setGoalOnyon(Game::Creature*);

	bool avoidNormalDirection();

	inline bool is2PBattle()
	{
		if (mOtaEvent->is2PBattle() && (int)mBedamaType != PSMBedama_None) {
			return true;
		}
		return false;
	}

	inline bool canFinish()
	{
		bool test = true;
		u32 type  = mBedamaType;
		if (type - 2 <= PSMBedama_Cherry || (int)type == PSMBedama_Yellow) {
			test = true;
		} else if (type - 1 <= PSMBedama_Red || (int)type == PSMBedama_Yellow) {
			if (!mOnyon) {
				test = true;
			} else {
				test = false;
			}
		} else {
			test = false;
		}
		return test;
	}

	// _00      = VTABLE
	// _04-_70  = CreatureObj
	u32 mBedamaType;             // _70
	Game::Onyon* mOnyon;         // _74
	EventLink mEventLink;        // _78
	OtakaraEventLink* mOtaEvent; // _8C
};

struct PelletOtakara : public Otakara {
	PelletOtakara(Game::PelletOtakara::Object*, bool);

	// vtable 1 (JSUPtrLink, _10)
	// vtable 2 (JKRDisposer -> ObjBase -> Creature, _28)
	virtual CreatureCastType getCastType() { return CCT_PelletOtakara; } // _1C (weak)

	// vtable 3 (JAInter::ObjectBase -> JAInter::Object + self, _28)

	// _00      = VTABLE
	// _04-_70  = CreatureObj
	// _70-_90  = Otakara
};

struct PelletItem : public Otakara {
	PelletItem(Game::PelletItem::Object*);

	// vtable 1 (JSUPtrLink, _10)
	// vtable 2 (JKRDisposer -> ObjBase -> Creature, _28)
	virtual CreatureCastType getCastType() { return CCT_PelletItem; } // _1C (weak)

	// vtable 3 (JAInter::ObjectBase -> JAInter::Object + self, _28)

	// _00      = VTABLE
	// _04-_70  = CreatureObj
	// _70-_90  = Otakara
};

} // namespace PSM

namespace Game {
struct BaseItem;
} // namespace Game

namespace PSM {
struct WorkItem : public EventBase {
	WorkItem(Game::BaseItem*);
	// vtable 2
	/**
	 * @reifiedAddress{804638E8}
	 * @reifiedFile{utilityU/PSMainSide_ObjSound.cpp}
	 */
	virtual CreatureCastType getCastType() { return CCT_WorkItem; }; // _0C

	// vtable 3
	virtual void eventStart();   // _40
	virtual void eventRestart(); // _44
	virtual void eventStop();    // _48
	virtual void eventFinish();  // _4C

	EventLink mLink; // _70
};
} // namespace PSM

namespace Game {
struct Navi;
} // namespace Game

namespace PSM {
struct Navi : public CreatureObj {
	enum ManType {
		ManType_Olimar    = 0,
		ManType_Louie     = 1,
		ManType_President = 2,
	};

	enum FootType {
		NAVIFOOT_820 = 0x820, // PSSE_PL_WALKLEAF_L1
		NAVIFOOT_840 = 0x840, // PSSE_PL_WALKLEAF_R1
	};

	Navi(Game::Navi*);

	// vtable 1 (JKRDisposer, _10)
	// vtable 2 (Creature, _28)
	virtual CreatureCastType getCastType() { return CCT_Navi; } // _1C (weak)

	// vtable 3 (JAInter::Object + self, _28)
	virtual JAISound* startSound(u32, u32); // _7C (weak)

	void init(u16);
	void setShacho();
	void stopWaitVoice();
	ManType getManType();
	JAISound* playShugoSE();
	JAISound* playKaisanSE();
	void playWalkSound(Navi::FootType, int);

	// _10     = VTBL 1
	// _28     = VTBL 2
	// _00-_70 = CreatureObj
	PSGame::Rappa mRappa; // _70
	JAISound* mCurrSound; // _90
};
} // namespace PSM

namespace Game {
struct Piki;
} // namespace Game

namespace PSM {
struct Piki : public CreatureObj {
	Piki(Game::Piki* p);

	virtual PSM::CreatureCastType getCastType() { return CCT_Piki; } // _1C (weak)
	virtual void onCalcOn();                                         // _28

	void becomeFree();
	void becomeNotFree();
	JAISound* startFreePikiSound(u32, u32, u32);
	JAISound* startPikiSound(JAInter::Object*, u32, u32);
	JAISound* startPikiSetSound(JAInter::Object*, u32, PSGame::SeMgr::SetSeId, u32);
	JAISound* startFreePikiSetSound(u32, PSGame::SeMgr::SetSeId, u32, u32);
	u32 checkHappaChappySE(u32);

	// _28 		 = VTBL
	// _00-_30 = Creature
	// _30-_70 = JAInter::Object
	int mFreeCounter;    // _70
	u32 mHummingCounter; // _74

	static u8 sDopedPikminNum;
};
} // namespace PSM

namespace PSM {
struct Tsuyukusa : public CreatureObj {
	Tsuyukusa(Game::Creature*);

	virtual ~Tsuyukusa() { } // _14 (weak)

	void noukouFrameWork(bool);

	// _10     = VTBL 1
	// _28     = VTBL 2
	// _00-_70 = CreatureObj
	BOOL mIsEnabled;               // _70
	JSULink<Game::Creature> mLink; // _74
};
} // namespace PSM

namespace PSM {
inline void assertIsBoss(PSM::EnemyBase* soundObj)
{
	bool isBoss = false;
	if (soundObj->getCastType() == CCT_Unknown5 || soundObj->getCastType() == CCT_EnemyMidBoss
	    || soundObj->getCastType() == CCT_EnemyBigBoss) {
		isBoss = true;
	}

	P2ASSERTLINE(1108, isBoss);
}

inline void checkMidBoss(PSM::EnemyBase* soundObj)
{
	P2ASSERTLINE(1114, soundObj->getCastType() == CCT_EnemyMidBoss);
}

inline void disableAppearFlag(PSM::EnemyBase* soundObj)
{
	checkMidBoss(soundObj);
	PSM::EnemyBoss* bossObj = static_cast<PSM::EnemyBoss*>(soundObj);
	if (bossObj) {
		bossObj->setAppearFlag(false);
		bossObj->mHasReset = true;
	}
}

inline void otakaraCheckEvent(Otakara* item)
{
	P2ASSERTLINE(884, item->mOtaEvent);
}

}; // namespace PSM

#endif
