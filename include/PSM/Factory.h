#ifndef _PSM_FACTORY_H
#define _PSM_FACTORY_H

#include "PSM/Scene.h"
#include "PSGame/SysFactory.h"

namespace PSM {
struct Factory : PSGame::SysFactory {
	virtual SceneMgr* newSceneMgr() { return new SceneMgr; } // _08 (weak)

	// _00 = VTBL
};
} // namespace PSM

#endif
