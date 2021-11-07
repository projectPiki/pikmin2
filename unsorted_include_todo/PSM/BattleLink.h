#ifndef _PSM_BATTLELINK_H
#define _PSM_BATTLELINK_H

namespace PSM {
struct BattleLink {
	virtual void battleOn();  // _00
	virtual void battleOff(); // _04

	// _00 VTBL
};
} // namespace PSM

#endif
