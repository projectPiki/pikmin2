#ifndef _JSTUDIO_FVB_TPARSE_H
#define _JSTUDIO_FVB_TPARSE_H

namespace JStudio {
namespace fvb {
	struct TParse {
		virtual ~TParse(); // _00
		virtual void parseHeader_next(const void**, unsigned long*,
		                              unsigned long); // _04
		virtual void parseBlock_next(const void**, unsigned long*,
		                             unsigned long); // _08

		// _00 VTBL
	};
} // namespace fvb
} // namespace JStudio

#endif
