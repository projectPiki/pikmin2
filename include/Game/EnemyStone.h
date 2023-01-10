#ifndef _GAME_ENEMYSTONE_H
#define _GAME_ENEMYSTONE_H

#include "CNode.h"
#include "Game/StateMachine.h"
#include "JSystem/J3D/J3DModel.h"
#include "Viewport.h"
#include "BitFlag.h"
#include "Matrixf.h"
#include "types.h"

namespace Game {
struct EnemyBase;

namespace EnemyStone {
enum StoneFlags {
	STONE_Registered    = 0x1,  // registered with EnemyStone::Mgr, unset on release
	STONE_Fit           = 0x2,  // corresponds to DrawInfo::fit? unsure
	STONE_HasViewedDemo = 0x4,  // has watched first bittered enemy cutscene
	STONE_Shake         = 0x8,  // bittered enemy is shaking
	STONE_Break         = 0x10, // bittered enemy has broken out or died
	STONE_Unk6          = 0x20, // gets set on stone start, unsure
};

struct DrawInfo;
struct FSMState;

struct StateMachine : public Game::StateMachine<DrawInfo> {
	virtual void init(DrawInfo*);                 // _08
	virtual void makeMatrix(DrawInfo*, Matrixf*); // _18

	// _00     = VTBL
	// _00-_1C = StateMachine
};

#define ENEMYSTONE_FX_SIZE_LARGE (0)
#define ENEMYSTONE_FX_SIZE_SMALL (1)

struct ObjInfo {
	ObjInfo();

	char* m_name;          // _00
	int m_size;            // _04
	Matrixf m_modelMatrix; // _08
};

struct Info {
	void setup(Stream& stream);

	u8 m_length;        // _00
	ObjInfo* m_objList; // _04
};

struct DrawInfo : public CNode {
	DrawInfo(bool check = true);

	virtual ~DrawInfo() { } // _08 (weak)

	void reset();
	void update(EnemyBase*);
	bool makeMatrix(Matrixf*, bool);
	int getStateID();
	bool getPosAndScale(Vector3f*, f32*);
	void appear(EnemyBase*, f32);
	void fit(EnemyBase*);
	void shake(EnemyBase*, f32);
	void disappear(EnemyBase*);
	void dead(EnemyBase*);

	static EnemyBase* sOwnerEnemy;

	StateMachine m_fsm;       // _18
	FSMState* m_currentState; // _34
	f32 _38;                  // _38
	f32 _3C;                  // _3C
	ObjInfo* m_objInfo;       // _40
	Matrixf* m_matrix;        // _44
};

struct Obj : public CNode {
	Obj(EnemyBase*, Info*);

	virtual ~Obj() { } // _08 (weak)

	bool start();
	void shake();
	void update();
	bool checkDrawInfoState(int);
	void dead();

	// inlined:
	void updateDrawInfo();
	void fitDrawInfo();
	void disappearDrawInfo();

	inline void resetFlags() { m_flags = 0; }

	inline void setFlag(u32 flag) { m_flags |= flag; }

	inline void resetFlag(u32 flag) { m_flags &= ~flag; }

	inline bool isFlag(u32 flag) { return m_flags & flag; }

	inline ObjInfo* getObjInfo(int i) { return &m_info->m_objList[i]; }

	inline u8 getInfoCount() { return m_info->m_length; }

	inline DrawInfo* getDrawInfo(int i) { return static_cast<DrawInfo*>(m_nodeArray[i].m_child); }

	inline Obj* getChild() { return static_cast<Obj*>(m_child); }

	// _00		= VTABLE
	// _04-_18	= CNode
	Info* m_info;         // _18
	CNode m_nodeArray[2]; // _1C
	EnemyBase* m_enemy;   // _4C
	u8 m_flags;           // _50
};

/**
 * @size{0x38}
 */
struct Mgr {
	Mgr();

	void loadResource();
	bool regist(Obj*);
	void release(Obj*);
	void draw(Viewport*);

	// Inlined/Unused:
	// DrawInfo* getDrawInfo();
	// void addDrawInfo(DrawInfo*);
	// ~Mgr();

	inline DrawInfo* getChildDrawInfo() { return static_cast<DrawInfo*>(m_drawInfo.m_child); }

	J3DModelData** m_modelData; // _00 - could be an array of pointers
	BitFlag<u32> m_flags;       // _04
	CNode m_drawInfo;           // _08 - treat as DrawInfo
	CNode m_obj;                // _20 - treat as Obj
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
enum StateID {
	STONESTATE_BaseState0    = 0, // unused but still registered?
	STONESTATE_Expansion     = 1,
	STONESTATE_ExpansionFull = 2,
	STONESTATE_Fit           = 3,
	STONESTATE_BaseState4    = 4, // unused but still registered?
	STONESTATE_Shake         = 5,
	STONESTATE_Breakable     = 6,
	STONESTATE_Disappear     = 7,
	STONESTATE_Dead          = 8,
	STONESTATE_StateCount,
};

struct FSMState : public Game::FSMState<DrawInfo> {
	inline FSMState(int stateID) // probably?
	    : Game::FSMState<DrawInfo>(stateID)
	{
	}

	virtual void makeMatrix(DrawInfo*, Matrixf*); // _20

	// _00     = VTBL
	// _00-_0C = FSMState
	Matrixf* m_matrix; // _0C, probably?
};

struct FSMStateBreakable : public FSMState {
	inline FSMStateBreakable()
	    : FSMState(STONESTATE_Breakable)
	{
	}

	virtual void init(DrawInfo*, StateArg*);      // _08
	virtual void exec(DrawInfo*);                 // _0C
	virtual void makeMatrix(DrawInfo*, Matrixf*); // _20

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct FSMStateDead : public FSMState {
	inline FSMStateDead()
	    : FSMState(STONESTATE_Dead)
	{
	}

	virtual void init(DrawInfo*, StateArg*);      // _08
	virtual void makeMatrix(DrawInfo*, Matrixf*); // _20

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct FSMStateDisappear : public FSMState {
	inline FSMStateDisappear()
	    : FSMState(STONESTATE_Disappear)
	{
	}

	virtual void init(DrawInfo*, StateArg*);      // _08
	virtual void exec(DrawInfo*);                 // _0C
	virtual void cleanup(DrawInfo*);              // _10
	virtual void makeMatrix(DrawInfo*, Matrixf*); // _20

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct FSMStateExpansion : public FSMState {
	inline FSMStateExpansion()
	    : FSMState(STONESTATE_Expansion)
	{
		_10 = 0;
	}

	virtual void init(DrawInfo*, StateArg*);      // _08
	virtual void exec(DrawInfo*);                 // _0C
	virtual void cleanup(DrawInfo*);              // _10
	virtual void makeMatrix(DrawInfo*, Matrixf*); // _20

	// _00     = VTBL
	// _00-_10 = FSMState
	u8 _10; // _10, unknown
};

struct FSMStateExpansionFull : public FSMState {
	inline FSMStateExpansionFull()
	    : FSMState(STONESTATE_ExpansionFull)
	{
	}

	virtual void makeMatrix(DrawInfo*, Matrixf*); // _20

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct FSMStateFit : public FSMState {
	inline FSMStateFit()
	    : FSMState(STONESTATE_Fit)
	{
	}

	virtual void init(DrawInfo*, StateArg*);      // _08
	virtual void exec(DrawInfo*);                 // _0C
	virtual void cleanup(DrawInfo*);              // _10
	virtual void makeMatrix(DrawInfo*, Matrixf*); // _20

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct FSMStateShake : public FSMState {
	inline FSMStateShake()
	    : FSMState(STONESTATE_Shake)
	{
		_10 = -1;
		_14 = 10.0f;
	}

	virtual void init(DrawInfo*, StateArg*);      // _08
	virtual void exec(DrawInfo*);                 // _0C
	virtual void cleanup(DrawInfo*);              // _10
	virtual void makeMatrix(DrawInfo*, Matrixf*); // _20

	// _00     = VTBL
	// _00-_10 = FSMState
	int _10; // _10, unknown
	f32 _14; // _14
};
/////////////////////////////////////////////////////////////////
} // namespace EnemyStone
} // namespace Game

#endif
