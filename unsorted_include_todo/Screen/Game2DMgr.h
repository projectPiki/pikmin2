#ifndef _SCREEN_GAME2DMGR_H
#define _SCREEN_GAME2DMGR_H

/*
    __vt__Q26Screen9Game2DMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q26Screen9Game2DMgrFv
    .4byte 0
*/

namespace Screen {
struct Game2DMgr {
	virtual ~Game2DMgr();   // _08
	virtual void _0C() = 0; // _0C

	void create();
	Game2DMgr();
	void initInCourse();
	void update();
	void draw(Graphics&);
	void drawIndirect(Graphics&);
	void setGamePad(Controller*);
	void setDispMember(og::Screen::DispMemberBase*);
	void setToumeiBG();
	void open_GameGround(og::Screen::DispMemberGround&);
	void is_GameGround();
	void open_GameCave(og::Screen::DispMemberCave&, int);
	void is_GameCave();
	void open_GameVs(og::Screen::DispMemberVs&, int);
	void check_VsStatus();
	void open_GameChallenge2P(og::Screen::DispMemberChallenge2P&, int);
	void open_GameChallenge1P(og::Screen::DispMemberChallenge1P&, int);
	void open_SMenu(og::Screen::DispMemberSMenuAll&);
	void open_SMenu_Sub(og::Screen::DispMemberSMenuAll&);
	void check_SMenu();
	void open_WorldMapInfoWin0(og::Screen::DispMemberWorldMapInfoWin0&);
	void check_WorldMapInfoWin0() const;
	void open_WorldMapInfoWin1(og::Screen::DispMemberWorldMapInfoWin1&);
	void check_WorldMapInfoWin1() const;
	void open_Kantei(og::Screen::DispMemberKantei&);
	void close_Kantei();
	void update_Kantei();
	void open_SpecialItem(og::Screen::DispMemberSpecialItem&);
	void close_SpecialItem();
	void open_Floor(og::Screen::DispMemberFloor&);
	void close_Floor();
	void set_FloorVS_LoadEnd();
	void startCount_Floor();
	void startFadeBG_Floor();
	void open_CourseName(og::Screen::DispMemberCourseName&);
	void startFadeBG_CourseName();
	void close_CourseName();
	void startCount_CourseName();
	void open_GameOver(Screen::Game2DMgr::GameOverTitle);
	void close_GameOver();
	void open_CaveInMenu(og::Screen::DispMemberAnaDemo&);
	void check_CaveInMenu();
	void open_KanketuMenu(og::Screen::DispMemberKanketuMenu&);
	void open_ChallengeKanketuMenu(og::Screen::DispMemberKanketuMenu&);
	void check_KanketuMenu();
	void open_CaveMoreMenu(og::Screen::DispMemberCaveMore&);
	void check_CaveMoreMenu();
	void open_FinalResult(kh::Screen::DispFinalResult&);
	void check_FinalResult() const;
	void open_CaveResult(kh::Screen::DispCaveResult&);
	void check_CaveResult() const;
	void open_DayEndResult(kh::Screen::DispDayEndResult&);
	void check_DayEndResult() const;
	void open_PayDept(kh::Screen::DispPayDept&);
	void check_PayDept() const;
	void open_Save(og::Screen::DispMemberSave&);
	void check_Save() const;
	void open_FinalMessage(og::Screen::DispMemberFinalMessage&);
	void check_FinalMessage() const;
	void stopFinalFloorSound();
	void restartFinalFloorSound();
	void check_ReadyGo() const;
	void open_WinLoseReason(kh::Screen::DispWinLoseReason&);
	void check_WinLoseReason() const;
	void open_WinLose(kh::Screen::DispWinLose&);
	void check_WinLose() const;
	void open_TimeUp1P();
	void open_TimeUp2P();
	void open_Contena(og::Screen::DispMemberContena&);
	void check_Contena();
	void result_Contena();
	void open_UfoMenu(og::Screen::DispMemberUfoGroup&);
	void check_UfoMenu();
	void result_UfoMenu(int*, int*);
	void open_ZukanEnemy(Morimura::DispMemberZukanEnemy&);
	void open_ZukanItem(Morimura::DispMemberZukanItem&);
	void isZukanEnemy();
	void isZukanItem();
	void check_ZukanItemRequest(int&);
	void check_ZukanEnemyRequest(int&);
	void getZukanEnemyCurrSelectId();
	void getZukanItemCurrSelectId();
	void requireZukanRequest();
	void requireZukanEffectOff();
	void isZukanEnlargedWindow();
	void isZukanMemoWindow();
	void isAppearConfirmWindow();
	void open_ChallengeSelect(Morimura::DispMemberChallengeSelect&);
	void check_ChallengeSelect(int&, int&);
	void open_ChallengeResult(Morimura::DispMemberChallengeResult&);
	void isEndChallengeResult();
	void open_VsSelect(Morimura::DispMemberVsSelect&);
	void check_VsSelect(int&, int&, int&);
	void open_HighScore(Morimura::DispMemberHighScore&);
	void isEndHighScore();
	void drawKanteiMsg(Graphics&);
	void checkDayEnd(float) const;
};
} // namespace Screen

#endif
