#ifndef _PSM_DIRECTORLINK_H
#define _PSM_DIRECTORLINK_H

#include "types.h"
#include "JSystem/JSupport/JSUList.h"

namespace PSM {
struct DirectorLink : public JSUPtrLink {
	virtual void getListDirectorActor() = 0; // _08
	virtual void eventStart();               // _0C
	virtual void eventRestart();             // _10
	virtual void eventStop();                // _14
	virtual void eventFinish();              // _18

	// _00-_10  = JSUPtrLink
	// _10      = VTABLE
};
} // namespace PSM

#endif
