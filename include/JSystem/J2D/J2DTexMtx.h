#ifndef _JSYSTEM_J2D_J2DTEXMTX_H
#define _JSYSTEM_J2D_J2DTEXMTX_H

#include "Dolphin/mtx.h"
#include "Dolphin/vec.h"
#include "JSystem/J2D/J2DTypes.h"
#include "types.h"

struct J2DTexMtxInfo {
	enum DCCType { // from TP
		DCC_None = 0,
		DCC_Maya = 1,
	};

	inline void operator=(const J2DTexMtxInfo& other)
	{
		mCenter         = other.mCenter;
		mTexMtxType     = other.mTexMtxType;
		mTexMtxDCC      = other.mTexMtxDCC;
		mTextureSRTInfo = other.mTextureSRTInfo;
	}

	GXTexMtxType getTexMtxType() const { return (GXTexMtxType)mTexMtxType; }

	u8 mTexMtxType;                    // _00
	u8 mTexMtxDCC;                     // _01
	u16 _02;                           // _02, padding
	Vec mCenter;                       // _04
	J2DTextureSRTInfo mTextureSRTInfo; // _10
};

extern J2DTexMtxInfo const j2dDefaultTexMtxInfo;

/**
 * @size{0x54}
 */
struct J2DTexMtx {
	J2DTexMtx() { mInfo = j2dDefaultTexMtxInfo; }
	J2DTexMtx(const J2DTexMtxInfo& info)
	{
		mInfo.mCenter.x                     = info.mCenter.x;
		mInfo.mCenter.y                     = info.mCenter.y;
		mInfo.mCenter.z                     = info.mCenter.z;
		mInfo.mTexMtxType                   = info.mTexMtxType;
		mInfo.mTexMtxDCC                    = info.mTexMtxDCC;
		mInfo.mTextureSRTInfo.mScaleX       = info.mTextureSRTInfo.mScaleX;
		mInfo.mTextureSRTInfo.mScaleY       = info.mTextureSRTInfo.mScaleY;
		mInfo.mTextureSRTInfo.mRotationDeg  = info.mTextureSRTInfo.mRotationDeg;
		mInfo.mTextureSRTInfo.mTranslationX = info.mTextureSRTInfo.mTranslationX;
		mInfo.mTextureSRTInfo.mTranslationY = info.mTextureSRTInfo.mTranslationY;
	}

	inline ~J2DTexMtx() { } // unused/inlined

	void load(u32);
	void calc();
	void getTextureMtx(const J2DTextureSRTInfo&, Vec, Mtx);
	void getTextureMtxMaya(const J2DTextureSRTInfo&, Mtx);

	J2DTexMtxInfo& getTexMtxInfo() { return mInfo; }
	void setTexMtxInfo(J2DTexMtxInfo info)
	{
		mInfo.mCenter.x                     = info.mCenter.x;
		mInfo.mCenter.y                     = info.mCenter.y;
		mInfo.mCenter.z                     = info.mCenter.z;
		mInfo.mTexMtxType                   = info.mTexMtxType;
		mInfo.mTexMtxDCC                    = info.mTexMtxDCC;
		mInfo.mTextureSRTInfo.mScaleX       = info.mTextureSRTInfo.mScaleX;
		mInfo.mTextureSRTInfo.mScaleY       = info.mTextureSRTInfo.mScaleY;
		mInfo.mTextureSRTInfo.mRotationDeg  = info.mTextureSRTInfo.mRotationDeg;
		mInfo.mTextureSRTInfo.mTranslationX = info.mTextureSRTInfo.mTranslationX;
		mInfo.mTextureSRTInfo.mTranslationY = info.mTextureSRTInfo.mTranslationY;
	}

	J2DTexMtxInfo mInfo; // _00
	Mtx mMtx;            // _24
};

#endif
