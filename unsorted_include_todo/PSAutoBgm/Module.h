#ifndef _PSAUTOBGM_MODULE_H
#define _PSAUTOBGM_MODULE_H

/*
    __vt__Q29PSAutoBgm6Module:
    .4byte 0
    .4byte 0
    .4byte __dt__Q29PSAutoBgm6ModuleFv
    .4byte appendAfter__Q210JADUtility10PrmSetBaseFv
    .4byte load__Q210JADUtility10PrmSetBaseFR20JSUMemoryInputStream
    .4byte afterRemovingChildButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
    .4byte afterRemovingThisButton__Q210JADUtility10PrmSetBaseFPQ210JADUtility10PrmSetBase
    .4byte getEraseLink__Q210JADUtility10PrmSetBaseFv
    .4byte afterGetFromFree__Q29PSAutoBgm6ModuleFv
*/

namespace JADUtility {
struct PrmSetBase {
	virtual ~PrmSetBase();                              // _08
	virtual void appendAfter();                         // _0C (inline)
	virtual void load(JSUMemoryInputStream&);           // _10
	virtual void afterRemovingChildButton(PrmSetBase*); // _14 (inline)
	virtual void afterRemovingThisButton(PrmSetBase*);  // _18 (inline)
	virtual void getEraseLink();                        // _1C (inline)
};
} // namespace JADUtility

namespace PSAutoBgm {
struct Module : public PrmSetBase {
	virtual ~Module();               // _08
	virtual void afterGetFromFree(); // _20

	Module();
	void removeCallback(unsigned char, void*);
	void seqCpuSync_AutoBgm_Module(JASTrack*, unsigned short, unsigned long, JASTrack*);
	void setTableAddress(JASTrack*);
	void cycleLoop(JASTrack*);
};
} // namespace PSAutoBgm

#endif
