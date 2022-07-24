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
	virtual void constructor();                  // _08
	virtual void doAnimation();                  // _0C
	virtual void doEntry();                      // _10
	virtual void doSetView(int);                 // _14
	virtual void doViewCalc();                   // _18
	virtual void changeMaterial();               // _1C
	virtual void _20() = 0;                      // _20
	virtual void useCylinderLOD();               // _24
	virtual void getLODCylinder(Sys::Cylinder&); // _28
	virtual void doSimulation(float);            // _2C
	virtual void doDirectDraw(Graphics&);        // _30

	// _00 VTBL
};

#endif
