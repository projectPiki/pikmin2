#ifndef _JSTUDIO_FVB_TPARSE_H
#define _JSTUDIO_FVB_TPARSE_H

/*
    __vt__Q37JStudio3fvb6TParse:
    .4byte 0
    .4byte 0
    .4byte __dt__Q37JStudio3fvb6TParseFv
    .4byte parseHeader_next__Q37JStudio3fvb6TParseFPPCvPUlUl
    .4byte parseBlock_next__Q37JStudio3fvb6TParseFPPCvPUlUl
*/

namespace JStudio {
namespace fvb {
struct TParse {
	virtual ~TParse();                                                          // _08
	virtual void parseHeader_next(const void**, unsigned long*, unsigned long); // _0C
	virtual void parseBlock_next(const void**, unsigned long*, unsigned long);  // _10

	// _00 VTBL
};
} // namespace fvb
} // namespace JStudio

#endif
