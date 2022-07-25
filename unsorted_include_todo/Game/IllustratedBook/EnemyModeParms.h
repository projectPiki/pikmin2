#ifndef _GAME_ILLUSTRATEDBOOK_ENEMYMODEPARMS_H
#define _GAME_ILLUSTRATEDBOOK_ENEMYMODEPARMS_H

/*
    __vt__Q34Game15IllustratedBook14EnemyModeParms:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game15IllustratedBook14EnemyModeParmsFv
    .4byte getChildCount__5CNodeFv
    .4byte read__Q34Game15IllustratedBook14EnemyModeParmsFR6Stream
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace IllustratedBook {
struct EnemyModeParms : public CNode {
	virtual ~EnemyModeParms();  // _08 (weak)
	virtual void read(Stream&); // _10
};
} // namespace IllustratedBook
} // namespace Game

#endif
