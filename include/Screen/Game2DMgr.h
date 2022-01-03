#ifndef _SCREEN_GAME2DMGR_H
#define _SCREEN_GAME2DMGR_H

#include "CNode.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JUtility.h"
#include "Screen/Bases.h"
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

	Game2DMgr();

	virtual ~Game2DMgr(); // _00
	// virtual void _04() = 0; // _04

	void checkDayEnd(float) const;
	void check_CaveInMenu();
	void check_CaveMoreMenu();
	void check_CaveResult() const;
	void check_ChallengeSelect(int&, int&);
	void check_Contena();
	void check_DayEndResult() const;
	void check_FinalMessage() const;
	void check_FinalResult() const;
	void check_KanketuMenu();
	void check_PayDept() const;
	void check_ReadyGo() const;
	void check_Save() const;
	void check_SMenu();
	void check_UfoMenu();
	void check_VsSelect(int&, int&, int&);
	void check_VsStatus();
	void check_WinLose() const;
	void check_WinLoseReason() const;
	void check_WorldMapInfoWin0() const;
	void check_WorldMapInfoWin1() const;
	void check_ZukanItemRequest(int&);
	void check_ZukanEnemyRequest(int&);

	void close_CourseName();
	void close_Floor();
	void close_GameOver();
	void close_Kantei();
	void close_SpecialItem();

	void create();

	void draw(Graphics&);
	void drawIndirect(Graphics&);
	void drawKanteiMsg(Graphics&);

	void getZukanEnemyCurrSelectId();
	void getZukanItemCurrSelectId();

	void initInCourse();

	bool isAppearConfirmWindow();
	bool isEndChallengeResult();
	bool isEndHighScore();
	bool isZukanEnemy();
	bool isZukanEnlargedWindow();
	bool isZukanItem();
	bool isZukanMemoWindow();
	bool is_GameCave();
	bool is_GameGround();

	void open_CaveInMenu(og::Screen::DispMemberAnaDemo&);
	void open_CaveMoreMenu(og::Screen::DispMemberCaveMore&);
	void open_CaveResult(kh::Screen::DispCaveResult&);
	void open_ChallengeKanketuMenu(og::Screen::DispMemberKanketuMenu&);
	void open_ChallengeSelect(Morimura::DispMemberChallengeSelect&);
	void open_ChallengeResult(Morimura::DispMemberChallengeResult&);
	void open_Contena(og::Screen::DispMemberContena&);
	bool open_CourseName(og::Screen::DispMemberCourseName&);
	void open_DayEndResult(kh::Screen::DispDayEndResult&);
	bool open_FinalMessage(og::Screen::DispMemberFinalMessage&);
	void open_FinalResult(kh::Screen::DispFinalResult&);
	void open_Floor(og::Screen::DispMemberFloor&);
	void open_GameCave(og::Screen::DispMemberCave&, int);
	void open_GameChallenge1P(og::Screen::DispMemberChallenge1P&, int);
	void open_GameChallenge2P(og::Screen::DispMemberChallenge2P&, int);
	void open_GameGround(og::Screen::DispMemberGround&);
	void open_GameOver(Screen::Game2DMgr::GameOverTitle);
	void open_GameVs(og::Screen::DispMemberVs&, int);
	void open_HighScore(Morimura::DispMemberHighScore&);
	void open_KanketuMenu(og::Screen::DispMemberKanketuMenu&);
	void open_Kantei(og::Screen::DispMemberKantei&);
	void open_PayDept(kh::Screen::DispPayDept&);
	void open_Save(og::Screen::DispMemberSave&);
	void open_SMenu(og::Screen::DispMemberSMenuAll&);
	void open_SMenu_Sub(og::Screen::DispMemberSMenuAll&);
	void open_SpecialItem(og::Screen::DispMemberSpecialItem&);
	void open_TimeUp1P();
	void open_TimeUp2P();
	void open_UfoMenu(og::Screen::DispMemberUfoGroup&);
	void open_VsSelect(Morimura::DispMemberVsSelect&);
	void open_WinLose(kh::Screen::DispWinLose&);
	void open_WinLoseReason(kh::Screen::DispWinLoseReason&);
	void open_WorldMapInfoWin0(og::Screen::DispMemberWorldMapInfoWin0&);
	void open_WorldMapInfoWin1(og::Screen::DispMemberWorldMapInfoWin1&);
	void open_ZukanEnemy(Morimura::DispMemberZukanEnemy&);
	void open_ZukanItem(Morimura::DispMemberZukanItem&);

	void restartFinalFloorSound();

	void result_Contena();
	void result_UfoMenu(int*, int*);

	void requireZukanRequest();
	void requireZukanEffectOff();

	void setDispMember(og::Screen::DispMemberBase*);
	void setGamePad(Controller*);
	void setToumeiBG();

	void set_FloorVS_LoadEnd();

	void startCount_CourseName();
	void startCount_Floor();

	void startFadeBG_Floor();
	void startFadeBG_CourseName();

	void stopFinalFloorSound();

	void update();
	bool update_Kantei();

	Mgr* m_screenMgr; // _18
};

extern Game2DMgr* gGame2DMgr;
} // namespace Screen

#endif
