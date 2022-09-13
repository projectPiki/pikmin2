#ifndef _JKRDECOMP_H
#define _JKRDECOMP_H

/*
    __vt__9JKRDecomp:
    .4byte 0
    .4byte 0
    .4byte __dt__9JKRDecompFv
    .4byte run__9JKRDecompFv
*/

struct JKRDecomp {
	virtual ~JKRDecomp(); // _08
	virtual void run();   // _0C

	void create(long);
	JKRDecomp(long);
	void sendCommand(JKRDecompCommand*);
	void orderSync(unsigned char*, unsigned char*, unsigned long, unsigned long);
	void decode(unsigned char*, unsigned char*, unsigned long, unsigned long);
	void decodeSZP(unsigned char*, unsigned char*, unsigned long, unsigned long);
	void decodeSZS(unsigned char*, unsigned char*, unsigned long, unsigned long);
	void checkCompressed(unsigned char*);
};

#endif
