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

struct BaseGameSection : public BaseHIOSection {

	static u8 sOptDraw;
	struct ZoomCamera : public LookAtCamera {
		virtual ~ZoomCamera() { } // _08 (weak)
		virtual bool doUpdate();  // _78

		void init(f32, f32, Vector3f&, Controller*);
		void makeLookAt();

		// _00		= VTBL
		// _00-_198	= LookAtCamera
		f32 mAngleX;             // _198, angleX?
		f32 mAngleY;             // _19C, angleY?
		f32 _1A0;                // _1A0, cameraDistance?
		f32 _1A4;                // _1A4
		f32 _1A8;                // _1A8, angle?
		Controller* mController; // _1AC
	};

	BaseGameSection(struct JKRHeap*);

	/////////////////// VTABLE
	virtual ~BaseGameSection();                                   // _08
	virtual void init();                                          // _18
	virtual void drawInit(Graphics& gfx, Section::EDrawInitMode); // _20
	virtual bool forceFinish()
	{
		mIsLoadingDVD = true;
		return mIsLoadingDVD;
	}                                                                     // _28 (weak)
	virtual bool doUpdate();                                              // _3C
	virtual void doDraw(Graphics& gfx);                                   // _40
	virtual bool sendMessage(GameMessage&) { return false; }              // _50 (weak)
	virtual void pre2dDraw(Graphics& gfx) { }                             // _54 (weak)
	virtual int getCurrFloor() { return -1; }                             // _58 (weak)
	virtual bool isDevelopSection() { return true; }                      // _5C (weak)
	virtual void addChallengeScore(int) { }                               // _60 (weak)
	virtual void startMainBgm() { }                                       // _64 (weak)
	virtual void section_fadeout() { }                                    // _68 (weak)
	virtual void goNextFloor(ItemHole::Item*) { }                         // _6C (weak)
	virtual void goCave(ItemCave::Item*) { }                              // _70 (weak)
	virtual void goMainMap(ItemBigFountain::Item*) { }                    // _74 (weak)
	virtual u32 getCaveID() { return 'none'; }                            // _78 (weak)
	virtual CourseInfo* getCurrentCourseInfo() { return nullptr; }        // _7C (weak)
	virtual bool challengeDisablePelplant() { return true; }              // _80 (weak)
	virtual char* getCaveFilename() { return "caveinfo.txt"; }            // _84 (weak)
	virtual char* getEditorFilename() { return "random"; }                // _88 (weak)
	virtual int getVsEditNumber() { return -2; }                          // _8C (weak)
	virtual bool openContainerWindow() { return false; }                  // _90 (weak)
	virtual void closeContainerWindow() { }                               // _94 (weak)
	virtual void playMovie_firstexperience(int, Creature*) { }            // _98 (weak)
	virtual void playMovie_bootup(Onyon*) { }                             // _9C (weak)
	virtual void playMovie_helloPikmin(Piki*) { }                         // _A0 (weak)
	virtual void enableTimer(f32, u32) { }                                // _A4 (weak)
	virtual void disableTimer(u32) { }                                    // _A8 (weak)
	virtual u32 getTimerType() { return 0; }                              // _AC (weak)
	virtual void onMovieStart(MovieConfig*, u32, u32) { }                 // _B0 (weak)
	virtual void onMovieDone(MovieConfig*, u32, u32) { }                  // _B4 (weak)
	virtual void onMovieCommand(int);                                     // _B8
	virtual void startFadeout(f32);                                       // _BC
	virtual void startFadein(f32);                                        // _C0
	virtual void startFadeoutin(f32);                                     // _C4
	virtual void startFadeblack();                                        // _C8
	virtual void startFadewhite();                                        // _CC
	virtual void gmOrimaDown(int) { }                                     // _D0 (weak)
	virtual void gmPikminZero() { }                                       // _D4 (weak)
	virtual void openCaveInMenu(ItemCave::Item*, int) { }                 // _D8 (weak)
	virtual void openCaveMoreMenu(ItemHole::Item*, Controller*) { }       // _DC (weak)
	virtual void openKanketuMenu(ItemBigFountain::Item*, Controller*) { } // _E0 (weak)
	virtual void on_setCamController(int) { }                             // _E4 (weak)
	virtual void onTogglePlayer() { }                                     // _E8 (weak)
	virtual void onPlayerJoin() { }                                       // _EC (weak)
	virtual void onInit() { }                                             // _F0 (weak)
	virtual void onUpdate() { }                                           // _F4 (weak)
	virtual void initJ3D();                                               // _F8
	virtual void initViewports(Graphics& gfx);                            // _FC
	virtual void initResources();                                         // _100
	virtual void initGenerators();                                        // _104
	virtual void initLights();                                            // _108
	virtual void draw3D(Graphics& gfx);                                   // _10C
	virtual void draw2D(Graphics& gfx);                                   // _110
	virtual void drawParticle(Graphics& gfx, int viewportIndex);          // _114
	virtual void draw_Ogawa2D(Graphics& gfx);                             // _118
	virtual void do_drawOtakaraWindow(Graphics& gfx);                     // _11C
	virtual void onSetupFloatMemory() { }                                 // _120 (weak)
	virtual void postSetupFloatMemory();                                  // _124
	virtual void onSetSoundScene() { }                                    // _128 (weak)
	virtual void onStartHeap() { }                                        // _12C (weak)
	virtual void onClearHeap() { }                                        // _130 (weak)
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

	// _00 		= VTBL
	// _00-_48 	= BaseHIOSection
	// should there not be another 0x4 here in USA (not demo)? ...
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
	u32 _E0;                                                  // _E0
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
	u8 _11C;                                                  // _11C
	int _120;                                                 // _120
	u32 _124;                                                 // _124
	GameLightMgr* mLightMgr;                                  // _128
	Sys::DrawBuffers* mDrawBuffer1;                           // _12C
	Sys::DrawBuffers* mDrawBuffer2;                           // _130
	int mTreasureGetState;                                    // _134
	Viewport* mTreasureGetViewport;                           // _138
	Creature* mDraw2DCreature;                                // _13C
	f32 mDraw2DCreatureScale;                                 // _140
	f32 _144;                                                 // _144
	Delegate1<BaseGameSection, Rectf&>* mKanteiDelegate;      // _148
	ZoomCamera* mTreasureZoomCamera;                          // _14C
	u32 _150;                                                 // _150
	JUTTexture* mXfbImage;                                    // _154
	JUTTexture* mFbTexture;                                   // _158
	int mXfbBoundsX;                                          // _15C
	int mXfbBoundsY;                                          // _160
	u8 mXfbFlags;                                             // _164
	JUTTexture* _168;                                         // _168
	int mTexData1;                                            // _16C
	int _170;                                                 // _170
	                                                          // u8 _174[0xA0];                                        // _174
// not sure where this goes, but it goes after mTexData1 and before mContainer1 (VsGameSection).
#if BUILDTARGET == USADEMO1
	u8 _DemoPadding3[0x4];
#endif
};
} // namespace Game

#endif
