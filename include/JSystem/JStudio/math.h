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

inline void getRotation_y(Mtx mtx, f32 yRot) { PSMTXRotRad(mtx, 'y', yRot * 0.017453292f); }

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

inline void rotate_xyz(Mtx inMtx, Mtx outMtx, const Vec& rotation) { rotate_xyz(inMtx, outMtx, rotation.x, rotation.y, rotation.z); }

// inline f32 getFromTransformation_Sn(CMtxP param_1, u32 param_2) {
//     Vec local_18;
//     local_18.x = param_1[0][param_2];
//     local_18.y = param_1[1][param_2];
//     local_18.z = param_1[2][param_2];
//     return VECMag(&local_18);
// }

// inline void getFromTransformation_S(CMtxP param_1, Vec* param_2) {
//     param_2->x = getFromTransformation_Sn(param_1, 0);
//     param_2->y = getFromTransformation_Sn(param_1, 1);
//     param_2->z = getFromTransformation_Sn(param_1, 2);
// }

// inline void getFromTransformation_T(CMtxP param_1, Vec* param_2) {
//     param_2->x = param_1[0][3];
//     param_2->y = param_1[1][3];
//     param_2->z = param_1[2][3];
// }
} // namespace math
} // namespace JStudio

#endif
