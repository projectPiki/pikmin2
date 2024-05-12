#ifndef _GAME_ENEMYMGRBASE_H
#define _GAME_ENEMYMGRBASE_H

#include "Container.h"
#include "Game/EnemyPelletInfo.h"
#include "Game/EnemyStone.h"
#include "Game/pelletMgr.h"
#include "Game/enemyInfo.h"
#include "Game/gameGenerator.h"
#include "GenericObjectMgr.h"
#include "SysShape/AnimMgr.h"
#include "Game/EnemyBase.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "Vector3.h"

struct CollPartFactory;
struct J3DModelData;
struct JKRArchive;

namespace SysShape {
struct Model;
} // namespace SysShape

namespace Game {
struct EnemyGeneratorBase;
struct EnemyParmsBase;

/**
 * @size{0x49}
 */
struct EnemyBirthArg {
	EnemyBirthArg();

	Vector3f mPosition;                          // _00
	f32 mFaceDir;                                // _0C
	u8 mTekiBirthType;                           // _10
	EnemyGeneratorBase* mGenerator;              // _14
	PelletMgr::OtakaraItemCode mOtakaraItemCode; // _18
	EnemyPelletInfo mPelletInfo;                 // _1C
	EnemyTypeID::EEnemyTypeID mTypeID;           // _28
	f32 mExistenceLength;                        // _2C
	bool mIsInPiklopedia;                        // _30
};

/**
 * @size{0x1C}
 */
struct IEnemyMgrBase : public GenericObjectMgr, public GenericContainer {
	// vtable 1 (GenericObjectMgr, _00, _08-_38)
	// vtable 2 (GenericContainer + self, _00, _40-_5C)
	virtual void doEntry() = 0;                           // _0C
	virtual ~IEnemyMgrBase() { }                          // _58 (weak)
	virtual void* getObject(void*)                   = 0; // _5C
	virtual void* getNext(void*)                     = 0; // _60
	virtual void* getStart()                         = 0; // _64
	virtual void* getEnd()                           = 0; // _68
	virtual void alloc()                             = 0; // _6C
	virtual EnemyBase* birth(EnemyBirthArg&)         = 0; // _70
	virtual J3DModelData* getJ3DModelData() const    = 0; // _74
	virtual EnemyGeneratorBase* getGenerator() const = 0; // _78
	virtual void killAll(CreatureKillArg*)           = 0; // _7C
	virtual void setupSoundViewerAndBas()            = 0; // _80
	virtual void setDebugParm(u32)                   = 0; // _84
	virtual void resetDebugParm(u32)                 = 0; // _88
	virtual int getMaxObjects() const                = 0; // _8C
	virtual void startMovie()                        = 0; // _90
	virtual void endMovie()                          = 0; // _94

	// _00		= VTABLE
	// _04-_1C	= GenericContainer
};

/**
 * @size{0x44}
 */
struct EnemyMgrBase : public IEnemyMgrBase {
	EnemyMgrBase(int objLimit, u8 mtxBufferSize);

	// vtable 1 (GenericObjectMgr, _00, _08-_38)
	virtual void doAnimation();                 // _08
	virtual void doEntry();                     // _0C
	virtual void doSetView(int viewportNumber); // _10
	virtual void doViewCalc();                  // _14
	virtual void doSimulation(f32 rate);        // _18
	virtual void doDirectDraw(Graphics& gfx);   // _1C
	// vtable 2 (GenericContainer + IEnemyMgrBase + self, _00, _40-_E0)
	// GenericContainer thunks _40-_58
	// virtual ~EnemyMgrBase() { } // _58 (weak)
	virtual void* getObject(void* index) { return get(index); }; // _5C (weak)
	virtual void* getNext(void* index);                          // _60
	virtual void* getStart() { return getNext((void*)-1); }      // _64 (weak)
	virtual void* getEnd() { return (void*)mObjLimit; }          // _68 (weak)
	virtual EnemyBase* get(void* index)                          // _98 (weak)
	{
		return getEnemy((int)index);
	}
	virtual void alloc();                         // _6C
	virtual EnemyBase* birth(EnemyBirthArg&);     // _70
	virtual J3DModelData* getJ3DModelData() const // _74 (weak)
	{
		return mModelData;
	}
	virtual EnemyGeneratorBase* getGenerator() const // _78 (weak)
	{
		return mGenerator;
	}
	virtual void killAll(CreatureKillArg*); // _7C
	virtual void setupSoundViewerAndBas();  // _80
	virtual void setDebugParm(u32);         // _84
	virtual void resetDebugParm(u32);       // _88
	virtual int getMaxObjects() const       // _8C
	{
		return mObjLimit;
	}
	virtual void startMovie(); // _90
	virtual void endMovie();   // _94

	virtual bool isAlwaysMovieActor() // _9C (weak)
	{
		return false;
	}
	virtual void createObj(int)      = 0;              // _A0
	virtual EnemyBase* getEnemy(int) = 0;              // _A4
	virtual void doAlloc() { }                         // _A8 (weak)
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID() // _AC (weak)
	{
		return EnemyTypeID::EnemyID_NULL;
	}
	virtual SysShape::Model* createModel();           // _B0
	virtual void initParms();                         // _B4
	virtual void loadResource();                      // _B8
	virtual void initObjects();                       // _BC
	virtual void initStoneSetting();                  // _C0
	virtual J3DModelData* loadModelData(JKRArchive*); // _C4
	virtual void loadModelData();                     // _C8
	virtual void loadAnimData();                      // _CC
	virtual void loadTexData();                       // _D0
	virtual J3DModelData* doLoadBmd(void*);           // _D4
	virtual J3DModelData* doLoadBdl(void*);           // _D8
	virtual void initGenerator();                     // _DC

	void init(EnemyParmsBase*);
	bool isValidEnemyTypeID();
	void loadStoneSetting(const char*);
	bool setupParms(const char*);
	void doAnimationAlwaysMovieActor();
	void doEntryAlwaysMovieActor();
	void doSimulationAlwaysMovieActor(f32);
	void doDirectDrawAlwaysMovieActor(Graphics&);
	void kill(EnemyBase*);

	inline EnemyBase* getEnemyByID(EnemyTypeID::EEnemyTypeID id)
	{
		EnemyBase* enemy = nullptr;
		for (int i = 0; i < mObjLimit; i++) {
			EnemyBase* currEnemy = getEnemy(i);
			if (id == currEnemy->getEnemyTypeID() && !(currEnemy->isEvent(0, EB_Alive))) {
				enemy = currEnemy;
				break;
			}
		}
		return enemy;
	}

	// _00		= VTABLE
	// _04-_1C	= GenericContainer
	J3DModelData* mModelData;          // _1C
	SysShape::AnimMgr* mAnimMgr;       // _20
	u8 mMtxBufferSize;                 // _24
	CollPartFactory* mCollPartFactory; // _28
	int mObjLimit;                     // _2C
	int mNumObjects;                   // _30
	EnemyParmsBase* mParms;            // _34
	EnemyGeneratorBase* mGenerator;    // _38
	EnemyStone::Info mStoneInfo;       // _3C
};

struct EnemyMgrBaseAlwaysMovieActor : public EnemyMgrBase {
	inline EnemyMgrBaseAlwaysMovieActor(int objLimit, u8 modelType)
	    : EnemyMgrBase(objLimit, modelType)
	{
	}

	virtual bool isAlwaysMovieActor() { return true; } // _9C (weak)
	virtual void doAnimation()                         // _08 (weak)
	{
		EnemyMgrBase::doAnimationAlwaysMovieActor();
	}
	virtual void doEntry() // _0C (weak)
	{
		EnemyMgrBase::doEntryAlwaysMovieActor();
	}
	virtual void doSimulation(f32 constraint) // _18 (weak)
	{
		EnemyMgrBase::doSimulationAlwaysMovieActor(constraint);
	}
	virtual void doDirectDraw(Graphics& gfx) // _1C (weak)
	{
		EnemyMgrBase::doDirectDrawAlwaysMovieActor(gfx);
	}
	virtual ~EnemyMgrBaseAlwaysMovieActor() { } // _58 (weak)

	// _00		= VTABLE
	// _00-_44	= EnemyMgrBase
};

extern JKRArchive* gParmArc;
} // namespace Game

#endif
