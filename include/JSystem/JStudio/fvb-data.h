#ifndef _JSTUDIO_FVB_DATA_H
#define _JSTUDIO_FVB_DATA_H

#include "JSystem/JGadget/binary.h"

namespace JStudio {
namespace fvb {
namespace data {

extern const char ga4cSignature[4];

const int PARAGRAPH_DATA = 1;

typedef enum TEComposite {
	COMPOSITE_NONE  = 0,
	COMPOSITE_RAW   = 1,
	COMPOSITE_IDX   = 2,
	COMPOSITE_PARAM = 3,
	COMPOSITE_ADD   = 4,
	COMPOSITE_SUB   = 5,
	COMPOSITE_MUL   = 6,
	COMPOSITE_DIV   = 7,
	COMPOSITE_ENUM_SIZE, // 8
};

struct TBlock {
	u32 mSize;   // _00
	u16 mType;   // _04
	u16 mIDSize; // _06
	u8 mID[0];   // _08
};

struct THeader {
	char mSignature[4]; // _00
	u16 mByteOrder;     // _04, must be 0xFEFF
	u16 mVersion;       // _06, 0-1 = obselete, 2-7 = OK
	u32 _08;            // _08
	u32 mBlockNumber;   // _0C
	u8 mContent[0];     // _10
};

} // namespace data
} // namespace fvb
} // namespace JStudio

#endif
