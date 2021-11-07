#ifndef _GAME_FARM_PLANT_H
#define _GAME_FARM_PLANT_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace Farm {
	struct Plant : public CNode {
		virtual ~Plant();             // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace Farm
} // namespace Game

#endif
