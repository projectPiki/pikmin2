#ifndef _PSM_CREATURE_H
#define _PSM_CREATURE_H

#include "Game/Creature.h"
#include "PSM/ObjBase.h"

struct JAISound;
struct Vec;

namespace JAInter {
struct Object;
} // namespace JAInter

namespace PSM {
struct FrameCalcArg;
struct StartSoundArg;

struct Creature : public ObjBase {
	// VTBL 1 (JKRDisposer, dtor-only)
	// VTBL 2 (ObjBase + self)
	virtual ~Creature() { }                                             // _14 (weak)
	virtual void frameEnd_onPlaySe()       = 0;                         // _18
	virtual CreatureCastType getCastType() = 0;                         // _1C
	virtual void exec();                                                // _20
	virtual JAInter::Object* getJAIObject() = 0;                        // _24
	virtual void onCalcOn()                 = 0;                        // _28
	virtual void loopCalc(FrameCalcArg&);                               // _2C
	virtual void startSoundInner(StartSoundArg&);                       // _30
	virtual bool judgeNearWithPlayer(const Vec&, const Vec&, f32, f32); // _34
	virtual void onPlayingSe(u32, JAISound*);                           // _38
	virtual JAISound** getHandleArea(u8) = 0;                           // _3C

	bool isNear(Game::Creature*, f32);
	void getPlayingHandleNum();

	// _10     = VTBL 1
	// _28     = VTBL 2
	// _00-_2C = ObjBase
	Game::Creature* m_gameObj; // _2C
};
} // namespace PSM

#endif
