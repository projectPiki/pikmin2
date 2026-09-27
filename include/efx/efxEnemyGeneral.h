#ifndef _EFX_ENEMYGENERAL_H
#define _EFX_ENEMYGENERAL_H

#include "efx/TSimple.h"
#include "efx/TChasePos.h"
#include "Game/enemyInfo.h"
#include "Vector3.h"

namespace efx {
struct TEnemyDead : public TSimple1 {
	inline TEnemyDead()
	    : TSimple1(PID_EnemyDead)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_0C  = TSimple1
};

struct TEnemyDead_ArgScale : public TSimple1 {
	inline TEnemyDead_ArgScale()
	    : TSimple1(PID_EnemyDead)
	{
	}
	virtual bool create(Arg*); // _08

	// _00		= VTBL
	// _00-_0C	= TSimple1
};

struct TEnemyPiyo : public TChasePos {
	inline TEnemyPiyo()
	    : TChasePos(PID_EnemyPiyo)
	{
	}

	// vtable 1 (TBase)
	virtual bool create(Arg*); // _08
	// 	_0C-_14
	// vtable 2 (JPAEmitterCallBack + Self)
	virtual ~TEnemyPiyo() { } // _48 (weak)
};

struct TEnemyPoisonS : public TSimple1 {
	TEnemyPoisonS()
	    : TSimple1(0x22F)
	{
	}

	virtual bool create(Arg*); // _08
};

struct TEnemyPoisonL : public TSimple1 {
	TEnemyPoisonL()
	    : TSimple1(0x22E)
	{
	}
	virtual bool create(Arg*); // _08
};

struct TSekikaLOff : public TSimple1 {
	inline TSekikaLOff()
	    : TSimple1(PID_SekikaLOff)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TSekikaLOn : public TSimple1 {
	inline TSekikaLOn()
	    : TSimple1(PID_SekikaLOn)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TSekikaSOff : public TSimple1 {
	inline TSekikaSOff()
	    : TSimple1(PID_SekikaSOff)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TSekikaSOn : public TSimple1 {
	inline TSekikaSOn()
	    : TSimple1(PID_SekikaSOn)
	{
	}

	virtual bool create(Arg*); // _08

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TEnemyWalkSmoke : public TBase {
	inline TEnemyWalkSmoke() { }

	virtual bool create(Arg*);   // _08
	virtual void forceKill() { } // _0C (weak)
	virtual void fade() { }      // _10 (weak)

	// _00      = VTABLE
	// Vector3f* _04;  // _04 - unknown
	// Vector3f _10; // _10
};

struct TEnemyWalkSmokeS : public TSimple1 {
	TEnemyWalkSmokeS(u16 id)
	    : TSimple1(id)
	{
	}
	virtual bool create(Arg*); // _08
};

struct TEnemyWalkSmokeM : public TSimple1 {
	TEnemyWalkSmokeM(u16 id)
	    : TSimple1(id)
	{
	}

	virtual bool create(Arg*); // _08
};

struct TEnemyDownSmoke : public TSimple1 {
	TEnemyDownSmoke(f32 scale)
	    : TSimple1(PID_EnemyDownSmoke)
	    , mScale(scale)
	{
	}

	virtual bool create(Arg*); // _08

	// _00		= VTBL
	// _00-_0C	= TSimple1
	f32 mScale; // _0C
};

struct TEnemyDownWat : public TSimple3 {
	TEnemyDownWat()
	    : TSimple3(PID_EnemyDownWat_1, PID_EnemyDownWat_2, PID_EnemyDownWat_3)
	{
	}

	virtual bool create(Arg*); // _08

	// _00		= VTBL
	// _00-_18	= TSimple3
};

struct TEnemyDive : public TSimple2 {
	inline TEnemyDive()
	    : TSimple2(PID_EnemyDive_1, PID_EnemyDive_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00      = VTBL
	// _00-_10  = TSimple2
};

struct TEnemyBombScaleTable {
	TEnemyBombScaleTable(Game::EnemyTypeID::EEnemyTypeID);

	int mType;  // _00
	f32 mScale; // _04
};

struct TEnemyBomb : public TBase {
	virtual bool create(Arg*);   // _08
	virtual void forceKill() { } // _0C (weak)
	virtual void fade() { }      // _10 (weak)

	// _00  = VTABLE
};

struct TEnemyBombS : public TSimple4 {
	TEnemyBombS()
	    : TSimple4(PID_EnemyBombS_1, PID_EnemyBombS_2, PID_EnemyBombS_3, PID_EnemyBombS_4)
	{
	}
	virtual bool create(Arg*); // _08
};

struct TEnemyBombM : public TSimple4 {
	TEnemyBombM()
	    : TSimple4(PID_EnemyBombM_1, PID_EnemyBombM_2, PID_EnemyBombM_3, PID_EnemyBombM_4)
	{
	}
	virtual bool create(Arg*); // _08
};

struct TEnemyApsmoke : public TBase {
	virtual bool create(Arg*);   // _08
	virtual void forceKill() { } // _0C (weak)
	virtual void fade() { }      // _10 (weak)
};

struct TEnemyApsmokeS : public TSimple1 {
	TEnemyApsmokeS()
	    : TSimple1(PID_EnemyApSmokeS)
	{
	}

	virtual bool create(Arg*); // _08
};

struct TEnemyApsmokeM : public TSimple1 {
	TEnemyApsmokeM()
	    : TSimple1(PID_EnemyApSmokeM)
	{
	}

	virtual bool create(Arg*); // _08
};

/**
 * @size = 0x14
 */
struct TEnemyHamonM : public TChasePos {
	inline TEnemyHamonM(Vector3f* position)
	    : TChasePos(PID_EnemyHamonM, position)
	{
	}

	virtual bool create(Arg*);  // _08
	virtual ~TEnemyHamonM() { } // _48 (weak)

	// _00      = VTABLE
	// _04-_14  = TChasePos
};

/**
 * @size = 0x14
 */
struct TEnemyHamonMInd : public TChasePos {
	inline TEnemyHamonMInd(Vector3f* position)
	    : TChasePos(PID_EnemyHamonMInd, position)
	{
	}

	virtual bool create(Arg*);     // _08
	virtual ~TEnemyHamonMInd() { } // _48 (weak, thunk at _1C)

	// _00      = VTABLE
	// _04-_14  = TChasePos
};

/**
 * @size = 0x2C
 */
struct TEnemyHamonChasePos : public TBase {
	inline TEnemyHamonChasePos(Vector3f* position)
	    : mHamonM(position)
	    , mHamonMInd(position)
	{
	}

	virtual bool create(Arg*); // _08
	virtual void forceKill()   // _0C (weak)
	{
		mHamonM.forceKill();
		mHamonMInd.forceKill();
	}
	virtual void fade() // _10 (weak)
	{
		mHamonM.fade();
		mHamonMInd.fade();
	}

	inline void startDemoDrawOff()
	{
		mHamonM.startDemoDrawOff();
		mHamonMInd.startDemoDrawOff();
	}

	inline void endDemoDrawOn()
	{
		mHamonM.endDemoDrawOn();
		mHamonMInd.endDemoDrawOn();
	}

	// _00      = VTABLE
	TEnemyHamonM mHamonM;       // _04
	TEnemyHamonMInd mHamonMInd; // _18
};

/**
 * @size = 0x48
 */
struct TEnemyHamon : public TBase {
	inline TEnemyHamon()
	    : mHamonChasePos(&mPosition)
	{
		mSeaHeightPtr = nullptr;
		mActive       = 0;
	}

	virtual bool create(Arg*); // _08
	virtual void forceKill()   // _0C (weak)
	{
		mHamonChasePos.forceKill();
		mActive = 0;
	}
	virtual void fade() // _10 (weak)
	{
		mHamonChasePos.fade();
		mActive = 0;
	}

	void update(Vector3f&);
	f32 getLimitDepth_();

	// _00      = VTABLE
	TEnemyHamonChasePos mHamonChasePos;       // _04
	f32* mSeaHeightPtr;                       // _30
	Vector3f mPosition;                       // _34
	u8 mActive;                               // _40
	Game::EnemyTypeID::EEnemyTypeID mEnemyID; // _44
	f32 mScale;                               // _48
};

} // namespace efx

#endif
