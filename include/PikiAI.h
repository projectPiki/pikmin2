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
struct PlatEvent;
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

struct ActBridgeArg {
	void getName();
};

struct ActBridge {
	ActBridge(Game::Piki*);

	void bounceCallback(Game::Piki*, Sys::Triangle*);
	void cleanup();
	void collisionCallback(Game::Piki*, Game::CollEvent&);
	void exec();
	void init(PikiAI::ActionArg*);
	void initFollow();
	void onKeyEvent(const SysShape::KeyEvent&);
	void platCallback(Game::Piki*, Game::PlatEvent&);
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

struct ActFollowVectorField {
	ActFollowVectorField(Game::Piki*);

	void cleanup();
	void exec();
	void init(PikiAI::ActionArg*);
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

#define PIKI_ACT_FREE_DEFAULT 0
#define PIKI_ACT_FREE_GATHER  1
#define PIKI_ACT_FREE_BORE    2

struct ActFree : public Action, virtual SysShape::MotionListener {
	ActFree(Game::Piki*);

	virtual void init(PikiAI::ActionArg*);
	virtual s32 exec();
	virtual void cleanup();
	virtual u32 getNextAIType();
	virtual void collisionCallback(Game::Piki*, Game::CollEvent&);
	virtual void onKeyEvent(const SysShape::KeyEvent&);

	u16 m_currentAction;    // _10
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

struct ActGotoPos {
	ActGotoPos(Game::Piki*);

	void cleanup();
	void exec();
	void init(PikiAI::ActionArg*);
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

struct ActPathMove {
	ActPathMove(Game::Piki*);

	void carry(Vector3f&);
	void cleanup();
	void contextCheck(int);
	void crGetPoint(int);
	void crGetRadius(int);
	void crInit();
	void crMakeRefs();
	void crMove();
	void decideGoal();
	void exec();
	void execMove();
	void execMoveGoal();
	void execMoveGuru();
	void execPathfinding();
	void getWayPoint(int);
	void init(PikiAI::ActionArg*);
	void initPathfinding(bool);
	void isAllBlue();
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

struct ActStickAttack {
	ActStickAttack(Game::Piki*);

	void cleanup();
	void createEfx();
	void exec();
	void init(PikiAI::ActionArg*);
	void onKeyEvent(const SysShape::KeyEvent&);
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
