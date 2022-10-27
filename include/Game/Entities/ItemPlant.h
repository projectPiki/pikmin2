#ifndef _GAME_ENTITIES_ITEMPLANT_H
#define _GAME_ENTITIES_ITEMPLANT_H

#include "types.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"

namespace Game {
namespace ItemPlant {
struct Item;
struct Plant;

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

	virtual void eventKarero(Item*); // _34 (weak)
	virtual void eventHaero(Item*);  // _38 (weak)

	// _00     = VTBL
	// _00-_0C = ItemState
};

struct NormalState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10
	virtual void onDamage(Item*, f32);   // _20
	virtual void eventKarero(Item*);     // _34

	// _00     = VTBL
	// _00-_0C = State
};

struct DamagedState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, f32);                         // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24
	virtual void eventKarero(Item*);                           // _34

	// _00     = VTBL
	// _00-_0C = State
};

struct GrowUpState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, f32);                         // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24
	virtual void eventKarero(Item*);                           // _34

	// _00     = VTBL
	// _00-_0C = State
};

struct KareruState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, f32);                         // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24
	virtual void eventHaero(Item*);                            // _34

	// _00     = VTBL
	// _00-_0C = State
};

struct PlantParms : public CreatureParms {
	struct Parms : public Parameters {
		inline Parms(); // probably

		Parm<f32> m_p000; // _E8, growth time, small to medium?
		Parm<f32> m_p001; // _110, growth time, medium to large?
		Parm<f32> m_p002; // _138, damage to drop fruit?
		Parm<f32> m_p003; // _160, time to bear fruit?
		Parm<f32> m_p004; // _188, actual playback time?
		Parm<f32> m_p005; // _1B0, time to rot?
	};

	PlantParms();

	virtual void read(Stream&); // _08 (weak)

	// _00-_D8 = CreatureParms
	// _D8		 = VTBL
	Parms m_plantParms;
};

struct ProcAnimator {
	Vector3f _00; // _00
	Matrixf* _04; // _04, might be array of pointers?
	Matrixf* _08; // _08, might be array of pointers?
	f32* _0C;     // _0C, array
	f32* _10;     // _10, array
	int _14;      // _14
	f32 _18;      // _18
	f32 _1C;      // _1C
};

struct Item : public FSMItem<Item, FSM, State> {
	inline Item(int objType); // probably

	virtual void constructor();                           // _2C
	virtual void onInit(CreatureInitArg*);                // _30
	virtual void doDirectDraw(Graphics&);                 // _50
	virtual void updateTrMatrix();                        // _78
	virtual void onStickStart(Creature*);                 // _158
	virtual void onStickEnd(Creature*);                   // _15C
	virtual void doAI();                                  // _1C8
	virtual void changeMaterial();                        // _1D0 (weak)
	virtual bool interactAttack(InteractAttack&);         // _1E0
	virtual bool interactFarmKarero(InteractFarmKarero&); // _1F8
	virtual bool interactFarmHaero(InteractFarmHaero&);   // _1FC
	virtual void onSetPosition();                         // _21C
	virtual bool hasFruits();                             // _224 (weak)
	virtual int getFruitsNum();                           // _228 (weak)
	virtual void getNearestFruit(Vector3f&);              // _22C (weak)
	virtual void bearFruits();                            // _230 (weak)
	virtual void killFruits();                            // _234 (weak)
	virtual void dropFruit(int);                          // _238 (weak)
	virtual void setColor(f32);                           // _23C (weak)
	virtual void startColorMotion(int);                   // _240
	virtual void updateColorMotion(f32);                  // _244
	virtual void startMotion(int);                        // _248 (weak)

	void addDamage(f32);

	// _00      = VTBL
	// _00-_1E0 = FSMItem
	u16 m_plantType;                         // _1E0
	f32 _1E4;                                // _1E4, timer?
	s16 m_colorMotionState;                  // _1E8
	u32 _1EC;                                // _1EC
	f32 m_damage;                            // _1F0
	int _1F4;                                // _1F4, state ID?
	f32 _1F8;                                // _1F8, state timer?
	f32 _1FC;                                // _1FC
	f32 _200;                                // _200
	SysShape::BlendAnimator m_blendAnimator; // _204
	u8 _254;                                 // _254
	f32 _258;                                // _258
	ProcAnimator m_procAnimator;             // _25C
};

struct Mgr : public TNodeItemMgr {
	Mgr();

	virtual void onLoadResources();                                       // _48
	virtual u32 generatorGetID();                                         // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                   // _60
	virtual void generatorRead(Stream&, GenItemParm*, u32);               // _64
	virtual u32 generatorLocalVersion();                                  // _68 (weak)
	virtual GenItemParm* generatorNewItemParm();                          // _70
	virtual BaseItem* doNew();                                            // _A0 (weak)
	virtual ~Mgr();                                                       // _B8 (weak)
	virtual BaseItem* birth();                                            // _BC

	// _00     = VTBL
	// _00-_88 = TNodeItemMgr
	J3DAnmColor* m_anmColor; // _88
	PlantParms* m_parms;     // _8C
};

struct FruitSlot : public CNode {
	FruitSlot();

	virtual ~FruitSlot(); // _08 (weak)

	void setFruit(Pellet*, Matrixf*, Matrixf&);
	void dropFruit();
	void killFruit();
	void update();

	// _00     = VTBL
	// _00-_18 = CNode
	Pellet* m_pellet; // _18
	Matrixf m_matrix; // _1C
};

struct Fruits {
	FruitSlot* m_slots; // _00, array of slots
	int m_slotCount;    // _04
	Matrixf* m_matrix;  // _08
	Plant* m_plant;     // _0C
};

struct Plant : public Item {
	inline Plant(); // probably

	virtual void onInit(CreatureInitArg*);   // _30
	virtual void onKill(CreatureKillArg*);   // _34
	virtual void doAnimation();              // _3C
	virtual void doDirectDraw(Graphics&);    // _50
	virtual void doAI();                     // _1C8
	virtual void do_updateLOD();             // _1D4
	virtual bool interactEat(InteractEat&);  // _1E8
	virtual void updateBoundSphere();        // _210
	virtual bool hasFruits();                // _224
	virtual int getFruitsNum();              // _228
	virtual void getNearestFruit(Vector3f&); // _22C
	virtual void bearFruits();               // _230
	virtual void killFruits();               // _234
	virtual void dropFruit(int);             // _238
	virtual void setColor(f32);              // _23C
	virtual void startMotion(int);           // _248

	// _00      = VTBL
	// _00-_288 = Item
	Fruits* m_fruits; // _288
};

extern Mgr* mgr;

} // namespace ItemPlant
} // namespace Game

struct GenPlantParm : public Game::GenItemParm {

	// _00     = VTBL
	u16 m_plantType; // _04
};

#endif