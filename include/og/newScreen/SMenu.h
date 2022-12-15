#ifndef _OG_NEWSCREEN_SMENU_H
#define _OG_NEWSCREEN_SMENU_H

#include "Screen/screenObj.h"
#include "Screen/Enums.h"
#include "JSystem/J2D/J2DPane.h"
#include "P2DScreen.h"

#define MAX_CAVEDISP_NAME 5
#define MAX_RADAR_COUNT   200

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
	inline SceneSMenuBase()
	    : m_finishState(1)
	{
	}

	virtual int doGetFinishState() { return m_finishState; } // _4C (weak)

	// _00      = VTBL
	// _00-_220 = Screen::SceneBase
	int m_finishState; // _220
};

struct SMenuCont : public SceneSMenuBase {
	SMenuCont();

	virtual const char* getResName() const { return "res_s_menu_controller.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_PAUSE_MENU_CONTROLS; }         // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }                       // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_START_MENU_CONTROLS; }    // _10 (weak)
	virtual bool isUseBackupSceneInfo() { return true; }                           // _14 (weak)
	virtual void doCreateObj(JKRArchive*);                                         // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);                        // _24
	virtual void doUpdateActive();                                                 // _2C
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&);                        // _30
	virtual void doSetBackupScene(::Screen::SetSceneArg&);                         // _48

	// _00      = VTBL
	// _00-_224 = SceneSMenuBase
};

struct SMenuItem : public SceneSMenuBase {
	SMenuItem();

	virtual const char* getResName() const { return "res_s_menu_item.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_PAUSE_MENU_ITEMS; }      // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }                 // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_START_MENU_ITEM; }  // _10 (weak)
	virtual bool isUseBackupSceneInfo() { return true; }                     // _14 (weak)
	virtual void doCreateObj(JKRArchive*);                                   // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);                  // _24
	virtual void doUpdateActive();                                           // _2C
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&);                  // _30
	virtual void doSetBackupScene(::Screen::SetSceneArg&);                   // _48

	// _00      = VTBL
	// _00-_224 = SceneSMenuBase
};

struct SMenuMap : public SceneSMenuBase {
	SMenuMap();

	virtual const char* getResName() const { return "res_s_menu_map.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_PAUSE_MENU_MAP; }       // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }                // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_START_MENU_MAP; }  // _10 (weak)
	virtual bool isUseBackupSceneInfo() { return true; }                    // _14 (weak)
	virtual void doCreateObj(JKRArchive*);                                  // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);                 // _24
	virtual void doUpdateActive();                                          // _2C
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&);                 // _30
	virtual void doSetBackupScene(::Screen::SetSceneArg&);                  // _48

	// _00      = VTBL
	// _00-_224 = SceneSMenuBase
};

struct SMenuPause : public SceneSMenuBase {
	SMenuPause();

	virtual const char* getResName() const { return "res_s_menu_pause.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_PAUSE_MENU; }             // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }                  // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_START_MENU_PAUSE; }  // _10 (weak)
	virtual bool isUseBackupSceneInfo() { return true; }                      // _14 (weak)
	virtual void doCreateObj(JKRArchive*);                                    // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);                   // _24
	virtual void doUpdateActive();                                            // _2C
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&);                   // _30

	// _00      = VTBL
	// _00-_224 = SceneSMenuBase
};

struct SMenuPauseDoukutu : public SceneSMenuBase {
	SMenuPauseDoukutu();

	virtual const char* getResName() const { return "res_s_menu_pause_doukutu.szs"; } // _1C (weak)
	virtual SceneType getSceneType() { return SCENE_PAUSE_MENU_DOUKUTU; }             // _08 (weak)
	virtual ScreenOwnerID getOwnerID() { return OWNER_OGA; }                          // _0C (weak)
	virtual ScreenMemberID getMemberID() { return MEMBER_START_MENU_PAUSE_DOUKUTU; }  // _10 (weak)
	virtual bool isUseBackupSceneInfo() { return true; }                              // _14 (weak)
	virtual void doCreateObj(JKRArchive*);                                            // _20
	virtual void doUserCallBackFunc(Resource::MgrCommand*);                           // _24
	virtual void doUpdateActive();                                                    // _2C
	virtual bool doConfirmSetScene(::Screen::SetSceneArg&);                           // _30
	virtual int doGetFinishState();                                                   // _4C

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

	enum MenuState { MENUSTATE_OpenL, MENUSTATE_OpenR, MENUSTATE_CloseL, MENUSTATE_CloseR, MENUSTATE_Default };

	enum MenuExitState { MENUCLOSE_None, MENUCLOSE_Finish, MENUCLOSE_L, MENUCLOSE_R };

	ObjSMenuBase();

	virtual ~ObjSMenuBase() { }              // _08
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
	virtual bool updateFadeIn();             // _9C
	virtual bool updateFadeOut();            // _A0
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

	// unused/inlined
	void registSMenuScreen(P2DScreen::Mgr*);
	void jump_LR(::Screen::SetSceneArg&, bool);
	void startYaji();

	inline u32 getButtonState(int i) { return m_buttonStates[i]; }

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_38 = Screen::ObjBase
	int m_state;                           // _38
	int m_cancelToState;                   // _3C
	f32 m_movePos;                         // _40
	f32 m_fadeLevel;                       // _44
	bool m_exiting;                        // _48
	f32 m_angle;                           // _4C
	u8 _50;                                // _50
	J2DPictureEx* m_panePeffect;           // _54
	u32 m_buttonStates[2];                 // _58
	P2DScreen::Mgr_tuning* m_screenLR;     // _60
	J2DPane* m_Nyaji_l;                    // _64
	J2DPane* m_Nyaji_r;                    // _68
	J2DTextBoxEx* m_Tyaji_l;               // _6C
	J2DTextBoxEx* m_Tyaji_r;               // _70
	bool m_enableYaji;                     // _74
	Vector2f m_yajiLpos;                   // _78
	Vector2f m_yajiRpos;                   // _80
	f32 _88;                               // _88
	u8 m_alpha;                            // _8C
	Screen::ArrowAlphaBlink* m_arrowBlink; // _90
	J2DPictureEx* m_panePeffect1;          // _94
	J2DPictureEx* m_panePeffect2;          // _98
	P2DScreen::Mgr* m_screenMain;          // _9C
	J2DPane* m_paneNsize;                  // _A0
	f32 _A4;                               // _A4

	static struct StaticValues {
		inline StaticValues()
		{
			_00             = 1.0f;
			m_animSpeed     = 1.0f;
			_14             = 255;
			_08             = 0.3f;
			_0C             = 30.0f;
			_10             = 0.1f;
			_15             = 64;
			_16             = 64;
			_17             = 0;
			m_useController = false;
			m_updateYaji    = 0;
		}

		f32 _00;              // _00
		f32 m_animSpeed;      // _04
		f32 _08;              // _08
		f32 _0C;              // _0C
		f32 _10;              // _10
		u8 _14;               // _14
		u8 _15;               // _15
		u8 _16;               // _16
		u8 _17;               // _17
		bool m_useController; // _18
		bool m_updateYaji;    // _19
	} msBaseVal;
};

// size: 0xBC
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
	P2DScreen::Mgr_tuning* m_screenCont;     // _AC
	og::Screen::AnimGroup* m_animGroup;      // _B0
	u8 _B4[0x8];                             // _B4, unknown

	static struct StaticValues {
		inline StaticValues()
		{
			m_scaleX = 1.0f;
			m_scaleY = 1.0f;
		}

		f32 m_scaleX; // _00
		f32 m_scaleY; // _04
	} msVal;
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
	P2DScreen::Mgr_tuning* m_screenItems;    // _AC
	P2DScreen::Mgr* m_screenSprays;          // _B0
	og::Screen::AnimGroup* m_anims1;         // _B4
	og::Screen::AnimGroup* m_anims2;         // _B8
	J2DPane* m_paneSpray0;                   // _BC
	J2DPane* m_paneSpray1;                   // _C0
	J2DPane* m_paneSpraySub0;                // _C4
	J2DPane* m_paneSpraySub1;                // _C8
	u8 _CC[0x8];                             // _CC, unknown

	static struct StaticValues {
		inline StaticValues()
		{
			_00.r = 0;
			_00.g = 110;
			_00.b = 176;
			_00.a = 255;
			_04.r = 0;
			_04.g = 0;
			_04.b = 100;
			_04.a = 255;
			_08   = -27.0f;
			_0C   = -27.0f;
			_10   = -27.0f;
			_14   = -27.0f;
			_18   = 0.95f;
			_1C   = 0.9f;
		}

		JUtility::TColor _00; // _00
		JUtility::TColor _04; // _04
		f32 _08;              // _08
		f32 _0C;              // _0C
		f32 _10;              // _10
		f32 _14;              // _14
		f32 _18;              // _18
		f32 _1C;              // _1C
	} msVal;
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

	// unused/inlined
	void calcMapScale();
	void calcMapPos(Vector2f&);
	void setMapPos();
	void setCompass();
	void rotateMap();
	void scaleMap();
	void setMapColor();
	void calcCaveNameAlpha();

	// _00     = VTBL1
	// _18     = VTBL2
	// _00-_A8 = ObjSMenuBase
	og::Screen::DispMemberSMenuMap* m_disp;              // _A8
	og::Screen::MapCounter* m_mapCounter;                // _AC
	og::Screen::AnimGroup* m_animGroup;                  // _B0
	J2DPictureEx* m_pane_map;                            // _B4, pane map_
	u32 _B8;                                             // _B8, unknown
	P2DScreen::Mgr_tuning* m_iconScreen;                 // _BC
	JUTTexture* m_radarMapTexture;                       // _C0, the actual texture
	J2DPane* m_rootPane;                                 // _C4, for icon_screen
	J2DPictureEx* m_mapTexPane;                          // _C8
	J2DPane*** m_radarPaneList;                          // _CC
	J2DPictureEx* m_olimarArrow;                         // _D0, ic orima?
	Game::Navi* m_olimarObj;                             // _D4
	J2DPictureEx* m_louieArrow;                          // _D8, ic louzy?
	Game::Navi* m_louieObj;                              // _DC, or president
	Vector2f m_mapPosition;                              // _E0
	f32 m_currentZoom;                                   // _E8
	f32 m_mapAngle;                                      // _EC
	Vector2f m_mapTexScale;                              // _F0
	Vector2f m_mapTextureDimensions;                     // _F8
	Vector2f m_mapBounds;                                // _100
	Vector2f _108;                                       // _108, seems to be unused
	Vector2f m_mapRotationOrigin;                        // _110
	Controller* m_controller;                            // _118
	int m_mapIconNum;                                    // _11C
	u8 m_updateCaveTex;                                  // _120
	P2DScreen::Mgr_tuning* m_iconScreen2;                // _124, not sure why the game loads two of this screen file
	J2DPane* m_pane_Ncompas;                             // _128, pane Ncompas
	J2DPictureEx* m_compassPic;                          // _12C, pane compass
	J2DPictureEx* m_olimarGlow;                          // _130, the glow behind the olimar arrow pane
	J2DPictureEx* m_louieGlow;                           // _134, same for louie
	f32 m_startZoom;                                     // _138
	u8 m_zoomCaveTextAlpha;                              // _13C
	J2DTextBox* m_caveLabelTextBoxes[MAX_CAVEDISP_NAME]; // _140
	int m_caveLabelCount;                                // _154

	static struct StaticValues {
		f32 _00;                                 // _00
		f32 m_animSpeed;                         // _04
		u8 _08;                                  // _08
		u8 _09;                                  // _09
		u8 _0A;                                  // _0A
		JUtility::TColor m_mapTexColorWhite;     // _0B
		JUtility::TColor m_mapTexColorBlack;     // _0F
		JUtility::TColor m_itemPelletWhiteColor; // _13
		JUtility::TColor m_itemPelletBlackColor; // _17
		u8 _1B;                                  // _1B
		f32 m_mapMoveRate;                       // _1C
		f32 m_mapMoveRate2;                      // _20
		f32 m_mapIconScaleBase;                  // _24
		f32 m_mapNaviArrowScaleMod;              // _28
		f32 m_groundZoom;                        // _2C
		f32 m_caveZoom;                          // _30
		Vector2f m_mapTexOffset;                 // _34
		f32 m_mapMoveInputReduction;             // _3C
		Vector2f m_mapScreenScale;               // _40
		JUtility::TColor m_tempPikiColorWhite;   // _48
		JUtility::TColor m_tempPikiColorBlack;   // _4C
	} msVal;
};

struct ObjSMenuPause : public ObjSMenuBase {
	struct ObjHIOVal {
		static void getMenuColor(JUtility::TColor*, JUtility::TColor*, JUtility::TColor*, JUtility::TColor*, JUtility::TColor*,
		                         JUtility::TColor*, JUtility::TColor*, JUtility::TColor*, JUtility::TColor*, JUtility::TColor*,
		                         JUtility::TColor*, JUtility::TColor*, JUtility::TColor*, JUtility::TColor*);
	};

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
	Screen::AnimText_Screen* m_animText1;   // _B8
	Screen::AnimText_Screen* m_animText2;   // _BC
	u8 _C0;                                 // _C0
	f32 _C4;                                // _C4
	u8 _C8;                                 // _C8
};

struct StartSceneArgSMenu : public ::Screen::StartSceneArgTemplate<StartSceneArgSMenu> {
	virtual SceneType getSceneType() const // _08 (weak)
	{
		return m_sceneType;
	}

	// _00     = VTBL
	// _00-_08 = StartSceneArgTemplate
};
} // namespace newScreen
} // namespace og

#endif
