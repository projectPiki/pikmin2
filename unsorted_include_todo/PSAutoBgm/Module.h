#ifndef _PSAUTOBGM_MODULE_H
#define _PSAUTOBGM_MODULE_H

namespace JADUtility {
struct PrmSetBase {
	virtual void _00() = 0;                             // _00
	virtual void appendAfter();                         // _04
	virtual void load(JSUMemoryInputStream&);           // _08
	virtual void afterRemovingChildButton(PrmSetBase*); // _0C
	virtual void afterRemovingThisButton(PrmSetBase*);  // _10
	virtual void getEraseLink();                        // _14

	// _00 VTBL
};
} // namespace JADUtility

namespace PSAutoBgm {
struct Module : public PrmSetBase {
	virtual ~Module();                                  // _00
	virtual void appendAfter();                         // _04
	virtual void load(JSUMemoryInputStream&);           // _08
	virtual void afterRemovingChildButton(PrmSetBase*); // _0C
	virtual void afterRemovingThisButton(PrmSetBase*);  // _10
	virtual void getEraseLink();                        // _14
	virtual void afterGetFromFree();                    // _18

	// _00 VTBL
};
} // namespace PSAutoBgm

#endif
