#ifndef _JSYSTEM_JKR_JKRDECOMP_H
#define _JSYSTEM_JKR_JKRDECOMP_H

#include "Dolphin/os.h"
#include "JSystem/JKR/JKRThread.h"
#include "types.h"

struct JKRAMCommand;

// #define EXTRACT_TO_UINT(array, i1, i2, i3, i4) ((uint)array[i1] | (uint)array[i2] << 8 | (uint)array[i3] << 16 | (uint)array[i4] << 24)

// inline u32 getU32FromBigEndianBytes(u8* data, int offset) {
// 	return ((u32)data[offset+3] | (uint)data[offset+2] << 8 | (uint)data[offset+1] << 16 | (uint)data[offset] << 24);
// }

// struct BigEndianU32 {
// 	u8 data[4];

// 	inline u32 getU32FromBigEndianBytes() const {
// 		return ((u32)data[3] | (u32)data[2] << 8 | (u32)data[1] << 16 | (u32)data[0] << 24);
// 	}
// };

/**
 * @fabricated
 * TODO: This was a massive failure. Maybe they just did raw byte access here.
 */
struct SZPHeader {
	// alternative 1:
	// u8 _00;
	// u8 _01;
	// u8 _02;
	// u8 _03;
	// u8 _04;
	// u8 _05;
	// u8 _06;
	// u8 _07;
	// u8 _08;
	// u8 _09;
	// u8 _0A;
	// u8 _0B;
	// u8 _0C;
	// u8 _0D;
	// u8 _0E;
	// u8 _0F;
	// u8 _10;
	// u8 _11;
	// u8 _12;
	// u8 _13;
	// u8 _14;
	// u8 _15;
	// u8 _16;
	// u8 _17;
	// u8 _18;
	// u8 _19;
	// u8 _1A;
	// u8 _1B;
	// u8 _1C;
	// u8 _1D;
	// u8 _1E;
	// u8 _1F;

	// inline u32 getValue0() { return ((uint)_03 | (uint)_02 << 8 | (uint)_01 << 16 | (uint)_01 << 24); }
	// inline u32 getValue1() { return ((uint)_07 | (uint)_06 << 8 | (uint)_05 << 16 | (uint)_04 << 24); }

	// alternative 2:
	// BigEndianU32 data[8];

	// alternative 3:
	u8 data[0x20];

	// u32 getValue0() { return EXTRACT_TO_UINT(data, 3, 2, 1, 0); }
	inline u32 getValue0() { return (((u32)data[0] << 24) | ((u32)data[1] << 16) | ((u32)data[2] << 8) | ((u32)data[3])); }
	// value 1 might be decompressed size?
	inline u32 getValue1() { return (((u32)data[4] << 24) | ((u32)data[5] << 16) | ((u32)data[6] << 8) | ((u32)data[7])); }
	// inline u32 getValue1() { return (u32)(data + 4); }
	inline u32 getValue2() { return (((u32)data[8] << 24) | ((u32)data[9] << 16) | ((u32)data[10] << 8) | ((u32)data[11])); }
	inline u32 getValue3() { return (((u32)data[12] << 24) | ((u32)data[13] << 16) | ((u32)data[14] << 8) | ((u32)data[15])); }
};

// Size: 0x4C
struct JKRDecompCommand {
	typedef void Callback(JKRDecompCommand*);

	JKRDecompCommand();
	~JKRDecompCommand();

	u8 _00[4];                // _00
	u8* _04;                  // _04
	u8* _08;                  // _08
	u32 _0C;                  // _0C
	u32 _10;                  // _10
	Callback* m_callback;     // _14
	void* _18;                // _18
	OSMessageQueue* _1C;      // _1C
	int _20;                  // _20
	JKRAMCommand* _24;        // _24
	OSMessageQueue _28;       // _28
	void* m_messageBuffer[1]; // _48
};

// Size: 0x7C
struct JKRDecomp : public JKRThread {
	enum CompressionMode { NOT_COMPRESSED = 0, YAY0, YAZ0 };

	JKRDecomp(long);

	virtual ~JKRDecomp(); // _08
	virtual void* run();  // _0C

	static CompressionMode checkCompressed(u8*);
	static JKRDecomp* create(long);
	static void decode(u8*, u8*, u32, u32);
	static void decodeSZP(u8*, u8*, u32, u32);
	static void decodeSZS(u8*, u8*, u32, u32);
	static bool orderSync(u8*, u8*, u32, u32);
	static BOOL sendCommand(JKRDecompCommand*);

	u8 _78[4]; // _78

	static void* sMessageBuffer[4];
	static OSMessageQueue sMessageQueue;
	static JKRDecomp* sDecompObject;
};

#endif
