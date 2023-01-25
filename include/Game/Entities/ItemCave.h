#ifndef _GAME_ENTITIES_ITEMCAVE_H
#define _GAME_ENTITIES_ITEMCAVE_H

#include "types.h"
#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "Game/PlatInstance.h"
#include "Game/GameLight.h"
#include "efx/WarpZone.h"

namespace Game {
namespace ItemBarrel {
struct Item;
}

namespace ItemCave {
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

	// _00     = VTBL
	// _00-_0C = ItemState
};

struct NormalState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10

	// _00     = VTBL
	// _00-_0C = State
};

struct OpenState : public State {
	// needs an inline ctor probably

	virtual void init(Item*, StateArg*); // _08
	virtual void exec(Item*);            // _0C
	virtual void cleanup(Item*);         // _10

	// _00     = VTBL
	// _00-_0C = State
};

struct FogParm : public Parameters {
	FogParm();

	void operator=(const FogParm&);

	// _00-_0C = Parameters
	Parm<f32> mStartZ;        // _0C, fg00
	Parm<f32> mEndZ;          // _34, fg01
	Parm<f32> mStartTime;     // _5C, fg02
	Parm<f32> mEndTime;       // _84, fg03
	Parm<u8> mRed;            // _AC, fg04
	Parm<u8> mGreen;          // _C8, fg05
	Parm<u8> mBlue;           // _E4, fg06
	Parm<f32> mDistance;      // _100, fg07
	Parm<f32> mEnterDistance; // _128, fg08
	Parm<f32> mExitDistance;  // _150, fg09
};

struct Item : public FSMItem<Item, FSM, State> {
	Item();

	virtual void onInit(CreatureInitArg*);  // _30
	virtual void doDirectDraw(Graphics&);   // _50
	virtual f32 getFaceDir();               // _64 (weak)
	virtual bool sound_culling();           // _104
	virtual char* getCreatureName();        // _1A8 (weak)
	virtual void initDependency();          // _1BC
	virtual void makeTrMatrix();            // _1C4
	virtual void doAI();                    // _1C8
	virtual void changeMaterial();          // _1D0
	virtual void do_setLODParm(AILODParm&); // _1D8
	virtual void onSetPosition();           // _21C

	void createLightEvent();
	void getCaveOtakaraNum();
	void getCaveOtakaraMax();
	void complete();

	// _00      = VTBL
	// _00-_1E0 = FSMItem
	char* mCaveFilename;                 // _1E0
	char* _1E4;                          // _1E4
	ID32 mCaveID;                        // _1E8
	ItemBarrel::Item* mBarrel;           // _1F4
	efx::WarpZone* mEfxWarpZone;         // _1F8
	f32 mFaceDir;                        // _1FC
	GameLightEventNode* mLightEventNode; // _200
	FogParm mFogParm;                    // _204
	PlatInstance* _380;                  // _380
	PlatInstance* _384;                  // _384
};

struct Mgr : public TNodeItemMgr {
	Mgr();

	virtual void setup(BaseItem*);                                        // _40
	virtual void onLoadResources();                                       // _48
	virtual u32 generatorGetID();                                         // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                   // _60
	virtual void generatorRead(Stream&, GenItemParm*, unsigned long);     // _64
	virtual u32 generatorLocalVersion();                                  // _68 (weak)
	virtual GenItemParm* generatorNewItemParm();                          // _70
	virtual BaseItem* doNew();                                            // _A0 (weak)
	virtual ~Mgr();                                                       // _B8 (weak)

	// _00     = VTBL
	// _00-_88 = TNodeItemMgr
	Platform* _88; // _88
	Platform* _8C; // _8C
};

extern Mgr* mgr;

} // namespace ItemCave
} // namespace Game

struct GenCaveParm : public Game::GenItemParm {
	GenCaveParm();

	// _00     = VTBL
	char mCaveFilename[0x20];         // _04
	char _24[0x20];                   // _24
	ID32 mId;                         // _44
	Game::ItemCave::FogParm mFogParm; // _50
};

#endif