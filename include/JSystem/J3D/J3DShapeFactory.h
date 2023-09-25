#ifndef _JSYSTEM_J3D_J3DSHAPEFACTORY_H
#define _JSYSTEM_J3D_J3DSHAPEFACTORY_H

#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "JSystem/J3D/J3DShape.h"
#include "types.h"

struct J3DShapeMtxInitData {
	u16 mUseMtxIndex;      // _00
	u16 mUseMtxCount;      // _02
	u32 mFirstUseMtxIndex; // _04
};

struct J3DShapeDrawInitData {
	u32 mDisplayListSize;  // _00
	u32 mDisplayListIndex; // _04
};

struct J3DShapeFactory {
	J3DShapeFactory(const J3DShapeBlock&);

	J3DShape* create(int, u32, _GXVtxDescList*);
	J3DShapeMtx* newShapeMtx(u32, int, int) const;
	J3DShapeDraw* newShapeDraw(int, int) const;
	void allocVcdVatCmdBuffer(u32);
	int calcSize(int, u32);
	int calcSizeVcdVatCmdBuffer(u32);
	int calcSizeShapeMtx(u32, int, int) const;

	u32 getMtxGroupNum(int no) const { return mInitData[mInitDataIndices[no]].mMtxGroupNum; }
	GXVtxDescList* getVtxDescList(int no) const
	{
		return (GXVtxDescList*)((u8*)mVtxDescLists + mInitData[mInitDataIndices[no]].mVtxDescListIndex);
	}
	f32 getRadius(int no) const { return mInitData[mInitDataIndices[no]].mRadius; }
	JGeometry::TVec3f& getMin(int no) const { return mInitData[mInitDataIndices[no]].mMin; }
	JGeometry::TVec3f& getMax(int no) const { return mInitData[mInitDataIndices[no]].mMax; }

	J3DShapeInitData* mInitData;         // _00
	u16* mInitDataIndices;               // _04
	GXVtxDescList* mVtxDescLists;        // _08
	u16* mMtxTable;                      // _0C
	u8* mDisplayListData;                // _10
	J3DShapeMtxInitData* mMtxInitData;   // _14
	J3DShapeDrawInitData* mDrawInitData; // _18
	u8* mVcdVatCmdBuffer;                // _1C
};

#endif
