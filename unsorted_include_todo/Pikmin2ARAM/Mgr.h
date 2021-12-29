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
	virtual ~Mgr();         // _00
	virtual void _04() = 0; // _04

	// _00 VTBL
};
} // namespace Pikmin2ARAM

#endif
