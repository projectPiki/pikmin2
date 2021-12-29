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
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace Houdai {
	struct HoudaiShotGunNode : public CNode {
		virtual ~HoudaiShotGunNode(); // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace Houdai
} // namespace Game

#endif
