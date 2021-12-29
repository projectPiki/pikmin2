#ifndef _GAME_OBJECTLAYOUTNODE_H
#define _GAME_OBJECTLAYOUTNODE_H

/*
    __vt__Q24Game16ObjectLayoutNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game16ObjectLayoutNodeFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte getDirection__Q24Game16ObjectLayoutNodeFv
    .4byte getBirthDoorIndex__Q24Game16ObjectLayoutNodeFv
    .4byte getBirthPosition__Q24Game16ObjectLayoutNodeFRfRf
    .4byte getExtraCode__Q24Game16ObjectLayoutNodeFv
    .4byte isFixedBattery__Q24Game16ObjectLayoutNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct ObjectLayoutNode : public CNode {
	virtual ~ObjectLayoutNode();                   // _00
	virtual void getChildCount();                  // _04
	virtual void _08() = 0;                        // _08
	virtual void _0C() = 0;                        // _0C
	virtual void _10() = 0;                        // _10
	virtual void getDirection();                   // _14
	virtual void getBirthDoorIndex();              // _18
	virtual void getBirthPosition(float&, float&); // _1C
	virtual void getExtraCode();                   // _20
	virtual void isFixedBattery();                 // _24

	// _00 VTBL
};
} // namespace Game

#endif
