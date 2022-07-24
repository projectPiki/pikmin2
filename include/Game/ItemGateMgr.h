#ifndef _GAME_ITEMGATEMGR_H
#define _GAME_ITEMGATEMGR_H

#include "itemMgr.h"

namespace Game {
struct ItemGateMgr : public BaseItemMgr {
	virtual void doAnimation();           // _08
	virtual void doEntry();               // _0C
	virtual void doSetView(int);          // _10
	virtual void doViewCalc();            // _14
	virtual void doSimulation(float);     // _18
	virtual void doDirectDraw(Graphics&); // _1C

	virtual void initDependency();                                            // _38
	virtual u32 generatorGetID()                                         = 0; // _58
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*) = 0; // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                       // _60
	virtual void generatorRead(Stream&, GenItemParm*, unsigned long);         // _64
	virtual u32 generatorLocalVersion();                                      // _68
	virtual GenItemParm* generatorNewItemParm();                              // _70
	virtual void getCaveName(int);                                            // _74
	virtual void getCaveID(char*);                                            // _78

	// _00 VTBL
};
} // namespace Game

#endif
