#ifndef _MOUTHCOLLPART_H
#define _MOUTHCOLLPART_H

struct CollPart {
	virtual void _00() = 0;                // _00
	virtual void getChildCount();          // _04
	virtual void _08() = 0;                // _08
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

struct MouthCollPart : public CollPart {
	virtual ~MouthCollPart();              // _00
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
