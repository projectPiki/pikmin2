#ifndef _PSM_DIRECTORLINK_H
#define _PSM_DIRECTORLINK_H

namespace PSM {
struct DirectorLink {
	virtual void _00() = 0;      // _00
	virtual void eventStart();   // _04
	virtual void eventRestart(); // _08
	virtual void eventStop();    // _0C
	virtual void eventFinish();  // _10

	// _00 VTBL
};
} // namespace PSM

#endif
