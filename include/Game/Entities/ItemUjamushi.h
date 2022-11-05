#ifndef _GAME_ENTITIES_ITEMUJAMUSHI_H
#define _GAME_ENTITIES_ITEMUJAMUSHI_H

#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "Game/Interaction.h"
#include "Game/TSoundEvent.h"
#include "Game/EnemyParmsBase.h"
#include "Game/flockMgr.h"
#include "SysShape/MtxObject.h"
#include "Sys/Sphere.h"
#include "Matrixf.h"
#include "Vector3.h"
#include "types.h"

namespace Game {
namespace ItemUjamushi {
struct Item;
struct UjaMgr;

struct InitArg : public CreatureInitArg {
	virtual const char* getName(); // _08 (weak)

	// _00     = VTBL
	int _04; // _04
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

	// _00     = VTBL
	// _00-_0C = ItemState
};

struct ActiveState : public State {
	// probably needs an inline ctor

	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10

	// _00     = VTBL
	// _00-_0C = State
};

struct DigState : public State {
	// probably needs an inline ctor

	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10

	// _00     = VTBL
	// _00-_0C = State
};

struct WaitState : public State {
	// probably needs an inline ctor

	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10

	// _00     = VTBL
	// _00-_0C = State
};

struct BoidParms : public Parameters {
	BoidParms();

	void blendTo(BoidParms&, BoidParms&, f32);

	// _00-_0C = Parameters
	Parm<f32> m_cohesion;          // _0C, p000
	Parm<f32> m_alignment;         // _34, p001
	Parm<f32> m_separation;        // _5C, p002
	Parm<f32> m_bounds;            // _84, p003
	Parm<f32> m_target;            // _AC, p004
	Parm<f32> m_random;            // _D4, p005
	Parm<f32> m_goHome;            // _FC, p006
	Parm<f32> m_piki;              // _124, p008
	Parm<f32> m_navi;              // _14C, p009
	Parm<f32> m_collision;         // _174, p010
	Parm<f32> m_maxSpeed;          // _19C, p011
	Parm<f32> m_fov;               // _1C4, p012
	Parm<f32> m_distance;          // _1EC, p013
	Parm<f32> m_rotationPerSecond; // _214, p014
	Parm<f32> m_randomAngle;       // _23C, p007
};

struct BoidParameter : public CNode {
	struct TNode : public CNode {
		TNode();

		virtual ~TNode(); // _08 (weak)

		// _00     = VTBL
		// _00-_18 = CNode
		BoidParms m_parms; // _18
	};

	BoidParameter();

	virtual ~BoidParameter(); // _08 (weak)

	void getParms(int, int, f32, BoidParms&);
	void newParms();
	void read(Stream&);

	// _00     = VTBL
	// _00-_18 = CNode
	TNode m_node; // _18
};

struct Item : public FSMItem<Item, FSM, State> {
	struct DummyShape : public SysShape::MtxObject {
		virtual Matrixf* getMatrix(int); // _08 (weak)

		// _00 VTBL
		Matrixf* m_matrix; // _04
	};

	inline Item(int objTypeID) // probably
	    : FSMItem(objTypeID)
	{
	}

	virtual void onInit(CreatureInitArg*);                  // _30
	virtual BaseFlockMgr* getFlockMgr();                    // _90 (weak)
	virtual bool isCollisionFlick();                        // _B0 (weak)
	virtual bool ignoreAtari(Creature* toIgnore);           // _190
	virtual void makeTrMatrix();                            // _1C4 (weak)
	virtual void doAI();                                    // _1C8
	virtual bool interactFlockAttack(InteractFlockAttack&); // _1EC
	virtual void updateBoundSphere();                       // _210
	virtual void onSetPosition();                           // _21C
	virtual void doSimpleDraw(Viewport*);                   // _224

	void setBoidTimer();

	// _00      = VTABLE
	// _00-_1E0 = FSMItem
	u32 _1E0;                // _1E0, unknown
	u32 _1E4;                // _1E4, unknown
	f32 _1E8;                // _1E8
	int _1EC;                // _1EC
	f32 _1F0;                // _1F0
	f32 _1F4;                // _1F4
	DummyShape m_dummyShape; // _1F8
	UjaMgr* m_flockMgr;      // _200
};

struct Mgr : public NodeItemMgr<Item> {
	struct MgrParms : public Parameters {
		inline MgrParms(); // probably

		Parm<f32> m_u001; // _5B4
		Parm<f32> m_u002; // _5DC
		Parm<f32> m_u003; // _604
		Parm<f32> m_u004; // _62C
	};

	Mgr();

	virtual void doSimpleDraw(Viewport*);                                 // _20
	virtual void onLoadResources();                                       // _48
	virtual u32 generatorGetID();                                         // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                   // _60
	virtual void generatorRead(Stream&, GenItemParm*, u32);               // _64
	virtual u32 generatorLocalVersion();                                  // _68 (weak)
	virtual GenItemParm* generatorNewItemParm();                          // _70
	virtual ~Mgr();                                                       // _B4 (weak)
	virtual char* getCaveName(int);                                       // _B8
	virtual void getCaveID(char*);                                        // _BC

	// _00      = VTBL
	// _00-_88  = NodeItemMgr
	f32 _88;                       // _88
	u8 _8C[0x10];                  // _8C, unknown
	BoidParms m_parms;             // _9C
	u32 _304;                      // _304
	u32 _308;                      // _308
	f32 _30C;                      // _30C
	BoidParameter m_boidParameter; // _310
	MgrParms m_mgrParms;           // _5A8
};

struct Uja : public TFlock {
	Uja();

	virtual void makeMatrix(); // _08
	virtual bool isVisible();  // _0C (weak)
	virtual bool damaged(f32); // _1C

	void clearBuffer();
	void updateBuffer();
	void updateScale(f32);
	void update(BoidParms&);

	// _00-_10 = TFlock
	// _0C     = VTBL
	Matrixf _10;                   // _10
	u8 _40;                        // _40
	Vector3f _44;                  // _44
	Vector3f _50;                  // _50
	f32 _5C;                       // _5C
	f32 _60;                       // _60
	f32 _64;                       // _64
	f32 _68;                       // _68
	f32 _6C;                       // _6C
	f32 _70;                       // _70
	UjaMgr* m_flockMgr;            // _74
	UpdateContext m_updateContext; // _78
	Vector3f _84;                  // _84
	Vector3f _90;                  // _90
	Vector3f _9C;                  // _9C
	f32 _A8;                       // _A8
	u8 _AC;                        // _AC
	u8 _AD;                        // _AD
	u8 _AE;                        // _AE
	u8 _AF;                        // _AF, unknown/padding
	u8 _B0[0x4];                   // _B0, unknown
	f32 _B4;                       // _B4
	f32 _B8;                       // _B8
	int m_bufferSlotCount;         // _BC
	Piki** m_pikiBuffer;           // _C0
	f32* m_floatBuffer;            // _C4
};

struct UjaMgrInitArg {
	Sys::Sphere m_sphere;           // _00
	BoidParameter* m_boidParameter; // _10
	u32 _14;                        // _14
};

struct UjaMgr : public TFlockMgr<Uja> {
	UjaMgr(int);

	virtual void do_update();             // _1C
	virtual void do_update_boundSphere(); // _20
	virtual ~UjaMgr();                    // _6C (weak)

	void init(UjaMgrInitArg&);
	void test_createUjas();
	void astonishPikmins();

	// _00     = VTBL
	// _00-_6C = TFlockMgr
	Sys::Sphere m_boundSphere;      // _6C
	Vector3f _7C;                   // _7C
	Vector3f _88;                   // _88
	UpdateMgr* m_updateMgr;         // _94
	int _98;                        // _98
	int _9C;                        // _9C
	f32 _A0;                        // _A0
	BoidParameter* m_boidParameter; // _A4
	BoidParms m_boidParms;          // _A8
};

extern Mgr* mgr;

} // namespace ItemUjamushi
} // namespace Game

struct GenUjamushiParm : public Game::GenItemParm {

	// _00     = VTBL
	int _04; // _04
};

#endif
