#ifndef _MORIMURA_GAMEOVER_H
#define _MORIMURA_GAMEOVER_H

#include "Morimura/Bases.h"
#include "Morimura/mrUtil.h"
#include "P2DScreen.h"
#include "Game/Navi.h"

namespace Morimura {
void addYPos(J2DPane*, f32);

struct TGameOverScreen {
	TGameOverScreen(JKRArchive*, int);

	void init(const char*, u32);
	void setPosY(f32);
	void addAnim(char*);
	void update();
	void draw(Graphics&, J2DPerspGraph*);
	void orgdraw(Graphics&, J2DPerspGraph*);
	void setFadeAlpha(u8);

	JKRArchive* mArchive;                // _00
	P2DScreen::Mgr_tuning* mScreen;      // _04
	og::Screen::AnimScreen** mAnimList;  // _08
	TGXSetPane* mGXPane;                 // _0C
	int mAnimCountMax;                   // _10
	int mAnimCountCurrent;               // _14
	P2DScreen::Mgr_tuning* mScreen2;     // _18
	og::Screen::AnimScreen** mAnimList2; // _1C
};

struct TGameOverBase : public TTestBase {
	TGameOverBase(char* name);

	// virtual ~TGameOverBase() { }                                                                // _08 (weak)
	virtual bool doUpdate();                                                                    // _58
	virtual void doDraw(Graphics& gfx);                                                         // _68
	virtual og::Screen::DispMemberBase* getDispMemberBase() { return mDisp; }                   // _78 (weak)
	virtual bool doUpdateFadeout() { return mIsSection ? TTestBase::doUpdateFadeout() : true; } // _60 (weak)

	// unused/inline
	void init();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_78 = TTestBase
	JKRArchive* mArchive;              // _78
	TGameOverScreen* mGameOverScreen;  // _7C
	og::Screen::DispMemberBase* mDisp; // _80
	u8 mFadeAlpha;                     // _84
	bool mDoOrgDraw;                   // _85
	s16 mTimer;                        // _86
	u32 mType;                         // _88
	s16 mTimeSpeed;                    // _8C
	s16 mMaxTime;                      // _8E
};

struct TGameOver2D : public TGameOverBase {
	TGameOver2D()
	    : TGameOverBase("GameOver")
	{
	}

	// virtual ~TGameOver2D() { }          // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_90 = TGameOverBase
};

struct TLujiDown2D : public TGameOverBase {
	TLujiDown2D()
	    : TGameOverBase("LujiDown")
	{
	}

	// virtual ~TLujiDown2D() { }          // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_90 = TGameOverBase
};

struct TOrimaDown2D : public TGameOverBase {
	TOrimaDown2D()
	    : TGameOverBase("OrimaDown")
	{
	}

	// virtual ~TOrimaDown2D() { }         // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_90 = TGameOverBase
};

struct TPikminDown2D : public TGameOverBase {
	TPikminDown2D()
	    : TGameOverBase("PikminDown")
	{
	}

	// virtual ~TPikminDown2D() { }        // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_90 = TGameOverBase
};

struct TPresidentDown2D : public TGameOverBase {
	TPresidentDown2D()
	    : TGameOverBase("PresidentDown")
	{
	}

	// virtual ~TPresidentDown2D() { }     // _08 (weak)
	virtual void doCreate(JKRArchive*); // _4C

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_90 = TGameOverBase
};

struct TGameOverSceneBase : public THIOScene {
	virtual bool isUseBackupSceneInfo()
	{
		if (Game::naviMgr) {
			return u8(Game::naviMgr->getAliveCount() >= 1);
		}
		return true;
	} // _14

	// _00      = VTBL
	// _00-_224 = THIOScene
	// treat _220 as TGameOverBase
};

struct TGameOverScene : public TGameOverSceneBase {
	virtual const char* getResName() const { return "res_gameover.szs"; } // _1C (weak)
	virtual void doCreateObj(JKRArchive* arc)
	{
		TGameOver2D* obj = new TGameOver2D;
		registObj(obj, arc);
		mObject = obj;
	}                                                                    // _20 (weak)
	virtual bool isUseBackupSceneInfo() { return false; }                // _14 (weak)
	virtual SceneType getSceneType() { return SCENE_GAME_OVER_GENERAL; } // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_MRMR; }            // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_GAME_OVER; }    // _10 (weak)

	// _00      = VTBL
	// _00-_224 = TGameOverSceneBase
	// treat _220 as TGameOver2D
};

struct TLujiDownScene : public TGameOverSceneBase {
	virtual const char* getResName() const { return "gameover_louie.szs"; } // _1C (weak)
	virtual void doCreateObj(JKRArchive* arc)
	{
		TLujiDown2D* obj = new TLujiDown2D;
		registObj(obj, arc);
		mObject = obj;
	}                                                                 // _20 (weak)
	virtual SceneType getSceneType() { return SCENE_LUJI_DOWN; }      // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_MRMR; }         // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_GAME_OVER; } // _10 (weak)

	// _00      = VTBL
	// _00-_224 = TGameOverSceneBase
	// treat _220 as TLujiDown2D
};

struct TOrimaDownScene : public TGameOverSceneBase {
	virtual const char* getResName() const { return "res_orimadown.szs"; } // _1C (weak)
	virtual void doCreateObj(JKRArchive* arc)
	{
		TOrimaDown2D* obj = new TOrimaDown2D;
		registObj(obj, arc);
		mObject = obj;
	}                                                                 // _20 (weak)
	virtual SceneType getSceneType() { return SCENE_ORIMA_DOWN; }     // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_MRMR; }         // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_GAME_OVER; } // _10 (weak)

	// _00      = VTBL
	// _00-_224 = TGameOverSceneBase
	// treat _220 as TOrimaDown2D
};

struct TPikminDownScene : public TGameOverSceneBase {
	virtual const char* getResName() const { return "res_pikmindown.szs"; } // _1C (weak)
	virtual void doCreateObj(JKRArchive* arc)
	{
		TPikminDown2D* obj = new TPikminDown2D;
		registObj(obj, arc);
		mObject = obj;
	}                                                                    // _20 (weak)
	virtual bool isUseBackupSceneInfo() { return false; }                // _14 (weak)
	virtual SceneType getSceneType() { return SCENE_GAME_OVER_GENERAL; } // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_MRMR; }            // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_GAME_OVER; }    // _10 (weak)

	// _00      = VTBL
	// _00-_224 = TGameOverSceneBase
	// treat _220 as TPikminDown2D
};

struct TPresidentDownScene : public TGameOverSceneBase {
	virtual const char* getResName() const { return "res_presidentdown.szs"; } // _1C (weak)
	virtual void doCreateObj(JKRArchive* arc)
	{
		TPresidentDown2D* obj = new TPresidentDown2D;
		registObj(obj, arc);
		mObject = obj;
	}                                                                 // _20 (weak)
	virtual SceneType getSceneType() { return SCENE_PRESIDENT_DOWN; } // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_MRMR; }         // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_GAME_OVER; } // _10 (weak)

	// _00      = VTBL
	// _00-_224 = TGameOverSceneBase
	// treat _220 as TPresidentDown2D
};

} // namespace Morimura

#endif
