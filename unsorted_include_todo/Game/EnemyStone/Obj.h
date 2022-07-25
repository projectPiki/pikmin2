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
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace EnemyStone {
struct Obj : public CNode {
	virtual ~Obj();         // _08 (inline)
	virtual void _10() = 0; // _10

	Obj(Game::EnemyBase*, Game::EnemyStone::Info*);
	void start();
	void shake();
	void update();
	void checkDrawInfoState(int);
	void dead();
};
} // namespace EnemyStone
} // namespace Game

#endif
