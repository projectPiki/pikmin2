#ifndef _JSYSTEM_JPA_JPAMATH_H
#define _JSYSTEM_JPA_JPAMATH_H

#include "Dolphin/mtx.h"
#include "JSystem/JGeometry.h"

void JPAConvertFixToFloat(short);
void JPAGetDirMtx(const JGeometry::TVec3<f32>&, Mtx);
void JPAGetYZRotateMtx(short, short, Mtx);
void JPAGetXYZRotateMtx(short, short, short, Mtx);
void JPASetRMtxfromMtx(const Mtx, Mtx);
void JPASetRMtxTVecfromMtx(const Mtx, Mtx, JGeometry::TVec3f*);
void JPASetRMtxSTVecfromMtx(const Mtx, Mtx, JGeometry::TVec3f*, JGeometry::TVec3f*);
f32 JPACalcKeyAnmValue(f32, u16, const f32*);

#endif
