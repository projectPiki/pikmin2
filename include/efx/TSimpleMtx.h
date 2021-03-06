#ifndef _EFX_TSIMPLEMTX_H
#define _EFX_TSIMPLEMTX_H

#include "Matrixf.h"
#include "efx/TSimple.h"

namespace efx {
struct TSimpleMtx1 : public TSimple1 {
	virtual bool create(Arg*); // _00

	Matrixf* m_mtx; // _0C
};

struct TSimpleMtx2 : public TSimple2 {
	virtual bool create(Arg*); // _00

	Matrixf* m_mtx; // _10
};

struct TSimpleMtx3 : public TSimple3 {
	virtual bool create(Arg*); // _00

	Matrixf* m_mtx; // _18
};

struct TSimpleMtx4 : public TSimple4 {
	virtual bool create(Arg*); // _00

	Matrixf* m_mtx; // _1C
};
} // namespace efx

#endif
