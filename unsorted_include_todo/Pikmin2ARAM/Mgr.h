#ifndef _PIKMIN2ARAM_MGR_H
#define _PIKMIN2ARAM_MGR_H

/*
    __vt__Q211Pikmin2ARAM3Mgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q211Pikmin2ARAM3MgrFv
    .4byte 0
*/

namespace Pikmin2ARAM {
struct Mgr {
	virtual ~Mgr();         // _08 (inline)
	virtual void _0C() = 0; // _0C

	void init();
	Mgr();
	void setLoadPermission(bool);
	void load();
	void dump();
	void loadEnemy();
	void load2D();
	void loadDemo();
	void loadItem();
};
} // namespace Pikmin2ARAM

#endif
