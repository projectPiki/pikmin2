#ifndef _GAME_PLAYDATA_H
#define _GAME_PLAYDATA_H

/*
    __vt__Q24Game8PlayData:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game8PlayDataFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C
};

namespace Game {
struct PlayData : public CNode {
	virtual ~PlayData(); // _08

	void isCompletePelletTrigger();
	void construct();
	PlayData();
	void reset();
	void setDevelopSetting(bool, bool);
	void calcPlayMinutes();
	void resetContainerFlag();
	void hasContainer(int);
	void hasMetPikmin(int);
	void hasBootContainer(int);
	void setContainer(int);
	void setMeetPikmin(int);
	void setBootContainer(int);
	void debugSetContainerFlagOn();
	void setDemoFlag(int);
	void isDemoFlag(int);
	void setFindItemDemoFlag(int);
	void isFindItemDemoFlag(int);
	void setCurrentCourse(int);
	void clearCurrentCave();
	void setCurrentCave(ID32&, int);
	void setCurrentCaveFloor(int);
	void getCurrentCourseIndex();
	void getCurrentCourse();
	void getCurrentCave(ID32&, int&);
	void firstCarryPellet(Game::Pellet*);
	void obtainPellet(Game::BasePelletMgr*, int);
	void losePellet(Game::BasePelletMgr*, int);
	void obtainPellet_Main(Game::Pellet*);
	void obtainPellet_Cave(Game::Pellet*);
	void isPelletEverGot(unsigned char, unsigned char);
	void isPelletZukanVisible(int);
	void isPelletZukanWhatsNew(int);
	void hasPelletZukanWhatsNew();
	void setPelletZukanOutOfDateAll();
	void getGroundOtakaraNum(int);
	void getGroundOtakaraMax(int);
	void incGroundOtakara(int);
	void getDopeCount(int);
	void setDopeCount(int, int);
	void incDopeCount(int);
	void hasDope(int);
	void getDopeFruitCount(int);
	void addDopeFruit(int);
	void useDope(int);
	void isCaveFirstTime(int, ID32&);
	void setCaveVisit(int, ID32&);
	void incCaveOtakara(int, ID32&);
	void getOtakaraNum_Course_CaveID(int, ID32&);
	void getOtakaraMax_Course_CaveID(int, ID32&);
	void initCaveOtakaras();
	void read_CaveOtakara(Stream&);
	void write_CaveOtakara(Stream&);
	void getRepayLevel();
	void getRepayLevelPercent(int);
	void checkRepayLevelFirstClear();
	void experienceRepayLevelFirstClear();
	void initLimitGens();
	void initCourses(bool);
	void openCourse(int);
	void visitCourse(int);
	void courseOpen(int);
	void courseJustOpen(int);
	void courseFirstTime(int);
	void courseVisited(int);
	void doneWorldMapEffect();
	void getGroundOtakaraNum_Old(int);
	void getOtakaraNum_Course_CaveID_Old(int, ID32&);
	void getMoney_Old();
	void isCaveFirstTime_Old(int, ID32&);
	void read_CaveOtakara_Old(Stream&);
	void write_CaveOtakara_Old(Stream&);
	void getPikminCount_Today(int);
	void getPikminCount_Yesterday(int);
	void setPikminCounts_Today();
	void setPikminCounts_Yesterday();
	void write(Stream&);
	void read(Stream&);
};
} // namespace Game

#endif
