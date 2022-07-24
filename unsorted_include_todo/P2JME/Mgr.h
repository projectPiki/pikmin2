#ifndef _P2JME_MGR_H
#define _P2JME_MGR_H

/*
    __vt__Q25P2JME3Mgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q25P2JME3MgrFv
    .4byte 0
*/

namespace P2JME {
struct Mgr {
	virtual ~Mgr();         // _08
	virtual void _0C() = 0; // _0C

	// _00 VTBL
};
} // namespace P2JME

#endif
