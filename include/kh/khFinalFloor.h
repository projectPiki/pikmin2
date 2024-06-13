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
	DispFinalFloor() { mIs2Player = false; }

	virtual u32 getSize() { return sizeof(DispFinalFloor); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_KH; }            // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_FINAL_FLOOR; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	bool mIs2Player; // _08
};

struct ObjFinalFloor : public ::Screen::ObjBase {
	ObjFinalFloor()
	{
		mScreen[0]    = nullptr;
		mAnim1[0]     = nullptr;
		mAnim2[0]     = nullptr;
		mAnimTime2[0] = 0.0f;
		mAnimTime1[0] = 0.0f;
		mYOffset[0]   = 0.0f;

		mScreen[1]    = nullptr;
		mAnim1[1]     = nullptr;
		mAnim2[1]     = nullptr;
		mAnimTime2[1] = 0.0f;
		mAnimTime1[1] = 0.0f;
		mYOffset[1]   = 0.0f;

		mViewportCount = 1;
		mSound         = nullptr;
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
		PSStart2DStream(P2_STREAM_SOUND_ID(PSSTR_FINAL_FLOOR));
		PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
		PSSystem::validateSceneMgr(mgr);
		PSM::Scene_Game* scene = static_cast<PSM::Scene_Game*>(mgr->getChildScene());
		PSSystem::checkGameScene(scene);
		scene->onStartMainSeq();
	}

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	P2DScreen::Mgr_tuning* mScreen[2]; // _38
	J2DAnmTransform* mAnim1[2];        // _40
	J2DAnmColor* mAnim2[2];            // _48
	f32 mAnimTime1[2];                 // _50
	f32 mAnimTime2[2];                 // _58
	f32 mYOffset[2];                   // _60
	int mViewportCount;                // _68
	JAISound* mSound;                  // _6C

	static struct StaticValues {
		inline StaticValues()
		{
			mYOffsetP1 = -120.0f;
			mYOffsetP2 = 120.0f;
			mAnimSpeed = 0.8f;
		}

		f32 mAnimSpeed; // _00
		f32 mYOffsetP1; // _04
		f32 mYOffsetP2; // _08
	} msVal;
};

struct SceneFinalFloor : public ::Screen::SceneBase {
	inline SceneFinalFloor()
	    : mObjFinalFloor(nullptr)
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
		mObjFinalFloor     = obj;
		registObj(obj, arc);
	}
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&); // _30

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	ObjFinalFloor* mObjFinalFloor; // _220
};

inline void finalFloorStopSound(SceneFinalFloor* scene)
{
	P2ASSERTLINE(124, scene->mObjFinalFloor);
	scene->mObjFinalFloor->stopSound();
}

inline void finalFloorRestartSound(SceneFinalFloor* scene)
{
	P2ASSERTLINE(125, scene->mObjFinalFloor);
	scene->mObjFinalFloor->restartSound();
}
} // namespace Screen
} // namespace kh

#endif
