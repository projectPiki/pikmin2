#ifndef _JASBASICINST_H
#define _JASBASICINST_H

/*
    __vt__12JASBasicInst:
    .4byte 0
    .4byte 0
    .4byte __dt__12JASBasicInstFv
    .4byte getParam__12JASBasicInstCFiiP12JASInstParam
    .4byte getType__12JASBasicInstCFv
    .4byte getKeymapIndex__12JASBasicInstCFi
*/

struct JASBasicInst {
	virtual ~JASBasicInst();                              // _08
	virtual void getParam(int, int, JASInstParam*) const; // _0C
	virtual void getType() const;                         // _10
	virtual void getKeymapIndex(int) const;               // _14

	// _00 VTBL
};

#endif
