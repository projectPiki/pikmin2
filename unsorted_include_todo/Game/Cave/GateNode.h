#ifndef _GAME_CAVE_GATENODE_H
#define _GAME_CAVE_GATENODE_H

/*
    __vt__Q34Game4Cave8GateNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game4Cave8GateNodeFv
    .4byte getChildCount__5CNodeFv
    .4byte getObjectId__Q34Game4Cave8GateNodeFv
    .4byte getObjectType__Q34Game4Cave8GateNodeFv
    .4byte getBirthCount__Q34Game4Cave8GateNodeFv
    .4byte getDirection__Q34Game4Cave8GateNodeFv
    .4byte getBirthDoorIndex__Q34Game4Cave8GateNodeFv
    .4byte getBirthPosition__Q24Game16ObjectLayoutNodeFRfRf
    .4byte getExtraCode__Q24Game16ObjectLayoutNodeFv
    .4byte isFixedBattery__Q24Game16ObjectLayoutNodeFv
*/

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct ObjectLayoutNode {
	virtual void _00() = 0;                        // _00
	virtual void _04() = 0;                        // _04
	virtual void _08() = 0;                        // _08
	virtual void _0C() = 0;                        // _0C
	virtual void _10() = 0;                        // _10
	virtual void _14() = 0;                        // _14
	virtual void _18() = 0;                        // _18
	virtual void getBirthPosition(float&, float&); // _1C
	virtual void getExtraCode();                   // _20
	virtual void isFixedBattery();                 // _24

	// _00 VTBL
};
} // namespace Game

namespace Game {
namespace Cave {
	struct GateNode : public CNode, public ObjectLayoutNode {
		virtual ~GateNode();                           // _00
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
