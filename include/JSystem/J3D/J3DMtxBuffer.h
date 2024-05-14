#ifndef _JSYSTEM_J3D_J3DMTXBUFFER_H
#define _JSYSTEM_J3D_J3DMTXBUFFER_H

#include "Dolphin/mtx.h"
#include "Matrixf.h"
#include "JSystem/J3D/J3DTransform.h"
#include "types.h"

struct J3DJointTree;
struct J3DModelData;

struct J3DMtxBuffer {
	inline J3DMtxBuffer() { initialize(); }

	void initialize();
	int create(J3DModelData*, u32);
	int createAnmMtx(J3DModelData*);
	int createWeightEnvelopeMtx(J3DModelData*);
	int setNoUseDrawMtx();
	int createDoubleDrawMtx(J3DModelData*, u32);
	int createBumpMtxArray(J3DModelData*, u32);
	void calcWeightEnvelopeMtx();
	void calcDrawMtx(u32, const Vec&, const Mtx&);
	void calcNrmMtx();
	void calcBBoardMtx();

	MtxP getAnmMtx(int idx) const { return mWorldMatrices[idx]; }
	void setAnmMtx(int i, Mtx m) { PSMTXCopy(m, (MtxP)mWorldMatrices[i]); }
	MtxP getWeightAnmMtx(int idx) const { return mWeightEnvelopeMatrices[idx]; }
	MtxP getWorldMtx(int idx) { return mWorldMatrices[idx]; }
	inline Matrixf* getWorldMatrix(int i) { return (Matrixf*)mWorldMatrices[i]; }

	void setScaleFlag(int idx, u8 flag) { mScaleFlags[idx] = flag; }
	u32* getCurrentViewNoPtr() { return &mCurrentViewNumber; }
	u8* getScaleFlagArray() const { return mScaleFlags; }
	u8 getScaleFlag(u16 idx) const { return mScaleFlags[idx]; }
	u8 getEnvScaleFlag(int idx) const { return mEnvelopeScaleFlags[idx]; }
	Mtx** getDrawMtxPtrPtr() const { return mDrawMatrices[1]; }
	Mtx* getDrawMtxPtr() const { return mDrawMatrices[1][mCurrentViewNumber]; }
	Mtx* getDrawMtx(u16 idx) const { return &mDrawMatrices[1][mCurrentViewNumber][idx]; }
	Mtx33** getNrmMtxPtrPtr() const { return mNormMatrices[1]; }
	Mtx33* getNrmMtxPtr() const { return mNormMatrices[1][mCurrentViewNumber]; }
	Mtx33* getNrmMtx(u16 idx) const { return &mNormMatrices[1][mCurrentViewNumber][idx]; }
	Mtx33*** getBumpMtxPtrPtr() const { return mBumpMatrices[1]; }
	Mtx33* getBumpMtxPtr(int idx) const { return mBumpMatrices[1][idx][mCurrentViewNumber]; }

	void setNrmMtx(int p1, MtxP mtx) { J3DPSMtx33CopyFrom34(mtx, mNormMatrices[1][mCurrentViewNumber][p1]); }

	void swapDrawMtx()
	{
		Mtx* tmp                             = mDrawMatrices[0][mCurrentViewNumber];
		mDrawMatrices[0][mCurrentViewNumber] = mDrawMatrices[1][mCurrentViewNumber];
		mDrawMatrices[1][mCurrentViewNumber] = tmp;
	}

	void swapNrmMtx()
	{
		Mtx33* tmp                           = mNormMatrices[0][mCurrentViewNumber];
		mNormMatrices[0][mCurrentViewNumber] = mNormMatrices[1][mCurrentViewNumber];
		mNormMatrices[1][mCurrentViewNumber] = tmp;
	}

	static Mtx sNoUseDrawMtx;
	static Mtx33 sNoUseNrmMtx;
	static Mtx* sNoUseDrawMtxPtr;
	static Mtx33* sNoUseNrmMtxPtr;

	J3DJointTree* mJointTree;     // _00
	u8* mScaleFlags;              // _04
	u8* mEnvelopeScaleFlags;      // _08
	Mtx* mWorldMatrices;          // _0C
	Mtx* mWeightEnvelopeMatrices; // _10
	Mtx** mDrawMatrices[2];       // _14
	Mtx33** mNormMatrices[2];     // _1C
	Mtx33*** mBumpMatrices[2];    // _24
	u32 mViewCount;               // _2C
	u32 mCurrentViewNumber;       // _30

	// _34     = VTBL
	virtual ~J3DMtxBuffer() { } // _08 (weak)
};

#endif
