#ifndef _GAME_ELECHIBA_TEAMLIST_H
#define _GAME_ELECHIBA_TEAMLIST_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
namespace ElecHiba {
	struct TeamList : public CNode {
		virtual ~TeamList();          // _00
		virtual void getChildCount(); // _04

		// _00 VTBL
	};
} // namespace ElecHiba
} // namespace Game

#endif
