#ifndef _PSM_BATTLELINK_H
#define _PSM_BATTLELINK_H

#include "JSystem/JSupport/JSUList.h"

namespace PSM {
/**
 * @size{0x14}
 */
struct BattleLink : public JSUPtrLink {
	virtual void battleOn();  // _00
	virtual void battleOff(); // _04

	// VTBL _10
};
} // namespace PSM

#endif
