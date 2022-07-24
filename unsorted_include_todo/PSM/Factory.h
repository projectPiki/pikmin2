#ifndef _PSM_FACTORY_H
#define _PSM_FACTORY_H

/*
    __vt__Q23PSM7Factory:
    .4byte 0
    .4byte 0
    .4byte newSceneMgr__Q23PSM7FactoryFv
*/

namespace PSM {
struct Factory {
	virtual void newSceneMgr(); // _08

	// _00 VTBL
};
} // namespace PSM

#endif
