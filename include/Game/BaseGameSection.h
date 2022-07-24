#ifndef _GAME_BASEGAMESECTION_H
#define _GAME_BASEGAMESECTION_H

#include "DvdThreadCommand.h"
#include "Game/BaseHIOSection.h"
#include "Game/PikiContainer.h"
#include "IDelegate.h"
#include "Vector3.h"
#include "Rect.h"

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

	virtual ~BaseGameSection();                                                  // _08
	virtual void init();                                                         // _18
	virtual void drawInit(Graphics&, Section::EDrawInitMode);                    // _20
	virtual bool forceFinish();                                                  // _28
	virtual bool doUpdate();                                                     // _3C
	virtual void doDraw(Graphics&);                                              // _40
	virtual void sendMessage(Game::GameMessage&);                                // _50
	virtual void pre2dDraw(Graphics&);                                           // _54
	virtual int getCurrFloor();                                                  // _58
	virtual bool isDevelopSection();                                             // _5C
	virtual void addChallengeScore(int);                                         // _60
	virtual void startMainBgm();                                                 // _64
	virtual void section_fadeout();                                              // _68
	virtual void goNextFloor(Game::ItemHole::Item*);                             // _6C
	virtual void goCave(Game::ItemCave::Item*);                                  // _70
	virtual void goMainMap(Game::ItemBigFountain::Item*);                        // _74
	virtual u32 getCaveID();                                                     // _78
	virtual CourseInfo* getCurrentCourseInfo();                                  // _7C
	virtual void challengeDisablePelplant();                                     // _80
	virtual char* getCaveFilename();                                             // _84
	virtual char* getEditorFilename();                                           // _88
	virtual int getVsEditNumber();                                               // _8C
	virtual bool openContainerWindow();                                          // _90
	virtual void closeContainerWindow();                                         // _94
	virtual void playMovie_firstexperience(int, Game::Creature*);                // _98
	virtual void playMovie_bootup(Game::Onyon*);                                 // _9C
	virtual void playMovie_helloPikmin(Game::Piki*);                             // _A0
	virtual void enableTimer(float, unsigned long);                              // _A4
	virtual void disableTimer(unsigned long);                                    // _A8
	virtual u32 getTimerType();                                                  // _AC
	virtual void onMovieStart(Game::MovieConfig*, unsigned long, unsigned long); // _B0
	virtual void onMovieDone(Game::MovieConfig*, unsigned long, unsigned long);  // _B4
	virtual void onMovieCommand(int);                                            // _B8
	virtual void startFadeout(float);                                            // _BC
	virtual void startFadein(float);                                             // _C0
	virtual void startFadeoutin(float);                                          // _C4
	virtual void startFadeblack();                                               // _C8
	virtual void startFadewhite();                                               // _CC
	virtual void gmOrimaDown(int);                                               // _D0
	virtual void gmPikminZero();                                                 // _D4
	virtual void openCaveInMenu(Game::ItemCave::Item*, int);                     // _D8
	virtual void openCaveMoreMenu(Game::ItemHole::Item*, Controller*);           // _DC
	virtual void openKanketuMenu(Game::ItemBigFountain::Item*, Controller*);     // _E0
	virtual void on_setCamController(int);                                       // _E4
	virtual void onTogglePlayer();                                               // _E8
	virtual void onPlayerJoin();                                                 // _EC
	virtual void onInit();                                                       // _F0
	virtual void onUpdate();                                                     // _F4
	virtual void initJ3D();                                                      // _F8
	virtual void initViewports(Graphics&);                                       // _FC
	virtual void initResources();                                                // _100
	virtual void initGenerators();                                               // _104
	virtual void initLights();                                                   // _108
	virtual void draw3D(Graphics&);                                              // _10C
	virtual void draw2D(Graphics&);                                              // _110
	virtual void draw_Ogawa2D(Graphics&);                                        // _114
	virtual void do_drawOtakaraWindow(Graphics&);                                // _118
	virtual void onSetupFloatMemory();                                           // _11C
	virtual void postSetupFloatMemory();                                         // _120
	virtual void onSetSoundScene();                                              // _124
	virtual void onStartHeap();                                                  // _128
	virtual void onClearHeap();                                                  // _12C

	void advanceDayCount();
	void captureRadarmap(struct Graphics&);
	void changeGeneratorCursor(Vector3f&);
	void clearHeap();
	void closeZoomWindow();
	void createFallPikminSound();
	void directDraw(Graphics&, struct Viewport*);
	void directDrawPost(Graphics&, Viewport*);
	bool disableAllocHalt();
	void doAnimation();
	void doDirectDraw(Graphics&, Viewport*);
	void doDirectDrawPost(Graphics&, Viewport*);
	void doEntry();
	void doSetView(int);
	void doSimpleDraw(Viewport*);
	void doSimulation(float);
	void doViewCalc();
	void drawOtakaraWindow(Graphics&);
	void drawParticle(Graphics&, int);
	void dvdloadGameSystem();
	bool enableAllocHalt();
	void j3dSetView(Viewport*, bool);
	void loadSync(struct IDelegate*, bool);
	void movieDone(Game::MovieConfig*, unsigned long, unsigned long);
	void newdraw_draw3D(Graphics&);
	void newdraw_draw3D_all(Graphics&);
	void newdraw_drawAll(Viewport*);
	void newdraw_drawParticle(Graphics&);
	void newdraw_drawPostShadow(Viewport*);
	void newdraw_drawPreShadow(Viewport*);
	void onCameraBlendFinished(Game::CameraArg*);
	void onKanteiDone(Rectf&);
	void pmTogglePlayer();
	void prepareFountainOn(Vector3f&);
	void prepareHoleIn(Vector3f&, bool);
	void restoreFBTexture();
	void saveToGeneratorCache(Game::CourseInfo*);
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
	void startKantei2D();
	void startZoomWindow();
	void test_draw_treasure_detector();
	void updateBlendCamera();
	void updateSplitter();
	void useSpecificFBTexture(struct JUTTexture*);
	void waitSyncLoad(bool);

	// Unused/inlined:
	void pmPlayerJoin();
	bool isAllocHalt();
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

	BlendCamera* m_blendCamera;                                  // _50
	float m_blendFactor;                                         // _54
	bool m_blendCameraActive;                                    // _58
	DvdThreadCommand m_dvdThreadCommand;                         // _5C
	IDelegate3<MovieConfig*, unsigned long, unsigned long>* _C8; // _C8
	IDelegate3<MovieConfig*, unkptr, unsigned long>* _CC;        // _CC
	BlackFader* m_blackFader;                                    // _D0
	WipeInFader* m_wipeInFader;                                  // _D4
	WipeOutFader* m_wipeOutFader;                                // _D8
	WipeOutInFader* m_wipeOutInFader;                            // _DC
	u32 _E0;                                                     // _E0
	int m_lastActiveNaviIndex;                                   // _E4
	float m_vp2YScale;                                           // _E8
	float m_split;                                               // _EC
	u8 m_setSplit;                                               // _F0
	JUTTexture* m_mizuTexture;                                   // _F4
	TreasureLight::Mgr* m_treasureLightMgr;                      // _F8
	JKRHeap* m_theExpHeap;                                       // _FC
	JKRHeap* _100;                                               // _100
	PlayCamera* _104;                                            // _104
	PlayCamera* _108;                                            // _108
	Controller* _10C;                                            // _10C
	Controller* _110;                                            // _110
	int m_playerMode;                                            // _114
	HorizonalSplitter* m_splitter;                               // _118
	u8 _11C;                                                     // _11C
	int _120;                                                    // _120
	u32 _124;                                                    // _124
	GameLightMgr* m_lightMgr;                                    // _128
	Sys::DrawBuffers* _12C;                                      // _12C
	Sys::DrawBuffers* _130;                                      // _130
	int m_treasureGetState;                                      // _134
	Viewport* m_treasureGetViewport;                             // _138
	Pellet* m_draw2DCreature;                                    // _13C
	float m_draw2DCreatureScale;                                 // _140
	float _144;                                                  // _144
	Delegate1<BaseGameSection, Rectf&>* m_kanteiDelegate;        // _148
	ZoomCamera* m_treasureZoomCamera;                            // _14C
	u8 _150[4];                                                  // _150
	JUTTexture* m_xfbImage;                                      // _154
	JUTTexture* m_fbTexture;                                     // _158
	int m_xfbTexture1;                                           // _15C
	int m_xfbTexture2;                                           // _160
	u8 _164;                                                     // _164
	JUTTexture* _168;                                            // _168
	int m_texData1;                                              // _16C
	int _170;                                                    // _170
	u8 _174[0xA8];                                               // _174
	PikiContainer m_container;                                   // _214
};
} // namespace Game

#endif
