#ifndef _JADUTILITY_STREDITBOX_H
#define _JADUTILITY_STREDITBOX_H

/*
    __vt__Q210JADUtility10StrEditBox:
    .4byte 0
    .4byte 0
    .4byte __dt__Q210JADUtility10StrEditBoxFv
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

namespace JADUtility {
struct StrEditBox : public StrPrm {
	virtual ~StrEditBox(); // _08

	// _00 VTBL
};
} // namespace JADUtility

#endif
