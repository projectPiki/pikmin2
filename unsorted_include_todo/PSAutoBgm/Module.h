#ifndef _PSAUTOBGM_MODULE_H
#define _PSAUTOBGM_MODULE_H

/*
    __vt__Q29PSAutoBgm6Module:
    .4byte 0
    .4byte 0
    .4byte __dt__Q29PSAutoBgm6ModuleFv
    .4byte appendAfter__Q210JADUtility10PrmSetBaseFv
    .4byte load__Q210JADUtility10PrmSetBaseFR20JSUMemoryInputStream
    .4byte
   afterRemovingChildButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
    .4byte
   afterRemovingThisButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
    .4byte getEraseLink__Q210JADUtility10PrmSetBaseFv
    .4byte afterGetFromFree__Q29PSAutoBgm6ModuleFv
*/

namespace JADUtility {
struct PrmSetBase {
	virtual ~PrmSetBase();                              // _00
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
