#ifndef _JSYSTEM_RESTIMG_H
#define _JSYSTEM_RESTIMG_H

#include "Dolphin/gx.h"
#include "types.h"

#ifndef _JUTTransparency
typedef u8 _JUTTransparency;
#endif

struct ResTIMG {

	inline void copyTo(ResTIMG* dest)
	{
		dest->mTextureFormat     = mTextureFormat;
		dest->mTransparency      = mTransparency;
		dest->mSizeX             = mSizeX;
		dest->mSizeY             = mSizeY;
		dest->mWrapS             = mWrapS;
		dest->mWrapT             = mWrapT;
		dest->mPaletteFormat     = mPaletteFormat;
		dest->mLutFormat         = mLutFormat;
		dest->mPaletteEntryCount = mPaletteEntryCount;
		dest->mPaletteOffset     = mPaletteOffset;
		dest->_10                = _10;
		dest->_11                = _11;
		dest->_12                = _12;
		dest->_13                = _13;
		dest->mMagFilterType     = mMagFilterType;
		dest->mMinFilterType     = mMinFilterType;
		dest->_16                = _16;
		dest->_17                = _17;
		dest->mTotalImageCount   = mTotalImageCount;
		dest->_19                = _19;
		dest->_1A                = _1A;
		dest->mImageDataOffset   = mImageDataOffset;
	}

	u8 mTextureFormat;              // _00
	_JUTTransparency mTransparency; // _01
	u16 mSizeX;                     // _02
	u16 mSizeY;                     // _04
	u8 mWrapS;                      // _06
	u8 mWrapT;                      // _07
	u8 mPaletteFormat;              // _08
	u8 mLutFormat;                  // _09
	u16 mPaletteEntryCount;         // _0A
	u32 mPaletteOffset;             // _0C
	GXBool _10;                     // _10
	GXBool _11;                     // _11
	GXBool _12;                     // _12
	GXBool _13;                     // _13
	u8 mMagFilterType;              // _14
	u8 mMinFilterType;              // _15
	char _16;                       // _16
	char _17;                       // _17
	u8 mTotalImageCount;            // _18
	u8 _19;                         // _19, unknown
	short _1A;                      // _1A
	int mImageDataOffset;           // _1C
};

struct ResTIMGPair {
	ResTIMG _00;
	ResTIMG _20;
};

#endif
