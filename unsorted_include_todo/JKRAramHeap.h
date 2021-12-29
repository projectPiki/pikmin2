#ifndef _JKRARAMHEAP_H
#define _JKRARAMHEAP_H

/*
    __vt__11JKRAramHeap:
    .4byte 0
    .4byte 0
    .4byte __dt__11JKRAramHeapFv
    .4byte 0
*/

struct JKRAramHeap {
	virtual ~JKRAramHeap(); // _00
	virtual void _04() = 0; // _04

	// _00 VTBL
};

#endif
