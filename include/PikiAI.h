#ifndef _PIKIAI_H
#define _PIKIAI_H

#include "types.h"
#include "Vector3.h"
#include "SysShape/MotionListener.h"

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

namespace PikiAI {
struct ActionArg {
	virtual char* getName();
};

struct Action {
	Action(Game::Piki*);

	virtual void init(ActionArg*);                                 // _00
	virtual s32 exec();                                            // _04
	virtual void cleanup();                                        // _08
	virtual void emotion_success();                                // _0C
	virtual void emotion_fail();                                   // _10
	virtual void applicable();                                     // _14
	virtual u32 getNextAIType();                                   // _18
	virtual void bounceCallback(Game::Piki*, Sys::Triangle*);      // _1C
	virtual void collisionCallback(Game::Piki*, Game::CollEvent&); // _20
	virtual void platCallback(Game::Piki*, Game::PlatEvent&);      // _24
	virtual void doDirectDraw(Graphics&);                          // _28
	virtual void wallCallback(Vector3<float>&);                    // _2C
	virtual void getInfo(char*);                                   // _30

	// _00 VTBL
	Game::Piki* m_parent; // _04
	char* m_info;         // _08
};

struct ApproachPosActionArg {
	void getName();
};

struct ActApproachPos {
	ActApproachPos(Game::Piki*);

	void cleanup();
	void exec();
	void init(PikiAI::ActionArg*);
};

struct ActAttackArg {
	void getName();
};

struct ActAttack {
	ActAttack(Game::Piki*);

	void applicable();
	void bounceCallback(Game::Piki*, Sys::Triangle*);
	void calcAttackPos();
	void cleanup();
	void collisionCallback(Game::Piki*, Game::CollEvent&);
	void emotion_success();
	void exec();
	void getInfo(char*);
	void getNextAIType();
	void init(PikiAI::ActionArg*);
	void initAdjust();
	void initJumpAdjust();
	void initStickAttack();
	void onKeyEvent(const SysShape::KeyEvent&);
};

struct ActBattleArg {
	void getName();
};

struct ActBattle {
	ActBattle(Game::Piki*);

	void cleanup();
	void collisionCallback(Game::Piki*, Game::CollEvent&);
	void emotion_success();
	void exec();
	void execApproach();
	void execBattle();
	void execDamage();
	void init(PikiAI::ActionArg*);
	void initApproach();
	void initBattle();
	void onKeyEvent(const SysShape::KeyEvent&);

	Game::Piki* m_piki;
	char* m_name;
	SysShape::MotionListener* m_listener;
	Game::Piki* m_vsBattlePiki;
	s8 _14;
	ActApproachPos* m_approachPos;
	s8 _1C;
	s8 _1D;
};

struct ActBore : public Action {
	ActBore(Game::Piki*);

	void finish();

	virtual void cleanup();
	virtual s32 exec();
	virtual void init(PikiAI::ActionArg*);
	virtual void startCurrAction();

	// _08
	u8 _0C[0x18]; // _0C
};

struct ActBreakGateArg {
	void getName();
};

struct ActBreakGate {
	ActBreakGate(Game::Piki*);

	void bounceCallback(Game::Piki*, Sys::Triangle*);
	void cleanup();
	void collisionCallback(Game::Piki*, Game::CollEvent&);
	void emotion_success();
	void exec();
	void init(PikiAI::ActionArg*);
	void initFollow();
	void onKeyEvent(const SysShape::KeyEvent&);
	void platCallback(Game::Piki*, Game::PlatEvent&);
};

struct ActBreakRockArg {
	void getName();
};

struct ActBreakRock {
	ActBreakRock(Game::Piki*);

	void bounceCallback(Game::Piki*, Sys::Triangle*);
	void cleanup();
	void collisionCallback(Game::Piki*, Game::CollEvent&);
	void exec();
	void init(PikiAI::ActionArg*);
	void initFollow();
	void onKeyEvent(const SysShape::KeyEvent&);
	void platCallback(Game::Piki*, Game::PlatEvent&);
};

struct ActBridgeArg : ActionArg {
	virtual char* getName();

	u32* _04; // _04
};

#define PIKIAI_BRIDGE_DEFAULT 0
#define PIKIAI_BRIDGE_
#define PIKIAI_BRIDGE_STICKATTACK 2

struct ActStickAttack;
struct ActGotoPos;
struct ActFollowVectorField;

struct ActBridge : public Action, virtual SysShape::MotionListener {
	ActBridge(Game::Piki*);

	virtual void init(PikiAI::ActionArg*);
	virtual s32 exec();
	virtual void cleanup();
	virtual void bounceCallback(Game::Piki*, Sys::Triangle*);
	virtual void collisionCallback(Game::Piki*, Game::CollEvent&);
	virtual void platCallback(Game::Piki*, Game::PlatEvent&);
	virtual void onKeyEvent(const SysShape::KeyEvent&);

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

struct ActClimb {
	ActClimb(Game::Piki*);
	void cleanup();
	void exec();
	void init(PikiAI::ActionArg*);
};

struct ActCropArg {
	void getName();
};

struct ActCrop {
	ActCrop(Game::Piki*);

	void cleanup();
	void collisionCallback(Game::Piki*, Game::CollEvent&);
	void exec();
	void execClimb();
	void getNextAIType();
	void init(PikiAI::ActionArg*);
	void initAttack();
	void initGoto();
	void onKeyEvent(const SysShape::KeyEvent&);
};

struct ActEnter {
	ActEnter(Game::Piki*);

	void cleanup();
	void exec();
	void execStay();
	void execSuck();
	void init(PikiAI::ActionArg*);
	void initStay();
	void initSuck();
	void onKeyEvent(const SysShape::KeyEvent&);
};

struct ActExit {
	ActExit(Game::Piki*);

	void cleanup();
	void exec();
	void init(PikiAI::ActionArg*);
};

struct FlockAttackActionArg {
	void getName();
};

struct ActFlockAttack {
	ActFlockAttack(Game::Piki*);

	void cleanup();
	void exec();
	void init(PikiAI::ActionArg*);
	void onKeyEvent(const SysShape::KeyEvent&);
};

struct FollowVectorFieldActionArg {
	void getName();
};

struct ActFollowVectorField : public Action {
	ActFollowVectorField(Game::Piki*);

	virtual void init(PikiAI::ActionArg*);
	virtual s32 exec();
	virtual void cleanup();

	// _08
	u32 _0C; // _0C
};

struct ActFormation {
	ActFormation(Game::Piki*);

	void cleanup();
	void collisionCallback(Game::Piki*, Game::CollEvent&);
	void exec();
	void getNextAIType();
	void inform(int);
	void init(PikiAI::ActionArg*);
	void onKeyEvent(const SysShape::KeyEvent&);
	void platCallback(Game::Piki*, Game::PlatEvent&);
	void resumable();
	void setFormed();
	void startSort();
	void wallCallback(Vector3f&);
};

struct ActFreeArg : ActionArg {
	virtual char* getName();

	u8 _04;
	f32 _08; // _08
	f32 _0C; // _0C
	f32 _10; // _10
	f32 _14; // _14
};

struct ActGather;

#define PIKIAI_FREE_DEFAULT 0
#define PIKIAI_FREE_GATHER  1
#define PIKIAI_FREE_BORE    2

struct ActFree : public Action, virtual SysShape::MotionListener {
	ActFree(Game::Piki*);

	virtual void init(PikiAI::ActionArg*);
	virtual s32 exec();
	virtual void cleanup();
	virtual u32 getNextAIType();
	virtual void collisionCallback(Game::Piki*, Game::CollEvent&);
	virtual void onKeyEvent(const SysShape::KeyEvent&);

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

	virtual char* getName();

	f32 _04; // _04
	f32 _08; // _08
	f32 _0C; // _0C
	f32 _10; // _10
};

struct ActGather : public Action {
	ActGather(Game::Piki*);

	virtual void cleanup();
	virtual s32 exec();
	virtual void init(PikiAI::ActionArg*);

	// _00 VTBL
	float _0C;
	float _10;
	float _14;
	float _18;
	float m_timer; // _1C
};

struct GotoPosActionArg {
	void getName();
};

struct ActGotoPos : public Action {
	ActGotoPos(Game::Piki*);

	virtual void init(PikiAI::ActionArg*);
	virtual s32 exec();
	virtual void cleanup();

	// _08
	u32 _0C;
	u32 _10;
	u32 _14;
	u32 _18;
};

struct GotoSlotArg {
	void getName();
};

struct ActGotoSlot {
	ActGotoSlot(Game::Piki*);

	void cleanup();
	void exec();
	void init(PikiAI::ActionArg*);
	void resetTimers();
	void wallCallback(Vector3f&);
};

struct ActOneshot {
	ActOneshot(Game::Piki*);

	void cleanup();
	void exec();
	void finish();
	void init(PikiAI::ActionArg*);
	void onKeyEvent(const SysShape::KeyEvent&);
};

struct PathMoveArg {
	void getName();
};

struct ActPathMove : public Action {
	ActPathMove(Game::Piki*);

    virtual void init(PikiAI::ActionArg*);
    virtual s32 exec();
    virtual void cleanup();
    

	void carry(Vector3f&);
	void contextCheck(int);
	Vector3f crGetPoint(int);
	void crGetRadius(int);
	void crInit();
	void crMakeRefs();
	void crMove();
	void decideGoal();
	void execMove();
	void execMoveGoal();
	void execMoveGuru();
	void execPathfinding();
	void getWayPoint(int);
	void initPathfinding(bool);
	void isAllBlue();

    void* _0C; 				// _0C	// ghidra: "ActPathMove_Unknown1*"
    Vector3f _10;			// _10
    short _1C;				// _1C
    short _1E;				// _1E
    u32 _20;				// _20
    Vector3f _24;			// _24
    Game::Pellet* m_pellet;	// _30
    Game::Onyon* m_onyon;	// _34
    float _38;				// _38
    u8 _3C;					// _3C
    u8 _3D;					// _3D
    u8 _3E[6];				// _3E
    Game::PathNode* _44;	// _44
    Game::PathNode* _48;	// _48
    int _4C;				// _4C
    int _50;				// _50
    short _54;				// _54
    short _56;				// _56
    Vector3f _58;			// _58
    Game::WayPoint* _64;	// _64
    float _68;				// _68
    u32 _6C;				// _6C
    int _70;				// _70
    Vector3f _74[4];		// _74
    Vector3f _A4;			// _A4
    Vector3f _B0;			// _B0
};

struct ActRescue {
	ActRescue(Game::Piki*);

	void cleanup();
	void collisionCallback(Game::Piki*, Game::CollEvent&);
	void doDirectDraw(Graphics&);
	void emotion_success();
	void exec();
	void execApproach();
	void execGo();
	void execThrow();
	void getNextAIType();
	void init(PikiAI::ActionArg*);
	void initApproach();
	void initGo();
	void initThrow();
	void onKeyEvent(const SysShape::KeyEvent&);
};

struct ActRest {
	ActRest(Game::Piki*);

	void cleanup();
	void exec();
	void finish();
	void init(PikiAI::ActionArg*);
	void onKeyEvent(const SysShape::KeyEvent&);
	void sitDown();
};

struct StickAttackActionArg {
	void getName();
};

struct ActStickAttack : public Action, virtual SysShape::MotionListener {
	ActStickAttack(Game::Piki*);

	virtual void init(PikiAI::ActionArg*);
	virtual void cleanup();
	virtual s32 exec();
	virtual void onKeyEvent(const SysShape::KeyEvent&);

	void createEfx();

	// _0C
	u32 _10; // _10
	u32 _14; // _14
	u32 _18; // _18
	u32 _1C; // _1C
	u32 _20; // _1C
};

struct ActTeki {
	ActTeki(Game::Piki*);

	void cleanup();
	void collisionCallback(Game::Piki*, Game::CollEvent&);
	void doDirectDraw(Graphics&);
	void emotion_success();
	void exec();
	void getNextAIType();
	void init(PikiAI::ActionArg*);
	void makeTarget();
	void onKeyEvent(const SysShape::KeyEvent&);
	void setTimer();
	void test_0();
};

struct ActTransportArg {
	void getName();
};

struct ActTransport {
	ActTransport(Game::Piki*);

	void cleanup();
	void emotion_fail();
	void emotion_success();
	void exec();
	void execLift();
	void getInfo(char*);
	void init(PikiAI::ActionArg*);
	void initLift();
	void isStickLeader();
	void onKeyEvent(const SysShape::KeyEvent&);
};

struct ActWeedArg {
	void getName();
};

struct ActWeed {
	ActWeed(Game::Piki*);

	void calcAttackPos();
	void cleanup();
	void collisionCallback(Game::Piki*, Game::CollEvent&);
	void decideTarget();
	void exec();
	void getInfo(char*);
	void init(PikiAI::ActionArg*);
	void initAdjust();
};

struct ClimbActionArg {
	void getName();
};

struct CreatureActionArg {
	void getName();
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
