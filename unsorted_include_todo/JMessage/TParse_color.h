#ifndef _JMESSAGE_TPARSE_COLOR_H
#define _JMESSAGE_TPARSE_COLOR_H

namespace JMessage {
struct TParse_color {
	virtual ~TParse_color(); // _00
	virtual void parseHeader_next(const void**, unsigned long*,
	                              unsigned long); // _04
	virtual void parseBlock_next(const void**, unsigned long*,
	                             unsigned long); // _08

	// _00 VTBL
};
} // namespace JMessage

#endif
