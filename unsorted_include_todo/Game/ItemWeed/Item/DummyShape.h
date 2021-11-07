#ifndef _GAME_ITEMWEED_ITEM_DUMMYSHAPE_H
#define _GAME_ITEMWEED_ITEM_DUMMYSHAPE_H

namespace SysShape {
struct MtxObject {
	virtual void _00() = 0; // _00
	virtual void isModel(); // _04

	// _00 VTBL
};
} // namespace SysShape

namespace Game {
namespace ItemWeed {
	namespace Item {
		struct DummyShape : public MtxObject {
			virtual void getMatrix(int); // _00
			virtual void isModel();      // _04

			// _00 VTBL
		};
	} // namespace Item
} // namespace ItemWeed
} // namespace Game

#endif
