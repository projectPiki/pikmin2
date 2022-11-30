#ifndef _OG_NEWSCREEN_KANTEIDEMO_H
#define _OG_NEWSCREEN_KANTEIDEMO_H

#include "Screen/Bases.h"
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
	::Screen::ObjBase* m_objBase; // _220
};

struct ObjKantei : ::Screen::ObjBase {
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
	void updateKanteiVoice(void);

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	og::Screen::DispMemberKantei* m_disp;                // _38
	P2DScreen::Mgr_tuning* m_screenOkWindow;             // _3C
	P2DScreen::Mgr_tuning* m_screenBG;                   // _40
	P2DScreen::Mgr_tuning* m_screenName;                 // _44
	P2DScreen::Mgr_tuning* m_screenButton;               // _48
	KanteiState m_state;                                 // _4C
	P2JME::Movie::TControl* m_tControl;                  // _50
	J2DPane* m_paneSetP;                                 // _54, "Notsetp"
	Rectf m_drawBox;                                     // _58
	u8 m_doDrawBox;                                      // _68, not sure what the purpose of this box is
	u32 _6C;                                             // _6C, completely unused?
	u64 m_shipMessageBoxID;                              // _70, message ID for ship text when collecting upgrades
	u8 m_inTextBox;                                      // _78, true when in ship text box, doesnt actually do anything?
	f32 m_fadeLevel;                                     // _7C, controls alpha during screen fadein/fadeout
	f32 m_fadeLevel2;                                    // _80, not used?
	J2DPane* m_paneOk1;                                  // _84
	J2DPane* m_paneOk2;                                  // _88
	f32 m_startTimer;                                    // _8C
	og::Screen::CallBack_CounterSlot* m_pokoCounterCurr; // _90
	og::Screen::CallBack_CounterRV* m_pokoCounterTotal;  // _94
	int m_currItemValue;                                 // _98
	u32 m_totalPokos;                                    // _9C
	int m_totalPokosCave;                                // _A0
	u32 m_totalPokosOld;                                 // _A4
	int m_totalPokosCaveOld;                             // _A8
	og::Screen::StickAnimMgr* m_stickAnim;               // _AC
	u32 _B0;                                             // _B0, completely unused?
	efx2d::T2DOtakantei* m_efx;                          // _B4
	J2DPane* m_paneName;                                 // _B8
	og::Screen::ScaleMgr* m_scaleMgr;                    // _BC
	f32 m_nameScale;                                     // _C0
	f32 m_nameTimer;                                     // _C4
	u8 m_doScaleName;                                    // _C8 - unknown type
	KanteiNameState m_nameState;                         // _CC
	u64 m_treasureNameMesgID;                            // _D0, treasure name message id
	u8 m_isPelletNameNotAppeared;                        // _D8, starts true, set to false when pellet name appears
	float m_nameWaitTimer;                               // _DC
	float m_idleStateTimer;                              // _E0
	u8 m_doShipSpeech;                                   // _E4 - unknown type
	float m_commonTimer;                                 // _E8
	int m_shipSpeechTimer;                               // _EC
	u8 m_playExitSE;                                     // _F0

	static struct StaticValues {
		f32 m_nameAppearDelay;       // _00
		f32 m_priceAppearDelay;      // _04
		f32 m_pokoSlotFactor;        // _08
		f32 m_pokoPuyo1;             // _0C
		f32 m_pokoPuyo2;             // _10
		f32 m_pokoPuyo3;             // _14
		Vector2f m_namePaneAdd;      // _18
		f32 m_screenMoveStart;       // _20
		f32 m_nameTimerDefault;      // _24
		f32 m_counterGrow1;          // _28
		f32 m_counterGrow2;          // _2C
		f32 m_counterGrow3;          // _30
		f32 m_nameScaleGrowFactor;   // _34
		f32 m_waitTimerReset;        // _38
		f32 m_idleStateTimerDefault; // _3C
	} msVal;
};
} // namespace newScreen
} // namespace og

#endif
