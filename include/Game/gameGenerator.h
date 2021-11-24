#ifndef _GAME_GENITEM_H
#define _GAME_GENITEM_H

#include "Matrixf.h"
#include "Graphics.h"
#include "stream.h"
#include "CNode.h"
#include "id32.h"

namespace Game {
struct Creature;
struct GeneratorMgr;

struct Generator : public CNode {
	virtual void doAnimation();  // _08
	virtual void doEntry();      // _0C
	virtual void doSetView(int); // _10
	virtual void doViewCalc();   // _14

	void informDeath(Creature*);

	u32* _18;                  // _18
	u32 _1C;                   // _1C /* Initialized to '____' */
	char _20[32];              // _20
	ID32 _40;                  // _40
	ID32 m_version;            // _4C
	u8 _58[4];                 // _58
	short _5C;                 // _5C
	u32 _60;                   // _60
	u32 _64;                   // _64
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
};

struct GeneratorMgr : public CNode {
	virtual void doAnimation();  // _08
	virtual void doEntry();      // _0C
	virtual void doSetView(int); // _10
	virtual void doViewCalc();   // _14

	// TODO: Data members
};

struct GenArg {
	virtual char* getName(); // _00

	// _00 VTBL
};

struct GenBase {
	virtual void doWrite(Stream&);              // _00
	virtual void ramSaveParameters(Stream&);    // _04
	virtual void ramLoadParameters(Stream&);    // _08
	virtual void doEvent(unsigned long);        // _0C
	virtual void doRead(Stream&);               // _10
	virtual void update(Generator*);            // _14
	virtual void render(Graphics&, Generator*); // _18
	virtual void getLatestVersion();            // _1C
	virtual void getShape();                    // _20

	// _00 VTBL
	// TODO: Data members
};

struct GenObject : public GenBase {
	virtual void updateUseList(Generator*, int);                 // _24
	virtual void generate(Generator*);                           // _28
	virtual void birth(GenArg*);                                 // _2C
	virtual void generatorMakeMatrix(Matrixf&, Vector3<float>&); // _30
	virtual void getDebugInfo(char*);                            // _34

	// TODO: Data members
};
} // namespace Game

#endif
