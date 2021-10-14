#ifndef _BOUNDBOX_H
#define _BOUNDBOX_H

namespace Sys {
struct Sphere;
} // namespace Sys

struct BoundBox {
	void makeBoundSphere(Sys::Sphere&);
	void read(struct Stream&);
	void transform(struct Matrixf&);
};

#endif
