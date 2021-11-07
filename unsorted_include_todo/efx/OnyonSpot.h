#ifndef _EFX_ONYONSPOT_H
#define _EFX_ONYONSPOT_H

struct ModelEffect {
	virtual void constructor();           // _00
	virtual void doAnimation();           // _04
	virtual void doEntry();               // _08
	virtual void doSetView(int);          // _0C
	virtual void doViewCalc();            // _10
	virtual void _14() = 0;               // _14
	virtual void _18() = 0;               // _18
	virtual void _1C() = 0;               // _1C
	virtual void _20() = 0;               // _20
	virtual void doSimulation(float);     // _24
	virtual void doDirectDraw(Graphics&); // _28

	// _00 VTBL
};

namespace efx {
struct OnyonSpot : public ModelEffect {
	virtual void constructor();                  // _00
	virtual void doAnimation();                  // _04
	virtual void doEntry();                      // _08
	virtual void doSetView(int);                 // _0C
	virtual void doViewCalc();                   // _10
	virtual void changeMaterial();               // _14
	virtual void getLODSphere(Sys::Sphere&);     // _18
	virtual void useCylinderLOD();               // _1C
	virtual void getLODCylinder(Sys::Cylinder&); // _20
	virtual void doSimulation(float);            // _24
	virtual void doDirectDraw(Graphics&);        // _28

	// _00 VTBL
};
} // namespace efx

#endif
