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
struct CreatureAnime;

struct StartSoundArg {
	inline StartSoundArg(Creature* obj, u32 soundID, u32 a1)
	{
		mObj     = obj;
		mSoundID = soundID;
		_08      = a1;
	}
	Creature* mObj; // _00
	u32 mSoundID;   // _04
	u32 _08;        //_08
};

struct FrameCalcArg {
	inline FrameCalcArg(Creature* obj, f32* dist, f32* pan, f32* dolby)
	{
		mObj   = obj;
		mDist  = dist;
		mPan   = pan;
		mDolby = dolby;
	}
	Creature* mObj; // _00
	f32* mDist;     // _04
	f32* mPan;      // _08
	f32* mDolby;    // _0C
};

struct Creature : public ObjBase {
	Creature(Game::Creature* gameObj);

	// VTBL 1 (JKRDisposer, dtor-only)
	// VTBL 2 (ObjBase + self)
	virtual ~Creature() { }                                             // _14 (weak)
	virtual void frameEnd_onPlaySe()       = 0;                         // _18
	virtual CreatureCastType getCastType() = 0;                         // _1C
	virtual void exec();                                                // _20
	virtual JAInter::Object* getJAIObject() = 0;                        // _24
	virtual void onCalcOn()                 = 0;                        // _28
	virtual void loopCalc(FrameCalcArg&);                               // _2C
	virtual JAISound* startSoundInner(StartSoundArg&);                  // _30
	virtual bool judgeNearWithPlayer(const Vec&, const Vec&, f32, f32); // _34
	virtual void onPlayingSe(u32, JAISound*);                           // _38
	virtual JAISound** getHandleArea(u8) = 0;                           // _3C

	bool isNear(Game::Creature*, f32);
	u8 getPlayingHandleNum();

	// unused/inlined:
	bool isVisible();

	// _10     = VTBL 1
	// _28     = VTBL 2
	// _00-_2C = ObjBase
	Game::Creature* mGameObj; // _2C
};
} // namespace PSM

#endif
