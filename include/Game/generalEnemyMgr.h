#ifndef _GAME_GENERALENEMYMGR_H
#define _GAME_GENERALENEMYMGR_H

#include "CNode.h"
#include "Game/enemyInfo.h"
#include "Game/EnemyMgrBase.h"
#include "Game/EnemyStone.h"
#include "GenericObjectMgr.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "Sys/Sphere.h"

namespace Game {
struct CreatureKillArg;

struct EnemyNumInfo {
	inline EnemyNumInfo()
	    : mEnemyNumList(nullptr)
	{
	}

	int getOriginalEnemyID();
	inline void init()
	{
		mEnemyNumList = new EnemyTypeID[gEnemyInfoNum];

		// setEnemyIDs();
		for (int i = 0; i < gEnemyInfoNum; i++) {
			mEnemyNumList[i].mEnemyID = (EnemyTypeID::EEnemyTypeID)gEnemyInfo[i].mId;
		}

		resetEnemyNum();
	}
	inline void resetEnemyNum()
	{
		if (mEnemyNumList == nullptr) {
			return;
		}

		// setEnemyNums(0);
		for (int i = 0; i < gEnemyInfoNum; i++) {
			mEnemyNumList[i].mCount = 0;
		}
	}
	inline void addEnemyNum(int enemyID, u8 num)
	{
		EnemyTypeID* enemyNumList = mEnemyNumList;
		if (enemyNumList) {
			getEnemyNumData(enemyID)->mCount += num;
		}
	}
	inline u8 getEnemyNum(int enemyID, bool check)
	{
		if (check) {
			u8 num = 0;
			if (mEnemyNumList) {
				int mgrID = getEnemyMgrID(enemyID);

				for (int i = 0; i < gEnemyInfoNum; i++) {
					EnemyTypeID* typeID = &mEnemyNumList[i];
					int id              = ((u8)(enemyID == mgrID) != 0) ? getEnemyMgrID(typeID->mEnemyID) : typeID->mEnemyID;
					if (id == enemyID) {
						num += typeID->mCount;
					}
				}
			}
			return num;
		}
		return getEnemyNumData(enemyID)->mCount;
	}
	inline EnemyTypeID* getEnemyNumData(int enemyID)
	{
		for (int i = 0; i < gEnemyInfoNum; i++) {
			if (enemyID == mEnemyNumList[i].mEnemyID) {
				return mEnemyNumList + i;
			}
		}
		return nullptr;
	}

	u8 _44[4];                  // _00
	EnemyTypeID* mEnemyNumList; // _04
};

struct EnemyMgrNode : public CNode, GenericObjectMgr {
	inline EnemyMgrNode()
	    : CNode("マネージャノード")
	    , mEnemyID(EnemyTypeID::EnemyID_NULL)
	    , mMgr(nullptr)
	{
	}

	inline EnemyMgrNode(int enemyID, char* name, EnemyMgrBase* mgr)
	    : CNode(name)
	    , mEnemyID((EnemyTypeID::EEnemyTypeID)enemyID)
	    , mMgr(mgr)
	{
	}

	// vtable 1 (CNode, _00, _08-_0C)
	// vtable2 (GenericObjectMgr + self, _18, _18-_80)
	virtual ~EnemyMgrNode() { } // _08 (weak)
	// _18-_34 = thunks
	// _34-_44 = GenericObjectMgr
	// _44 = thunk
	virtual void doAnimation() // _48 (weak)
	{
		mMgr->doAnimation();
	}
	virtual void doEntry() // _4C (weak)
	{
		mMgr->doEntry();
	}
	virtual void doSetView(int viewportNumber) // _50 (weak)
	{
		mMgr->doSetView(viewportNumber);
	}
	virtual void doViewCalc() // _54 (weak)
	{
		mMgr->doViewCalc();
	}
	virtual void doSimulation(f32 constraint) // _58 (weak)
	{
		mMgr->doSimulation(constraint);
	}
	virtual void doDirectDraw(Graphics& gfx) // _5C (weak)
	{
		mMgr->doDirectDraw(gfx);
	}
	virtual void doSimpleDraw(Viewport* viewport) // _60 (weak)
	{
		mMgr->doSimpleDraw(viewport);
	}
	virtual void killAll(CreatureKillArg* killArg) // _64 (weak)
	{
		mMgr->killAll(killArg);
	}
	virtual void setupSoundViewerAndBas() // _68 (weak)
	{
		mMgr->setupSoundViewerAndBas();
	}
	virtual void setDebugParm(u32 p1) // _6C (weak)
	{
		mMgr->setDebugParm(p1);
	}
	virtual void resetDebugParm(u32 p1) // _70 (weak)
	{
		mMgr->resetDebugParm(p1);
	}
	virtual void startMovie() // _74 (weak)
	{
		mMgr->startMovie();
	}
	virtual void endMovie() // _78 (weak)
	{
		mMgr->endMovie();
	}
	virtual u32 getMatrixLoadType() { return 1; } // _7C (weak)

	// _00 		= (CNode) VTABLE
	// _04-_18 	= CNode
	// _18 		= (GenericObjectMgr+EnemyMgrNode) VTABLE
	EnemyTypeID::EEnemyTypeID mEnemyID; // _1C
	EnemyMgrBase* mMgr;                 // _20
};

struct EnemyBirthArg;
struct GenObjectEnemy;

struct GeneralEnemyMgr : public GenericObjectMgr, public CNode {
	GeneralEnemyMgr();

	// vtable 1 (GenericObjectMgr, _00, _08-_38)
	virtual void doAnimation();                 // _08
	virtual void doEntry();                     // _0C
	virtual void doSetView(int viewportNumber); // _10
	virtual void doViewCalc();                  // _14
	virtual void doSimulation(f32 rate);        // _18
	virtual void doDirectDraw(Graphics& gfx);   // _1C
	virtual void doSimpleDraw(Viewport*);       // _20
	// vtable 2 (CNode, _04, _40-_4C)
	// _40 = dtor thunk, _44 = getChildCount
	virtual ~GeneralEnemyMgr() { } // _48 (weak) // needs to generate after EnemyMgrNode's setDebugParm and resetDebugParm

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

	// unused/inlined:
	void birth(char*, EnemyBirthArg&);
	inline char getEnemyMember(int id, int flags) { return EnemyInfoFunc::getEnemyMember(id, flags); }
	void setParmsDebugNameAndID();
	void resetParmsDebugNameAndID();
	void setParmsDebugSoundInfo();
	void resetParmsDebugSoundInfo();

	// _00		= (GenericObjectMgr) VTABLE
	// _04-_1C	= CNode
	u8 _1C;                     // _1C, BitFlag
	EnemyMgrNode mEnemyMgrNode; // _20
	EnemyNumInfo mEnemyNumInfo; // _44
	JKRHeap* mHeap;             // _4C
	u32 mHeapSize;              // _50
	BitFlag<u32> mFlags;        // _54
	EnemyStone::Mgr mStoneMgr;  // _58

	static int mTotalCount;
	static int mCullCount;
};

extern GeneralEnemyMgr* generalEnemyMgr;

}; // namespace Game

template <typename T>
struct GeneralMgrIterator {
	GeneralMgrIterator(CNode* node)
	{
		mNode      = node;
		mCondition = nullptr;
		mContainer = nullptr;
		mIndex     = nullptr;
	}

	void next()
	{
		if (mCondition == nullptr) {
			mIndex = mContainer->getNext(mIndex);
		} else {
			mIndex = mContainer->getStart();

			while (mIndex != mContainer->getEnd()) {
				T* enemy = getObject();
				if (mCondition->satisfy(enemy)) {
					return;
				}
				mContainer->getNext(mIndex);
			}
		}

		if (mIndex == mContainer->getEnd()) {
			mContainer = static_cast<Container<T>*>(mContainer->mNext);
			setFirst();
		}
	}

	void first()
	{
		mContainer = static_cast<Container<T>*>(mNode->mChild);
		this->setFirst();
	}

	void setFirst()
	{
		if (mContainer) {
			if (!mCondition) {
				mIndex = mContainer->getStart();
			} else {
				mIndex = mContainer->getStart();
				while (mIndex != mContainer->getEnd()) {
					if (mCondition->satisfy(static_cast<T*>(mContainer->getObject(mIndex)))) {
						return;
					} else {
						mContainer->getNext(mIndex);
					}
				}
			}

			if (mIndex != mContainer->getEnd()) {
				return;
			}

			mContainer = static_cast<Container<T>*>(mContainer->mNext);
			setFirst();
		}
	}

	inline T* getObject() { return static_cast<T*>(mContainer->getObject(mIndex)); }

	inline bool isDone() { return mContainer == nullptr; }

	Container<T>* mContainer; // _00
	void* mIndex;             // _04
	CNode* mNode;             // _08
	Condition<T>* mCondition; // _0C
};

#endif
