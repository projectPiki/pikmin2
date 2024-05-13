#ifndef _SYSSHAPE_MODELMGR_H
#define _SYSSHAPE_MODELMGR_H

#include "IDelegate.h"
#include "types.h"

struct J3DModelData;
struct JKRSolidHeap;

namespace SysShape {
struct Model;

struct ModelMgr {
	ModelMgr(int modelDataLimit, J3DModelData** modelData, int heapLimit, u32 p4, u32 p5, IDelegate1<Model*>* delegate);

	int calcMaximumModelSize();
	int calcModelSize(J3DModelData* modelData);
	Model* createModel(int modelIndex, int heapIndex);

	int mModelDataLimit;           // _00
	J3DModelData** mModelData;     // _04
	int mHeapLimit;                // _08
	JKRSolidHeap** mHeaps;         // _0C
	u32 mModelFlags;               // _10
	u32 mViewNum;                  // _14
	IDelegate1<Model*>* mDelegate; // _18
};
} // namespace SysShape

#endif
