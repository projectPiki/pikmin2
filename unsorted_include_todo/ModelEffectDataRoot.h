#ifndef _MODELEFFECTDATAROOT_H
#define _MODELEFFECTDATAROOT_H

/*
    __vt__19ModelEffectDataRoot:
    .4byte 0
    .4byte 0
    .4byte __dt__19ModelEffectDataRootFv
    .4byte getChildCount__5CNodeFv
    .4byte loadResources__19ModelEffectDataRootFv
    .4byte getID__19ModelEffectDataRootFv
    .4byte onCreate__19ModelEffectDataRootFP20ModelEffectCreateArg
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct ModelEffectDataRoot : public CNode {
	virtual ~ModelEffectDataRoot();               // _00
	virtual void getChildCount();                 // _04
	virtual void loadResources();                 // _08
	virtual void getID();                         // _0C
	virtual void onCreate(ModelEffectCreateArg*); // _10

	// _00 VTBL
};

#endif
