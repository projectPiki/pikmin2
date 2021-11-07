#ifndef _GAME_HOUDAI_HOUDAISHOTGUNNODE_H
#define _GAME_HOUDAI_HOUDAISHOTGUNNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
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
