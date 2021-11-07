#ifndef _JADUTILITY_STRPRM_H
#define _JADUTILITY_STRPRM_H

namespace JADUtility {
struct StrPrm {
	virtual ~StrPrm();                         // _00
	virtual void save(JSUMemoryOutputStream&); // _04
	virtual void load(JSUMemoryInputStream&);  // _08

	// _00 VTBL
};
} // namespace JADUtility

#endif
