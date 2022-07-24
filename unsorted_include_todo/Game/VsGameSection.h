#ifndef _GAME_VSGAMESECTION_H
#define _GAME_VSGAMESECTION_H

/*
    __vt__Q24Game13VsGameSection:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game13VsGameSectionFv
    .4byte run__7SectionFv
    .4byte update__7SectionFv
    .4byte draw__7SectionFR8Graphics
    .4byte init__Q24Game15BaseGameSectionFv
    .4byte drawInit__7SectionFR8Graphics
    .4byte drawInit__Q24Game15BaseGameSectionFR8GraphicsQ27Section13EDrawInitMode
    .4byte doExit__7SectionFv
    .4byte forceFinish__Q24Game15BaseGameSectionFv
    .4byte forceReset__7SectionFv
    .4byte getCurrentSection__7SectionFv
    .4byte doLoadingStart__7SectionFv
    .4byte doLoading__7SectionFv
    .4byte doUpdate__Q24Game13VsGameSectionFv
    .4byte doDraw__Q24Game13VsGameSectionFR8Graphics
    .4byte isFinishable__7SectionFv
    .4byte initHIO__Q24Game14BaseHIOSectionFPQ24Game11HIORootNode
    .4byte refreshHIO__Q24Game14BaseHIOSectionFv
    .4byte sendMessage__Q24Game13VsGameSectionFRQ24Game11GameMessage
    .4byte pre2dDraw__Q24Game13VsGameSectionFR8Graphics
    .4byte getCurrFloor__Q24Game13VsGameSectionFv
    .4byte isDevelopSection__Q24Game15BaseGameSectionFv
    .4byte addChallengeScore__Q24Game13VsGameSectionFi
    .4byte startMainBgm__Q24Game13VsGameSectionFv
    .4byte section_fadeout__Q24Game13VsGameSectionFv
    .4byte goNextFloor__Q24Game13VsGameSectionFPQ34Game8ItemHole4Item
    .4byte goCave__Q24Game15BaseGameSectionFPQ34Game8ItemCave4Item
    .4byte goMainMap__Q24Game15BaseGameSectionFPQ34Game15ItemBigFountain4Item
    .4byte getCaveID__Q24Game15BaseGameSectionFv
    .4byte getCurrentCourseInfo__Q24Game15BaseGameSectionFv
    .4byte challengeDisablePelplant__Q24Game13VsGameSectionFv
    .4byte getCaveFilename__Q24Game13VsGameSectionFv
    .4byte getEditorFilename__Q24Game13VsGameSectionFv
    .4byte getVsEditNumber__Q24Game13VsGameSectionFv
    .4byte openContainerWindow__Q24Game15BaseGameSectionFv
    .4byte closeContainerWindow__Q24Game15BaseGameSectionFv
    .4byte playMovie_firstexperience__Q24Game15BaseGameSectionFiPQ24Game8Creature
    .4byte playMovie_bootup__Q24Game15BaseGameSectionFPQ24Game5Onyon
    .4byte playMovie_helloPikmin__Q24Game15BaseGameSectionFPQ24Game4Piki
    .4byte enableTimer__Q24Game15BaseGameSectionFfUl
    .4byte disableTimer__Q24Game15BaseGameSectionFUl
    .4byte getTimerType__Q24Game15BaseGameSectionFv
    .4byte onMovieStart__Q24Game13VsGameSectionFPQ24Game11MovieConfigUlUl
    .4byte onMovieDone__Q24Game13VsGameSectionFPQ24Game11MovieConfigUlUl
    .4byte onMovieCommand__Q24Game15BaseGameSectionFi
    .4byte startFadeout__Q24Game15BaseGameSectionFf
    .4byte startFadein__Q24Game15BaseGameSectionFf
    .4byte startFadeoutin__Q24Game15BaseGameSectionFf
    .4byte startFadeblack__Q24Game15BaseGameSectionFv
    .4byte startFadewhite__Q24Game15BaseGameSectionFv
    .4byte gmOrimaDown__Q24Game13VsGameSectionFi
    .4byte gmPikminZero__Q24Game13VsGameSectionFv
    .4byte openCaveInMenu__Q24Game15BaseGameSectionFPQ34Game8ItemCave4Itemi
    .4byte openCaveMoreMenu__Q24Game13VsGameSectionFPQ34Game8ItemHole4ItemP10Controller
    .4byte openKanketuMenu__Q24Game13VsGameSectionFPQ34Game15ItemBigFountain4ItemP10Controller
    .4byte on_setCamController__Q24Game15BaseGameSectionFi
    .4byte onTogglePlayer__Q24Game15BaseGameSectionFv
    .4byte onPlayerJoin__Q24Game15BaseGameSectionFv
    .4byte onInit__Q24Game13VsGameSectionFv
    .4byte onUpdate__Q24Game15BaseGameSectionFv
    .4byte initJ3D__Q24Game15BaseGameSectionFv
    .4byte initViewports__Q24Game15BaseGameSectionFR8Graphics
    .4byte initResources__Q24Game15BaseGameSectionFv
    .4byte initGenerators__Q24Game15BaseGameSectionFv
    .4byte initLights__Q24Game15BaseGameSectionFv
    .4byte draw3D__Q24Game15BaseGameSectionFR8Graphics
    .4byte draw2D__Q24Game15BaseGameSectionFR8Graphics
    .4byte drawParticle__Q24Game15BaseGameSectionFR8Graphicsi
    .4byte draw_Ogawa2D__Q24Game15BaseGameSectionFR8Graphics
    .4byte do_drawOtakaraWindow__Q24Game15BaseGameSectionFR8Graphics
    .4byte onSetupFloatMemory__Q24Game13VsGameSectionFv
    .4byte postSetupFloatMemory__Q24Game13VsGameSectionFv
    .4byte onSetSoundScene__Q24Game13VsGameSectionFv
    .4byte onStartHeap__Q24Game15BaseGameSectionFv
    .4byte onClearHeap__Q24Game13VsGameSectionFv
    .4byte player2enabled__Q24Game13VsGameSectionFv
*/

struct Section {
	virtual ~Section();               // _08
	virtual void run();               // _0C
	virtual void update();            // _10
	virtual void draw(Graphics&);     // _14
	virtual void _18() = 0;           // _18
	virtual void drawInit(Graphics&); // _1C (inline)
	virtual void _20() = 0;           // _20
	virtual void doExit();            // _24 (inline)
	virtual void _28() = 0;           // _28
	virtual void forceReset();        // _2C (inline)
	virtual void getCurrentSection(); // _30 (inline)
	virtual void doLoadingStart();    // _34 (inline)
	virtual void doLoading();         // _38 (inline)
	virtual void doUpdate();          // _3C
	virtual void doDraw(Graphics&);   // _40
	virtual void isFinishable();      // _44 (inline)
};

namespace Game {
struct BaseGameSection {
	virtual ~BaseGameSection();                                            // _08
	virtual void _0C() = 0;                                                // _0C
	virtual void _10() = 0;                                                // _10
	virtual void _14() = 0;                                                // _14
	virtual void init();                                                   // _18
	virtual void _1C() = 0;                                                // _1C
	virtual void drawInit(Graphics&, Section::EDrawInitMode);              // _20
	virtual void _24() = 0;                                                // _24
	virtual void forceFinish();                                            // _28 (inline)
	virtual void _2C() = 0;                                                // _2C
	virtual void _30() = 0;                                                // _30
	virtual void _34() = 0;                                                // _34
	virtual void _38() = 0;                                                // _38
	virtual void doUpdate();                                               // _3C
	virtual void doDraw(Graphics&);                                        // _40
	virtual void _44() = 0;                                                // _44
	virtual void _48() = 0;                                                // _48
	virtual void _4C() = 0;                                                // _4C
	virtual void sendMessage(GameMessage&);                                // _50
	virtual void pre2dDraw(Graphics&);                                     // _54
	virtual void getCurrFloor();                                           // _58
	virtual void isDevelopSection();                                       // _5C (inline)
	virtual void addChallengeScore(int);                                   // _60
	virtual void startMainBgm();                                           // _64
	virtual void section_fadeout();                                        // _68
	virtual void goNextFloor(ItemHole::Item*);                             // _6C
	virtual void goCave(ItemCave::Item*);                                  // _70 (inline)
	virtual void goMainMap(ItemBigFountain::Item*);                        // _74 (inline)
	virtual void getCaveID();                                              // _78 (inline)
	virtual void getCurrentCourseInfo();                                   // _7C (inline)
	virtual void challengeDisablePelplant();                               // _80 (inline)
	virtual void getCaveFilename();                                        // _84 (inline)
	virtual void getEditorFilename();                                      // _88 (inline)
	virtual void getVsEditNumber();                                        // _8C (inline)
	virtual void openContainerWindow();                                    // _90 (inline)
	virtual void closeContainerWindow();                                   // _94 (inline)
	virtual void playMovie_firstexperience(int, Creature*);                // _98 (inline)
	virtual void playMovie_bootup(Onyon*);                                 // _9C (inline)
	virtual void playMovie_helloPikmin(Piki*);                             // _A0 (inline)
	virtual void enableTimer(float, unsigned long);                        // _A4 (inline)
	virtual void disableTimer(unsigned long);                              // _A8 (inline)
	virtual void getTimerType();                                           // _AC (inline)
	virtual void onMovieStart(MovieConfig*, unsigned long, unsigned long); // _B0
	virtual void onMovieDone(MovieConfig*, unsigned long, unsigned long);  // _B4
	virtual void onMovieCommand(int);                                      // _B8
	virtual void startFadeout(float);                                      // _BC
	virtual void startFadein(float);                                       // _C0
	virtual void startFadeoutin(float);                                    // _C4
	virtual void startFadeblack();                                         // _C8
	virtual void startFadewhite();                                         // _CC
	virtual void gmOrimaDown(int);                                         // _D0
	virtual void gmPikminZero();                                           // _D4
	virtual void openCaveInMenu(ItemCave::Item*, int);                     // _D8 (inline)
	virtual void openCaveMoreMenu(ItemHole::Item*, Controller*);           // _DC
	virtual void openKanketuMenu(ItemBigFountain::Item*, Controller*);     // _E0
	virtual void on_setCamController(int);                                 // _E4 (inline)
	virtual void onTogglePlayer();                                         // _E8 (inline)
	virtual void onPlayerJoin();                                           // _EC (inline)
	virtual void onInit();                                                 // _F0
	virtual void onUpdate();                                               // _F4 (inline)
	virtual void initJ3D();                                                // _F8
	virtual void initViewports(Graphics&);                                 // _FC
	virtual void initResources();                                          // _100
	virtual void initGenerators();                                         // _104
	virtual void initLights();                                             // _108
	virtual void draw3D(Graphics&);                                        // _10C
	virtual void draw2D(Graphics&);                                        // _110
	virtual void drawParticle(Graphics&, int);                             // _114
	virtual void draw_Ogawa2D(Graphics&);                                  // _118
	virtual void do_drawOtakaraWindow(Graphics&);                          // _11C
	virtual void onSetupFloatMemory();                                     // _120
	virtual void postSetupFloatMemory();                                   // _124
	virtual void onSetSoundScene();                                        // _128
	virtual void onStartHeap();                                            // _12C (inline)
};
} // namespace Game

namespace Game {
struct BaseHIOSection {
	virtual ~BaseHIOSection();          // _08
	virtual void _0C() = 0;             // _0C
	virtual void _10() = 0;             // _10
	virtual void _14() = 0;             // _14
	virtual void _18() = 0;             // _18
	virtual void _1C() = 0;             // _1C
	virtual void _20() = 0;             // _20
	virtual void _24() = 0;             // _24
	virtual void _28() = 0;             // _28
	virtual void _2C() = 0;             // _2C
	virtual void _30() = 0;             // _30
	virtual void _34() = 0;             // _34
	virtual void _38() = 0;             // _38
	virtual void doUpdate();            // _3C
	virtual void doDraw(Graphics&);     // _40
	virtual void _44() = 0;             // _44
	virtual void initHIO(HIORootNode*); // _48
	virtual void refreshHIO();          // _4C
};
} // namespace Game

namespace Game {
struct VsGameSection : public Section, public BaseGameSection, public BaseHIOSection {
	virtual ~VsGameSection();                                              // _08
	virtual void doUpdate();                                               // _3C
	virtual void doDraw(Graphics&);                                        // _40
	virtual void sendMessage(GameMessage&);                                // _50
	virtual void pre2dDraw(Graphics&);                                     // _54
	virtual void getCurrFloor();                                           // _58
	virtual void addChallengeScore(int);                                   // _60
	virtual void startMainBgm();                                           // _64
	virtual void section_fadeout();                                        // _68
	virtual void goNextFloor(ItemHole::Item*);                             // _6C
	virtual void challengeDisablePelplant();                               // _80 (inline)
	virtual void getCaveFilename();                                        // _84 (inline)
	virtual void getEditorFilename();                                      // _88 (inline)
	virtual void getVsEditNumber();                                        // _8C (inline)
	virtual void onMovieStart(MovieConfig*, unsigned long, unsigned long); // _B0
	virtual void onMovieDone(MovieConfig*, unsigned long, unsigned long);  // _B4
	virtual void gmOrimaDown(int);                                         // _D0
	virtual void gmPikminZero();                                           // _D4
	virtual void openCaveMoreMenu(ItemHole::Item*, Controller*);           // _DC
	virtual void openKanketuMenu(ItemBigFountain::Item*, Controller*);     // _E0
	virtual void onInit();                                                 // _F0
	virtual void onSetupFloatMemory();                                     // _120
	virtual void postSetupFloatMemory();                                   // _124
	virtual void onSetSoundScene();                                        // _128
	virtual void onClearHeap();                                            // _130
	virtual void player2enabled();                                         // _134 (inline)

	VsGameSection();
	void initPlayData();
	void loadChallengeStageList();
	void loadVsStageList();
	void clearCaveMenus();
	void updateCaveMenus();
	void createFallPikmins(Game::PikiContainer&, int);
	void createVsPikmins();
	void initCardPellets();
	void initCardGeneration();
	void updateCardGeneration();
	void useCard();
	void dropCard(Game::VsGameSection::DropCardArg&);
	void createYellowBedamas(int);
	void createRedBlueBedamas(Vector3<float>&);
	void calcVsScores();
	void clearGetDopeCount();
	void getGetDopeCount(int, int);
	void clearGetCherryCount();
};
} // namespace Game

#endif
