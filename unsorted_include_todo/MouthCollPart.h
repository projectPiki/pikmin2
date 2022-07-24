#ifndef _MOUTHCOLLPART_H
#define _MOUTHCOLLPART_H

/*
    __vt__13MouthCollPart:
    .4byte 0
    .4byte 0
    .4byte __dt__13MouthCollPartFv
    .4byte getChildCount__8CollPartFv
    .4byte isMouth__13MouthCollPartFv
    .4byte draw__8CollPartFR8Graphics
    .4byte constructor__8CollPartFv
    .4byte doAnimation__8CollPartFv
    .4byte doEntry__8CollPartFv
    .4byte doSetView__8CollPartFUl
    .4byte doViewCalc__8CollPartFv
    .4byte doSimulation__8CollPartFf
    .4byte doDirectDraw__8CollPartFR8Graphics
*/

struct CollPart {
	virtual ~CollPart();                   // _08
	virtual void getChildCount();          // _0C
	virtual void isMouth();                // _10
	virtual void draw(Graphics&);          // _14
	virtual void constructor();            // _18
	virtual void doAnimation();            // _1C
	virtual void doEntry();                // _20
	virtual void doSetView(unsigned long); // _24
	virtual void doViewCalc();             // _28
	virtual void doSimulation(float);      // _2C
	virtual void doDirectDraw(Graphics&);  // _30

	// _00 VTBL
};

struct MouthCollPart : public CollPart {
	virtual ~MouthCollPart(); // _08
	virtual void isMouth();   // _10

	// _00 VTBL
};

#endif
