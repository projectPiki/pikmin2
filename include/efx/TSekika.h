#ifndef _EFX_TSEKIKA_H
#define _EFX_TSEKIKA_H

#include "efx/TSimple.h"

namespace efx {
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
} // namespace efx

#endif
