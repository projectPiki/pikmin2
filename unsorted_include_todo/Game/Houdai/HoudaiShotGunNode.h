#ifndef _GAME_HOUDAI_HOUDAISHOTGUNNODE_H
#define _GAME_HOUDAI_HOUDAISHOTGUNNODE_H

/*
    __vt__Q34Game6Houdai17HoudaiShotGunNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game6Houdai17HoudaiShotGunNodeFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace Houdai {
struct HoudaiShotGunNode : public CNode {
	virtual ~HoudaiShotGunNode(); // _08 (weak)

	void update();
};
} // namespace Houdai
} // namespace Game

#endif
