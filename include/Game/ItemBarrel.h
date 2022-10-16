#ifndef _GAME_ITEMBARREL_H
#define _GAME_ITEMBARREL_H

#include "BaseParm.h"
#include "Game/BaseItem.h"
#include "Game/EnemyParmsBase.h"
#include "Game/TSoundEvent.h"
#include "Game/gameGenerator.h"
#include "Game/itemMgr.h"
#include "Parameters.h"

namespace Game {

namespace ItemBarrel {
struct Item;

/**
 * @fabricated
 */
enum StateID { Barrel_Normal = 0, Barrel_Damaged, Barrel_Dead, BARREL_STATE_COUNT };

/**
 * @size{0x1C}
 */
struct FSM : ItemFSM<Item> {
	virtual void init(Item*); // _00
};

struct State : ItemState<Item> {
	inline State(int id)
	    : ItemState(id)
	{
	}

	/**
	 * @reifiedAddress{801F85E4}
	 * @reifiedFile{plugProjectKandoU/itemBarrel.cpp}
	 */
	virtual void onDamage(Item*, float) {}; // _18

	u8 _0C[4];
};

/**
 * @size{0x10}
 */
struct NormalState : State {
	inline NormalState()
	    : State(Barrel_Normal)
	{
	}

	virtual void init(Item*, StateArg*);                       // _00
	virtual void exec(Item*);                                  // _04
	virtual void cleanup(Item*);                               // _08
	virtual void onDamage(Item*, float);                       // _18
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _1C
};

/**
 * @size{0x14}
 */
struct DamagedState : State {
	inline DamagedState()
	    : State(Barrel_Damaged)
	{
	}

	virtual void init(Item*, StateArg*);                       // _00
	virtual void exec(Item*);                                  // _04
	virtual void cleanup(Item*);                               // _08
	virtual void onDamage(Item*, float);                       // _18
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _1C

	u8 _10;
};

/**
 * @size{0x14}
 */
struct DeadState : State {
	inline DeadState()
	    : State(Barrel_Dead)
	{
	}

	virtual void init(Item*, StateArg*);                       // _00
	virtual void exec(Item*);                                  // _04
	virtual void cleanup(Item*);                               // _08
	virtual void onDamage(Item*, float);                       // _18
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _1C

	u8 _10[4];
};

struct BarrelParms : public CreatureParms {
	struct Parms : public Parameters {
		inline Parms()
		    : Parameters(nullptr, "Barrel::Parms")
		    , p000(this, 'p000', "ライ�?", 100.0f, 1.0f, 6000.0f)
		{
		}

		Parm<float> p000;
	};

	/**
	 * @reifiedAddress{801F872C}
	 * @reifiedFile{plugProjectKandoU/itemBarrel.cpp}
	 */
	BarrelParms()
	    : CreatureParms()
	    , m_barrelParms()
	{
	}

	/**
	 * @reifiedAddress{801F8708}
	 * @reifiedFile{plugProjectKandoU/itemBarrel.cpp}
	 */
	virtual void read(Stream& input) // _00
	{
		m_barrelParms.read(input);
	}

	Parms m_barrelParms; // _DC
};

/**
 * @size{0x1F8}
 */
struct Item : public WorkItem<Item, FSM, State> {
	inline Item()
	    : WorkItem(0x410)
	{
		m_mass = 0.0f;
	}

	// vtable 1
	virtual void constructor();            // _24
	virtual void onInit(CreatureInitArg*); // _28
	virtual void doSave(Stream&);          // _D8
	virtual void doLoad(Stream&);          // _DC
	/**
	 * @reifiedAddress{801F8D68}
	 * @reifiedFile{plugProjectKandoU/itemBarrel.cpp}
	 */
	virtual char* getCreatureName() { return "Barrel"; } // _1A0

	// vtable 2
	virtual void doAI();                                  // _10
	virtual bool interactAttack(InteractAttack&);         // _28
	virtual bool getVectorField(Sys::Sphere&, Vector3f&); // _4C
	virtual float getWorkDistance(Sys::Sphere&);          // _50
	virtual void updateBoundSphere();                     // _58
	virtual void onSetPosition();                         // _64

	float getWorkRadius();
	void createBarrel();

	float _1EC; // _1EC
	float _1F0; // _1F0
	float _1F4; // _1F4
	u8 _1F8[4]; // _1F8
};

/**
 * @size{0x94}
 */
struct Mgr : public TNodeItemMgr {
	Mgr();

	// vtable 1
	virtual void onLoadResources(); // _40
	/**
	 * @reifiedAddress{801F8D5C}
	 * @reifiedFile{plugProjectKandoU/itemBarrel.cpp}
	 */
	virtual u32 generatorGetID() { return 'barl'; }                       // _50
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _54

	// vtable 2
	/**
	 * @reifiedAddress{801F8C6C}
	 * @reifiedFile{plugProjectKandoU/itemBarrel.cpp}
	 */
	virtual BaseItem* doNew() { return new Item(); } // _24
	/**
	 * @reifiedAddress{801F8B38}
	 * @reifiedFile{plugProjectKandoU/itemBarrel.cpp}
	 */
	virtual ~Mgr() {};     // _3C (thunked at _00)
	virtual Item* birth(); // _40 (Yes, TNodeItemMgr::birth() isn't virtual, but this is. Deal with it.)

	BarrelParms* m_parms; // _88
	u8 _90[4];            // _8C
};

extern Mgr* mgr;
} // namespace ItemBarrel
} // namespace Game

#endif
