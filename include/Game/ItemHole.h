#ifndef _GAME_ITEMHOLE_H
#define _GAME_ITEMHOLE_H

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
	/**
	 * @reifiedAddress{801BEAA8}
	 * @reifiedFile{plugProjectKandoU/gameMapParts.cpp}
	 */
	virtual const char* getName() // _00
	{
		return "ItemHole::InitArg";
	}

	int m_initialState;
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
	virtual void onInit(CreatureInitArg*);            // _28
	virtual void doDirectDraw(Graphics&);             // _48
	virtual float getFaceDir();                       // _5C
	virtual bool sound_culling();                     // _FC
	virtual void movieUserCommand(u32, MoviePlayer*); // _128
	virtual char* getCreatureName();                  // _1A0

	// vtable 2
	virtual void initDependency();                      // _04
	virtual void makeTrMatrix();                        // _0C
	virtual void doAI();                                // _10
	virtual void changeMaterial();                      // _18
	virtual void do_setLODParm(AILODParm&);             // _20
	virtual bool interactGotKey(InteractGotKey&);       // _48
	virtual void onSetPosition();                       // _64
	virtual CItemFSM* createFSM();                      // _68
	virtual void onKeyEvent(const SysShape::KeyEvent&); // _6C

	bool canRide();

	efx::WarpZone* _1E0;              // _1E0
	Game::ItemBarrel::Item* m_barrel; // _1E4
	float m_faceDirection;            // _1E8
	float _1EC;                       // _1EC
	PlatInstance* _1F0;               // _1F0
	PlatInstance* _1F4;               // _1F4
};

/**
 * @size{0x94}
 */
struct Mgr : public TNodeItemMgr {
	Mgr();

	// vtable 1
	virtual void setup(BaseItem*);                                        // _38
	virtual void onLoadResources();                                       // _40
	virtual u32 generatorGetID();                                         // _50
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _54

	// vtable 2
	virtual BaseItem* doNew(); // _24
	virtual ~Mgr();            // _3C (thunked at _00)

	Platform* _88; // _88
	Platform* _8C; // _8C
	u8 _90[4];     // _90
};

/**
 * @size{0x1C}
 */
struct FSM : CItemFSM {
	virtual void init(CFSMItem*); // _00
};

struct State : CItemState {
	inline State(int id)
	    : CItemState(id)
	{
	}

	/**
	 * @reifiedAddress{801D2528}
	 * @reifiedFile{plugProjectKandoU/itemHole.cpp}
	 */
	virtual bool canRide() { return false; }; // _2C

	u8 _0C[4];
};

/**
 * @size{0x14}
 */
struct AppearState : State {
	inline AppearState()
	    : State(Hole_Appear)
	{
	}

	virtual void init(CFSMItem*, StateArg*); // _00
	virtual void exec(CFSMItem*);            // _04
	virtual void cleanup(CFSMItem*);         // _08
	float _10;
};

/**
 * @size{0x10}
 */
struct NormalState : State {
	inline NormalState()
	    : State(Hole_Normal)
	{
	}

	virtual void init(CFSMItem*, StateArg*); // _00
	virtual void exec(CFSMItem*);            // _04
	virtual void cleanup(CFSMItem*);         // _08
	/**
	 * @reifiedAddress{801D2B90}
	 * @reifiedFile{plugProjectKandoU/itemHole.cpp}
	 */
	virtual bool canRide() { return true; }; // _2C
};

/**
 * @size{0x10}
 */
struct CloseState : State {
	inline CloseState()
	    : State(Hole_Close)
	{
	}

	virtual void init(CFSMItem*, StateArg*); // _00
	virtual void exec(CFSMItem*);            // _04
	virtual void cleanup(CFSMItem*);         // _08
};

extern Mgr* mgr;
} // namespace ItemHole
} // namespace Game

#endif
