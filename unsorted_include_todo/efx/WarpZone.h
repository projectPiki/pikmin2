#ifndef _EFX_WARPZONE_H
#define _EFX_WARPZONE_H

namespace efx {
namespace TSyncGroup4 < efx
{
	struct TForever >
	{
		virtual void TSyncGroup4 < create(Arg*);       // _00
		virtual void TSyncGroup4 < forceKill();        // _04
		virtual void TSyncGroup4 < fade();             // _08
		virtual void TSyncGroup4 < startDemoDrawOff(); // _0C
		virtual void TSyncGroup4 < endDemoDrawOn();    // _10

		// _00 VTBL
	};
} // namespace efx
} // namespace efx

namespace efx {
struct WarpZone : public TForever > {
	virtual void TSyncGroup4 < create(Arg*);       // _00
	virtual void TSyncGroup4 < forceKill();        // _04
	virtual void TSyncGroup4 < fade();             // _08
	virtual void TSyncGroup4 < startDemoDrawOff(); // _0C
	virtual void TSyncGroup4 < endDemoDrawOn();    // _10

	// _00 VTBL
};
} // namespace efx

#endif
