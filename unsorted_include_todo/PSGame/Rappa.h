#ifndef _PSGAME_RAPPA_H
#define _PSGAME_RAPPA_H

/*
    __vt__Q26PSGame5Rappa:
    .4byte 0
    .4byte 0
    .4byte __dt__Q26PSGame5RappaFv
*/

namespace PSGame {
struct Rappa {
	virtual ~Rappa(); // _08

	Rappa();
	void init(unsigned short);
	void setId(unsigned long);
	void playRappa(bool, float, float, JAInter::Object*);
	void syncCpu_WaitChk(JASTrack*);
	void syncCpu_TblNo(JASTrack*);
};
} // namespace PSGame

#endif
