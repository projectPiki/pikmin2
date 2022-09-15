#ifndef _DYNAMICSPARMS_H
#define _DYNAMICSPARMS_H

#include "types.h"
#include "Parameters.h"
#include "JSystem/JKR/JKRDisposer.h"

// this has a really weird inheritance thing going on, idk.
// this is my best guess atm - HP
struct DynamicsParms : public Parameters, public JKRDisposer {
	DynamicsParms();

	// virtual void _08() = 0;
	// virtual void _0C() = 0;
	// then dtor thunk at _10?
	virtual ~DynamicsParms(); // _14 (weak)

	void globalInstance();

	// _00-_0C	= Parameters
	// _0C-_24	= JKRDisposer
	Parm<bool> _24;  // _24, d009?
	Parm<f32> _40;   // _40, staParm/d011?
	Parm<f32> _68;   // _68, static/d010?
	Parm<f32> _90;   // _90, microCollision/d000?
	Parm<bool> _B8;  // _B8, d001?
	Parm<f32> _D4;   // _D4, elasticity/d002?
	Parm<bool> _FC;  // _FC, d003?
	Parm<bool> _118; // _118, d004?
	Parm<bool> _134; // _134, d005?
	Parm<f32> _150;  // _150, d006?
	Parm<bool> _178; // _178, d007?
	Parm<f32> _194;  // _194, d008?
	                 // _1BC = vtable??
	                 // _1C0 = IParameters maybe??
};

#endif
