#ifndef _PIKIAI_H
#define _PIKIAI_H

#include "types.h"
#include "Vector3.h"
#include "SysShape/MotionListener.h"
#include "Condition.h"
#include "Collinfo.h"

namespace Sys {
struct Triangle;
} // namespace Sys

namespace SysShape {
struct KeyEvent;
} // namespace SysShape

namespace Game {
struct Piki;
struct CollEvent;
struct Onyon;
struct PlatEvent;
struct Pellet;
struct PathNode;
struct WayPoint;
} // namespace Game

struct Graphics;

struct FindCondition : public Condition<CollPart> {
	virtual bool satisfy(CollPart*); // _08 (weak)
};

namespace PikiAI {
struct ActAttack;
struct ActBattle;
struct ActBore;
struct ActBreakGate;
struct ActBreakRock;
struct ActBridge;
struct ActClimb;
struct ActCrop;
struct ActEnter;
struct ActExit;
struct ActFlockAttack;
struct ActFollowVectorField;
struct ActFormation;
struct ActFree;
struct ActGather;
struct ActGotoPos;
struct ActGotoSlot;
struct ActOneshot;
struct ActPathMove;
struct ActRescue;
struct ActRest;
struct ActStickAttack;
struct ActTeki;
struct ActTransport;
struct ActWeed;

struct ActionArg {
	virtual char* getName(); // _08 (weak)

	// _00 VTBL
};

struct Action {
	Action(Game::Piki*);

	virtual void init(ActionArg*);                                 // _08
	virtual s32 exec();                                            // _0C
	virtual void cleanup();                                        // _10
	virtual void emotion_success();                                // _14
	virtual void emotion_fail();                                   // _18
	virtual void applicable();                                     // _1C
	virtual u32 getNextAIType();                                   // _20
	virtual void bounceCallback(Game::Piki*, Sys::Triangle*);      // _24
	virtual void collisionCallback(Game::Piki*, Game::CollEvent&); // _28
	virtual void platCallback(Game::Piki*, Game::PlatEvent&);      // _2C
	virtual void doDirectDraw(Graphics& gfx);                      // _30
	virtual void wallCallback(Vector3f&);                          // _34
	virtual void getInfo(char*);                                   // _38

	// _00 VTBL
	Game::Piki* m_parent; // _04
	char* m_info;         // _08
};

struct ApproachPosActionArg : public ActionArg {
	virtual char* getName(); // _08 (weak)
};

struct ActApproachPos : public Action {
	virtual void init(ActionArg*); // _08
	virtual s32 exec();            // _0C
	virtual void cleanup();        // _10

	ActApproachPos(Game::Piki*);

	// _00 VTBL
	// _0C
};

struct ActAttackArg : public ActionArg {
	virtual char* getName(); // _08 (weak)
};

struct ActAttack : public Action, public virtual SysShape::MotionListener {
	virtual void init(ActionArg*);                                 // _08
	virtual s32 exec();                                            // _0C
	virtual void cleanup();                                        // _10
	virtual void emotion_success();                                // _14
	virtual void applicable();                                     // _1C
	virtual u32 getNextAIType();                                   // _20 (weak)
	virtual void bounceCallback(Game::Piki*, Sys::Triangle*);      // _24
	virtual void collisionCallback(Game::Piki*, Game::CollEvent&); // _28
	virtual void getInfo(char*);                                   // _38

	virtual void onKeyEvent(const SysShape::KeyEvent&); // _3C (weak)

	ActAttack(Game::Piki*);
	void initStickAttack();
	void initAdjust();
	void initJumpAdjust();
	void calcAttackPos();

	// _00 VTBL
	// _0C
};

struct ActBattleArg : public ActionArg {
	virtual char* getName(); // _08 (weak)

	Game::Piki* m_aggressor; // _04
	bool m_startAttack;      // _08, guessed name
};

// Pikmin hitting eachother, like in VS mode
struct ActBattle : public Action, public virtual SysShape::MotionListener {
	ActBattle(Game::Piki*);

	virtual void init(ActionArg*);                                 // _08
	virtual s32 exec();                                            // _0C
	virtual void cleanup();                                        // _10
	virtual void emotion_success();                                // _14
	virtual void collisionCallback(Game::Piki*, Game::CollEvent&); // _28
	virtual void onKeyEvent(const SysShape::KeyEvent&);            // _3C (weak)

	void initApproach();
	void execApproach();
	void initBattle();
	void execBattle();
	void execDamage();

	// _00 VTBL
	Game::Piki* m_otherPiki;       // _10, vs battle piki attack
	s8 m_state;                    // _14
	ActApproachPos* m_approachPos; // _18
	s8 _1C;                        // _1C
	s8 _1D;                        // _1D
};

struct ActBoreBase : public Action, public virtual SysShape::MotionListener {
};

struct ActBore : public Action {
	virtual void init(ActionArg*); // _08
	virtual s32 exec();            // _0C
	virtual void cleanup();        // _10

	ActBore(Game::Piki*);
	void startCurrAction();
	void finish();

	// _00 VTBL
	u8 _0C;                   // _0C
	u32 _10;                  // _10
	u32 _14;                  // _14
	u8 _18;                   // _18
	ActRest* m_actRest;       // _1C
	ActOneshot* m_actOneshot; // _20
};

struct ActBreakGateArg {
	void getName();
};

struct ActBreakGate : public Action, public virtual SysShape::MotionListener {
	virtual void init(ActionArg*);                                 // _08
	virtual s32 exec();                                            // _0C
	virtual void cleanup();                                        // _10
	virtual void emotion_success();                                // _14
	virtual void bounceCallback(Game::Piki*, Sys::Triangle*);      // _24
	virtual void collisionCallback(Game::Piki*, Game::CollEvent&); // _28
	virtual void platCallback(Game::Piki*, Game::PlatEvent&);      // _2C
	virtual void onKeyEvent(const SysShape::KeyEvent&);            // _3C (weak)

	ActBreakGate(Game::Piki*);
	void initFollow();

	// _00 VTBL
	u16 _10;                             // _10
	u32 _14;                             // _14
	ActStickAttack* m_stickAttack;       // _18
	ActGotoPos* m_gotoPos;               // _1C
	ActFollowVectorField* m_followField; // _20
};

struct ActBreakRockArg : public ActionArg {
	virtual char* getName(); // _08 (weak)

	u32 _04;
};

struct ActBreakRock : public Action, public virtual SysShape::MotionListener {
	virtual void init(ActionArg*);                                 // _08
	virtual s32 exec();                                            // _0C
	virtual void cleanup();                                        // _10
	virtual void bounceCallback(Game::Piki*, Sys::Triangle*);      // _24
	virtual void collisionCallback(Game::Piki*, Game::CollEvent&); // _28
	virtual void platCallback(Game::Piki*, Game::PlatEvent&);      // _2C
	virtual void onKeyEvent(const SysShape::KeyEvent&);            // _3C (weak)

	ActBreakRock(Game::Piki*);
	void initFollow();

	// _00 VTBL
	u32 _10;                             // _10
	u16 m_state;                         // _14
	ActStickAttack* m_stickAttack;       // _18
	ActGotoPos* m_gotoPos;               // _1C
	ActFollowVectorField* m_followField; // _20
};

struct ActBridgeArg : public ActionArg {
	virtual char* getName();

	u32* _04; // _04
};

#define PIKIAI_BRIDGE_DEFAULT     0
#define PIKIAI_BRIDGE_GOTOPOS     1
#define PIKIAI_BRIDGE_STICKATTACK 2

struct ActBridge : public Action, virtual SysShape::MotionListener {
	virtual void init(PikiAI::ActionArg*);
	virtual s32 exec();
	virtual void cleanup();
	virtual void bounceCallback(Game::Piki*, Sys::Triangle*);
	virtual void collisionCallback(Game::Piki*, Game::CollEvent&);
	virtual void platCallback(Game::Piki*, Game::PlatEvent&);
	virtual void onKeyEvent(const SysShape::KeyEvent&);

	ActBridge(Game::Piki*);
	void initFollow();
	inline void initGoto();
	inline void initStickAttack();
	inline void calcAttackPos();

	// _00 => _0C Action + MotionListener
	u32* _10;                            // _10
	u16 m_state;                         // _14
	ActStickAttack* m_stickAttack;       // _18
	ActGotoPos* m_gotoPos;               // _1C
	ActFollowVectorField* m_followField; // _20
	u32 _24;                             // _24
	u32 _28;                             // _28
	u32 _2C;                             // _2C
	u8 _30;                              // _30
};

struct ActClimb : public Action {
	virtual void init(ActionArg*); // _08
	virtual s32 exec();            // _0C
	virtual void cleanup();        // _10

	ActClimb(Game::Piki*);

	// _00 VTBL
	// _0C
};

struct ActCropArg : public ActionArg {
	virtual char* getName() { return "ActCropArg"; } // _08 (weak)
};

struct ActCrop : public Action, virtual SysShape::MotionListener {
	virtual void init(ActionArg*);                                 // _08
	virtual s32 exec();                                            // _0C
	virtual void cleanup();                                        // _10
	virtual u32 getNextAIType();                                   // _20 (weak)
	virtual void collisionCallback(Game::Piki*, Game::CollEvent&); // _28
	virtual void onKeyEvent(const SysShape::KeyEvent&);            // _3C (weak)

	ActCrop(Game::Piki*);
	void execClimb();
	void initGoto();
	void initAttack();

	// _00 VTBL
	// _10
};

struct ActEnter : public Action, virtual SysShape::MotionListener {
	virtual void init(ActionArg*);                      // _08
	virtual s32 exec();                                 // _0C
	virtual void cleanup();                             // _10
	virtual void onKeyEvent(const SysShape::KeyEvent&); // _3C (weak)

	ActEnter(Game::Piki*);
	void initStay();
	void execStay();
	void initSuck();
	void execSuck();

	// _00 VTBL
	// _10
};

struct ActExit : public Action {
	virtual void init(ActionArg*); // _08
	virtual s32 exec();            // _0C
	virtual void cleanup();        // _10

	ActExit(Game::Piki*);

	// _00 VTBL
	// _0C
};

struct FlockAttackActionArg : public ActionArg {
	virtual char* getName(); // _08 (weak)
};

struct ActFlockAttack : public Action, virtual SysShape::MotionListener {
	virtual void init(ActionArg*);                      // _08
	virtual s32 exec();                                 // _0C
	virtual void cleanup();                             // _10
	virtual void onKeyEvent(const SysShape::KeyEvent&); // _3C (weak)

	ActFlockAttack(Game::Piki*);

	// _00 VTBL
	// _10
};

struct FollowVectorFieldActionArg : public ActionArg {
	virtual char* getName(); // _08 (weak)
};

struct ActFollowVectorField : public Action {
	virtual void init(ActionArg*); // _08
	virtual s32 exec();            // _0C
	virtual void cleanup();        // _10

	ActFollowVectorField(Game::Piki*);

	// _00 VTBL
	u32 _0C; // _0C
};

struct ActFormation : public Action, virtual SysShape::MotionListener {
	virtual void init(ActionArg*);                                 // _08
	virtual s32 exec();                                            // _0C
	virtual void cleanup();                                        // _10
	virtual u32 getNextAIType();                                   // _20 (weak)
	virtual void collisionCallback(Game::Piki*, Game::CollEvent&); // _28
	virtual void platCallback(Game::Piki*, Game::PlatEvent&);      // _2C
	virtual void wallCallback(Vector3f&);                          // _34
	virtual void resumable();                                      // _3C (weak)
	virtual void inform(int);                                      // _40 (weak)
	virtual void onKeyEvent(const SysShape::KeyEvent&);            // _44 (weak)

	ActFormation(Game::Piki*);
	void startSort();
	void setFormed();

	// _00 VTBL
	// _10
};

struct ActFreeArg : public ActionArg {
	virtual char* getName(); // _08 (weak)

	// _00 VTBL
	u8 _04;  // _04
	f32 _08; // _08
	f32 _0C; // _0C
	f32 _10; // _10
	f32 _14; // _14
};

#define PIKIAI_FREE_DEFAULT 0
#define PIKIAI_FREE_GATHER  1
#define PIKIAI_FREE_BORE    2

struct ActFree : public Action, virtual SysShape::MotionListener {
	virtual void init(PikiAI::ActionArg*);
	virtual s32 exec();
	virtual void cleanup();
	virtual u32 getNextAIType();
	virtual void collisionCallback(Game::Piki*, Game::CollEvent&);
	virtual void onKeyEvent(const SysShape::KeyEvent&);

	ActFree(Game::Piki*);

	u16 m_state;            // _10
	ActGather* m_actGather; // _14
	ActBore* m_actBore;     // _18
	u16 m_delayTimer;       // _1C
};

struct GatherActionArg : public ActionArg {
	GatherActionArg(ActFreeArg* arg)
	{
		_04 = arg->_08;
		_08 = arg->_0C;
		_0C = arg->_10;
		_10 = arg->_14;
	}

	virtual char* getName(); // _08 (weak)

	// _00 VTBL
	f32 _04; // _04
	f32 _08; // _08
	f32 _0C; // _0C
	f32 _10; // _10
};

struct ActGather : public Action {
	virtual void cleanup();                // _08
	virtual s32 exec();                    // _0C
	virtual void init(PikiAI::ActionArg*); // _10

	ActGather(Game::Piki*);

	// _00 VTBL
	float _0C;     // _0C
	float _10;     // _10
	float _14;     // _14
	float _18;     // _18
	float m_timer; // _1C
};

struct GotoPosActionArg : public ActionArg {
	virtual char* getName(); // _08 (weak)
};

struct ActGotoPos : public Action {
	virtual void init(PikiAI::ActionArg*); // _08
	virtual s32 exec();                    // _0C
	virtual void cleanup();                // _10

	ActGotoPos(Game::Piki*);

	// _00 VTBL
	u32 _0C; // _0C
	u32 _10; // _10
	u32 _14; // _14
	u32 _18; // _18
};

struct GotoSlotArg : public ActionArg {
	virtual char* getName(); // _08 (weak)
};

struct ActGotoSlot : public Action {
	virtual void init(ActionArg*);        // _08
	virtual s32 exec();                   // _0C
	virtual void cleanup();               // _10
	virtual void wallCallback(Vector3f&); // _34

	ActGotoSlot(Game::Piki*);
	void resetTimers();

	// _00 VTBL
	// _0C
};

struct ArgOneshotArg : public ActionArg {
};

struct ActOneshot : public Action, virtual SysShape::MotionListener {
	virtual void init(ActionArg*);                      // _08
	virtual s32 exec();                                 // _0C
	virtual void cleanup();                             // _10
	virtual void finish();                              // _3C
	virtual void onKeyEvent(const SysShape::KeyEvent&); // _40 (weak)

	ActOneshot(Game::Piki*);

	// _00 VTBL
	// _10
};

struct PathMoveArg : public ActionArg {
	virtual char* getName(); // _08 (weak)
};

struct ActPathMove : public Action {
	virtual void init(ActionArg*); // _08
	virtual s32 exec();            // _0C
	virtual void cleanup();        // _10

	ActPathMove(Game::Piki*);
	void initPathfinding(bool);
	void decideGoal();
	void execPathfinding();
	void execMoveGoal();
	void isAllBlue();
	void carry(Vector3f&);
	void execMove();
	void execMoveGuru();
	void getWayPoint(int);
	void crGetPoint(int);
	void contextCheck(int);
	void crGetRadius(int);
	void crInit();
	void crMakeRefs();
	void crMove();

	// _00 VTBL
	void* _0C;              // _0C
	Vector3f _10;           // _10
	short _1C;              // _1C
	short _1E;              // _1E
	u32 _20;                // _20
	Vector3f _24;           // _24
	Game::Pellet* m_pellet; // _30
	Game::Onyon* m_onyon;   // _34
	float _38;              // _38
	u8 _3C;                 // _3C
	u8 _3D;                 // _3D
	u8 _3E[6];              // _3E
	Game::PathNode* _44;    // _44
	Game::PathNode* _48;    // _48
	int _4C;                // _4C
	int _50;                // _50
	short _54;              // _54
	short _56;              // _56
	Vector3f _58;           // _58
	Game::WayPoint* _64;    // _64
	float _68;              // _68
	u32 _6C;                // _6C
	int _70;                // _70
	Vector3f _74[4];        // _74
	Vector3f _A4;           // _A4
	Vector3f _B0;           // _B0
};

struct ActRescue : public Action, virtual SysShape::MotionListener {
	virtual void init(ActionArg*);                                 // _08
	virtual s32 exec();                                            // _0C
	virtual void cleanup();                                        // _10
	virtual void emotion_success();                                // _14
	virtual u32 getNextAIType();                                   // _20 (weak)
	virtual void collisionCallback(Game::Piki*, Game::CollEvent&); // _28
	virtual void doDirectDraw(Graphics& gfx);                      // _30
	virtual void onKeyEvent(const SysShape::KeyEvent&);            // _3C (weak)

	ActRescue(Game::Piki*);
	void initApproach();
	void execApproach();
	void initGo();
	void execGo();
	void initThrow();
	void execThrow();

	// _00 VTBL
	// _10
};

struct ActRest : public Action, virtual SysShape::MotionListener {
	virtual void init(ActionArg*);                      // _08
	virtual s32 exec();                                 // _0C
	virtual void cleanup();                             // _10
	virtual void finish();                              // _3C
	virtual void onKeyEvent(const SysShape::KeyEvent&); // _40 (weak)

	ActRest(Game::Piki*);
	void sitDown();

	// _00 VTBL
	// _10
};

struct StickAttackActionArg : public ActionArg {
	virtual char* getName(); // _08 (weak)
};

struct ActStickAttack : public Action, virtual SysShape::MotionListener {
	virtual void init(ActionArg*);                      // _08
	virtual s32 exec();                                 // _0C
	virtual void cleanup();                             // _10
	virtual void onKeyEvent(const SysShape::KeyEvent&); // _3C (weak)

	ActStickAttack(Game::Piki*);
	void createEfx();

	// _0C
	u32 _10; // _10
	u32 _14; // _14
	u32 _18; // _18
	u32 _1C; // _1C
	u32 _20; // _1C
};

struct ActTeki : public Action, virtual SysShape::MotionListener {
	virtual void init(ActionArg*);                                 // _08
	virtual s32 exec();                                            // _0C
	virtual void cleanup();                                        // _10
	virtual void emotion_success();                                // _14
	virtual u32 getNextAIType();                                   // _20 (weak)
	virtual void collisionCallback(Game::Piki*, Game::CollEvent&); // _28
	virtual void doDirectDraw(Graphics& gfx);                      // _30
	virtual void onKeyEvent(const SysShape::KeyEvent&);            // _3C (weak)

	ActTeki(Game::Piki*);
	void makeTarget();
	void test_0();
	void setTimer();

	// _00 VTBL
	// _10
};

struct ActTransportArg : public ActionArg {
	virtual char* getName(); // _08 (weak)
};

struct ActTransport : public Action, virtual SysShape::MotionListener {
	virtual void init(ActionArg*);                      // _08
	virtual s32 exec();                                 // _0C
	virtual void cleanup();                             // _10
	virtual void emotion_success();                     // _14
	virtual void emotion_fail();                        // _18
	virtual void getInfo(char*);                        // _38
	virtual void onKeyEvent(const SysShape::KeyEvent&); // _3C (weak)

	ActTransport(Game::Piki*);
	void isStickLeader();
	void initLift();
	void execLift();

	// _00 VTBL
	// _10
};

struct ActWeedArg : public ActionArg {
	virtual char* getName(); // _08 (weak)
};

struct ActWeed : public Action {
	virtual void init(ActionArg*);                                 // _08
	virtual s32 exec();                                            // _0C
	virtual void cleanup();                                        // _10
	virtual void collisionCallback(Game::Piki*, Game::CollEvent&); // _28
	virtual void getInfo(char*);                                   // _38

	ActWeed(Game::Piki*);
	void decideTarget();
	void initAdjust();
	void calcAttackPos();

	// _00 VTBL
	// _0C
};

struct CreatureActionArg : public ActionArg {
	inline CreatureActionArg(Game::Creature* creature)
	    : m_creature(creature)
	{
	}

	virtual char* getName(); // _08 (weak)

	// _00 VTBL
	Game::Creature* m_creature; // _04
};

struct ActFormationInitArg : public CreatureActionArg {
	inline ActFormationInitArg(Game::Creature* creature, u8 b1)
	    : CreatureActionArg(creature)
	    , _08(b1)
	    , _09(0)
	{
	}

	// _00     = VTBL
	// _00-_08 = CreatureActionArg
	u8 _08; // _08
	u8 _09; // _09
};

struct ClimbActionArg : public ActionArg {
	virtual char* getName(); // _08 (weak)
};

struct Brain {
	Brain(Game::Piki*);

	void addAction(PikiAI::Action*);
	void exec();
	void getCurrAction();
	void searchOrima();
	void start(int, PikiAI::ActionArg*);

	Action* m_actions;  // _00
	int m_actionCnt;    // _04
	int m_actionId;     // _08
	Game::Piki* m_piki; // _0C
};
}; // namespace PikiAI

#endif
