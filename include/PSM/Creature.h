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
	// vtable 2 (JKRDisposer + ObjBase + self)
	virtual ~Creature();                          // _04
	virtual void frameEnd_onPlaySe()       = 0;   // _08
	virtual CreatureCastType getCastType() = 0;   // _0C
	virtual void exec();                          // _18
	virtual JAInter::Object* getJAIObject() = 0;  // _14
	virtual void onCalcOn()                 = 0;  // _18
	virtual void loopCalc(FrameCalcArg&);         // _1C
	virtual void startSoundInner(StartSoundArg&); // _20
	virtual bool judgeNearWithPlayer(const Vec&, const Vec&, float,
	                                 float);    // _24
	virtual void onPlayingSe(ulong, JAISound*); // _28
	virtual void getHandleArea(u8) = 0;      // _2C

	Game::Creature* m_gameObj;
};
} // namespace PSM

#endif
