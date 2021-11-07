#ifndef _GAME_PELLETFIRSTMEMORY_H
#define _GAME_PELLETFIRSTMEMORY_H

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
