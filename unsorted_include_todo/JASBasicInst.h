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
	virtual ~JASBasicInst();                              // _00
	virtual void getParam(int, int, JASInstParam*) const; // _04
	virtual void getType() const;                         // _08
	virtual void getKeymapIndex(int) const;               // _0C

	// _00 VTBL
};

#endif
