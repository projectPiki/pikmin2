#ifndef _SYS_TRIANGLETABLE_H
#define _SYS_TRIANGLETABLE_H

#include "BoundBox.h"
#include "types.h"
#include "Container.h"
#include "Sys/Triangle.h"

namespace Sys {
/**
 * @size{0x28}
 */
struct TriangleTable : public ArrayContainer<Sys::Triangle> {
};

/**
 * @size{0x50}
 */
struct VertexTable : public ArrayContainer<Vector3f> {
	inline VertexTable()
	    : ArrayContainer()
	    , _28()
	{
	}
	virtual void addOne(Vector3<float>&);

	BoundBox _28; // _28
	u8 _40[0x10]; // _40
};
} // namespace Sys

#endif
