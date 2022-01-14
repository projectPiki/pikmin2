#ifndef _PSSYSTEM_BANKRANDPRM_H
#define _PSSYSTEM_BANKRANDPRM_H

#include "JSystem/JAS/JASInstEffect.h"
#include "types.h"

namespace PSSystem {
struct BankRandPrm {
	BankRandPrm();

	JASInstRand m_inst;

	static BankRandPrm* sInstance;
};
} // namespace PSSystem

#endif
