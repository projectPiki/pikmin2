#ifndef _GAME_MINIHOUDAI_MINIHOUDAISHOTGUNNODE_H
#define _GAME_MINIHOUDAI_MINIHOUDAISHOTGUNNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace MiniHoudai {
	struct MiniHoudaiShotGunNode : public CNode {
		virtual ~MiniHoudaiShotGunNode(); // _00
		virtual void getChildCount();     // _04

		// _00 VTBL
	};
} // namespace MiniHoudai
} // namespace Game

#endif
