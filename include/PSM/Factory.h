#ifndef _PSM_FACTORY_H
#define _PSM_FACTORY_H

#include "PSM/Scene.h"

namespace PSM {
struct Factory {
	virtual SceneMgr* newSceneMgr(); // _08 (weak)

	// _00 = VTBL
};
} // namespace PSM

#endif
