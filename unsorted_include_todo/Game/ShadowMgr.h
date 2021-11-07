#ifndef _GAME_SHADOWMGR_H
#define _GAME_SHADOWMGR_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct ShadowMgr : public CNode {
	virtual ~ShadowMgr();          // _00
	virtual void getChildCount();  // _04
	virtual void getSize();        // _08
	virtual void getMax();         // _0C
	virtual void getCreature(int); // _10
	virtual void getFirst();       // _14
	virtual void getNext(int);     // _18
	virtual void isDone(int);      // _1C
	virtual void write(Stream&);   // _20
	virtual void read(Stream&);    // _24

	// _00 VTBL
};
} // namespace Game

#endif
