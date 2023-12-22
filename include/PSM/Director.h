#ifndef _PSM_DIRECTOR_H
#define _PSM_DIRECTOR_H

#include "Dolphin/os.h"
#include "PSSystem/PSDirector.h"

struct JASTrack;

namespace Game {
struct Creature;
struct EnemyBase;
} // namespace Game

namespace PSSystem {
struct DirectedBgm;
struct DirectorCopyActor;
struct SeqTrackBase;
} // namespace PSSystem

namespace PSAutoBgm {
struct Track;
} // namespace PSAutoBgm

namespace PSM {
struct OneShotDirector : public ::PSSystem::OneShotDirector {
	inline OneShotDirector()
	    : ::PSSystem::OneShotDirector()
	    , mActor(nullptr)
	{
	}

	virtual ~OneShotDirector() { } // _08 (weak)

	// _00     = VTBL
	// _00-_48 = PSSystem::OneShotDirector
	::PSSystem::DirectorCopyActor* mActor; // _48
};

/**
 * @size{0x58}
 */
struct DamageDirector : public OneShotDirector {
	DamageDirector();

	virtual ~DamageDirector() { }                          // _08 (weak)
	virtual void execInner();                              // _1C
	virtual void directOnTrack(::PSSystem::SeqTrackBase&); // _20

	// _00     = VTBL
	// _00-_48 = OneShotDirector
	f32 mPitchMod1; // _4C
	f32 mPitchMod2; // _50
	u32 mDuration;  // _54
};

struct SwitcherDirector : public ::PSSystem::SwitcherDirector {
	inline SwitcherDirector(int type, const char* name)
	    : ::PSSystem::SwitcherDirector(type, name)
	{
	}

	virtual ~SwitcherDirector() { } // _08 (weak)

	// _00     = VTBL
	// _00-_48 = PSSystem::SwitcherDirector
};

struct PikminNumberDirector : public SwitcherDirector {
	PikminNumberDirector(int, u8, ::PSSystem::DirectedBgm&);

	virtual ~PikminNumberDirector() { }                     // _08 (weak)
	virtual void execInner();                               // _1C
	virtual void directOnTrack(::PSSystem::SeqTrackBase&);  // _20
	virtual void directOffTrack(::PSSystem::SeqTrackBase&); // _24

	// _00     = VTBL
	// _00-_48 = SwitcherDirector
	::PSSystem::DirectorCopyActor* mActor; // _48
	u8 mMaskId;                            // _4C
};

/**
 * @size{0x54}
 */
struct PikminNumberDirector_AutoBgm : public PikminNumberDirector {
	PikminNumberDirector_AutoBgm(int, u8, ::PSSystem::DirectedBgm&);

	virtual ~PikminNumberDirector_AutoBgm() { }             // _08 (weak)
	virtual void directOnTrack(::PSSystem::SeqTrackBase&);  // _20
	virtual void directOffTrack(::PSSystem::SeqTrackBase&); // _24

	PSAutoBgm::Track* getTrack(::PSSystem::SeqTrackBase&);

	// _00     = VTBL
	// _00-_4C = PikminNumberDirector
	::PSSystem::DirectedBgm* mDirectedBgm; // _50
};

struct TempoChangeDirectorBase : public SwitcherDirector {
	inline TempoChangeDirectorBase()
	    : SwitcherDirector(1, "lifeD    ")
	    , mTempoValue(0.7f)
	    , mTimeBase(100)
	    , mActor(nullptr)
	{
	}
	virtual ~TempoChangeDirectorBase() { }                  // _08 (weak)
	virtual void directOnTrack(::PSSystem::SeqTrackBase&);  // _20
	virtual void directOffTrack(::PSSystem::SeqTrackBase&); // _24

	// _00     = VTBL
	// _00-_48 = SwitcherDirector
	f32 mTempoValue;                       // _48
	u32 mTimeBase;                         // _4C
	::PSSystem::DirectorCopyActor* mActor; // _50
};

/**
 * @size{0x54}
 */
struct ActorDirector_TempoChange : public TempoChangeDirectorBase {
	ActorDirector_TempoChange();

	virtual ~ActorDirector_TempoChange() { } // _08 (weak)
	virtual void execInner();                // _1C

	// _00     = VTBL
	// _00-_48 = SwitcherDirector
	// PSSystem::DirectorCopyActor* mActor; // _50
};

struct TrackOnDirectorBase : public SwitcherDirector {
	TrackOnDirectorBase(int, const char*, s32, s32);

	virtual ~TrackOnDirectorBase() { }                      // _08 (weak)
	virtual void directOnTrack(::PSSystem::SeqTrackBase&);  // _20
	virtual void directOffTrack(::PSSystem::SeqTrackBase&); // _24
	virtual void onPlayInit(JASTrack*);                     // _2C

	// _00     = VTBL
	// _00-_48 = SwitcherDirector
	s32 mFadeInValue;  // _48
	s32 mFadeOutValue; // _4C
	u8 mEnableType;    // _50
};

/**
 * @size{0x54}
 */
struct PikAttackDirector : public TrackOnDirectorBase {
	PikAttackDirector(int);

	virtual ~PikAttackDirector() { } // _08 (weak)

	// _00     = VTBL
	// _00-_54 = TrackOnDirectorBase
};

struct ListDirectorActor : public ::PSSystem::DirectorCopyActor, public JSUList<Game::Creature> {
	ListDirectorActor()
	    : ::PSSystem::DirectorCopyActor(nullptr, nullptr)
	{
	}
	virtual void onUpdateFromMasterD(); // _0C

	// _00     = VTBL
	// _00-_0C = PSSystem::DirectorCopyActor
	// _0C-_18 = JSUPtrList
};

struct TrackOnDirector_Scaled : public TrackOnDirectorBase {
	inline TrackOnDirector_Scaled(const char* name, int p2, f32 p3, f32 p4, s32 p5, s32 p6, u32 p7)
	    : TrackOnDirectorBase(p2, name, p5, p6)
	    , _54(p3)
	    , _58(p4)
	    , mCurrDistance(100000.0f)
	    , _60(p7)
	{
		mEnableType = 1;
		mActor      = nullptr;
	}
	virtual ~TrackOnDirector_Scaled() { } // _08 (weak)
	virtual void underDirection();        // _18
	virtual f32 getNearestDistance() = 0; // _38

	// _00     = VTBL
	// _00-_54 = TrackOnDirectorBase
	f32 _54;                        // _54
	f32 _58;                        // _58
	f32 mCurrDistance;              // _5C
	u32 _60;                        // _60
	PSM::ListDirectorActor* mActor; // _64
};

/**
 * @size{0x58}
 */
struct TrackOnDirector_Voting : public TrackOnDirectorBase {
	TrackOnDirector_Voting(int track, const char* name, int p1, int p2)
	    : TrackOnDirectorBase(track, name, p1, p2)
	{
	}
	virtual ~TrackOnDirector_Voting() { } // _08 (weak)
	virtual void execInner();             // _1C

	// _00     = VTBL
	// _00-_54 = TrackOnDirectorBase
	u8 mVoteState; // _54
};

/**
 * @size{0x54}
 */
struct ExiteDirector : public TrackOnDirectorBase {
	ExiteDirector(int);

	virtual ~ExiteDirector() { } // _08 (weak)

	// _00     = VTBL
	// _00-_54 = TrackOnDirectorBase
};

/**
 * @size{0x58}
 */
struct ActorDirector_TrackOn : public TrackOnDirectorBase {
	ActorDirector_TrackOn(const char*, int, s32, s32);

	virtual ~ActorDirector_TrackOn() { } // _08 (weak)
	virtual void execInner();            // _1C

	// _00     = VTBL
	// _00-_54 = TrackOnDirectorBase
	::PSSystem::DirectorCopyActor* mActor; // _54
};

/**
 * @size{0x58}
 */
struct GroundDirector_Cave : public ActorDirector_TrackOn {
	GroundDirector_Cave(const char* name, int tracks, s32 a1, s32 a2)
	    : ActorDirector_TrackOn(name, tracks, a1, a2)
	{
	}

	virtual ~GroundDirector_Cave() { } // _08 (weak)
	virtual void directOn() { }        // _10 (weak)
	virtual void directOff() { }       // _14 (weak)

	// _00     = VTBL
	// _00-_58 = ActorDirector_TrackOn
};

/**
 * @size{0x68}
 */
struct ActorDirector_Scaled : public TrackOnDirector_Scaled {
	ActorDirector_Scaled(const char*, int, f32, f32, s32, s32, u32);

	virtual ~ActorDirector_Scaled() { }               // _08 (weak)
	virtual void execInner();                         // _1C
	virtual f32 getNearestDistance();                 // _38
	virtual void onSetMinDistObj(Game::Creature*) { } // _3C (weak)

	// _00     = VTBL
	// _00-_68 = TrackOnDirector_Scaled
};

/**
 * @size{0x6C}
 */
struct ActorDirector_Enemy : public ActorDirector_Scaled {
	ActorDirector_Enemy(const char*, int, s32, s32, u32);

	virtual ~ActorDirector_Enemy() { }                // _08 (weak)
	virtual void underDirection();                    // _18
	virtual void onSetMinDistObj(Game::Creature*);    // _3C
	virtual f64 getVolZeroDist(Game::EnemyBase*) = 0; // _40
	virtual f64 getVolMaxDist(Game::EnemyBase*)  = 0; // _44

	// _00     = VTBL
	// _00-_68 = ActorDirector_Scaled
	Game::EnemyBase* mGameObject; // _68
};

/**
 * @size{0x6C}
 */
struct ActorDirector_Battle : public ActorDirector_Enemy {
	ActorDirector_Battle(const char* name, int tracks, s32 a1, s32 a2, u32 a3)
	    : ActorDirector_Enemy(name, tracks, a1, a2, a3)
	{
	}

	virtual ~ActorDirector_Battle() { }           // _08 (weak)
	virtual f64 getVolZeroDist(Game::EnemyBase*); // _40
	virtual f64 getVolMaxDist(Game::EnemyBase*);  // _44

	// _00     = VTBL
	// _00-_6C = ActorDirector_Enemy
};

/**
 * @size{0x6C}
 */
struct ActorDirector_Kehai : public ActorDirector_Enemy {
	ActorDirector_Kehai(const char* name, int tracks, s32 a1, s32 a2, u32 a3)
	    : ActorDirector_Enemy(name, tracks, a1, a2, a3)
	{
	}

	virtual ~ActorDirector_Kehai() { }            // _08 (weak)
	virtual f64 getVolZeroDist(Game::EnemyBase*); // _40
	virtual f64 getVolMaxDist(Game::EnemyBase*);  // _44

	// _00     = VTBL
	// _00-_6C = ActorDirector_Enemy
};

/**
 * @size{0x10}
 */
struct DirectorUpdator {
	enum Type { TYPE_0, TYPE_1 };

	DirectorUpdator(::PSSystem::DirectorBase*, u8, Type);

	void directOn(u8);
	void directOff(u8);
	void frameEndWork();

	u8 mUpdateNum;                       // _00
	Type mType;                          // _04
	u8 _08;                              // _08
	u8 _09;                              // _09
	::PSSystem::DirectorBase* mDirector; // _0C
};

} // namespace PSM

#endif
