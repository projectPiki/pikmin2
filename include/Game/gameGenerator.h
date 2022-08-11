#ifndef _GAME_GAMEGENERATOR_H
#define _GAME_GAMEGENERATOR_H

#include "IDelegate.h"
#include "Matrixf.h"
#include "Graphics.h"
#include "Parameters.h"
#include "stream.h"
#include "CNode.h"
#include "id32.h"
#include "Game/enemyInfo.h"
#include "Game/EnemyPelletInfo.h"
#include "Game/PelletMgr.h"

struct J3DModelData;

namespace Game {
struct Creature;
struct GeneratorMgr;
struct GenObject;

struct Generator : public CNode {
	Generator();
	Generator(int);

	virtual ~Generator();
	virtual void doAnimation();  // _08
	virtual void doEntry();      // _0C
	virtual void doSetView(int); // _10
	virtual void doViewCalc();   // _14

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

	GenObject* _18;            // _18
	u32 _1C;                   // _1C /* Initialized to '____' */
	char _20[32];              // _20 /* shift-jis name given in generator files */
	ID32 _40;                  // _40
	ID32 m_version;            // _4C
	u8 _58[4];                 // _58
	u16 _5C;                   // _5C
	Generator* _60;            // _60 /* m_prev */
	Generator* _64;            // _64 /* m_next */
	GeneratorMgr* m_mgr;       // _68
	Creature* m_creature;      // _6C
	int _70;                   // _70
	u32 _74;                   // _74
	u32 _78;                   // _78
	u32 _7C;                   // _7C
	u8 _80[4];                 // _80
	int m_dayLimitMaybe;       // _84
	u8 _88[12];                // _88
	Vector3f m_position;       // _94
	Vector3f m_offset;         // _A0
	u8 _AC;                    // _AC
	int m_generatorIndexMaybe; // _B0

	//  0: format of the generator files on disc
	// !0: format of the gencache?
	static u8 ramMode;
};

struct GeneratorMgr : public CNode {
	GeneratorMgr();

	virtual ~GeneratorMgr();
	virtual void doAnimation();  // _08
	virtual void doEntry();      // _0C
	virtual void doSetView(int); // _10
	virtual void doViewCalc();   // _14

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
	GeneratorMgr* _20;         // _20 /* root(/parent?) manager */
	Vector3f m_cursorPosition; // _24
	Generator* m_generator;    // _28
	ID32 _34;                  // _34
	ID32 _40;                  // _40
	int _4C;                   // _4C /* generator count */
	ID32 _50;                  // _50
	float _5C;                 // _5C
	float _60;                 // _60
	float _64;                 // _64
	float _68;                 // _68
	u8 _6C;                    // _6C
	u8 _6D;                    // _6D

	static Delegate1<struct BaseGameSection, Vector3f&>* cursorCallback;
};

struct CreatureInitArg {
	virtual const char* getName() = 0; // _08

	// _00 VTBL
};

struct GenArg : public CreatureInitArg {
	virtual const char* getName(); // _00

	// _00 VTBL
	Vector3f m_position; // _04
};

struct GenBase : public Parameters {
	GenBase(u32, char*, char*);

	virtual void doWrite(Stream&);              // _00
	virtual void ramSaveParameters(Stream&);    // _04
	virtual void ramLoadParameters(Stream&);    // _08
	virtual void doEvent(u32);                  // _0C
	virtual void doRead(Stream&);               // _10
	virtual void update(Generator*);            // _14
	virtual void render(Graphics&, Generator*); // _18
	virtual u32 getLatestVersion();             // _1C
	virtual J3DModelData* getShape();           // _20

	void readVersion(Stream&);
	void read(Stream&);
	void writeVersion(Stream&);
	void write(Stream&);

	// _00 - _0C: Parameters
	// _0C: vtable
	u32 m_typeID; // _10
	u32 m_rawID;  // _14
	char* _18;    // _18
	char* _1C;    // _1C
	u32 _20;      // _20
};

struct EnemyGeneratorBase : public CNode {
	EnemyGeneratorBase(char* name)
	    : CNode(name)
	    , m_version('????')
	{
	}

	u32 getInitialParam();

	virtual ~EnemyGeneratorBase() {};         // _08
	virtual void doWrite(Stream&);            // _10
	virtual void doRead(Stream&);             // _14
	virtual u32 getLatestVersion();           // _18
	virtual void draw(Graphics&, Generator*); // _1C

	// _00 VTBL

	ID32 m_version; // _18
};

struct GenObject : public GenBase {
	GenObject(u32 tag, char* description, char* t)
	    : GenBase(tag, description, t)
	{
	}

	void update(Game::Generator*);

	virtual void render(Graphics&, Generator*);            // _18
	virtual u32 getLatestVersion();                        // _1C
	virtual J3DModelData* getShape();                      // _20
	virtual void updateUseList(Generator*, int);           // _24
	virtual Creature* generate(Generator*);                // _28
	virtual Creature* birth(GenArg*) = 0;                  // _2C
	virtual void generatorMakeMatrix(Matrixf&, Vector3f&); // _30
	virtual void getDebugInfo(char*);                      // _34
};

struct GenObjectEnemy : public GenObject {
	GenObjectEnemy();
	void initialise();
	void createEnemyGenerator();
	void doReadOldVersion(Stream&);

	virtual void doWrite(Stream&);               // _08
	virtual void ramSaveParameters(Stream&);     // _0C
	virtual void ramLoadParameters(Stream&);     // _10
	virtual void doRead(Stream&);                // _18
	virtual void render(Graphics&, Generator*);  // _20
	virtual J3DModelData* getShape();            // _28
	virtual void updateUseList(Generator*, int); // _2C
	virtual Creature* generate(Generator*);      // _30
	virtual Creature* birth(GenArg*);            // _34

	// vtable end

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
	u8 m_byte_4C;                                 // _4C
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

	u32 m_count;                   // _00
	u32 m_limit;                   // _04
	GenObjectFactory* m_factories; // _08
	u8 _0C[4];                     // _0C
};

extern GeneratorMgr* generatorMgr;
extern GeneratorMgr* onceGeneratorMgr;
extern GeneratorMgr* limitGeneratorMgr;
extern GeneratorMgr* plantsGeneratorMgr;
extern GeneratorMgr* dayGeneratorMgr;
} // namespace Game

extern u32 GeneratorCurrentVersion;

#endif
