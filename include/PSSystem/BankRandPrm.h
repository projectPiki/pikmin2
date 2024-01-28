#ifndef _PSSYSTEM_BANKRANDPRM_H
#define _PSSYSTEM_BANKRANDPRM_H

#include "JSystem/JAudio/JAS/JASInst.h"
#include "types.h"

namespace PSSystem {
struct BankRandPrm {
	BankRandPrm();

	inline static void createInstance()
	{
		if (!sInstance)
			sInstance = new BankRandPrm;
	}

	JASInstRand mInst; // _00

	static BankRandPrm* sInstance;
};
} // namespace PSSystem

#endif
