#ifndef _EFX_TQUEEN_H
#define _EFX_TQUEEN_H

#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"

namespace efx {
struct TQueenCrashL : public TChasePosYRot {
	inline TQueenCrashL()
	    : TChasePosYRot(nullptr, nullptr, PID_QueenCrashL)
	{
	}

	virtual ~TQueenCrashL(); // _48 (weak)

	// _00     = VTBL
	// _00-_18 = TChasePosYRot
};

struct TQueenCrashR : public TChasePosYRot {
	inline TQueenCrashR()
	    : TChasePosYRot(nullptr, nullptr, PID_QueenCrashR)
	{
	}

	virtual ~TQueenCrashR(); // _48 (weak)

	// _00     = VTBL
	// _00-_18 = TChasePosYRot
};

struct TQueenCrashRock : public TChasePosYRot {
	inline TQueenCrashRock()
	    : TChasePosYRot(nullptr, nullptr, PID_QueenCrashRock)
	{
	}

	virtual ~TQueenCrashRock(); // _48 (weak)

	// _00     = VTBL
	// _00-_18 = TChasePosYRot
};

struct TQueenDamage : public TChasePosYRot {
	inline TQueenDamage()
	    : TChasePosYRot(nullptr, nullptr, PID_QueenDamage)
	{
	}

	virtual ~TQueenDamage(); // _48 (weak)

	// _00     = VTBL
	// _00-_18 = TChasePosYRot
};

struct TQueenDead : public TChaseMtx4 {
	inline TQueenDead()
	    : TChaseMtx4(nullptr, PID_QueenDead_1, PID_QueenDead_2, PID_QueenDead_3, PID_QueenDead_4)
	{
	}

	// _00     = VTBL
	// _00-_54 = TChaseMtx4
};

struct TQueenFlick : public TChasePosYRot2 {
	inline TQueenFlick()
	    : TChasePosYRot2(nullptr, nullptr, PID_QueenFlick_1, PID_QueenFlick_2)
	{
	}

	// _00     = VTBL
	// _00-_34 = TChasePosYRot2
};

struct TQueenHanacho : public TChaseMtx {
	inline TQueenHanacho()
	    : TChaseMtx(PID_QueenHanacho, nullptr)
	{
	}

	virtual ~TQueenHanacho(); // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TQueenLay : public TChaseMtx {
	inline TQueenLay()
	    : TChaseMtx(PID_QueenLay, nullptr)
	{
	}

	virtual ~TQueenLay(); // _48 (weak)

	// _00     = VTBL
	// _00-_14 = TChaseMtx
};

struct TQueenRoll : public TChasePosYRot2 {
	inline TQueenRoll()
	    : TChasePosYRot2(nullptr, nullptr, PID_QueenRoll_1, PID_QueenRoll_2)
	{
	}

	// _00     = VTBL
	// _00-_34 = TChasePosYRot2
};

struct TQueenRollCL : public TChasePosYRot3 {
	inline TQueenRollCL()
	    : TChasePosYRot3(nullptr, nullptr, PID_QueenRollCL_1, PID_QueenRollCL_2, PID_QueenRollCL_3)
	{
	}

	// _00     = VTBL
	// _00-_4C = TChasePosYRot3
};

struct TQueenRollCR : public TChasePosYRot3 {
	inline TQueenRollCR()
	    : TChasePosYRot3(nullptr, nullptr, PID_QueenRollCR_1, PID_QueenRollCR_2, PID_QueenRollCR_3)
	{
	}

	// _00     = VTBL
	// _00-_4C = TChasePosYRot3
};

struct TQueenWakeup : public TChasePosYRot {
	inline TQueenWakeup()
	    : TChasePosYRot(nullptr, nullptr, PID_QueenWakeup)
	{
	}

	virtual ~TQueenWakeup(); // _48 (weak)

	// _00     = VTBL
	// _00-_18 = TChasePosYRot
};
} // namespace efx

#endif
