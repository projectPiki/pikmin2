#ifndef _EFX_TOE_H
#define _EFX_TOE_H

#include "efx/Context.h"
#include "JSystem/JSupport/JSUList.h"
#include "Vector3.h"

// yes, most of these have size 1 arrays. take it up with the devs.

namespace efx {

// this struct needs to exist for the dtor to generate properly
struct TOEContextBase : public JSUPtrLink {
	TOEContextBase(void* data)
	    : JSUPtrLink(data)
	{
	}
};

struct TOEContextS : public TOEContextBase {
	TOEContextS()
	    : TOEContextBase(this)
	{
	}

	~TOEContextS() {};

	Vector3f mPosition; // _10

	// _00-_10 = JSUPtrLink
};

struct ToeChudoku {

	void create(Vector3f*);
	void kill();

	ContextChasePos mContext[1];
};

struct ToeDoping {

	void create(Vector3f*);
	void kill();

	ContextChasePos mContext[1];
};

struct ToeHamonA {

	void create(Vector3f*);
	void kill();

	ContextChasePos mContext[1];
};

struct ToeHamonB {

	void create(Vector3f*);
	void kill();

	ContextChasePos mContext[1];
};

struct ToeKourin {

	void create(Vector3f*, s32);
	void kill();

	ContextChasePos mContext[1];
	s32 mPikiKind;
};

struct ToeMoeBC {

	void create(Vector3f*);
	void kill();

	ContextChasePos mContexts[2];
};

struct ToeMoeSmoke {

	void create(Vector3f*);
	void kill();

	ContextChasePos mContext[1];
};

struct ToeNagekira {

	void create(Vector3f*);
	void kill();

	ContextChasePos mContext[1];
};

struct ToeTanekira {

	void create(Vector3f*);
	void kill();

	ContextChasePos mContext[1];
};

struct ToeWater {

	void create(Vector3f*);
	void kill();

	ContextChasePos mContexts[2];
};
} // namespace efx

#endif
