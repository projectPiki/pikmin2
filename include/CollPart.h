#ifndef _COLLPART_H
#define _COLLPART_H

/*
    __vt__11AgeCollPart:
    .4byte 0
    .4byte 0
    .4byte __dt__11AgeCollPartFv
    .4byte getChildCount__8CollPartFv
    .4byte isMouth__8CollPartFv
    .4byte draw__11AgeCollPartFR8Graphics
    .4byte constructor__8CollPartFv
    .4byte doAnimation__8CollPartFv
    .4byte doEntry__8CollPartFv
    .4byte doSetView__8CollPartFUl
    .4byte doViewCalc__8CollPartFv
    .4byte doSimulation__8CollPartFf
    .4byte doDirectDraw__8CollPartFR8Graphics
*/

#include "CNode.h"
#include "Graphics.h"
#include "Vector3.h"
#include "ID32.h"
#include "SysShape/MtxObject.h"
#include "Game/Creature.h"

struct CollPart : CNode {
	virtual ~CollPart();                   // _00
	virtual int getChildCount();           // _04
	virtual void isMouth();                // _08
	virtual void draw(Graphics&);          // _0C
	virtual void constructor();            // _10
	virtual void doAnimation();            // _14
	virtual void doEntry();                // _18
	virtual void doSetView(unsigned long); // _1C
	virtual void doViewCalc();             // _20
	virtual void doSimulation(float);      // _24
	virtual void doDirectDraw(Graphics&);  // _28

	// _00 VTBL
	float radius1;              // 0x18
	float radius2;              // 0x1c
	Vector3f offset;            // 0x20
	int jointIndex;             // 0x2c
	ID32 ID;                    // 0x30
	ID32 Code;                  // 0x3c
	short attribute;            // 0x48
	Vector3f position;          // 0x4c
	u8 collType;                // 0x58
	SysShape::MtxObject* model; // 0x5c
	int _60;
	Game::Creature* owner; // 0x64
};

struct AgeCollPart : public CollPart {
	virtual ~AgeCollPart();                // _00
	virtual int getChildCount();           // _04
	virtual void isMouth();                // _08
	virtual void draw(Graphics&);          // _0C
	virtual void constructor();            // _10
	virtual void doAnimation();            // _14
	virtual void doEntry();                // _18
	virtual void doSetView(unsigned long); // _1C
	virtual void doViewCalc();             // _20
	virtual void doSimulation(float);      // _24
	virtual void doDirectDraw(Graphics&);  // _28

	// _00 VTBL
};

#endif
