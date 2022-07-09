#ifndef _GAME_SINGLEGAMESECTION_H
#define _GAME_SINGLEGAMESECTION_H

#include "DvdThreadCommand.h"
#include "Game/BaseGameSection.h"
#include "Game/gamePlayData.h"
#include "efx/TChasePos.h"
#include "id32.h"

namespace og {
namespace Screen {
struct DispMemberSMenuAll;
} // namespace Screen
} // namespace og

namespace Game {
namespace SingleGame {
struct FSM;
struct GameState;
struct State;
} // namespace SingleGame

/**
 * @Size{0x278}
 */
struct SingleGameSection : BaseGameSection {
	SingleGameSection(JKRHeap*);

	virtual ~SingleGameSection();                                          // _00
	virtual bool doUpdate();                                               // _34
	virtual void doDraw(Graphics&);                                        // _38
	virtual int getCurrFloor();                                            // _50
	virtual bool isDevelopSection();                                       // _54
	virtual void startMainBgm();                                           // _5C
	virtual void section_fadeout();                                        // _60
	virtual void goNextFloor(ItemHole::Item*);                             // _64
	virtual void goCave(ItemCave::Item*);                                  // _68
	virtual void goMainMap(ItemBigFountain::Item*);                        // _6C
	virtual u32 getCaveID();                                               // _70
	virtual CourseInfo* getCurrentCourseInfo();                            // _74
	virtual char* getCaveFilename();                                       // _7C
	virtual void playMovie_firstexperience(int, Creature*);                // _90
	virtual void playMovie_bootup(Onyon*);                                 // _94
	virtual void playMovie_helloPikmin(Piki*);                             // _98
	virtual void enableTimer(float, unsigned long);                        // _9C
	virtual void disableTimer(unsigned long);                              // _A0
	virtual u32 getTimerType();                                            // _A4
	virtual void onMovieStart(MovieConfig*, unsigned long, unsigned long); // _A8
	virtual void onMovieDone(MovieConfig*, unsigned long, unsigned long);  // _AC
	virtual void onMovieCommand(int);                                      // _B0
	virtual void gmOrimaDown(int);                                         // _C8
	virtual void gmPikminZero();                                           // _CC
	virtual void openCaveInMenu(ItemCave::Item*, int);                     // _D0
	virtual void openCaveMoreMenu(ItemHole::Item*, Controller*);           // _D4
	virtual void openKanketuMenu(ItemBigFountain::Item*, Controller*);     // _D8
	virtual void on_setCamController(int);                                 // _DC
	virtual void onInit();                                                 // _E8
	virtual void onSetupFloatMemory();                                     // _118
	virtual void onSetSoundScene();                                        // _120
	virtual void onStartHeap();                                            // _124
	virtual void onClearHeap();                                            // _128

	void clearCaveMenus();
	void clearCaveOtakaraEarningsAndDrops();
	void createFallPikmins();
	void flow_goto_title();
	void loadMainMapSituation();
	void newCaveOtakaraEarningsAndDrops();
	void saveCaveMore();
	void saveMainMapSituation(bool isSubmergedCastle);
	void setDispMemberSMenu(og::Screen::DispMemberSMenuAll&);
	void setupCaveGames();
	void setupMainMapGames();
	unknown updateCaveMenus();
	void updateCaveScreen();
	void updateMainMapScreen();

	float m_timer;                                  // _174
	bool m_timerEnabled;                            // _178
	u32 m_timerType;                                // _17C
	u8 _180;                                        // _180
	struct Game::ItemCave::Item* m_currentCave;     // _184
	struct Game::ItemHole::Item* m_hole;            // _188
	struct Game::ItemBigFountain::Item* m_fountain; // _18C
	u32 _190;                                       // _190
	bool _194;                                      // _194
	// known to be at least 22 in length. Probably 32.
	// My guess there is that the spare 3 bytes is unintentional wiggle-room from this not being 4-byte aligned.
	char m_caveFilename[0x20];               // _195
	DvdThreadCommand _1B8;                   // _1B8
	Delegate<Game::SingleGameSection>* _224; // _224
	u8 _228;                                 // _228
	Game::CourseInfo* m_currentCourseInfo;   // _22C
	ID32* m_caveID;                          // _230
	bool m_isInCaveMaybe;                    // _23C
	u8 _23D;
	u8 _23E;
	Delegate<Game::SingleGameSection>* _240;
	efx::TChasePos* _244;
	int m_currentFloor;          // _248
	Game::SingleGame::FSM* _24C; // _24C
	Game::SingleGame::GameState* m_currentState;
	KindCounter _254;
	KindCounter _25C;
	KindCounter _264;
	KindCounter _26C;
	u8 _274;
};
} // namespace Game

#endif
