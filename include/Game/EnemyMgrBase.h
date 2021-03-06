#ifndef _GAME_ENEMYMGRBASE_H
#define _GAME_ENEMYMGRBASE_H

#include "Container.h"
#include "Game/EnemyPelletInfo.h"
#include "Game/EnemyStone.h"
#include "Game/PelletMgr.h"
#include "Game/enemyInfo.h"
#include "GenericObjectMgr.h"
#include "Vector3.h"

struct CollPartFactory;
struct J3DModelData;
struct JKRArchive;

namespace SysShape {
struct AnimMgr;
struct Model;
} // namespace SysShape

namespace Game {
struct CreatureKillArg;
struct EnemyBase;
struct EnemyGeneratorBase;
struct EnemyParmsBase;

struct EnemyBirthArg {
	Vector3f m_position;                           // _00
	float m_faceDir;                               // _0C
	u8 m_tekiBirthType;                            // _10
	EnemyGeneratorBase* m_generator;               // _14
	PelletMgr::OtakaraItemCode* m_otakaraItemCode; // _18
	EnemyPelletInfo m_pelletInfo;                  // _1C
	EnemyTypeID::EEnemyTypeID m_typeID;            // _28
	float _2C;                                     // _2C
	u8 _30;                                        // _30
};

struct IEnemyMgrBase : public GenericObjectMgr, public GenericContainer {
	// vtable 2 (GenericContainer + self)
	/**
	 * @reifiedAddress{8010A960}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual ~IEnemyMgrBase() { } // 18
};
struct EnemyMgrBase : public IEnemyMgrBase {
	EnemyMgrBase(int, u8);

	// vtable 1 (GenericObjectMgr)
	virtual void doAnimation();           // _00
	virtual void doEntry();               // _04
	virtual void doSetView(int);          // _08
	virtual void doViewCalc();            // _0C
	virtual void doSimulation(float);     // _10
	virtual void doDirectDraw(Graphics&); // _14
	// vtable 2 (GenericContainer + IEnemyMgrBase + self)
	virtual ~EnemyMgrBase(); // _18
	/**
	 * @reifiedAddress{8010A820}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual void* getObject(void* index) { return get(index); }; // _1C
	virtual void* getNext(void*);                                // _20
	/**
	 * @reifiedAddress{8010A7F0}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual void* getStart() { return getNext((void*)-1); } // _24
	/**
	 * @reifiedAddress{8010A7E8}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual void* getEnd() { return (void*)m_objLimit; } // _28
	virtual void alloc();                                // _2C
	virtual EnemyBase* birth(EnemyBirthArg&);            // _30
	/**
	 * @reifiedAddress{8010A7AC}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual J3DModelData* getJ3DModelData() const // _34
	{
		return m_modelData;
	}
	/**
	 * @reifiedAddress{8010A7B4}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual EnemyGeneratorBase* getGenerator() const // _38
	{
		return m_generator;
	}
	virtual void killAll(CreatureKillArg*); // _3C
	virtual void setupSoundViewerAndBas();  // _40
	virtual void setDebugParm(u32);         // _44
	virtual void resetDebugParm(u32);       // _48
	/**
	 * @reifiedAddress{8010A7BC}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual int getMaxObjects() const // _4C
	{
		return m_objLimit;
	}
	virtual void startMovie(); // _50
	virtual void endMovie();   // _54
	/**
	 * @reifiedAddress{8010A780}
	 * @reifiedFile{plugProjectYamashitaU/pelplant.cpp}
	 */
	virtual EnemyBase* get(void* index) // _58
	{
		return getEnemy((long)index);
	}
	/**
	 * @reifiedAddress{801074BC}
	 * @reifiedFile{plugProjectYamashitaU/enemyBase.cpp}
	 */
	virtual bool isAlwaysMovieActor() // _5C
	{
		return false;
	}
	virtual void createObj(int)      = 0;               // _60
	virtual EnemyBase* getEnemy(int) = 0;               // _64
	virtual void doAlloc();                             // _68
	virtual EnemyTypeID::EEnemyTypeID getEnemyTypeID(); // _6C
	virtual SysShape::Model* createModel();             // _70
	virtual void initParms();                           // _74
	virtual void loadResource();                        // _78
	virtual void initObjects();                         // _7C
	virtual void initStoneSetting();                    // _80
	virtual void loadModelData(JKRArchive*);            // _84
	virtual void loadModelData();                       // _88
	virtual void loadAnimData();                        // _8C
	virtual void loadTexData();                         // _90
	virtual void doLoadBmd(void*);                      // _94
	virtual void doLoadBdl(void*);                      // _98
	virtual void initGenerator();                       // _9C

	void init(EnemyParmsBase*);
	bool isValidEnemyTypeID();

	J3DModelData* m_modelData;          // _1C
	SysShape::AnimMgr* m_animMgr;       // _20
	u8 m_modelType;                     // _24
	CollPartFactory* m_collPartFactory; // _28
	int m_objLimit;                     // _2C
	int m_objCount;                     // _30
	EnemyParmsBase* m_parms;            // _34
	EnemyGeneratorBase* m_generator;    // _38
	EnemyStone::Info m_stoneInfo;       // _3C
};
extern JKRArchive* gParmArc;
} // namespace Game

#endif
