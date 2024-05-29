#ifndef _JSYSTEM_JPA_JPAEMITTER_H
#define _JSYSTEM_JPA_JPAEMITTER_H

#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JMath.h"
#include "JSystem/JParticle/JPANode.h"
#include "JSystem/JParticle/JPAResource.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JUtility/TColor.h"
#include "JSystem/JParticle/JPABlock.h"
#include "JSystem/JParticle/JPAMath.h"
#include "types.h"
#include "Color4.h"
#include "Vector3.h"

struct JPABaseEmitter;
struct JPAEmitterWorkData;
struct JPAEmitterManager;
struct JPAEmitterCallBack;
struct JPAParticleCallBack;

struct JPADrawInfo {
	Mtx mtx1;
	Mtx mtx2;
};

enum JPAEmitterFlags {
	JPAEMIT_StopEmitting        = 0x1,
	JPAEMIT_StopCalc            = 0x2,
	JPAEMIT_StopDraw            = 0x4,
	JPAEMIT_EnableDeleteEmitter = 0x8,
	JPAEMIT_FirstEmit           = 0x10,
	JPAEMIT_RateStepEmit        = 0x20,
	JPAEMIT_Immortal            = 0x40,
	JPAEMIT_DrawChild           = 0x80,
	JPAEMIT_ForceDelete         = 0x100,
	JPAEMIT_Unk10               = 0x200,
};

struct JPABaseParticle {
	void init_p(JPAEmitterWorkData*);
	void init_c(JPAEmitterWorkData*, JPABaseParticle*);
	bool calc_p(JPAEmitterWorkData*);
	bool calc_c(JPAEmitterWorkData*);
	bool canCreateChild(JPAEmitterWorkData*);
	f32 getCalcCurrentPositionX(const JPABaseEmitter*) const;
	f32 getCalcCurrentPositionY(const JPABaseEmitter*) const;
	f32 getCalcCurrentPositionZ(const JPABaseEmitter*) const;

	// unused/inlined:
	//~JPABaseParticle();
	f32 getWidth(const JPABaseEmitter*) const;
	f32 getHeight(const JPABaseEmitter*) const;

	int getAge() { return mAge; }
	void setOffsetPosition(const JGeometry::TVec3<f32>& pos) { mOffsetPosition.set(pos); }
	void setOffsetPosition(f32 x, f32 y, f32 z) { mOffsetPosition.set(x, y, z); }
	void getOffsetPosition(JGeometry::TVec3<f32>& pos) { pos.set(mOffsetPosition); }
	u16 getRotateAngle() const { return mRotateAngle; }
	void getGlobalPosition(JGeometry::TVec3<f32>& pos) const { pos.set(mPosition); }
	f32 getParticleScaleX() const { return mParticleScaleX; }
	f32 getParticleScaleY() const { return mParticleScaleY; }
	void initStatus(u32 val) { mFlags = val; }
	void setStatus(u32 flag) { mFlags |= flag; }
	u32 checkStatus(u32 flag) { return mFlags & flag; }
	void setInvisibleParticleFlag() { setStatus(8); }
	void setDeleteParticleFlag() { setStatus(2); }
	void getVelVec(JGeometry::TVec3<f32>& vec) const { vec.set(mVelocity); }
	void getLocalPosition(JGeometry::TVec3<f32>& vec) const { vec.set(mLocalPosition); }

	JGeometry::TVec3f mPosition;       // _00
	JGeometry::TVec3f mLocalPosition;  // _0C
	JGeometry::TVec3f mOffsetPosition; // _18
	JGeometry::TVec3f mVelocity;       // _24
	JGeometry::TVec3f mVelType1;       // _30
	JGeometry::TVec3f mVelType0;       // _3C
	JGeometry::TVec3f mVelType2;       // _48
	JGeometry::TVec3f mBaseAxis;       // _54
	f32 mParticleScaleX;               // _60
	f32 mParticleScaleY;               // _64
	f32 mScaleOut;                     // _68
	f32 mAlphaWaveRandom;              // _6C
	f32 mMoment;                       // _70
	f32 mDrag;                         // _74
	u32 _78;                           // _78
	uint mFlags;                       // _7C
	s16 mAge;                          // _80
	s16 mLifeTime;                     // _82
	f32 mTime;                         // _84
	u16 mRotateAngle;                  // _88
	s16 mRotateSpeed;                  // _8A
	GXColor mPrmClr;                   // _8C
	GXColor mEnvClr;                   // _90
	u8 mTexAnmIdx;                     // _94
	u8 mAnmRandom;                     // _95
	u8 mPrmColorAlphaAnm;              // _96
};

struct JPAParticleCallBack {
	virtual ~JPAParticleCallBack() = 0;                         // _08
	virtual void execute(JPABaseEmitter*, JPABaseParticle*) { } // _0C (weak)
	virtual void draw(JPABaseEmitter*, JPABaseParticle*) { }    // _10 (weak)
};

struct JPABaseEmitter {
	JPABaseEmitter()
	    : mLink(this)
	{
	}

	~JPABaseEmitter() { }

	void init(JPAEmitterManager*, struct JPAResource*);
	JPABaseParticle* createParticle();
	JPABaseParticle* createChild(JPABaseParticle*);
	void deleteAllParticle();
	bool processTillStartFrame();
	bool processTermination();
	void calcEmitterGlobalPosition(JGeometry::TVec3f*) const;
	int getCurrentCreateNumber() const;

	// unused/inlined:
	void getEmitterAxisX(JGeometry::TVec3f*) const;
	void getEmitterAxisY(JGeometry::TVec3f*) const;
	void getEmitterAxisZ(JGeometry::TVec3f*) const;
	int getDrawCount() const;
	void loadTexture(u8, _GXTexMapID);

	u32 getParticleNumber() { return mAlivePtclBase.getNum() + mAlivePtclChld.getNum(); }

	void initFlag(u32 flag) { mFlags = flag; }
	void setFlag(u32 flag) { mFlags |= flag; }
	bool isFlag(u32 flag) const { return mFlags & flag; }
	void resetFlag(u32 flag) { mFlags &= ~flag; }

	inline void setScale(f32 scale)
	{
		mGlobalScl.set(scale, scale, scale);
		mGlobalPScl.x = scale;
		mGlobalPScl.y = scale;
	}

	inline void setScale(JGeometry::TVec3f& vec)
	{
		mGlobalScl    = vec;
		mGlobalPScl.x = vec.x;
		mGlobalPScl.y = vec.y;
	}

	inline void setScale(f32 scaleXY, f32 scaleZ)
	{
		mGlobalScl.set(scaleXY, scaleXY, scaleZ);
		mGlobalPScl.x = scaleXY;
		mGlobalPScl.y = scaleXY;
	}

	inline void setScaleOnly(Vector3f& scale)
	{
		mGlobalScl.x = scale.x;
		mGlobalScl.y = scale.y;
		mGlobalScl.z = scale.z;
	}

	inline void setScaleOnly(f32 scale) { mGlobalScl.set(scale, scale, scale); }

	inline void setGlobalScale(f32 x, f32 y)
	{
		mGlobalPScl.x = x;
		mGlobalPScl.y = y;
	}

	inline void setAngle(f32 x, f32 y, f32 z)
	{
		mLocalDir.x = x;
		mLocalDir.y = y;
		mLocalDir.z = z;
	}

	inline void setAngle(JGeometry::TVec3f* vec)
	{
		mLocalDir.x = vec->x;
		mLocalDir.y = vec->y;
		mLocalDir.z = vec->z;
	}

	inline void setScaleMain(JGeometry::TVec3f& vec)
	{
		mLocalScl.x = vec.x;
		mLocalScl.y = vec.y;
		mLocalScl.z = vec.z;
	}

	inline void setScaleMain(Vector3f& vec)
	{
		mLocalScl.x = vec.x;
		mLocalScl.y = vec.y;
		mLocalScl.z = vec.z;
	}

	inline void setScaleMain(f32 x, f32 y, f32 z)
	{
		mLocalScl.x = x;
		mLocalScl.y = y;
		mLocalScl.z = z;
	}

	inline void setGlobalScale(f32 x)
	{
		mGlobalPScl.x = x;
		mGlobalPScl.y = x;
	}

	inline void setColor(Color4& color)
	{
		mGlobalPrmClr.r = color.r;
		mGlobalPrmClr.g = color.g;
		mGlobalPrmClr.b = color.b;
		mGlobalPrmClr.a = color.a;
	}

	inline void setColorRGB(Color4& color)
	{
		mGlobalPrmClr.r = color.r;
		mGlobalPrmClr.g = color.g;
		mGlobalPrmClr.b = color.b;
	}

	inline void setColorRGB(u8 r, u8 g, u8 b)
	{
		mGlobalPrmClr.r = r;
		mGlobalPrmClr.g = g;
		mGlobalPrmClr.b = b;
	}

	inline void setEnvColorRGB(u8 r, u8 g, u8 b)
	{
		mGlobalEnvClr.r = r;
		mGlobalEnvClr.g = g;
		mGlobalEnvClr.b = b;
	}

	inline void setColorRGB(JUtility::TColor& color)
	{
		mGlobalEnvClr.r = color.r;
		mGlobalEnvClr.g = color.g;
		mGlobalEnvClr.b = color.b;
	}

	inline void setPrmColorRGB(JUtility::TColor& color)
	{
		mGlobalPrmClr.r = color.r;
		mGlobalPrmClr.g = color.g;
		mGlobalPrmClr.b = color.b;
	}

	inline void setPrmColorRGB(u8 r, u8 g, u8 b)
	{
		mGlobalPrmClr.r = r;
		mGlobalPrmClr.g = g;
		mGlobalPrmClr.b = b;
	}

	inline void setPrmColor(JUtility::TColor& color)
	{
		setPrmColorRGB(color.r, color.g, color.b);
		mGlobalPrmClr.a = color.a;
	}

	inline void setPrmColor(Color4& color)
	{
		setPrmColorRGB(color.r, color.g, color.b);
		mGlobalPrmClr.a = color.a;
	}

	inline void setTranslation(f32 x, f32 y, f32 z)
	{
		mGlobalTrs.x = x;
		mGlobalTrs.y = y;
		mGlobalTrs.z = z;
	}

	bool checkDynFlag(u32 flag) { return !!(mResource->getDyn()->getFlag() & flag); }
	u8 getResourceManagerID() const { return mResMgrID; }
	u8 getGroupID() const { return mGroupID; }
	u8 getDrawTimes() const { return mDrawTimes; }
	void setRate(f32 rate) { mRate = rate; }
	void setEmitterCallBackPtr(JPAEmitterCallBack* ptr) { mEmitterCallback = ptr; }
	void setGlobalRTMatrix(const Mtx m) { JPASetRMtxTVecfromMtx(m, mGlobalRot, &mGlobalTrs); }
	void setGlobalRMatrix(const Mtx m) { JPASetRMtxfromMtx(m, mGlobalRot); }
	void setGlobalTranslation(f32 x, f32 y, f32 z) { mGlobalTrs.set(x, y, z); }
	void setGlobalTranslation(JGeometry::TVec3f& vec) { mGlobalTrs.set(vec); }
	void getLocalTranslation(JGeometry::TVec3f& vec) { vec.set(mLocalTrs); }
	void setGlobalRotation(const JGeometry::TVec3<s16>& rot) { JPAGetXYZRotateMtx(rot.x, rot.y, rot.z, mGlobalRot); }
	void setGlobalAlpha(u8 alpha) { mGlobalPrmClr.a = alpha; }
	u8 getGlobalAlpha() { return mGlobalPrmClr.a; }
	void getGlobalPrmColor(GXColor& color) { color = mGlobalPrmClr; }
	void setGlobalPrmColor(u8 r, u8 g, u8 b)
	{
		mGlobalPrmClr.r = r;
		mGlobalPrmClr.g = g;
		mGlobalPrmClr.b = b;
	}
	void setGlobalEnvColor(u8 r, u8 g, u8 b)
	{
		mGlobalEnvClr.r = r;
		mGlobalEnvClr.g = g;
		mGlobalEnvClr.b = b;
	}
	void setVolumeSize(u16 size) { mVolumeSize = size; }
	void setLifeTime(s16 lifetime) { mLifeTime = lifetime; }
	u32 getAge() const { return mCurrentFrame; }

	f32 getRandF32() { return mRandom.getRandF32(); }
	f32 getRandZP() { return mRandom.getRandZP(); }
	f32 getRandZH() { return mRandom.getRandZH(); }
	s16 getRandS16() { return mRandom.getRandS16(); }

	JGeometry::TVec3f mLocalScl;             // _00
	JGeometry::TVec3f mLocalTrs;             // _0C
	JGeometry::TVec3f mLocalDir;             // _18
	s32 mMaxFrame;                           // _24
	f32 mRate;                               // _28
	f32 mVolumeSweep;                        // _2C
	f32 mVolumeMinRad;                       // _30
	f32 mAwayFromCenterSpeed;                // _34
	f32 mAwayFromAxisSpeed;                  // _38
	f32 mDirSpeed;                           // _3C
	f32 mSpread;                             // _40
	f32 mRndmDirSpeed;                       // _44
	f32 mAirResist;                          // _48
	JGeometry::TVec3<s16> mLocalRot;         // _4C
	s16 mLifeTime;                           // _52
	u16 mVolumeSize;                         // _54
	u8 mRateStep;                            // _56
	JSULink<JPABaseEmitter> mLink;           // _58
	Mtx mGlobalRot;                          // _68
	JGeometry::TVec3f mGlobalScl;            // _98
	JGeometry::TVec3f mGlobalTrs;            // _A4
	JGeometry::TVec2f mGlobalPScl;           // _B0
	GXColor mGlobalPrmClr;                   // _B8, NEEDS TO BE GXCOLOR
	GXColor mGlobalEnvClr;                   // _BC, NEEDS TO BE GXCOLOR
	s32 mpUserWork;                          // _C0
	JPARandom mRandom;                       // _C4
	JPAList<JPABaseParticle> mAlivePtclBase; // _C8
	JPAList<JPABaseParticle> mAlivePtclChld; // _D4
	JPAList<JPABaseParticle>* mPtclPool;     // _E0
	JPAEmitterManager* mManager;             // _E4
	JPAResource* mResource;                  // _E8
	JPAEmitterCallBack* mEmitterCallback;    // _EC
	JPAParticleCallBack* mParticleCallback;  // _F0
	u32 mFlags;                              // _F4
	f32 mEmitCount;                          // _F8
	f32 mScaleOut;                           // _FC
	u32 mCurrentFrame;                       // _100
	s16 mWaitTime;                           // _104
	s16 mRateStepTimer;                      // _106
	GXColor mPrmClr;                         // _108
	GXColor mEnvClr;                         // _10C
	u8 mDrawTimes;                           // _110
	u8 mTexAnmIdx;                           // _111
	u8 mGroupID;                             // _112
	u8 mResMgrID;                            // _113
};

struct JPAEmitterCallBack {
	virtual ~JPAEmitterCallBack() = 0;             // _08
	virtual void execute(JPABaseEmitter*) { }      // _0C (weak)
	virtual void executeAfter(JPABaseEmitter*) { } // _10 (weak)
	virtual void draw(JPABaseEmitter*) { }         // _14 (weak)
	virtual void drawAfter(JPABaseEmitter*) { }    // _18 (weak)

	// not sure how this works with the pure virtual dtor
	// ~JPAEmitterCallBack();

	// _00 = VTBL
};

/**
 * @size{0x218}
 */
struct JPAEmitterWorkData {
	JPABaseEmitter* mEmitter;              // _00
	JPAResource* mResource;                // _04
	JPAResourceManager* mResourceMgr;      // _08
	JPARandom mRndm;                       // _0C
	JGeometry::TVec3f mVolumePos;          // _10
	JGeometry::TVec3f mVelOmni;            // _1C
	JGeometry::TVec3f mVelAxis;            // _28
	f32 mVolumeSize;                       // _34
	f32 mVolumeMinRad;                     // _38
	f32 mVolumeSweep;                      // _3C
	int mCreateNumber;                     // _40
	int mVolumeEmitIdx;                    // _44
	Mtx mDirectionMtx;                     // _48
	Mtx mRotationMtx;                      // _78
	Mtx mGlobalRot;                        // _A8
	Mtx mGlobalSR;                         // _D8
	JGeometry::TVec3f mEmitterPos;         // _108
	JGeometry::TVec3f mGlobalScl;          // _114
	JGeometry::TVec3f mGlobalEmtrDir;      // _120
	JGeometry::TVec3f mPublicScale;        // _12C
	JGeometry::TVec3f mGlobalPos;          // _138
	JGeometry::TVec2f mGlobalPtclScl;      // _144
	JGeometry::TVec2f mPivot;              // _14C
	Mtx mYBBCamMtx;                        // _154
	Mtx mPosCamMtx;                        // _184
	Mtx mPrjMtx;                           // _1B4
	JPAList<JPABaseParticle>* mpAlivePtcl; // _1E4
	JPANode<JPABaseParticle>* mpCurNode;   // _1E8
	int mVolumeAngleNum;                   // _1EC
	int mVolumeAngleMax;                   // _1F0
	int mVolumeX;                          // _1F4
	int mDivNumber;                        // _1F8
	f32 mScaleAnm;                         // _1FC
	int mDirType;                          // _200
	int mRotType;                          // _204
	int mPlaneType;                        // _208
	int mDLType;                           // _20C
	int mProjectionType;                   // _210
	s16 mClrKeyFrame;                      // _214
	u8 mDrawCount;                         // _216
};

/**
 * @size{0x30}
 */
struct JPAEmitterManager {
	JPAEmitterManager(u32, u32, JKRHeap*, u8, u8);

	JPABaseEmitter* createSimpleEmitterID(const JGeometry::TVec3f&, u16, u8, u8, JPAEmitterCallBack*, JPAParticleCallBack*);
	void calc();
	void draw(const JPADrawInfo*, u8);
	void forceDeleteAllEmitter();
	void forceDeleteGroupEmitter(u8);
	void forceDeleteEmitter(JPABaseEmitter*);
	void entryResourceManager(JPAResourceManager*, u8);
	void clearResourceManager(u8);
	void calcYBBCam();

	// unused/inlined:
	void createSimpleEmitter(const JGeometry::TVec3f&, u16, JPAEmitterCallBack*, JPAParticleCallBack*);
	void calc(u8);
	void draw(Mtx, u8);
	void draw(const JPADrawInfo*);
	void draw(Mtx);

	JPAResourceManager* getResourceManager(u16 idx) { return mResMgrAry[idx]; }

	JSUList<JPABaseEmitter>* mGrpEmtr;     // _00
	JSUList<JPABaseEmitter> mFreeEmtrList; // _04
	JPAList<JPABaseParticle> mPtclPool;    // _10
	JPAResourceManager** mResMgrAry;       // _1C
	JPAEmitterWorkData* mWorkData;         // _20
	uint mEmtrMax;                         // _24
	uint mPtclMax;                         // _28
	u8 mGrpMax;                            // _2C
	u8 mResMax;                            // _2D
};

#endif
