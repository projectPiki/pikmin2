#ifndef _JSYSTEM_JPA_JPABLOCK_H
#define _JSYSTEM_JPA_JPABLOCK_H

#include "JSystem/JGeometry.h"
#include "types.h"

struct JKRHeap;
struct JPAEmitterWorkData;
struct JPAFieldBase;

typedef void JPAVolumeFunc(JPAEmitterWorkData*);

enum JPADynFlags {
	JPADYN_FixedDensity   = 0x1,
	JPADYN_FixedInterval  = 0x2,
	JPADYN_InheritScale   = 0x4,
	JPADYN_FollowEmtr     = 0x8,
	JPADYN_FollowEmtrChld = 0x10,
};

enum JPAVolType {
	JPAVOL_Cube     = 0,
	JPAVOL_Sphere   = 1,
	JPAVOL_Cylinder = 2,
	JPAVOL_Torus    = 3,
	JPAVOL_Point    = 4,
	JPAVOL_Circle   = 5,
	JPAVOL_Line     = 6,
};

enum JPAFieldBlockType {
	JPAFIELD_Gravity    = 0,
	JPAFIELD_Air        = 1,
	JPAFIELD_Magnet     = 2,
	JPAFIELD_Newton     = 3,
	JPAFIELD_Vortex     = 4,
	JPAFIELD_Random     = 5,
	JPAFIELD_Drag       = 6,
	JPAFIELD_Convection = 7,
	JPAFIELD_Spin       = 8,
};

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
	f32 getInitVelRatio() { return mData->mInitialVelRatio; }
	f32 getAirRes() { return mData->mAirResist; }
	f32 getMomentRndm() const { return mData->mMoment; }

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
		u8 _00[4];                   // _00
		u32 _04;                     // _04
		u32 _08;                     // _08
		JGeometry::TVec3f mOffset;   // _0C
		JGeometry::TVec3f mVelocity; // _18
		f32 mAmplitude;              // _24
		f32 mMagRndm;                // _28
		f32 mVal1;                   // _2C
		f32 mFadeInTime;             // _30
		f32 mFadeOutTime;            // _34
		f32 mEnTime;                 // _38
		f32 mDisTime;                // _3C
		u8 mCycle;                   // _40
	};

	JPAFieldBlock(const u8*, JKRHeap*);

	void init(JKRHeap*);

	// unused/inlined:
	void init_jpa(const u8*, JKRHeap*);

	inline u32 getSttFlag() const { return mData->_08 >> 16; }
	inline u32 getAddType() const { return (mData->_08 >> 8) & 0x3; }
	inline u32 getType() const { return mData->_08 & 0xF; }
	inline int checkStatus(u16 flag) { return getSttFlag() & flag; }

	inline JGeometry::TVec3f& getDir() { return mVelocity; } // should be const?
	inline JGeometry::TVec3f& getPos() { return mOffset; }

	inline f32 getMag() const { return mSpeed; }
	inline f32 getEnTime() const { return mData->mEnTime; }
	inline f32 getDisTime() const { return mData->mDisTime; }
	inline f32 getFadeOutTime() const { return mData->mFadeOutTime; }
	inline f32 getFadeInTime() const { return mData->mFadeInTime; }
	inline f32 getFadeOutRate() const { return mFadeOutRate; }
	inline f32 getFadeInRate() const { return mFadeInRate; }

	inline f32 getMagRndm() const { return mData->mMagRndm; }
	inline f32 getVal1() const { return mData->mVal1; }
	inline u16 getCycle() const { return mData->mCycle; }

	inline void getPosOrig(JGeometry::TVec3f* pos) const { *pos = mData->mOffset; }
	inline void getDirOrig(JGeometry::TVec3f* dir) const { *dir = mData->mVelocity; }
	inline f32 getMagOrig() const { return mData->mAmplitude; }

	const Data* mData;           // _00
	JPAFieldBase* mField;        // _04
	f32 mFadeInRate;             // _08
	f32 mFadeOutRate;            // _0C
	JGeometry::TVec3f mOffset;   // _10
	JGeometry::TVec3f mVelocity; // _1C
	f32 mSpeed;                  // _28
};

struct JPAKeyBlockData {
	u32 mMagic;        // _00
	u32 mBlockSize;    // _04
	u8 mFlag;          // _08
	u8 mKeyFrameCount; // _09
	u8 mIsLoopEnabled; // _0A
	u8 _0B;            // _0B
};

/**
 * @size{0x8}
 */
struct JPAKeyBlock {
	JPAKeyBlock(const u8*);

	f32 calc(f32);

	// Unused/inlined:
	void init_jpa(const u8*, JKRHeap*);

	const JPAKeyBlockData* mDataStart; // _00
	const f32* mKeyFrameData;          // _04
};

#endif
