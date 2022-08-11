#ifndef _PSM_BATTLELINK_H
#define _PSM_BATTLELINK_H

#include "JSystem/JSupport/JSUList.h"

namespace PSM {
/**
 * @size{0x14}
 */
struct BattleLink : public JSUPtrLink {
	virtual void battleOn();  // _08
	virtual void battleOff(); // _0C

	// VTBL _10
};
} // namespace PSM

#endif
