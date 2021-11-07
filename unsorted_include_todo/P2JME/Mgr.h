#ifndef _P2JME_MGR_H
#define _P2JME_MGR_H

namespace P2JME {
struct Mgr {
	virtual ~Mgr();         // _00
	virtual void _04() = 0; // _04

	// _00 VTBL
};
} // namespace P2JME

#endif
