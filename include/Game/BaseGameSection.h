#ifndef _GAME_BASEGAMESECTION_H
#define _GAME_BASEGAMESECTION_H

#include "DvdThreadCommand.h"
#include "Game/BaseHIOSection.h"
#include "Game/PikiContainer.h"
#include "IDelegate.h"
#include "Vector3.h"
#include "Rect.h"

// NOTE, EVERYTHING UP UNTIL THE ACTUAL "STRUCT"
// DECLARATION ARE JUST FORWARD DECLARATIONS!
struct BlackFader;
struct BlendCamera;
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

struct BaseGameSection : public BaseHIOSection {
	struct ZoomCamera {
		~ZoomCamera();

		void doUpdate();
		void init(float, float, Vector3f&, struct Controller*);
		void makeLookAt();
	};

	BaseGameSection(struct JKRHeap*);
	~BaseGameSection();

	void addChallengeScore(int);
	void advanceDayCount();
	void captureRadarmap(struct Graphics&);
	void challengeDisablePelplant();
	void changeGeneratorCursor(Vector3f&);
	void clearHeap();
	void closeContainerWindow();
	void closeZoomWindow();
	void createFallPikminSound();
	void directDraw(Graphics&, struct Viewport*);
	void directDrawPost(Graphics&, Viewport*);
	void disableAllocHalt();
	void disableTimer(unsigned long);
	void do_drawOtakaraWindow(Graphics&);
	void doAnimation();
	void doDirectDraw(Graphics&, Viewport*);
	void doDirectDrawPost(Graphics&, Viewport*);
	void doDraw(Graphics&);
	void doEntry();
	void doSetView(int);
	void doSimpleDraw(Viewport*);
	void doSimulation(float);
	virtual bool doUpdate();
	void doViewCalc();
	void draw_Ogawa2D(Graphics&);
	void draw2D(Graphics&);
	void draw3D(Graphics&);
	void drawInit(Graphics&, Section::EDrawInitMode);
	void drawOtakaraWindow(Graphics&);
	void drawParticle(Graphics&, int);
	void dvdloadGameSystem();
	void enableAllocHalt();
	void enableTimer(float, unsigned long);
	virtual bool forceFinish();
	void getCaveFilename();
	void getCaveID();
	void getCurrentCourseInfo();
	void getCurrFloor();
	void getEditorFilename();
	void getTimerType();
	void getVsEditNumber();
	void gmOrimaDown(int);
	void gmPikminZero();
	void goCave(Game::ItemCave::Item*);
	void goMainMap(Game::ItemBigFountain::Item*);
	void goNextFloor(Game::ItemHole::Item*);
	void init();
	void initGenerators();
	void initJ3D();
	void initLights();
	void initResources();
	void initViewports(Graphics&);
	void isDevelopSection();
	void j3dSetView(Viewport*, bool);
	void loadSync(struct IDelegate*, bool);
	void movieDone(Game::MovieConfig*, unsigned long, unsigned long);
	void newdraw_draw3D(Graphics&);
	void newdraw_draw3D_all(Graphics&);
	void newdraw_drawAll(Viewport*);
	void newdraw_drawParticle(Graphics&);
	void newdraw_drawPostShadow(Viewport*);
	void newdraw_drawPreShadow(Viewport*);
	void on_setCamController(int);
	void onCameraBlendFinished(Game::CameraArg*);
	void onClearHeap();
	void onInit();
	void onKanteiDone(Rectf&);
	void onMovieCommand(int);
	void onMovieDone(Game::MovieConfig*, unsigned long, unsigned long);
	void onMovieStart(Game::MovieConfig*, unsigned long, unsigned long);
	void onPlayerJoin();
	void onSetSoundScene();
	void onSetupFloatMemory();
	void onStartHeap();
	void onTogglePlayer();
	void onUpdate();
	void openCaveInMenu(Game::ItemCave::Item*, int);
	void openCaveMoreMenu(Game::ItemHole::Item*, Controller*);
	void openContainerWindow();
	void openKanketuMenu(Game::ItemBigFountain::Item*, Controller*);
	void playMovie_bootup(Game::Onyon*);
	void playMovie_firstexperience(int, Game::Creature*);
	void playMovie_helloPikmin(Game::Piki*);
	void pmTogglePlayer();
	void postSetupFloatMemory();
	void pre2dDraw(Graphics&);
	void prepareFountainOn(Vector3f&);
	void prepareHoleIn(Vector3f&, bool);
	void restoreFBTexture();
	void saveToGeneratorCache(Game::CourseInfo*);
	void section_fadeout();
	void sendMessage(Game::GameMessage&);
	void setCamController();
	void setDefaultPSSceneInfo(PSGame::SceneInfo&);
	void setDraw2DCreature(Game::Creature*);
	void setDrawBuffer(int);
	void setFixNearFar(bool, float, float);
	void setPlayerMode(int);
	void setSplitter(bool);
	void setupFixMemory_dvdload();
	void setupFixMemory();
	void setupFloatMemory();
	void startFadeblack();
	void startFadein(float);
	void startFadeout(float);
	void startFadeoutin(float);
	void startFadewhite();
	void startKantei2D();
	void startMainBgm();
	void startZoomWindow();
	void test_draw_treasure_detector();
	void updateBlendCamera();
	void updateSplitter();
	void useSpecificFBTexture(struct JUTTexture*);
	void waitSyncLoad(bool);

	// Unused/inlined:
	void pmPlayerJoin();
	int getActivePlayerID();
	int getNumWindows();
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
	void drawRadarmap(Graphics&);

	BlendCamera* m_blendCamera;                           // _50
	float m_blendFactor;                                  // _54
	bool m_blendCameraActive;                             // _58
	DvdThreadCommand m_dvdThreadCommand;                  // _5C
	u32 _C8;                                              // _C8
	u32 _CC;                                              // _CC
	BlackFader* m_blackFader;                             // _D0
	WipeInFader* m_wipeInFader;                           // _D4
	WipeOutFader* m_wipeOutFader;                         // _D8
	WipeOutInFader* m_wipeOutInFader;                     // _DC
	u32 _E0;                                              // _E0
	int m_lastActiveNaviIndex;                            // _E4
	float m_vp2YScale;                                    // _E8
	float m_split;                                        // _EC
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
	float m_draw2DCreatureScale;                          // _140
	float _144;                                           // _144
	Delegate1<BaseGameSection, Rectf&>* m_kanteiDelegate; // _148
	ZoomCamera* m_treasureZoomCamera;                     // _14C
	u8 _150[4];                                           // _150
	JUTTexture* m_xfbImage;                               // _154
	JUTTexture* m_fbTexture;                              // _158
	int m_xfbTexture1;                                    // _15C
	int m_xfbTexture2;                                    // _160
	u8 _164;                                              // _164
	JUTTexture* _168;                                     // _168
	int m_texData1;                                       // _16C
	int _170;                                             // _170
	u8 _174[0xA8];                                        // _174
	PikiContainer m_container;                            // _214
};
} // namespace Game

#endif
