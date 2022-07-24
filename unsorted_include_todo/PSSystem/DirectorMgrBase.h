#ifndef _PSSYSTEM_DIRECTORMGRBASE_H
#define _PSSYSTEM_DIRECTORMGRBASE_H

/*
    __vt__Q28PSSystem15DirectorMgrBase:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28PSSystem15DirectorMgrBaseFv
    .4byte 0
*/

namespace PSSystem {
struct DirectorMgrBase {
	virtual ~DirectorMgrBase(); // _08
	virtual void _0C() = 0;     // _0C

	// _00 VTBL
};
} // namespace PSSystem

#endif
