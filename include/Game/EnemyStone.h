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
	STONE_Unk1          = 0x1,  // unsure
	STONE_Fit           = 0x2,  // corresponds to DrawInfo::fit? unsure
	STONE_HasViewedDemo = 0x4,  // has watched first bittered enemy cutscene
	STONE_Shake         = 0x8,  // bittered enemy is shaking
	STONE_Break         = 0x10, // bittered enemy has broken out or died
	STONE_Unk6          = 0x20, // gets set on stone start, unsure
};

struct FSMState;

struct ObjInfo {
	ObjInfo();

	char* m_name;          // _00
	s32 _04;               // _04
	Matrixf m_modelMatrix; // _08
};

struct Info {
	void setup(Stream& stream);

	u8 m_infoCnt;       // _00
	ObjInfo* m_infoArr; // _04
};

struct DrawInfo : public CNode {
	DrawInfo(bool); // also has a defctor, so :shrug:

	virtual ~DrawInfo() { } // _08 (weak)

	void reset();
	void update(EnemyBase*);
	void makeMatrix(Matrixf*, bool);
	int getStateID();
	bool getPosAndScale(Vector3f*, f32*);
	void appear(EnemyBase*, f32);
	void fit(EnemyBase*);
	void shake(EnemyBase*, f32);
	void disappear(EnemyBase*);
	void dead(EnemyBase*);

	u8 _18[0x1C];             // _18
	FSMState* m_currentState; // _34
	f32 _38;                  // _38
	f32 _3C;                  // _3C
	ObjInfo* _40;             // _40
	Matrixf* _44;             // _44
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
	void getDrawInfo();
	void addDrawInfo(DrawInfo*);
	// ~Mgr();

	J3DModelData** _00; // _00 - could be an array of pointers
	BitFlag<u32> _04;   // _04
	CNode m_drawInfo;   // _08 - treat as DrawInfo
	CNode m_obj;        // _20 - treat as Obj
};

/////////////////////////////////////////////////////////////////
// STATE MACHINE DEFINITIONS
struct StateMachine : public Game::StateMachine<DrawInfo> {
	virtual void init(DrawInfo*);                 // _08
	virtual void makeMatrix(DrawInfo*, Matrixf*); // _18

	// _00     = VTBL
	// _00-_1C = StateMachine
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
	// probably needs an inline ctor?

	virtual void init(DrawInfo*, StateArg*);      // _08
	virtual void exec(DrawInfo*);                 // _0C
	virtual void makeMatrix(DrawInfo*, Matrixf*); // _20

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct FSMStateDead : public FSMState {
	// probably needs an inline ctor?

	virtual void init(DrawInfo*, StateArg*);      // _08
	virtual void makeMatrix(DrawInfo*, Matrixf*); // _20

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct FSMStateDisappear : public FSMState {
	// probably needs an inline ctor?

	virtual void init(DrawInfo*, StateArg*);      // _08
	virtual void exec(DrawInfo*);                 // _0C
	virtual void cleanup(DrawInfo*);              // _10
	virtual void makeMatrix(DrawInfo*, Matrixf*); // _20

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct FSMStateExpansion : public FSMState {
	// probably needs an inline ctor?

	virtual void init(DrawInfo*, StateArg*);      // _08
	virtual void exec(DrawInfo*);                 // _0C
	virtual void cleanup(DrawInfo*);              // _10
	virtual void makeMatrix(DrawInfo*, Matrixf*); // _20

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct FSMStateExpansionFull : public FSMState {
	// probably needs an inline ctor?

	virtual void makeMatrix(DrawInfo*, Matrixf*); // _20

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct FSMStateFit : public FSMState {
	// probably needs an inline ctor?

	virtual void init(DrawInfo*, StateArg*);      // _08
	virtual void exec(DrawInfo*);                 // _0C
	virtual void cleanup(DrawInfo*);              // _10
	virtual void makeMatrix(DrawInfo*, Matrixf*); // _20

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct FSMStateShake : public FSMState {
	// probably needs an inline ctor?

	virtual void init(DrawInfo*, StateArg*);      // _08
	virtual void exec(DrawInfo*);                 // _0C
	virtual void cleanup(DrawInfo*);              // _10
	virtual void makeMatrix(DrawInfo*, Matrixf*); // _20

	// _00     = VTBL
	// _00-_10 = FSMState
};
/////////////////////////////////////////////////////////////////
} // namespace EnemyStone
} // namespace Game

#endif
