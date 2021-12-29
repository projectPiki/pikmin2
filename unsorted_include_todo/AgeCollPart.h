#ifndef _AGECOLLPART_H
#define _AGECOLLPART_H

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

struct CollPart {
	virtual ~CollPart();                   // _00
	virtual void getChildCount();          // _04
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

struct AgeCollPart : public CollPart {
	virtual ~AgeCollPart();                // _00
	virtual void getChildCount();          // _04
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
