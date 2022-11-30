#ifndef _GAME_BASEGAMESECTION_H
#define _GAME_BASEGAMESECTION_H

#include "Game/BaseHIO.h"
#include "Game/PikiContainer.h"
#include "Camera.h"
#include "DvdThreadCommand.h"
#include "IDelegate.h"
#include "Vector3.h"
#include "Rect.h"
#include "Game/GameMessage.h"

struct BlackFader;
struct Controller;
struct HorizonalSplitter;
struct WipeInFader;
struct WipeOutFader;
struct WipeOutInFader;

namespace PSGame {
struct SceneInfo;
} // namespace PSGame

namespace Sys {
struct DrawBuffers;
} // namespace Sys

namespace TreasureLight {
struct Mgr;
} // namespace TreasureLight

namespace Game {

namespace ItemCave {
struct Item;
} // namespace ItemCave

namespace ItemBigFountain {
struct Item;
} // namespace ItemBigFountain

namespace ItemHole {
struct Item;
} // namespace ItemHole

struct MovieConfig;
struct CameraArg;
struct Onyon;
struct Creature;
struct Piki;
struct CourseInfo;
struct GameMessage;
struct GameLightMgr;
struct Pellet;
struct PlayCamera;

enum DemoTimers {
	DEMOTIMER_Unk0                  = 0,
	DEMOTIMER_Unk1                  = 1,
	DEMOTIMER_Unk2                  = 2,
	DEMOTIMER_Unk3                  = 3,
	DEMOTIMER_Meet_Red_Pikmin       = 4,
	DEMOTIMER_Reds_Purples_Tutorial = 5,
};

struct BaseGameSection : public BaseHIOSection {
	struct ZoomCamera : public LookAtCamera {
		virtual ~ZoomCamera() { } // _08 (weak)
		virtual void doUpdate();  // _78

		void init(f32, f32, Vector3f&, Controller*);
		void makeLookAt();

		// _00		= VTBL
		// _00-_198	= LookAtCamera
		f32 _198;         // _198, angleX?
		f32 _19C;         // _19C, angleY?
		f32 _1A0;         // _1A0, cameraDistance?
		f32 _1A4;         // _1A4
		f32 _1A8;         // _1A8, angle?
		Controller* _1AC; // _1AC
	};

	BaseGameSection(struct JKRHeap*);

	/////////////////// VTABLE
	virtual ~BaseGameSection();                                        // _08
	virtual void init();                                               // _18
	virtual void drawInit(Graphics& gfx, Section::EDrawInitMode);      // _20
	virtual bool forceFinish();                                        // _28 (weak)
	virtual bool doUpdate();                                           // _3C
	virtual void doDraw(Graphics& gfx);                                // _40
	virtual void sendMessage(GameMessage&);                            // _50 (weak)
	virtual void pre2dDraw(Graphics& gfx);                             // _54 (weak)
	virtual int getCurrFloor();                                        // _58 (weak)
	virtual bool isDevelopSection();                                   // _5C (weak)
	virtual void addChallengeScore(int);                               // _60 (weak)
	virtual void startMainBgm();                                       // _64 (weak)
	virtual void section_fadeout();                                    // _68 (weak)
	virtual void goNextFloor(ItemHole::Item*);                         // _6C (weak)
	virtual void goCave(ItemCave::Item*);                              // _70 (weak)
	virtual void goMainMap(ItemBigFountain::Item*);                    // _74 (weak)
	virtual u32 getCaveID();                                           // _78 (weak)
	virtual CourseInfo* getCurrentCourseInfo();                        // _7C (weak)
	virtual bool challengeDisablePelplant();                           // _80 (weak)
	virtual char* getCaveFilename();                                   // _84 (weak)
	virtual char* getEditorFilename();                                 // _88 (weak)
	virtual int getVsEditNumber();                                     // _8C (weak)
	virtual void openContainerWindow();                                // _90 (weak)
	virtual void closeContainerWindow();                               // _94 (weak)
	virtual void playMovie_firstexperience(int, Creature*);            // _98 (weak)
	virtual void playMovie_bootup(Onyon*);                             // _9C (weak)
	virtual void playMovie_helloPikmin(Piki*);                         // _A0 (weak)
	virtual void enableTimer(f32, u32) { }                             // _A4 (weak)
	virtual void disableTimer(u32);                                    // _A8 (weak)
	virtual u32 getTimerType() { return 0; }                           // _AC (weak)
	virtual void onMovieStart(MovieConfig*, u32, u32);                 // _B0 (weak)
	virtual void onMovieDone(MovieConfig*, u32, u32);                  // _B4 (weak)
	virtual void onMovieCommand(int);                                  // _B8
	virtual void startFadeout(f32);                                    // _BC
	virtual void startFadein(f32);                                     // _C0
	virtual void startFadeoutin(f32);                                  // _C4
	virtual void startFadeblack();                                     // _C8
	virtual void startFadewhite();                                     // _CC
	virtual void gmOrimaDown(int);                                     // _D0 (weak)
	virtual void gmPikminZero();                                       // _D4 (weak)
	virtual void openCaveInMenu(ItemCave::Item*, int);                 // _D8 (weak)
	virtual void openCaveMoreMenu(ItemHole::Item*, Controller*);       // _DC (weak)
	virtual void openKanketuMenu(ItemBigFountain::Item*, Controller*); // _E0 (weak)
	virtual void on_setCamController(int);                             // _E4 (weak)
	virtual void onTogglePlayer();                                     // _E8 (weak)
	virtual void onPlayerJoin();                                       // _EC (weak)
	virtual void onInit();                                             // _F0 (weak)
	virtual void onUpdate();                                           // _F4 (weak)
	virtual void initJ3D();                                            // _F8
	virtual void initViewports(Graphics& gfx);                         // _FC
	virtual void initResources();                                      // _100
	virtual void initGenerators();                                     // _104
	virtual void initLights();                                         // _108
	virtual void draw3D(Graphics& gfx);                                // _10C
	virtual void draw2D(Graphics& gfx);                                // _110
	virtual void drawParticle(Graphics& gfx, int viewportIndex);       // _114
	virtual void draw_Ogawa2D(Graphics& gfx);                          // _118
	virtual void do_drawOtakaraWindow(Graphics& gfx);                  // _11C
	virtual void onSetupFloatMemory();                                 // _120 (weak)
	virtual void postSetupFloatMemory();                               // _124
	virtual void onSetSoundScene();                                    // _128 (weak)
	virtual void onStartHeap();                                        // _12C (weak)
	virtual void onClearHeap();                                        // _130 (weak)
	/////////////////// VTABLE END

	void useSpecificFBTexture(JUTTexture*);
	void restoreFBTexture();
	void loadSync(IDelegate*, bool);
	void waitSyncLoad(bool);
	void dvdloadGameSystem();
	void movieDone(Game::MovieConfig*, u32, u32);
	void advanceDayCount();
	void saveToGeneratorCache(Game::CourseInfo*);
	void pmTogglePlayer();
	void setPlayerMode(int);
	void onCameraBlendFinished(Game::CameraArg*);
	void setFixNearFar(bool, f32, f32);
	void setCamController();
	void setDefaultPSSceneInfo(PSGame::SceneInfo&);
	void prepareHoleIn(Vector3f&, bool);
	void prepareFountainOn(Vector3f&);
	void test_draw_treasure_detector();
	void directDraw(Graphics& gfx, Viewport*);
	void directDrawPost(Graphics& gfx, Viewport*);
	void j3dSetView(Viewport*, bool);
	void doSimulation(f32);
	void doSimpleDraw(Viewport*);
	void doAnimation();
	void changeGeneratorCursor(Vector3f&);
	void doEntry();
	void doSetView(int viewportIndex);
	void doViewCalc();
	void updateBlendCamera();
	void setSplitter(bool);
	void updateSplitter();
	void doDirectDrawPost(Graphics& gfx, Viewport*);
	void doDirectDraw(Graphics& gfx, Viewport*);
	void clearHeap();
	void setupFixMemory();
	void setupFixMemory_dvdload();
	void enableAllocHalt();
	void disableAllocHalt();
	void setupFloatMemory();
	void setDrawBuffer(int);
	void createFallPikminSound();
	void captureRadarmap(Graphics& gfx);

	inline void newdraw_draw3D(Graphics& gfx);
	void newdraw_draw3D_all(Graphics& gfx);
	void newdraw_drawAll(Viewport*);

	void drawOtakaraWindow(Graphics& gfx);
	void setDraw2DCreature(Game::Creature*);
	void startZoomWindow();
	void startKantei2D();
	void onKanteiDone(Rect<f32>&);

	// _00 		= VTBL
	// _00-_48 	= BaseHIOSection
	// should there not be another 0x4 here in USA (not demo)? ...
	u32 _PADDING00;                                       // STRUCTURE SIZE IS WRONG BY 8 BYTES!
	u32 _PADDING01;                                       // STRUCTURE SIZE IS WRONG BY 8 BYTES!
	BlendCamera* m_blendCamera;                           // _50
	f32 m_blendFactor;                                    // _54
	bool m_isBlendCameraActive;                           // _58
	DvdThreadCommand m_dvdThreadCommand;                  // _5C
	IDelegate3<MovieConfig*, u32, u32>* _C8;              // _C8
	IDelegate3<MovieConfig*, void*, u32>* _CC;            // _CC
	BlackFader* m_blackFader;                             // _D0
	WipeInFader* m_wipeInFader;                           // _D4
	WipeOutFader* m_wipeOutFader;                         // _D8
	WipeOutInFader* m_wipeOutInFader;                     // _DC
	u32 _E0;                                              // _E0
	int m_prevNaviIdx;                                    // _E4
	f32 m_secondViewportHeight;                           // _E8
	f32 m_split;                                          // _EC
	u8 m_setSplit;                                        // _F0
	JUTTexture* m_mizuTexture;                            // _F4
	TreasureLight::Mgr* m_treasureLightMgr;               // _F8
	JKRHeap* m_theExpHeap;                                // _FC
	JKRHeap* _100;                                        // _100
	PlayCamera* _104;                                     // _104
	PlayCamera* _108;                                     // _108
	Controller* _10C;                                     // _10C
	Controller* _110;                                     // _110
	int m_playerMode;                                     // _114
	HorizonalSplitter* m_splitter;                        // _118
	u8 _11C;                                              // _11C
	int _120;                                             // _120
	u32 _124;                                             // _124
	GameLightMgr* m_lightMgr;                             // _128
	Sys::DrawBuffers* _12C;                               // _12C
	Sys::DrawBuffers* _130;                               // _130
	int m_treasureGetState;                               // _134
	Viewport* m_treasureGetViewport;                      // _138
	Pellet* m_draw2DCreature;                             // _13C
	f32 m_draw2DCreatureScale;                            // _140
	f32 _144;                                             // _144
	Delegate1<BaseGameSection, Rectf&>* m_kanteiDelegate; // _148
	ZoomCamera* m_treasureZoomCamera;                     // _14C
	u32 _150;                                             // _150
	JUTTexture* m_xfbImage;                               // _154
	JUTTexture* m_fbTexture;                              // _158
	int m_xfbTexture1;                                    // _15C
	int m_xfbTexture2;                                    // _160
	u8 m_xfbFlags;                                        // _164
	JUTTexture* _168;                                     // _168
	int m_texData1;                                       // _16C
	int _170;                                             // _170
	                                                      // u8 _174[0xA0];                                        // _174
// not sure where this goes, but it goes after m_texData1 and before m_container1 (VsGameSection).
#if BUILDTARGET == USADEMO1
	u8 _DemoPadding3[0x4];
#endif
};
} // namespace Game

#endif
