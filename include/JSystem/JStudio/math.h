#ifndef JSTUDIO_MATH_H
#define JSTUDIO_MATH_H

#include "types.h"
#include "Dolphin/mtx.h"
#include "stl/math.h"

namespace JStudio {
namespace math {
void getTransformation_SRxyzT(MtxP, const Vec&, const Vec&, const Vec&);
void getFromTransformation_SRxyzT(Vec*, Vec*, Vec*, const Mtx mtx);

void getFromTransformation_S(Vec*, const Mtx mtx);
f32 getFromTransformation_Sn(const Mtx mtx, u32);

void getFromTransformation_T(Vec*, const Mtx mtx);

// unused/inlined:
void getRotation_xyz(MtxP, f32, f32, f32);
void transform_SRxyzT(MtxP, const Mtx, const Vec&, const Vec&, const Vec&);

inline void getRotation_y(Mtx mtx, f32 yRot)
{
	PSMTXRotRad(mtx, 'y', MTXDegToRad(yRot));
}

inline void getTransformation_RyT(Mtx outMtx, const Vec& translation, f32 yRot)
{
	Mtx temp;
	getRotation_y(temp, yRot);
	PSMTXTransApply(temp, outMtx, translation.x, translation.y, translation.z);
}

inline void rotate_y(Mtx outMtx, Mtx inMtx, f32 yRot)
{
	Mtx temp;
	getRotation_y(temp, yRot);
	PSMTXConcat(temp, inMtx, outMtx);
}

inline void rotate_xyz(Mtx inMtx, Mtx outMtx, f32 x, f32 y, f32 z)
{
	Mtx temp;
	getRotation_xyz(temp, x, y, z);
	PSMTXConcat(temp, inMtx, outMtx);
}

inline void rotate_xyz(Mtx inMtx, Mtx outMtx, const Vec& rotation)
{
	rotate_xyz(inMtx, outMtx, rotation.x, rotation.y, rotation.z);
}

} // namespace math
} // namespace JStudio

#endif
