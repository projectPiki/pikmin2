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

struct MouthCollPart : public CollPart {
	virtual ~MouthCollPart(); // _08 (weak)
	virtual void isMouth();   // _10 (weak)

	MouthCollPart();
	void getPosition(Vector3<float>&);
	void copyMatrixTo(Matrixf&);
};

#endif
