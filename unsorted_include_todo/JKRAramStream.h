#ifndef _JKRARAMSTREAM_H
#define _JKRARAMSTREAM_H

/*
    __vt__13JKRAramStream:
    .4byte 0
    .4byte 0
    .4byte __dt__13JKRAramStreamFv
    .4byte run__13JKRAramStreamFv
*/

struct JKRAramStream {
	virtual ~JKRAramStream(); // _00
	virtual void run();       // _04

	// _00 VTBL
};

#endif
