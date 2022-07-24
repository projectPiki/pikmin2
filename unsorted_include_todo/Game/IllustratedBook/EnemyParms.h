#ifndef _GAME_ILLUSTRATEDBOOK_ENEMYPARMS_H
#define _GAME_ILLUSTRATEDBOOK_ENEMYPARMS_H

/*
    __vt__Q34Game15IllustratedBook10EnemyParms:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game15IllustratedBook10EnemyParmsFv
    .4byte getChildCount__5CNodeFv
    .4byte read__Q34Game15IllustratedBook10EnemyParmsFR6Stream
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace IllustratedBook {
struct EnemyParms : public CNode {
	virtual ~EnemyParms();      // _08 (inline)
	virtual void read(Stream&); // _10

	EnemyParms();
};
} // namespace IllustratedBook
} // namespace Game

#endif
