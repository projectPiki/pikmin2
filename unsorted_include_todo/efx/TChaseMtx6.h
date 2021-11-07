#ifndef _EFX_TCHASEMTX6_H
#define _EFX_TCHASEMTX6_H

namespace efx {
namespace TSyncGroup6 < efx
{
	struct TChaseMtx >
	{
		virtual void TSyncGroup6 < create(Arg*);       // _00
		virtual void TSyncGroup6 < forceKill();        // _04
		virtual void TSyncGroup6 < fade();             // _08
		virtual void TSyncGroup6 < startDemoDrawOff(); // _0C
		virtual void TSyncGroup6 < endDemoDrawOn();    // _10

		// _00 VTBL
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TChaseMtx6 : public TChaseMtx > {
	virtual void TSyncGroup6 < create(Arg*);       // _00
	virtual void TSyncGroup6 < forceKill();        // _04
	virtual void TSyncGroup6 < fade();             // _08
	virtual void TSyncGroup6 < startDemoDrawOff(); // _0C
	virtual void TSyncGroup6 < endDemoDrawOn();    // _10

	// _00 VTBL
};
} // namespace efx

#endif
