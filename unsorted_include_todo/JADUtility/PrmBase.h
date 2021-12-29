#ifndef _JADUTILITY_PRMBASE_H
#define _JADUTILITY_PRMBASE_H

/*
    __vt__Q210JADUtility7PrmBase:
    .4byte 0
    .4byte 0
    .4byte __dt__Q210JADUtility7PrmBaseFv
    .4byte save__Q210JADUtility7PrmBaseFR21JSUMemoryOutputStream
    .4byte load__Q210JADUtility7PrmBaseFR20JSUMemoryInputStream
*/

namespace JADUtility {
struct PrmBase {
	virtual ~PrmBase();                        // _00
	virtual void save(JSUMemoryOutputStream&); // _04
	virtual void load(JSUMemoryInputStream&);  // _08

	// _00 VTBL
};
} // namespace JADUtility

#endif
