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
	virtual ~CollPart();                   // _08 (weak)
	virtual void getChildCount();          // _0C (weak)
	virtual void isMouth();                // _10 (weak)
	virtual void draw(Graphics&);          // _14
	virtual void constructor();            // _18 (weak)
	virtual void doAnimation();            // _1C (weak)
	virtual void doEntry();                // _20 (weak)
	virtual void doSetView(unsigned long); // _24 (weak)
	virtual void doViewCalc();             // _28 (weak)
	virtual void doSimulation(float);      // _2C (weak)
	virtual void doDirectDraw(Graphics&);  // _30 (weak)
};

struct AgeCollPart : public CollPart {
	virtual ~AgeCollPart();       // _08 (weak)
	virtual void draw(Graphics&); // _14
};

#endif
