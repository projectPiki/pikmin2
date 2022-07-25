#ifndef _GAME_ENEMYSTONE_DRAWINFO_H
#define _GAME_ENEMYSTONE_DRAWINFO_H

/*
    __vt__Q34Game10EnemyStone8DrawInfo:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game10EnemyStone8DrawInfoFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace EnemyStone {
struct DrawInfo : public CNode {
	virtual ~DrawInfo(); // _08 (inline)

	void __defctor();
	DrawInfo(bool);
	void reset();
	void update(Game::EnemyBase*);
	void makeMatrix(Matrixf*, bool);
	void getStateID();
	void getPosAndScale(Vector3<float>*, float*);
	void appear(Game::EnemyBase*, float);
	void fit(Game::EnemyBase*);
	void shake(Game::EnemyBase*, float);
	void disappear(Game::EnemyBase*);
	void dead(Game::EnemyBase*);
};
} // namespace EnemyStone
} // namespace Game

#endif
