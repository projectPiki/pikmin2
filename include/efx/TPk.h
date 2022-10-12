#ifndef _EFX_TPK_H
#define _EFX_TPK_H

#include "efx/TSimple.h"
#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"

namespace efx {
struct TPkAp : public TSimple2 {
	inline TPkAp()
	    : TSimple2(PID_PkAp_1, PID_PkAp_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple2
};

struct TPkAttackDP : public TSimple1 {
	inline TPkAttackDP()
	    : TSimple1(PID_PkAttackDP)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TPkBlackDown : public TChasePos {
	inline TPkBlackDown()
	    : TChasePos(PID_PkBlackDown)
	{
	}

	virtual ~TPkBlackDown(); // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChasePos
};

struct TPkBlackDrop : public TSimple3 {
	inline TPkBlackDrop()
	    : TSimple3(PID_PkBlackDrop_1, PID_PkBlackDrop_2, PID_PkBlackDrop_3)
	{
	}

	// _00     = VTBL
	// _00-_18 = TSimple3
};

struct TPkDiveB : public TSimple1 {
	inline TPkDiveB()
	    : TSimple1(PID_EnemyDive_2)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TPkGlow1 : public TChasePos {
	inline TPkGlow1()
	    : TChasePos(PID_PkGlow1)
	{
	}

	virtual ~TPkGlow1(); // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChasePos
};

struct TPkGlow2 : public TSimple2 {
	inline TPkGlow2()
	    : TSimple2(PID_PkGlow2_1, PID_PkGlow2_2)
	{
	}

	// _00     = VTBL
	// _00-_10 = TSimple2
};

struct TPkInstick : public TSimple1 {
	inline TPkInstick()
	    : TSimple1(PID_PkInStick)
	{
	}

	// _00     = VTBL
	// _00-_0C = TSimple1
};

struct TPkKanden : public TSimple3 {
	inline TPkKanden()
	    : TSimple3(PID_PkKanden_1, PID_PkKanden_2, PID_PkKanden_3)
	{
	}

	// _00     = VTBL
	// _00-_18 = TSimple3
};

struct TPkMoeA : public TChasePos {
	inline TPkMoeA()
	    : TChasePos(PID_PkMoeA)
	{
	}

	virtual ~TPkMoeA(); // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChasePos
};

struct TPkNageBlur : public TChaseMtx {
	inline TPkNageBlur()
	    : TChaseMtx(PID_PkNageBlur_Red, nullptr)
	{
	}

	virtual ~TPkNageBlur(); // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TPkOneEmitterSimple : public JPAEmitterCallBack {
	// vtable 1 (TBase)
	virtual bool create(Arg*); // _08
	virtual void forceKill();  // _0C (weak)
	virtual void fade();       // _10 (weak)
	// vtable 2 (JPAEmitterCallBack + self)
	virtual void executeAfter(JPABaseEmitter*); // _30 (weak)
	virtual ~TPkOneEmitterSimple();             // _34 (weak)

	// _00		= VTBL
	// _04-_08	= JPAEmitterCallBack
};

struct TPkEffectMgr {
	TPkEffectMgr();

	virtual ~TPkEffectMgr(); // _08

	void globalInstance();
	void deleteInstance();
	void Instance();
	void startMgr();
	void exitMgr();
	void resetContextS();
	void createS_Dead(Vector3f&, long);
	void createS_Chinka(Vector3f&);
	void createS_Gedoku(Vector3f&);
	void createS_WaterOff(Vector3f&);
	void createS_Dive(Vector3f&);
	void createS_Chiru(Vector3f&);
	void createS_Inattack(Vector3f&);
	void createS_Walksmoke(Vector3f&);
	void createS_Dig(Vector3f&);
	void createS_ChiruRed(Vector3f&);
	void createS_Gate3Attack(Vector3f&);
	void createS_Walkwater(Vector3f&);
};
} // namespace efx

#endif
