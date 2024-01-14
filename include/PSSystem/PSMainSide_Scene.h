#ifndef _PSSYSTEM_PSMAINSIDE_SCENE_H
#define _PSSYSTEM_PSMAINSIDE_SCENE_H

#include "P2Macros.h"
#include "PSSystem/PSScene.h"
#include "PSM/Scene.h"

namespace PSSystem {
inline PSM::SceneBase* checkGameScene(Scene* scene) { P2ASSERTLINE(375, scene->toSceneBase()->isGameScene()); }
}; // namespace PSSystem

#endif
