#ifndef _JSTUDIO_TPARSE_H
#define _JSTUDIO_TPARSE_H

namespace JStudio {
struct TParse {
	virtual ~TParse(); // _00
	virtual void parseHeader_next(const void**, unsigned long*,
	                              unsigned long); // _04
	virtual void parseBlock_next(const void**, unsigned long*,
	                             unsigned long); // _08
	virtual void parseHeader(const stb::data::TParse_THeader&,
	                         unsigned long); // _0C
	virtual void parseBlock_block(const stb::data::TParse_TBlock&,
	                              unsigned long); // _10
	virtual void parseBlock_object(const data::TParse_TBlock_object&,
	                               unsigned long); // _14

	// _00 VTBL
};
} // namespace JStudio

#endif
