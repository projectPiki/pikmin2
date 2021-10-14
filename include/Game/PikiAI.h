#ifndef _GAME_PIKIAI_H
#define _GAME_PIKIAI_H

namespace Sys {
struct Triangle;
struct KeyEvent;
} // namespace Sys

namespace Game {
struct Piki;
struct CollEvent;
} // namespace Game

struct PikiAI {
	struct ActionArg;

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
	};

	struct ActBore {
		ActBore(Game::Piki*);

		void cleanup();
		void exec();
		void finish();
		void init(PikiAI::ActionArg*);
		void startCurrAction();
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
		void wallCallback(Vector3<float>&);
	};

	struct ActFreeArg {
		void getName();
	};

	struct ActFree {
		ActFree(Game::Piki*);

		void cleanup();
		void collisionCallback(Game::Piki*, Game::CollEvent&);
		void exec();
		void getNextAIType();
		void init(PikiAI::ActionArg*);
		void onKeyEvent(const SysShape::KeyEvent&);
	};

	struct GatherActionArg {
		void getName();
	};

	struct ActGather {
		ActGather(Game::Piki*);

		void cleanup();
		void exec();
		void init(PikiAI::ActionArg*);
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
		void wallCallback(Vector3<float>&);
	};

	struct ActionArg {
		void getName();
	};

	struct Action {
		void Action(Game::Piki*);

		void applicable();
		void bounceCallback(Game::Piki*, Sys::Triangle*);
		void cleanup();
		void collisionCallback(Game::Piki*, Game::CollEvent&);
		void doDirectDraw(Graphics&);
		void emotion_fail();
		void emotion_success();
		void exec();
		void getInfo(char*);
		void getNextAIType();
		void init(PikiAI::ActionArg*);
		void platCallback(Game::Piki*, Game::PlatEvent&);
		void wallCallback(Vector3<float>&);
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

		void carry(Vector3<float>&);
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
	};
};

#endif