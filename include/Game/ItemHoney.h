#ifndef _GAME_ITEMHONEY_H
#define _GAME_ITEMHONEY_H

#include "Game/BaseItem.h"
#include "Game/gameGenerator.h"
#include "Graphics.h"
#include "Vector3.h"
#include "Matrixf.h"
#include "Game/CollEvent.h"
#include "Game/Interaction.h"
#include "SysShape/KeyEvent.h"
#include "Game/itemMgr.h"

namespace Game {
namespace ItemHoney {
struct InitArg : public CreatureInitArg {
	inline InitArg(u8 a, u8 b)
	{
		_04 = a;
		_05 = b;
	}
	virtual const char* getName() // _08
	{
		return "ItemHoney::InitArg";
	}

	// VTABLE
	u8 _04; // _04
	u8 _05; // _05
};

struct Item : public CFSMItem {
	Item();

	// vtable 1 (Creature)
	virtual void onInit(CreatureInitArg*);      // _30
	virtual void doSimulation(float);           // _4C
	virtual void doDirectDraw(Graphics&);       // _50
	virtual void onStartCapture();              // _94
	virtual void onUpdateCapture(Matrixf&);     // _98
	virtual void onEndCapture();                // _9C
	virtual void collisionCallback(CollEvent&); // _EC
	virtual void on_movie_end(bool);            // _114
	virtual char* getCreatureName();            // _1A8 (weak)

	// vtable 2 (MotionListener + BaseItem + self)
	virtual void makeTrMatrix();                        // _1C4
	virtual void doAI();                                // _1C8
	virtual void changeMaterial();                      // _1D0
	virtual float getMapCollisionRadius();              // _1DC
	virtual bool interactAbsorb(InteractAbsorb&);       // _1F0
	virtual void updateBoundSphere();                   // _210
	virtual void onSetPosition();                       // _21C
	virtual CItemFSM* createFSM();                      // _220
	virtual void onKeyEvent(const SysShape::KeyEvent&); // _224 (weak)
	virtual void absorbable();                          // _228
	virtual void demoOK();                              // _22C

	bool isShrinking();

	u8 _1E0;      // _1E0
	u8 _1E1[0x3]; // _1E1 - padding maybe
};

struct Mgr : public FixedSizeItemMgr<ItemHoney::Item> {
	virtual void onLoadResources();                                                   // _48
	virtual u32 generatorGetID();                                                     // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3<float>&, Vector3<float>&, GenItemParm*); // _5C
	virtual void onCreateModel(SysShape::Model*);                                     // _A0
	virtual ItemHoney::Item* birth();                                                 // _A4
	virtual ~Mgr();                                                                   // _BC (weak)

	u8 _7C[0x8]; // _7C - unknown
};

extern Mgr* mgr;

} // namespace ItemHoney
} // namespace Game

#endif
