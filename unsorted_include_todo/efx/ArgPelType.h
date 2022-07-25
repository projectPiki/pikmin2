#ifndef _EFX_ARGPELTYPE_H
#define _EFX_ARGPELTYPE_H

/*
    __vt__Q23efx10ArgPelType:
    .4byte 0
    .4byte 0
    .4byte getName__Q23efx10ArgPelTypeFv
*/

namespace efx {
struct ArgPelType {
	virtual void getName(); // _08 (weak)
};
} // namespace efx

#endif
