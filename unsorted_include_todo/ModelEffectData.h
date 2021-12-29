#ifndef _MODELEFFECTDATA_H
#define _MODELEFFECTDATA_H

/*
    __vt__15ModelEffectData:
    .4byte 0
    .4byte 0
    .4byte __dt__15ModelEffectDataFv
    .4byte getChildCount__5CNodeFv
    .4byte 0
    .4byte 0
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct ModelEffectData : public CNode {
	virtual ~ModelEffectData();   // _00
	virtual void getChildCount(); // _04
	virtual void _08() = 0;       // _08
	virtual void _0C() = 0;       // _0C
	virtual void _10() = 0;       // _10

	// _00 VTBL
};

#endif
