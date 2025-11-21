#ifndef _GAME_ENTITIES_ITEMDENGEKIGATE_H
#define _GAME_ENTITIES_ITEMDENGEKIGATE_H

#include "types.h"
#include "Game/Entities/ItemGate.h"

namespace Game {
namespace ItemDengekiGate {
struct Mgr : public NodeItemMgr<ItemGate> {
	Mgr();

	virtual u32 generatorGetID() { return 'dgat'; }                       // _58 (weak)
	virtual BaseItem* generatorBirth(Vector3f&, Vector3f&, GenItemParm*); // _5C
	virtual void generatorWrite(Stream&, GenItemParm*);                   // _60
	virtual void generatorRead(Stream&, GenItemParm*, u32);               // _64
	virtual u32 generatorLocalVersion() { return '0000'; }                // _68 (weak)
	virtual GenItemParm* generatorNewItemParm();                          // _70
	virtual char* getCaveName(int);                                       // _B8
	virtual int getCaveID(char*);                                         // _BC

	void setupGate(ItemGate*);
	void setupPlatform(ItemGate*);

	// _00     = VTBL
	// _00-_88 = NodeItemMgr
	Platform* mCentrePlatform;          // _88
	Platform* mSidePlatform;            // _8C
	Sys::MatTexAnimation mMatAnimation; // _90
};

extern Mgr* mgr;

} // namespace ItemDengekiGate
} // namespace Game

#endif
