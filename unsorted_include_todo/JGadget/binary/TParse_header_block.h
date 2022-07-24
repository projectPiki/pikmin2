#ifndef _JGADGET_BINARY_TPARSE_HEADER_BLOCK_H
#define _JGADGET_BINARY_TPARSE_HEADER_BLOCK_H

/*
    __vt__Q37JGadget6binary19TParse_header_block:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

namespace JGadget {
namespace binary {
struct TParse_header_block {
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C
	virtual void _10() = 0; // _10

	~TParse_header_block();
	void parse_next(const void**, unsigned long);
};
} // namespace binary
} // namespace JGadget

#endif
