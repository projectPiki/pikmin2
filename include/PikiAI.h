#ifndef _PIKIAI_H
#define _PIKIAI_H

#include "types.h"
#include "Vector3.h"
#include "SysShape/MotionListener.h"
#include "Condition.h"
#include "Collinfo.h"
#include "Game/SlotChangeListener.h"

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
struct Creature;
struct ItemGate;
struct BaseItem;
struct Navi;
struct CPlate;
struct BaseFlockMgr;
struct EnemyBase;
struct Footmark;

namespace ItemRock {
struct Item;
} // namespace ItemRock

namespace ItemBridge {
struct Item;
} // namespace ItemBridge

namespace ItemWeed {
struct Item;
} // namespace ItemWeed
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

enum PikiBrainAction {
	ACT_FORMATION  = 0,
	ACT_FREE       = 1,
	ACT_ENTER      = 2,
	ACT_EXIT       = 3,
	ACT_TRANSPORT  = 4,
	ACT_BORE       = 5,
	ACT_BREAK_GATE = 6,
	ACT_BREAK_ROCK = 7,
	ACT_CROP       = 8,
	ACT_WEED       = 9,
	ACT_BRIDGE     = 10,
	ACT_TEKI       = 11,
	ACT_RESCUE     = 12,
	ACT_BATTLE     = 13
};

struct ActionArg {
	virtual char* getName() // _08 (weak)
	{
		return "ActionArg";
	}

	// _00 = VTBL
};

struct CreatureActionArg : public ActionArg {
	inline CreatureActionArg(Game::Creature* creature)
	    : mCreature(creature)
	{
	}

	virtual char* getName() // _08 (weak)
	{
		return "CreatureActionArg";
	}

	// _00 VTBL
	Game::Creature* mCreature; // _04
};

struct Action {
	Action(Game::Piki* piki);

	virtual void init(ActionArg* settings) { }                             // _08 (weak)
	virtual int exec();                                                    // _0C (weak)
	virtual void cleanup();                                                // _10 (weak)
	virtual void emotion_success();                                        // _14 (weak)
	virtual void emotion_fail();                                           // _18 (weak)
	virtual bool applicable() { return true; }                             // _1C (weak)
	virtual u32 getNextAIType();                                           // _20 (weak)
	virtual void bounceCallback(Game::Piki* p, Sys::Triangle* hit);        // _24 (weak)
	virtual void collisionCallback(Game::Piki* p, Game::CollEvent& event); // _28 (weak)
	virtual void platCallback(Game::Piki* p, Game::PlatEvent& event);      // _2C (weak)
	virtual void doDirectDraw(Graphics& gfx) { }                           // _30 (weak)
	virtual void wallCallback(Vector3f& pos);                              // _34 (weak)
	virtual void getInfo(char*);                                           // _38

	// _00 = VTBL
	Game::Piki* mParent; // _04
	char* mName;         // _08
};

struct ApproachPosActionArg : public ActionArg {
	inline ApproachPosActionArg(Vector3f& pos, f32 a, f32 b, u8 c, u8 d)
	    : mPosition(pos)
	    , _10(a)
	    , _14(b)
	    , _18(c)
	    , _19(d)
	{
	}

	virtual char* getName(); // _08 (weak)

	// _00 = VTBL
	Vector3f mPosition; // _04
	f32 _10;            // _10
	f32 _14;            // _14
	u8 _18;             // _18
	u8 _19;             // _19
};

struct ActApproachPos : public Action {
	ActApproachPos(Game::Piki* p);

	virtual void init(ActionArg* settings); // _08
	virtual int exec();                     // _0C
	virtual void cleanup();                 // _10

	// _00     = VTBL
	// _00-_0C = Action
	f32 _0C;            // _0C
	Vector3f mPosition; // _10
	f32 _1C;            // _1C
	f32 _20;            // _20
	u8 _24;             // _24
	u8 _25;             // _25
};

struct ActAttackArg : public ActionArg {
	virtual char* getName() { return "ActAttackArg"; } // _08 (weak)

	// _00 = VTBL
	Game::Creature* mCreature; // _04
	CollPart* mCollPart;       // _08
};

struct ActAttack : public Action, virtual SysShape::MotionListener {
	ActAttack(Game::Piki* p);

	virtual void init(ActionArg* settings);                                // _08
	virtual int exec();                                                    // _0C
	virtual void cleanup();                                                // _10
	virtual void emotion_success();                                        // _14
	virtual bool applicable();                                             // _1C
	virtual u32 getNextAIType();                                           // _20 (weak)
	virtual void bounceCallback(Game::Piki* p, Sys::Triangle* hit);        // _24
	virtual void collisionCallback(Game::Piki* p, Game::CollEvent& event); // _28
	virtual void getInfo(char*);                                           // _38
	virtual void onKeyEvent(const SysShape::KeyEvent& event);              // _3C (weak)

	void initStickAttack();
	void initAdjust();
	void initJump();
	void initJumpAdjust();
	void calcAttackPos();

	// _00     = VTBL
	// _00-_0C = Action
	// _0C-_10 = MotionListener*
	Game::Creature* mCreature;    // _10
	CollPart* mCollPart;          // _14
	u16 _18;                      // _18
	ActStickAttack* mStickAttack; // _1C
	ActApproachPos* mApproachPos; // _20
	Sys::Sphere* mAttackSphere;   // _24
	s16 _34;                      // _34
	u8 _36;                       // _36
	                              // _38 = MotionListener
};

struct ActBattleArg : public ActionArg {
	virtual char* getName() { return "ActBattleArg"; } // _08 (weak)

	inline ActBattleArg(Game::Piki* piki, bool start)
	{
		mAggressor     = piki;
		mIsAttackStart = start;
	}

	// _00 = VTBL
	Game::Piki* mAggressor; // _04
	bool mIsAttackStart;    // _08
};

#define PIKIAI_ACTBATTLE_APPROACH (0)
#define PIKIAI_ACTBATTLE_BATTLE   (1)
#define PIKIAI_ACTBATTLE_DAMAGE   (2)

// Pikmin hitting eachother, like in VS mode
struct ActBattle : public Action, virtual SysShape::MotionListener {
	ActBattle(Game::Piki* p);

	virtual void init(ActionArg* settings);                                // _08
	virtual int exec();                                                    // _0C
	virtual void cleanup();                                                // _10
	virtual void emotion_success();                                        // _14
	virtual void collisionCallback(Game::Piki* p, Game::CollEvent& event); // _28
	virtual void onKeyEvent(const SysShape::KeyEvent& event);              // _3C (weak)

	void initApproach();
	int execApproach();
	void initBattle();
	int execBattle();
	int execDamage();

	// _00     = VTBL
	// _00-_0C = Action
	// _0C-_10 = MotionListener*
	Game::Piki* mOther;           // _10, vs battle piki attack
	u8 mState;                    // _14
	ActApproachPos* mApproachPos; // _18
	s8 _1C;                       // _1C
	s8 _1D;                       // _1D
};

struct ActBoreBase : public Action, virtual SysShape::MotionListener {
	virtual void finish()                                    = 0; // _3C
	virtual void onKeyEvent(const SysShape::KeyEvent& event) = 0; // _40

	// _00     = VTBL
	// _00-_0C = Action
	// _0C-_10 = MotionListener*
};

struct ActBore : public Action {
	ActBore(Game::Piki* p);

	virtual void init(ActionArg* settings); // _08
	virtual int exec();                     // _0C
	virtual void cleanup();                 // _10

	void startCurrAction();
	void finish();

	// _00     = VTBL
	// _00-_0C = Action
	u8 _0C;               // _0C
	u32 _10;              // _10
	u32 _14;              // _14
	u8 _18;               // _18
	ActRest* mRest;       // _1C
	ActOneshot* mOneshot; // _20
};

struct ActBreakGateArg : public ActionArg {
	virtual char* getName(); // _08 (weak)

	// _00 = VTBL
	Game::ItemGate* mGate; // _04
};

struct ActBreakGate : public Action, virtual SysShape::MotionListener {
	ActBreakGate(Game::Piki* p);

	virtual void init(ActionArg* settings);                                // _08
	virtual int exec();                                                    // _0C
	virtual void cleanup();                                                // _10
	virtual void emotion_success();                                        // _14
	virtual void bounceCallback(Game::Piki* p, Sys::Triangle* hit);        // _24
	virtual void collisionCallback(Game::Piki* p, Game::CollEvent& event); // _28
	virtual void platCallback(Game::Piki* p, Game::PlatEvent& event);      // _2C
	virtual void onKeyEvent(const SysShape::KeyEvent& event);              // _3C

	void initFollow();
	inline void initStickAttack();

	// _00     = VTBL
	// _00-_0C = Action
	// _0C-_10 = MotionListener*
	Game::ItemGate* mGate;              // _10
	u16 mState;                         // _14
	ActStickAttack* mStickAttack;       // _18
	ActGotoPos* mGotoPos;               // _1C
	ActFollowVectorField* mFollowField; // _20
	u8 _24;                             // _24
	u8 _25[0x3];                        // _25, unknown/probably padding
	u8 _28[0xC];                        // _28, unknown
	                                    // _34 = MotionListener
};

struct ActBreakRockArg : public ActionArg {
	virtual char* getName(); // _08 (weak)

	// _00 = VTBL
	Game::ItemRock::Item* mRock; // _04
};

struct ActBreakRock : public Action, public virtual SysShape::MotionListener {
	ActBreakRock(Game::Piki* p);

	virtual void init(ActionArg* settings);                                // _08
	virtual int exec();                                                    // _0C
	virtual void cleanup();                                                // _10
	virtual void bounceCallback(Game::Piki* p, Sys::Triangle* hit);        // _24
	virtual void collisionCallback(Game::Piki* p, Game::CollEvent& event); // _28
	virtual void platCallback(Game::Piki* p, Game::PlatEvent& event);      // _2C
	virtual void onKeyEvent(const SysShape::KeyEvent& event) { }           // _3C

	void initFollow();
	inline void initStickAttack();

	// _00     = VTBL
	// _00-_0C = Action
	// _0C-_10 = MotionListener*
	Game::ItemRock::Item* mRock;        // _10
	u16 mState;                         // _14
	ActStickAttack* mStickAttack;       // _18
	ActGotoPos* mGotoPos;               // _1C
	ActFollowVectorField* mFollowField; // _20
	u8 _24[0xC];                        // _24, unknown
	                                    // _30 = MotionListener
};

struct ActBridgeArg : public ActionArg {
	virtual char* getName(); // _08 (weak)

	// _00 = VTBL
	Game::ItemBridge::Item* mBridge; // _04
};

#define PIKIAI_BRIDGE_DEFAULT     0
#define PIKIAI_BRIDGE_GOTOPOS     1
#define PIKIAI_BRIDGE_STICKATTACK 2

struct ActBridge : public Action, virtual SysShape::MotionListener {
	ActBridge(Game::Piki* p);

	virtual void init(PikiAI::ActionArg*);                                 // _08
	virtual int exec();                                                    // _0C
	virtual void cleanup();                                                // _10
	virtual void bounceCallback(Game::Piki* p, Sys::Triangle* hit);        // _24
	virtual void collisionCallback(Game::Piki* p, Game::CollEvent& event); // _28
	virtual void platCallback(Game::Piki* p, Game::PlatEvent& event);      // _2C
	virtual void onKeyEvent(const SysShape::KeyEvent& event) { }           // _3C (weak)

	void initFollow();
	inline void initGoto();
	inline void initStickAttack();
	inline void calcAttackPos();

	// _00     = VTBL
	// _00-_0C = Action
	// _0C-_10 = MotionListener*
	Game::ItemBridge::Item* mBridge;    // _10
	u16 mState;                         // _14
	ActStickAttack* mStickAttack;       // _18
	ActGotoPos* mGotoPos;               // _1C
	ActFollowVectorField* mFollowField; // _20
	u32 _24;                            // _24
	u32 _28;                            // _28
	u32 _2C;                            // _2C
	u8 _30;                             // _30
	                                    // _34 = MotionListener
};

struct ClimbActionArg : public ActionArg {
	virtual char* getName(); // _08 (weak)

	// _00 = VTBL
	CollPart* mCollPart; // _04
	f32 _08;             // _08
	u8 _0C;              // _0C
};

struct ActClimb : public Action {
	ActClimb(Game::Piki* p);

	virtual void init(ActionArg* settings); // _08
	virtual int exec();                     // _0C
	virtual void cleanup();                 // _10

	// _00     = VTBL
	// _00-_0C = Action
	CollPart* mCollPart; // _0C
	f32 _10;             // _10
	Vector3f _14;        // _14
	u8 _20;              // _20
};

struct ActCropArg : public ActionArg {
	virtual char* getName() { return "ActCropArg"; } // _08 (weak)

	// _00 = VTBL
	Game::Creature* mCreature; // _04
};

struct ActCrop : public Action, virtual SysShape::MotionListener {
	ActCrop(Game::Piki* p);

	virtual void init(ActionArg* settings);                                // _08
	virtual int exec();                                                    // _0C
	virtual void cleanup();                                                // _10
	virtual u32 getNextAIType();                                           // _20 (weak)
	virtual void collisionCallback(Game::Piki* p, Game::CollEvent& event); // _28
	virtual void onKeyEvent(const SysShape::KeyEvent& event);              // _3C (weak)

	void execClimb();
	void initGoto();
	void initAttack();

	// _00     = VTBL
	// _00-_0C = Action
	// _0C-_10 = MotionListener*
	Game::Creature* mCreature;    // _10
	CollPart* mCollPart;          // _14
	Vector3f _18;                 // _18
	f32 _24;                      // _24
	s16 _28;                      // _28
	ActStickAttack* mStickAttack; // _2C
	ActGotoPos* mGotoPos;         // _30
	u8 _34[0x8];                  // _34, unknown
	u8 _3C;                       // _3C
	                              // _40 = MotionListener
};

struct ActEnter : public Action, virtual SysShape::MotionListener {
	ActEnter(Game::Piki* p);

	virtual void init(ActionArg* settings);                   // _08
	virtual int exec();                                       // _0C
	virtual void cleanup();                                   // _10
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _3C (weak)

	void initStay();
	void execStay();
	void initSuck();
	void execSuck();

	// _00     = VTBL
	// _00-_0C = Action
	// _0C-_10 = MotionListener*
	s16 _10;              // _10
	ActGotoPos* mGotoPos; // _14
	ActClimb* mClimb;     // _18
	CollPart* mOnyonLeg;  // _1C
	CollPart* mOnyonFoot; // _20
	Game::Onyon* mOnyon;  // _24
	Vector3f _28;         // _28
	Vector3f _34;         // _34
	f32 _40;              // _40
	f32 _44;              // _44
	f32 _48;              // _48
	u8 _4C;               // _4C
	Vector3f _50;         // _50
	f32 mBaseScale;       // _54
	                      // _58 = MotionListener
};

struct ActExit : public Action {
	ActExit(Game::Piki* p);

	virtual void init(ActionArg* settings); // _08
	virtual int exec();                     // _0C
	virtual void cleanup();                 // _10

	// _00     = VTBL
	// _00-_0C = Action
	ActClimb* mClimb;          // _0C
	CollPart* mOnyonLeg;       // _10
	Game::Creature* mCreature; // _14
	f32 mBaseScale;            // _18
};

struct FlockAttackActionArg : public ActionArg {
	virtual char* getName(); // _08 (weak)

	// _00 = VTBL
	f32 _04; // _04
	u32 _08; // _08, unknown
	int _0C; // _0C
	int _10; // _10
};

struct ActFlockAttack : public Action, virtual SysShape::MotionListener {
	ActFlockAttack(Game::Piki* p);

	virtual void init(ActionArg* settings);                   // _08
	virtual int exec();                                       // _0C
	virtual void cleanup();                                   // _10
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _3C (weak)

	// _00     = VTBL
	// _00-_0C = Action
	// _0C-_10 = MotionListener*
	u8 _10;      // _10
	u8 _11[0x3]; // _11, unknown/probably padding
	u8 _14[0x4]; // _14, unknown
	f32 _18;     // _18
	u8 _1C;      // _1C
	int _20;     // _20
	u8 _24[0x4]; // _24, unknown
	             // _28 = MotionListener
};

struct FollowVectorFieldActionArg : public ActionArg {
	inline FollowVectorFieldActionArg(Game::BaseItem* item)
	    : mItem(item)
	{
	}

	virtual char* getName(); // _08 (weak) uncomment this when linking aiBreakGate.cpp
	// {
	// 	return "FollowVectorFieldActionArg";
	// }

	// _00 = VTBL
	Game::BaseItem* mItem; // _04
};

struct ActFollowVectorField : public Action {
	ActFollowVectorField(Game::Piki* p);

	virtual void init(ActionArg* settings); // _08
	virtual int exec();                     // _0C
	virtual void cleanup();                 // _10

	// _00     = VTBL
	// _00-_0C = Action
	Game::BaseItem* mItem; // _0C
};

struct ActFormationInitArg : public CreatureActionArg {
	inline ActFormationInitArg(Game::Creature* navi, bool b1)
	    : CreatureActionArg(navi)
	    , _08(b1)
	{
	}

	inline ActFormationInitArg(Game::Creature* navi)
	    : CreatureActionArg(navi)
	    , _08(false)
	    , _09(0)
	{
	}

	// _00     = VTBL
	// _00-_08 = CreatureActionArg, Creature* = Navi*
	bool _08; // _08
	u8 _09;   // _09
};

#define FORMATION_SORT_NONE    (0)
#define FORMATION_SORT_FORMED  (1)
#define FORMATION_SORT_STARTED (2)

struct ActFormation : public Action, virtual Game::SlotChangeListener, virtual SysShape::MotionListener {
	ActFormation(Game::Piki* p);

	virtual void init(ActionArg* settings);                                // _08
	virtual int exec();                                                    // _0C
	virtual void cleanup();                                                // _10
	virtual u32 getNextAIType();                                           // _20 (weak)
	virtual void collisionCallback(Game::Piki* p, Game::CollEvent& event); // _28
	virtual void platCallback(Game::Piki* p, Game::PlatEvent& event);      // _2C
	virtual void wallCallback(Vector3f& pos);                              // _34
	virtual bool resumable();                                              // _3C (weak)
	virtual void inform(int);                                              // _40 (weak)
	virtual void onKeyEvent(const SysShape::KeyEvent& event);              // _44 (weak)

	void startSort();
	void setFormed();

	// _00     = VTBL
	// _00-_0C = Action
	// _0C-_10 = SlotChangeListener*
	// _10-_14 = MotionListener*
	Game::Navi* mNavi;            // _14
	ActFormationInitArg mInitArg; // _18
	int mNextAIType;              // _24
	u16 mSortState;               // _28, use FORMATION_SORT_ enum
	u16 _2A;                      // _2A
	u16 _2C;                      // _2C
	u16 _2E;                      // _2E
	u8 _30;                       // _30
	u8 _31;                       // _31
	int mSlotID;                  // _34
	u8 _38;                       // _38
	u32 _3C;                      // _3C, unknown
	u8 _40;                       // _40
	int mFrameTimer;              // _44
	int _48;                      // _48
	int _4C;                      // _4C
	f32 _50;                      // _50
	u8 _54;                       // _54
	f32 _58;                      // _58, timer?
	Game::CPlate* mCPlate;        // _5C
	bool _60;                     // _60
	bool _61;                     // _61
	                              // _64 = SlotChangeListener
	                              // _6C = MotionListener
};

struct ActFreeArg : public ActionArg {
	virtual char* getName(); // _08 (weak)

	// _00 = VTBL
	u8 mToGather;          // _04
	Vector3f mDestination; // _08
	f32 _14;               // _14
};

#define PIKIAI_FREE_DEFAULT 0
#define PIKIAI_FREE_GATHER  1
#define PIKIAI_FREE_BORE    2

struct ActFree : public Action, virtual SysShape::MotionListener {
	ActFree(Game::Piki* p);

	virtual void init(PikiAI::ActionArg*);                                 // _08
	virtual int exec();                                                    // _0C
	virtual void cleanup();                                                // _10
	virtual u32 getNextAIType();                                           // _20 (weak)
	virtual void collisionCallback(Game::Piki* p, Game::CollEvent& event); // _28
	virtual void onKeyEvent(const SysShape::KeyEvent& event);              // _3C (weak)

	// _00     = VTBL
	// _00-_0C = Action
	// _0C-_10 = MotionListener*
	u16 mState;         // _10
	ActGather* mGather; // _14
	ActBore* mBore;     // _18
	u16 mDelayTimer;    // _1C
	                    // _20 = MotionListener
};

struct GatherActionArg : public ActionArg {
	inline GatherActionArg(ActFreeArg* arg)
	{
		mDestination.x = arg->mDestination.x;
		mDestination.y = arg->mDestination.y;
		mDestination.z = arg->mDestination.z;
		_10            = arg->_14;
	}

	virtual char* getName(); // _08 (weak)

	// _00 = VTBL
	Vector3f mDestination; // _04
	f32 _10;               // _10
};

struct ActGather : public Action {
	ActGather(Game::Piki* p);

	virtual void cleanup();                // _08
	virtual int exec();                    // _0C
	virtual void init(PikiAI::ActionArg*); // _10

	// _00     = VTBL
	// _00-_0C = Action
	Vector3f _0C; // _0C
	f32 _18;      // _18
	f32 mTimer;   // _1C
};

struct GotoPosActionArg : public ActionArg {
	virtual char* getName(); // _08 (weak)

	// _00 = VTBL
	Vector3f mPosition; // _04
	f32 _10;            // _10
};

struct ActGotoPos : public Action {
	ActGotoPos(Game::Piki* p);

	virtual void init(PikiAI::ActionArg*); // _08
	virtual int exec();                    // _0C
	virtual void cleanup();                // _10

	// _00     = VTBL
	// _00-_0C = Action
	f32 _0C;            // _0C
	Vector3f mPosition; // _10
};

struct GotoSlotArg : public ActionArg {
	virtual char* getName(); // _08 (weak)

	// _00 = VTBL
	Game::Pellet* mPellet; // _04
	u8 _08;                // _08
};

struct ActGotoSlot : public Action {
	ActGotoSlot(Game::Piki* p);

	virtual void init(ActionArg* settings);   // _08
	virtual int exec();                       // _0C
	virtual void cleanup();                   // _10
	virtual void wallCallback(Vector3f& pos); // _34

	void resetTimers();

	// _00     = VTBL
	// _00-_0C = Action
	Game::Pellet* mPellet; // _0C
	s16 _10;               // _10, slot?
	u32 _14;               // _14
	f32 _18;               // _18
	u8 _1C;                // _1C
	u8 _1D;                // _1D
};

struct ActOneshotArg : public ActionArg {
	// _00 = VTBL
	int _04; // _04
};

struct ActOneshot : public ActBoreBase {
	ActOneshot(Game::Piki* p);

	virtual void init(ActionArg* settings);                   // _08
	virtual int exec();                                       // _0C
	virtual void cleanup();                                   // _10
	virtual void finish();                                    // _3C
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _40 (weak)

	// _00     = VTBL
	// _00-_10 = ActBoreBase
	ActOneshotArg mOneshotArg; // _10
	u8 _18;                    // _18
	                           // _1C = MotionListener
};

struct PathMoveArg : public ActionArg {
	virtual char* getName(); // _08 (weak)

	// _00 = VTBL
	Game::Pellet* mPellet; // _04
	Vector3f _08;          // _08
	s16 _14;               // _14
	u32 _18;               // _18
};

struct ActPathMove : public Action {
	ActPathMove(Game::Piki* p);

	virtual void init(ActionArg* settings); // _08
	virtual int exec();                     // _0C
	virtual void cleanup();                 // _10

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

	// _00     = VTBL
	// _00-_0C = Action
	void* _0C;             // _0C, unknown
	Vector3f _10;          // _10
	s16 _1C;               // _1C
	s16 _1E;               // _1E
	u32 _20;               // _20
	Vector3f _24;          // _24
	Game::Pellet* mPellet; // _30
	Game::Onyon* mOnyon;   // _34
	f32 _38;               // _38
	u8 _3C;                // _3C
	u8 _3D;                // _3D
	u8 _3E[6];             // _3E
	Game::PathNode* _44;   // _44
	Game::PathNode* _48;   // _48
	int _4C;               // _4C
	int _50;               // _50
	s16 _54;               // _54
	s16 _56;               // _56
	Vector3f _58;          // _58
	Game::WayPoint* _64;   // _64
	f32 _68;               // _68
	u32 _6C;               // _6C
	int _70;               // _70
	Vector3f _74[4];       // _74
	Vector3f _A4;          // _A4
	Vector3f _B0;          // _B0
};

struct ActRescue : public Action, virtual SysShape::MotionListener {
	ActRescue(Game::Piki* p);

	virtual void init(ActionArg* settings);                                // _08
	virtual int exec();                                                    // _0C
	virtual void cleanup();                                                // _10
	virtual void emotion_success();                                        // _14
	virtual u32 getNextAIType();                                           // _20 (weak)
	virtual void collisionCallback(Game::Piki* p, Game::CollEvent& event); // _28
	virtual void doDirectDraw(Graphics& gfx);                              // _30
	virtual void onKeyEvent(const SysShape::KeyEvent& event);              // _3C (weak)

	void initApproach();
	void execApproach();
	void initGo();
	void execGo();
	void initThrow();
	void execThrow();

	// _00     = VTBL
	// _00-_0C = Action
	// _0C-_10 = MotionListener*
	u8 _10[0x4];                  // _10, unknown
	u8 _14;                       // _14
	ActApproachPos* mApproachPos; // _18
	Game::Piki* mTargetPiki;      // _1C
	Game::WayPoint* mWayPoint;    // _20
	u8 _24[0x4];                  // _24, unknown
	                              // _28 = MotionListener
};

struct ActRest : public ActBoreBase {
	ActRest(Game::Piki* p);

	virtual void init(ActionArg* settings);                   // _08
	virtual int exec();                                       // _0C
	virtual void cleanup();                                   // _10
	virtual void finish();                                    // _3C
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _40 (weak)

	void sitDown();

	// _00     = VTBL
	// _00-_10 = ActBoreBase
	u8 _10;  // _10
	f32 _14; // _14
	u8 _18;  // _18
	         // _1C = MotionListener
};

struct StickAttackActionArg : public ActionArg {
	inline StickAttackActionArg(f32 damage, Game::Creature* creature, int state, u8 p1)
	    : mAttackDamage(damage)
	    , mCreature(creature)
	    , mNextState(state)
	    , _10(p1)
	{
	}

	virtual char* getName(); // _08 (weak)

	// _00 = VTBL
	f32 mAttackDamage;         // _04
	Game::Creature* mCreature; // _08
	int mNextState;            // _0C
	u8 _10;                    // _10
};

struct ActStickAttack : public Action, virtual SysShape::MotionListener {
	ActStickAttack(Game::Piki* p);

	virtual void init(ActionArg* settings);                   // _08
	virtual int exec();                                       // _0C
	virtual void cleanup();                                   // _10
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _3C (weak)

	void createEfx();

	// _00     = VTBL
	// _00-_0C = Action
	// _0C-_10 = MotionListener*
	Game::Creature* mCreature; // _10
	f32 _14;                   // _14
	u8 _18;                    // _18
	u8 _19;                    // _19
	u8 _1A;                    // _1A
	u8 _1B;                    // _1B
	u8 _1C;                    // _1C
	u8 _1D;                    // _1D
	int mStateID;              // _20
	                           // _24 = MotionListener
};

struct ActTeki : public Action, virtual SysShape::MotionListener {
	ActTeki(Game::Piki* p);

	virtual void init(ActionArg* settings);                                // _08
	virtual int exec();                                                    // _0C
	virtual void cleanup();                                                // _10
	virtual void emotion_success();                                        // _14
	virtual u32 getNextAIType() { return 1; }                              // _20 (weak)
	virtual void collisionCallback(Game::Piki* p, Game::CollEvent& event); // _28
	virtual void doDirectDraw(Graphics& gfx);                              // _30
	virtual void onKeyEvent(const SysShape::KeyEvent& event) { }           // _3C (weak)

	void makeTarget();
	void test_0();
	void setTimer();

	// _00     = VTBL
	// _00-_0C = Action
	// _0C-_10 = MotionListener*
	Game::EnemyBase* mFollowingTeki; // _10
	bool mToPanicFinish;             // _14
	bool mToEmote;                   // _15
	Game::Footmark* mFollowMark;     // _18
	s32 _1C;                         // _1C
	f32 _20;                         // _20
	f32 mMoveSpeed;                  // _24
	u32 _28;                         // _28
	Vector3f _2C;                    // _2C
	f32 _38;                         // _38
	f32 _3C;                         // _3C
	f32 _40;                         // _40
	f32 _44;                         // _44
	                                 // _48 = MotionListener
};

struct ActTransportArg : public ActionArg {
	virtual char* getName(); // _08 (weak)

	// _00 = VTBL
	Game::Pellet* mPellet; // _04
	u32 _08;               // _08, unknown
	Vector3f _0C;          // _0C
	s16 _18;               // _18, slot maybe?
};

struct ActTransport : public Action, virtual SysShape::MotionListener {
	ActTransport(Game::Piki* p);

	virtual void init(ActionArg* settings);                   // _08
	virtual int exec();                                       // _0C
	virtual void cleanup();                                   // _10
	virtual void emotion_success();                           // _14
	virtual void emotion_fail();                              // _18
	virtual void getInfo(char*);                              // _38
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _3C (weak)

	void isStickLeader();
	void initLift();
	void execLift();

	// _00     = VTBL
	// _00-_0C = Action
	// _0C-_10 = MotionListener*
	Game::Pellet* mPellet;  // _10
	u32 _14;                // _14, unknown
	s16 _18;                // _18
	Vector3f _1C;           // _1C
	s16 _28;                // _28
	ActGotoSlot* mGotoSlot; // _2C
	ActPathMove* mPathMove; // _30
	u8 _34;                 // _34
	s16 _36;                // _36
	u8 _38;                 // _38
	u8 _39;                 // _39
	bool _3A;               // _3A
	                        // _3C = MotionListener
};

struct ActWeedArg : public ActionArg {
	virtual char* getName(); // _08 (weak)

	// _00 = VTBL
	Game::ItemWeed::Item* mWeed; // _04
};

struct ActWeed : public Action {
	ActWeed(Game::Piki* p);

	virtual void init(ActionArg* settings);                                // _08
	virtual int exec();                                                    // _0C
	virtual void cleanup();                                                // _10
	virtual void collisionCallback(Game::Piki* p, Game::CollEvent& event); // _28
	virtual void getInfo(char*);                                           // _38

	void decideTarget();
	void initAdjust();
	void calcAttackPos();

	// _00     = VTBL
	// _00-_0C = Action
	Game::ItemWeed::Item* mWeed;   // _0C
	Game::BaseFlockMgr* mFlockMgr; // _10
	u16 _14;                       // _14
	ActFlockAttack* mFlockAttack;  // _18
	ActApproachPos* mApproachPos;  // _1C
	u8 _20;                        // _20
	int _24;                       // _24
	Vector3f mAttackPosition;      // _28
};

struct Brain {
	Brain(Game::Piki* p);

	void addAction(PikiAI::Action*);
	void init();
	void exec();
	PikiAI::Action* getCurrAction();
	Game::Navi* searchOrima();
	void start(int, PikiAI::ActionArg*);

	Action** mActions; // _00, might be array of ptrs instead
	int mActionCnt;    // _04
	int mActionId;     // _08
	Game::Piki* mPiki; // _0C
};
}; // namespace PikiAI

#endif
