#ifndef _JSYSTEM_JGADGET_BINARY_H
#define _JSYSTEM_JGADGET_BINARY_H

#include "types.h"

namespace JGadget {
// Unsure if a struct or namespace
namespace binary {
struct TEBit {
};

struct TParse_header_block {
	virtual ~TParse_header_block();
	void parse_next(void const**, u32);
};

extern u16* parseVariableUInt_16_32_following(void const*, u32*, u32*, TEBit*);

} // namespace binary
} // namespace JGadget

#endif
