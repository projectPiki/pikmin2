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
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

struct ModelEffectData : public CNode {
	virtual ~ModelEffectData(); // _08
	virtual void _10() = 0;     // _10
	virtual void _14() = 0;     // _14
	virtual void _18() = 0;     // _18

	// _00 VTBL
};

#endif
