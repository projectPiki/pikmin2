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
	u16 mNum;      // _00
	ResTIMG* mRes; // _04

	/** @fabricated */
	inline J3DTexture(u16 count, ResTIMG* res)
	{
		mNum = count;
		mRes = res;
	}

	virtual ~J3DTexture(); // _08 (weak)

	u16 getNum() const { return mNum; }
	ResTIMG* getResTIMG(u16 entry) const { return &mRes[entry]; }

	// fabricated:
	inline void setImageOffset(u32 format) { mRes[0].mImageDataOffset = (int)((format + mRes[0].mImageDataOffset) - (u32)&mRes[0]); }
	inline void setImageOffset2(u32 format) { mRes[1].mImageDataOffset = (int)((format + mRes[1].mImageDataOffset) - (u32)&mRes[1]); }
	inline void setPaletteOffset(u32 format) { mRes[0].mPaletteOffset = (int)((format + mRes[0].mPaletteOffset) - (u32)&mRes[0]); }
	inline void setPaletteOffset2(u32 format) { mRes[1].mPaletteOffset = (int)((format + mRes[1].mPaletteOffset) - (u32)&mRes[1]); }

	// _08 VTBL
};

#endif
