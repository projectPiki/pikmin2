#ifndef _PSM_OTAKARAEVENTLINK_2PBATTLE_H
#define _PSM_OTAKARAEVENTLINK_2PBATTLE_H

namespace PSM {
struct OtakaraEventLink_2PBattle {
	virtual void getListDirectorActor(); // _00
	virtual void eventStart();           // _04
	virtual void eventRestart();         // _08
	virtual void eventStop();            // _0C
	virtual void eventFinish();          // _10
	virtual void is2PBattle();           // _14

	// _00 VTBL
};
} // namespace PSM

#endif
