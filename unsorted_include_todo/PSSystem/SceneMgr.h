#ifndef _PSSYSTEM_SCENEMGR_H
#define _PSSYSTEM_SCENEMGR_H

/*
    __vt__Q28PSSystem8SceneMgr:
    .4byte 0
    .4byte 0
    .4byte exec__Q28PSSystem8SceneMgrFv
*/

namespace PSSystem {
struct SceneMgr {
	virtual void exec(); // _08

	// _00 VTBL
};
} // namespace PSSystem

#endif
