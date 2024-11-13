#ifndef _J3DTEXTURE_H
#define _J3DTEXTURE_H

#include "types.h"
#include "JSystem/ResTIMG.h"

struct ResTIMG;
struct ResTIMGPair;

/**
 * @size{0xC}
 */
struct J3DTexture {
	u16 mNum; // _00
	u16 _02;
	ResTIMG* mRes; // _04

	/** @fabricated */
	inline J3DTexture(u16 count, ResTIMG* res)
	{
		mNum = count;
		_02  = 0;
		mRes = res;
	}

	virtual ~J3DTexture() { } // _08 (weak)

	u16 getNum() const { return mNum; }
	ResTIMG* getResTIMG(u32 entry) const { return &mRes[entry]; }

	// Use this to replace a texture with a new one
	inline void changeImage(const ResTIMG* image, u16 index)
	{
		mRes[index] = *image;

		mRes[index].mImageDataOffset = (int)(((u32)image + mRes[index].mImageDataOffset) - (u32)&mRes[index]);
		mRes[index].mPaletteOffset   = (int)(((u32)image + mRes[index].mPaletteOffset) - (u32)&mRes[index]);
	}

	// _08 VTBL
};

#endif
