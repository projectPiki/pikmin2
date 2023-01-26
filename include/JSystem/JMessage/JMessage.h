#ifndef _JSYSTEM_JMESSAGE_H
#define _JSYSTEM_JMESSAGE_H

#include "types.h"

namespace JMessage {

struct JMessageHeader {
	char _00[4]; // _00 - subsystem version - "MESG"
	char _04[4]; // _04 - file type - "bmg"
	int _08;     // _08 - file size
	int _0C;     // _0C - chunk count
	u8 _10;      // _10 - encoding?
	u8 _11[0xf]; // _11-_20 - filler
};

struct INF1Block {
	void* _00;       // _00 - pointer to INF1?
	int _04;         // _04 - size of section? (bytes from section beginning)
	u16 _08;         // _08 - number of messages?
	u16 _0A;         // _0A - size of each INF data? (bytes)
	u16 _0C;         // _0C - something?
	u8 _0E[2];       // _0E - padding?
	char* _10[0x10]; // _10 - messages/message pointers?
};

struct DAT1Block {
	void* _00; // _00 - pointer to DAT1?
	int _04;   // _04 - size of section? (bytes from section beginning)
	           // messages?
};

struct STR1Block;

struct MID1Block {
	void* _00;   // _00 - pointer to MID1?
	int _04;     // _04 - size of section? (bytes from beginning)
	u16 _08;     // _08 - number of messages?
	u8 _0A;      // _0A - ?
	u8 _0B;      // _0B - ?
	u8 _0C[4];   // _0C-_10 - padding?
	u16 _10;     // _10 - ?
	u8 _12[0xD]; // _12-_20 - padding?
};

}; // namespace JMessage

#endif
