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
	virtual ~StrPrm();                         // _08 (weak)
	virtual void save(JSUMemoryOutputStream&); // _0C (weak)
	virtual void load(JSUMemoryInputStream&);  // _10 (weak)
};
} // namespace JADUtility

namespace JADUtility {
struct StrEditBox : public StrPrm {
	virtual ~StrEditBox(); // _08 (weak)
};
} // namespace JADUtility

#endif
