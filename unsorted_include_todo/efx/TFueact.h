#ifndef _EFX_TFUEACT_H
#define _EFX_TFUEACT_H

/*
    __vt__Q23efx7TFueact:
    .4byte 0
    .4byte 0
    .4byte create__Q23efx7TFueactFPQ23efx3Arg
    .4byte forceKill__Q23efx7TFueactFv
    .4byte fade__Q23efx7TFueactFv
*/

namespace efx {
struct TFueact {
	virtual void create(Arg*); // _08 (weak)
	virtual void forceKill();  // _0C (weak)
	virtual void fade();       // _10 (weak)
};
} // namespace efx

#endif
