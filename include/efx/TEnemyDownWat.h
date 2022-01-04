#ifndef _EFX_TENEMYDOWNWAT_H
#define _EFX_TENEMYDOWNWAT_H

#include "efx/TSimple.h"
#include "types.h"

namespace efx {
struct TEnemyDownWat : public TSimple3 {
	TEnemyDownWat(u16 effectID1, u16 effectID2, u16 effectID3)
	    : TSimple3(effectID1, effectID2, effectID3)
	{
	}

	virtual bool create(Arg*); // _00
};

} // namespace efx

#endif
