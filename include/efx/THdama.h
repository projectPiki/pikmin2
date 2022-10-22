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
	// _00		= VTBL
	// _00-_54	= TChaseMtx4
};

struct THdamaDeadHahen1 : public TSimple1 {
	virtual bool create(Arg*); // _08

	// _00		= VTBL
	// _00-_0C	= TSimple1
};

struct THdamaDeadHahen2 : public TSimple2 {
	virtual bool create(Arg*); // _08

	// _00		= VTBL
	// _00-_10	= TSimple2
};

struct THdamaDeadSteam : public TChaseMtx2 {
	// _00		= VTBL
	// _00-_2C	= TChaseMtx2
};

struct THdamaDeadSteamT : public TSimple1 {
	// _00		= VTBL
	// _00-_0C	= TSimple1
};

struct THdamaHahen : public TChasePosPos {
	virtual ~THdamaHahen(); // _48 (weak)

	// _00		= VTBL
	// _00-_18	= TChasePosPos
};

struct THdamaHit1 : public TSimple5 {
	// _00		= VTBL
	// _00-_24	= TSimple5
};

struct THdamaHit2 : public TSimple4 {
	// _00		= VTBL
	// _00-_1C	= TSimple4
};

struct THdamaHit2W : public TSimple3 {
	virtual bool create(Arg*); // _08

	// _00		= VTBL
	// _00-_18	= TSimple3
};

struct THdamaHit3 : public TSimple4 {
	// _00		= VTBL
	// _00-_1C	= TSimple4
};

struct THdamaOnHahen1 : public TChaseMtx {
	virtual ~THdamaOnHahen1(); // _48 (weak)

	// _00		= VTBL
	// _00-_14  = TChaseMtx
};

struct THdamaOnHahen2 : public TChasePosPos {
	virtual ~THdamaOnHahen2(); // _48 (weak)

	// _00		= VTBL
	// _00-_18  = TChasePosPos
};

struct THdamaOnSmoke : public TSimple2 {
	// _00		= VTBL
	// _00-_10	= TSimple2
};

struct THdamaOnSteam1 : public TChaseMtxT {
	virtual ~THdamaOnSteam1(); // _48 (weak)

	// _00		= VTBL
	// _00-_14  = TChaseMtxT
};

struct THdamaOnSteam2 : public TSimple1 {
	// _00		= VTBL
	// _00-_0C	= TSimple1
};

struct THdamaOpen : public TSimple1 {
	// _00		= VTBL
	// _00-_0C	= TSimple1
};

struct THdamaShell : public TChasePos {
	virtual bool create(Arg*); // _08
	virtual ~THdamaShell();    // _48 (weak)

	// _00		= VTBL
	// _00-_14	= TChasePos
};

struct THdamaShoot : public TSimpleMtx3 {
	// _00		= VTBL
	// _00-_1C	= TSimpleMtx3
};

struct THdamaShootA : public TSimple1 {
	// _00		= VTBL
	// _00-_0C	= TSimple1
};

struct THdamaSight : public TForever {
	virtual ~THdamaSight(); // _48 (weak)

	void setPosNrm(Vector3f&, Vector3f&);

	// _00		= VTBL
	// _00-_10	= TForever
};

struct THdamaSteam : public TChaseMtx {
	virtual ~THdamaSteam(); // _48 (weak)

	// _00		= VTBL
	// _00-_14	= TChaseMtx
};

struct THdamaSteamBd : public TChaseMtxT {
	virtual ~THdamaSteamBd(); // _48 (weak)

	// _00		= VTBL
	// _00-_14	= TChaseMtxT
};

struct THdamaSteamSt : public TChaseMtx {
	virtual ~THdamaSteamSt(); // _48 (weak)

	// _00		= VTBL
	// _00-_14	= TChaseMtx
};

} // namespace efx

#endif
