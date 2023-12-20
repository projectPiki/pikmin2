#ifndef _EFX_THDAMA_H
#define _EFX_THDAMA_H

#include "efx/TSimple.h"
#include "efx/TSimpleMtx.h"
#include "efx/TChasePos.h"
#include "efx/TChaseMtx.h"
#include "efx/TForever.h"

// TODO:
namespace efx {
struct THdamaDeadbomb : public TChaseMtx4 {
	inline THdamaDeadbomb()
	    : TChaseMtx4(nullptr, PID_HDamaDeadBomb_1, PID_HDamaDeadBomb_2, PID_HDamaDeadBomb_3, PID_HDamaDeadBomb_4)
	{
	}

	// _00		= VTBL
	// _00-_54	= TChaseMtx4
};

struct THdamaDeadHahen1 : public TSimple1 {
	inline THdamaDeadHahen1()
	    : TSimple1(PID_HDamaDeadHahen1)
	{
	}

	virtual bool create(Arg*); // _08

	// _00		= VTBL
	// _00-_0C	= TSimple1
};

struct THdamaDeadHahen2 : public TSimple2 {
	inline THdamaDeadHahen2()
	    : TSimple2(PID_HDamaDeadHahen2_1, PID_HDamaDeadHahen2_2)
	{
	}

	virtual bool create(Arg*); // _08

	// _00		= VTBL
	// _00-_10	= TSimple2
};

struct THdamaDeadSteam : public TChaseMtx2 {
	inline THdamaDeadSteam()
	    : TChaseMtx2(nullptr, PID_HDamaDeadSteam_1, PID_HDamaDeadSteam_2)
	{
	}

	// _00		= VTBL
	// _00-_2C	= TChaseMtx2
};

struct THdamaDeadSteamT : public TSimple1 {
	inline THdamaDeadSteamT()
	    : TSimple1(PID_HDamaDeadSteamT)
	{
	}

	// _00		= VTBL
	// _00-_0C	= TSimple1
};

struct THdamaHahen : public TChasePosPos {
	inline THdamaHahen()
	    : TChasePosPos(PID_HDamaHahen)
	{
	}

	virtual ~THdamaHahen() { } // _48 (weak)

	// _00		= VTBL
	// _00-_18	= TChasePosPos
};

struct THdamaHit1 : public TSimple5 {
	inline THdamaHit1() // needs fixing
	    : TSimple5(PID_HDamaHit1_1, PID_HDamaHit1_2, PID_HDamaHit1_3, PID_HDamaHit1_4, PID_HDamaShootA)
	{
	}

	// _00		= VTBL
	// _00-_24	= TSimple5
};

struct THdamaHit2 : public TSimple4 {
	inline THdamaHit2() // needs fixing
	    : TSimple4(PID_HDamaHit2_1, PID_HDamaHit2_2, PID_HDamaHit2_3, PID_HDamaShootA)
	{
	}

	// _00		= VTBL
	// _00-_1C	= TSimple4
};

struct THdamaHit2W : public TSimple3 {
	inline THdamaHit2W()
	    : TSimple3(PID_HDamaHit2W_1, PID_HDamaHit2W_2, PID_HDamaHit2W_3)
	{
	}

	virtual bool create(Arg*); // _08

	// _00		= VTBL
	// _00-_18	= TSimple3
};

struct THdamaHit3 : public TSimple4 {
	inline THdamaHit3() // needs fixing
	    : TSimple4(PID_HDamaHit3_1, PID_HDamaHit3_2, PID_HDamaHit3_3, PID_HDamaHit3_4)
	{
	}

	// _00		= VTBL
	// _00-_1C	= TSimple4
};

struct THdamaOnHahen1 : public TChaseMtx {
	inline THdamaOnHahen1()
	    : TChaseMtx(PID_HDamaOnHahen1, nullptr)
	{
	}

	virtual ~THdamaOnHahen1() { } // _48 (weak)

	// _00		= VTBL
	// _00-_14  = TChaseMtx
};

struct THdamaOnHahen2 : public TChasePosPos {
	inline THdamaOnHahen2()
	    : TChasePosPos(PID_HDamaOnHahen2)
	{
	}

	virtual ~THdamaOnHahen2() { } // _48 (weak)

	// _00		= VTBL
	// _00-_18  = TChasePosPos
};

struct THdamaOnSmoke : public TSimple2 {
	inline THdamaOnSmoke()
	    : TSimple2(PID_HDamaOnSmoke_1, PID_HDamaOnSmoke_2)
	{
	}

	// _00		= VTBL
	// _00-_10	= TSimple2
};

struct THdamaOnSteam1 : public TChaseMtxT {
	inline THdamaOnSteam1()
	    : TChaseMtxT(PID_HDamaOnSteam1)
	{
	}

	virtual ~THdamaOnSteam1() { } // _48 (weak)

	// _00		= VTBL
	// _00-_14  = TChaseMtxT
};

struct THdamaOnSteam2 : public TSimple1 {
	inline THdamaOnSteam2()
	    : TSimple1(PID_HDamaOnSteam2)
	{
	}

	// _00		= VTBL
	// _00-_0C	= TSimple1
};

struct THdamaOpen : public TSimple1 {
	inline THdamaOpen()
	    : TSimple1(PID_HDamaOpen)
	{
	}

	// _00		= VTBL
	// _00-_0C	= TSimple1
};

struct THdamaShell : public TChasePos {
	inline THdamaShell()
	    : TChasePos(PID_HDamaShell)
	{
	}

	virtual bool create(Arg*); // _08
	virtual ~THdamaShell() { } // _48 (weak)

	// _00		= VTBL
	// _00-_14	= TChasePos
};

struct THdamaShoot : public TSimpleMtx3 {
	inline THdamaShoot(Matrixf* mtx)
	    : TSimpleMtx3(mtx, PID_HDamaShoot_1, PID_HDamaShoot_2, PID_HDamaShoot_3)
	{
	}

	// _00		= VTBL
	// _00-_1C	= TSimpleMtx3
};

struct THdamaShootA : public TSimple1 {
	THdamaShootA()
	    : TSimple1(PID_HDamaShootA)
	{
	}
	// _00		= VTBL
	// _00-_0C	= TSimple1
};

struct THdamaSight : public TForever {
	inline THdamaSight()
	    : TForever(PID_HDamaSight)
	{
	}

	virtual ~THdamaSight() { } // _48 (weak)

	void setPosNrm(Vector3f&, Vector3f&);

	// _00		= VTBL
	// _00-_10	= TForever
};

struct THdamaSteam : public TChaseMtx {
	inline THdamaSteam()
	    : TChaseMtx(PID_HDamaSteam, nullptr)
	{
	}

	virtual ~THdamaSteam() { } // _48 (weak)

	// _00		= VTBL
	// _00-_14	= TChaseMtx
};

struct THdamaSteamBd : public TChaseMtxT {
	inline THdamaSteamBd()
	    : TChaseMtxT(PID_HDamaSteamBd)
	{
	}

	virtual ~THdamaSteamBd() { } // _48 (weak)

	// _00		= VTBL
	// _00-_14	= TChaseMtxT
};

struct THdamaSteamSt : public TChaseMtx {
	inline THdamaSteamSt()
	    : TChaseMtx(PID_HDamaSteamSt, nullptr)
	{
	}

	virtual ~THdamaSteamSt() { } // _48 (weak)

	// _00		= VTBL
	// _00-_14	= TChaseMtx
};

} // namespace efx

#endif
