#ifndef _GAME_CAVE_ITEMNODE_H
#define _GAME_CAVE_ITEMNODE_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct ObjectLayoutNode {
	virtual void _00() = 0;           // _00
	virtual void _04() = 0;           // _04
	virtual void _08() = 0;           // _08
	virtual void _0C() = 0;           // _0C
	virtual void _10() = 0;           // _10
	virtual void _14() = 0;           // _14
	virtual void getBirthDoorIndex(); // _18
	virtual void _1C() = 0;           // _1C
	virtual void getExtraCode();      // _20
	virtual void isFixedBattery();    // _24

	// _00 VTBL
};
} // namespace Game

namespace Game {
namespace Cave {
	struct ItemNode : public CNode, public ObjectLayoutNode {
		virtual ~ItemNode();                           // _00
		virtual void getChildCount();                  // _04
		virtual void getObjectId();                    // _08
		virtual void getObjectType();                  // _0C
		virtual void getBirthCount();                  // _10
		virtual void getDirection();                   // _14
		virtual void getBirthDoorIndex();              // _18
		virtual void getBirthPosition(float&, float&); // _1C
		virtual void getExtraCode();                   // _20
		virtual void isFixedBattery();                 // _24

		// _00 VTBL
	};
} // namespace Cave
} // namespace Game

#endif
