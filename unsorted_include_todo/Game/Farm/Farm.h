#ifndef _GAME_FARM_FARM_H
#define _GAME_FARM_FARM_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace Farm {
	struct Farm : public CNode {
		virtual ~Farm();              // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace Farm
} // namespace Game

#endif
