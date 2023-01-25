#ifndef _JSYSTEM_J3D_J3DSHAPEFACTORY_H
#define _JSYSTEM_J3D_J3DSHAPEFACTORY_H

#include "Dolphin/gx.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "JSystem/J3D/J3DShape.h"
#include "types.h"

struct J3DShapeFactory {
	J3DShapeFactory(const J3DShapeBlock&);

	J3DShape* create(int, u32, _GXVtxDescList*);
	J3DShapeMtx* newShapeMtx(u32, int, int) const;
	J3DShapeDraw* newShapeDraw(int, int) const;
	void allocVcdVatCmdBuffer(u32);
	int calcSize(int, u32);
	int calcSizeVcdVatCmdBuffer(u32);
	int calcSizeShapeMtx(u32, int, int) const;

	J3DShapeInitData* mInitData;                // _00
	u16* mInitDataIndices;                      // _04
	_GXVtxDescList* mVtxDescLists;              // _08
	u16* _0C;                                   // _0C
	u8* _10;                                    // _10
	struct J3DShapeMtxInitData* mMtxInitData;   // _14
	struct J3DShapeDrawInitData* mDrawInitData; // _18
	void* _1C;                                  // _1C
};

#endif
