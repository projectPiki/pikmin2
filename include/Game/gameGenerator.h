#ifndef _GAME_GAMEGENERATOR_H
#define _GAME_GAMEGENERATOR_H

#include "IDelegate.h"
#include "Matrixf.h"
#include "Graphics.h"
#include "Parameters.h"
#include "stream.h"
#include "CNode.h"
#include "id32.h"
#include "Game/EnemyBase.h"
#include "Game/enemyInfo.h"
#include "Game/EnemyPelletInfo.h"
#include "Game/pelletMgr.h"

struct J3DModelData;

namespace Game {
struct Creature;
struct GeneratorMgr;
struct GenObject;

struct Generator : public CNode {
	Generator();
	Generator(int);

	virtual ~Generator();                       // _08
	virtual void doAnimation();                 // _10
	virtual void doEntry();                     // _14
	virtual void doSetView(int viewportNumber); // _18
	virtual void doViewCalc();                  // _1C

	void initialiseSystem();
	void generate();
	void render(Graphics&);
	void update();
	void updateUseList();

	bool isExpired();
	bool need_saveCreature();

	bool loadCreature(Stream&);
	void saveCreature(Stream&);

	void read(Stream&);
	void write(Stream&);

	void informDeath(Creature*);

	GenObject* _18;             // _18
	u32 _1C;                    // _1C /* Initialized to '____' */
	char m_genObjName[32];      // _20 /* shift-jis name given in generator files */
	ID32 _40;                   // _40
	ID32 m_version;             // _4C
	u8 _58[4];                  // _58
	u16 m_reservedNum;          // _5C
	Generator* _60;             // _60 /* m_prev */
	Generator* _64;             // _64 /* m_next */
	GeneratorMgr* m_mgr;        // _68
	Creature* m_creature;       // _6C
	int m_daysTillRessurection; // _70
	u32 _74;                    // _74
	u32 _78;                    // _78
	u32 _7C;                    // _7C
	u8 _80[4];                  // _80
	int m_dayLimitMaybe;        // _84
	u8 _88[12];                 // _88
	Vector3f m_position;        // _94
	Vector3f m_offset;          // _A0
	u8 _AC;                     // _AC
	int m_generatorIndexMaybe;  // _B0

	//  0: format of the generator files on disc
	// !0: format of the gencache?
	static u8 ramMode;
};

struct GeneratorMgr : public CNode {
	GeneratorMgr();

	virtual ~GeneratorMgr();                    // _08
	virtual void doAnimation();                 // _10
	virtual void doEntry();                     // _14
	virtual void doSetView(int viewportNumber); // _18
	virtual void doViewCalc();                  // _1C

	void addMgr(GeneratorMgr*);
	void generate();
	GeneratorMgr* getNext();
	GeneratorMgr* getChild();
	bool isRootMgr();
	void read(Stream&, bool);
	void write(Stream&);
	void render(Graphics&);
	void setDayLimit(int);
	void update();
	void updateCursorPos(Vector3f&);
	void updateUseList();
	// TODO: Data members

	GeneratorMgr* m_nextMgr;   // _18
	GeneratorMgr* m_childMgr;  // _1C
	GeneratorMgr* m_parentMgr; // _20
	Vector3f m_cursorPosition; // _24
	Generator* m_generator;    // _28
	ID32 _34;                  // _34
	ID32 m_versionID;          // _40
	int m_generatorCount;      // _4C
	ID32 _50;                  // _50
	Vector3f m_startPos;       // _5C
	f32 m_startDir;            // _68, v0.1 adds the start direction
	u8 _6C;                    // _6C
	u8 _6D;                    // _6D

	static Delegate1<struct BaseGameSection, Vector3f&>* cursorCallback;
};

struct GenArg : public CreatureInitArg {
	virtual const char* getName(); // _08 (weak)

	// _00 VTBL
	Vector3f m_position; // _04
};

struct GenBase : public Parameters {
	GenBase(u32, char*, char*);

	virtual void doWrite(Stream&);              // _08 (weak)
	virtual void ramSaveParameters(Stream&);    // _0C
	virtual void ramLoadParameters(Stream&);    // _10
	virtual void doEvent(u32);                  // _14 (weak)
	virtual void doRead(Stream&);               // _18 (weak)
	virtual void update(Generator*);            // _1C (weak)
	virtual void render(Graphics&, Generator*); // _20 (weak)
	virtual u32 getLatestVersion();             // _24 (weak)
	virtual J3DModelData* getShape();           // _28 (weak)

	void readVersion(Stream&);
	void read(Stream&);
	void writeVersion(Stream&);
	void write(Stream&);

	// _00 - _0C: Parameters
	// _0C: vtable
	u32 m_typeID;        // _10
	u32 m_rawID;         // _14
	char* m_labelData;   // _18
	char* m_objTypeName; // _1C
	u32 _20;             // _20
};

struct EnemyGeneratorBase : public CNode {
	EnemyGeneratorBase(char* name)
	    : CNode(name)
	    , m_version('????')
	{
	}

	virtual ~EnemyGeneratorBase() {};         // _08 (weak)
	virtual void doWrite(Stream&);            // _10 (weak)
	virtual void doRead(Stream&);             // _14 (weak)
	virtual u32 getLatestVersion();           // _18 (weak)
	virtual void draw(Graphics&, Generator*); // _1C (weak)
	virtual void* getInitialParam();          // _20 (weak)

	// _00 VTBL

	ID32 m_version; // _18
};

struct GenObject : public GenBase {
	GenObject(u32 tag, char* description, char* t)
	    : GenBase(tag, description, t)
	{
	}

	virtual void update(Game::Generator*);                 // _1C (weak)
	virtual void render(Graphics&, Generator*);            // _20 (weak)
	virtual u32 getLatestVersion();                        // _24
	virtual void updateUseList(Generator*, int);           // _2C
	virtual Creature* generate(Generator*);                // _30 (weak)
	virtual Creature* birth(GenArg*) = 0;                  // _34
	virtual void generatorMakeMatrix(Matrixf&, Vector3f&); // _38 (weak)
	virtual void getDebugInfo(char*);                      // _3C (weak)
};

struct BaseItemMgr;
struct GenItemParm {
	virtual int getShapeID() { return 0; } // _08 (weak)

	// _00 VTBL
};

/**
 * @size{0x40}
 */
struct GenItem : public GenObject {
	virtual void doWrite(Stream&);                         // _08
	virtual void ramSaveParameters(Stream&);               // _0C
	virtual void ramLoadParameters(Stream&);               // _10
	virtual void doEvent(u32);                             // _14
	virtual void doRead(Stream&);                          // _18
	virtual J3DModelData* getShape();                      // _28
	virtual void updateUseList(Generator*, int);           // _2C
	virtual Creature* generate(Generator*);                // _30
	virtual Creature* birth(GenArg*);                      // _34
	virtual void generatorMakeMatrix(Matrixf&, Vector3f&); // _38

	static void initialise();

	int m_mgrIndex;         // _24
	Vector3f m_rotation;    // _28
	BaseItemMgr* m_itemMgr; // _34
	GenItemParm* m_parm;    // _38
};

struct GenPellet : public GenObject {
	virtual void doWrite(Stream&);                         // _08
	virtual void ramSaveParameters(Stream&);               // _0C
	virtual void ramLoadParameters(Stream&);               // _10
	virtual void doEvent(unsigned long);                   // _14
	virtual void doRead(Stream&);                          // _18
	virtual J3DModelData* getShape();                      // _28
	virtual void updateUseList(Generator*, int);           // _2C
	virtual Creature* generate(Generator*);                // _30 (weak)
	virtual Creature* birth(GenArg*) = 0;                  // _34
	virtual void generatorMakeMatrix(Matrixf&, Vector3f&); // _38
	virtual void getDebugInfo(char*);                      // _3C

	static void initialise();
};

struct GenObjectPiki : public GenObject {
	virtual void ramSaveParameters(Stream&); // _0C
	virtual void ramLoadParameters(Stream&); // _10
	virtual Creature* generate(Generator*);  // _30
	virtual Creature* birth(GenArg*);        // _34

	static void initialise();
};

struct GenObjectEnemy : public GenObject {
	GenObjectEnemy();

	virtual void doWrite(Stream&);               // _08
	virtual void ramSaveParameters(Stream&);     // _0C
	virtual void ramLoadParameters(Stream&);     // _10
	virtual void doRead(Stream&);                // _18
	virtual void render(Graphics&, Generator*);  // _20
	virtual J3DModelData* getShape();            // _28
	virtual void updateUseList(Generator*, int); // _2C
	virtual Creature* generate(Generator*);      // _30
	virtual Creature* birth(GenArg*);            // _34

	static void initialise();
	void createEnemyGenerator();
	void doReadOldVersion(Stream&);

	EnemyTypeID::EEnemyTypeID m_enemyID;          // _24
	u8 m_spawnType;                               // _28 // 0: point, 1: circle
	u8 m_tekiBirthType;                           // _29
	s16 m_tekiNum;                                // _2A
	f32 m_appearRadius;                           // _2C
	f32 m_direction;                              // _30
	f32 m_enemySize;                              // _34
	PelletMgr::OtakaraItemCode m_otakaraItemCode; // _38
	EnemyPelletInfo m_pelletInfo;                 // _3C
	EnemyGeneratorBase* m_enemyGenerator;         // _48
	u8 _4C;                                       // _4C
};

GenObject* makeObjectEnemy(void);

/**
 * @size{0x10}
 */
struct GenObjectFactory {
	typedef GenObject* MakeFunction(void);
	void createInstance();

	u32 m_typeID;                 // _00
	MakeFunction* m_makeFunction; // _04
	char* m_name;                 // _08
	u32 m_version;                // _0C

	static struct GenObjectFactoryFactory* factory;
};

/**
 * @fabricatedName
 * @size{0x10}
 */
struct GenObjectFactoryFactory {
	inline GenObjectFactoryFactory()
	{
		m_factories = new GenObjectFactory[12];
		m_limit     = 12;
		m_count     = 0;
	}

	int m_count;                   // _00
	int m_limit;                   // _04
	GenObjectFactory* m_factories; // _08
	u8 _0C[4];                     // _0C
};

struct GenObjectNavi : public GenObject {
	GenObjectNavi()
	    : GenObject('navi', "object type", "NAVI をセット")  // set the NAVI
	    , m_rotParm(this, 'p000', "スタート向き", 0, 0, 360) // start direction
	{
	}

	virtual void ramSaveParameters(Stream&); // _0C
	virtual void ramLoadParameters(Stream&); // _10
	virtual Creature* generate(Generator*);  // _30
	virtual Creature* birth(GenArg*);        // _34

	static void initialise();

	Parm<float> m_rotParm; // _24
};

extern GeneratorMgr* generatorMgr;
extern GeneratorMgr* onceGeneratorMgr;
extern GeneratorMgr* limitGeneratorMgr;
extern GeneratorMgr* plantsGeneratorMgr;
extern GeneratorMgr* dayGeneratorMgr;
} // namespace Game

extern u32 GeneratorCurrentVersion;

#endif
