#ifndef _GAME_MOVIECONFIG_TPARMS_H
#define _GAME_MOVIECONFIG_TPARMS_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace MovieConfig {
	struct TParms : public CNode {
		virtual ~TParms();            // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace MovieConfig
} // namespace Game

#endif
