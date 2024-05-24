#ifndef _OG_NEWSCREEN_CONTENA_H
#define _OG_NEWSCREEN_CONTENA_H

#include "Screen/screenObj.h"
#include "JSystem/J2D/J2DPane.h"

namespace P2DScreen {
struct Mgr_tuning;
struct Mgr;
} // namespace P2DScreen

namespace og {
namespace Screen {
struct DispMemberContena;
struct ContenaCounter;
struct AlphaMgr;
struct ScaleMgr;
struct StickAnimMgr;
struct AnimBaseBase;
struct CallBack_Furiko;
} // namespace Screen

namespace newScreen {
struct Contena : public ::Screen::SceneBase {
	Contena();

	virtual const char* getResName() const { return "res_contena.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return mSceneType; }              // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }             // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_CONTENA; }      // _10 (weak)
	virtual bool isUseBackupSceneInfo() { return true; }                 // _14 (weak)
	virtual void doCreateObj(JKRArchive*);                               // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);              // _24

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	SceneType mSceneType; // _220
};

struct ObjContena : public ::Screen::ObjBase {
	ObjContena(const char*);

	virtual ~ObjContena();                                // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*); // _44
	virtual bool doEnd(const ::Screen::EndSceneArg*);     // _48
	virtual void doCreate(JKRArchive*);                   // _4C
	virtual bool doUpdateFadein();                        // _50
	virtual void doUpdateFadeinFinish();                  // _54
	virtual bool doUpdate();                              // _58
	virtual void doUpdateFinish();                        // _5C
	virtual bool doUpdateFadeout();                       // _60
	virtual void doUpdateFadeoutFinish();                 // _64
	virtual void doDraw(Graphics& gfx);                   // _68

	void putinPiki(bool);
	void takeoutPiki(bool);
	bool moveContena();
	void commonUpdate();

	// unused/inline
	void setStartPos();
	void tairetuOnOff();
	void changeMessage(u32);
	void isMessage(int);
	void setStickUp();
	void setStickDown();
	void setStickUpDown();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	og::Screen::DispMemberContena* mDisp;    // _38
	og::Screen::ContenaCounter* mContena;    // _3C
	P2DScreen::Mgr_tuning* mScreenSpot;      // _40
	P2DScreen::Mgr* mScreenCupsule;          // _44
	Controller* mController;                 // _48
	og::Screen::AnimBaseBase* mAnimList[10]; // _4C
	og::Screen::AlphaMgr* mAlphaMgr[6];      // _74
	J2DPane* mPaneList[6];                   // _8C
	int mState;                              // _A4
	f32 mScreenAngle;                        // _A8
	int mScreenState;                        // _AC
	f32 mMoveTime;                           // _B0
	f32 mTimer0;                             // _B4
	og::Screen::DataContena mDataContena;    // _B8
	int mDispState;                          // _E8
	og::Screen::CallBack_Furiko* mFuriko;    // _EC
	f32 mMenuMoveAngle;                      // _F0
	f32 mYAnalog;                            // _F4
	J2DPane* mPaneSpot;                      // _F8
	f32 mSpotX;                              // _FC
	f32 mSpotY;                              // _100
	f32 mSpotScale;                          // _104
	f32 mTimer;                              // _108
	bool mDoDraw;                            // _10C
	f32 mFadeLevel;                          // _110
	og::Screen::StickAnimMgr* mStickAnimMgr; // _114
	og::Screen::AlphaMgr* mAlphaArrow1;      // _118
	og::Screen::AlphaMgr* mAlphaArrow2;      // _11C
	og::Screen::ScaleMgr* mScaleArrow1;      // _120
	og::Screen::ScaleMgr* mScaleArrow2;      // _124
	J2DPane* mPaneArrowUp;                   // _128
	J2DPane* mPaneArrowDown;                 // _12C
	Vector2f mPaneArrowUpPos;                // _130
	Vector2f mPaneArrowDownPos;              // _138
	f32 mTimer1;                             // _140
	f32 mTimer2;                             // _144
	u8 mAlpha;                               // _148
	J2DPane** mPikiPaneList;                 // _14C
	int mPikiPaneNum;                        // _150
	J2DPane* mPaneOnyon;                     // _154
	J2DPane* mPaneOnyonL;                    // _158
	og::Screen::ScaleMgr* mScaleMgr3;        // _15C
	J2DPane* mPaneTiretu;                    // _160
	J2DPane* mPaneTiretul;                   // _164
	og::Screen::ScaleMgr* mScaleMgr4;        // _168
	u8 mPayedDebt;                           // _16C

	static struct StaticValues {
		inline StaticValues()
		{
			_00 = 20.0f;
			_08 = 0.06f;
			_0C = 1.2f;
			_10 = 0.6f;
			_04 = 35.0f;
			_14 = 230.0f;
			_18 = 57.5f;
			_1C = 0.43f;
			_40 = false;
			_20 = 0.3f;
			_3C = 0;
			_41 = false;
			_24 = 0.2f;
			_28 = 1.8f;
			_2C = -1.0f;
			_30 = 1.0f;
			_34 = 0.55f;
			_38 = 0.0668f;
		}

		f32 _00; // _00
		f32 _04; // _04
		f32 _08; // _08
		f32 _0C; // _0C
		f32 _10; // _10
		f32 _14; // _14
		f32 _18; // _18
		f32 _1C; // _1C
		f32 _20; // _20
		f32 _24; // _24
		f32 _28; // _28
		f32 _2C; // _2C
		f32 _30; // _30
		f32 _34;
		f32 _38;
		int _3C;
		bool _40;
		bool _41;
	} msVal;
};
} // namespace newScreen
} // namespace og

#endif
