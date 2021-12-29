#ifndef _PSSYSTEM_DIRECTORCOPYACTOR_H
#define _PSSYSTEM_DIRECTORCOPYACTOR_H

/*
    __vt__Q28PSSystem17DirectorCopyActor:
    .4byte 0
    .4byte 0
    .4byte exec__Q28PSSystem17DirectorCopyActorFPQ28PSSystem12DirectorBase
    .4byte onUpdateFromMasterD__Q28PSSystem17DirectorCopyActorFv
    .4byte onUpdateFromSlaveD__Q28PSSystem17DirectorCopyActorFv
*/

namespace PSSystem {
struct DirectorCopyActor {
	virtual void exec(DirectorBase*);   // _00
	virtual void onUpdateFromMasterD(); // _04
	virtual void onUpdateFromSlaveD();  // _08

	// _00 VTBL
};
} // namespace PSSystem

#endif
