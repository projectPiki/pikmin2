#ifndef _GAME_ENEMYSTONE_OBJ_H
#define _GAME_ENEMYSTONE_OBJ_H

/*
    __vt__Q34Game10EnemyStone3Obj:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game10EnemyStone3ObjFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
namespace EnemyStone {
struct Obj : public CNode {
	virtual ~Obj();         // _08
	virtual void _10() = 0; // _10

	// _00 VTBL
};
} // namespace EnemyStone
} // namespace Game

#endif
