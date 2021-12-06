#ifndef _GAME_PELLETMGR_H
#define _GAME_PELLETMGR_H

#include "types.h"
#include "ObjectMgr.h"
#include "GenericObjectMgr.h"

namespace Game {

struct PelletMgr : public NodeObjectMgr<GenericObjectMgr> {
	struct OtakaraItemCode {
		short m_value; // _00
	};
	void makeOtakaraItemCode(char*, OtakaraItemCode&);

	// vtable 1
	virtual ~PelletMgr(); // _00
	// vtable 2
	virtual void doAnimation();           // _00
	virtual void doEntry();               // _04
	virtual void doSetView(int);          // _08
	virtual void doViewCalc();            // _0C
	virtual void doSimulation(float);     // _10
	virtual void doDirectDraw(Graphics&); // _14
	virtual char* getMgrName();           // _4C
	virtual char* getCaveName(int);       // _50
	int getCaveID(char*);                 // _54
	virtual void doSimpleDraw(Viewport*); // _58

	u8 _3C; // _3C
};

static PelletMgr* pelletMgr;

}; // namespace Game

#endif
