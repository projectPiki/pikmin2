#ifndef _JADUTILITY_STREDITBOX_H
#define _JADUTILITY_STREDITBOX_H

namespace JADUtility {
struct StrPrm {
	virtual void _00() = 0;                    // _00
	virtual void save(JSUMemoryOutputStream&); // _04
	virtual void load(JSUMemoryInputStream&);  // _08

	// _00 VTBL
};
} // namespace JADUtility

namespace JADUtility {
struct StrEditBox : public StrPrm {
	virtual ~StrEditBox();                     // _00
	virtual void save(JSUMemoryOutputStream&); // _04
	virtual void load(JSUMemoryInputStream&);  // _08

	// _00 VTBL
};
} // namespace JADUtility

#endif
