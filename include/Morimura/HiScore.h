#ifndef _MORIMURA_HISCORE_H
#define _MORIMURA_HISCORE_H

#include "og/Screen/DispMember.h"
#include "Morimura/mrUtil.h"
#include "Morimura/ScrollList.h"
#include "JSystem/J2D/J2DTevBlock.h"
#include "JSystem/J2D/J2DColorBlock.h"
#include "og/Screen/StickAnimMgr.h"

namespace Morimura {

struct DispMemberHighScore : public og::Screen::DispMemberBase {
	DispMemberHighScore()
	{
		mImageArchive = nullptr;
		_0C           = false;
	}

	virtual u32 getSize() { return sizeof(DispMemberHighScore); } // _08 (weak)
	virtual u32 getOwnerID() { return OWNER_MRMR; }               // _0C (weak)
	virtual u64 getMemberID() { return MEMBER_HIGH_SCORE; }       // _10 (weak)

	// _00     = VTBL
	// _00-_08 = DispMemberBase
	JKRArchive* mImageArchive; // _08
	bool _0C;                  // _0C
};

struct THiScoreIndPane : public TIndPane {
	THiScoreIndPane(J2DPane* pane)
	    : TIndPane("hi_score_00.bti", pane->getWidth(), pane->getHeight())
	{
	}

	virtual ~THiScoreIndPane() { } // _08 (weak)
	virtual void draw();           // _10

	void setRadius(s16, f32);

	// _00     = VTBL
	// _00-_48 = TIndPane
};

struct THiScoreListScreen : public TListScreen {
	THiScoreListScreen(JKRArchive*, int);
	virtual void create(const char*, u32); // _08
	virtual void update();                 // _0C (weak)

	// _00     = VTBL
	// _00-_18 = TScreenBase
};

struct THiScoreScene : public THIOScene {
	THiScoreScene();

	virtual SceneType getSceneType() { return SCENE_HIGH_SCORE; }        // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_MRMR; }            // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_HIGH_SCORE; }   // _10 (weak)
	virtual const char* getResName() const { return "res_hiscore.szs"; } // _1C
	virtual void doCreateObj(JKRArchive*);                               // _20 (weak)

	// _00      = VTBL
	// _00-_224 = THIOScene
	// _220, treat as THiScore*
};

struct THiScore : public TScrollList {
	THiScore();

	virtual ~THiScore() { }                                                                                  // _08 (weak)
	virtual void doCreate(JKRArchive*);                                                                      // _4C
	virtual void doUpdateFadeinFinish();                                                                     // _54
	virtual bool doUpdate();                                                                                 // _58
	virtual void doUpdateFadeoutFinish();                                                                    // _64
	virtual void doDraw(Graphics& gfx);                                                                      // _68
	virtual og::Screen::DispMemberBase* getDispMemberBase() { return mIsSection ? mDisp : getDispMember(); } // _78 (weak)
	virtual void paneInit();                                                                                 // _80
	virtual void changePaneInfo();                                                                           // _84
	virtual int getIdMax() { return 16; }                                                                    // _88 (weak)
	virtual u64 getNameID(int id);                                                                           // _8C (weak)
	virtual void changeTextTevBlock(int);                                                                    // _A0
	virtual void setPaneCharacter(int);                                                                      // _A8

	enum RecordType { ClearRank1, ClearRank2, ClearRank3, CompleteRank1, CompleteRank2, CompleteRank3 };
	int getRecord(int, int);
	void copyTevBlock(J2DTevBlock*, J2DTevBlock*);
	void changeTevBlock(J2DTevBlock*, J2DTevBlock*);
	void copyColorBlock(J2DColorBlock*, J2DColorBlock*);
	void changeColorBlock(J2DColorBlock*, J2DColorBlock*);
	void updateLayout();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_B4 = TScrollList
	THiScoreListScreen* mListScreen;             // _B4
	THiScoreIndPane* mIndPane;                   // _B8
	J2DPictureEx* mHighScorePic;                 //_BC
	J2DPane* mSelIconPane;                       // _C0
	J2DPane* mSelIconCorners[4];                 // _C4
	J2DPane* m3DStickPane;                       // _D4
	og::Screen::CallBack_Picture* mStickAnimPic; // _D8
	og::Screen::StickAnimMgr* mStickAnimMgr;     // _DC
	og::Screen::ScaleMgr** mScaleMgrList;        // _E0
	TScaleUpCounter* mScaleCounter1[6];          // _E4
	u32 mScoreCounts[6];                         // _FC
	TScaleUpCounter* mScaleCounter2[6];          // _114
	TScaleUpCounter* mScaleCounter3[6];          // _12c
	u32 mCurrScore1[6];                          // _144
	u32 mCurrScore2[6];                          // _15C
	bool mIsAllTreasures;                        // _174
	int mState;                                  // _178
	DispMemberHighScore* mDisp;                  // _17C
	f32 mAlphaTimer;                             // _180
	f32 mIndPaneXDirection;                      // _184
	f32 mAngleGrowRate;                          // _188
	f32 mPaneAngle;                              // _18C
	f32 mCornerAnimTimer;                        // _190
	f32 mCornerSelScaleModifier;                 // _194
	f32 mCornerAnimSpeed;                        // _198
	f32 mCornerSelScale;                         // _19C
	f32 mCornerXOffset;                          // _1A0
	Vector2f mCoords[4];                         // _1A4
	u8 mNoAlphaUpdate;                           // _1C4
	u8 mIndPaneType;                             // _1C5
	u8 mErrorSoundCounter;                       // _1C6
	u8 mDoEnd;                                   // _1C7
	J2DTevBlock* mTevBlock[2];                   //_1C8
	J2DColorBlock* mColorBlock[2];               // _1D0
	GXColorS10 mColors[4];                       // _1D8
	f32 mColorChangeTimer;                       // _1F8
	f32 mPaneHeightDiff;                         // _1FC
	Vector2f mPaneListPos;                       // _200
	Vector2f mPaneIconPos;                       // _208

	static bool mForceClear;
	static bool mForceResetParm;
	static bool mChangeAlpha;
	static bool mForceClear2;
	static bool mLoopDrum;
	static ResTIMG* mPicTexture[16];
	static f32 mPictureOffsetY;
	static f32 mListOffsetY;
	static f32 mClearListHeightRate;
	static u64 mNameID[16];
	static int mHiscoreDataOrder[16];

	static struct StaticValues {
		// WARNING: the actual THiScore constructor overwrites these
		inline StaticValues()
		{
			_00 = 8.0f;
			_04 = 0.9f;
			_08 = 1.1f;
			_0C = 1.5f;
			_10 = 2.0f;
		}
		f32 _00; // _00
		f32 _04;
		f32 _08;
		f32 _0C;
		f32 _10;
	} mScrollParm;
};

} // namespace Morimura

#endif
