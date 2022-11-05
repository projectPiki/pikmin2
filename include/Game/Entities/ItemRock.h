#ifndef _GAME_ENTITIES_ITEMROCK_H
#define _GAME_ENTITIES_ITEMROCK_H

#include "types.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "Game/PlatInstance.h"
#include "Game/Farm.h"

namespace Game {
namespace ItemRock {
struct Item;

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
};

struct NormalState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, f32);                         // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = State
};

struct DownState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, f32);                         // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24

	// _00     = VTBL
	// _00-_0C = State
};

struct UpState : public State {
	// needs an inline ctor probably

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

		Parm<f32> m_p000; // _E8
		Parm<f32> m_p001; // _110
		Parm<f32> m_p002; // _138
		Parm<f32> m_p003; // _160
		Parm<f32> m_p004; // _188
		Parm<f32> m_p005; // _1B0
		Parm<f32> m_p006; // _1D8
		Parm<f32> m_p007; // _200
		Parm<f32> m_p008; // _228
		Parm<f32> m_p009; // _250
		Parm<f32> m_p010; // _278
	};

	RockParms();

	virtual void read(Stream&); // _08 (weak)

	// _00-_D8 = CreatureParms
	// _D8		 = VTBL
	Parms m_rockParms;
};

struct Item : public WorkItem<Item, FSM, State> {
	inline Item(int objType)
	    : WorkItem(objType)
	{ // probably needs things in here, just an initial guess
	}

	virtual void constructor();                               // _2C
	virtual void onInit(CreatureInitArg*);                    // _30
	virtual void onKill(CreatureKillArg*);                    // _34
	virtual void doSave(Stream&);                             // _E0
	virtual void doLoad(Stream&);                             // _E4
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
	void getWorkRadius();

	// _00      = VTBL
	// _00-_1EC = WorkItem
	Farm::Obstacle* m_obstacle; // _1EC
	u8 _1F0[0xC];               // _1F0, unknown
	u8 _1FC;                    // _1FC
	u8 _1FD[0x3];               // _1FD, unknown/padding
	u8 _200[0x14];              // _200, unknown
	f32 _214;                   // _214
	u8 _218[0x4];               // _218, unknown
	u32 _21C;                   // _21C
	u32 _220;                   // _220
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
	RockParms* m_parms; // _88
};

extern Mgr* mgr;

} // namespace ItemRock
} // namespace Game

#endif