#ifndef _OG_NEWSCREEN_VS_H
#define _OG_NEWSCREEN_VS_H

#include "Screen/screenObj.h"
#include "og/Screen/ogScreen.h"
#include "og/Screen/BloGroup.h"
#include "og/Screen/ScaleMgr.h"
#include "og/Screen/DopingScreen.h"
#include "og/Screen/callbackNodes.h"
#include "trig.h"

namespace P2DScreen {
struct Mgr_tuning;
} // namespace P2DScreen

namespace og {
namespace Screen {
struct DispMemberVs;
struct BloGroup;
struct CallBack_LifeGauge;
struct DopingCheck;
struct ScaleMgr;
} // namespace Screen

namespace newScreen {
struct Vs : public ::Screen::SceneBase {
	Vs();

	virtual const char* getResName() const { return "res_vs.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_VS; }           // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }        // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_VS; }      // _10 (weak)
	virtual bool isDrawInDemo() const { return false; }             // _18 (weak)
	virtual void doCreateObj(JKRArchive*);                          // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);         // _24

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};

struct ObjVs : public ::Screen::ObjBase {
	struct ScreenSet {
		inline ScreenSet()
		{
			mScreen     = new P2DScreen::Mgr_tuning;
			mLifeGauge  = new og::Screen::CallBack_LifeGauge;
			mDoping     = new og::Screen::DopingCheck;
			mScaleMgr1  = new og::Screen::ScaleMgr;
			mScaleMgr2  = new og::Screen::ScaleMgr;
			mPaneToyo01 = nullptr;
			mPaneToyo00 = nullptr;
		}

		void init(og::Screen::DataNavi*, JKRArchive*, u32*);
		inline void update(og::Screen::DataNavi&);

		P2DScreen::Mgr_tuning* mScreen;             // _00
		og::Screen::CallBack_LifeGauge* mLifeGauge; // _04
		og::Screen::DopingCheck* mDoping;           // _08
		og::Screen::ScaleMgr* mScaleMgr1;           // _0C
		og::Screen::ScaleMgr* mScaleMgr2;           // _10
		J2DPane* mPaneToyo01;                       // _14
		J2DPane* mPaneToyo00;                       // _18
	};

	ObjVs(const char*);

	virtual ~ObjVs();                                     // _08 (weak)
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

	void setOnOffBdama(bool);
	void checkObake();
	void doUpdateCommon();

	// unused/inline
	bool isCompBdama(int);
	bool startGetBdama(J2DPane*);
	void startBdamaComp(J2DPane*);
	void startBdamaWinRed(J2DPane*);
	void startBdamaWinBlue(J2DPane*);

	og::Screen::DispMemberVs* mDisp;        // _38
	og::Screen::BloGroup* mBloGroup;        // _3C
	P2DScreen::Mgr_tuning* mScreenIcons;    // _40
	ScreenSet* mScreenP1;                   // _44
	ScreenSet* mScreenP2;                   // _48
	f32 mFadeLevel;                         // _4C
	f32 mScale;                             // _50
	J2DPictureEx* mPane_bedama1P[4];        // _54
	J2DPictureEx* mPane_nodama1P[4];        // _64
	J2DPictureEx* mPane_windama1P[4];       // _74
	J2DPictureEx* mPane_bedama2P[4];        // _84
	J2DPictureEx* mPane_nodama2P[4];        // _94
	J2DPictureEx* mPane_windama2P[4];       // _A4
	og::Screen::ScaleMgr* mScaleMgrP1_1[4]; // _B4
	og::Screen::ScaleMgr* mScaleMgrP2_1[4]; // _C4
	og::Screen::ScaleMgr* mScaleMgrP1_2[4]; // _D4
	og::Screen::ScaleMgr* mScaleMgrP2_2[4]; // _E4
	bool mBedamaGotFlagsP1[4];              // _F4
	bool mBedamaGotFlagsP2[4];              // _F8
	f32 mFinishTimer;                       // _FC
	int mDoneState;                         // _100
	bool mHasAllBedamaP1;                   // _104
	bool mHasAllBedamaP2;                   // _105
	f32 mBedamaGetTimer;                    // _108
	bool mFirstBedamaGetP1;                 // _10C
	bool mFirstBedamaGetP2;                 // _10D
	bool mSetBedamaFlag;                    // _10E
	J2DPictureEx* mPaneObake1P;             // _110, obake is the roulette wheel
	J2DPictureEx* mPaneObake2P;             // _114
	f32 mAlphaObakeP1;                      // _118
	f32 mAlphaObakeP2;                      // _11C
	bool mObakeEnabledP1;                   // _120
	bool mObakeEnabledP2;                   // _121
	f32 mObakeMovePos;                      // _124
	u8 mPlayWinSound;                       // _128

	static struct StaticValues {
		inline StaticValues()
		{
			mFadeInRate      = 0.6f;
			mFadeOutRate     = 0.2f;
			mLifeGaugeXOffs  = -1.5f;
			mLifeGaugeYOffs  = -1.5f;
			mMarbleBaseXOffs = 460.0f;
			mMarbleP1YOffs   = 215.0f;
			mMarbleP2YOffs   = 430.0f;
			mRouletteXOffs   = 115.0f;
			mRouletteP1YOffs = 30.0f;
			mRouletteP2YOffs = 245.0f;
			mRouletteScale   = 0.7f;
			mRouletteXSpeed  = 7.0f;
			mRouletteYSpeed  = 3.5f;
		}

		f32 mFadeInRate;      // _00
		f32 mFadeOutRate;     // _04
		f32 mLifeGaugeXOffs;  // _08
		f32 mLifeGaugeYOffs;  // _0C
		f32 mMarbleBaseXOffs; // _10
		f32 mMarbleP1YOffs;   // _14
		f32 mMarbleP2YOffs;   // _18
		f32 mRouletteXOffs;   // _1C
		f32 mRouletteP1YOffs; // _20
		f32 mRouletteP2YOffs; // _24
		f32 mRouletteScale;   // _28
		f32 mRouletteXSpeed;  // _2C
		f32 mRouletteYSpeed;  // _30
	} msVal;
};
} // namespace newScreen
} // namespace og

#endif
