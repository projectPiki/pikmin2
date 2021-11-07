#ifndef _EFX_TJGMATTACKW_H
#define _EFX_TJGMATTACKW_H

namespace efx {
namespace TSyncGroup3 < efx
{
	struct TChasePosYRot >
	{
		virtual void _00() = 0;                        // _00
		virtual void TSyncGroup3 < forceKill();        // _04
		virtual void TSyncGroup3 < fade();             // _08
		virtual void TSyncGroup3 < startDemoDrawOff(); // _0C
		virtual void TSyncGroup3 < endDemoDrawOn();    // _10

		// _00 VTBL
	};
} // namespace efx
} // namespace efx

namespace efx {
struct TJgmAttackW : public TChasePosYRot > {
	virtual void create(Arg*);                     // _00
	virtual void TSyncGroup3 < forceKill();        // _04
	virtual void TSyncGroup3 < fade();             // _08
	virtual void TSyncGroup3 < startDemoDrawOff(); // _0C
	virtual void TSyncGroup3 < endDemoDrawOn();    // _10

	// _00 VTBL
};
} // namespace efx

#endif
