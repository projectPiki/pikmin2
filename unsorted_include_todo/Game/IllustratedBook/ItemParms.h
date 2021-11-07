#ifndef _GAME_ILLUSTRATEDBOOK_ITEMPARMS_H
#define _GAME_ILLUSTRATEDBOOK_ITEMPARMS_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace IllustratedBook {
	struct ItemParms : public CNode {
		virtual ~ItemParms();         // _00
		virtual void getChildCount(); // _04
		virtual void read(Stream&);   // _08

		// _00 VTBL
	};
} // namespace IllustratedBook
} // namespace Game

#endif
