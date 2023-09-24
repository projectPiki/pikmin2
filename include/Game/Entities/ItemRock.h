#ifndef _GAME_ENTITIES_ITEMROCK_H
#define _GAME_ENTITIES_ITEMROCK_H

#include "types.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "Game/PlatInstance.h"
#include "Game/Farm.h"
#include "efx/TKouhai.h"

namespace Game {
namespace ItemRock {
struct Item;

enum StateID {
	ITEMROCK_Normal = 0,
	ITEMROCK_Down   = 1,
	ITEMROCK_Up     = 2,
	ITEMROCK_StateCount, // 3
};

struct FSM : public ItemFSM<Item> {
	virtual void init(Item*); // _08

	// _00     = VTBL
	// _00-_1C = ItemFSM
};

struct State : public ItemState<Item> {
	inline State(int stateID)
	    : ItemState(stateID)
	{
	}

	virtual void onDamage(Item*, f32); // _20 (weak)

	// _00     = VTBL
	// _00-_0C = ItemState
	u32 _0C; // _0C, unknown - probably was mName
	u8 _10;  // _10
	u8 _11;  // _11
};

struct NormalState : public State {
	inline NormalState()
	    : State(ITEMROCK_Normal)
	{
	}

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, f32);                         // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = State
};

struct DownState : public State {
	inline DownState()
	    : State(ITEMROCK_Down)
	{
	}

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, f32);                         // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = State
};

struct UpState : public State {
	inline UpState()
	    : State(ITEMROCK_Up)
	{
	}

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, f32);                         // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = State
};

struct RockParms : public CreatureParms {
	struct Parms : public Parameters {
		inline Parms(); // probably

		Parm<f32> mP000; // _E8
		Parm<f32> mP001; // _110
		Parm<f32> mP002; // _138
		Parm<f32> mP003; // _160
		Parm<f32> mP004; // _188
		Parm<f32> mP005; // _1B0
		Parm<f32> mP006; // _1D8
		Parm<f32> mP007; // _200
		Parm<f32> mP008; // _228
		Parm<f32> mP009; // _250
		Parm<f32> mP010; // _278
	};

	RockParms();

	virtual void read(Stream&); // _08 (weak)

	// _00-_D8 = CreatureParms
	// _D8		 = VTBL
	Parms mRockParms; // _DC
};

struct Item : public WorkItem<Item, FSM, State> {
	Item();

	virtual void constructor();                               // _2C
	virtual void onInit(CreatureInitArg*);                    // _30
	virtual void onKill(CreatureKillArg*);                    // _34
	virtual void doSave(Stream& stream);                      // _E0
	virtual void doLoad(Stream& stream);                      // _E4
	virtual void on_movie_end(bool shouldResetAnims);         // _114
	virtual char* getCreatureName();                          // _1A8 (weak)
	virtual void doAI();                                      // _1C8
	virtual bool interactAttack(InteractAttack&);             // _1E0
	virtual bool getVectorField(Sys::Sphere&, Vector3f&);     // _204
	virtual f32 getWorkDistance(Sys::Sphere&);                // _208
	virtual void updateBoundSphere();                         // _210
	virtual void onSetPosition();                             // _21C
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _220 (weak)

	void startLoopEffect();
	void finishLoopEffect();
	void startFukuEffect(Vector3f&);
	void initMotion();
	void startWaitMotion();
	void startDamageMotion();
	void startDownMotion();
	void startUpMotion();
	void createRock(int);
	f32 getWorkRadius();

	// unused/inlined:
	void emitDamageEffect();

	// _00      = VTBL
	// _00-_1EC = WorkItem
	Farm::Obstacle* mObstacle;  // _1EC
	efx::TKouhai1* mEfxKouhai1; // _1F0
	efx::TKouhai2* mEfxKouhai2; // _1F4
	efx::TKouhai3* mEfxKouhai3; // _1F8
	u8 _1FC;                    // _1FC
	f32 _200;                   // _200
	u8 _204[0x4];               // _204, unknown
	f32* _208;                  // _208
	f32* _20C;                  // _20C
	f32* _210;                  // _210, might be Vector3f*?
	f32 _214;                   // _214
	f32 _218;                   // _218
	int _21C;                   // _21C
	int _220;                   // _220
};

struct Mgr : public TNodeItemMgr {
	Mgr();

	virtual void onLoadResources();                                       // _48
	virtual u32 generatorGetID();                                         // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C
	virtual BaseItem* doNew();                                            // _A0 (weak)
	virtual ~Mgr();                                                       // _B8 (weak)
	virtual BaseItem* birth();                                            // _BC

	// _00     = VTBL
	// _00-_88 = TNodeItemMgr
	RockParms* mParms; // _88
};

extern Mgr* mgr;

} // namespace ItemRock
} // namespace Game

#endif
