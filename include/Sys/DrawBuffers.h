#ifndef _SYS_DRAWBUFFERS_H
#define _SYS_DRAWBUFFERS_H

#include "Vector3.h"

namespace Sys {
struct DrawBuffers {
	DrawBuffers();
	~DrawBuffers();

	void allocate(int);
	void frameInitAll();
	void get(int);
};
} // namespace Sys

#endif
