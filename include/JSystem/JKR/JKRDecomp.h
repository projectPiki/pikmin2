#ifndef _JSYSTEM_JKRDECOMP_H
#define _JSYSTEM_JKRDECOMP_H

#include "types.h"

struct JKRDecomp {
	JKRDecomp(long);
	~JKRDecomp();

	void checkCompressed(u8*);
	void create(long);
	void decode(u8*, u8*, ulong, ulong);
	void decodeSZP(u8*, u8*, ulong, ulong);
	void decodeSZS(u8*, u8*, ulong, ulong);
	void orderSync(u8*, u8*, ulong, ulong);
	void run();
	void sendCommand(struct JKRDecompCommand*);
};

#endif
