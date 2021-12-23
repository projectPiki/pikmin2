#ifndef _GAME_ENEMYMGRBASE_H
#define _GAME_ENEMYMGRBASE_H

#include "Container.h"
#include "GenericObjectMgr.h"

struct J3DModelData;
struct JKRArchive;

namespace SysShape {
struct Model;
} // namespace SysShape

namespace Game {
struct CreatureKillArg;
struct EnemyBase;
struct EnemyBirthArg;
struct EnemyGeneratorBase;

struct IEnemyMgrBase : public GenericObjectMgr, public GenericContainer {
	// vtable 2 (GenericContainer + self)
	virtual ~IEnemyMgrBase(); // 18
};

struct EnemyMgrBase : public IEnemyMgrBase {
	// vtable 1 (GenericObjectMgr)
	virtual void doAnimation();           // _00
	virtual void doEntry();               // _04
	virtual void doSetView(int);          // _08
	virtual void doViewCalc();            // _0C
	virtual void doSimulation(float);     // _10
	virtual void doDirectDraw(Graphics&); // _14
	// vtable 2 (GenericContainer + IEnemyMgrBase + self)
	virtual ~EnemyMgrBase();                          // _18
	virtual void* getObject(void*);                   // _1C
	virtual int getNext(void*);                       // _20
	virtual int getStart();                           // _24
	virtual int getEnd();                             // _28
	virtual void alloc();                             // _2C
	virtual EnemyBase* birth(EnemyBirthArg&);         // _30
	virtual J3DModelData* getJ3DModelData() const;    // _34
	virtual EnemyGeneratorBase* getGenerator() const; // _38
	virtual void killAll(CreatureKillArg*);           // _3C
	virtual void setupSoundViewerAndBas();            // _40
	virtual void setDebugParm(ulong);                 // _44
	virtual void resetDebugParm(ulong);               // _48
	virtual int getMaxObjects() const;                // _4C
	virtual void startMovie();                        // _50
	virtual void endMovie();                          // _54
	virtual void get(void*);                          // _58
	/**
	 * @reifiedAddress{801074BC}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual bool isAlwaysMovieActor() // _5C
	{
		return false;
	}
	virtual void createObj(int)   = 0;       // _60
	virtual EnemyBase* getEnemy() = 0;       // _64
	virtual void doAlloc();                  // _68
	virtual void getEnemyTypeID();           // _6C
	virtual SysShape::Model* createModel();  // _70
	virtual void initParms();                // _74
	virtual void loadResource();             // _78
	virtual void initObjects();              // _7C
	virtual void initStoneSetting();         // _80
	virtual void loadModelData(JKRArchive*); // _84
	virtual void loadModelData();            // _88
	virtual void loadAnimData();             // _8C
	virtual void loadTexData();              // _90
	virtual void doLoadBmd(void*);           // _94
	virtual void doLoadBdl(void*);           // _98
	virtual void initGenerator();            // _9C
};
} // namespace Game

#endif
