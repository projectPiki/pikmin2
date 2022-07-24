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
	virtual void getListDirectorActor(); // _08
	virtual void eventStart();           // _0C
	virtual void eventRestart();         // _10
	virtual void eventStop();            // _14
	virtual void eventFinish();          // _18
	virtual void is2PBattle();           // _1C (inline)

	void getTargetDirector();
};
} // namespace PSM

#endif
