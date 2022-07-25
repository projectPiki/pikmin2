#ifndef _GAME_MINIHOUDAI_MINIHOUDAISHOTGUNNODE_H
#define _GAME_MINIHOUDAI_MINIHOUDAISHOTGUNNODE_H

/*
    __vt__Q34Game10MiniHoudai21MiniHoudaiShotGunNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game10MiniHoudai21MiniHoudaiShotGunNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace MiniHoudai {
struct MiniHoudaiShotGunNode : public CNode {
	virtual ~MiniHoudaiShotGunNode(); // _08 (weak)

	void update();
};
} // namespace MiniHoudai
} // namespace Game

#endif
