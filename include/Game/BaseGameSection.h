#ifndef _GAME_BASEGAMESECTION_H
#define _GAME_BASEGAMESECTION_H

#include "Game/BaseHIO.h"
#include "Game/PikiContainer.h"
#include "Camera.h"
#include "DvdThreadCommand.h"
#include "IDelegate.h"
#include "Vector3.h"
#include "Splitter.h"
#include "Rect.h"
#include "Game/GameMessage.h"
#include "BuildSettings.h"

struct BlackFader;
struct Controller;
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
	DEMOTIMER_None                   = 0,
	DEMOTIMER_Piki_Seed_In_Ground    = 1, // plays if you dont pluck the first red pikmin in 10 seconds
	DEMOTIMER_Camera_Tutorial        = 2, // Entirely unused, the camera tutorial was meant to use it, but nothing starts its timer
	DEMOTIMER_Unlock_Switch_To_Louie = 3,
	DEMOTIMER_Meet_Red_Pikmin        = 4, // 1 second timer after whistling the first red on day 1
	DEMOTIMER_Reds_Purples_Tutorial  = 5, // 10 seconds after you first have reds and purples in your party
	DEMOTIMER_Unk6                   = 6,
	DEMOTIMER_YouAppearLost          = 7, // When you wait 3 minutes on day 1 after growing 15 reds before crushing the first bag
};

enum DrawBufferType {
	DB_NormalLayer = 0,
	DB_NormalFogOffLayer,
	DB_MapLayer,
	DB_PikiLayer,
	DB_PostRenderLayer,
	DB_2DLayer,
	DB_FirstLayer,
	DB_PostShadowLayer,
	DB_ObjectLastLayer,
	DB_FarmLayer,
};

struct BaseGameSection : public BaseHIOSection {

	struct ZoomCamera : public LookAtCamera {
		virtual ~ZoomCamera() { } // _08 (weak)
		virtual void doUpdate();  // _78

		void init(f32 dist1, f32 dist2, Vector3f& lookAtPos, Controller* control);
		void makeLookAt();

		inline f32 getAngleX() const { return mAngleX; }

		// _00		= VTBL
		// _00-_198	= LookAtCamera
		f32 mAngleX;             // _198
		f32 mAngleY;             // _19C
		f32 mTargetDistance;     // _1A0
		f32 mUnusedDist;         // _1A4, set to same as above, not used for anything
		f32 mTargetFrontAngle;   // _1A8
		Controller* mController; // _1AC
	};

	BaseGameSection(struct JKRHeap* heap);

	/////////////////// VTABLE
	virtual ~BaseGameSection();                                                // _08
	virtual void init();                                                       // _18
	virtual void drawInit(Graphics& gfx, Section::EDrawInitMode drawInitMode); // _20
	virtual bool forceFinish()
	{
		mIsLoadingDVD = true;
		return mIsLoadingDVD;
	}                                                                         // _28 (weak)
	virtual bool doUpdate();                                                  // _3C
	virtual void doDraw(Graphics& gfx);                                       // _40
	virtual bool sendMessage(GameMessage& msg) { return false; }              // _50 (weak)
	virtual void pre2dDraw(Graphics& gfx) { }                                 // _54 (weak)
	virtual int getCurrFloor() { return -1; }                                 // _58 (weak)
	virtual bool isDevelopSection() { return true; }                          // _5C (weak)
	virtual void addChallengeScore(int) { }                                   // _60 (weak)
	virtual void startMainBgm() { }                                           // _64 (weak)
	virtual void section_fadeout() { }                                        // _68 (weak)
	virtual void goNextFloor(ItemHole::Item* hole) { }                        // _6C (weak)
	virtual void goCave(ItemCave::Item* cave) { }                             // _70 (weak)
	virtual void goMainMap(ItemBigFountain::Item* geyser) { }                 // _74 (weak)
	virtual u32 getCaveID() { return 'none'; }                                // _78 (weak)
	virtual CourseInfo* getCurrentCourseInfo() { return nullptr; }            // _7C (weak)
	virtual bool challengeDisablePelplant() { return true; }                  // _80 (weak)
	virtual char* getCaveFilename() { return "caveinfo.txt"; }                // _84 (weak)
	virtual char* getEditorFilename() { return "random"; }                    // _88 (weak)
	virtual int getVsEditNumber() { return -2; }                              // _8C (weak)
	virtual bool openContainerWindow() { return false; }                      // _90 (weak)
	virtual void closeContainerWindow() { }                                   // _94 (weak)
	virtual void playMovie_firstexperience(int, Creature*) { }                // _98 (weak)
	virtual void playMovie_bootup(Onyon* onyon) { }                           // _9C (weak)
	virtual void playMovie_helloPikmin(Piki* piki) { }                        // _A0 (weak)
	virtual void enableTimer(f32 value, u32 type) { }                         // _A4 (weak)
	virtual void disableTimer(u32 type) { }                                   // _A8 (weak)
	virtual u32 getTimerType() { return DEMOTIMER_None; }                     // _AC (weak)
	virtual void onMovieStart(MovieConfig* movie, u32 unused, u32 naviID) { } // _B0 (weak)
	virtual void onMovieDone(MovieConfig*, u32, u32) { }                      // _B4 (weak)
	virtual void onMovieCommand(int);                                         // _B8
	virtual void startFadeout(f32);                                           // _BC
	virtual void startFadein(f32);                                            // _C0
	virtual void startFadeoutin(f32);                                         // _C4
	virtual void startFadeblack();                                            // _C8
	virtual void startFadewhite();                                            // _CC
	virtual void gmOrimaDown(int) { }                                         // _D0 (weak)
	virtual void gmPikminZero() { }                                           // _D4 (weak)
	virtual void openCaveInMenu(ItemCave::Item*, int) { }                     // _D8 (weak)
	virtual void openCaveMoreMenu(ItemHole::Item*, Controller*) { }           // _DC (weak)
	virtual void openKanketuMenu(ItemBigFountain::Item*, Controller*) { }     // _E0 (weak)
	virtual void on_setCamController(int) { }                                 // _E4 (weak)
	virtual void onTogglePlayer() { }                                         // _E8 (weak)
	virtual void onPlayerJoin() { }                                           // _EC (weak)
	virtual void onInit() { }                                                 // _F0 (weak)
	virtual void onUpdate() { }                                               // _F4 (weak)
	virtual void initJ3D();                                                   // _F8
	virtual void initViewports(Graphics& gfx);                                // _FC
	virtual void initResources();                                             // _100
	virtual void initGenerators();                                            // _104
	virtual void initLights();                                                // _108
	virtual void draw3D(Graphics& gfx);                                       // _10C
	virtual void draw2D(Graphics& gfx);                                       // _110
	virtual void drawParticle(Graphics& gfx, int viewportIndex);              // _114
	virtual void draw_Ogawa2D(Graphics& gfx);                                 // _118
	virtual void do_drawOtakaraWindow(Graphics& gfx);                         // _11C
	virtual void onSetupFloatMemory() { }                                     // _120 (weak)
	virtual void postSetupFloatMemory();                                      // _124
	virtual void onSetSoundScene() { }                                        // _128 (weak)
	virtual void onStartHeap() { }                                            // _12C (weak)
	virtual void onClearHeap() { }                                            // _130 (weak)
	/////////////////// VTABLE END

	void useSpecificFBTexture(JUTTexture*);
	void restoreFBTexture();
	void loadSync(IDelegate*, bool);
	u32 waitSyncLoad(bool);
	void dvdloadGameSystem();
	void movieDone(Game::MovieConfig*, u32, u32);
	void advanceDayCount();
	void saveToGeneratorCache(Game::CourseInfo*);
	void pmTogglePlayer();
	void pmPlayerJoin();
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
	void doSetView(int viewportNumber);
	void doViewCalc();
	void updateBlendCamera();
	void setSplitter(bool);
	void updateSplitter();
	void doDirectDrawPost(Graphics& gfx, Viewport*);
	void doDirectDraw(Graphics& gfx, Viewport*);
	void clearHeap();
	void setupFixMemory();
	void setupFixMemory_dvdload();
	bool enableAllocHalt();
	bool disableAllocHalt();
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

	int getNumWindows();
	int getActivePlayerID();
	void setupViewportMatrix(Graphics&);
	void j3dDraw(Viewport*);
	void j3dDrawPostShadow(Viewport*);
	void j3dDrawObjectLast(Viewport*);
	void j3dDrawPost(Viewport*);
	void j3dDrawLast(Viewport*);
	void j3dViewCalc(Viewport*);

	void initBlendCamera();
	void blend1to2();
	void blend2to1();

	void startSplit();
	void changeSplit();
	void endSplit();

	void startHeap();
	bool isAllocHalt();

	void drawRadarmap(Graphics&);

	inline void setXfbBounds(int x, int y)
	{
		mXfbBoundsX = x;
		mXfbBoundsY = y;
	}

	static u8 sOptDraw;

	// _00 		= VTBL
	// _00-_48 	= BaseHIOSection
	// All the remaining unnamed variables seem to be unused.
	u32 mMoney;                                               // _48
	u32 _4C;                                                  // _4C
	BlendCamera* mBlendCamera;                                // _50
	f32 mBlendFactor;                                         // _54
	bool mIsBlendCameraActive;                                // _58
	DvdThreadCommand mDvdThreadCommand;                       // _5C
	IDelegate3<MovieConfig*, u32, u32>* mMovieFinishCallback; // _C8
	IDelegate3<MovieConfig*, u32, u32>* mMovieStartCallback;  // _CC
	BlackFader* mBlackFader;                                  // _D0
	WipeInFader* mWipeInFader;                                // _D4
	WipeOutFader* mWipeOutFader;                              // _D8
	WipeOutInFader* mWipeOutInFader;                          // _DC
	u32 mUnusedVal;                                           // _E0
	int mPrevNaviIdx;                                         // _E4
	f32 mSecondViewportHeight;                                // _E8
	f32 mSplit;                                               // _EC
	u8 mSetSplit;                                             // _F0
	JUTTexture* mMizuTexture;                                 // _F4
	TreasureLight::Mgr* mTreasureLightMgr;                    // _F8
	JKRExpHeap* mTheExpHeap;                                  // _FC
	JKRHeap* mBackupHeap;                                     // _100
	PlayCamera* mOlimarCamera;                                // _104
	PlayCamera* mLouieCamera;                                 // _108
	Controller* mControllerP1;                                // _10C
	Controller* mControllerP2;                                // _110
	int mPlayerMode;                                          // _114
	Splitter* mSplitter;                                      // _118
	u8 mUnusedFlag;                                           // _11C, true by default, set false in single and vs game
	int _120;                                                 // _120
	u32 _124;                                                 // _124
	GameLightMgr* mLightMgr;                                  // _128
	Sys::DrawBuffers* mOpaqueDrawBuffer;                      // _12C
	Sys::DrawBuffers* mTransparentDrawBuffer;                 // _130
	int mTreasureGetState;                                    // _134
	Viewport* mTreasureGetViewport;                           // _138
	Creature* mDraw2DCreature;                                // _13C
	f32 mDraw2DCreatureScale;                                 // _140
	f32 mUnused2DCreatureVal;                                 // _144
	Delegate1<BaseGameSection, Rectf&>* mKanteiDelegate;      // _148
	ZoomCamera* mTreasureZoomCamera;                          // _14C
	u32 _150;                                                 // _150
	JUTTexture* mXfbImage;                                    // _154
	JUTTexture* mFbTexture;                                   // _158
	int mXfbBoundsX;                                          // _15C
	int mXfbBoundsY;                                          // _160
	u8 mXfbFlags;                                             // _164
	JUTTexture* mXfbTexture2d;                                // _168
	int mXfbBounds2dX;                                        // _16C
	int mXfbBounds2dY;                                        // _170

// not sure where this goes, but it goes after mTexData1 and before mContainer1 (VsGameSection).
#if BUILDTARGET == USADEMO1
	u8 _DemoPadding3[0x4];
#endif
};
} // namespace Game

#endif
