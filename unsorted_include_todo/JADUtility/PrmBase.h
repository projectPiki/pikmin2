#ifndef _JADUTILITY_PRMBASE_H
#define _JADUTILITY_PRMBASE_H

namespace JADUtility {
struct PrmBase {
	virtual ~PrmBase();                        // _00
	virtual void save(JSUMemoryOutputStream&); // _04
	virtual void load(JSUMemoryInputStream&);  // _08

	// _00 VTBL
};
} // namespace JADUtility

#endif
