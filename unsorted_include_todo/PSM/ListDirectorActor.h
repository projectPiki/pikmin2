#ifndef _PSM_LISTDIRECTORACTOR_H
#define _PSM_LISTDIRECTORACTOR_H

namespace PSSystem {
struct DirectorCopyActor {
	virtual void exec(DirectorBase*);  // _00
	virtual void _04() = 0;            // _04
	virtual void onUpdateFromSlaveD(); // _08

	// _00 VTBL
};
} // namespace PSSystem

namespace PSM {
struct ListDirectorActor : public DirectorCopyActor {
	virtual void exec(DirectorBase*);   // _00
	virtual void onUpdateFromMasterD(); // _04
	virtual void onUpdateFromSlaveD();  // _08

	// _00 VTBL
};
} // namespace PSM

#endif
