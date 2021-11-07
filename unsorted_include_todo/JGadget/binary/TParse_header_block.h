#ifndef _JGADGET_BINARY_TPARSE_HEADER_BLOCK_H
#define _JGADGET_BINARY_TPARSE_HEADER_BLOCK_H

namespace JGadget {
namespace binary {
	struct TParse_header_block {
		virtual void _00() = 0; // _00
		virtual void _04() = 0; // _04
		virtual void _08() = 0; // _08

		// _00 VTBL
	};
} // namespace binary
} // namespace JGadget

#endif
