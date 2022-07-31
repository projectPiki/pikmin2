#ifndef _JKRARAM_H
#define _JKRARAM_H

/*
    __vt__7JKRAram:
    .4byte 0
    .4byte 0
    .4byte __dt__7JKRAramFv
    .4byte run__7JKRAramFv
*/

struct JKRAram {
	virtual ~JKRAram(); // _08
	virtual void run(); // _0C

	void create(unsigned long, unsigned long, long, long, long);
	JKRAram(unsigned long, unsigned long, long);
	void mainRamToAram(unsigned char*, unsigned long, unsigned long, JKRExpandSwitch, unsigned long, JKRHeap*, int, unsigned long*);
	void aramToMainRam(unsigned long, unsigned char*, unsigned long, JKRExpandSwitch, unsigned long, JKRHeap*, int, unsigned long*);
	void aramToMainRam(JKRAramBlock*, unsigned char*, unsigned long, unsigned long, JKRExpandSwitch, unsigned long, JKRHeap*, int,
	                   unsigned long*);
};

#endif
