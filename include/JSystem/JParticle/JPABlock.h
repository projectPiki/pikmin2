#ifndef _JSYSTEM_JPA_JPABLOCK_H
#define _JSYSTEM_JPA_JPABLOCK_H

#include "JSystem/JGeometry.h"
#include "types.h"

struct JKRHeap;
struct JPAEmitterWorkData;
struct JPAFieldBase;

typedef void JPAVolumeFunc(JPAEmitterWorkData*);

struct JPADynamicsBlockData {
	// Representation of the contents in a .jpc file
	u8 mMagic[4]; // _00
	u32 mSize;    // _04

	u32 mFlags;                        // _08
	u32 mResUserWork;                  // _0C
	JGeometry::TVec3f mEmitterScl;     // _10
	JGeometry::TVec3f mEmitterTrs;     // _1C
	JGeometry::TVec3f mEmitterDir;     // _28
	f32 mInitialVelOmni;               // _34
	f32 mInitialVelAxis;               // _38
	f32 mInitialVelRndm;               // _3C
	f32 mInitialVelDir;                // _40
	f32 mSpread;                       // _44
	f32 mInitialVelRatio;              // _48
	f32 mRate;                         // _4C
	f32 mRateRndm;                     // _50
	f32 mLifeTimeRndm;                 // _54
	f32 mVolumeSweep;                  // _58
	f32 mVolumeMinRad;                 // _5C
	f32 mAirResist;                    // _60
	f32 mMoment;                       // _64
	JGeometry::TVec3<s16> mEmitterRot; // _68
	s16 mMaxFrame;                     // _6E
	s16 mStartFrame;                   // _70
	s16 mLifeTime;                     // _72
	u16 mVolumeSize;                   // _74
	u16 mDivNumber;                    // _76
	u8 mRateStep;                      // _78
	u32 _7C;                           // _7C
};

/**
 * @size{0x8}
 */
struct JPADynamicsBlock {

	JPADynamicsBlock(const u8*);
	void init();
	void create(JPAEmitterWorkData*);

	/**
	 * @fabricated
	 */
	inline const JPADynamicsBlockData* castData() const { return reinterpret_cast<const JPADynamicsBlockData*>(mData); }

	void calc(JPAEmitterWorkData* work) { mVolumeFunction(work); }

	s16 getStartFrame() const { return mData->mStartFrame; }
	u32 getResUserWork() const { return mData->mResUserWork; }
	u32 getFlag() const { return mData->mFlags; }
	u32 getVolumeType() const { return (mData->mFlags >> 8) & 0x07; }
	u16 getDivNumber() const { return mData->mDivNumber; }
	f32 getRateRndm() const { return mData->mRateRndm; }
	void getEmitterScl(JGeometry::TVec3f* vec) const { vec->set(mData->mEmitterScl.x, mData->mEmitterScl.y, mData->mEmitterScl.z); }
	void getEmitterTrs(JGeometry::TVec3f* vec) const { vec->set(mData->mEmitterTrs.x, mData->mEmitterTrs.y, mData->mEmitterTrs.z); }
	void getEmitterDir(JGeometry::TVec3f* vec) const { vec->set(mData->mEmitterDir.x, mData->mEmitterDir.y, mData->mEmitterDir.z); }
	void getEmitterRot(JGeometry::TVec3<s16>* vec) const { vec->set(mData->mEmitterRot.x, mData->mEmitterRot.y, mData->mEmitterRot.z); }
	s16 getMaxFrame() { return mData->mMaxFrame; }
	s16 getLifetime() { return mData->mLifeTime; }
	u16 getVolumeSize() { return mData->mVolumeSize; }
	f32 getRate() { return mData->mRate; }
	u8 getRateStep() { return mData->mRateStep; }
	f32 getVolumeSweep() { return mData->mVolumeSweep; }
	f32 getVolumeMinRad() { return mData->mVolumeMinRad; }
	f32 getInitVelOmni() { return mData->mInitialVelOmni; }
	f32 getInitVelAxis() { return mData->mInitialVelAxis; }
	f32 getInitVelDir() { return mData->mInitialVelDir; }
	f32 getInitVelDirSp() { return mData->mSpread; }
	f32 getInitVelRndm() { return mData->mInitialVelRndm; }
	f32 getAirRes() { return mData->mAirResist; }

	// unused/inlined:
	void init_jpa(const u8*, JKRHeap*);

	const JPADynamicsBlockData* mData; // _00
	JPAVolumeFunc* mVolumeFunction;    // _04
};

/**
 * @size{0x2C}
 */
struct JPAFieldBlock {
	/** @fabricated */
	struct Data {
		u8 _00[4];    // _00
		u32 _04;      // _04
		u32 _08;      // _08
		u8 _0C[0x1C]; // _0C
		f32 _28;      // _28
		f32 _2C;      // _2C
		f32 _30;      // _30
		f32 _34;      // _34
		f32 _38;      // _38
		f32 _3C;      // _3C
	};

	JPAFieldBlock(const u8*, JKRHeap*);

	void init(JKRHeap*);

	// unused/inlined:
	void init_jpa(const u8*, JKRHeap*);

	const u8* mData;       // _00
	JPAFieldBase* mField;  // _04
	f32 _08;               // _08
	f32 _0C;               // _0C
	JGeometry::TVec3f _10; // _10
	JGeometry::TVec3f _1C; // _1C
	f32 _28;               // _28
};

/**
 * @size{0x8}
 */
struct JPAKeyBlock {
	JPAKeyBlock(const u8*);

	void calc(f32);

	// Unused/inlined:
	void init_jpa(const u8*, JKRHeap*);

	const u8* mDataStart; // _00
	const f32* _04;       // _04
};

#endif
