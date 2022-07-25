#ifndef _PSM_DIRECTORMGR_BATTLE_H
#define _PSM_DIRECTORMGR_BATTLE_H

/*
    __vt__Q23PSM18DirectorMgr_Battle:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23PSM18DirectorMgr_BattleFv
    .4byte newDirector__Q23PSM18DirectorMgr_BattleFUcRQ28PSSystem11DirectedBgm
    .4byte 0
    .4byte 0
    .4byte "@12@__dt__Q23PSM18DirectorMgr_BattleFv"
*/

namespace PSM {
struct DirectorMgr_Battle {
	virtual ~DirectorMgr_Battle();                                   // _08 (weak)
	virtual void newDirector(unsigned char, PSSystem::DirectedBgm&); // _0C
	virtual void _10() = 0;                                          // _10
	virtual void _14() = 0;                                          // _14

	DirectorMgr_Battle();
};
} // namespace PSM

#endif
