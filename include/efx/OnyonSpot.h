#ifndef _EFX_ONYONSPOT_H
#define _EFX_ONYONSPOT_H

#include "ModelEffect.h"

namespace efx {
struct OnyonSpotArg : public ModelEffectCreateArg {
	virtual u64 getID() { return 'ONY_SPOT'; } // _08 (weak)
};

struct OnyonSpotData : public ModelEffectData {
	virtual ~OnyonSpotData();                     // _08 (weak)
	virtual void loadResources();                 // _10
	virtual u64 getID();                          // _14 (weak)
	virtual void onCreate(ModelEffectCreateArg*); // _18
};

struct OnyonSpot : public ModelEffect {
	virtual void changeMaterial();                     // _1C
	virtual void getLODSphere(Sys::Sphere& lodSphere); // _20
	virtual void useCylinderLOD();                     // _24 (weak)
	virtual void getLODCylinder(Sys::Cylinder&);       // _28
};
} // namespace efx

#endif
