#ifndef _GAME_ENTITIES_ITEMHOLE_H
#define _GAME_ENTITIES_ITEMHOLE_H

#include "Game/BaseItem.h"
#include "Game/gameGenerator.h"
#include "Game/itemMgr.h"

namespace efx {
struct WarpZone;
} // namespace efx

namespace Game {
struct PlatInstance;

namespace ItemBarrel {
struct Item;
} // namespace ItemBarrel

namespace ItemHole {
struct State;
struct FSM;

/**
 * @fabricated
 */
enum StateID { Hole_Normal = 0, Hole_Appear, Hole_Close, HOLE_STATE_COUNT };

struct InitArg : public CreatureInitArg {
	virtual const char* getName() // _00
	{
		return "ItemHole::InitArg";
	}

	// _00 = VTBL
	int m_initialState; // _04
};

/**
 * @size{0x1F8}
 */
struct Item : public CFSMItem {
	inline Item(int objTypeID)
	    : CFSMItem(objTypeID)
	{
	}

	// vtable 1
	virtual void onInit(CreatureInitArg* settings);                     // _30
	virtual void doDirectDraw(Graphics& gfx);                           // _50
	virtual f32 getFaceDir();                                           // _64 (weak)
	virtual bool sound_culling();                                       // _104
	virtual void movieUserCommand(u32 command, MoviePlayer* curPlayer); // _130
	virtual char* getCreatureName();                                    // _1A8 (weak)

	// vtable 2
	virtual void initDependency();                // _1BC
	virtual void makeTrMatrix();                  // _1C4
	virtual void doAI();                          // _1C8
	virtual void changeMaterial();                // _1D0
	virtual void do_setLODParm(AILODParm&);       // _1D8
	virtual bool interactGotKey(InteractGotKey&); // _200
	virtual void onSetPosition();                 // _21C
	virtual CItemFSM* createFSM();                // _220

	bool canRide();

	// _00      = VTBL
	// _00-_1E0 = CFSMItem
	efx::WarpZone* _1E0;        // _1E0
	ItemBarrel::Item* m_barrel; // _1E4
	f32 m_faceDirection;        // _1E8
	f32 _1EC;                   // _1EC
	PlatInstance* _1F0;         // _1F0
	PlatInstance* _1F4;         // _1F4
};

/**
 * @size{0x94}
 */
struct Mgr : public TNodeItemMgr {
	Mgr();

	// vtable 1
	virtual void setup(BaseItem*);                                        // _40
	virtual void onLoadResources();                                       // _48
	virtual u32 generatorGetID();                                         // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C

	// vtable 2
	virtual BaseItem* doNew(); // _A0 (weak)
	virtual ~Mgr();            // _B8 (weak)

	Platform* _88; // _88
	Platform* _8C; // _8C
};

/**
 * @size{0x1C}
 */
struct FSM : CItemFSM {
	virtual void init(CFSMItem*); // _08

	// _00     = VTBL
	// _00-_1C = CItemFSM
};

struct State : CItemState {
	inline State(int id)
	    : CItemState(id)
	{
	}

	virtual bool canRide() { return false; }; // _34

	// _00     = VTBL
	// _00-_0C = CItemState
	u8 _0C[4]; // _0C
};

/**
 * @size{0x14}
 */
struct AppearState : State {
	inline AppearState()
	    : State(Hole_Appear)
	{
	}

	virtual void init(CFSMItem*, StateArg*); // _08
	virtual void exec(CFSMItem*);            // _0C
	virtual void cleanup(CFSMItem*);         // _10

	// _00     = VTBL
	// _00-_10 = State
	f32 _10; // _10
};

/**
 * @size{0x10}
 */
struct NormalState : State {
	inline NormalState()
	    : State(Hole_Normal)
	{
	}

	virtual void init(CFSMItem*, StateArg*); // _08
	virtual void exec(CFSMItem*);            // _0C
	virtual void cleanup(CFSMItem*);         // _10
	virtual bool canRide() { return true; }; // _34

	// _00     = VTBL
	// _00-_10 = State
};

/**
 * @size{0x10}
 */
struct CloseState : State {
	inline CloseState()
	    : State(Hole_Close)
	{
	}

	virtual void init(CFSMItem*, StateArg*); // _08
	virtual void exec(CFSMItem*);            // _0C
	virtual void cleanup(CFSMItem*);         // _10

	// _00     = VTBL
	// _00-_10 = State
};

extern Mgr* mgr;
} // namespace ItemHole
} // namespace Game

#endif
