#ifndef _KH_FINALFLOOR_H
#define _KH_FINALFLOOR_H

#include "kh/khUtil.h"
#include "og/Screen/DispMember.h"
#include "og/Screen/callbackNodes.h"
#include "Screen/screenObj.h"
#include "P2DScreen.h"
#include "utilityU.h"
#include "PSSystem/PSGame.h"
#include "PSSystem/PSMainSide_Scene.h"

struct JAISound;

namespace kh {
namespace Screen {
struct DispFinalFloor : public og::Screen::DispMemberBase {
	DispFinalFloor() { m_is2Player = false; }

	virtual u32 getSize() { return sizeof(DispFinalFloor); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_KH; }            // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_FINAL_FLOOR; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	bool m_is2Player; // _08
};

struct ObjFinalFloor : public ::Screen::ObjBase {
	ObjFinalFloor()
	{
		m_screen[0]    = nullptr;
		m_anim1[0]     = nullptr;
		m_anim2[0]     = nullptr;
		m_animTime2[0] = 0.0f;
		m_animTime1[0] = 0.0f;
		m_yOffset[0]   = 0.0f;

		m_screen[1]    = nullptr;
		m_anim1[1]     = nullptr;
		m_anim2[1]     = nullptr;
		m_animTime2[1] = 0.0f;
		m_animTime1[1] = 0.0f;
		m_yOffset[1]   = 0.0f;

		m_screenNum = 1;
		m_sound     = nullptr;
	}

	virtual ~ObjFinalFloor() { }          // _08 (weak)
	virtual void doCreate(JKRArchive*);   // _4C
	virtual bool doUpdateFadein();        // _50
	virtual bool doUpdate();              // _58
	virtual bool doUpdateFadeout();       // _60
	virtual void doUpdateFadeoutFinish(); // _64
	virtual void doDraw(Graphics& gfx);   // _68

	bool updateAnimation();
	void stopSound();
	void restartSound();

	inline void startBGM()
	{
		PSStart2DStream(0xc0011025);
		PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
		PSSystem::checkSceneMgr(mgr);
		PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(mgr->getChildScene());
		PSSystem::checkGameScene(scene);
		scene->onStartMainSeq();
	}

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	P2DScreen::Mgr_tuning* m_screen[2]; // _38
	J2DAnmTransform* m_anim1[2];        // _40
	J2DAnmColor* m_anim2[2];            // _48
	f32 m_animTime1[2];                 // _50
	f32 m_animTime2[2];                 // _58
	f32 m_yOffset[2];                   // _60
	int m_screenNum;                    // _68
	JAISound* m_sound;                  // _6C

	static struct StaticValues {
		inline StaticValues()
		{
			m_yOffsetP1 = -120.0f;
			m_yOffsetP2 = 120.0f;
			m_animSpeed = 0.8f;
		}

		f32 m_animSpeed; // _00
		f32 m_yOffsetP1; // _04
		f32 m_yOffsetP2; // _08
	} msVal;
};

struct SceneFinalFloor : public ::Screen::SceneBase {
	inline SceneFinalFloor()
	    : m_objFinalFloor(nullptr)
	{
	}

	virtual const char* getResName() const { return "final_floor.szs"; } // _1C (weak)
	virtual bool isUseBackupSceneInfo() { return true; }                 // _14 (weak)
	virtual SceneType getSceneType() { return SCENE_FINAL_FLOOR; }       // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_KH; }              // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_FINAL_FLOOR; }  // _10 (weak)
	virtual void doCreateObj(JKRArchive* arc)                            // _20 (weak)
	{
		ObjFinalFloor* obj = new ObjFinalFloor;
		m_objFinalFloor    = obj;
		registObj(obj, arc);
	}
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&); // _30

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	ObjFinalFloor* m_objFinalFloor; // _220
};

inline void finalFloorStopSound(SceneFinalFloor* scene)
{
	P2ASSERTLINE(124, scene->m_objFinalFloor);
	scene->m_objFinalFloor->stopSound();
}

inline void finalFloorRestartSound(SceneFinalFloor* scene)
{
	P2ASSERTLINE(125, scene->m_objFinalFloor);
	scene->m_objFinalFloor->restartSound();
}
} // namespace Screen
} // namespace kh

#endif