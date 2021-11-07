#ifndef _PSSYSTEM_DIRECTORCOPYACTOR_H
#define _PSSYSTEM_DIRECTORCOPYACTOR_H

namespace PSSystem {
struct DirectorCopyActor {
	virtual void exec(DirectorBase*);   // _00
	virtual void onUpdateFromMasterD(); // _04
	virtual void onUpdateFromSlaveD();  // _08

	// _00 VTBL
};
} // namespace PSSystem

#endif
