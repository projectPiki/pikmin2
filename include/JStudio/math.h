#ifndef JSTUDIO_MATH_H
#define JSTUDIO_MATH_H

#include "Dolphin/vec.h"
#include "types.h"

namespace JStudio {
namespace math {
void getTransformation_SRxyzT(f32 (*)[4], const Vec&, const Vec&, const Vec&);
void getFromTransformation_SRxyzT(Vec*, Vec*, Vec*, const f32 (*)[4]);

// unused/inlined:
void getRotation_xyz(f32 (*)[4], float, float, float);
void transform_SRxyzT(f32 (*)[4], const f32 (*)[4], const Vec&, const Vec&, const Vec&);
} // namespace math
} // namespace JStudio

#endif
