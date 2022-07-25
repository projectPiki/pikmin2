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
	virtual void exec(DirectorBase*);   // _08
	virtual void onUpdateFromMasterD(); // _0C (inline)
	virtual void onUpdateFromSlaveD();  // _10 (inline)

	DirectorCopyActor(PSSystem::DirectorBase*, PSSystem::DirectorBase*);
};
} // namespace PSSystem

#endif
