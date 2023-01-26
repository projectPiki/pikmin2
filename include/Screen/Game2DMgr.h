#ifndef _SCREEN_GAME2DMGR_H
#define _SCREEN_GAME2DMGR_H

#include "CNode.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JUtility/TColor.h"
#include "Screen/screenObj.h"
#include "Screen/screenMgr.h"
#include "types.h"

struct Controller;
struct JKRSolidHeap;

namespace kh {
namespace Screen {
struct DispCaveResult;
struct DispDayEndResult;
struct DispFinalResult;
struct DispPayDept;
struct DispWinLose;
struct DispWinLoseReason;
} // namespace Screen
} // namespace kh

namespace og {
namespace Screen {
struct DispMemberAnaDemo;
struct DispMemberBase;
struct DispMemberCave;
struct DispMemberCaveMore;
struct DispMemberChallenge1P;
struct DispMemberChallenge2P;
struct DispMemberContena;
struct DispMemberCourseName;
struct DispMemberFinalMessage;
struct DispMemberFloor;
struct DispMemberGround;
struct DispMemberKanketuMenu;
struct DispMemberKantei;
struct DispMemberSave;
struct DispMemberSMenuAll;
struct DispMemberSpecialItem;
struct DispMemberUfoGroup;
struct DispMemberVs;
struct DispMemberWorldMapInfoWin0;
struct DispMemberWorldMapInfoWin1;
} // namespace Screen
} // namespace og

namespace Morimura {
struct DispMemberChallengeResult;
struct DispMemberChallengeSelect;
struct DispMemberHighScore;
struct DispMemberVsSelect;
struct DispMemberZukanEnemy;
struct DispMemberZukanItem;
} // namespace Morimura

namespace Screen {
struct SceneBase;

/**
 * @size{0x1C}
 */
struct Game2DMgr : public JKRDisposer {
	enum GameOverTitle {
		GOTITLE_Default       = 0, // unused GAME OVER screen
		GOTITLE_OlimarDown    = 1,
		GOTITLE_LouieDown     = 2,
		GOTITLE_PresidentDown = 3,
		GOTITLE_PikminZero    = 4,
	};

	virtual ~Game2DMgr(); // _08

	static void create();
	Game2DMgr();
	void initInCourse();
	void update();
	void draw(Graphics&);
	void drawIndirect(Graphics&);
	void setGamePad(Controller*);
	bool setDispMember(og::Screen::DispMemberBase*);
	void setToumeiBG();
	bool open_GameGround(og::Screen::DispMemberGround&);
	bool is_GameGround();
	bool open_GameCave(og::Screen::DispMemberCave&, int);
	bool is_GameCave();
	bool open_GameVs(og::Screen::DispMemberVs&, int);
	int check_VsStatus();
	void open_GameChallenge2P(og::Screen::DispMemberChallenge2P&, int);
	void open_GameChallenge1P(og::Screen::DispMemberChallenge1P&, int);
	bool open_SMenu(og::Screen::DispMemberSMenuAll&);
	bool open_SMenu_Sub(og::Screen::DispMemberSMenuAll&);
	int check_SMenu();
	bool open_WorldMapInfoWin0(og::Screen::DispMemberWorldMapInfoWin0&);
	int check_WorldMapInfoWin0() const;
	bool open_WorldMapInfoWin1(og::Screen::DispMemberWorldMapInfoWin1&);
	int check_WorldMapInfoWin1() const;
	void open_Kantei(og::Screen::DispMemberKantei&);
	void close_Kantei();
	bool update_Kantei();
	void open_SpecialItem(og::Screen::DispMemberSpecialItem&);
	void close_SpecialItem();
	void open_Floor(og::Screen::DispMemberFloor&);
	void close_Floor();
	void set_FloorVS_LoadEnd();
	void startCount_Floor();
	void startFadeBG_Floor();
	bool open_CourseName(og::Screen::DispMemberCourseName&);
	void startFadeBG_CourseName();
	void close_CourseName();
	void startCount_CourseName();
	void open_GameOver(Screen::Game2DMgr::GameOverTitle);
	void close_GameOver();
	bool open_CaveInMenu(og::Screen::DispMemberAnaDemo&);
	int check_CaveInMenu();
	bool open_KanketuMenu(og::Screen::DispMemberKanketuMenu&);
	bool open_ChallengeKanketuMenu(og::Screen::DispMemberKanketuMenu&);
	int check_KanketuMenu();
	bool open_CaveMoreMenu(og::Screen::DispMemberCaveMore&);
	int check_CaveMoreMenu();
	bool open_FinalResult(kh::Screen::DispFinalResult&);
	int check_FinalResult() const;
	bool open_CaveResult(kh::Screen::DispCaveResult&);
	int check_CaveResult() const;
	bool open_DayEndResult(kh::Screen::DispDayEndResult&);
	int check_DayEndResult() const;
	bool open_PayDept(kh::Screen::DispPayDept&);
	int check_PayDept() const;
	bool open_Save(og::Screen::DispMemberSave&);
	int check_Save() const;
	bool open_FinalMessage(og::Screen::DispMemberFinalMessage&);
	int check_FinalMessage() const;
	void stopFinalFloorSound();
	void restartFinalFloorSound();
	int check_ReadyGo() const;
	bool open_WinLoseReason(kh::Screen::DispWinLoseReason&);
	int check_WinLoseReason() const;
	bool open_WinLose(kh::Screen::DispWinLose&);
	int check_WinLose() const;
	bool open_TimeUp1P();
	bool open_TimeUp2P();
	bool open_Contena(og::Screen::DispMemberContena&);
	int check_Contena();
	int result_Contena();
	bool open_UfoMenu(og::Screen::DispMemberUfoGroup&);
	int check_UfoMenu();
	void result_UfoMenu(int*, int*);
	bool open_ZukanEnemy(Morimura::DispMemberZukanEnemy&);
	bool open_ZukanItem(Morimura::DispMemberZukanItem&);
	bool isZukanEnemy();
	bool isZukanItem();
	int check_ZukanItemRequest(int&);
	int check_ZukanEnemyRequest(int&);
	int getZukanEnemyCurrSelectId();
	int getZukanItemCurrSelectId();
	void requireZukanRequest();
	void requireZukanEffectOff();
	bool isZukanEnlargedWindow();
	bool isZukanMemoWindow();
	bool isAppearConfirmWindow();
	bool open_ChallengeSelect(Morimura::DispMemberChallengeSelect&);
	int check_ChallengeSelect(int&, int&);
	bool open_ChallengeResult(Morimura::DispMemberChallengeResult&);
	bool isEndChallengeResult();
	bool open_VsSelect(Morimura::DispMemberVsSelect&);
	u32 check_VsSelect(int&, int&, int&);
	bool open_HighScore(Morimura::DispMemberHighScore&);
	bool isEndHighScore();
	bool drawKanteiMsg(Graphics&);
	bool checkDayEnd(f32) const;

	Mgr* mScreenMgr; // _18
};

extern Game2DMgr* gGame2DMgr;
} // namespace Screen

#endif
