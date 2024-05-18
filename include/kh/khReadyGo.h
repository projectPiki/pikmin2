#ifndef _KH_READYGO_H
#define _KH_READYGO_H

#include "og/Screen/DispMember.h"
#include "Screen/screenObj.h"
#include "Screen/Game2DMgr.h"
#include "P2DScreen.h"

struct JKRArchive;

namespace kh {
namespace Screen {
struct DispReadyGo : public og::Screen::DispMemberBase {
	enum GameType {
		TYPE_2PBattle  = 0,
		TYPE_Challenge = 1,
	};

	DispReadyGo()
	{
		mStatus       = ::Screen::Game2DMgr::CHECK2D_ReadyGo_NotFinished;
		mIs2Player    = false;
		mIsFinalFloor = false;
		mGameType     = TYPE_2PBattle;
	}

	virtual u32 getSize() { return sizeof(DispReadyGo); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_KH; }         // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_READY_GO; } // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	int mStatus;        // _08
	bool mIs2Player;    // _0C
	bool mIsFinalFloor; // _0D
	int mGameType;      // _10, see GameType enum
};

struct ObjReadyGo : public ::Screen::ObjBase {
	ObjReadyGo()
	{
		for (int i = 0; i < 2; i++) {
			mScreen[i]    = nullptr;
			mAnim1[i]     = nullptr;
			mAnim2[i]     = nullptr;
			mAnimTime2[i] = 0.0f;
			mAnimTime1[i] = 0.0f;
			mYOffset[i]   = 0.0f;
			mMakeEfx[i]   = false;
		}
		mScreenNum      = 1;
		mIsAnimComplete = false;
		mIsOver         = false;
	}

	virtual ~ObjReadyGo() { }           // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C
	virtual bool doUpdateFadein();      // _50
	virtual bool doUpdate();            // _58
	virtual bool doUpdateFadeout();     // _60
	virtual void doDraw(Graphics& gfx); // _68

	bool updateAnimation();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	P2DScreen::Mgr_tuning* mScreen[2]; // _38
	J2DAnmTransform* mAnim1[2];        // _40
	J2DAnmColor* mAnim2[2];            // _48
	f32 mAnimTime1[2];                 // _50
	f32 mAnimTime2[2];                 // _58
	f32 mYOffset[2];                   // _60
	u8 mMakeEfx[2];                    // _68
	bool mIsAnimComplete;              // _6A
	bool mIsOver;                      // _6B
	int mScreenNum;                    // _6C

	static struct StaticValues {
		inline StaticValues()
		{
			mYOffsetP1  = -120.0f;
			mYOffsetP2  = 120.0f;
			mAnimSpeed  = 0.7f;
			mEfxOffsetX = -12.0f;
			mEfxOffsetY = -22.0f;
		}

		f32 mAnimSpeed;  // _00
		f32 mYOffsetP1;  // _04
		f32 mYOffsetP2;  // _08
		f32 mEfxOffsetX; // _0C
		f32 mEfxOffsetY; // _10
		f32 _14;         // _14
	} msVal;
};

struct SceneReadyGo : public ::Screen::SceneBase {
	virtual const char* getResName() const { return "ready_go.szs"; }             // _1C (weak)
	virtual bool isUseBackupSceneInfo() { return true; }                          // _14 (weak)
	virtual SceneType getSceneType() { return SCENE_READY_GO; }                   // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_KH; }                       // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_READY_GO; }              // _10 (weak)
	virtual void doCreateObj(JKRArchive* arc) { registObj(new ObjReadyGo, arc); } // _20 (weak)
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&);                       // _30

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};
} // namespace Screen
} // namespace kh

#endif
