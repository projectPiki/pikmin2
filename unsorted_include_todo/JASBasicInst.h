#ifndef _JASBASICINST_H
#define _JASBASICINST_H

struct JASBasicInst {
	virtual ~JASBasicInst();                              // _00
	virtual void getParam(int, int, JASInstParam*) const; // _04
	virtual void getType() const;                         // _08
	virtual void getKeymapIndex(int) const;               // _0C

	// _00 VTBL
};

#endif
