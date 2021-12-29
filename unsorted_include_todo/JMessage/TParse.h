#ifndef _JMESSAGE_TPARSE_H
#define _JMESSAGE_TPARSE_H

/*
    __vt__Q28JMessage6TParse:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28JMessage6TParseFv
    .4byte parseHeader_next__Q28JMessage6TParseFPPCvPUlUl
    .4byte parseBlock_next__Q28JMessage6TParseFPPCvPUlUl
*/

namespace JMessage {
struct TParse {
	virtual ~TParse(); // _00
	virtual void parseHeader_next(const void**, unsigned long*,
	                              unsigned long); // _04
	virtual void parseBlock_next(const void**, unsigned long*,
	                             unsigned long); // _08

	// _00 VTBL
};
} // namespace JMessage

#endif
