#ifndef _SCREEN_GAME2DMGR_H
#define _SCREEN_GAME2DMGR_H

#include "CNode.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JUT/TColor.h"
#include "Screen/Bases.h"
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
	enum GameOverTitle {};

	virtual ~Game2DMgr(); // _08

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
	bool open_ChallengeKanketuMenu(og::Screen::DispMemberKanketuMenu&);
	int check_KanketuMenu();
	bool open_CaveMoreMenu(og::Screen::DispMemberCaveMore&);
	int check_CaveMoreMenu();
	void open_FinalResult(kh::Screen::DispFinalResult&);
	void check_FinalResult() const;
	bool open_CaveResult(kh::Screen::DispCaveResult&);
	int check_CaveResult() const;
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
	bool isZukanEnemy();
	bool isZukanItem();
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
	void* open_VsSelect(Morimura::DispMemberVsSelect&);
	u32 check_VsSelect(int&, int&, int&);
	void open_HighScore(Morimura::DispMemberHighScore&);
	bool isEndHighScore();
	bool drawKanteiMsg(Graphics&);
	bool checkDayEnd(float) const;

	Mgr* m_screenMgr; // _18
};

extern Game2DMgr* gGame2DMgr;
} // namespace Screen

#endif
