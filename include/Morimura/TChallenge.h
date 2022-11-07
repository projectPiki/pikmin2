#ifndef _MORIMURA_TCHALLENGE_H
#define _MORIMURA_TCHALLENGE_H

#include "Morimura/DayEndCount.h"

namespace Morimura {
struct TChallengeEndCount : public TDayEndCount {
	TChallengeEndCount();

	virtual ~TChallengeEndCount();      // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_D4 = TDayEndCount
};

struct TChallengeEndCount1p : public TChallengeEndCount {
	TChallengeEndCount1p();

	virtual ~TChallengeEndCount1p(); // _08 (weak)
	virtual bool doUpdate();         // _58

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_D4 = TChallengeEndCount
};

struct TChallengeEndCount2p : public TChallengeEndCount {
	TChallengeEndCount2p();

	virtual ~TChallengeEndCount2p(); // _08 (weak)
	virtual bool doUpdate();         // _58

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_D4 = TChallengeEndCount
};
} // namespace Morimura

#endif
