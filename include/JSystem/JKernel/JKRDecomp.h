#ifndef _JSYSTEM_JKR_JKRDECOMP_H
#define _JSYSTEM_JKR_JKRDECOMP_H

#include "Dolphin/os.h"
#include "JSystem/JKernel/JKRThread.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "types.h"

struct JKRAMCommand;

inline u32 read_big_endian_u32(void* ptr)
{
	u8* uptr = (u8*)ptr;
	return ((u32)uptr[0] << 0x18) | ((u32)uptr[1] << 0x10) | ((u32)uptr[2] << 8) | (u32)uptr[3];
}

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

	u8 _00[4];                    // _00, unknown
	u8* mSourceBuffer;            // _04
	u8* mDestBuffer;              // _08
	u32 mSourceLength;            // _0C
	u32 mDestLength;              // _10
	Callback* mCallback;          // _14
	JKRDecompCommand* mSelf;      // _18
	OSMessageQueue* _1C;          // _1C
	int _20;                      // _20
	JKRAMCommand* mAMCommand;     // _24
	OSMessageQueue mMessageQueue; // _28
	void* mMessageBuffer[1];      // _48, OSMessage
};

// Size: 0x7C
struct JKRDecomp : public JKRThread {
	JKRDecomp(s32);

	virtual ~JKRDecomp(); // _08
	virtual void* run();  // _0C

	static JKRCompression checkCompressed(u8*);
	static JKRDecomp* create(s32);
	static void decode(u8*, u8*, u32, u32);
	static void decodeSZP(u8*, u8*, u32, u32);
	static void decodeSZS(u8*, u8*, u32, u32);
	static bool orderSync(u8*, u8*, u32, u32);
	static BOOL sendCommand(JKRDecompCommand*);

	static void* sMessageBuffer[4];
	static OSMessageQueue sMessageQueue;
	static JKRDecomp* sDecompObject;
};

int JKRDecompressFromDVDToAram(JKRDvdFile*, u32, u32, u32, u32, u32, u32*);

inline void JKRDecompress(u8* srcBuffer, u8* dstBuffer, u32 srcLength, u32 dstLength)
{
	JKRDecomp::orderSync(srcBuffer, dstBuffer, srcLength, dstLength);
}

inline JKRDecomp* JKRCreateDecompManager(s32 priority) { return JKRDecomp::create(priority); }

inline int JKRCheckCompressed_noASR(u8* buf)
{
	int compression = JKRDecomp::checkCompressed(buf);
	if (compression == COMPRESSION_ASR)
		compression = COMPRESSION_None;
	return compression;
}

inline JKRCompression JKRCheckCompressed(u8* buffer)
{
	JKRCompression compression = JKRDecomp::checkCompressed(buffer);
	return compression;
}

inline u32 JKRDecompExpandSize(u8* buffer) { return (buffer[4] << 0x18) | (buffer[5] << 0x10) | (buffer[6] << 8) | buffer[7]; }

#endif
