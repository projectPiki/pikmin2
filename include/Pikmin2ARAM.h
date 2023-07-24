#ifndef _PIKMIN2ARAM_H
#define _PIKMIN2ARAM_H

#include "types.h"

namespace Pikmin2ARAM {
struct Mgr {
	Mgr();

	virtual ~Mgr() { } // _08 (weak)

	static void init();
	void setLoadPermission(bool);
	bool isEntryOnly();
	void load();
	void dump();
	void loadEnemy();
	void load2D();
	void loadDemo();
	void loadItem();

	// _00 = VTBL
	bool mLoadPermission; // _04
};
} // namespace Pikmin2ARAM

extern Pikmin2ARAM::Mgr* gPikmin2AramMgr;

#endif
