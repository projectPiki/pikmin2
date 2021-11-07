#ifndef _MODELEFFECTDATAROOT_H
#define _MODELEFFECTDATAROOT_H

struct CNode {
	virtual void _00() = 0;       // _00
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
