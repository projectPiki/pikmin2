#ifndef _GAME_GENERALENEMYMGR_H
#define _GAME_GENERALENEMYMGR_H

#include "CNode.h"
#include "Game/enemyInfo.h"
#include "GenericObjectMgr.h"
#include "JSystem/JKR/JKRHeap.h"

namespace Game {
struct EnemyMgrNode : public CNode, GenericObjectMgr {
	// vtable 1
	virtual void doAnimation();           // _00
	virtual void doEntry();               // _04
	virtual void doSetView(int);          // _08
	virtual void doViewCalc();            // _0C
	virtual void doSimulation(float);     // _10
	virtual void doDirectDraw(Graphics&); // _14
	virtual void doSimpleDraw(Viewport*); // _18
	// vtable 2
	virtual ~EnemyMgrNode();               // _00
	virtual void killAll();                // _4C
	virtual void setupSoundViewerAndBas(); // _50
	virtual void setDebugParm(u32);        // _54
	virtual void resetDebugParm();         // _58
	virtual void startMovie();             // _5C
	virtual void endMovie();               // _60
	virtual u32 getMatrixLoadType();       // _64

	// GenericObjectMgr+EnemyMgrNode VT = _18
	EnemyTypeID::EEnemyTypeID m_enemyID; // _1C
	struct EnemyMgrBase* m_mgr;          // _20
};

struct EnemyBirthArg;
struct GenObjectEnemy;

struct GeneralEnemyMgr : public GenericObjectMgr {
	virtual void doAnimation();           // _08
	virtual void doEntry();               // _0C
	virtual void doSetView(int);          // _10
	virtual void doViewCalc();            // _14
	virtual void doSimulation(float);     // _18
	virtual void doDirectDraw(Graphics&); // _1C
	virtual void doSimpleDraw(Viewport*); // _20
	virtual ~GeneralEnemyMgr();           // _48 (weak)

	void createEnemyMgr(unsigned char, int, int);

	GeneralEnemyMgr();
	void killAll();
	void setupSoundViewerAndBas();
	void getJ3DModelData(int);
	void birth(int, Game::EnemyBirthArg&);
	void getEnemyName(int, int);
	void getEnemyID(char*, int);
	void getIEnemyMgrBase(int);
	void allocateEnemys(unsigned char, int);
	void resetEnemyNum();
	void addEnemyNum(int, unsigned char, Game::GenObjectEnemy*);
	void getEnemyNum(int, bool);
	void useHeap();
	void getEnemyMgr(int);
	void setMovieDraw(bool);
	void prepareDayendEnemies();
	void createDayendEnemies(Sys::Sphere&);

	CNode _04;                                 // _04
	u8 _1C;                                    // _1C
	EnemyMgrNode _20;                          // _20
	u8 _44[4];                                 // _44
	EnemyTypeID::EEnemyTypeID* m_enemyNumList; // _48
	JKRHeap* m_heap;                           // _4C
	u32 m_heapSize;                            // _50
	u32 m_flags;                               // _54
	// TODO: replace with proper type
	// EnemyStone::Mgr m_stoneMgr; // _58
	u8 m_stoneMgr[0x38]; // _58

	static int mTotalCount;
	static int mCullCount;
};

static GeneralEnemyMgr* generalEnemyMgr;

}; // namespace Game

#endif
