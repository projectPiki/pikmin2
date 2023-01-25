#ifndef _OG_NEWSCREEN_KANTEIDEMO_H
#define _OG_NEWSCREEN_KANTEIDEMO_H

#include "Screen/screenObj.h"
#include "JSystem/J2D/J2DPane.h"
#include "P2JME/Movie.h"
#include "efx2d/T2DOtakantei.h"

enum KanteiState {
	Kantei_Begin            = 1,
	Kantei_PokoAppearDelay  = 2,
	Kantei_SetPokoValue     = 3,
	Kantei_WaitAppearPokos  = 4,
	Kantei_AppearTotalPokos = 6,
	Kantei_Idle             = 7,
	Kantei_MessageBox       = 8
};

enum KanteiNameState { KanteiName_StartDelay, KanteiName_Growing, KanteiName_VisibleDelay, KanteiName_Shrinking };

enum KanteiType { KanteiType_PreDebt, KanteiType_PostDebt };

namespace P2DScreen {
// this is just a temp dec until the header is made
struct Mgr_tuning;
} // namespace P2DScreen

namespace og {
namespace Screen {
// these are temp decs until these headers are made
struct DispMemberKantei;
struct CallBack_CounterSlot;
struct CallBack_CounterRV;
struct StickAnimMgr;
struct ScaleMgr;
} // namespace Screen

namespace newScreen {
struct KanteiDemo : public ::Screen::SceneBase {
	KanteiDemo();

	virtual const char* getResName() const { return "res_kantei.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_KANTEI_DEMO; }      // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }            // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_KANTEI; }      // _10 (weak)
	virtual bool isUseBackupSceneInfo() { return true; }                // _14 (weak)
	virtual void doCreateObj(JKRArchive*);                              // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);             // _24

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	::Screen::ObjBase* mObjBase; // _220
};

struct ObjKantei : public ::Screen::ObjBase {
	ObjKantei(const char*);

	virtual ~ObjKantei();                                 // _08 (weak)
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

	void scaleAnimItemName();
	void commonUpdate();
	void finishKantei();
	void doDrawMsg(Graphics&);

	// unused/inline
	void startItemName(u64);
	void startKanteiVoice(int);
	void updateKanteiVoice();

	inline void setRect(JGeometry::TBox2f& box)
	{
		Vector2f i(box.i.x, box.i.y);
		Vector2f f(box.f.x, box.f.y);
		mDrawBox.p1 = i;
		mDrawBox.p2 = f;
	}

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	og::Screen::DispMemberKantei* mDisp;                // _38
	P2DScreen::Mgr_tuning* mScreenOkWindow;             // _3C
	P2DScreen::Mgr_tuning* mScreenBG;                   // _40
	P2DScreen::Mgr_tuning* mScreenName;                 // _44
	P2DScreen::Mgr_tuning* mScreenButton;               // _48
	KanteiState mState;                                 // _4C
	P2JME::Movie::TControl* mTControl;                  // _50
	J2DPane* mPaneSetP;                                 // _54, "Notsetp"
	Rectf mDrawBox;                                     // _58
	u8 mDoDrawBox;                                      // _68, not sure what the purpose of this box is
	u32 _6C;                                            // _6C, completely unused?
	u64 mShipMessageBoxID;                              // _70, message ID for ship text when collecting upgrades
	u8 mInTextBox;                                      // _78, true when in ship text box, doesnt actually do anything?
	f32 mFadeLevel;                                     // _7C, controls alpha during screen fadein/fadeout
	f32 mFadeLevel2;                                    // _80, not used?
	J2DPane* mPaneOk1;                                  // _84
	J2DPane* mPaneOk2;                                  // _88
	f32 mStartTimer;                                    // _8C
	og::Screen::CallBack_CounterSlot* mPokoCounterCurr; // _90
	og::Screen::CallBack_CounterRV* mPokoCounterTotal;  // _94
	int mCurrItemValue;                                 // _98
	u32 mTotalPokos;                                    // _9C
	int mTotalPokosCave;                                // _A0
	u32 mTotalPokosOld;                                 // _A4
	int mTotalPokosCaveOld;                             // _A8
	og::Screen::StickAnimMgr* mStickAnim;               // _AC
	u32 _B0;                                            // _B0, completely unused?
	efx2d::T2DOtakantei* mEfx;                          // _B4
	J2DPane* mPaneName;                                 // _B8
	og::Screen::ScaleMgr* mScaleMgr;                    // _BC
	f32 mNameScale;                                     // _C0
	f32 mNameTimer;                                     // _C4
	u8 mDoScaleName;                                    // _C8 - unknown type
	KanteiNameState mNameState;                         // _CC
	u64 mTreasureNameMesgID;                            // _D0, treasure name message id
	u8 mIsPelletNameNotAppeared;                        // _D8, starts true, set to false when pellet name appears
	f32 mNameWaitTimer;                                 // _DC
	f32 mIdleStateTimer;                                // _E0
	u8 mDoShipSpeech;                                   // _E4 - unknown type
	f32 mCommonTimer;                                   // _E8
	int mShipSpeechTimer;                               // _EC
	u8 mPlayExitSE;                                     // _F0

	static struct StaticValues {
		inline StaticValues()
		{
			mNameAppearDelay       = 0.6666667f;
			mPriceAppearDelay      = 1.0f;
			mPokoSlotFactor        = 0.3f;
			mPokoPuyo1             = 2.8f;
			mPokoPuyo2             = 27.0f;
			mPokoPuyo3             = 0.5f;
			mNamePaneAdd           = Vector2f(10.0f, -40.0f);
			mScreenMoveStart       = 0.0f;
			mNameTimerDefault      = 0.8f;
			mCounterGrow1          = 0.1f;
			mCounterGrow2          = 30.0f;
			mCounterGrow3          = 0.5f;
			mNameScaleGrowFactor   = 0.3f;
			mWaitTimerReset        = 0.7f;
			mIdleStateTimerDefault = 3.0f;
		}

		f32 mNameAppearDelay;       // _00
		f32 mPriceAppearDelay;      // _04
		f32 mPokoSlotFactor;        // _08
		f32 mPokoPuyo1;             // _0C
		f32 mPokoPuyo2;             // _10
		f32 mPokoPuyo3;             // _14
		Vector2f mNamePaneAdd;      // _18
		f32 mScreenMoveStart;       // _20
		f32 mNameTimerDefault;      // _24
		f32 mCounterGrow1;          // _28
		f32 mCounterGrow2;          // _2C
		f32 mCounterGrow3;          // _30
		f32 mNameScaleGrowFactor;   // _34
		f32 mWaitTimerReset;        // _38
		f32 mIdleStateTimerDefault; // _3C
	} msVal;
};
} // namespace newScreen
} // namespace og

#endif
