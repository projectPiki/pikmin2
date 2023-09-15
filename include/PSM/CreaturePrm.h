#ifndef _PSM_CREATUREPRM_H
#define _PSM_CREATUREPRM_H

#include "PSSystem/PSCommon.h"

namespace PSM {
struct CreaturePrm : public PSSystem::SingletonBase<CreaturePrm> {
	CreaturePrm(); // inlined/unused

	virtual ~CreaturePrm(); // _08 (weak)

	// _00 = VTBL
};
} // namespace PSM

#endif
