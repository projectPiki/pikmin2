#ifndef _GAME_ENTITIES_ITEMDOWNFLOOR_H
#define _GAME_ENTITIES_ITEMDOWNFLOOR_H

#include "types.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "Game/PlatInstance.h"

namespace Game {
namespace ItemBarrel {
struct Item;
}

namespace ItemDownFloor {
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

	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24 (weak)
	virtual void onPlat(Item*);                                // _34 (weak)

	// _00     = VTBL
	// _00-_0C = ItemState
};

struct DamagedState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24
	virtual void onPlat(Item*);                                // _34

	// _00     = VTBL
	// _00-_0C = State
};

struct DeadState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10
	virtual void onPlat(Item*);          // _34

	// _00     = VTBL
	// _00-_0C = State
};

struct DownState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24
	virtual void onPlat(Item*);                                // _34

	// _00     = VTBL
	// _00-_0C = State
};

struct UpState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24
	virtual void onPlat(Item*);                                // _34

	// _00     = VTBL
	// _00-_0C = State
};

struct WaitState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24
	virtual void onPlat(Item*);                                // _34

	// _00     = VTBL
	// _00-_0C = State
};

struct Item : public FSMItem<Item, FSM, State> {
	virtual void constructor();                               // _2C
	virtual void onInit(CreatureInitArg*);                    // _30
	virtual f32 getFaceDir();                                 // _64 (weak)
	virtual void doSave(Stream&);                             // _E0
	virtual void doLoad(Stream&);                             // _E4
	virtual void platCallback(PlatEvent& event);              // _F0
	virtual char* getCreatureName();                          // _1A8 (weak)
	virtual void initDependency();                            // _1BC
	virtual void makeTrMatrix();                              // _1C4 (weak)
	virtual void doAI();                                      // _1C8
	virtual void changeMaterial();                            // _1D0
	virtual void updateBoundSphere();                         // _210
	virtual void onSetPosition();                             // _21C
	virtual void onKeyEvent(const SysShape::KeyEvent& event); // _220 (weak)
	virtual void getCarryInfoParam(CarryInfoParam&);          // _230 (weak)

	void startDamageMotion();
	void startDownMotion();
	void startUpMotion();

	// _00      = VTBL
	// _00-_1E0 = FSMItem
	CarryInfoOwner* m_carryInfoOwner; // _1E0
	PlatInstance* m_platInstance;     // _1E4
	int _1E8;                         // _1E8
	int _1EC;                         // _1EC
	int _1F0;                         // _1F0
	BaseItem* _1F4;                   // _1F4
	CarryInfoMgr* m_carryInfoMgr;     // _1F8
	bool m_isPressed;                 // _1FC
	f32 m_faceDir;                    // _200
	u16 _204;                         // _204, maybe down floor type?
	TSoundEvent m_soundEvent;         // _208
	WayPoint* m_wayPoint;             // _214
	Item* m_otherSeesaw;              // _218
	ID32 _21C;                        // _21C
	bool m_isSeesawBlock;             // _228
	bool m_isPaperBag;                // _229
};

struct Mgr : public TNodeItemMgr {
	Mgr();

	virtual void onLoadResources();                                       // _48
	virtual u32 generatorGetID();                                         // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                   // _60
	virtual void generatorRead(Stream&, GenItemParm*, unsigned long);     // _64
	virtual u32 generatorLocalVersion();                                  // _68 (weak)
	virtual GenItemParm* generatorNewItemParm();                          // _70
	virtual BaseItem* doNew();                                            // _A0 (weak)
	virtual ~Mgr();                                                       // _B8 (weak)
	virtual char* getCaveName(int);                                       // _BC
	virtual void getCaveID(char*);                                        // _C0

	void setupDownFloor(Item*);
	void setupPlatform(Item*);
	BaseItem* birth();

	// _00     = VTBL
	// _00-_88 = TNodeItemMgr
	Platform** m_platforms; // _88, might be array of platforms instead?
};

extern Mgr* mgr;

} // namespace ItemDownFloor
} // namespace Game

struct GenDownFloorParm : public Game::GenItemParm {

	// _00     = VTBL
	s16 _04;             // _04
	s16 m_downFloorType; // _06
	u16 _08;             // _08
	ID32 m_id;           // _0C
};

#endif