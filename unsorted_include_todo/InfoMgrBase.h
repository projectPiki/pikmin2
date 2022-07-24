#ifndef _INFOMGRBASE_H
#define _INFOMGRBASE_H

/*
    __vt__11InfoMgrBase:
    .4byte 0
    .4byte 0
    .4byte __dt__11InfoMgrBaseFv
    .4byte 0
    .4byte 0
    .4byte 0
*/

struct InfoMgrBase {
	virtual ~InfoMgrBase(); // _08 (inline)
	virtual void _0C() = 0; // _0C
	virtual void _10() = 0; // _10
	virtual void _14() = 0; // _14
};

#endif
