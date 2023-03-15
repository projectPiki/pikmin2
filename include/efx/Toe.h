#ifndef _EFX_TOE_H
#define _EFX_TOE_H

#include "efx/Context.h"
#include "JSystem/JSupport/JSUList.h"
#include "Vector3.h"

// yes, most of these have size 1 arrays. take it up with the devs.

namespace efx {
struct TOEContextS : public JSUPtrLink {
	TOEContextS();

	~TOEContextS();

	// _00-_10 = JSUPtrLink
	Vector3f _10; // _10
};

struct ToeChudoku {

	void create(Vector3f*);
	void kill();

	ContextChasePos _00[1];
};

struct ToeDoping {

	void create(Vector3f*);
	void kill();

	ContextChasePos _00[1];
};

struct ToeHamonA {

	void create(Vector3f*);
	void kill();

	ContextChasePos _00[1];
};

struct ToeHamonB {

	void create(Vector3f*);
	void kill();

	ContextChasePos _00[1];
};

struct ToeKourin {

	void create(Vector3f*, long);
	void kill();

	ContextChasePos _00[1];
};

struct ToeMoeBC {

	void create(Vector3f*);
	void kill();

	ContextChasePos _00[2];
};

struct ToeMoeSmoke {

	void create(Vector3f*);
	void kill();

	ContextChasePos _00[1];
};

struct ToeNagekira {

	void create(Vector3f*);
	void kill();

	ContextChasePos _00[1];
};

struct ToeTanekira {

	void create(Vector3f*);
	void kill();

	ContextChasePos _00[1];
};

struct ToeWater {

	void create(Vector3f*);
	void kill();

	ContextChasePos _00[2];
};
} // namespace efx

#endif
