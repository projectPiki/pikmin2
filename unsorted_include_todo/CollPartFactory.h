#ifndef _COLLPARTFACTORY_H
#define _COLLPARTFACTORY_H

struct CollPart {
	virtual void _00() = 0;                // _00
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

struct CollPartFactory : public CollPart {
	virtual ~CollPartFactory();            // _00
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
