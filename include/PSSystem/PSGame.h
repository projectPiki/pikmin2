#ifndef _PSSYSTEM_PSGAME_H
#define _PSSYSTEM_PSGAME_H

#include "JSystem/JUT/JUTException.h"
#include "PSSystem/PSScene.h"

struct JASTrack;

// this can stay for the moment but it's on thin ice
namespace PSSystem {
inline SceneMgr* getSceneMgr()
{
	P2ASSERTLINE(467, spSceneMgr);
	return spSceneMgr;
}
}; // namespace PSSystem

#endif
