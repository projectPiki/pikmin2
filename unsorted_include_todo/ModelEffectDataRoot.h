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
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

struct ModelEffectDataRoot : public CNode {
	virtual ~ModelEffectDataRoot();               // _08 (inline)
	virtual void loadResources();                 // _10 (inline)
	virtual void getID();                         // _14 (inline)
	virtual void onCreate(ModelEffectCreateArg*); // _18 (inline)
};

#endif
