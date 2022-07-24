#ifndef _GAME_SHADOWMGR_H
#define _GAME_SHADOWMGR_H

/*
    __vt__Q24Game9ShadowMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game9ShadowMgrFv
    .4byte getChildCount__5CNodeFv
    .4byte getSize__Q24Game9ShadowMgrFv
    .4byte getMax__Q24Game9ShadowMgrFv
    .4byte getCreature__Q24Game9ShadowMgrFi
    .4byte getFirst__Q24Game9ShadowMgrFv
    .4byte getNext__Q24Game9ShadowMgrFi
    .4byte isDone__Q24Game9ShadowMgrFi
    .4byte write__Q24Game9ShadowMgrFR6Stream
    .4byte read__Q24Game9ShadowMgrFR6Stream
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
struct ShadowMgr : public CNode {
	virtual ~ShadowMgr();          // _08
	virtual void getSize();        // _10
	virtual void getMax();         // _14
	virtual void getCreature(int); // _18
	virtual void getFirst();       // _1C
	virtual void getNext(int);     // _20
	virtual void isDone(int);      // _24
	virtual void write(Stream&);   // _28
	virtual void read(Stream&);    // _2C

	// _00 VTBL
};
} // namespace Game

#endif
