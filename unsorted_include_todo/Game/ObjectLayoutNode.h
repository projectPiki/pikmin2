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
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct ObjectLayoutNode : public CNode {
	virtual ~ObjectLayoutNode();                   // _08 (weak)
	virtual void _10() = 0;                        // _10
	virtual void _14() = 0;                        // _14
	virtual void _18() = 0;                        // _18
	virtual void getDirection();                   // _1C (weak)
	virtual void getBirthDoorIndex();              // _20 (weak)
	virtual void getBirthPosition(float&, float&); // _24 (weak)
	virtual void getExtraCode();                   // _28 (weak)
	virtual void isFixedBattery();                 // _2C (weak)
};
} // namespace Game

#endif
