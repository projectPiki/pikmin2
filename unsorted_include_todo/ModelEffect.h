#ifndef _MODELEFFECT_H
#define _MODELEFFECT_H

/*
    __vt__11ModelEffect:
    .4byte 0
    .4byte 0
    .4byte constructor__11ModelEffectFv
    .4byte doAnimation__11ModelEffectFv
    .4byte doEntry__11ModelEffectFv
    .4byte doSetView__11ModelEffectFi
    .4byte doViewCalc__11ModelEffectFv
    .4byte changeMaterial__11ModelEffectFv
    .4byte 0
    .4byte useCylinderLOD__11ModelEffectFv
    .4byte getLODCylinder__11ModelEffectFRQ23Sys8Cylinder
    .4byte doSimulation__11ModelEffectFf
    .4byte doDirectDraw__11ModelEffectFR8Graphics
*/

struct ModelEffect {
	virtual void constructor();                  // _00
	virtual void doAnimation();                  // _04
	virtual void doEntry();                      // _08
	virtual void doSetView(int);                 // _0C
	virtual void doViewCalc();                   // _10
	virtual void changeMaterial();               // _14
	virtual void _18() = 0;                      // _18
	virtual void useCylinderLOD();               // _1C
	virtual void getLODCylinder(Sys::Cylinder&); // _20
	virtual void doSimulation(float);            // _24
	virtual void doDirectDraw(Graphics&);        // _28

	// _00 VTBL
};

#endif
