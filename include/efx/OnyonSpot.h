#ifndef _EFX_ONYONSPOT_H
#define _EFX_ONYONSPOT_H

#include "ModelEffect.h"
#include "sys/MatBaseAnimator.h"
#include "sys/MatBaseAnimation.h"

namespace efx {

struct OnyonSpot;

struct OnyonSpotArg : public ModelEffectCreateArg {
	inline OnyonSpotArg(Vector3f& orig, u32 onyonType)
	    : mOnyonType(onyonType)
	{
		mOrig = orig;
	}

	virtual u64 getID() { return 'ONY_SPOT'; } // _08 (weak)

	// _00 		= VTBL
	Vector3f mOrig; // _04
	u32 mOnyonType; // _10
};

struct OnyonSpotData : public ModelEffectData {
	virtual ~OnyonSpotData() { }                              // _08 (weak)
	virtual void loadResources();                             // _10
	virtual u64 getID() { return 'ONY_SPOT'; }                // _14 (weak)
	virtual ModelEffect* onCreate(ModelEffectCreateArg* arg); // _18

	int mTexAnimCount;                  // _20
	Sys::MatTexAnimation* mTexAnims;    // _24
	int mTevAnimCount;                  // _28
	Sys::MatTevRegAnimation* mTevAnims; // _2C
};

struct OnyonSpot : public ModelEffect {
	virtual void changeMaterial();                     // _1C
	virtual void getLODSphere(Sys::Sphere& lodSphere); // _20
	virtual bool useCylinderLOD() { return true; }     // _24 (weak)
	virtual void getLODCylinder(Sys::Cylinder&);       // _28

	// unused/inlined
	void initAnimators(Sys::MatTexAnimation*, Sys::MatTevRegAnimation*);

	Sys::MatLoopAnimator mAnim1; // _3C
	Sys::MatLoopAnimator mAnim2; // _48
};
} // namespace efx

#endif
