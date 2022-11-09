#ifndef _JSTUDIO_STBDATA_H
#define _JSTUDIO_STBDATA_H

#include "types.h"

namespace JStudio {
namespace stb {
namespace data {

const int guBit_TSequence_type = 24;

const int BLOCK_SOUND        = 'JSND';
const int BLOCK_ACTOR        = 'JACT';
const int BLOCK_AMBIENTLIGHT = 'JABL';
const int BLOCK_CAMERA       = 'JCMR';
const int BLOCK_FOG          = 'JFOG';
const int BLOCK_LIGHT        = 'JLIT';
const int BLOCK_MESSAGE      = 'JMSG';
const int BLOCK_PARTICLE     = 'JPTC';
const int BLOCK_NONE         = -1;

const u32 gu32Mask_TSequence_value_signExpansion = 0xFF000000;
extern const u32 ga4cSignature; // 'STB/0'
extern const u32 gauDataSize_TEParagraph_data[8];

inline void toString_block(char* a5c, u32 arg1); // unused/inlined

struct TParse_TParagraph_data {

	struct TData {
		u8 status;    //_00
		int dataSize; //_04
		int _08;
		u8* fileCount;
		u8* _10;
	};

	void getData(TData*) const;

	const void* stbData;
};

struct TParse_TSequence {

	struct TData {
		u8 type;
		u32 param;
		const void* content;
		const void* next;
	};

	void getData(TData*) const;

	const void* stbData;
};

struct TParse_TParagraph {

	struct TData {
		u32 type;
		u32 param;
		const void* content;
		const void* next;
	};
	void getData(TData*) const;

	const void* stbData;
};

struct TParse_TBlock {
	int* filedata;
};

struct TParse_TBlock_object {
	int* filedata;
};

/** @size{0x20} */
struct TParse_THeader {
	u32 m_signature; // _00
	u16 _04;         // _04
	u16 _06;         // _06
	u8 _08[4];       // _08 - unknown
	u32 blockCount;  // _0C
	u8 _10[0x10];    // _10 - unknown
};

} // namespace data
} // namespace stb
} // namespace JStudio

#endif
