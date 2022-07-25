#ifndef _PSSYSTEM_DIRECTORMGRBASE_H
#define _PSSYSTEM_DIRECTORMGRBASE_H

/*
    __vt__Q28PSSystem15DirectorMgrBase:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28PSSystem15DirectorMgrBaseFv
    .4byte 0
*/

namespace PSSystem {
struct DirectorMgrBase {
	virtual ~DirectorMgrBase(); // _08 (weak)
	virtual void _0C() = 0;     // _0C

	DirectorMgrBase(unsigned char);
	void initAndAdaptToBgm(PSSystem::DirectedBgm&);
	void playInit(JASTrack*);
	void exec();
	void off(PSSystem::DirectedBgm*);
};
} // namespace PSSystem

#endif
