#ifndef _PSM_BATTLELINK_H
#define _PSM_BATTLELINK_H

#include "JSystem/JSupport/JSUList.h"

namespace PSM {
/**
 * @size{0x14}
 */
struct BattleLink : public JSULink<BattleLink> {
	virtual void battleOn();  // _08
	virtual void battleOff(); // _0C

	// _10     = VTBL
	// _00-_10 = JSULink
};
} // namespace PSM

#endif
