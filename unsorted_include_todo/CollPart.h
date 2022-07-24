#ifndef _COLLPART_H
#define _COLLPART_H

/*
    __vt__8CollPart:
    .4byte 0
    .4byte 0
    .4byte __dt__8CollPartFv
    .4byte getChildCount__8CollPartFv
    .4byte isMouth__8CollPartFv
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
	virtual ~CollPart();                   // _08 (inline)
	virtual void getChildCount();          // _0C (inline)
	virtual void isMouth();                // _10 (inline)
	virtual void draw(Graphics&);          // _14
	virtual void constructor();            // _18 (inline)
	virtual void doAnimation();            // _1C (inline)
	virtual void doEntry();                // _20 (inline)
	virtual void doSetView(unsigned long); // _24 (inline)
	virtual void doViewCalc();             // _28 (inline)
	virtual void doSimulation(float);      // _2C (inline)
	virtual void doDirectDraw(Graphics&);  // _30 (inline)
};

#endif
