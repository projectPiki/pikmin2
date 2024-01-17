#ifndef JSTUDIO_MATH_H
#define JSTUDIO_MATH_H

#include "Dolphin/mtx.h"
#include "types.h"

namespace JStudio {
namespace math {
void getTransformation_SRxyzT(MtxP, const Vec&, const Vec&, const Vec&);
void getFromTransformation_SRxyzT(Vec*, Vec*, Vec*, f32 const (*)[4]);

// unused/inlined:
void getRotation_xyz(MtxP, f32, f32, f32);
void transform_SRxyzT(MtxP, f32 const (*)[4], const Vec&, const Vec&, const Vec&);
} // namespace math
} // namespace JStudio

#endif
