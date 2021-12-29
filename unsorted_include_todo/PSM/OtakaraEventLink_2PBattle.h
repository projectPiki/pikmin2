#ifndef _PSM_OTAKARAEVENTLINK_2PBATTLE_H
#define _PSM_OTAKARAEVENTLINK_2PBATTLE_H

/*
    __vt__Q23PSM25OtakaraEventLink_2PBattle:
    .4byte 0
    .4byte 0
    .4byte getListDirectorActor__Q23PSM25OtakaraEventLink_2PBattleFv
    .4byte eventStart__Q23PSM25OtakaraEventLink_2PBattleFv
    .4byte eventRestart__Q23PSM25OtakaraEventLink_2PBattleFv
    .4byte eventStop__Q23PSM25OtakaraEventLink_2PBattleFv
    .4byte eventFinish__Q23PSM25OtakaraEventLink_2PBattleFv
    .4byte is2PBattle__Q23PSM25OtakaraEventLink_2PBattleFv
*/

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
