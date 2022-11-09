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
	Parm<f32> m_startZ;        // _0C, fg00
	Parm<f32> m_endZ;          // _34, fg01
	Parm<f32> m_startTime;     // _5C, fg02
	Parm<f32> m_endTime;       // _84, fg03
	Parm<u8> m_red;            // _AC, fg04
	Parm<u8> m_green;          // _C8, fg05
	Parm<u8> m_blue;           // _E4, fg06
	Parm<f32> m_distance;      // _100, fg07
	Parm<f32> m_enterDistance; // _128, fg08
	Parm<f32> m_exitDistance;  // _150, fg09
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
	char* m_caveFilename;                 // _1E0
	char* _1E4;                           // _1E4
	ID32 m_caveID;                        // _1E8
	ItemBarrel::Item* m_barrel;           // _1F4
	efx::WarpZone* m_efxWarpZone;         // _1F8
	f32 m_faceDir;                        // _1FC
	GameLightEventNode* m_lightEventNode; // _200
	FogParm m_fogParm;                    // _204
	PlatInstance* _380;                   // _380
	PlatInstance* _384;                   // _384
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
	char m_caveFilename[0x20];         // _04
	char _24[0x20];                    // _24
	ID32 m_id;                         // _44
	Game::ItemCave::FogParm m_fogParm; // _50
};

#endif