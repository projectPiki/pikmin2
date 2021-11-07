#ifndef _EFX_THEBIDEAD_H
#define _EFX_THEBIDEAD_H

namespace efx {
namespace TSyncGroup4 < efx
{
	struct TChaseMtxT >
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
struct THebiDead : public TChaseMtxT > {
	virtual void TSyncGroup4 < create(Arg*);       // _00
	virtual void TSyncGroup4 < forceKill();        // _04
	virtual void TSyncGroup4 < fade();             // _08
	virtual void TSyncGroup4 < startDemoDrawOff(); // _0C
	virtual void TSyncGroup4 < endDemoDrawOn();    // _10

	// _00 VTBL
};
} // namespace efx

#endif
