#ifndef _JSYSTEM_JPA_JPAMATH_H
#define _JSYSTEM_JPA_JPAMATH_H

#include "Dolphin/mtx.h"
#include "JSystem/JGeometry.h"

f32 JPAConvertFixToFloat(s16);
void JPAGetDirMtx(const JGeometry::TVec3<f32>&, Mtx);
void JPAGetYZRotateMtx(s16, s16, Mtx);
void JPAGetXYZRotateMtx(s16, s16, s16, Mtx);
void JPASetRMtxfromMtx(const Mtx, Mtx);
void JPASetRMtxTVecfromMtx(const Mtx, Mtx, JGeometry::TVec3f*);
void JPASetRMtxSTVecfromMtx(const Mtx, Mtx, JGeometry::TVec3f*, JGeometry::TVec3f*);
f32 JPACalcKeyAnmValue(f32, u16, const f32*);

// there's a good chance this should just be JMath::TRandom_fast_.
// for now, these seem to match well for JPA stuff - may be worth back-porting them
// if they work in JMath?
struct JPARandom {
	JPARandom() { mSeed = 0; }

	void setSeed(u32 seed) { mSeed = seed; }

	u32 getRandU32() { return mSeed = mSeed * 0x19660du + 0x3c6ef35fu; }

	f32 getRandF32()
	{
		u32 a = ((getRandU32() >> 9) | 0x3f800000);
		return *(f32*)(void*)&a - 1.0f;
	}

	f32 getRandZP()
	{
		f32 f = getRandF32();
		return (f + f) - 1.0f;
	}

	f32 getRandZH()
	{
		f32 f = getRandF32();
		return f - 0.5f;
	}

	s16 getRandS16() { return (s16)(getRandU32() >> 16); }

	u32 mSeed; // _00
};

#endif
