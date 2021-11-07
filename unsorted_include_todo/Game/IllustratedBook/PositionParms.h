#ifndef _GAME_ILLUSTRATEDBOOK_POSITIONPARMS_H
#define _GAME_ILLUSTRATEDBOOK_POSITIONPARMS_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace IllustratedBook {
	struct PositionParms : public CNode {
		virtual ~PositionParms();     // _00
		virtual void getChildCount(); // _04
		virtual void read(Stream&);   // _08

		// _00 VTBL
	};
} // namespace IllustratedBook
} // namespace Game

#endif
