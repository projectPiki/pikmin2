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
	virtual void read(Stream&);  // _00
	virtual void write(Stream&); // _04

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct PelletFirstMemory : public PelletCropMemory {
	virtual void read(Stream&);                     // _00
	virtual void write(Stream&);                    // _04
	virtual void firstCarryPellet(Pellet*);         // _08
	virtual void obtainPellet(BasePelletMgr*, int); // _0C
	virtual void losePellet(BasePelletMgr*, int);   // _10
	virtual void _14() = 0;                         // _14

	// _00 VTBL
};
} // namespace Game

#endif
