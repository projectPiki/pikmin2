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

	// fabricated:
	inline void setImageOffset(u32 offs, u32 id) { mRes[id].mImageDataOffset = (int)((offs + mRes[id].mImageDataOffset) - (u32)&mRes[id]); }
	inline void setPaletteOffset(u32 offs, u32 id) { mRes[id].mPaletteOffset = (int)((offs + mRes[id].mPaletteOffset) - (u32)&mRes[id]); }

	// _08 VTBL
};

#endif
