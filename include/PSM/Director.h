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
	f32 _4C; // _4C
	f32 _50; // _50
	u32 _54; // _54
};

struct SwitcherDirector : public ::PSSystem::SwitcherDirector {
	inline SwitcherDirector(int p1, const char* p2)
	    : ::PSSystem::SwitcherDirector(p1, p2)
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
	u8 _4C;                                // _4C
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
	    , _48(0.7f)
	    , _4C(100)
	    , mActor(nullptr)
	{
	}
	virtual ~TempoChangeDirectorBase() { }                  // _08 (weak)
	virtual void directOnTrack(::PSSystem::SeqTrackBase&);  // _20
	virtual void directOffTrack(::PSSystem::SeqTrackBase&); // _24

	// _00     = VTBL
	// _00-_48 = SwitcherDirector
	f32 _48;
	u32 _4C;
	::PSSystem::DirectorCopyActor* mActor;
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
	TrackOnDirectorBase(int, const char*, long, long);

	virtual ~TrackOnDirectorBase() { }                      // _08 (weak)
	virtual void directOnTrack(::PSSystem::SeqTrackBase&);  // _20
	virtual void directOffTrack(::PSSystem::SeqTrackBase&); // _24
	virtual void onPlayInit(JASTrack*);                     // _2C

	// _00     = VTBL
	// _00-_48 = SwitcherDirector
	long _48; // _48
	long _4C; // _4C
	u8 _50;   // _50
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

struct TrackOnDirector_Scaled : public TrackOnDirectorBase {
	inline TrackOnDirector_Scaled(const char* name, int p2, f32 p3, f32 p4, s32 p5, s32 p6, u32 p7)
	    : TrackOnDirectorBase(p2, name, p5, p6)
	    , _54(p3)
	    , _58(p4)
	    , _5C(100000.0f)
	    , _60(p7)
	{
		_50    = 1;
		mActor = nullptr;
	}
	virtual ~TrackOnDirector_Scaled() { } // _08 (weak)
	virtual void underDirection();        // _18
	virtual f64 getNearestDistance() = 0; // _38

	// _00     = VTBL
	// _00-_54 = TrackOnDirectorBase
	f32 _54;                               // _54
	f32 _58;                               // _58
	f32 _5C;                               // _5C
	u32 _60;                               // _60
	::PSSystem::DirectorCopyActor* mActor; // _64
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
	u8 _54; // _54
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
	ActorDirector_TrackOn(const char*, int, long, long);

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
	GroundDirector_Cave(const char* name, int tracks, long a1, long a2)
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
	ActorDirector_Scaled(const char*, int, f32, f32, long, long, u32);

	virtual ~ActorDirector_Scaled() { }               // _08 (weak)
	virtual void execInner();                         // _1C
	virtual f64 getNearestDistance();                 // _38
	virtual void onSetMinDistObj(Game::Creature*) { } // _3C (weak)

	// _00     = VTBL
	// _00-_68 = TrackOnDirector_Scaled
};

/**
 * @size{0x6C}
 */
struct ActorDirector_Enemy : public ActorDirector_Scaled {
	ActorDirector_Enemy(const char*, int, long, long, u32);

	virtual ~ActorDirector_Enemy() { }                // _08 (weak)
	virtual void underDirection();                    // _18
	virtual void onSetMinDistObj(Game::Creature*);    // _3C
	virtual f64 getVolZeroDist(Game::EnemyBase*) = 0; // _40
	virtual f64 getVolMaxDist(Game::EnemyBase*)  = 0; // _44

	// _00     = VTBL
	// _00-_68 = ActorDirector_Scaled
	Game::Creature* mGameObject; // _68
};

/**
 * @size{0x6C}
 */
struct ActorDirector_Battle : public ActorDirector_Enemy {
	ActorDirector_Battle(const char* name, int tracks, long a1, long a2, u32 a3)
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
	ActorDirector_Kehai(const char* name, int tracks, long a1, long a2, u32 a3)
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
	enum Type { TYPE_0 };

	DirectorUpdator(::PSSystem::DirectorBase*, u8, Type);

	void directOn(u8);
	void directOff(u8);
	void frameEndWork();

	u8 _00;                              // _00
	Type mType;                          // _04
	u8 _08;                              // _08
	u8 _09;                              // _09
	::PSSystem::DirectorBase* mDirector; // _0C
};

struct ListDirectorActor : public ::PSSystem::DirectorCopyActor, public JSUPtrList {
	ListDirectorActor()
	    : ::PSSystem::DirectorCopyActor(nullptr, nullptr)
	{
	}
	virtual void onUpdateFromMasterD(); // _0C

	// _00     = VTBL
	// _00-_0C = PSSystem::DirectorCopyActor
	// _0C-_18 = JSUPtrList
};
} // namespace PSM

#endif
