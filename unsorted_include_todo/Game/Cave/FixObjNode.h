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
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Game {
struct ObjectLayoutNode {
	virtual ~ObjectLayoutNode();                   // _08 (inline)
	virtual void _0C() = 0;                        // _0C
	virtual void getObjectId();                    // _10 (inline)
	virtual void getObjectType();                  // _14 (inline)
	virtual void getBirthCount();                  // _18 (inline)
	virtual void getDirection();                   // _1C (inline)
	virtual void getBirthDoorIndex();              // _20 (inline)
	virtual void getBirthPosition(float&, float&); // _24 (inline)
	virtual void getExtraCode();                   // _28 (inline)
	virtual void isFixedBattery();                 // _2C (inline)
};
} // namespace Game

namespace Game {
namespace Cave {
struct FixObjNode : public CNode, public ObjectLayoutNode {
	virtual ~FixObjNode();                         // _08 (inline)
	virtual void getObjectId();                    // _10 (inline)
	virtual void getObjectType();                  // _14 (inline)
	virtual void getBirthCount();                  // _18 (inline)
	virtual void getDirection();                   // _1C (inline)
	virtual void getBirthPosition(float&, float&); // _24 (inline)
};
} // namespace Cave
} // namespace Game

#endif
