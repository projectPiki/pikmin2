#ifndef _DYNAMICSPARMS_H
#define _DYNAMICSPARMS_H

#include "BaseParm.h"
#include "types.h"
#include "Parameters.h"
#include "BaseParm.h"
#include "JSystem/JKernel/JKRDisposer.h"

struct DynamicsParms : public Parameters, public JKRDisposer {
	DynamicsParms();

	static DynamicsParms* mInstance;

	static void globalInstance();

	// _00-_0C	= Parameters
	// _0C-_24	= JKRDisposer
	Parm<bool> mNewFriction;             // _24, d009, new friction?
	Parm<f32> mStaParm;                  // _40, d011, Sta-Parm
	Parm<f32> mStatic;                   // _68, d010, Static
	Parm<f32> mMicroCollision;           // _90, d000, micro collision
	Parm<bool> mFrictionDuringResolve;   // _B8, d001, friction during resolve?
	Parm<f32> mElasticity;               // _D4, d002, elasticity
	Parm<bool> mFriction;                // _FC, d003, friction
	Parm<bool> mFrictionTangentVelocity; // _118, d004, friction:tanvel
	Parm<bool> mFixedFriction;           // _134, d005, fixed friction
	Parm<f32> mFixedFrictionValue;       // _150, d006, fixed friction value
	Parm<bool> mNoRotationEffect;        // _178, d007, no rotation effect
	Parm<f32> mRotatingMomentDamp;       // _194, d008, rotating moment damp
	                                     // _1BC = vtable
	                                     // _1C0 = IParameters

	virtual ~DynamicsParms(); // _14
};

#endif
