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
	virtual ~JKRAramHeap(); // _08
	virtual void _0C() = 0; // _0C
};

#endif
