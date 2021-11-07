#ifndef _EFX_TOOOTAFIRE_H
#define _EFX_TOOOTAFIRE_H

namespace efx {
namespace TSyncGroup6 < efx
{
	struct TChaseMtx >
	{
		virtual void _00() = 0;                        // _00
		virtual void TSyncGroup6 < forceKill();        // _04
		virtual void TSyncGroup6 < fade();             // _08
		virtual void TSyncGroup6 < startDemoDrawOff(); // _0C
		virtual void TSyncGroup6 < endDemoDrawOn();    // _10

		// _00 VTBL
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TOootaFire : public TChaseMtx > {
	virtual void create(Arg*);                     // _00
	virtual void TSyncGroup6 < forceKill();        // _04
	virtual void TSyncGroup6 < fade();             // _08
	virtual void TSyncGroup6 < startDemoDrawOff(); // _0C
	virtual void TSyncGroup6 < endDemoDrawOn();    // _10

	// _00 VTBL
};
} // namespace efx

#endif
