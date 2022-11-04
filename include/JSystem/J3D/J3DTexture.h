#ifndef _J3DTEXTURE_H
#define _J3DTEXTURE_H

#include "types.h"
#include "JSystem/ResTIMG.h"

struct ResTIMG;
struct ResTIMGPair;

struct _UnknownJ3DTextureParent {
	u16 _00;      // _00
	u16 _02;      // _02
	ResTIMG* _04; // _04
};

/**
 * @size{0xC}
 */
struct J3DTexture : _UnknownJ3DTextureParent {
	/** @fabricated */
	inline J3DTexture(u16 p1, ResTIMG* res)
	{
		_00 = p1;
		_02 = 0;
		_04 = res;
	}

	virtual ~J3DTexture(); // _08 (weak)

	// fabricated:
	inline void setImageOffset(u32 format) { _04[0].m_imageDataOffset = (int)((format + _04[0].m_imageDataOffset) - (u32)&_04[0]); }
	inline void setImageOffset2(u32 format) { _04[1].m_imageDataOffset = (int)((format + _04[1].m_imageDataOffset) - (u32)&_04[1]); }
	inline void setPaletteOffset(u32 format) { _04[0].m_paletteOffset = (int)((format + _04[0].m_paletteOffset) - (u32)&_04[0]); }
	inline void setPaletteOffset2(u32 format) { _04[1].m_paletteOffset = (int)((format + _04[1].m_paletteOffset) - (u32)&_04[1]); }

	// _08 VTBL
};

#endif
