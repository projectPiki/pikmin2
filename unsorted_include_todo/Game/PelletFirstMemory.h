#ifndef _GAME_PELLETFIRSTMEMORY_H
#define _GAME_PELLETFIRSTMEMORY_H

/*
    __vt__Q24Game17PelletFirstMemory:
    .4byte 0
    .4byte 0
    .4byte read__Q24Game16PelletCropMemoryFR6Stream
    .4byte write__Q24Game16PelletCropMemoryFR6Stream
    .4byte firstCarryPellet__Q24Game17PelletFirstMemoryFPQ24Game6Pellet
    .4byte obtainPellet__Q24Game17PelletFirstMemoryFPQ24Game13BasePelletMgri
    .4byte losePellet__Q24Game17PelletFirstMemoryFPQ24Game13BasePelletMgri
    .4byte 0
*/

namespace Game {
struct PelletCropMemory {
	virtual void read(Stream&);  // _08
	virtual void write(Stream&); // _0C

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct PelletFirstMemory : public PelletCropMemory {
	virtual void firstCarryPellet(Pellet*);         // _10
	virtual void obtainPellet(BasePelletMgr*, int); // _14
	virtual void losePellet(BasePelletMgr*, int);   // _18
	virtual void _1C() = 0;                         // _1C

	// _00 VTBL
};
} // namespace Game

#endif
