#ifndef _PSSYSTEM_DIRECTORMGRBASE_H
#define _PSSYSTEM_DIRECTORMGRBASE_H

namespace PSSystem {
struct DirectorMgrBase {
	virtual ~DirectorMgrBase(); // _00
	virtual void _04() = 0;     // _04

	// _00 VTBL
};
} // namespace PSSystem

#endif
