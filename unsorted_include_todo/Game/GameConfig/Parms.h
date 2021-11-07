#ifndef _GAME_GAMECONFIG_PARMS_H
#define _GAME_GAMECONFIG_PARMS_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace GameConfig {
	struct Parms : public CNode {
		virtual ~Parms();             // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace GameConfig
} // namespace Game

#endif
