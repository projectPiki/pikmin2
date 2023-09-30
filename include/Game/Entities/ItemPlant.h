#ifndef _GAME_ENTITIES_ITEMPLANT_H
#define _GAME_ENTITIES_ITEMPLANT_H

#include "types.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"

namespace Game {
namespace ItemPlant {
struct Item;
struct Plant;

enum StateID {
	ITEMPLANT_Normal  = 0,
	ITEMPLANT_Damaged = 1,
	ITEMPLANT_GrowUp  = 2,
	ITEMPLANT_Kareru  = 3,
	ITEMPLANT_StateCount, // 4
};

enum ColorStateID {
	PLANTCOLOR_Unk0 = 0,
	PLANTCOLOR_Unk1 = 1,
	PLANTCOLOR_Unk2 = 2,
};

enum GrowStateID {
	PLANTGROW_Small  = 0,
	PLANTGROW_Medium = 1,
	PLANTGROW_Full   = 2,
	PLANTGROW_Unk3   = 3,
};

enum PlantType {
	PLANTTYPE_Spicy  = 0,
	PLANTTYPE_Bitter = 1,
	PLANTTYPE_Random = 2,
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

	virtual void eventKarero(Item*) { } // _34 (weak)
	virtual void eventHaero(Item*) { }  // _38 (weak)

	// _00     = VTBL
	// _00-_0C = ItemState
	char* mName; // _0C, unused but educated guess
};

struct NormalState : public State {
	inline NormalState()
	    : State(ITEMPLANT_Normal)
	{
	}

	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10
	virtual void onDamage(Item*, f32);   // _20
	virtual void eventKarero(Item*);     // _34

	// _00     = VTBL
	// _00-_10 = State
};

struct DamagedState : public State {
	inline DamagedState()
	    : State(ITEMPLANT_Damaged)
	{
	}

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, f32);                         // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24
	virtual void eventKarero(Item*);                           // _34

	// _00     = VTBL
	// _00-_10 = State
	bool _10; // _10
};

struct GrowUpState : public State {
	inline GrowUpState()
	    : State(ITEMPLANT_GrowUp)
	{
	}

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, f32);                         // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24
	virtual void eventKarero(Item*);                           // _34

	// _00     = VTBL
	// _00-_10 = State
	bool _10; // _10
};

struct KareruState : public State {
	inline KareruState()
	    : State(ITEMPLANT_Kareru)
	{
	}

	virtual void init(Item*, StateArg*);                       // _08
	virtual void exec(Item*);                                  // _0C
	virtual void cleanup(Item*);                               // _10
	virtual void onDamage(Item*, f32);                         // _20
	virtual void onKeyEvent(Item*, const SysShape::KeyEvent&); // _24
	virtual void eventHaero(Item*);                            // _34

	// _00     = VTBL
	// _00-_10 = State
	u16 _10; // _10
	u8 _12;  // _12
};

struct PlantParms : public CreatureParms {
	struct Parms : public Parameters {
		Parms()
		    : Parameters(nullptr, "Plant::Parms")
		    , mGrowTimeToMedium(this, 'p000', "成長時間(小→中)", 10.0f, 0.0f, 2000.0f)  // 'growth time (small -> medium)'
		    , mGrowTimeToLarge(this, 'p001', "成長時間(中→大)", 10.0f, 0.0f, 2000.0f)   // 'growth time (medium -> large)'
		    , mDamageToDrop(this, 'p002', "ドロップするダメージ", 300.0f, 0.0f, 2500.0f) // 'damage to drop'
		    , mBearFruitTime(this, 'p003', "実をつけるまでの時間", 10.0f, 0.0f, 2000.0f) // 'time to bear fruit'
		    , mP004(this, 'p004', "実再生時間", 20.0f, 0.0f, 2000.0f)                    // 'actual play time'
		    , mBurstTime(this, 'p005', "腐るまでの時間", 40.0f, 0.0f, 10000.0f)          // 'time to rot/spoil'
		{
		}

		Parm<f32> mGrowTimeToMedium; // _E8, p000, growth time, small -> medium
		Parm<f32> mGrowTimeToLarge;  // _110, p001, growth time, medium -> full
		Parm<f32> mDamageToDrop;     // _138, p002, damage req'd to drop one fruit
		Parm<f32> mBearFruitTime;    // _160, p003, time to bear fruit
		Parm<f32> mP004;             // _188, p004
		Parm<f32> mBurstTime;        // _1B0, p005, time til berry bursts
	};

	PlantParms()
	    : CreatureParms()
	    , mPlantParms()
	{
	}

	virtual void read(Stream& input) { mPlantParms.read(input); } // _08 (weak)

	// _00-_D8 = CreatureParms
	// _D8		 = VTBL
	Parms mPlantParms; // _DC
};

struct ProcAnimator {
	ProcAnimator();

	void calcAngles();
	void update(f32, f32);

	// unused/inlined
	void create(int);
	void setMatrix(int, Matrixf*);
	void setAngle(int, f32);
	f32 getAngle(int);
	void calcDists();
	void force(f32);
	void draw(Graphics&);

	Vector3f _00;  // _00
	Matrixf** _0C; // _0C, array of 4 Matrixf ptrs
	Matrixf* _10;  // _10, array of 4 Matrixfs
	f32* _14;      // _14
	f32* _18;      // _18
	f32* _1C;      // _1C
	int _20;       // _20, set to 4
	f32 _24;       // _24
	f32 _28;       // _28
};

struct Item : public FSMItem<Item, FSM, State> {
	Item(int objType);

	virtual void constructor();                                        // _2C
	virtual void onInit(CreatureInitArg* settings);                    // _30
	virtual void doDirectDraw(Graphics& gfx);                          // _50
	virtual void updateTrMatrix();                                     // _78
	virtual void onStickStart(Creature* stuck);                        // _158
	virtual void onStickEnd(Creature* stuck);                          // _15C
	virtual void doAI();                                               // _1C8
	virtual void changeMaterial() { setColor(mColorBlendRatio); }      // _1D0 (weak)
	virtual bool interactAttack(InteractAttack& attack);               // _1E0
	virtual bool interactFarmKarero(InteractFarmKarero& karero);       // _1F8
	virtual bool interactFarmHaero(InteractFarmHaero& haero);          // _1FC
	virtual void onSetPosition();                                      // _21C
	virtual bool hasFruits() { return false; }                         // _224 (weak)
	virtual int getFruitsNum() { return 0; }                           // _228 (weak)
	virtual Pellet* getNearestFruit(Vector3f& pos) { return nullptr; } // _22C (weak)
	virtual void bearFruits() { }                                      // _230 (weak)
	virtual void killFruits() { }                                      // _234 (weak)
	virtual void dropFruit(int num) { }                                // _238 (weak)
	virtual void setColor(f32) { }                                     // _23C (weak)
	virtual void startColorMotion(int state);                          // _240
	virtual void updateColorMotion(f32 rate);                          // _244
	virtual void startMotion(int animIdx) { }                          // _248 (weak)

	void addDamage(f32 damage);

	// _00      = VTBL
	// _00-_1E0 = FSMItem
	u16 mPlantType;          // _1E0, see PlantType enum - 0 = spicy, 1 = bitter, 2 = random
	f32 mColorBlendRatio;    // _1E4
	u16 mColorMotionState;   // _1E8
	int mStuckCount;         // _1EC
	f32 mDamage;             // _1F0
	int mGrowState;          // _1F4
	f32 mGrowTimer;          // _1F8
	f32 mRandGrowTimeOffset; // _1FC, between 0s and 3s, added to grow time thresholds
	f32 mFaceDir;            // _200
};

struct FruitSlot : public CNode {
	FruitSlot();

	virtual ~FruitSlot() { } // _08 (weak)

	void setFruit(Pellet*, Matrixf*, Matrixf&);
	void dropFruit();
	void killFruit();
	void update();

	// _00     = VTBL
	// _00-_18 = CNode
	Pellet* mFruit;       // _18
	Matrixf mFruitMatrix; // _1C
};

struct Fruits {
	Fruits(Plant* plant)
	    : mPlant(plant)
	{
	}

	void init(int, Matrixf*);
	void update();
	void bearAll(u16);
	bool hasFruits();
	int countFruits();
	void killAll();
	FruitSlot* getFruit(Vector3f&);

	FruitSlot* mSlots; // _00, array of mSlotCount slots
	int mSlotCount;    // _04
	Matrixf* mMatrix;  // _08
	Plant* mPlant;     // _0C
};

struct Plant : public Item {
	Plant();

	virtual void onInit(CreatureInitArg*);      // _30
	virtual void onKill(CreatureKillArg*);      // _34
	virtual void doAnimation();                 // _3C
	virtual void doDirectDraw(Graphics&);       // _50
	virtual void doAI();                        // _1C8
	virtual void do_updateLOD();                // _1D4
	virtual bool interactEat(InteractEat&);     // _1E8
	virtual void updateBoundSphere();           // _210
	virtual bool hasFruits();                   // _224
	virtual int getFruitsNum();                 // _228
	virtual Pellet* getNearestFruit(Vector3f&); // _22C
	virtual void bearFruits();                  // _230
	virtual void killFruits();                  // _234
	virtual void dropFruit(int num);            // _238
	virtual void setColor(f32);                 // _23C
	virtual void startMotion(int);              // _248

	// _00      = VTBL
	// _00-_204 = Item
	SysShape::BlendAnimator mBlendAnimator; // _204
	u8 _254;                                // _254, unused, just set to 0 on init
	f32 mBlendStepTime;                     // _258, probably - related to blend animation somehow
	ProcAnimator mProcAnimator;             // _25C
	Fruits* mFruits;                        // _288
};

struct Mgr : public TNodeItemMgr {
	Mgr();

	virtual void onLoadResources();                                       // _48
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                   // _60
	virtual void generatorRead(Stream&, GenItemParm*, u32);               // _64
	virtual GenItemParm* generatorNewItemParm();                          // _70
	virtual BaseItem* birth();                                            // _BC
	virtual BaseItem* doNew() { return new Plant; }                       // _A0 (weak)
	virtual u32 generatorGetID() { return 'plnt'; }                       // _58 (weak)
	virtual u32 generatorLocalVersion() { return '0001'; }                // _68 (weak)

	// _00     = VTBL
	// _00-_88 = TNodeItemMgr
	J3DAnmColor* mAnmColor; // _88
	PlantParms* mParms;     // _8C
};

extern Mgr* mgr;

} // namespace ItemPlant
} // namespace Game

struct GenPlantParm : public Game::GenItemParm {
	GenPlantParm()
	    : mPlantType(Game::ItemPlant::PLANTTYPE_Random)
	{
	}

	// _00     = VTBL
	u16 mPlantType; // _04
};

#endif
