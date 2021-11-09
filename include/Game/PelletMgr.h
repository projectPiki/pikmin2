#ifndef _GAME_PELLETMGR_H
#define _GAME_PELLETMGR_H

#include "types.h"
#include "ObjectMgr.h"
#include "Game/GenericObjectMgr.h"

namespace Game {

struct PelletMgr : public NodeObjectMgr<GenericObjectMgr> {
	struct OtakaraItemCode {
		inline OtakaraItemCode(short value) : m_value(value) {};
		short m_value; // _00
	};

    virtual void doAnimation();                // _5C
    virtual void doEntry();                    // _60
    virtual void doSetView(int);               // _64
    virtual void doViewCalc();                 // _68
    virtual void doSimulation(float);          // _6C
    virtual void doDirectDraw(Graphics&);      // _70
    virtual void resetMgr();                   // _74
    virtual char* getMgrName();                // _78
    virtual char* getCaveName(int);            // _7C
    virtual int getCaveID(char*);              // _80
    virtual void doSimpleDraw(Viewport*);      // _84

	void makeOtakaraItemCode(char*, OtakaraItemCode&);

	u8 _3C; // _3C
};

extern PelletMgr* pelletMgr;

}; // namespace Game

#endif
