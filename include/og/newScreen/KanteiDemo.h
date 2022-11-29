#ifndef _OG_NEWSCREEN_KANTEIDEMO_H
#define _OG_NEWSCREEN_KANTEIDEMO_H

#include "Screen/Bases.h"
#include "JSystem/J2D/J2DPane.h"
#include "P2JME/Movie.h"
#include "efx2d/T2DOtakantei.h"

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
	int m_state;                                         // _4C
	P2JME::Movie::TControl* m_tControl;                  // _50
	J2DPane* m_paneSetP;                                 // _54
	Rectf _58;                                           // _58
	u8 _68[0x8];                                         // _68 - unknown type
	u64 m_tagId;                                         // _70
	u8 m_inTextBox;                                      // _78 - unknown type
	f32 m_fadeLevel;                                     // _7C
	f32 m_fadeLevel2;                                    // _80
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
	u32 _B0;                                             // _B0 - unknown type
	efx2d::T2DOtakantei* m_efx;                          // _B4
	J2DPane* m_paneName;                                 // _B8
	og::Screen::ScaleMgr* m_scaleMgr;                    // _BC
	f32 m_nameScale;                                     // _C0
	f32 m_nameTimer;                                     // _C4
	u8 m_doScaleName;                                    // _C8 - unknown type
	int m_nameState;                                     // _CC
	u64 m_msgId;                                         // _D0
	u8 m_nameStateChange;                                // _D8 - unknown type
	float m_nameWaitTimer;                               // _DC
	float m_timer;                                       // _E0
	u8 m_doShipSpeech;                                   // _E4 - unknown type
	float m_commonTimer;                                 // _E8
	int m_shipSpeechTimer;                               // _EC
	u8 m_playExitSE;                                     // _F0

	static struct StaticValues {
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
		f32 _34; // _34
		f32 _38; // _38
		f32 _3C; // _3C
	} msVal;
};
} // namespace newScreen
} // namespace og

#endif
