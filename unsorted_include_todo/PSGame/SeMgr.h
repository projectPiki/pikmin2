#ifndef _PSGAME_SEMGR_H
#define _PSGAME_SEMGR_H

/*
    __vt__Q26PSGame5SeMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q26PSGame5SeMgrFv
*/

namespace PSGame {
struct SeMgr {
	virtual ~SeMgr(); // _08 (inline)

	SeMgr();
	void playMessageVoice(unsigned long, bool);
	void stopMessageVoice();
};
} // namespace PSGame

#endif
