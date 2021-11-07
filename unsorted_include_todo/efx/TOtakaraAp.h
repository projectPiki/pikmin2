#ifndef _EFX_TOTAKARAAP_H
#define _EFX_TOTAKARAAP_H

namespace efx {
struct TOtakaraAp {
	virtual void create(Arg*); // _00
	virtual void forceKill();  // _04
	virtual void fade();       // _08

	// _00 VTBL
};
} // namespace efx

#endif
