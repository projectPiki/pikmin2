#ifndef _SYS_TRIANGLETABLE_H
#define _SYS_TRIANGLETABLE_H

#include "types.h"
#include "Container.h"
#include "Sys/Triangle.h"

namespace Sys {
struct TriangleTable : public ArrayContainer<Sys::Triangle> {
};

struct VertexTable : public ArrayContainer<Vector3f> {
	virtual void addOne(Vector3<float> &);
};
} // namespace Sys

#endif
