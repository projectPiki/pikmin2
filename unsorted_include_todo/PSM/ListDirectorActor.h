#ifndef _PSM_LISTDIRECTORACTOR_H
#define _PSM_LISTDIRECTORACTOR_H

/*
    __vt__Q23PSM17ListDirectorActor:
    .4byte 0
    .4byte 0
    .4byte exec__Q28PSSystem17DirectorCopyActorFPQ28PSSystem12DirectorBase
    .4byte onUpdateFromMasterD__Q23PSM17ListDirectorActorFv
    .4byte onUpdateFromSlaveD__Q28PSSystem17DirectorCopyActorFv
*/

namespace PSSystem {
struct DirectorCopyActor {
	virtual void exec(DirectorBase*);   // _08
	virtual void onUpdateFromMasterD(); // _0C
	virtual void onUpdateFromSlaveD();  // _10 (inline)
};
} // namespace PSSystem

namespace PSM {
struct ListDirectorActor : public DirectorCopyActor {
	virtual void onUpdateFromMasterD(); // _0C
};
} // namespace PSM

#endif
