#ifndef _PSM_DIRECTOR_H
#define _PSM_DIRECTOR_H

#include "Dolphin/os.h"
#include "PSSystem/Director.h"

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

namespace PSM {
struct OneShotDirector : public PSSystem::OneShotDirector {
	virtual ~OneShotDirector(); // _00
};

/**
 * @size{0x58}
 */
struct DamageDirector : public PSM::OneShotDirector {
	DamageDirector();

	virtual ~DamageDirector();                           // _00
	virtual void execInner();                            // _14
	virtual void directOnTrack(PSSystem::SeqTrackBase&); // _18

	PSSystem::DirectorCopyActor* m_actor; // _48
	float _4C;                            // _4C
	float _50;                            // _50
	u32 _54;                              // _54
};

struct SwitcherDirector : public PSSystem::SwitcherDirector {
	virtual ~SwitcherDirector(); // _00
};

struct PikminNumberDirector : public PSM::SwitcherDirector {
	PikminNumberDirector(int, unsigned char, PSSystem::DirectedBgm&);

	virtual ~PikminNumberDirector();                      // _00
	virtual void execInner();                             // _14
	virtual void directOnTrack(PSSystem::SeqTrackBase&);  // _18
	virtual void directOffTrack(PSSystem::SeqTrackBase&); // _1C

	PSSystem::DirectorCopyActor* m_actor; // _48
};

/**
 * @size{0x54}
 */
struct PikminNumberDirector_AutoBgm : public PikminNumberDirector {
	PikminNumberDirector_AutoBgm(int, unsigned char, PSSystem::DirectedBgm&);

	virtual ~PikminNumberDirector_AutoBgm();              // _00
	virtual void directOnTrack(PSSystem::SeqTrackBase&);  // _18
	virtual void directOffTrack(PSSystem::SeqTrackBase&); // _1C

	void getTrack(PSSystem::SeqTrackBase&);

	PSSystem::DirectorCopyActor* m_actor; // _48
};

struct TempoChangeDirectorBase : public PSM::SwitcherDirector {
	virtual ~TempoChangeDirectorBase();                   // _00
	virtual void directOnTrack(PSSystem::SeqTrackBase&);  // _18
	virtual void directOffTrack(PSSystem::SeqTrackBase&); // _1C
};

/**
 * @size{0x54}
 */
struct ActorDirector_TempoChange : public TempoChangeDirectorBase {
	ActorDirector_TempoChange();

	virtual ~ActorDirector_TempoChange(); // _00
	virtual void execInner();             // _14

	u8 _48[8];                            // _48
	PSSystem::DirectorCopyActor* m_actor; // _50
};

struct TrackOnDirectorBase : public PSM::SwitcherDirector {
	TrackOnDirectorBase(int, const char*, long, long);

	virtual ~TrackOnDirectorBase();                       // _00
	virtual void directOnTrack(PSSystem::SeqTrackBase&);  // _18
	virtual void directOffTrack(PSSystem::SeqTrackBase&); // _1C
	virtual void onPlayInit(JASTrack*);                   // _24
};

/**
 * @size{0x54}
 */
struct PikAttackDirector : public TrackOnDirectorBase {
	PikAttackDirector(int);

	virtual ~PikAttackDirector(); // _00

	int _48; // _48
	int _4C; // _4C
	u8 _50;  // _50
};

struct TrackOnDirector_Scaled : public TrackOnDirectorBase {
	virtual ~TrackOnDirector_Scaled(); // _00
	virtual void underDirection();     // _10

	//	virtual double getNearestDistance(); // _30
};

/**
 * @size{0x58}
 */
struct TrackOnDirector_Voting : public TrackOnDirectorBase {
	virtual ~TrackOnDirector_Voting(); // _00
	virtual void execInner();          // _14

	u8 _48[0x10]; // _48
};

/**
 * @size{0x54}
 */
struct ExiteDirector : public TrackOnDirectorBase {
	ExiteDirector(int);

	virtual ~ExiteDirector(); // _00

	u8 _48[0xC]; // _48
};

/**
 * @size{0x58}
 */
struct ActorDirector_TrackOn : public TrackOnDirectorBase {
	ActorDirector_TrackOn(const char*, int, long, long);

	virtual ~ActorDirector_TrackOn(); // _00
	virtual void execInner();         // _14

	u8 _48[0xC];                          // _48
	PSSystem::DirectorCopyActor* m_actor; // _54
};

/**
 * @size{0x58}
 */
struct GroundDirector_Cave : public ActorDirector_TrackOn {
	virtual ~GroundDirector_Cave();
	virtual void directOn();  // _08
	virtual void directOff(); // _0C
};

/**
 * @size{0x68}
 */
struct ActorDirector_Scaled : public TrackOnDirector_Scaled {
	ActorDirector_Scaled(const char*, int, float, float, long, long,
	                     unsigned long);

	virtual ~ActorDirector_Scaled();               // _00
	virtual void execInner();                      // _14
	virtual double getNearestDistance();           // _30
	virtual void onSetMinDistObj(Game::Creature*); // _34

	long _48;                             // _48
	long _4C;                             // _4C
	u8 _50;                               // _50
	float _54;                            // _54
	float _58;                            // _58
	float _5C;                            // _5C
	u32 _60;                              // _60
	PSSystem::DirectorCopyActor* m_actor; // _64
};

/**
 * @size{0x6C}
 */
struct ActorDirector_Enemy : public ActorDirector_Scaled {
	ActorDirector_Enemy(const char*, int, long, long, unsigned long);

	virtual ~ActorDirector_Enemy();                      // _00
	virtual void underDirection();                       // _10
	virtual void onSetMinDistObj(Game::Creature*);       // _34
	virtual double getVolZeroDist(Game::EnemyBase*) = 0; // _38
	virtual double getVolMaxDist(Game::EnemyBase*)  = 0; // _3C

	u8 _68[4];
};

/**
 * @size{0x6C}
 */
struct ActorDirector_Battle : public ActorDirector_Enemy {
	virtual ~ActorDirector_Battle();                 // _00
	virtual double getVolZeroDist(Game::EnemyBase*); // _38
	virtual double getVolMaxDist(Game::EnemyBase*);  // _3C
};

/**
 * @size{0x6C}
 */
struct ActorDirector_Kehai : public ActorDirector_Enemy {
	virtual ~ActorDirector_Kehai();                  // _00
	virtual double getVolZeroDist(Game::EnemyBase*); // _38
	virtual double getVolMaxDist(Game::EnemyBase*);  // _3C
};
} // namespace PSM

#endif
