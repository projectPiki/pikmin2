#ifndef _EFX_ONYONSPOTDATA_H
#define _EFX_ONYONSPOTDATA_H

/*
    __vt__Q23efx13OnyonSpotData:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23efx13OnyonSpotDataFv
    .4byte getChildCount__5CNodeFv
    .4byte loadResources__Q23efx13OnyonSpotDataFv
    .4byte getID__Q23efx13OnyonSpotDataFv
    .4byte onCreate__Q23efx13OnyonSpotDataFP20ModelEffectCreateArg
*/

struct CNode {
	virtual ~CNode();             // _00
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
