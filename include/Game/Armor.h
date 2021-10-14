#ifndef _GAME_ARMOR_H
#define _GAME_ARMOR_H

namespace SysShape {
struct AnimMgr;
} // namespace SysShape

namespace Game {
struct StateArg;
struct Creature;
struct EnemyBase;
struct ShadowParam;
struct CreatureInitArg;
struct EnemyInitialParamBase;

struct Armor {
	struct StateAppear {
		void cleanup(Game::EnemyBase*);
		void exec(Game::EnemyBase*);
		void init(Game::EnemyBase*, Game::StateArg*);
	};

	struct StateAttack1 {
		void cleanup(Game::EnemyBase*);
		void exec(Game::EnemyBase*);
		void init(Game::EnemyBase*, Game::StateArg*);
	};

	struct StateAttack2 {
		void cleanup(Game::EnemyBase*);
		void exec(Game::EnemyBase*);
		void init(Game::EnemyBase*, Game::StateArg*);
	};

	struct StateDead {
		void cleanup(Game::EnemyBase*);
		void exec(Game::EnemyBase*);
		void init(Game::EnemyBase*, Game::StateArg*);
	};

	struct StateDive {
		void cleanup(Game::EnemyBase*);
		void exec(Game::EnemyBase*);
		void init(Game::EnemyBase*, Game::StateArg*);
	};

	struct StateEat {
		void cleanup(Game::EnemyBase*);
		void exec(Game::EnemyBase*);
		void init(Game::EnemyBase*, Game::StateArg*);
	};

	struct StateFail {
		void cleanup(Game::EnemyBase*);
		void exec(Game::EnemyBase*);
		void init(Game::EnemyBase*, Game::StateArg*);
	};

	struct StateFlick {
		void cleanup(Game::EnemyBase*);
		void exec(Game::EnemyBase*);
		void init(Game::EnemyBase*, Game::StateArg*);
	};

	struct StateGoHome {
		void cleanup(Game::EnemyBase*);
		void exec(Game::EnemyBase*);
		void init(Game::EnemyBase*, Game::StateArg*);
	};

	struct StateMove {
		void cleanup(Game::EnemyBase*);
		void exec(Game::EnemyBase*);
		void init(Game::EnemyBase*, Game::StateArg*);
	};

	struct StateMoveCentre {
		void cleanup(Game::EnemyBase*);
		void exec(Game::EnemyBase*);
		void init(Game::EnemyBase*, Game::StateArg*);
	};

	struct StateMoveSide {
		void cleanup(Game::EnemyBase*);
		void exec(Game::EnemyBase*);
		void init(Game::EnemyBase*, Game::StateArg*);
	};

	struct StateMoveTop {
		void cleanup(Game::EnemyBase*);
		void exec(Game::EnemyBase*);
		void init(Game::EnemyBase*, Game::StateArg*);
	};

	struct StateStay {
		void cleanup(Game::EnemyBase*);
		void exec(Game::EnemyBase*);
		void init(Game::EnemyBase*, Game::StateArg*);
	};

	struct Parms {
		Parms();
		void read(struct Stream&);
	};

	struct FSM {
		void init(Game::EnemyBase*);
	};

	struct Mgr {
		Mgr(int, unsigned char);
		~Mgr();

		void createObj(int);
		void doAlloc();
		void getEnemy(int);
		void getEnemyTypeID();
	};

	struct Obj {
		Obj();
		~Obj();

		void attackPikmin();
		void breakTargetBridge();
		void checkBreakOrMove();
		void createAppearEffect();
		void createAttackEffect();
		void createBridgeEffect();
		void createDisAppearEffect();
		void createEffect();
		void damageCallBack(Game::Creature*, float, struct CollPart*);
		void doDebugDraw(struct Graphics&);
		void doDirectDraw(Graphics&);
		void doEndMovie();
		void doFinishStoneState();
		void doStartMovie();
		void doStartStoneState();
		void doUpdate();
		void effectDrawOff();
		void effectDrawOn();
		void getDownSmokeScale();
		void getEnemyTypeID();
		void getMouthSlots();
		void getShadowParam(Game::ShadowParam&);
		void getSlotPikiNum();
		void hipdropCallBack(Game::Creature*, float, CollPart*);
		void initMouthSlots();
		void isBreakBridge();
		void killSlotPiki();
		void lifeIncrement();
		void moveBridgeCentre();
		void moveBridgeSide();
		void moveBridgeTop();
		void onInit(Game::CreatureInitArg*);
		void resetBridgeSearch();
		void setBridgeSearch();
		void setCullingCheck();
		void setFSM(FSM*);
		void setInitialSetting(Game::EnemyInitialParamBase*);
		void setNearestBridge();
		void setupEffect();
		void startCarcassMotion();
	};

	struct ProperAnimator {
		~ProperAnimator();

		void getAnimator();
		void getAnimator(int);
		void setAnimator(SysShape::AnimMgr*);
	};
};

} // namespace Game

#endif