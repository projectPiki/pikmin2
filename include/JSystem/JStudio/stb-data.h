#ifndef _JSTUDIO_STBDATA_H
#define _JSTUDIO_STBDATA_H

#include "types.h"

namespace JStudio {
namespace stb {
namespace data {

const int guBit_TSequence_type = 24;

// BLOCK TYPES
const int BLOCK_SOUND        = 'JSND';
const int BLOCK_ACTOR        = 'JACT';
const int BLOCK_AMBIENTLIGHT = 'JABL';
const int BLOCK_CAMERA       = 'JCMR';
const int BLOCK_FOG          = 'JFOG';
const int BLOCK_LIGHT        = 'JLIT';
const int BLOCK_MESSAGE      = 'JMSG';
const int BLOCK_PARTICLE     = 'JPTC';
const int BLOCK_NONE         = -1;

extern const u32 ga4cSignature; // 'STB/0'
extern const u32 gauDataSize_TEParagraph_data[8];

inline void toString_block(char* a5c, u32 arg1); // unused/inlined

// For header information
struct THeader {
	struct Target {
		char mName[8];      // _00, 'jstudio'
		u16 _08[3];         // _08
		u16 mTargetVersion; // _0E
	};

	char mSignature[4]; // _00
	u16 mByteOrder;     // _04, must be 0xFEFF
	u16 mVersion;       // _06, 0=obsolete, 1-3=okay
	u32 _08;            // _08
	u32 mBlockNum;      // _0C
	Target mTarget;     // _10
	u8 mContent[0];     // _20
};

struct TBlock {
	u32 mSize; // _00
	u32 mType; // _04, see BLOCK TYPES above
};

struct TBlock_object : public TBlock {
	// _00-_08 = TBlock
	u16 mFlag;   // _08
	u16 mIDSize; // _0A
	u8 mID[0];   // _0C
};

struct TParagraph {
	u16 _00;     // _00
	u16 mIDSize; // _02
	u8 mID[0];   // _04
};

} // namespace data
} // namespace stb
} // namespace JStudio

#endif
