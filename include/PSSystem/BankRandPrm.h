#ifndef _PSSYSTEM_BANKRANDPRM_H
#define _PSSYSTEM_BANKRANDPRM_H

#include "JSystem/JAudio2/JAS/JASInst.h"
#include "types.h"

namespace PSSystem {
struct BankRandPrm {
	BankRandPrm();

	JASInstRand mInst;

	static BankRandPrm* sInstance;
};
} // namespace PSSystem

#endif
