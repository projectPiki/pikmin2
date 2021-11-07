#ifndef _JADUTILITY_PRMSETBASE_H
#define _JADUTILITY_PRMSETBASE_H

namespace JADUtility {
struct PrmSetBase {
	virtual ~PrmSetBase();                              // _00
	virtual void appendAfter();                         // _04
	virtual void load(JSUMemoryInputStream&);           // _08
	virtual void afterRemovingChildButton(PrmSetBase*); // _0C
	virtual void afterRemovingThisButton(PrmSetBase*);  // _10
	virtual void getEraseLink();                        // _14
	virtual void afterGetFromFree();                    // _18

	// _00 VTBL
};
} // namespace JADUtility

#endif
