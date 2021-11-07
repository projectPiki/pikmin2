#ifndef _PSSYSTEM_BANKRANDTASK_H
#define _PSSYSTEM_BANKRANDTASK_H

namespace PSSystem {
struct ModParamWithFade {
	virtual void task(JASTrack&); // _00

	// _00 VTBL
};
} // namespace PSSystem

namespace PSSystem {
struct BankRandTask : public ModParamWithFade {
	virtual void task(JASTrack&);            // _00
	virtual void getPreParam(JASTrack&);     // _04
	virtual void timeTask(JASTrack&, float); // _08

	// _00 VTBL
};
} // namespace PSSystem

#endif
