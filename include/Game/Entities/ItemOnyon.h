#ifndef _GAME_ENTITIES_ITEMONYON_H
#define _GAME_ENTITIES_ITEMONYON_H

#include "Game/BaseItem.h"
#include "Game/itemMgr.h"
#include "Game/Onyon.h"
#include "CollInfo.h"
#include "Sys/MatBaseAnimation.h"

namespace Game {
namespace ItemOnyon {

struct Mgr : public BaseItemMgr, public Container<Onyon> {
	Mgr();

	virtual void doAnimation();                                           // _08 (weak)
	virtual void doEntry();                                               // _0C (weak)
	virtual void doSetView(int viewportNumber);                           // _10 (weak)
	virtual void doViewCalc();                                            // _14 (weak)
	virtual void doSimulation(f32);                                       // _18 (weak)
	virtual void doDirectDraw(Graphics& gfx);                             // _1C (weak)
	virtual void initDependency();                                        // _38
	virtual void setupSoundViewerAndBas();                                // _44
	virtual u32 generatorGetID();                                         // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                   // _60
	virtual void generatorRead(Stream&, GenItemParm*, u32);               // _64
	virtual u32 generatorLocalVersion();                                  // _68 (weak)
	virtual J3DModelData* generatorGetShape(GenItemParm*);                // _6C
	virtual GenItemParm* generatorNewItemParm();                          // _70
	virtual ~Mgr();                                                       // _A0 (weak)
	virtual Onyon* get(void*);                                            // _A4 (weak)
	virtual void* getNext(void*);                                         // _A8 (weak)
	virtual void* getStart();                                             // _AC (weak)
	virtual void* getEnd();                                               // _B0 (weak)

	void birth(int, int);
	Onyon* getOnyon(int);
	void init();
	void load();

	// _00      = VTBL
	// _00-_30  = BaseItemMgr
	// _30-_48  = Container
	// _48      = ptr to _BaseItemMgrParent2 or something?
	NodeObjectMgr<Onyon> m_nodeObjectMgr; // _4C
	SysShape::AnimMgr* _88;               // _88
	SysShape::AnimMgr* _8C;               // _8C
	SysShape::AnimMgr* _90;               // _90
	CollPartFactory* _94;                 // _94
	CollPartFactory* _98;                 // _98
	CollPartFactory* _9C;                 // _9C
	u32 _A0;                              // _A0, unknown
	u32 _A4;                              // _A4, unknown
	u32 _A8;                              // _A8, unknown
	Onyon* _AC;                           // _AC, one of these is the ship and the other is the (cave) pod
	Onyon* _B0;                           // _B0, one of these is the ship and the other is the (cave) pod
	Sys::MatTevRegAnimation _B4[3];       // _B4
	Sys::MatTevRegAnimation _F0[2];       // _F0
};

extern Mgr* mgr;
} // namespace ItemOnyon
} // namespace Game

struct GenOnyonParm : public Game::GenItemParm {

	// _00     = VTBL
	int m_onyonIndex;   // _04
	bool m_isAfterBoot; // _08
};

#endif
