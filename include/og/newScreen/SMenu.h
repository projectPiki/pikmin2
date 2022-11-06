#ifndef _OG_NEWSCREEN_SMENU_H
#define _OG_NEWSCREEN_SMENU_H

#include "Screen/Bases.h"
#include "Screen/Enums.h"
#include "JSystem/J2D/J2DPane.h"
#include "P2DScreen.h"

namespace Game {
struct Navi;
} // namespace Game

namespace og {
namespace Screen {
struct ArrowAlphaBlink;
struct AnimGroup;
struct MapCounter;
struct AnimText_Screen;
struct MenuMgr;
} // namespace Screen

namespace newScreen {
struct SceneSMenuBase : public ::Screen::SceneBase {
	virtual int doGetFinishState(); // _4C (weak)

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	int _220; // _220
};

struct SMenuCont : public SceneSMenuBase {
	SMenuCont();

	virtual SceneType getSceneType();                       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();                     // _0C (weak)
	virtual ScreenMemberID getMemberID();                   // _10 (weak)
	virtual bool isUseBackupSceneInfo();                    // _14 (weak)
	virtual const char* getResName() const;                 // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                  // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _24
	virtual void doUpdateActive();                          // _2C
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&); // _30
	virtual void doSetBackupScene(::Screen::SetSceneArg&);  // _48

	// _00      = VTBL
	// _00-_224 = SceneSMenuBase
};

struct SMenuItem : public SceneSMenuBase {
	SMenuItem();

	virtual SceneType getSceneType();                       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();                     // _0C (weak)
	virtual ScreenMemberID getMemberID();                   // _10 (weak)
	virtual bool isUseBackupSceneInfo();                    // _14 (weak)
	virtual const char* getResName() const;                 // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                  // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _24
	virtual void doUpdateActive();                          // _2C
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&); // _30
	virtual void doSetBackupScene(::Screen::SetSceneArg&);  // _48

	// _00      = VTBL
	// _00-_224 = SceneSMenuBase
};

struct SMenuMap : public SceneSMenuBase {
	SMenuMap();

	virtual SceneType getSceneType();                       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();                     // _0C (weak)
	virtual ScreenMemberID getMemberID();                   // _10 (weak)
	virtual bool isUseBackupSceneInfo();                    // _14 (weak)
	virtual const char* getResName() const;                 // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                  // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _24
	virtual void doUpdateActive();                          // _2C
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&); // _30
	virtual void doSetBackupScene(::Screen::SetSceneArg&);  // _48

	// _00      = VTBL
	// _00-_224 = SceneSMenuBase
};

struct SMenuPause : public SceneSMenuBase {
	SMenuPause();

	virtual SceneType getSceneType();                       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();                     // _0C (weak)
	virtual ScreenMemberID getMemberID();                   // _10 (weak)
	virtual bool isUseBackupSceneInfo();                    // _14 (weak)
	virtual const char* getResName() const;                 // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                  // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _24
	virtual void doUpdateActive();                          // _2C
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&); // _30

	// _00      = VTBL
	// _00-_224 = SceneSMenuBase
};

struct SMenuPauseDoukutu : public SceneSMenuBase {
	SMenuPauseDoukutu();

	virtual SceneType getSceneType();                       // _08 (weak)
	virtual ScreenOwnerID getOwnerID();                     // _0C (weak)
	virtual ScreenMemberID getMemberID();                   // _10 (weak)
	virtual bool isUseBackupSceneInfo();                    // _14 (weak)
	virtual const char* getResName() const;                 // _1C (weak)
	virtual void doCreateObj(JKRArchive*);                  // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*); // _24
	virtual void doUpdateActive();                          // _2C
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&); // _30
	virtual int doGetFinishState();                         // _4C

	// _00      = VTBL
	// _00-_224 = SceneSMenuBase
};

struct SMenuPauseVS : public ::Screen::SceneBase {
	SMenuPauseVS();

	virtual const char* getResName() const { return "res_s_menu_pause_VS.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_PAUSE_MENU_VS; }             // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }                     // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_START_MENU_PAUSE_VS; }  // _10 (weak)
	virtual bool isUseBackupSceneInfo() { return true; }                         // _14 (weak)
	virtual void doCreateObj(JKRArchive*);                                       // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);                      // _24
	virtual void doUpdateActive();                                               // _2C
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&);                      // _30
	virtual void doSetBackupScene(::Screen::SetSceneArg&);                       // _48
	virtual int doGetFinishState();                                              // _4C

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
};

struct ObjSMenuBase : public ::Screen::ObjBase {
	ObjSMenuBase();

	virtual ~ObjSMenuBase();                 // _08
	virtual bool doUpdateFadein();           // _50
	virtual void doUpdateFadeinFinish();     // _54
	virtual bool doUpdate();                 // _58
	virtual void doUpdateFinish();           // _5C
	virtual void doUpdateFadeoutFinish();    // _64
	virtual void in_L()  = 0;                // _78
	virtual void in_R()  = 0;                // _7C
	virtual void wait()  = 0;                // _80
	virtual void out_L() = 0;                // _84
	virtual void out_R() = 0;                // _88
	virtual void loop();                     // _8C
	virtual void doUpdateCancelAction() = 0; // _90
	virtual void doUpdateRAction()      = 0; // _94
	virtual void doUpdateLAction()      = 0; // _98
	virtual void updateFadeIn();             // _9C
	virtual void updateFadeOut();            // _A0
	virtual void commonUpdate() = 0;         // _A4

	void setFinishState(long);
	void setSMenuScale(f32, f32);
	void doCreateAfter(JKRArchive*, P2DScreen::Mgr*);
	void commonUpdateBase();
	void startBackupScene();
	void close_L();
	void jump_L(::Screen::SetSceneArg&);
	void jump_R(::Screen::SetSceneArg&);
	void setYajiName(u64, u64, u64);
	void stopYaji();
	void updateYaji();
	void drawYaji(Graphics&);
	bool start_LR(::Screen::StartSceneArg const*);

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	int _38;                                    // _38
	int _3C;                                    // _3C
	f32 _40;                                    // _40
	f32 _44;                                    // _44
	u8 _48;                                     // _48
	f32 _4C;                                    // _4C
	u8 _50;                                     // _50
	J2DPictureEx* m_Peffect;                    // _54
	u32 m_buttonStates[2];                      // _58
	J2DScreen* m_LRScreen;                      // _60
	J2DPane* m_Nyaji_l;                         // _64
	J2DPane* m_Nyaji_r;                         // _68
	J2DTextBoxEx* m_Tyaji_l;                    // _6C
	J2DTextBoxEx* m_Tyaji_r;                    // _70
	u8 _74[4];                                  // _74
	f32 _78;                                    // _78
	f32 _7C;                                    // _7C
	f32 _80;                                    // _80
	f32 _84;                                    // _84
	f32 _88;                                    // _88
	u8 _8C[4];                                  // _8C
	Screen::ArrowAlphaBlink* m_arrowAlphaBlink; // _90
	u32 _94;                                    // _94
	J2DPictureEx* m_Peffect2;                   // _98
	P2DScreen::Mgr* m_screenMgr;                // _9C
	J2DPane* m_Nsize;                           // _A0
	f32 _A4;                                    // _A4

	static struct StaticValues {
		u32 _00; // _00
		f32 _04; // _04
		f32 _08; // _08
		f32 _0C; // _0C
		f32 _10; // _10
		u8 _14;  // _14
		u8 _15;  // _15
		u8 _16;  // _16
		u8 _17;  // _17
		u8 _18;  // _18
		u8 _19;  // _19
	} msBaseVal;
};

struct ObjSMenuCont : public ObjSMenuBase {
	ObjSMenuCont(const char*);

	virtual ~ObjSMenuCont();                              // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*); // _44
	virtual bool doEnd(const ::Screen::EndSceneArg*);     // _48
	virtual void doCreate(JKRArchive*);                   // _4C
	virtual bool doUpdate();                              // _58
	virtual void doUpdateFinish();                        // _5C
	virtual bool doUpdateFadeout();                       // _60
	virtual void doDraw(Graphics& gfx);                   // _68
	virtual void in_L();                                  // _78
	virtual void in_R();                                  // _7C
	virtual void wait();                                  // _80
	virtual void out_L();                                 // _84
	virtual void out_R();                                 // _88
	virtual void doUpdateCancelAction();                  // _90 (weak)
	virtual void doUpdateRAction();                       // _94
	virtual void doUpdateLAction();                       // _98
	virtual void commonUpdate();                          // _A4

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_A8 = ObjSMenuBase
	og::Screen::DispMemberSMenuCont* m_disp; // _A8
	P2DScreen::Mgr_tuning* _AC;              // _AC
	og::Screen::AnimGroup* m_animGroup;      // _B0
};

struct ObjSMenuItem : public ObjSMenuBase {
	ObjSMenuItem(const char*);

	virtual ~ObjSMenuItem();                              // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*); // _44
	virtual bool doEnd(const ::Screen::EndSceneArg*);     // _48
	virtual void doCreate(JKRArchive*);                   // _4C
	virtual bool doUpdate();                              // _58
	virtual void doUpdateFinish();                        // _5C
	virtual bool doUpdateFadeout();                       // _60
	virtual void doDraw(Graphics& gfx);                   // _68
	virtual void in_L();                                  // _78
	virtual void in_R();                                  // _7C
	virtual void wait();                                  // _80
	virtual void out_L();                                 // _84
	virtual void out_R();                                 // _88
	virtual void doUpdateCancelAction();                  // _90 (weak)
	virtual void doUpdateRAction();                       // _94
	virtual void doUpdateLAction();                       // _98
	virtual void commonUpdate();                          // _A4

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_A8 = ObjSMenuBase
	og::Screen::DispMemberSMenuItem* m_disp; // _A8
	P2DScreen::Mgr_tuning* _AC;              // _AC
	P2DScreen::Mgr* _B0;                     // _B0
	og::Screen::AnimGroup* _B4;              // _B4
	og::Screen::AnimGroup* _B8;              // _B8
	J2DPane* _BC;                            // _BC
	J2DPane* _C0;                            // _C0
	J2DPane* _C4;                            // _C4
	J2DPane* _C8;                            // _C8
	u8 _CC[0x8];                             // _CC, unknown
};

struct ObjSMenuMap : public ObjSMenuBase {
	ObjSMenuMap(const char*);

	virtual ~ObjSMenuMap();                               // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*); // _44
	virtual bool doEnd(const ::Screen::EndSceneArg*);     // _48
	virtual void doCreate(JKRArchive*);                   // _4C
	virtual bool doUpdate();                              // _58
	virtual void doUpdateFinish();                        // _5C
	virtual bool doUpdateFadeout();                       // _60
	virtual void doDraw(Graphics& gfx);                   // _68
	virtual void in_L();                                  // _78
	virtual void in_R();                                  // _7C
	virtual void wait();                                  // _80
	virtual void out_L();                                 // _84
	virtual void out_R();                                 // _88
	virtual void doUpdateCancelAction();                  // _90 (weak)
	virtual void doUpdateRAction();                       // _94
	virtual void doUpdateLAction();                       // _98
	virtual void commonUpdate();                          // _A4

	void setMapTexture();
	void tuningIcon();
	void initMapIcon(JKRArchive*);
	void appendCaveName(J2DPane*, u16, u64);
	void transMap();
	void updateMap();
	void drawMap(Graphics&);
	void drawRectZ(Graphics&, Rectf&, Color4&, f32);
	void drawVecZ(Graphics&, Vec&, Vec&, Vec&, Vec&, Color4&, f32);

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_A8 = ObjSMenuBase
	og::Screen::DispMemberSMenuMap* m_disp; // _A8
	og::Screen::MapCounter* m_mapCounter;   // _AC
	og::Screen::AnimGroup* m_animGroup;     // _B0
	J2DPictureEx* _B4;                      // _B4, map cent?
	u32 _B8;                                // _B8, unknown
	P2DScreen::Mgr_tuning* _BC;             // _BC
	JUTTexture* m_radarMapTexture;          // _C0
	J2DPane* _C4;                           // _C4
	J2DPictureEx* _C8;                      // _C8
	J2DPane** _CC;                          // _CC
	J2DPictureEx* _D0;                      // _D0, ic orima?
	Game::Navi* m_orima;                    // _D4
	J2DPictureEx* _D8;                      // _D8, ic louzy?
	Game::Navi* m_louzy;                    // _DC, or president
	f32 _E0;                                // _E0
	f32 _E4;                                // _E4
	f32 _E8;                                // _E8
	f32 _EC;                                // _EC
	f32 _F0;                                // _F0
	f32 _F4;                                // _F4
	f32 _F8;                                // _F8
	f32 _FC;                                // _FC
	f32 _100;                               // _100, width maybe?
	f32 _104;                               // _104, height maybe?
	f32 _108;                               // _108
	f32 _10C;                               // _10C
	f32 _110;                               // _110
	f32 _112;                               // _112
	Controller* m_controller;               // _114
	int _11C;                               // _11C
	u8 _120;                                // _120
	P2DScreen::Mgr_tuning* _124;            // _124
	J2DPane* _128;                          // _128, Ncompas?
	J2DPictureEx* _12C;                     // _12C, compass?
	J2DPictureEx* _130;                     // _130, ie orima?
	J2DPictureEx* _134;                     // _134, ie louzy?
	f32 _138;                               // _138
	u8 _13C;                                // _13C
	J2DTextBox* m_caveLabelTextBoxes[5];    // _140
	int m_caveLabelCount;                   // _154
};

struct ObjSMenuPause : public ObjSMenuBase {
	ObjSMenuPause(const char*);

	virtual ~ObjSMenuPause();                             // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*); // _44
	virtual bool doEnd(const ::Screen::EndSceneArg*);     // _48
	virtual void doCreate(JKRArchive*);                   // _4C
	virtual bool doUpdate();                              // _58
	virtual void doUpdateFinish();                        // _5C
	virtual bool doUpdateFadeout();                       // _60
	virtual void doUpdateFadeoutFinish();                 // _64
	virtual void doDraw(Graphics& gfx);                   // _68
	virtual void in_L();                                  // _78
	virtual void in_R();                                  // _7C
	virtual void wait();                                  // _80
	virtual void out_L();                                 // _84
	virtual void out_R();                                 // _88
	virtual void doUpdateCancelAction();                  // _90
	virtual void doUpdateRAction();                       // _94
	virtual void doUpdateLAction();                       // _98
	virtual void commonUpdate();                          // _A4

	void blink_TopMenu(int);
	void menu_pause();
	void menu_yuugata();
	void menu_zenkai();
	void killCursorAll();
	void menu();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_A8 = ObjSMenuBase
	og::Screen::DispMemberSMenuPause* m_disp; // _A8
	int _AC;                                  // _AC
	int _B0;                                  // _B0
	int _B4;                                  // _B4
	int _B8;                                  // _B8
	s16 _BC;                                  // _BC
	P2DScreen::Mgr_tuning* _C0;               // _C0
	og::Screen::MenuMgr* _C4;                 // _C4
	og::Screen::MenuMgr* _C8;                 // _C8
	og::Screen::MenuMgr* _CC;                 // _CC
	u32 _D0;                                  // _D0, unknown
	u32 _D4;                                  // _D4, unknown
	og::Screen::AnimText_Screen* _D8;         // _D8, h_00?
	og::Screen::AnimText_Screen* _DC;         // _DC, h_01?
	og::Screen::AnimText_Screen* _E0;         // _E0, h_02?
	og::Screen::AnimText_Screen* _E4;         // _E4, h_03?
	og::Screen::AnimText_Screen* _E8;         // _E8, h_04?
	og::Screen::AnimText_Screen* _EC;         // _EC, h_05?
	og::Screen::AnimText_Screen* _F0;         // _F0, h_06?
	og::Screen::AnimText_Screen* _F4;         // _F4, h_07?
	og::Screen::AnimText_Screen* _F8;         // _F8, h_08?
	og::Screen::AnimGroup* _FC;               // _FC
	u8 _100;                                  // _100
	f32 _104;                                 // _104, timer?
	u8 _108;                                  // _108
	f32 _10C;                                 // _10C
	u8 _110;                                  // _110
	f32 _114;                                 // _114
};

struct ObjSMenuPauseDoukutu : public ObjSMenuBase {
	ObjSMenuPauseDoukutu(const char*);

	virtual ~ObjSMenuPauseDoukutu();                      // _08 (weak)
	virtual bool doStart(const ::Screen::StartSceneArg*); // _44
	virtual bool doEnd(const ::Screen::EndSceneArg*);     // _48
	virtual void doCreate(JKRArchive*);                   // _4C
	virtual bool doUpdate();                              // _58
	virtual void doUpdateFinish();                        // _5C
	virtual bool doUpdateFadeout();                       // _60
	virtual void doUpdateFadeoutFinish();                 // _64
	virtual void doDraw(Graphics& gfx);                   // _68
	virtual void in_L();                                  // _78
	virtual void in_R();                                  // _7C
	virtual void wait();                                  // _80
	virtual void out_L();                                 // _84
	virtual void out_R();                                 // _88
	virtual void doUpdateCancelAction();                  // _90
	virtual void doUpdateRAction();                       // _94
	virtual void doUpdateLAction();                       // _98
	virtual void commonUpdate();                          // _A4

	void menu_pause();
	void menu_giveup();
	void finishPause();
	void menu();
	void set_Blink_Normal();
	void set_Blink_YesNo();
	void set_Menu_Normal();
	void set_Menu_YesNo();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_A8 = ObjSMenuBase
	og::Screen::DispMemberSMenuPauseDoukutu* m_disp; // _A8
	int _AC;                                         // _AC
	u32 _B0;                                         // _B0
	int _B4;                                         // _B4
	u8 _B8[0x4];                                     // _B8, unknown
	P2DScreen::Mgr_tuning* _BC;                      // _BC
	og::Screen::MenuMgr* _C0;                        // _C0
	og::Screen::MenuMgr* _C4;                        // _C4
	J2DPane* _C8;                                    // _C8
	og::Screen::AnimText_Screen* _CC;                // _CC
	og::Screen::AnimText_Screen* _D0;                // _D0
	og::Screen::AnimText_Screen* _D4;                // _D4
	og::Screen::AnimText_Screen* _D8;                // _D8
	og::Screen::AnimText_Screen* _DC;                // _DC
	og::Screen::AnimGroup* _E0;                      // _E0
	u32 _E4;                                         // _E4
	u8 _E8;                                          // _E8
	f32 _EC;                                         // _EC
	u8 _F0;                                          // _F0
	f32 _F4;                                         // _F4
	f32 _F8;                                         // _F8
};

struct ObjSMenuPauseVS : public ObjSMenuBase {
	ObjSMenuPauseVS(const char*);

	virtual ~ObjSMenuPauseVS();                           // _08 (weak)
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
	virtual void in_L();                                  // _78
	virtual void in_R();                                  // _7C (weak)
	virtual void wait();                                  // _80
	virtual void out_L();                                 // _84
	virtual void out_R();                                 // _88 (weak)
	virtual void doUpdateCancelAction();                  // _90
	virtual void doUpdateRAction();                       // _94 (weak)
	virtual void doUpdateLAction();                       // _98 (weak)
	virtual void commonUpdate();                          // _A4
	virtual void out_cancel();                            // _A8
	virtual void out_menu_0();                            // _AC
	virtual void out_menu_1();                            // _B0
	virtual void getResult();                             // _B4 (weak)

	void blink_Menu(int);
	void menu();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_A8 = ObjSMenuBase
	Screen::DispMemberSMenuPauseVS* m_disp; // _A8
	int _AC;                                // _AC
	P2DScreen::Mgr* _B0;                    // _B0
	Screen::MenuMgr* m_menuMgr;             // _B4
	Screen::AnimText_Screen* _B8;           // _B8
	Screen::AnimText_Screen* _BC;           // _BC
	u8 _C0;                                 // _C0
	f32 _C4;                                // _C4
	u8 _C8;                                 // _C8
};

struct StartSceneArgSMenu : public ::Screen::StartSceneArgTemplate<StartSceneArgSMenu> {
	virtual SceneType getSceneType() const; // _08 (weak)

	// _00     = VTBL
	// _00-_08 = StartSceneArgTemplate
};
} // namespace newScreen
} // namespace og

#endif
