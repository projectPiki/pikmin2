#ifndef _JKRARAMBLOCK_H
#define _JKRARAMBLOCK_H

struct JKRAramBlock {
	virtual ~JKRAramBlock(); // _00
	virtual void _04() = 0;  // _04

	// _00 VTBL
};

#endif
