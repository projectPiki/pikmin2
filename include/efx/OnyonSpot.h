#ifndef _EFX_ONYONSPOT_H
#define _EFX_ONYONSPOT_H

#include "ModelEffect.h"
#include "sys/MatBaseAnimator.h"
#include "sys/MatBaseAnimation.h"

namespace efx {

struct OnyonSpot;

struct OnyonSpotArg : public ModelEffectCreateArg {
	inline OnyonSpotArg(Vector3f& orig, u32 onyonType)
	    : m_onyonType(onyonType)
	{
		m_orig = orig;
	}

	virtual u64 getID() { return 'ONY_SPOT'; } // _08 (weak)

	// _00 		= VTBL
	Vector3f m_orig; // _04
	u32 m_onyonType; // _10
};

struct OnyonSpotData : public ModelEffectData {
	virtual ~OnyonSpotData() { }                          // _08 (weak)
	virtual void loadResources();                         // _10
	virtual u64 getID() { return 'ONY_SPOT'; }            // _14 (weak)
	virtual ModelEffect* onCreate(ModelEffectCreateArg*); // _18

	int m_texAnimCount;                  // _20
	Sys::MatTexAnimation* m_texanims;    // _24
	int m_tevAnimCount;                  // _28
	Sys::MatTevRegAnimation* m_tevanims; // _2C
};

struct OnyonSpot : public ModelEffect {
	virtual void changeMaterial();                     // _1C
	virtual void getLODSphere(Sys::Sphere& lodSphere); // _20
	virtual bool useCylinderLOD() { return true; }     // _24 (weak)
	virtual void getLODCylinder(Sys::Cylinder&);       // _28

	// unused/inlined
	void initAnimators(Sys::MatTexAnimation*, Sys::MatTevRegAnimation*);

	Sys::MatLoopAnimator m_anim1; // _3C
	Sys::MatLoopAnimator m_anim2; // _48
};
} // namespace efx

#endif
