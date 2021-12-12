#ifndef _GAME_GAMEGENERATOR_H
#define _GAME_GAMEGENERATOR_H

#include "Matrixf.h"
#include "Graphics.h"
#include "Parameters.h"
#include "stream.h"
#include "CNode.h"
#include "id32.h"

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

	GenObject* _18;       // _18
	uint _1C;             // _1C /* Initialized to '____' */
	char _20[32];         // _20 /* shift-jis name given in generator files */
	ID32 _40;             // _40
	ID32 m_version;       // _4C
	u8 _58[4];            // _58
	ushort _5C;           // _5C
	Generator* _60;       // _60 /* m_prev */
	Generator* _64;       // _64 /* m_next */
	GeneratorMgr* m_mgr;  // _68
	Creature* m_creature; // _6C
	int _70;              // _70
	u32 _74;              // _74
	u32 _78;              // _78
	u32 _7C;              // _7C
	u8 _80[4];            // _80
	int m_dayLimitMaybe;  // _84
	u8 _88[12];           // _88
	Vector3f m_position;  // _94
	Vector3f m_offset;    // _A0
	u8 _AC;               // _AC
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
};

struct GenArg {
	virtual char* getName(); // _00

	// _00 VTBL
};

struct GenBase : public Parameters {
	GenBase(ulong, char*, char*);

	virtual void doWrite(Stream&);              // _00
	virtual void ramSaveParameters(Stream&);    // _04
	virtual void ramLoadParameters(Stream&);    // _08
	virtual void doEvent(ulong);                // _0C
	virtual void doRead(Stream&);               // _10
	virtual void update(Generator*);            // _14
	virtual void render(Graphics&, Generator*); // _18
	virtual ulong getLatestVersion();           // _1C
	virtual J3DModelData* getShape();           // _20

	void readVersion(Stream&);
	void read(Stream&);
	void writeVersion(Stream&);
	void write(Stream&);

	// _00 - _0C: Parameters
	// _0C: vtable
	ulong m_typeID; // _10
	uint m_rawID;   // _14
	char* _18;      // _18
	char* _1C;      // _1C
	u32 _20;        // _20
};

struct GenObject : public GenBase {
	virtual void render(Graphics&, Generator*);            // _18
	virtual ulong getLatestVersion();                      // _1C
	virtual J3DModelData* getShape();                      // _20
	virtual void updateUseList(Generator*, int);           // _24
	virtual Creature* generate(Generator*);                // _28
	virtual void birth(GenArg*);                           // _2C
	virtual void generatorMakeMatrix(Matrixf&, Vector3f&); // _30
	virtual void getDebugInfo(char*);                      // _34
};

/**
 * @size{0x10}
 */
struct GenObjectFactory {
	typedef GenObject* MakeFunction(void);
	void createInstance();

	uint m_typeID;                // _00
	MakeFunction* m_makeFunction; // _04
	char* m_name;                 // _08
	uint m_version;               // _0C

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
	uint m_count;                  // _00
	uint m_limit;                  // _04
	GenObjectFactory* m_factories; // _08
	u8 _0C[4];                     // _0C
};
} // namespace Game

extern uint GeneratorCurrentVersion;

#endif
