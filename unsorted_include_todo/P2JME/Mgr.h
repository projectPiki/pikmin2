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
	virtual ~Mgr();         // _00
	virtual void _04() = 0; // _04

	// _00 VTBL
};
} // namespace P2JME

#endif
