#ifndef _GAME_GENERALENEMYMGR_H
#define _GAME_GENERALENEMYMGR_H

#include "CNode.h"
#include "Game/enemyInfo.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyStone.h"
#include "GenericObjectMgr.h"
#include "JSystem/JKR/JKRHeap.h"
#include "Sys/Sphere.h"

namespace Game {
struct CreatureKillArg;

struct EnemyMgrNode : public CNode, GenericObjectMgr {
	// vtable 1 (CNode, _00, _08-_0C)
	virtual ~EnemyMgrNode(); // _08 (weak)
	// vtable2 (GenericObjectMgr + self, _18, _18-_80)
	// _18-_34 = thunks
	// _34-_44 = GenericObjectMgr
	// _44 = thunk
	virtual void doAnimation();             // _48 (weak)
	virtual void doEntry();                 // _4C (weak)
	virtual void doSetView(int);            // _50 (weak)
	virtual void doViewCalc();              // _54 (weak)
	virtual void doSimulation(float);       // _58 (weak)
	virtual void doDirectDraw(Graphics&);   // _5C (weak)
	virtual void doSimpleDraw(Viewport*);   // _60 (weak)
	virtual void killAll(CreatureKillArg*); // _64 (weak)
	virtual void setupSoundViewerAndBas();  // _68 (weak)
	virtual void setDebugParm(u32);         // _6C (weak)
	virtual void resetDebugParm();          // _70 (weak)
	virtual void startMovie();              // _74 (weak)
	virtual void endMovie();                // _78 (weak)
	virtual u32 getMatrixLoadType();        // _7C (weak)

	// _00 		= (CNode) VTABLE
	// _04-_18 	= CNode
	// _18 		= (GenericObjectMgr+EnemyMgrNode) VTABLE
	EnemyTypeID::EEnemyTypeID m_enemyID; // _1C
	EnemyMgrBase* m_mgr;                 // _20
};

struct EnemyBirthArg;
struct GenObjectEnemy;

struct GeneralEnemyMgr : public GenericObjectMgr, public CNode {
	GeneralEnemyMgr();

	// vtable 1 (GenericObjectMgr, _00, _08-_38)
	virtual void doAnimation();           // _08
	virtual void doEntry();               // _0C
	virtual void doSetView(int);          // _10
	virtual void doViewCalc();            // _14
	virtual void doSimulation(float);     // _18
	virtual void doDirectDraw(Graphics&); // _1C
	virtual void doSimpleDraw(Viewport*); // _20
	// vtable 2 (CNode, _04, _40-_4C)
	// _40 = dtor thunk, _44 = getChildCount
	virtual ~GeneralEnemyMgr(); // _48 (weak)

	void createEnemyMgr(u8, int, int);
	void killAll();
	void setupSoundViewerAndBas();
	void getJ3DModelData(int);
	EnemyBase* birth(int, Game::EnemyBirthArg&);
	void getEnemyName(int, int);
	void getEnemyID(char*, int);
	void getIEnemyMgrBase(int);
	void allocateEnemys(u8, int);
	void resetEnemyNum();
	void addEnemyNum(int, u8, Game::GenObjectEnemy*);
	void getEnemyNum(int, bool);
	void useHeap();
	EnemyMgrBase* getEnemyMgr(int);
	void setMovieDraw(bool);
	void prepareDayendEnemies();
	void createDayendEnemies(Sys::Sphere&);

	// _00		= (GenericObjectMgr) VTABLE
	// _04-_1C	= CNode
	CNode _04;                                 // _04
	u8 _1C;                                    // _1C
	EnemyMgrNode _20;                          // _20
	u8 _44[4];                                 // _44
	EnemyTypeID::EEnemyTypeID* m_enemyNumList; // _48
	JKRHeap* m_heap;                           // _4C
	u32 m_heapSize;                            // _50
	u32 m_flags;                               // _54
	EnemyStone::Mgr m_stoneMgr;                // _58

	static int mTotalCount;
	static int mCullCount;
};

static GeneralEnemyMgr* generalEnemyMgr;

}; // namespace Game

#endif
