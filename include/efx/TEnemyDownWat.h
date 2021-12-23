#ifndef _EFX_TENEMYDOWNWAT_H
#define _EFX_TENEMYDOWNWAT_H

#include "efx/TSimple.h"
#include "types.h"

namespace efx {
struct TEnemyDownWat : public TSimple3 {
	TEnemyDownWat(ushort effectID1, ushort effectID2, ushort effectID3)
	    : TSimple3(effectID1, effectID2, effectID3)
	{
	}

	virtual bool create(Arg*); // _00
};

} // namespace efx

#endif
