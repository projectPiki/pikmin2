#ifndef _SYSSHAPE_MODELMGR_H
#define _SYSSHAPE_MODELMGR_H

#include "IDelegate.h"
#include "types.h"

struct J3DModelData;
struct JKRSolidHeap;

namespace SysShape {
struct Model;

struct ModelMgr {
	ModelMgr(int, J3DModelData**, int, u32, u32, IDelegate1<Model*>*);

	int calcMaximumModelSize();
	int calcModelSize(J3DModelData*);
	Model* createModel(int, int);

	int mModelDataLimit;           // _00
	J3DModelData** mModelData;     // _04
	int mHeapLimit;                // _08
	JKRSolidHeap** mHeaps;         // _0C
	u32 _10;                       // _10
	u32 _14;                       // _14
	IDelegate1<Model*>* mDelegate; // _18
};
} // namespace SysShape

#endif
