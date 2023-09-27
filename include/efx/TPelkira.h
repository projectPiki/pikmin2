#ifndef _EFX_TPELKIRA_H
#define _EFX_TPELKIRA_H

#include "efx/TChasePos.h"

namespace efx {
struct TPelkira_ver01 : public TChasePos {
	TPelkira_ver01(Vector3f* pos)
	    : TChasePos(PID_SyncDefault, pos)
	{
	}

	// vtable 1 (TBase)
	virtual bool create(Arg*); // _08
	// 	_0C-_14
	// vtable 2 (JPAEmitterCallBack + Self)
	virtual ~TPelkira_ver01() { } // _48 (weak)
};
} // namespace efx

#endif
