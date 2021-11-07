#ifndef _JASDRUMSET_H
#define _JASDRUMSET_H

struct JASDrumSet {
	virtual ~JASDrumSet();                                // _00
	virtual void getParam(int, int, JASInstParam*) const; // _04
	virtual void getType() const;                         // _08
	virtual void _0C() = 0;                               // _0C

	// _00 VTBL
};

#endif
