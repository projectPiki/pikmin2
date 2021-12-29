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
    .4byte
   drawInit__Q24Game15BaseGameSectionFR8GraphicsQ27Section13EDrawInitMode .4byte
   doExit__7SectionFv .4byte forceFinish__Q24Game15BaseGameSectionFv .4byte
   forceReset__7SectionFv .4byte getCurrentSection__7SectionFv .4byte
   doLoadingStart__7SectionFv .4byte doLoading__7SectionFv .4byte
   doUpdate__Q24Game13VsGameSectionFv .4byte
   doDraw__Q24Game13VsGameSectionFR8Graphics .4byte isFinishable__7SectionFv
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
    .4byte
   playMovie_firstexperience__Q24Game15BaseGameSectionFiPQ24Game8Creature .4byte
   playMovie_bootup__Q24Game15BaseGameSectionFPQ24Game5Onyon .4byte
   playMovie_helloPikmin__Q24Game15BaseGameSectionFPQ24Game4Piki .4byte
   enableTimer__Q24Game15BaseGameSectionFfUl .4byte
   disableTimer__Q24Game15BaseGameSectionFUl .4byte
   getTimerType__Q24Game15BaseGameSectionFv .4byte
   onMovieStart__Q24Game13VsGameSectionFPQ24Game11MovieConfigUlUl .4byte
   onMovieDone__Q24Game13VsGameSectionFPQ24Game11MovieConfigUlUl .4byte
   onMovieCommand__Q24Game15BaseGameSectionFi .4byte
   startFadeout__Q24Game15BaseGameSectionFf .4byte
   startFadein__Q24Game15BaseGameSectionFf .4byte
   startFadeoutin__Q24Game15BaseGameSectionFf .4byte
   startFadeblack__Q24Game15BaseGameSectionFv .4byte
   startFadewhite__Q24Game15BaseGameSectionFv .4byte
   gmOrimaDown__Q24Game13VsGameSectionFi .4byte
   gmPikminZero__Q24Game13VsGameSectionFv .4byte
   openCaveInMenu__Q24Game15BaseGameSectionFPQ34Game8ItemCave4Itemi .4byte
   openCaveMoreMenu__Q24Game13VsGameSectionFPQ34Game8ItemHole4ItemP10Controller
    .4byte
   openKanketuMenu__Q24Game13VsGameSectionFPQ34Game15ItemBigFountain4ItemP10Controller
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
	virtual void _00() = 0;           // _00
	virtual void run();               // _04
	virtual void update();            // _08
	virtual void draw(Graphics&);     // _0C
	virtual void _10() = 0;           // _10
	virtual void drawInit(Graphics&); // _14
	virtual void _18() = 0;           // _18
	virtual void doExit();            // _1C
	virtual void _20() = 0;           // _20
	virtual void forceReset();        // _24
	virtual void getCurrentSection(); // _28
	virtual void doLoadingStart();    // _2C
	virtual void doLoading();         // _30
	virtual void _34() = 0;           // _34
	virtual void _38() = 0;           // _38
	virtual void isFinishable();      // _3C

	// _00 VTBL
};

namespace Game {
struct BaseGameSection {
	virtual void _00() = 0;                                   // _00
	virtual void _04() = 0;                                   // _04
	virtual void _08() = 0;                                   // _08
	virtual void _0C() = 0;                                   // _0C
	virtual void init();                                      // _10
	virtual void _14() = 0;                                   // _14
	virtual void drawInit(Graphics&, Section::EDrawInitMode); // _18
	virtual void _1C() = 0;                                   // _1C
	virtual void forceFinish();                               // _20
	virtual void _24() = 0;                                   // _24
	virtual void _28() = 0;                                   // _28
	virtual void _2C() = 0;                                   // _2C
	virtual void _30() = 0;                                   // _30
	virtual void _34() = 0;                                   // _34
	virtual void _38() = 0;                                   // _38
	virtual void _3C() = 0;                                   // _3C
	virtual void _40() = 0;                                   // _40
	virtual void _44() = 0;                                   // _44
	virtual void _48() = 0;                                   // _48
	virtual void _4C() = 0;                                   // _4C
	virtual void _50() = 0;                                   // _50
	virtual void isDevelopSection();                          // _54
	virtual void _58() = 0;                                   // _58
	virtual void _5C() = 0;                                   // _5C
	virtual void _60() = 0;                                   // _60
	virtual void _64() = 0;                                   // _64
	virtual void goCave(ItemCave::Item*);                     // _68
	virtual void goMainMap(ItemBigFountain::Item*);           // _6C
	virtual void getCaveID();                                 // _70
	virtual void getCurrentCourseInfo();                      // _74
	virtual void _78() = 0;                                   // _78
	virtual void _7C() = 0;                                   // _7C
	virtual void _80() = 0;                                   // _80
	virtual void _84() = 0;                                   // _84
	virtual void openContainerWindow();                       // _88
	virtual void closeContainerWindow();                      // _8C
	virtual void playMovie_firstexperience(int, Creature*);   // _90
	virtual void playMovie_bootup(Onyon*);                    // _94
	virtual void playMovie_helloPikmin(Piki*);                // _98
	virtual void enableTimer(float, unsigned long);           // _9C
	virtual void disableTimer(unsigned long);                 // _A0
	virtual void getTimerType();                              // _A4
	virtual void _A8() = 0;                                   // _A8
	virtual void _AC() = 0;                                   // _AC
	virtual void onMovieCommand(int);                         // _B0
	virtual void startFadeout(float);                         // _B4
	virtual void startFadein(float);                          // _B8
	virtual void startFadeoutin(float);                       // _BC
	virtual void startFadeblack();                            // _C0
	virtual void startFadewhite();                            // _C4
	virtual void _C8() = 0;                                   // _C8
	virtual void _CC() = 0;                                   // _CC
	virtual void openCaveInMenu(ItemCave::Item*, int);        // _D0
	virtual void _D4() = 0;                                   // _D4
	virtual void _D8() = 0;                                   // _D8
	virtual void on_setCamController(int);                    // _DC
	virtual void onTogglePlayer();                            // _E0
	virtual void onPlayerJoin();                              // _E4
	virtual void _E8() = 0;                                   // _E8
	virtual void onUpdate();                                  // _EC
	virtual void initJ3D();                                   // _F0
	virtual void initViewports(Graphics&);                    // _F4
	virtual void initResources();                             // _F8
	virtual void initGenerators();                            // _FC
	virtual void initLights();                                // _100
	virtual void draw3D(Graphics&);                           // _104
	virtual void draw2D(Graphics&);                           // _108
	virtual void drawParticle(Graphics&, int);                // _10C
	virtual void draw_Ogawa2D(Graphics&);                     // _110
	virtual void do_drawOtakaraWindow(Graphics&);             // _114
	virtual void _118() = 0;                                  // _118
	virtual void _11C() = 0;                                  // _11C
	virtual void _120() = 0;                                  // _120
	virtual void onStartHeap();                               // _124

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct BaseHIOSection {
	virtual void _00() = 0;             // _00
	virtual void _04() = 0;             // _04
	virtual void _08() = 0;             // _08
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
	virtual void _3C() = 0;             // _3C
	virtual void initHIO(HIORootNode*); // _40
	virtual void refreshHIO();          // _44

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct VsGameSection : public Section,
                       public BaseGameSection,
                       public BaseHIOSection {
	virtual ~VsGameSection();                                 // _00
	virtual void run();                                       // _04
	virtual void update();                                    // _08
	virtual void draw(Graphics&);                             // _0C
	virtual void init();                                      // _10
	virtual void drawInit(Graphics&);                         // _14
	virtual void drawInit(Graphics&, Section::EDrawInitMode); // _18
	virtual void doExit();                                    // _1C
	virtual void forceFinish();                               // _20
	virtual void forceReset();                                // _24
	virtual void getCurrentSection();                         // _28
	virtual void doLoadingStart();                            // _2C
	virtual void doLoading();                                 // _30
	virtual void doUpdate();                                  // _34
	virtual void doDraw(Graphics&);                           // _38
	virtual void isFinishable();                              // _3C
	virtual void initHIO(HIORootNode*);                       // _40
	virtual void refreshHIO();                                // _44
	virtual void sendMessage(GameMessage&);                   // _48
	virtual void pre2dDraw(Graphics&);                        // _4C
	virtual void getCurrFloor();                              // _50
	virtual void isDevelopSection();                          // _54
	virtual void addChallengeScore(int);                      // _58
	virtual void startMainBgm();                              // _5C
	virtual void section_fadeout();                           // _60
	virtual void goNextFloor(ItemHole::Item*);                // _64
	virtual void goCave(ItemCave::Item*);                     // _68
	virtual void goMainMap(ItemBigFountain::Item*);           // _6C
	virtual void getCaveID();                                 // _70
	virtual void getCurrentCourseInfo();                      // _74
	virtual void challengeDisablePelplant();                  // _78
	virtual void getCaveFilename();                           // _7C
	virtual void getEditorFilename();                         // _80
	virtual void getVsEditNumber();                           // _84
	virtual void openContainerWindow();                       // _88
	virtual void closeContainerWindow();                      // _8C
	virtual void playMovie_firstexperience(int, Creature*);   // _90
	virtual void playMovie_bootup(Onyon*);                    // _94
	virtual void playMovie_helloPikmin(Piki*);                // _98
	virtual void enableTimer(float, unsigned long);           // _9C
	virtual void disableTimer(unsigned long);                 // _A0
	virtual void getTimerType();                              // _A4
	virtual void onMovieStart(MovieConfig*, unsigned long,
	                          unsigned long);                             // _A8
	virtual void onMovieDone(MovieConfig*, unsigned long, unsigned long); // _AC
	virtual void onMovieCommand(int);                                     // _B0
	virtual void startFadeout(float);                                     // _B4
	virtual void startFadein(float);                                      // _B8
	virtual void startFadeoutin(float);                                   // _BC
	virtual void startFadeblack();                                        // _C0
	virtual void startFadewhite();                                        // _C4
	virtual void gmOrimaDown(int);                                        // _C8
	virtual void gmPikminZero();                                          // _CC
	virtual void openCaveInMenu(ItemCave::Item*, int);                    // _D0
	virtual void openCaveMoreMenu(ItemHole::Item*, Controller*);          // _D4
	virtual void openKanketuMenu(ItemBigFountain::Item*, Controller*);    // _D8
	virtual void on_setCamController(int);                                // _DC
	virtual void onTogglePlayer();                                        // _E0
	virtual void onPlayerJoin();                                          // _E4
	virtual void onInit();                                                // _E8
	virtual void onUpdate();                                              // _EC
	virtual void initJ3D();                                               // _F0
	virtual void initViewports(Graphics&);                                // _F4
	virtual void initResources();                                         // _F8
	virtual void initGenerators();                                        // _FC
	virtual void initLights();                    // _100
	virtual void draw3D(Graphics&);               // _104
	virtual void draw2D(Graphics&);               // _108
	virtual void drawParticle(Graphics&, int);    // _10C
	virtual void draw_Ogawa2D(Graphics&);         // _110
	virtual void do_drawOtakaraWindow(Graphics&); // _114
	virtual void onSetupFloatMemory();            // _118
	virtual void postSetupFloatMemory();          // _11C
	virtual void onSetSoundScene();               // _120
	virtual void onStartHeap();                   // _124
	virtual void onClearHeap();                   // _128
	virtual void player2enabled();                // _12C

	// _00 VTBL
};
} // namespace Game

#endif
