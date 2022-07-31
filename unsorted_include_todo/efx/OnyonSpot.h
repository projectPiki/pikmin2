#ifndef _EFX_ONYONSPOT_H
#define _EFX_ONYONSPOT_H

/*
    __vt__Q23efx9OnyonSpot:
    .4byte 0
    .4byte 0
    .4byte constructor__11ModelEffectFv
    .4byte doAnimation__11ModelEffectFv
    .4byte doEntry__11ModelEffectFv
    .4byte doSetView__11ModelEffectFi
    .4byte doViewCalc__11ModelEffectFv
    .4byte changeMaterial__Q23efx9OnyonSpotFv
    .4byte getLODSphere__Q23efx9OnyonSpotFRQ23Sys6Sphere
    .4byte useCylinderLOD__Q23efx9OnyonSpotFv
    .4byte getLODCylinder__Q23efx9OnyonSpotFRQ23Sys8Cylinder
    .4byte doSimulation__11ModelEffectFf
    .4byte doDirectDraw__11ModelEffectFR8Graphics
*/

struct ModelEffect {
	virtual void constructor();                  // _08 (weak)
	virtual void doAnimation();                  // _0C
	virtual void doEntry();                      // _10
	virtual void doSetView(int);                 // _14
	virtual void doViewCalc();                   // _18
	virtual void changeMaterial();               // _1C
	virtual void getLODSphere(Sys::Sphere&);     // _20
	virtual void useCylinderLOD();               // _24 (weak)
	virtual void getLODCylinder(Sys::Cylinder&); // _28
	virtual void doSimulation(float);            // _2C (weak)
	virtual void doDirectDraw(Graphics&);        // _30 (weak)
};

namespace efx {
struct OnyonSpot : public ModelEffect {
	virtual void changeMaterial();               // _1C
	virtual void getLODSphere(Sys::Sphere&);     // _20
	virtual void useCylinderLOD();               // _24 (weak)
	virtual void getLODCylinder(Sys::Cylinder&); // _28
};
} // namespace efx

#endif
