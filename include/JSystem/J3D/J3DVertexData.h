#ifndef _JSYSTEM_J3D_J3DVERTEXDATA_H
#define _JSYSTEM_J3D_J3DVERTEXDATA_H

#include "Dolphin/gx.h"

/**
 * @size{0x5C} (proven by virtue of being last member of J3DModelData)
 */
struct J3DVertexData {
	J3DVertexData();

	// Unused/inlined:
	bool isDeformablePositionFormat();
	bool isDeformableNormalFormat();
	bool isCpuSkinningPositionFormat();
	bool isCpuSkinningNormalFormat();

	void* getVtxPosArray() const { return mVtxPos; }
	void* getVtxNrmArray() const { return mVtxNorm; }
	GXColor* getVtxColorArray(u8 idx) const { return mVtxColor[idx]; }
	void* getVtxTexCoordArray(u8 idx) const { return mVtxTexCoord[idx]; }
	void* getVtxNBTArray() const { return mVtxNBT; }
	u32 getColNum() const { return mColorNum; }
	u32 getNrmNum() const { return mNormNum; }
	u32 getVtxNum() const { return mVtxNum; }
	GXVtxAttrFmtList* getVtxAttrFmtList() { return mVtxAttrFmtList; }

	GXCompType getVtxPosType() const { return mVtxPosType; }
	GXCompType getVtxNrmType() const { return mVtxNrmType; }

	void setVtxPosFrac(u8 frac) { mVtxPosFrac = frac; }
	void setVtxPosType(GXCompType type) { mVtxPosType = type; }
	void setVtxNrmFrac(u8 frac) { mVtxNrmFrac = frac; }
	void setVtxNrmType(GXCompType type) { mVtxNrmType = type; }

	u32 mVtxNum;                       // _00
	u32 mNormNum;                      // _04
	u32 mColorNum;                     // _08
	u32 mTexCoordNum;                  // _0C
	u32 mPacketNum;                    // _10
	GXVtxAttrFmtList* mVtxAttrFmtList; // _14
	void* mVtxPos;                     // _18
	void* mVtxNorm;                    // _1C
	void* mVtxNBT;                     // _20
	GXColor* mVtxColor[2];             // _24
	void* mVtxTexCoord[8];             // _2C
	u8 mVtxPosFrac;                    // _4C
	GXCompType mVtxPosType;            // _50
	u8 mVtxNrmFrac;                    // _54
	GXCompType mVtxNrmType;            // _58
};

#endif
