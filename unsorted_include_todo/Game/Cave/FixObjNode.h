#ifndef _GAME_CAVE_FIXOBJNODE_H
#define _GAME_CAVE_FIXOBJNODE_H

/*
    __vt__Q34Game4Cave10FixObjNode:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game4Cave10FixObjNodeFv
    .4byte getChildCount__5CNodeFv
    .4byte getObjectId__Q34Game4Cave10FixObjNodeFv
    .4byte getObjectType__Q34Game4Cave10FixObjNodeFv
    .4byte getBirthCount__Q34Game4Cave10FixObjNodeFv
    .4byte getDirection__Q34Game4Cave10FixObjNodeFv
    .4byte getBirthDoorIndex__Q24Game16ObjectLayoutNodeFv
    .4byte getBirthPosition__Q34Game4Cave10FixObjNodeFRfRf
    .4byte getExtraCode__Q24Game16ObjectLayoutNodeFv
    .4byte isFixedBattery__Q24Game16ObjectLayoutNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct ObjectLayoutNode {
	virtual ~ObjectLayoutNode();                   // _08 (weak)
	virtual void _0C() = 0;                        // _0C
	virtual void getObjectId();                    // _10 (weak)
	virtual void getObjectType();                  // _14 (weak)
	virtual void getBirthCount();                  // _18 (weak)
	virtual void getDirection();                   // _1C (weak)
	virtual void getBirthDoorIndex();              // _20 (weak)
	virtual void getBirthPosition(float&, float&); // _24 (weak)
	virtual void getExtraCode();                   // _28 (weak)
	virtual void isFixedBattery();                 // _2C (weak)
};
} // namespace Game

namespace Game {
namespace Cave {
struct FixObjNode : public CNode, public ObjectLayoutNode {
	virtual ~FixObjNode();                         // _08 (weak)
	virtual void getObjectId();                    // _10 (weak)
	virtual void getObjectType();                  // _14 (weak)
	virtual void getBirthCount();                  // _18 (weak)
	virtual void getDirection();                   // _1C (weak)
	virtual void getBirthPosition(float&, float&); // _24 (weak)
};
} // namespace Cave
} // namespace Game

#endif
