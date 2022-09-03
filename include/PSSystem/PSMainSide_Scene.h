#ifndef _PSSYSTEM_PSMAINSIDE_SCENE_H
#define _PSSYSTEM_PSMAINSIDE_SCENE_H

#include "JSystem/JUT/JUTException.h"
#include "PSSystem/PSScene.h"
#include "PSM/Scene.h"

// idk what else goes in this file (if anything? maybe this is in the PSGame folder??)
// but these use the file name in the exception check so :shrug:
namespace PSSystem {
inline void checkGameScene(PSM::SceneBase* scene) { P2ASSERTLINE(375, scene->isGameScene()); }

}; // namespace PSSystem

#endif
