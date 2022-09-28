#ifndef _EFX_TOTAKARADIVE_H
#define _EFX_TOTAKARADIVE_H

#include "efx/TSimple.h"

namespace efx {

struct TOtakaraDive : public TSimple3 {
	inline TOtakaraDive(u16 effectID1, u16 effectID2, u16 effectID3)
	    : TSimple3(effectID1, effectID2, effectID3)
	{
	}

	virtual bool create(Arg*); // _08
};

} // namespace efx

#endif
