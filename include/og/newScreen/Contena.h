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
	virtual SceneType getSceneType() { return m_sceneType; }             // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }             // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_CONTENA; }      // _10 (weak)
	virtual bool isUseBackupSceneInfo() { return true; }                 // _14 (weak)
	virtual void doCreateObj(JKRArchive*);                               // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);              // _24

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	SceneType m_sceneType; // _220
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
	og::Screen::DispMemberContena* m_disp;    // _38
	og::Screen::ContenaCounter* m_contena;    // _3C
	P2DScreen::Mgr_tuning* m_screenSpot;      // _40
	P2DScreen::Mgr* m_screenCupsule;          // _44
	Controller* m_controller;                 // _48
	og::Screen::AnimBaseBase* m_animList[10]; // _4C
	og::Screen::AlphaMgr* m_alphaMgr[6];      // _74
	J2DPane* m_paneList[6];                   // _8C
	int m_state;                              // _A4
	f32 m_screenAngle;                        // _A8
	int m_screenState;                        // _AC
	f32 m_moveTime;                           // _B0
	f32 m_timer0;                             // _B4
	int m_onyonID;                            // _B8
	int m_maxPiki2;                           // _BC
	int m_pikiField;                          // _C0
	int m_pikiInParty;                        // _C4
	int m_pikiFieldMax;                       // _C8
	int m_pikiInParty2;                       // _CC
	int m_currPikis;                          // _D0
	int m_maxPiki;                            // _D4
	int _D8;                                  // _D8
	bool _DC;                                 // _DC
	int _E0;                                  // _E0
	u16 _E4;                                  // _E4
	int m_dispState;                          // _E8
	og::Screen::CallBack_Furiko* m_furiko;    // _EC
	f32 m_menuMoveAngle;                      // _F0
	f32 m_yAnalog;							  // _F4
	J2DPane* m_paneSpot;                      // _F8
	f32 m_spotX;                              // _FC
	f32 m_spotY;                              // _100
	f32 _104;                                 // _104
	f32 m_timer;                              // _108
	bool m_doDraw;                            // _10C
	f32 m_fadeLevel;                          // _110
	og::Screen::StickAnimMgr* m_stickAnimMgr; // _114
	og::Screen::AlphaMgr* m_alphaArrow1;      // _118
	og::Screen::AlphaMgr* m_alphaArrow2;      // _11C
	og::Screen::ScaleMgr* m_scaleArrow1;      // _120
	og::Screen::ScaleMgr* m_scaleArrow2;      // _124
	J2DPane* m_paneArrowUp;                   // _128
	J2DPane* m_paneArrowDown;                 // _12C
	Vector2f m_paneArrowUpPos;                // _130
	Vector2f m_paneArrowDownPos;              // _138
	f32 m_timer1;                             // _140
	f32 m_timer2;                             // _144
	u8 m_alpha;                               // _148
	J2DPane** m_pikiPaneList;                 // _14C
	int m_pikiPaneNum;                        // _150
	J2DPane* m_paneOnyon;                     // _154
	J2DPane* m_paneOnyonL;                    // _158
	og::Screen::ScaleMgr* m_scaleMgr3;        // _15C
	J2DPane* m_paneTiretu;                    // _160
	J2DPane* m_paneTiretul;                   // _164
	og::Screen::ScaleMgr* m_scaleMgr4;        // _168
	u8 m_payedDebt;                           // _16C

	static struct StaticValues {
		f32 _00;
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
		f32 _3C;
		bool _40;
	} msVal;
};
} // namespace newScreen
} // namespace og

#endif
