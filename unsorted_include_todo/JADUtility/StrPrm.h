#ifndef _JADUTILITY_STRPRM_H
#define _JADUTILITY_STRPRM_H

/*
    __vt__Q210JADUtility6StrPrm:
    .4byte 0
    .4byte 0
    .4byte __dt__Q210JADUtility6StrPrmFv
    .4byte save__Q210JADUtility6StrPrmFR21JSUMemoryOutputStream
    .4byte load__Q210JADUtility6StrPrmFR20JSUMemoryInputStream
*/

namespace JADUtility {
struct StrPrm {
	virtual ~StrPrm();                         // _08
	virtual void save(JSUMemoryOutputStream&); // _0C
	virtual void load(JSUMemoryInputStream&);  // _10

	// _00 VTBL
};
} // namespace JADUtility

#endif
