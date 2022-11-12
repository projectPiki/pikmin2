#ifndef _GAME_SINGLEGAMESECTION_H
#define _GAME_SINGLEGAMESECTION_H

#include "DvdThreadCommand.h"
#include "Game/BaseGameSection.h"
#include "Game/gamePlayData.h"
#include "Game/gameStages.h"
#include "efx/TChasePos.h"
#include "id32.h"

namespace og {
namespace Screen {
struct DispMemberSMenuAll;
}
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
struct SingleGameSection : public BaseGameSection {
	SingleGameSection(JKRHeap*);

	virtual ~SingleGameSection();                                      // _08
	virtual bool doUpdate();                                           // _3C
	virtual void doDraw(Graphics& gfx);                                // _40
	virtual int getCurrFloor();                                        // _58 (weak)
	virtual bool isDevelopSection();                                   // _5C (weak)
	virtual void startMainBgm();                                       // _64
	virtual void section_fadeout();                                    // _68
	virtual void goNextFloor(ItemHole::Item*);                         // _6C
	virtual void goCave(ItemCave::Item*);                              // _70
	virtual void goMainMap(ItemBigFountain::Item*);                    // _74
	virtual u32 getCaveID();                                           // _78 (weak)
	virtual CourseInfo* getCurrentCourseInfo();                        // _7C (weak)
	virtual char* getCaveFilename();                                   // _84 (weak)
	virtual void playMovie_firstexperience(int, Creature*);            // _98
	virtual void playMovie_bootup(Onyon*);                             // _9C
	virtual void playMovie_helloPikmin(Piki*);                         // _A0
	virtual void enableTimer(float, u32);                              // _A4
	virtual void disableTimer(u32);                                    // _A8
	virtual u32 getTimerType();                                        // _AC (weak)
	virtual void onMovieStart(MovieConfig*, u32, u32);                 // _B0
	virtual void onMovieDone(MovieConfig*, u32, u32);                  // _B4
	virtual void onMovieCommand(int);                                  // _B8
	virtual void gmOrimaDown(int);                                     // _D0
	virtual void gmPikminZero();                                       // _D4
	virtual void openCaveInMenu(ItemCave::Item*, int);                 // _D8
	virtual void openCaveMoreMenu(ItemHole::Item*, Controller*);       // _DC
	virtual void openKanketuMenu(ItemBigFountain::Item*, Controller*); // _E0
	virtual void on_setCamController(int);                             // _E4
	virtual void onInit();                                             // _F0
	virtual void onSetupFloatMemory();                                 // _120
	virtual void onSetSoundScene();                                    // _128
	virtual void onStartHeap();                                        // _12C
	virtual void onClearHeap();                                        // _130

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
	ID32 m_caveID;                           // _230
	bool m_inCave;                           // _23C
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
