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
	JKRArchive* mImageArchive; // _08, unknown ptr
	bool _0C;                  // _0C
};

struct THiScoreIndPane : public TIndPane {
	THiScoreIndPane(J2DPane* pane)
	    : TIndPane("hi_score_00.bti", pane->mBounds.f.x - pane->mBounds.i.x, pane->mBounds.f.y - pane->mBounds.i.y)
	{
	}

	virtual ~THiScoreIndPane() { } // _08 (weak)
	virtual void draw();           // _10

	void setRadius(s16, f32);

	// _00     = VTBL
	// _00-_18 = CNode
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

	virtual ~THiScore() { }                                  // _08 (weak)
	virtual void doCreate(JKRArchive*);                      // _4C
	virtual void doUpdateFadeinFinish();                     // _54
	virtual bool doUpdate();                                 // _58
	virtual void doUpdateFadeoutFinish();                    // _64
	virtual void doDraw(Graphics& gfx);                      // _68
	virtual og::Screen::DispMemberBase* getDispMemberBase(); // _78 (weak)
	virtual void paneInit();                                 // _80
	virtual void changePaneInfo();                           // _84
	virtual int getIdMax() { return 16; }                    // _88 (weak)
	virtual u64 getNameID(int);                              // _8C (weak)
	virtual void changeTextTevBlock(int);                    // _A0
	virtual void setPaneCharacter(int);                      // _A8

	void getRecord(int, int);
	void copyTevBlock(J2DTevBlock*, J2DTevBlock*);
	void changeTevBlock(J2DTevBlock*, J2DTevBlock*);
	void copyColorBlock(J2DColorBlock*, J2DColorBlock*);
	void changeColorBlock(J2DColorBlock*, J2DColorBlock*);
	void updateLayout();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_B4 = TScrollList
	THiScoreListScreen* mListScreen; // _B4
	THiScoreIndPane* mIndPane;       // _B8
	J2DPictureEx* mHighScorePic;     //_BC
	J2DPane* mSelIconPane;
	J2DPane* mSelIconCorners[4];
	J2DPane* m3DStickPane;
	og::Screen::CallBack_Picture* mStickAnimPic;
	og::Screen::StickAnimMgr* mStickAnimMgr;
	og::Screen::ScaleMgr** mScaleMgrList;
	TScaleUpCounter* mScaleCounter1[6]; // _E4
	u32 mScoreCounts[6];                // _FC
	TScaleUpCounter* mScaleCounter2[6]; // _114
	TScaleUpCounter* mScaleCounter3[6]; // _12c
	u32 mCurrScore1[6];                 // _144
	u32 mCurrScore2[6];                 // _15C
	bool mIsAllTreasures;               // _174
	int mState;                         // _178
	DispMemberHighScore* mDisp;         // _17C
	f32 _180;
	f32 _184;
	f32 _188;
	f32 _18C;
	f32 _190;
	f32 _194;
	f32 _198;
	f32 _19C;
	f32 _1A0;
	Vector2f mCoords[4]; // _1A4
	u8 _1C4;
	u8 _1C5;
	u8 mErrorSoundCounter;         // _1C6
	u8 mDoEnd;                     // _1C7
	J2DTevBlock* mTevBlock[2];     //_1C8
	J2DColorBlock* mColorBlock[2]; // _1D0
	GXColorS10 mColors[4];         // _1D8
	f32 _1F8[6];

	static bool mForceClear;
	static ResTIMG* mPicTexture[16];

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
	} msVal;
};

} // namespace Morimura

#endif
