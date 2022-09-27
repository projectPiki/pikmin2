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
	inline EnemyMgrNode()
	    : CNode("マネージャノード")
	    , m_enemyID(EnemyTypeID::EnemyID_NULL)
	    , m_mgr(nullptr)
	{
	}

	inline EnemyMgrNode(int enemyID, char* name, EnemyMgrBase* mgr)
	    : CNode(name)
	    , m_enemyID((EnemyTypeID::EEnemyTypeID)enemyID)
	    , m_mgr(mgr)
	{
		// clearRelations();

		// m_enemyID = EnemyTypeID::EnemyID_NULL;
		// m_mgr = nullptr;
		// m_name = "マネージャノード"; // manager node
	}

	// vtable 1 (CNode, _00, _08-_0C)
	virtual ~EnemyMgrNode() { } // _08 (weak)
	// vtable2 (GenericObjectMgr + self, _18, _18-_80)
	// _18-_34 = thunks
	// _34-_44 = GenericObjectMgr
	// _44 = thunk
	virtual void doAnimation() // _48 (weak)
	{
		m_mgr->doAnimation();
	}
	virtual void doEntry() // _4C (weak)
	{
		m_mgr->doEntry();
	}
	virtual void doSetView(int a) // _50 (weak)
	{
		m_mgr->doSetView(a);
	}
	virtual void doViewCalc() // _54 (weak)
	{
		m_mgr->doViewCalc();
	}
	virtual void doSimulation(f32 constraint) // _58 (weak)
	{
		m_mgr->doSimulation(constraint);
	}
	virtual void doDirectDraw(Graphics& gfx) // _5C (weak)
	{
		m_mgr->doDirectDraw(gfx);
	}
	virtual void doSimpleDraw(Viewport* viewport) // _60 (weak)
	{
		m_mgr->doSimpleDraw(viewport);
	}
	virtual void killAll(CreatureKillArg* killArg) // _64 (weak)
	{
		m_mgr->killAll(killArg);
	}
	virtual void setupSoundViewerAndBas() // _68 (weak)
	{
		m_mgr->setupSoundViewerAndBas();
	}
	virtual void setDebugParm(u32 p1) // _6C (weak)
	{
		m_mgr->setDebugParm(p1);
	}
	virtual void resetDebugParm(u32 p1) // _70 (weak)
	{
		m_mgr->resetDebugParm(p1);
	}
	virtual void startMovie() // _74 (weak)
	{
		m_mgr->startMovie();
	}
	virtual void endMovie() // _78 (weak)
	{
		m_mgr->endMovie();
	}
	virtual u32 getMatrixLoadType() { return 1; } // _7C (weak)

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
	virtual ~GeneralEnemyMgr() { } // _48 (weak)

	void createEnemyMgr(u8, int, int);
	void killAll();
	void setupSoundViewerAndBas();
	J3DModelData* getJ3DModelData(int);
	EnemyBase* birth(int, EnemyBirthArg&);
	char* getEnemyName(int, int);
	int getEnemyID(char*, int);
	IEnemyMgrBase* getIEnemyMgrBase(int);
	void allocateEnemys(u8, int);
	void resetEnemyNum();
	void addEnemyNum(int, u8, GenObjectEnemy*);
	u8 getEnemyNum(int, bool);
	JKRHeap* useHeap();
	EnemyMgrBase* getEnemyMgr(int);
	void setMovieDraw(bool);
	void prepareDayendEnemies();
	void createDayendEnemies(Sys::Sphere&);

	inline void setEnemyIDs()
	{
		for (int i = 0; i < gEnemyInfoNum; i++) {
			m_enemyNumList[i].m_enemyID = (EnemyTypeID::EEnemyTypeID)gEnemyInfo[i].m_id;
		}
	}

	inline void setEnemyNums(int val)
	{
		for (int i = 0; i < gEnemyInfoNum; i++) {
			m_enemyNumList[i]._04 = val;
		}
	}

	// _00		= (GenericObjectMgr) VTABLE
	// _04-_1C	= CNode
	u8 _1C;                      // _1C
	EnemyMgrNode _20;            // _20
	u8 _44[4];                   // _44
	EnemyTypeID* m_enemyNumList; // _48
	JKRHeap* m_heap;             // _4C
	u32 m_heapSize;              // _50
	BitFlag<u32> m_flags;        // _54
	EnemyStone::Mgr m_stoneMgr;  // _58

	static int mTotalCount;
	static int mCullCount;
};

extern GeneralEnemyMgr* generalEnemyMgr;

}; // namespace Game

template <typename T> struct GeneralMgrIterator {

	void first();
	void next();
	void setFirst();
};

#endif
