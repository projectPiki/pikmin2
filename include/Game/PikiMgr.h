#ifndef _GAME_PIKIMGR_H
#define _GAME_PIKIMGR_H

#include "types.h"

#include "CNode.h"
#include "MonoObjectMgr.h"

#include "Game/Piki.h"

struct J3DModelData;
struct PikiParms;
struct ModelMgr;
struct UpdateMgr;
struct JKRArchive;

namespace Game {
struct PikiMgr : public MonoObjectMgr<Game::Piki> {
	s32 m_dopedPikis;               // _30
	s32* m_storedPikis;             // _34
	byte m_flags[4];                // _38
	J3DModelData* m_bluPikiModel;   // _3C, blue
	J3DModelData* m_redPikiModel;   // _40, red
	J3DModelData* m_yelPikiModel;   // _44, yellow
	J3DModelData* m_prpPikiModel;   // _48, purple
	J3DModelData* m_wtePikiModel;   // _4C, white
	J3DModelData* m_blbPikiModel;   // _50, bulbmin
	J3DModelData* m_crtPikiModel;   // _54, carrot
	J3DModelData* m_leafModel;      // _58
	J3DModelData* m_budModel;       // _5C
	J3DModelData* m_flowerModel;    // _60
	J3DModelData* m_redBudModel;    // _64
	J3DModelData* m_redFlowerModel; // _68
	PikiParms* m_parms;             // _6C
	ModelMgr* m_modelMgr;           // _70
	UpdateMgr* m_updateMgr;         // _74
	UpdateMgr* m_updateMgr2;        // _78, unsure of type
	JKRArchive* m_modelArchive;     // _7C
};
} // namespace Game

#endif
