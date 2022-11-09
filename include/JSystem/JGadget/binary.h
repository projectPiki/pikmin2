#ifndef _JSYSTEM_JGADGET_BINARY_H
#define _JSYSTEM_JGADGET_BINARY_H

#include "types.h"

namespace JGadget {
namespace binary {
struct TEBit {
	u32 _00; // _00
};

struct TParse_header_block {
	inline TParse_header_block() { }

	virtual ~TParse_header_block()                         = 0; // _08
	virtual bool parseHeader_next(const void**, u32*, u32) = 0; // _0C
	virtual bool parseBlock_next(const void**, u32*, u32)  = 0; // _10

	bool parse_next(void const**, u32);
};

extern u16* parseVariableUInt_16_32_following(void const*, u32*, u32*, TEBit*);

} // namespace binary
} // namespace JGadget

#endif
