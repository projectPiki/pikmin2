#ifndef _SYS_CREATETRIANGLEARG_H
#define _SYS_CREATETRIANGLEARG_H

#include "Vector3.h"

namespace Sys {
struct CreateTriangleArg {
	Vector3f _00;          // _00
	u8 _0C[0xC];           // _0C
	Vector3f** m_vertices; // _18
};
} // namespace Sys

#endif
