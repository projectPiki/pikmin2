#ifndef _EFX_ONYONSPOTDATA_H
#define _EFX_ONYONSPOTDATA_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace efx {
struct OnyonSpotData : public CNode {
	virtual ~OnyonSpotData();                     // _00
	virtual void getChildCount();                 // _04
	virtual void loadResources();                 // _08
	virtual void getID();                         // _0C
	virtual void onCreate(ModelEffectCreateArg*); // _10

	// _00 VTBL
};
} // namespace efx

#endif
