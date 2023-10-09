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
	Parm<bool> _24;  // _24, d009, new friction?
	Parm<f32> _40;   // _40, d011, Sta-Parm
	Parm<f32> _68;   // _68, d010, Static
	Parm<f32> _90;   // _90, d000, micro collision
	Parm<bool> _B8;  // _B8, d001, friction during resolve?
	Parm<f32> _D4;   // _D4, d002, elasticity
	Parm<bool> _FC;  // _FC, d003, friction
	Parm<bool> _118; // _118, d004, friction:tanvel
	Parm<bool> _134; // _134, d005, fixed friction
	Parm<f32> _150;  // _150, d006, fixed friction value
	Parm<bool> _178; // _178, d007, no rotation effect
	Parm<f32> _194;  // _194, d008, rotating moment damp
	                 // _1BC = vtable
	                 // _1C0 = IParameters

	virtual ~DynamicsParms(); // _14
};

#endif
